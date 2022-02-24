// WidgetBlueprintGeneratedClass UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C
// Size: 0x318 (Inherited: 0x2c8)
struct UUMG_Customize_SkinButton_WeaponPart_C : UUMG_Customize_SkinButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct FPBWeaponPartSkin_UI UI; // 0x2d0(0x48)

	void CanUnlock(bool bCanUnlock); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.CanUnlock // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetIsLocked(bool bIsLocked); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.GetIsLocked // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetWeaponID(struct FName OutSkinID); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.GetWeaponID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Refresh(); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetIsEquipped(bool bIsEquipped); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.GetIsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetSkinID(struct FName OutSkinID); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.GetSkinID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetRoleID(struct FName OutRoleID); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.GetRoleID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetTexture(struct UTexture2D* Texture); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.GetTexture // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetText(struct FText Text); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.GetText // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetGrade(enum class EPBItemGradeType Grade); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.GetGrade // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void OnEquipSkin(struct FDelegate Event); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.OnEquipSkin // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(bool bHandled); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.SetCustomFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_SkinButton_WeaponPart(int32_t EntryPoint); // Function UMG_Customize_SkinButton_WeaponPart.UMG_Customize_SkinButton_WeaponPart_C.ExecuteUbergraph_UMG_Customize_SkinButton_WeaponPart // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

