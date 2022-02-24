// WidgetBlueprintGeneratedClass UMG_Card_FloatOption.UMG_Card_FloatOption_C
// Size: 0x4c1 (Inherited: 0x409)
struct UUMG_Card_FloatOption_C : UCard_OptionBase_C {
	char pad_409[0x7]; // 0x409(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UWidgetAnimation* SelectedOn; // 0x418(0x08)
	struct UWidgetAnimation* FocusOn; // 0x420(0x08)
	struct UImage* blackBG; // 0x428(0x08)
	struct UImage* BlackShadow; // 0x430(0x08)
	struct UImage* divideLine; // 0x438(0x08)
	struct UEditableText* EditableNum; // 0x440(0x08)
	struct UImage* FocusMask; // 0x448(0x08)
	struct UButton* Main_Button; // 0x450(0x08)
	struct USlider* MainSlider; // 0x458(0x08)
	struct UTextBlock* MainTitle; // 0x460(0x08)
	struct UTextBlock* MainTItle_Selected; // 0x468(0x08)
	struct UImage* SelectedTextBG; // 0x470(0x08)
	struct UCanvasPanel* TitleBoard; // 0x478(0x08)
	struct FText Title; // 0x480(0x18)
	struct FMulticastInlineDelegate OnValueChange; // 0x498(0x10)
	float CurNum; // 0x4a8(0x04)
	bool Selected; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	float Max; // 0x4b0(0x04)
	float Min; // 0x4b4(0x04)
	bool bShowAsInt; // 0x4b8(0x01)
	bool InputNumClampMin; // 0x4b9(0x01)
	bool InputNumClampMax; // 0x4ba(0x01)
	char pad_4BB[0x1]; // 0x4bb(0x01)
	float ChangedDelta; // 0x4bc(0x04)
	bool bIsHaveExtraOption; // 0x4c0(0x01)

	void RefreshInfo(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.RefreshInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ChangeValueByUser(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.ChangeValueByUser // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PercentToNum(float Percent, float Num); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.PercentToNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void NumToPercent(float Num, float Percent); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.NumToPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct UWidget* DoLeftOrRight(enum class EUINavigation Navigation); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.DoLeftOrRight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetNum(float Nums); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.Designer_SetNum // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetTitle(struct FText InTitle); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.Designer_SetTitle // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnFocus(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.Designer_OnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnUnfocus(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.Designer_OnUnfocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnSelected(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.Designer_OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnUnselected(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.Designer_OnUnselected // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetMiniVersion(bool bMiniVersion); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.Designer_SetMiniVersion // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void AddorDecrease(bool bAdd); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.AddorDecrease // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetValue(float InNum); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.SetValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainSlider_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainSlider_K2Node_ComponentBoundEvent_10_OnMouseCaptureBeginEvent__DelegateSignature(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_10_OnMouseCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnValueChanged(float Val); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.OnValueChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Refocus(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.Refocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ClickedOnMainButton(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.ClickedOnMainButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnTextCommitted(struct FText Text, enum class ETextCommit CommitMethod); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.OnTextCommitted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnMainButtonHovered(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.OnMainButtonHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnPercentageValueChange(float Value); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.OnPercentageValueChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Card_FloatOption(int32_t EntryPoint); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.ExecuteUbergraph_UMG_Card_FloatOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnValueChange__DelegateSignature(float InNumber); // Function UMG_Card_FloatOption.UMG_Card_FloatOption_C.OnValueChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

