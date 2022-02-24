// WidgetBlueprintGeneratedClass UMG_Customize_ItemButton.UMG_Customize_ItemButton_C
// Size: 0x2e0 (Inherited: 0x2a8)
struct UUMG_Customize_ItemButton_C : UUMG_Customize_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UUMG_Widget_Customize_Button_C* UMG_Customize_Button; // 0x2b0(0x08)
	struct UUMG_Widget_Customize_EditDetailButton_C* UMG_Customize_EditDetailButton; // 0x2b8(0x08)
	struct UUMG_Widget_Customize_EditReticleButton_C* UMG_Customize_EditReticleButton; // 0x2c0(0x08)
	struct UUMG_Widget_Customize_EditSkinButton_C* UMG_Customize_EditSkinButton; // 0x2c8(0x08)
	bool bCanEdit; // 0x2d0(0x01)
	bool bHasSkin; // 0x2d1(0x01)
	bool bHasReticle; // 0x2d2(0x01)
	bool bPendingEditReticle; // 0x2d3(0x01)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UPBCustomManager_BP_C* PBCustomManagerBP_1; // 0x2d8(0x08)

	void CanEnterTestField(bool bReturnValue); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.CanEnterTestField // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetSpecialButton(struct UUserWidget* OutButton); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.GetSpecialButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetEditButton(struct UUserWidget* OutButton); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.GetEditButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetSkinButton(struct UUserWidget* OutButton); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.GetSkinButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void ReverseHightLight_Internal(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.ReverseHightLight_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HightLight_Internal(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.HightLight_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReverseFade_Internal(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.ReverseFade_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Fade_Internal(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.Fade_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetSlotType(enum class EPBSlotType SlotType); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.GetSlotType // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetWeaponID(struct FName WeaponID); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.GetWeaponID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetRoleID(struct FName RoleId); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.GetRoleID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetItemID(struct FName ItemId); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.GetItemID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void OnEditReticle(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnEditReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnEdit(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnEdit // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnEditSkin(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnEditSkin // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnEquipItem(struct FDelegate Callback); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnEquipItem // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Customize_Button_K2Node_ComponentBoundEvent_3_OnHoveredMainButton__DelegateSignature(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.BndEvt__UMG_Customize_Button_K2Node_ComponentBoundEvent_3_OnHoveredMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_SkinButton_K2Node_ComponentBoundEvent_4_OnHoveredMainButton__DelegateSignature(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.BndEvt__Card_SkinButton_K2Node_ComponentBoundEvent_4_OnHoveredMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_DetailOptions_K2Node_ComponentBoundEvent_5_OnHoveredMainButton__DelegateSignature(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.BndEvt__Card_DetailOptions_K2Node_ComponentBoundEvent_5_OnHoveredMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Customize_EditReticleButton_K2Node_ComponentBoundEvent_6_OnClickDetailButton__DelegateSignature(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.BndEvt__UMG_Customize_EditReticleButton_K2Node_ComponentBoundEvent_6_OnClickDetailButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Customize_EditReticleButton_K2Node_ComponentBoundEvent_7_OnHoveredMainButton__DelegateSignature(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.BndEvt__UMG_Customize_EditReticleButton_K2Node_ComponentBoundEvent_7_OnHoveredMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnServerEquipItemComplete(int32_t ErrorCode); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnServerEquipItemComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnConfirm(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnServerEquipItemComplete2(int32_t ErrorCode); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnServerEquipItemComplete2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnBuyComplete(bool bSuccessful, struct FName MerchName); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.OnBuyComplete // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_SkinButton_K2Node_ComponentBoundEvent_1_OnClickEditSkinButton__DelegateSignature(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.BndEvt__Card_SkinButton_K2Node_ComponentBoundEvent_1_OnClickEditSkinButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_SelectableButtom_K2Node_ComponentBoundEvent_0_OnClickMainButton__DelegateSignature(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.BndEvt__Card_SelectableButtom_K2Node_ComponentBoundEvent_0_OnClickMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_DetailOptions_K2Node_ComponentBoundEvent_2_OnClickDetailButton__DelegateSignature(); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.BndEvt__Card_DetailOptions_K2Node_ComponentBoundEvent_2_OnClickDetailButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(bool bConfirm); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UnlockComplete(bool bSuccess); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.UnlockComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent(int32_t ErrorCode); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_ItemButton(int32_t EntryPoint); // Function UMG_Customize_ItemButton.UMG_Customize_ItemButton_C.ExecuteUbergraph_UMG_Customize_ItemButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

