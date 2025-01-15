#include "PreCompile.h"
#include "TestRenderer.h"

UTestRenderer::UTestRenderer()
{
	CreateRenderUnit();
	SetMesh("TestMesh");
	SetMaterial("MyTestMaterial");
}

UTestRenderer::~UTestRenderer()
{
}

