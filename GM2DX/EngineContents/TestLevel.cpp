#include "PreCompile.h"
#include "TestLevel.h"
#include <EngineCore/CameraActor.h>
#include "TestActor.h"
#include <EnginePlatform/EngineInput.h>


ATestLevel::ATestLevel()
{
	std::shared_ptr<ACameraActor> Camera = GetWorld()->GetMainCamera();
	Camera->SetActorLocation({ 0.0f, 0.0f, -1000.0f, 1.0f });

	Actor = GetWorld()->SpawnActor<ATestActor>();
}

ATestLevel::~ATestLevel()
{
}

void ATestLevel::BeginPlay()
{
	AActor::BeginPlay();
}

void ATestLevel::Tick(float _DeltaTime)
{
	AActor::Tick(_DeltaTime);

	Actor->AddActorRotation({ 0.0f, 0.0f, 180.0f * _DeltaTime });
	//Actor->AddActorRotation({ 0.0f, 180.0f * _DeltaTime, 0.0f });
	//Actor->SetActorRotation({ 0.0f, 180.0f, 0.0f });

	if (UEngineInput::IsDown('P'))
	{
		GetWorld()->GetMainCamera()->FreeCameraSwitch();
	}

}

