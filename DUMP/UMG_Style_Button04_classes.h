// WidgetBlueprintGeneratedClass UMG_Style_Button04.UMG_Style_Button04_C
// Size: 0x358 (Inherited: 0x260)
struct UUMG_Style_Button04_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FocusOn; // 0x268(0x08)
	struct UImage* Image_Sub; // 0x270(0x08)
	struct UButton* Main_Button; // 0x278(0x08)
	struct UTextBlock* TextBlock_MainText; // 0x280(0x08)
	struct UTextBlock* TextBlock_Sub; // 0x288(0x08)
	struct UHorizontalBox* TextPad; // 0x290(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x298(0x10)
	struct FText MainText; // 0x2a8(0x18)
	struct FText SubText; // 0x2c0(0x18)
	struct FSlateFontInfo MainFont; // 0x2d8(0x58)
	struct TSoftObjectPtr<struct UTexture2D> Texture2D; // 0x330(0x28)

	void Refresh(struct FText InMainText, bool bEditMainText, struct FText InSubText, bool bEditSubText, struct TSoftObjectPtr<struct UTexture2D> InTexture2D); // Function UMG_Style_Button04.UMG_Style_Button04_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Style_Button04_Main_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Style_Button04.UMG_Style_Button04_C.BndEvt__UMG_Style_Button04_Main_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Style_Button04_Main_button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Style_Button04.UMG_Style_Button04_C.BndEvt__UMG_Style_Button04_Main_button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Style_Button04_Main_button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Style_Button04.UMG_Style_Button04_C.BndEvt__UMG_Style_Button04_Main_button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Style_Button04.UMG_Style_Button04_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Style_Button04(int32_t EntryPoint); // Function UMG_Style_Button04.UMG_Style_Button04_C.ExecuteUbergraph_UMG_Style_Button04 // (Final|UbergraphFunction) // @ game+0x1556ec0
	void OnClicked__DelegateSignature(); // Function UMG_Style_Button04.UMG_Style_Button04_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

