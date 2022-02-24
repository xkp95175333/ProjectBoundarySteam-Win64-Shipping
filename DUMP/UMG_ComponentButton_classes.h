// WidgetBlueprintGeneratedClass UMG_ComponentButton.UMG_ComponentButton_C
// Size: 0x2c9 (Inherited: 0x260)
struct UUMG_ComponentButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HideInstantly; // 0x268(0x08)
	struct UWidgetAnimation* Show; // 0x270(0x08)
	struct UWidgetAnimation* FocusOn; // 0x278(0x08)
	struct UButton* btn; // 0x280(0x08)
	struct UBorder* ComponentBorder; // 0x288(0x08)
	struct UTextBlock* DisplayText; // 0x290(0x08)
	struct UImage* Image_357; // 0x298(0x08)
	struct FText InDisplayText; // 0x2a0(0x18)
	struct FMulticastInlineDelegate Click; // 0x2b8(0x10)
	bool IsSelect; // 0x2c8(0x01)

	void PreConstruct(bool IsDesignTime); // Function UMG_ComponentButton.UMG_ComponentButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowWithDelay(float Duration); // Function UMG_ComponentButton.UMG_ComponentButton_C.ShowWithDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_ComponentButton.UMG_ComponentButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_ComponentButton.UMG_ComponentButton_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ComponentButton_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ComponentButton.UMG_ComponentButton_C.BndEvt__UMG_ComponentButton_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ComponentButton_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_ComponentButton.UMG_ComponentButton_C.BndEvt__UMG_ComponentButton_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ComponentButton(int32_t EntryPoint); // Function UMG_ComponentButton.UMG_ComponentButton_C.ExecuteUbergraph_UMG_ComponentButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Click__DelegateSignature(); // Function UMG_ComponentButton.UMG_ComponentButton_C.Click__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

