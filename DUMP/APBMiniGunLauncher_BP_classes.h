// BlueprintGeneratedClass APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C
// Size: 0x6e8 (Inherited: 0x680)
struct AAPBMiniGunLauncher_BP_C : APBLauncher_Deploy_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UPBFireComponent_RayProjectile* PBFireComponent_RayProjectile; // 0x688(0x08)
	struct UStaticMeshComponent* Barrel_1P; // 0x690(0x08)
	struct UStaticMeshComponent* Barrel_3P; // 0x698(0x08)
	float Timeline_2_BerralRoll_6210E3F14EFA805E7D10469AE3642F68; // 0x6a0(0x04)
	enum class ETimelineDirection Timeline_2__Direction_6210E3F14EFA805E7D10469AE3642F68; // 0x6a4(0x01)
	char pad_6A5[0x3]; // 0x6a5(0x03)
	struct UTimelineComponent* Timeline_3; // 0x6a8(0x08)
	struct UParticleSystem* FireMuzzle_VFX; // 0x6b0(0x08)
	struct USoundCue* Fire; // 0x6b8(0x08)
	struct UAudioComponent* MotorVFX; // 0x6c0(0x08)
	float RollScaler; // 0x6c8(0x04)
	char pad_6CC[0x4]; // 0x6cc(0x04)
	struct UAudioComponent* FireSound_AC; // 0x6d0(0x08)
	struct UAudioComponent* Left_AC; // 0x6d8(0x08)
	struct UAudioComponent* Right_AC; // 0x6e0(0x08)

	void StopFire(); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.StopFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartFire(); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.StartFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_AdjustedAim(struct FVector Origin, struct FVector ShootDir); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.K2_AdjustedAim // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Timeline_2__FinishedFunc(); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_2__UpdateFunc(); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void ReceiveDestroyed(); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimuilateFire(); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.K2_SimuilateFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimulateStartFire(); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.K2_SimulateStartFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimulateStopFire(); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.K2_SimulateStopFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deploying(); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.K2_Deploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Undeploying(); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.K2_Undeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_APBMiniGunLauncher_BP(int32_t EntryPoint); // Function APBMiniGunLauncher_BP.APBMiniGunLauncher_BP_C.ExecuteUbergraph_APBMiniGunLauncher_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

