// WidgetBlueprintGeneratedClass UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C
// Size: 0x4d9 (Inherited: 0x3d8)
struct UUMG_Card_GamepadKeyBinding_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* Selected; // 0x3e0(0x08)
	struct UImage* BG; // 0x3e8(0x08)
	struct UPBInputTipsImage* Image_ButtonTips; // 0x3f0(0x08)
	struct UPBInputTipsImage* Image_ButtonTips_3; // 0x3f8(0x08)
	struct UButton* MainButton; // 0x400(0x08)
	struct UTextBlock* Text_Title; // 0x408(0x08)
	struct UScaleBox* Tips2Box; // 0x410(0x08)
	struct FName KeyName; // 0x418(0x08)
	bool ReadyToRecord; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FMulticastInlineDelegate OnKeySet; // 0x428(0x10)
	struct FSlateColor BlackSlate; // 0x438(0x28)
	struct FSlateColor WhiteSlate; // 0x460(0x28)
	bool bIsSelected; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct FText OverrideKeyName; // 0x490(0x18)
	struct FMulticastInlineDelegate OnFocus; // 0x4a8(0x10)
	struct FMulticastInlineDelegate OnStartRecordKeys; // 0x4b8(0x10)
	struct FName ActualKey1; // 0x4c8(0x08)
	struct FName ActualKey2; // 0x4d0(0x08)
	bool bIsDoubleKey; // 0x4d8(0x01)

	bool GetIsChanged(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.GetIsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void IsKeyAvaliable(bool bReady); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.IsKeyAvaliable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void EndRecordKeys(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.EndRecordKeys // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetKeyDes(struct FKey Key, struct FText Key Des); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.GetKeyDes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void RefreshInfo(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.RefreshInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MakeLiteralKey(struct FKey InKey, struct FKey OutKey); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.MakeLiteralKey // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetKeyBinding(struct TArray<struct FKey> InKey, bool Shift, bool Ctrl, bool Alt); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.SetKeyBinding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetReadyToRecordKeys(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.GetReadyToRecordKeys // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Focus(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.Designer_Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Unfocus(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.Designer_Unfocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_ReadyForInput(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.Designer_ReadyForInput // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnSelected(bool bSelected); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.Designer_OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_DoneWithSetting(struct FText InText); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.Designer_DoneWithSetting // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_RefreshTextColor(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.Designer_RefreshTextColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnKeysRecordReturn(bool Cancel, struct TArray<struct FKey> RetKey, bool Shift, bool Ctrl, bool Alt); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.OnKeysRecordReturn // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Card_GamepadKeyBinding(int32_t EntryPoint); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.ExecuteUbergraph_UMG_Card_GamepadKeyBinding // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnStartRecordKeys__DelegateSignature(bool StartRecord); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.OnStartRecordKeys__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnFocus__DelegateSignature(struct FKey MainKey, struct FKey ViceKey); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.OnFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnKeySet__DelegateSignature(); // Function UMG_Card_GamepadKeyBinding.UMG_Card_GamepadKeyBinding_C.OnKeySet__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

