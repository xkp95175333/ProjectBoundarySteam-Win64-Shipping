// WidgetBlueprintGeneratedClass Card_Money.Card_Money_C
// Size: 0x430 (Inherited: 0x3d8)
struct UCard_Money_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x3e0(0x08)
	struct UGenerallyUseButton_C* GenerallyUseButton; // 0x3e8(0x08)
	struct UImage* Image; // 0x3f0(0x08)
	struct UImage* Image_100; // 0x3f8(0x08)
	struct UImage* Image_315; // 0x400(0x08)
	struct UCanvasPanel* MainBoard; // 0x408(0x08)
	struct UTextBlock* MainText; // 0x410(0x08)
	bool IsFocus; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct FMulticastInlineDelegate Click; // 0x420(0x10)

	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Money.Card_Money_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Money.Card_Money_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Card_Money.Card_Money_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(); // Function Card_Money.Card_Money_C.BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_Money.Card_Money_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Money(int32_t EntryPoint); // Function Card_Money.Card_Money_C.ExecuteUbergraph_Card_Money // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Click__DelegateSignature(); // Function Card_Money.Card_Money_C.Click__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

