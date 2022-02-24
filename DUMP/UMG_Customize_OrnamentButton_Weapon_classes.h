// WidgetBlueprintGeneratedClass UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C
// Size: 0x330 (Inherited: 0x2c8)
struct UUMG_Customize_OrnamentButton_Weapon_C : UUMG_Customize_SkinButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct FPBWeaponOrnament_UI UI; // 0x2d0(0x60)

	void GetIsLocked(bool bIsLocked); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.GetIsLocked // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetWeaponID(struct FName OutSkinID); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.GetWeaponID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetIsEquipped(bool bIsEquipped); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.GetIsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetSkinID(struct FName OutSkinID); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.GetSkinID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetRoleID(struct FName OutRoleID); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.GetRoleID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetGrade(enum class EPBItemGradeType Grade); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.GetGrade // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetTexture(struct UTexture2D* Texture); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.GetTexture // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetText(struct FText Text); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.GetText // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Refresh(); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnEquipSkin(struct FDelegate Event); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.OnEquipSkin // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(bool bHandled); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.SetCustomFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_OrnamentButton_Weapon(int32_t EntryPoint); // Function UMG_Customize_OrnamentButton_Weapon.UMG_Customize_OrnamentButton_Weapon_C.ExecuteUbergraph_UMG_Customize_OrnamentButton_Weapon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

