// BlueprintGeneratedClass PBLauncher_Deploy_BP.PBLauncher_Deploy_BP_C
// Size: 0x680 (Inherited: 0x638)
struct APBLauncher_Deploy_BP_C : APBLauncher_Deploy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x638(0x08)
	struct UPBProjectilePathTracer_BP_C* ProjectilePathTracer; // 0x640(0x08)
	struct UFireRecoil_C* FireRocoil; // 0x648(0x08)
	float Recoil; // 0x650(0x04)
	int32_t Direction; // 0x654(0x04)
	struct FName LeftArm_UndeployingCollision; // 0x658(0x08)
	struct FName RightArm_UndeployingCollision; // 0x660(0x08)
	struct FName LeftArm_DeployingCollision; // 0x668(0x08)
	struct FName RightArm_DeployingCollision; // 0x670(0x08)
	struct APBProjectile* ProjectileClass; // 0x678(0x08)

	void Fired(); // Function PBLauncher_Deploy_BP.PBLauncher_Deploy_BP_C.Fired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimuilateFire(); // Function PBLauncher_Deploy_BP.PBLauncher_Deploy_BP_C.K2_SimuilateFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Fired(); // Function PBLauncher_Deploy_BP.PBLauncher_Deploy_BP_C.K2_Fired // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnEquip(); // Function PBLauncher_Deploy_BP.PBLauncher_Deploy_BP_C.K2_OnEquip // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deploying(); // Function PBLauncher_Deploy_BP.PBLauncher_Deploy_BP_C.K2_Deploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Undeploying(); // Function PBLauncher_Deploy_BP.PBLauncher_Deploy_BP_C.K2_Undeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Standby(); // Function PBLauncher_Deploy_BP.PBLauncher_Deploy_BP_C.K2_Standby // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Ready(); // Function PBLauncher_Deploy_BP.PBLauncher_Deploy_BP_C.K2_Ready // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBLauncher_Deploy_BP(int32_t EntryPoint); // Function PBLauncher_Deploy_BP.PBLauncher_Deploy_BP_C.ExecuteUbergraph_PBLauncher_Deploy_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

