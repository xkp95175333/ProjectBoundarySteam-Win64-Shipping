// BlueprintGeneratedClass BP_HiddenSkill.BP_HiddenSkill_C
// Size: 0x60c (Inherited: 0x5d8)
struct ABP_HiddenSkill_C : APBHiddenSkillModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x5e0(0x08)
	float OriginalRecoilScaler; // 0x5e8(0x04)
	struct FVector PrivotOriginalNormalRotationBounceScaler; // 0x5ec(0x0c)
	struct FVector PrivotOriginalTargetingRotationBounceScaler; // 0x5f8(0x0c)
	float OriginalRecoilScalerBySkill; // 0x604(0x04)
	float BounceScaler; // 0x608(0x04)

	void K2_OnEquip(struct AActor* NewOwner); // Function BP_HiddenSkill.BP_HiddenSkill_C.K2_OnEquip // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ActivatedSkill(); // Function BP_HiddenSkill.BP_HiddenSkill_C.K2_ActivatedSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DeactivatedSkill(); // Function BP_HiddenSkill.BP_HiddenSkill_C.K2_DeactivatedSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_BP_HiddenSkill(int32_t EntryPoint); // Function BP_HiddenSkill.BP_HiddenSkill_C.ExecuteUbergraph_BP_HiddenSkill // (Final|UbergraphFunction) // @ game+0x1556ec0
};

