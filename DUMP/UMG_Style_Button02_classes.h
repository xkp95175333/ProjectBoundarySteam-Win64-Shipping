// WidgetBlueprintGeneratedClass UMG_Style_Button02.UMG_Style_Button02_C
// Size: 0x2f8 (Inherited: 0x260)
struct UUMG_Style_Button02_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FocusOn; // 0x268(0x08)
	struct UButton* Button_1; // 0x270(0x08)
	struct UImage* Item_Image; // 0x278(0x08)
	struct UTextBlock* TextBlock_MainText; // 0x280(0x08)
	struct UTextBlock* TextBlock_SubText; // 0x288(0x08)
	struct FText MainText; // 0x290(0x18)
	struct FText SubText; // 0x2a8(0x18)
	struct TSoftObjectPtr<struct UTexture2D> ButtonImage; // 0x2c0(0x28)
	struct FMulticastInlineDelegate OnClicked; // 0x2e8(0x10)

	void PreConstruct(bool IsDesignTime); // Function UMG_Style_Button02.UMG_Style_Button02_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Style_Button02_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Style_Button02.UMG_Style_Button02_C.BndEvt__UMG_Style_Button02_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Style_Button02_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Style_Button02.UMG_Style_Button02_C.BndEvt__UMG_Style_Button02_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Style_Button02_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Style_Button02.UMG_Style_Button02_C.BndEvt__UMG_Style_Button02_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Style_Button02(int32_t EntryPoint); // Function UMG_Style_Button02.UMG_Style_Button02_C.ExecuteUbergraph_UMG_Style_Button02 // (Final|UbergraphFunction) // @ game+0x1556ec0
	void OnClicked__DelegateSignature(); // Function UMG_Style_Button02.UMG_Style_Button02_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

