// WidgetBlueprintGeneratedClass UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C
// Size: 0x350 (Inherited: 0x2e0)
struct UUMG_Customize_WeaponPart_C : UUMG_Customize_ItemButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UUMG_Widget_Customize_EditDetailButton_C* UMG_Customize_EditDetailButton_Small; // 0x2e8(0x08)
	struct UUMG_Widget_Customize_EditReticleButton_C* UMG_Customize_EditReticleButton_Small; // 0x2f0(0x08)
	struct UUMG_Widget_Customize_EditSkinButton_C* UMG_Customize_EditSkinButton_Small; // 0x2f8(0x08)
	struct UUMG_Widget_Customize_Button_Small_C* UMG_Widget_Customize_Button_Small; // 0x300(0x08)
	struct FPBWeaponPart_UI UI; // 0x308(0x48)

	void GetEditButton(struct UUserWidget* OutButton); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.GetEditButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetSpecialButton(struct UUserWidget* OutButton); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.GetSpecialButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetSkinButton(struct UUserWidget* OutButton); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.GetSkinButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReverseHightLight_Internal(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.ReverseHightLight_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReverseFade_Internal(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.ReverseFade_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HightLight_Internal(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.HightLight_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Fade_Internal(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.Fade_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnEditReticle(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.OnEditReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnEditSkin(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.OnEditSkin // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetNextLevelWidgets(struct TArray<struct UUMG_Customize_Base_C*> OutWidget); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.GetNextLevelWidgets // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Refresh(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnEquipItem(struct FDelegate Callback); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.OnEquipItem // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(bool bHandled); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.SetCustomFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetWeaponID(struct FName WeaponID); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.GetWeaponID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetSlotType(enum class EPBSlotType SlotType); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.GetSlotType // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetRoleID(struct FName RoleId); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.GetRoleID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetItemID(struct FName ItemId); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.GetItemID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnServerEquipItemComplete(int32_t ErrorCode); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.OnServerEquipItemComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Customize_EditDetailButton_Small_K2Node_ComponentBoundEvent_0_OnClickDetailButton__DelegateSignature(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.BndEvt__UMG_Customize_EditDetailButton_Small_K2Node_ComponentBoundEvent_0_OnClickDetailButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Customize_EditDetailButton_Small_K2Node_ComponentBoundEvent_1_OnHoveredMainButton__DelegateSignature(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.BndEvt__UMG_Customize_EditDetailButton_Small_K2Node_ComponentBoundEvent_1_OnHoveredMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Customize_EditSkinButton_Small_K2Node_ComponentBoundEvent_2_OnClickEditSkinButton__DelegateSignature(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.BndEvt__UMG_Customize_EditSkinButton_Small_K2Node_ComponentBoundEvent_2_OnClickEditSkinButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Customize_EditSkinButton_Small_K2Node_ComponentBoundEvent_3_OnHoveredMainButton__DelegateSignature(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.BndEvt__UMG_Customize_EditSkinButton_Small_K2Node_ComponentBoundEvent_3_OnHoveredMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Customize_EditReticleButton_Small_K2Node_ComponentBoundEvent_4_OnClickDetailButton__DelegateSignature(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.BndEvt__UMG_Customize_EditReticleButton_Small_K2Node_ComponentBoundEvent_4_OnClickDetailButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Customize_EditReticleButton_Small_K2Node_ComponentBoundEvent_5_OnHoveredMainButton__DelegateSignature(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.BndEvt__UMG_Customize_EditReticleButton_Small_K2Node_ComponentBoundEvent_5_OnHoveredMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_Customize_Button_Small_K2Node_ComponentBoundEvent_6_OnClickMainButton__DelegateSignature(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.BndEvt__UMG_Widget_Customize_Button_Small_K2Node_ComponentBoundEvent_6_OnClickMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_Customize_Button_Small_K2Node_ComponentBoundEvent_7_OnHoveredMainButton__DelegateSignature(); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.BndEvt__UMG_Widget_Customize_Button_Small_K2Node_ComponentBoundEvent_7_OnHoveredMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnServerEquipItemComplete2(int32_t ErrorCode); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.OnServerEquipItemComplete2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_WeaponPart(int32_t EntryPoint); // Function UMG_Customize_WeaponPart.UMG_Customize_WeaponPart_C.ExecuteUbergraph_UMG_Customize_WeaponPart // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

