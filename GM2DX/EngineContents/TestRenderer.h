#pragma once
#include <EngineCore/Renderer.h>
#include "MyCustomRenderer.h"


// Ό³Έν :
class UTestRenderer : public URenderer
{
public:
	// constrcuter destructer
	UTestRenderer();
	~UTestRenderer();

	// delete Function
	UTestRenderer(const UTestRenderer& _Other) = delete;
	UTestRenderer(UTestRenderer&& _Other) noexcept = delete;
	UTestRenderer& operator=(const UTestRenderer& _Other) = delete;
	UTestRenderer& operator=(UTestRenderer&& _Other) noexcept = delete;

protected:

private:
};

