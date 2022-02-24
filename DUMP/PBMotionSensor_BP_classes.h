// BlueprintGeneratedClass PBMotionSensor_BP.PBMotionSensor_BP_C
// Size: 0x718 (Inherited: 0x6e8)
struct APBMotionSensor_BP_C : APBMotionSensor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6e8(0x08)
	struct UStaticMeshComponent* scanPoint; // 0x6f0(0x08)
	struct UStaticMeshComponent* redlight; // 0x6f8(0x08)
	struct USphereComponent* Sphere; // 0x700(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x708(0x08)
	struct APBMotionScanActor_BP_C* scanLine; // 0x710(0x08)

	void UserConstructionScript(); // Function PBMotionSensor_BP.PBMotionSensor_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBMotionSensor_BP.PBMotionSensor_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void HasScannedEnemy(bool InBool); // Function PBMotionSensor_BP.PBMotionSensor_BP_C.HasScannedEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartScan(); // Function PBMotionSensor_BP.PBMotionSensor_BP_C.K2_StartScan // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StopScan(); // Function PBMotionSensor_BP.PBMotionSensor_BP_C.K2_StopScan // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PBMotionSensor_BP.PBMotionSensor_BP_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBMotionSensor_BP(int32_t EntryPoint); // Function PBMotionSensor_BP.PBMotionSensor_BP_C.ExecuteUbergraph_PBMotionSensor_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

