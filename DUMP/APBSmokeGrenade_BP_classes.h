// BlueprintGeneratedClass APBSmokeGrenade_BP.APBSmokeGrenade_BP_C
// Size: 0x6d9 (Inherited: 0x6b8)
struct AAPBSmokeGrenade_BP_C : APBSmokeGrenade {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UStaticMeshComponent* Sphere; // 0x6c0(0x08)
	struct UStaticMeshComponent* AreaMesh; // 0x6c8(0x08)
	struct APBPlayerState* NewVar_1; // 0x6d0(0x08)
	bool AmIOwner?; // 0x6d8(0x01)

	void ReceiveTick(float DeltaSeconds); // Function APBSmokeGrenade_BP.APBSmokeGrenade_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_APBSmokeGrenade_BP(int32_t EntryPoint); // Function APBSmokeGrenade_BP.APBSmokeGrenade_BP_C.ExecuteUbergraph_APBSmokeGrenade_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

