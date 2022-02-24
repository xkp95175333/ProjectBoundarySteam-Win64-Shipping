// BlueprintGeneratedClass PBGrenadeLauncher_Longrange_BP.PBGrenadeLauncher_Longrange_BP_C
// Size: 0x6a0 (Inherited: 0x680)
struct APBGrenadeLauncher_Longrange_BP_C : APBLauncher_Deploy_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UPBFireComponent_Projectile* PBFireComponent_Projectile; // 0x688(0x08)
	struct UParticleSystem* FireMuzzle_VFX; // 0x690(0x08)
	struct USoundCue* Fire; // 0x698(0x08)

	void K2_SimuilateFire(); // Function PBGrenadeLauncher_Longrange_BP.PBGrenadeLauncher_Longrange_BP_C.K2_SimuilateFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBGrenadeLauncher_Longrange_BP(int32_t EntryPoint); // Function PBGrenadeLauncher_Longrange_BP.PBGrenadeLauncher_Longrange_BP_C.ExecuteUbergraph_PBGrenadeLauncher_Longrange_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

