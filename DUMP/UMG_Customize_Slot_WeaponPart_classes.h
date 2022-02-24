// WidgetBlueprintGeneratedClass UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C
// Size: 0x2f0 (Inherited: 0x2b8)
struct UUMG_Customize_Slot_WeaponPart_C : UUMG_Customize_SlotButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UUMG_Widget_Customize_Button_Small_C* UMG_Widget_Customize_Button_Small; // 0x2c0(0x08)
	struct FPBWeaponPartSlot_UI WeaponPartSlotUI; // 0x2c8(0x28)

	void ReverseHightLight_Internal(); // Function UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C.ReverseHightLight_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreEnterNextLevel(); // Function UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C.PreEnterNextLevel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh(); // Function UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetNextLevelWidgets(struct TArray<struct UUMG_Customize_Base_C*> OutWidget); // Function UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C.GetNextLevelWidgets // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_Customize_Button_Small_K2Node_ComponentBoundEvent_0_OnClickMainButton__DelegateSignature(); // Function UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C.BndEvt__UMG_Widget_Customize_Button_Small_K2Node_ComponentBoundEvent_0_OnClickMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_Customize_Button_Small_K2Node_ComponentBoundEvent_1_OnHoveredMainButton__DelegateSignature(); // Function UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C.BndEvt__UMG_Widget_Customize_Button_Small_K2Node_ComponentBoundEvent_1_OnHoveredMainButton__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_Slot_WeaponPart(int32_t EntryPoint); // Function UMG_Customize_Slot_WeaponPart.UMG_Customize_Slot_WeaponPart_C.ExecuteUbergraph_UMG_Customize_Slot_WeaponPart // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

