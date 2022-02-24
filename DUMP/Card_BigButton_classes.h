// WidgetBlueprintGeneratedClass Card_BigButton.Card_BigButton_C
// Size: 0x45c (Inherited: 0x3d8)
struct UCard_BigButton_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x3e0(0x08)
	struct UImage* BaseMask; // 0x3e8(0x08)
	struct UImage* blackBG; // 0x3f0(0x08)
	struct UImage* BlackShadow; // 0x3f8(0x08)
	struct UImage* FocusMask; // 0x400(0x08)
	struct UGenerallyUseButton_C* GenerallyUseButton; // 0x408(0x08)
	struct UTextBlock* MainText; // 0x410(0x08)
	struct USizeBox* SizeBox_2; // 0x418(0x08)
	bool IsFocus; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FMulticastInlineDelegate Click; // 0x428(0x10)
	struct FText ButtonName; // 0x438(0x18)
	enum class E_ColorType_UI FocusMaskColor; // 0x450(0x01)
	enum class E_ColorType_UI BaseMaskColor; // 0x451(0x01)
	char pad_452[0x2]; // 0x452(0x02)
	float WidthOverride; // 0x454(0x04)
	float HeightOverride; // 0x458(0x04)

	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_BigButton.Card_BigButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_BigButton.Card_BigButton_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Card_BigButton.Card_BigButton_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(); // Function Card_BigButton.Card_BigButton_C.BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_BigButton.Card_BigButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_BigButton.Card_BigButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_BigButton.Card_BigButton_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Card_BigButton.Card_BigButton_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_BigButton(int32_t EntryPoint); // Function Card_BigButton.Card_BigButton_C.ExecuteUbergraph_Card_BigButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Click__DelegateSignature(); // Function Card_BigButton.Card_BigButton_C.Click__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

