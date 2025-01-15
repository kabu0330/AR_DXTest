#pragma once
#include <EngineCore/GameMode.h>

// ���� :
class ATestLevel : public AGameMode
{
public:
	// constrcuter destructer
	ATestLevel();
	~ATestLevel();

	// delete Function
	ATestLevel(const ATestLevel& _Other) = delete;
	ATestLevel(ATestLevel&& _Other) noexcept = delete;
	ATestLevel& operator=(const ATestLevel& _Other) = delete;
	ATestLevel& operator=(ATestLevel&& _Other) noexcept = delete;

	void BeginPlay() override;
	void Tick(float _DeltaTime) override;

protected:

private:
	std::shared_ptr<class ATestActor> Actor;
};

