// WidgetBlueprintGeneratedClass Card_BuyMoney.Card_BuyMoney_C
// Size: 0x440 (Inherited: 0x3d8)
struct UCard_BuyMoney_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x3e0(0x08)
	struct UGenerallyUseButton_C* GenerallyUseButton; // 0x3e8(0x08)
	struct UImage* Image_100; // 0x3f0(0x08)
	struct UImage* Item_Image; // 0x3f8(0x08)
	struct UCanvasPanel* MainBoard; // 0x400(0x08)
	struct UTextBlock* MainText; // 0x408(0x08)
	struct UTextBlock* MainText_2; // 0x410(0x08)
	bool IsFocus; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct FMulticastInlineDelegate Click; // 0x420(0x10)
	int32_t Money; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UTexture2D* Item_Image_Texture; // 0x438(0x08)

	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_BuyMoney.Card_BuyMoney_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_BuyMoney.Card_BuyMoney_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Card_BuyMoney.Card_BuyMoney_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(); // Function Card_BuyMoney.Card_BuyMoney_C.BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_BuyMoney.Card_BuyMoney_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_BuyMoney.Card_BuyMoney_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_BuyMoney(int32_t EntryPoint); // Function Card_BuyMoney.Card_BuyMoney_C.ExecuteUbergraph_Card_BuyMoney // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Click__DelegateSignature(); // Function Card_BuyMoney.Card_BuyMoney_C.Click__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

