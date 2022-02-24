// WidgetBlueprintGeneratedClass UMG_Widget_Customize_Button03.UMG_Widget_Customize_Button03_C
// Size: 0x2d8 (Inherited: 0x268)
struct UUMG_Widget_Customize_Button03_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Equip; // 0x270(0x08)
	struct UWidgetAnimation* Focus; // 0x278(0x08)
	struct UButton* Button_MainButton; // 0x280(0x08)
	struct UImage* FocusMask; // 0x288(0x08)
	struct UImage* Image_561; // 0x290(0x08)
	struct UImage* Image_Skin; // 0x298(0x08)
	struct UCanvasPanel* LockedBoard_2; // 0x2a0(0x08)
	struct USizeBox* SizeBox_424; // 0x2a8(0x08)
	struct UTextBlock* SkinName_Normal; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnClickMainButton; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnHoveredMainButton; // 0x2c8(0x10)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG_Widget_Customize_Button03.UMG_Widget_Customize_Button03_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh(struct FText Text, struct UTexture2D* Texture, enum class E_ColorType_UI ColorType, bool bIsEquipped, bool bIsLocked); // Function UMG_Widget_Customize_Button03.UMG_Widget_Customize_Button03_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Widget_Customize_Button03.UMG_Widget_Customize_Button03_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Widget_Customize_Button03.UMG_Widget_Customize_Button03_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_Customize_Button03.UMG_Widget_Customize_Button03_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Widget_Customize_Button03.UMG_Widget_Customize_Button03_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG_Widget_Customize_Button03.UMG_Widget_Customize_Button03_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Customize_Button03(int32_t EntryPoint); // Function UMG_Widget_Customize_Button03.UMG_Widget_Customize_Button03_C.ExecuteUbergraph_UMG_Widget_Customize_Button03 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnHoveredMainButton__DelegateSignature(); // Function UMG_Widget_Customize_Button03.UMG_Widget_Customize_Button03_C.OnHoveredMainButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnClickMainButton__DelegateSignature(); // Function UMG_Widget_Customize_Button03.UMG_Widget_Customize_Button03_C.OnClickMainButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

