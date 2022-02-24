// WidgetBlueprintGeneratedClass UMG_UnlockRequirementTips.UMG_UnlockRequirementTips_C
// Size: 0x400 (Inherited: 0x3d8)
struct UUMG_UnlockRequirementTips_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UImage* Coins; // 0x3e0(0x08)
	struct UImage* Image_895; // 0x3e8(0x08)
	struct UTextBlock* Requirement; // 0x3f0(0x08)
	struct UTextBlock* Unlock_Description; // 0x3f8(0x08)

	void SetPointUnlockInfo(int32_t NeedPoint); // Function UMG_UnlockRequirementTips.UMG_UnlockRequirementTips_C.SetPointUnlockInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetLevelUnlockInfo(int32_t Level); // Function UMG_UnlockRequirementTips.UMG_UnlockRequirementTips_C.SetLevelUnlockInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetChallengeUnlockInfo(struct FString ChanllengeID); // Function UMG_UnlockRequirementTips.UMG_UnlockRequirementTips_C.SetChallengeUnlockInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Info(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId); // Function UMG_UnlockRequirementTips.UMG_UnlockRequirementTips_C.Set Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_UnlockRequirementTips.UMG_UnlockRequirementTips_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_UnlockRequirementTips(int32_t EntryPoint); // Function UMG_UnlockRequirementTips.UMG_UnlockRequirementTips_C.ExecuteUbergraph_UMG_UnlockRequirementTips // (Final|UbergraphFunction) // @ game+0x1556ec0
};

