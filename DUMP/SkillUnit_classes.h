// WidgetBlueprintGeneratedClass SkillUnit.SkillUnit_C
// Size: 0x2d0 (Inherited: 0x280)
struct USkillUnit_C : UPBSingleRoleInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* Refresh; // 0x288(0x08)
	struct UImage* AbilityIcon; // 0x290(0x08)
	struct UTextBlock* AbilityName; // 0x298(0x08)
	struct UTextBlock* AbilityText; // 0x2a0(0x08)
	struct UTextBlock* TitleText; // 0x2a8(0x08)
	bool FirstSkill; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FText Title; // 0x2b8(0x18)

	void K2_SetRoleInfo(); // Function SkillUnit.SkillUnit_C.K2_SetRoleInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void PlayRefreshAnim(); // Function SkillUnit.SkillUnit_C.PlayRefreshAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function SkillUnit.SkillUnit_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_SkillUnit(int32_t EntryPoint); // Function SkillUnit.SkillUnit_C.ExecuteUbergraph_SkillUnit // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

