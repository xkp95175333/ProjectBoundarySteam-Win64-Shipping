// WidgetBlueprintGeneratedClass UMG_CustomizeInfo.UMG_CustomizeInfo_C
// Size: 0x311 (Inherited: 0x2a8)
struct UUMG_CustomizeInfo_C : UPBRoleCustomizeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* ArmsSwitch; // 0x2b0(0x08)
	struct UWidgetAnimation* ReleaseArmsBox; // 0x2b8(0x08)
	struct UVerticalBox* ArmsBox; // 0x2c0(0x08)
	struct UTextBlock* RoleLevelText; // 0x2c8(0x08)
	struct UTextBlock* RoleName; // 0x2d0(0x08)
	struct UImage* SignImage_2; // 0x2d8(0x08)
	struct UUMG_CollectiveInfo1_C* UMG_CollectiveInfo1; // 0x2e0(0x08)
	struct UUMG_RoleListTitleArmory_C* UMG_RoleListTitleArmory; // 0x2e8(0x08)
	struct UUMG_ShortRoleInfo_C* UMG_SingleRoleInArmory_1; // 0x2f0(0x08)
	struct UUMG_WeaponInfo_C* UMG_WeaponInfo; // 0x2f8(0x08)
	struct FName xxx; // 0x300(0x08)
	struct UUMG_ModifyList_C* ModifyListWidget; // 0x308(0x08)
	bool Show Anim; // 0x310(0x01)

	void SwitchArmsBox(); // Function UMG_CustomizeInfo.UMG_CustomizeInfo_C.SwitchArmsBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_CustomizeInfo.UMG_CustomizeInfo_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DisplayCharacter(); // Function UMG_CustomizeInfo.UMG_CustomizeInfo_C.DisplayCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetEnterComponent(bool bShowAnim); // Function UMG_CustomizeInfo.UMG_CustomizeInfo_C.K2_SetEnterComponent // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InitComponentList(); // Function UMG_CustomizeInfo.UMG_CustomizeInfo_C.K2_InitComponentList // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetRoleInfo(); // Function UMG_CustomizeInfo.UMG_CustomizeInfo_C.K2_SetRoleInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_CustomizeInfo(int32_t EntryPoint); // Function UMG_CustomizeInfo.UMG_CustomizeInfo_C.ExecuteUbergraph_UMG_CustomizeInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

