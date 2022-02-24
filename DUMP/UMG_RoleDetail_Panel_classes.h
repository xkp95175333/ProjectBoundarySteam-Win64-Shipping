// WidgetBlueprintGeneratedClass UMG_RoleDetail_Panel.UMG_RoleDetail_Panel_C
// Size: 0x300 (Inherited: 0x268)
struct UUMG_RoleDetail_Panel_C : UPBUserWidget {
	struct UImage* Classicon_frame; // 0x268(0x08)
	struct UImage* icon_frame; // 0x270(0x08)
	struct UImage* icon_frame_2; // 0x278(0x08)
	struct UImage* Image_234; // 0x280(0x08)
	struct UImage* Image_Ability_2; // 0x288(0x08)
	struct UImage* Image_Ability_3; // 0x290(0x08)
	struct UImage* Image_Icon; // 0x298(0x08)
	struct UPBWidgetSwitcher* PBWidgetSwitcher_Lock; // 0x2a0(0x08)
	struct UTextBlock* Text_Ability_2; // 0x2a8(0x08)
	struct UTextBlock* Text_Ability_3; // 0x2b0(0x08)
	struct UTextBlock* Text_Ability_1_Des; // 0x2b8(0x08)
	struct UTextBlock* Text_Ability_2_Des; // 0x2c0(0x08)
	struct UTextBlock* Text_CareerName; // 0x2c8(0x08)
	struct UTextBlock* Text_CharacterDes; // 0x2d0(0x08)
	struct UTextBlock* Text_CharacterName; // 0x2d8(0x08)
	struct UUMG_PropertyLevel_C* UMG_ArmorLevel; // 0x2e0(0x08)
	struct UUMG_PropertyLevel_C* UMG_HealthLevel; // 0x2e8(0x08)
	struct UUMG_PropertyLevel_C* UMG_MobilityLevel; // 0x2f0(0x08)
	struct UUMG_Role_UnlockTips_C* UMG_Role_UnlockTips; // 0x2f8(0x08)

	void SetAbilityInfo(int32_t InIndex, struct FText InAbilityName, struct TSoftObjectPtr<struct UTexture2D> InAbilityImage, struct FText InAbilityDes); // Function UMG_RoleDetail_Panel.UMG_RoleDetail_Panel_C.SetAbilityInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(struct FName InRoleID, bool InIsLocked); // Function UMG_RoleDetail_Panel.UMG_RoleDetail_Panel_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

