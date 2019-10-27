<<<<<<< HEAD
#pragma once

#include "GrassActor.h"
#include "MapReaderActor.h"
#include "Util.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include <queue>
#include <unordered_map>
#include <vector>

#include "GrassSpawnActor.generated.h"


UCLASS()
class MYPROJECT4_API AGrassSpawnActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGrassSpawnActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable,
		meta = (DisplayName = "Update Grass",
			CompactNodeTitle = "UpdateGrass",
			Keywords = "graph grass update"),
		Category = Game)
		void UpdateGrass(AMapReaderActor* MapReader, AActor *Planet, UStaticMeshComponent *MeshComponent, TArray<AActor*> Players);

private:
	UClass* GrassActorClass{ nullptr };
	std::unordered_map<uint32_t, AGrassActor*> GrassActors;

	UFUNCTION(BlueprintCallable,
		meta = (DisplayName = "Set Grass Actor Class",
			CompactNodeTitle = "SetGrassActorClass",
			Keywords = "grass actor class"),
		Category = Game)
		void SetGrassActorClass(UClass *Class);
};
=======
#pragma once

#include "GrassActor.h"
#include "MapReaderActor.h"
#include "Util.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include <queue>
#include <unordered_map>
#include <vector>

#include "GrassSpawnActor.generated.h"


UCLASS()
class MYPROJECT4_API AGrassSpawnActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGrassSpawnActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable,
		meta = (DisplayName = "Update Grass",
			CompactNodeTitle = "UpdateGrass",
			Keywords = "graph grass update"),
		Category = Game)
		void UpdateGrass(AMapReaderActor* MapReader, AActor *Planet, UStaticMeshComponent *MeshComponent, TArray<AActor*> Players);

private:
	UClass* GrassActorClass{ nullptr };
	std::unordered_map<uint32_t, AGrassActor*> GrassActors;

	UFUNCTION(BlueprintCallable,
		meta = (DisplayName = "Set Grass Actor Class",
			CompactNodeTitle = "SetGrassActorClass",
			Keywords = "grass actor class"),
		Category = Game)
		void SetGrassActorClass(UClass *Class);
};
>>>>>>> 88a71db473d0d7a530acac0be6ed63b2c751b839
