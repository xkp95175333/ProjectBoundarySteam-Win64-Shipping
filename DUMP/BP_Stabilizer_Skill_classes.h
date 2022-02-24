// BlueprintGeneratedClass BP_Stabilizer_Skill.BP_Stabilizer_Skill_C
// Size: 0x60c (Inherited: 0x5b0)
struct ABP_Stabilizer_Skill_C : APBStabilizerSkillModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x5b8(0x08)
	struct AStablizer_Mesh_BP_C* arm; // 0x5c0(0x08)
	struct FVector WeaponOriginalNormalRotationBounceScaler; // 0x5c8(0x0c)
	struct FVector WeaponOriginalNormalTranslationBounceScaler; // 0x5d4(0x0c)
	struct FVector WeaponOriginalTargetingRotationBounceScaler; // 0x5e0(0x0c)
	struct FVector WeaponOriginalTargetingTranslationBounceScaler; // 0x5ec(0x0c)
	float NoiseRotationRate; // 0x5f8(0x04)
	float NoiseRotationOffsetRate; // 0x5fc(0x04)
	float BounceScaler; // 0x600(0x04)
	float OriginalPostFireDurationScaler; // 0x604(0x04)
	float PostFireDurationScalerBySkill; // 0x608(0x04)

	void GetMKIII_ABP(struct UMKIII_ABP_C* MKIII_ABP); // Function BP_Stabilizer_Skill.BP_Stabilizer_Skill_C.GetMKIII_ABP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void InitMyArm(); // Function BP_Stabilizer_Skill.BP_Stabilizer_Skill_C.InitMyArm // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveDestroyed(); // Function BP_Stabilizer_Skill.BP_Stabilizer_Skill_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnEquip(struct AActor* NewOwner); // Function BP_Stabilizer_Skill.BP_Stabilizer_Skill_C.K2_OnEquip // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ActivatedSkill(); // Function BP_Stabilizer_Skill.BP_Stabilizer_Skill_C.K2_ActivatedSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DeactivatedSkill(); // Function BP_Stabilizer_Skill.BP_Stabilizer_Skill_C.K2_DeactivatedSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_BP_Stabilizer_Skill(int32_t EntryPoint); // Function BP_Stabilizer_Skill.BP_Stabilizer_Skill_C.ExecuteUbergraph_BP_Stabilizer_Skill // (Final|UbergraphFunction) // @ game+0x1556ec0
};

