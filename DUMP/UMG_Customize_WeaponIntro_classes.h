// WidgetBlueprintGeneratedClass UMG_Customize_WeaponIntro.UMG_Customize_WeaponIntro_C
// Size: 0x280 (Inherited: 0x268)
struct UUMG_Customize_WeaponIntro_C : UPBUserWidget {
	struct UWidgetAnimation* ShowAnimation; // 0x268(0x08)
	struct UUMG_Customize_ItemName_C* UMG_Customize_ItemName; // 0x270(0x08)
	struct UUMG_WeaponPropertyDetail_C* UMG_WeaponPropertyDetail; // 0x278(0x08)

	void SetWeaponPartInfo(bool ChangingSlot, struct FName InItemID, struct FName InRoleID, struct FName InWeaponId, enum class EPBSlotType InSlotType, enum class EPBPartSlotType InPartSlotType); // Function UMG_Customize_WeaponIntro.UMG_Customize_WeaponIntro_C.SetWeaponPartInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetWeaponInfo(bool ChangingSlot, struct FName InItemID, struct FName InRoleID, struct FName InWeaponId, enum class EPBSlotType InSlotType); // Function UMG_Customize_WeaponIntro.UMG_Customize_WeaponIntro_C.SetWeaponInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

