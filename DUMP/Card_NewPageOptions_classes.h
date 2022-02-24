// WidgetBlueprintGeneratedClass Card_NewPageOptions.Card_NewPageOptions_C
// Size: 0x494 (Inherited: 0x409)
struct UCard_NewPageOptions_C : UCard_OptionBase_C {
	char pad_409[0x7]; // 0x409(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UWidgetAnimation* SelectedOn; // 0x418(0x08)
	struct UWidgetAnimation* FocusOn; // 0x420(0x08)
	struct UImage* blackBG; // 0x428(0x08)
	struct UImage* BlackShadow; // 0x430(0x08)
	struct UImage* divideLine; // 0x438(0x08)
	struct UImage* FocusMask; // 0x440(0x08)
	struct UButton* MainButton; // 0x448(0x08)
	struct UTextBlock* MainTitle; // 0x450(0x08)
	struct UTextBlock* MainTItle_Selected; // 0x458(0x08)
	struct UImage* SelectedTextBG; // 0x460(0x08)
	struct FText Title; // 0x468(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x480(0x10)
	bool CoreValue; // 0x490(0x01)
	bool bIsSelected; // 0x491(0x01)
	bool bIsFocus; // 0x492(0x01)
	bool bIsPlayedSelected; // 0x493(0x01)

	void Designer_Unfocus(); // Function Card_NewPageOptions.Card_NewPageOptions_C.Designer_Unfocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Card_NewPageOptions.Card_NewPageOptions_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_NewPageOptions.Card_NewPageOptions_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_NewPageOptions.Card_NewPageOptions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_NewPageOptions.Card_NewPageOptions_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_NewPageOptions.Card_NewPageOptions_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Card_NewPageOptions.Card_NewPageOptions_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Designer_Focus(); // Function Card_NewPageOptions.Card_NewPageOptions_C.Designer_Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_NewPageOptions.Card_NewPageOptions_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function Card_NewPageOptions.Card_NewPageOptions_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_NewPageOptions(int32_t EntryPoint); // Function Card_NewPageOptions.Card_NewPageOptions_C.ExecuteUbergraph_Card_NewPageOptions // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnClicked__DelegateSignature(); // Function Card_NewPageOptions.Card_NewPageOptions_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

