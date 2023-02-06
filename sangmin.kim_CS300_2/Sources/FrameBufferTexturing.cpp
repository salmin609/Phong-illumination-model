#include "FrameBufferTexturing.h"
#include "Texture.h"
#include <GL/glew.h>

#include "Client.h"

FrameBuffer::FrameBuffer()
{
	const int width = Client::windowWidth;
	const int height = Client::windowHeight;
	glGenFramebuffers(1, &framebufferId);
	glBindFramebuffer(GL_FRAMEBUFFER, framebufferId);

	texture = new Texture();

	glGenTextures(1, &depthId);
	glBindTexture(GL_TEXTURE_2D, depthId);
	glTexStorage2D(GL_TEXTURE_2D, 1, GL_DEPTH24_STENCIL8, width, height);
	
	glFramebufferTexture(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, texture->GetTextureId(), 0);
	glFramebufferTexture(GL_FRAMEBUFFER, GL_DEPTH_STENCIL_ATTACHMENT, depthId, 0);

	static const GLenum drawBuffers[] = { GL_COLOR_ATTACHMENT0 };
	glDrawBuffers(1, drawBuffers);

	UnBind();
}

unsigned FrameBuffer::TextureId()
{
	return texture->GetTextureId();
}

unsigned FrameBuffer::DepthTextureId()
{
	return depthId;
}

void FrameBuffer::Bind()
{
	glBindFramebuffer(GL_FRAMEBUFFER, framebufferId);
	glViewport(0, 0, Client::windowWidth, Client::windowHeight);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void FrameBuffer::UnBind()
{
	glBindFramebuffer(GL_FRAMEBUFFER, 0);
}

void FrameBuffer::Use(unsigned vaoId, unsigned shaderId)
{
	glUseProgram(shaderId);
	glBindVertexArray(vaoId);
	glDisable(GL_DEPTH_TEST);
	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture->GetTextureId());
	glDrawArrays(GL_TRIANGLES, 0, 6);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}
