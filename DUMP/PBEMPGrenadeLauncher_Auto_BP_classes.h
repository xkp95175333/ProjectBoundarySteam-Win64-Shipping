// BlueprintGeneratedClass PBEMPGrenadeLauncher_Auto_BP.PBEMPGrenadeLauncher_Auto_BP_C
// Size: 0x6a0 (Inherited: 0x680)
struct APBEMPGrenadeLauncher_Auto_BP_C : APBLauncher_Deploy_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UPBFireComponent_Projectile* PBFireComponent_Projectile; // 0x688(0x08)
	struct USceneComponent* OriginParent; // 0x690(0x08)
	struct UParticleSystem* FireMuzzle_VFX; // 0x698(0x08)

	void K2_SimuilateFire(); // Function PBEMPGrenadeLauncher_Auto_BP.PBEMPGrenadeLauncher_Auto_BP_C.K2_SimuilateFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBEMPGrenadeLauncher_Auto_BP(int32_t EntryPoint); // Function PBEMPGrenadeLauncher_Auto_BP.PBEMPGrenadeLauncher_Auto_BP_C.ExecuteUbergraph_PBEMPGrenadeLauncher_Auto_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

