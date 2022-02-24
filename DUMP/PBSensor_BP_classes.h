// BlueprintGeneratedClass PBSensor_BP.PBSensor_BP_C
// Size: 0x708 (Inherited: 0x6f0)
struct APBSensor_BP_C : APBSensor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct USkeletalMeshComponent* Sensor_Skinned_Mesh; // 0x6f8(0x08)
	struct USphereComponent* Sphere; // 0x700(0x08)

	void UserConstructionScript(); // Function PBSensor_BP.PBSensor_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartScan(); // Function PBSensor_BP.PBSensor_BP_C.K2_StartScan // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void SpwanEffect(); // Function PBSensor_BP.PBSensor_BP_C.SpwanEffect // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBSensor_BP(int32_t EntryPoint); // Function PBSensor_BP.PBSensor_BP_C.ExecuteUbergraph_PBSensor_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

