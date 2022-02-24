// WidgetBlueprintGeneratedClass UMG_EquipingTips.UMG_EquipingTips_C
// Size: 0x3f8 (Inherited: 0x3d8)
struct UUMG_EquipingTips_C : UMainMenuWidget_Base_C {
	struct UImage* Coins; // 0x3d8(0x08)
	struct UImage* Image_895; // 0x3e0(0x08)
	struct UTextBlock* Requirement; // 0x3e8(0x08)
	struct UTextBlock* Unlock_Description; // 0x3f0(0x08)

	void SetPointUnlockInfo(int32_t NeedPoint); // Function UMG_EquipingTips.UMG_EquipingTips_C.SetPointUnlockInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetLevelUnlockInfo(int32_t Level); // Function UMG_EquipingTips.UMG_EquipingTips_C.SetLevelUnlockInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetChallengeUnlockInfo(struct FString ChanllengeID); // Function UMG_EquipingTips.UMG_EquipingTips_C.SetChallengeUnlockInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Info(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId); // Function UMG_EquipingTips.UMG_EquipingTips_C.Set Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

