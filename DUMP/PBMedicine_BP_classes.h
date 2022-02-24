// BlueprintGeneratedClass PBMedicine_BP.PBMedicine_BP_C
// Size: 0x718 (Inherited: 0x700)
struct APBMedicine_BP_C : APBMedicine {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct USphereComponent* Sphere; // 0x708(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x710(0x08)

	void UserConstructionScript(); // Function PBMedicine_BP.PBMedicine_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MulticastSpawnEffect(); // Function PBMedicine_BP.PBMedicine_BP_C.MulticastSpawnEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartScan(); // Function PBMedicine_BP.PBMedicine_BP_C.K2_StartScan // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBMedicine_BP(int32_t EntryPoint); // Function PBMedicine_BP.PBMedicine_BP_C.ExecuteUbergraph_PBMedicine_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

