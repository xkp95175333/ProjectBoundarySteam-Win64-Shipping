// BlueprintGeneratedClass SimpleRotObject_BP.SimpleRotObject_BP_C
// Size: 0x250 (Inherited: 0x220)
struct ASimpleRotObject_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	struct FRotator Rotating Rate; // 0x238(0x0c)
	char pad_244[0x4]; // 0x244(0x04)
	struct UStaticMesh* Static Mesh; // 0x248(0x08)

	void UserConstructionScript(); // Function SimpleRotObject_BP.SimpleRotObject_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function SimpleRotObject_BP.SimpleRotObject_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_SimpleRotObject_BP(int32_t EntryPoint); // Function SimpleRotObject_BP.SimpleRotObject_BP_C.ExecuteUbergraph_SimpleRotObject_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

