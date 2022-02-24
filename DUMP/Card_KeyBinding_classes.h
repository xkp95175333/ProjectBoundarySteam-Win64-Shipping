// WidgetBlueprintGeneratedClass Card_KeyBinding.Card_KeyBinding_C
// Size: 0x588 (Inherited: 0x3d8)
struct UCard_KeyBinding_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* BottomSelected_3; // 0x3e0(0x08)
	struct UWidgetAnimation* BottomSelected_2; // 0x3e8(0x08)
	struct UWidgetAnimation* SelectedOn; // 0x3f0(0x08)
	struct UWidgetAnimation* FocusOn; // 0x3f8(0x08)
	struct UButton* Bind1; // 0x400(0x08)
	struct UImage* Bind1_Icon; // 0x408(0x08)
	struct UButton* Bind2; // 0x410(0x08)
	struct UImage* Bind2_Icon; // 0x418(0x08)
	struct UImage* blackBG; // 0x420(0x08)
	struct UImage* BlackShadow; // 0x428(0x08)
	struct UImage* divideLine; // 0x430(0x08)
	struct UImage* FocusMask; // 0x438(0x08)
	struct UButton* MainButton; // 0x440(0x08)
	struct UTextBlock* MainTitle; // 0x448(0x08)
	struct UTextBlock* MainTItle_Selected; // 0x450(0x08)
	struct UScrollText_C* ScrollText_Bind1; // 0x458(0x08)
	struct UScrollText_C* ScrollText_Bind2; // 0x460(0x08)
	struct UImage* SelectedTextBG; // 0x468(0x08)
	struct FName KeyName; // 0x470(0x08)
	bool ReadyToRecord; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	int32_t ModifyingButtonIndex; // 0x47c(0x04)
	struct FMulticastInlineDelegate OnKeySet; // 0x480(0x10)
	struct FSlateColor BlackSlate; // 0x490(0x28)
	struct FSlateColor WhiteSlate; // 0x4b8(0x28)
	bool bIsSelected; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct TMap<struct FString, struct FString> DisplayMap; // 0x4e8(0x50)
	struct TMap<struct FString, struct FString> NewVar_1; // 0x538(0x50)

	void EndRecordKeys(); // Function Card_KeyBinding.Card_KeyBinding_C.EndRecordKeys // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetKeyDes(struct FKey Key, struct FText Key Des); // Function Card_KeyBinding.Card_KeyBinding_C.GetKeyDes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void RefreshInfo(); // Function Card_KeyBinding.Card_KeyBinding_C.RefreshInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MakeLiteralKey(struct FKey InKey, struct FKey OutKey); // Function Card_KeyBinding.Card_KeyBinding_C.MakeLiteralKey // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetKeyBinding(struct FKey InKey, bool Shift, bool Ctrl, bool Alt); // Function Card_KeyBinding.Card_KeyBinding_C.SetKeyBinding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetReadyToRecordKeys(int32_t InIndex); // Function Card_KeyBinding.Card_KeyBinding_C.GetReadyToRecordKeys // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Focus(); // Function Card_KeyBinding.Card_KeyBinding_C.Designer_Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Unfocus(); // Function Card_KeyBinding.Card_KeyBinding_C.Designer_Unfocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_ReadyForInput(int32_t Button); // Function Card_KeyBinding.Card_KeyBinding_C.Designer_ReadyForInput // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_DoneWithSetting(int32_t Button, struct FText InText); // Function Card_KeyBinding.Card_KeyBinding_C.Designer_DoneWithSetting // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnSelected(bool bSelected); // Function Card_KeyBinding.Card_KeyBinding_C.Designer_OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Bind2_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Card_KeyBinding.Card_KeyBinding_C.BndEvt__Bind2_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Bind1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Card_KeyBinding.Card_KeyBinding_C.BndEvt__Bind1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Card_KeyBinding.Card_KeyBinding_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_KeyBinding.Card_KeyBinding_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_KeyBinding.Card_KeyBinding_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_KeyBinding.Card_KeyBinding_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_KeyBinding.Card_KeyBinding_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Card_KeyBinding.Card_KeyBinding_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_KeyBinding.Card_KeyBinding_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Bind1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function Card_KeyBinding.Card_KeyBinding_C.BndEvt__Bind1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Bind2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function Card_KeyBinding.Card_KeyBinding_C.BndEvt__Bind2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ReturnKeys(bool Cancel, struct TArray<struct FKey> RetKey, bool Shift, bool Ctrl, bool Alt); // Function Card_KeyBinding.Card_KeyBinding_C.ReturnKeys // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_KeyBinding(int32_t EntryPoint); // Function Card_KeyBinding.Card_KeyBinding_C.ExecuteUbergraph_Card_KeyBinding // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnKeySet__DelegateSignature(); // Function Card_KeyBinding.Card_KeyBinding_C.OnKeySet__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

