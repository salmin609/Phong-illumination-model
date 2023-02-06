#pragma once

class Texture;
class FrameBuffer
{
public:
	FrameBuffer();
	unsigned TextureId();
	unsigned DepthTextureId();
	void Bind();
	void UnBind();
	void Use(unsigned vaoId, unsigned shaderId);
private:
	Texture* texture;
	unsigned depthId;
	unsigned renderId;
	unsigned framebufferId;
};