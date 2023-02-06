#pragma once
#include "Affine.h"

class Shader;

class SkyBox
{
public:
	SkyBox();
	~SkyBox();
	void Draw(Matrix& ndcMat);
private:
	unsigned skyboxVao;
	unsigned skyboxVbo;
	unsigned textureId;
	Shader* skyboxShader;
};