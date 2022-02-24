// WidgetBlueprintGeneratedClass UMG_Customize_SkinButton.UMG_Customize_SkinButton_C
// Size: 0x2c8 (Inherited: 0x2a8)
struct UUMG_Customize_SkinButton_C : UUMG_Customize_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UUMG_Widget_Customize_Button03_C* UMG_Widget_Customize_Button03; // 0x2b0(0x08)
	struct FMulticastInlineDelegate TempDisPatcher; // 0x2b8(0x10)

	void CanUnlock(bool bCanUnlock); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.CanUnlock // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetIsLocked(bool bIsLocked); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.GetIsLocked // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetWeaponID(struct FName OutSkinID); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.GetWeaponID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void CanEnterTestField(bool bReturnValue); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.CanEnterTestField // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Refresh(); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetIsEquipped(bool bIsEquipped); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.GetIsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetSkinID(struct FName OutSkinID); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.GetSkinID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetRoleID(struct FName OutRoleID); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.GetRoleID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetGrade(enum class EPBItemGradeType Grade); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.GetGrade // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetTexture(struct UTexture2D* Texture); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.GetTexture // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetText(struct FText Text); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.GetText // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void OnEquipSkin(struct FDelegate Event); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.OnEquipSkin // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UnlockComplete(bool bSuccess); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.UnlockComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnServerEquipSkinComplete1(int32_t Temp); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.OnServerEquipSkinComplete1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnServerEquipSkinComplete2(int32_t Temp); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.OnServerEquipSkinComplete2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_Customize_Button03_K2Node_ComponentBoundEvent_3_OnHoveredMainButton__DelegateSignature(); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.BndEvt__UMG_Widget_Customize_Button03_K2Node_ComponentBoundEvent_3_OnHoveredMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_Customize_Button03_K2Node_ComponentBoundEvent_2_OnClickMainButton__DelegateSignature(); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.BndEvt__UMG_Widget_Customize_Button03_K2Node_ComponentBoundEvent_2_OnClickMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(bool bConfirm); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_SkinButton(int32_t EntryPoint); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.ExecuteUbergraph_UMG_Customize_SkinButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void TempDisPatcher__DelegateSignature(int32_t Temp); // Function UMG_Customize_SkinButton.UMG_Customize_SkinButton_C.TempDisPatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

