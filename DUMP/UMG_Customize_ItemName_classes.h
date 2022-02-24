// WidgetBlueprintGeneratedClass UMG_Customize_ItemName.UMG_Customize_ItemName_C
// Size: 0x298 (Inherited: 0x268)
struct UUMG_Customize_ItemName_C : UPBUserWidget {
	struct UTextBlock* TextBlock_Substance_Details; // 0x268(0x08)
	struct UTextBlock* TextBlock_Substance_Name; // 0x270(0x08)
	struct UUMG_EquipingTips_C* UMG_EquipingTips; // 0x278(0x08)
	struct UUMG_UnlockedTips_C* UMG_UnlockedTips; // 0x280(0x08)
	struct UUMG_UnlockRequirementTips_C* UMG_UnlockRequirementTips; // 0x288(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x290(0x08)

	void SetWeaponPartInfo(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId, enum class EPBSlotType InSlotType, enum class EPBPartSlotType InPartSlotType); // Function UMG_Customize_ItemName.UMG_Customize_ItemName_C.SetWeaponPartInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetWeaponInfo(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId, enum class EPBSlotType InSlotType); // Function UMG_Customize_ItemName.UMG_Customize_ItemName_C.SetWeaponInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

