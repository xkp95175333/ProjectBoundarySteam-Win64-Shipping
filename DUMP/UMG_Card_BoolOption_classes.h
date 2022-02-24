// WidgetBlueprintGeneratedClass UMG_Card_BoolOption.UMG_Card_BoolOption_C
// Size: 0x4a4 (Inherited: 0x409)
struct UUMG_Card_BoolOption_C : UCard_OptionBase_C {
	char pad_409[0x7]; // 0x409(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UWidgetAnimation* ButtonOn; // 0x418(0x08)
	struct UWidgetAnimation* SelectedOn; // 0x420(0x08)
	struct UWidgetAnimation* FocusOn; // 0x428(0x08)
	struct UImage* blackBG; // 0x430(0x08)
	struct UImage* BlackShadow; // 0x438(0x08)
	struct UOverlay* CheckBoard; // 0x440(0x08)
	struct UImage* divideLine; // 0x448(0x08)
	struct UImage* FocusMask; // 0x450(0x08)
	struct UButton* MainButton; // 0x458(0x08)
	struct UTextBlock* MainTitle; // 0x460(0x08)
	struct UTextBlock* MainTItle_Selected; // 0x468(0x08)
	struct UImage* SelectedTextBG; // 0x470(0x08)
	struct FText Title; // 0x478(0x18)
	struct FMulticastInlineDelegate OnChangeValue; // 0x490(0x10)
	bool CoreValue; // 0x4a0(0x01)
	bool bIsSelected; // 0x4a1(0x01)
	bool bIsFocus; // 0x4a2(0x01)
	bool bIsPlayedSelected; // 0x4a3(0x01)

	void RefreshInfo(); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.RefreshInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetCheck(bool NewCheck); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.Designer_SetCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Focus(); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.Designer_Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Unfocus(); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.Designer_Unfocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetMiniVersion(bool bMiniVersion); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.Designer_SetMiniVersion // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetValue(bool bNewValue); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.SetValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnTryToClickedCheckBox(); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.OnTryToClickedCheckBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Card_BoolOption(int32_t EntryPoint); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.ExecuteUbergraph_UMG_Card_BoolOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnChangeValue__DelegateSignature(bool NewValue); // Function UMG_Card_BoolOption.UMG_Card_BoolOption_C.OnChangeValue__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

