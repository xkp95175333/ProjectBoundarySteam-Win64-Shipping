// BlueprintGeneratedClass Component_DamageIndicator.Component_DamageIndicator_C
// Size: 0xf0 (Inherited: 0xb0)
struct UComponent_DamageIndicator_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UNiagaraSystem* NS_Arrow; // 0xb8(0x08)
	struct UPBCharacterSkeletalMeshComponent* OwnerMeshFP; // 0xc0(0x08)
	struct UNiagaraSystem* NS_Arrow_BackPack; // 0xc8(0x08)
	float DamageDecayRateInS; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct FUStruct_DamageIndicatorOverallDamage> ArrowsArray; // 0xd8(0x10)
	struct AGAC_BP_C* OwnerGacBP; // 0xe8(0x08)

	void CalDamageAccumlationPerPlayer(float InDeltaSeconds); // Function Component_DamageIndicator.Component_DamageIndicator_C.CalDamageAccumlationPerPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BeHit(struct APawn* Pawn, float Damage, bool IsBackPack); // Function Component_DamageIndicator.Component_DamageIndicator_C.BeHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function Component_DamageIndicator.Component_DamageIndicator_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function Component_DamageIndicator.Component_DamageIndicator_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Component_DamageIndicator(int32_t EntryPoint); // Function Component_DamageIndicator.Component_DamageIndicator_C.ExecuteUbergraph_Component_DamageIndicator // (Final|UbergraphFunction) // @ game+0x1556ec0
};

