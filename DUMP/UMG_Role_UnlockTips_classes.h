// WidgetBlueprintGeneratedClass UMG_Role_UnlockTips.UMG_Role_UnlockTips_C
// Size: 0x408 (Inherited: 0x3d8)
struct UUMG_Role_UnlockTips_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UImage* Image_141; // 0x3e0(0x08)
	struct UImage* Image_238; // 0x3e8(0x08)
	struct UImage* Image_895; // 0x3f0(0x08)
	struct UTextBlock* Requirement; // 0x3f8(0x08)
	struct UTextBlock* Unlock_Description; // 0x400(0x08)

	void SetPointUnlockInfo(int32_t NeedPoint); // Function UMG_Role_UnlockTips.UMG_Role_UnlockTips_C.SetPointUnlockInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetLevelUnlockInfo(int32_t Level); // Function UMG_Role_UnlockTips.UMG_Role_UnlockTips_C.SetLevelUnlockInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetChallengeUnlockInfo(struct FString ChanllengeID); // Function UMG_Role_UnlockTips.UMG_Role_UnlockTips_C.SetChallengeUnlockInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Info(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId); // Function UMG_Role_UnlockTips.UMG_Role_UnlockTips_C.Set Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Role_UnlockTips.UMG_Role_UnlockTips_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Role_UnlockTips(int32_t EntryPoint); // Function UMG_Role_UnlockTips.UMG_Role_UnlockTips_C.ExecuteUbergraph_UMG_Role_UnlockTips // (Final|UbergraphFunction) // @ game+0x1556ec0
};

