// BlueprintGeneratedClass MarkActor.MarkActor_C
// Size: 0x259 (Inherited: 0x220)
struct AMarkActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Sphere; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct UMarkWidget_C* MarkWidget; // 0x238(0x08)
	bool bWarning; // 0x240(0x01)
	bool bEnermy; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct FMarkResult MarkResult; // 0x248(0x10)
	bool TurnWarning; // 0x258(0x01)

	void OnRep_TurnWarning(); // Function MarkActor.MarkActor_C.OnRep_TurnWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRep_MarkResult(); // Function MarkActor.MarkActor_C.OnRep_MarkResult // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MULTIMARK(); // Function MarkActor.MarkActor_C.MULTIMARK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function MarkActor.MarkActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function MarkActor.MarkActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveDestroyed(); // Function MarkActor.MarkActor_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_MarkActor(int32_t EntryPoint); // Function MarkActor.MarkActor_C.ExecuteUbergraph_MarkActor // (Final|UbergraphFunction) // @ game+0x1556ec0
};

