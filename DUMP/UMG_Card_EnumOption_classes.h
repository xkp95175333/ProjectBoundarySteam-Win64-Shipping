// WidgetBlueprintGeneratedClass UMG_Card_EnumOption.UMG_Card_EnumOption_C
// Size: 0x4d5 (Inherited: 0x409)
struct UUMG_Card_EnumOption_C : UCard_OptionBase_C {
	char pad_409[0x7]; // 0x409(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UWidgetAnimation* SelectedOn; // 0x418(0x08)
	struct UWidgetAnimation* FocusOn; // 0x420(0x08)
	struct UCanvasPanel* BGBoard; // 0x428(0x08)
	struct UImage* blackBG; // 0x430(0x08)
	struct UImage* CheckImageR; // 0x438(0x08)
	struct UImage* FocusMask; // 0x440(0x08)
	struct UButton* MainButton; // 0x448(0x08)
	struct UTextBlock* MainTitle; // 0x450(0x08)
	struct UTextBlock* MainTItle_Selected; // 0x458(0x08)
	struct UButton* OptionButtonLeft; // 0x460(0x08)
	struct UButton* OptionButtonRight; // 0x468(0x08)
	struct UScrollText_C* ScrollText; // 0x470(0x08)
	struct UImage* SelectedTextBG; // 0x478(0x08)
	struct UHorizontalBox* TabBoard; // 0x480(0x08)
	struct UOverlay* TabBoardRight; // 0x488(0x08)
	struct FText Title; // 0x490(0x18)
	struct TArray<struct FText> Options; // 0x4a8(0x10)
	int32_t CurIndex; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct FMulticastInlineDelegate OnChangeValue; // 0x4c0(0x10)
	bool LoopSwitch; // 0x4d0(0x01)
	bool Selected; // 0x4d1(0x01)
	bool bIsSelected; // 0x4d2(0x01)
	bool bIsFocus; // 0x4d3(0x01)
	bool bProgammerGenOptions; // 0x4d4(0x01)

	void RefreshInfo(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.RefreshInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TurnToNextOption(bool bNext); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.TurnToNextOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct UWidget* DoLeftOrRight(enum class EUINavigation Navigation); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.DoLeftOrRight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Focus(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.Designer_Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Unfocus(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.Designer_Unfocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetOption(struct FText NewOption); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.Designer_SetOption // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnSelected(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.Designer_OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnUnselected(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.Designer_OnUnselected // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetMiniVersion(bool bMiniVersion); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.Designer_SetMiniVersion // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetValue(int32_t NewIndex); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.SetValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__OptionButtonLeft_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.BndEvt__OptionButtonLeft_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__OptionButtonRight_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.BndEvt__OptionButtonRight_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Card_EnumOption(int32_t EntryPoint); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.ExecuteUbergraph_UMG_Card_EnumOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnChangeValue__DelegateSignature(int32_t NewIndex); // Function UMG_Card_EnumOption.UMG_Card_EnumOption_C.OnChangeValue__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

