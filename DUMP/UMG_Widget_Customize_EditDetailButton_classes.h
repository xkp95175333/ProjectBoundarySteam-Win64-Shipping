// WidgetBlueprintGeneratedClass UMG_Widget_Customize_EditDetailButton.UMG_Widget_Customize_EditDetailButton_C
// Size: 0x2cc (Inherited: 0x268)
struct UUMG_Widget_Customize_EditDetailButton_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FocusOn; // 0x270(0x08)
	struct UImage* blackBG; // 0x278(0x08)
	struct UImage* blackBG_2; // 0x280(0x08)
	struct UImage* Image_957; // 0x288(0x08)
	struct UPBInputTipsImage* KeyTips; // 0x290(0x08)
	struct UButton* MainButton; // 0x298(0x08)
	struct USizeBox* SizeBox_84; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnClickDetailButton; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnHoveredMainButton; // 0x2b8(0x10)
	float HeightOverride; // 0x2c8(0x04)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG_Widget_Customize_EditDetailButton.UMG_Widget_Customize_EditDetailButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Widget_Customize_EditDetailButton.UMG_Widget_Customize_EditDetailButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Widget_Customize_EditDetailButton.UMG_Widget_Customize_EditDetailButton_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_125_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_Customize_EditDetailButton.UMG_Widget_Customize_EditDetailButton_C.BndEvt__Button_125_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Widget_Customize_EditDetailButton.UMG_Widget_Customize_EditDetailButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Widget_Customize_EditDetailButton.UMG_Widget_Customize_EditDetailButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Customize_EditDetailButton(int32_t EntryPoint); // Function UMG_Widget_Customize_EditDetailButton.UMG_Widget_Customize_EditDetailButton_C.ExecuteUbergraph_UMG_Widget_Customize_EditDetailButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnHoveredMainButton__DelegateSignature(); // Function UMG_Widget_Customize_EditDetailButton.UMG_Widget_Customize_EditDetailButton_C.OnHoveredMainButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnClickDetailButton__DelegateSignature(); // Function UMG_Widget_Customize_EditDetailButton.UMG_Widget_Customize_EditDetailButton_C.OnClickDetailButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

