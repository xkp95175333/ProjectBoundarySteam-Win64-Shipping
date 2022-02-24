// BlueprintGeneratedClass PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C
// Size: 0x610 (Inherited: 0x5c0)
struct APBAutoDefenceSystem_BP_C : APBAutoDefenceSystem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct UStaticMeshComponent* Sphere; // 0x5c8(0x08)
	struct UStaticMeshComponent* SphereCollison; // 0x5d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x5d8(0x08)
	float Timeline_1_Timeline_ADS_1_826D22184905517DDBED78BADD6A7D6D; // 0x5e0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_826D22184905517DDBED78BADD6A7D6D; // 0x5e4(0x01)
	char pad_5E5[0x3]; // 0x5e5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x5e8(0x08)
	float Timeline_0_Timeline_ADS_0_9E25056648EBEBAF4BC484B0E2F1BC9D; // 0x5f0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_9E25056648EBEBAF4BC484B0E2F1BC9D; // 0x5f4(0x01)
	char pad_5F5[0x3]; // 0x5f5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x5f8(0x08)
	struct UParticleSystemComponent* ParticleEmitter; // 0x600(0x08)
	struct UNiagaraComponent* NiagaraSystem; // 0x608(0x08)

	void UserConstructionScript(); // Function PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Timeline_0__FinishedFunc(); // Function PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_0__UpdateFunc(); // Function PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_1__FinishedFunc(); // Function PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_1__UpdateFunc(); // Function PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void K2_ActivatedSkill(); // Function PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C.K2_ActivatedSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnEquip(struct AActor* NewOwner); // Function PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C.K2_OnEquip // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DeactivatedSkill(); // Function PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C.K2_DeactivatedSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterceptSuccess(struct FVector InHitPoint); // Function PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C.K2_InterceptSuccess // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBAutoDefenceSystem_BP(int32_t EntryPoint); // Function PBAutoDefenceSystem_BP.PBAutoDefenceSystem_BP_C.ExecuteUbergraph_PBAutoDefenceSystem_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

