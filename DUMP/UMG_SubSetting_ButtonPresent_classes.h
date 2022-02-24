// WidgetBlueprintGeneratedClass UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C
// Size: 0x4b8 (Inherited: 0x3d8)
struct UUMG_SubSetting_ButtonPresent_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UPBInputTipsImage* LeaveKeyBinding; // 0x3e0(0x08)
	struct UUMG_Card_GamepadKeyBinding_C* MoveUp; // 0x3e8(0x08)
	struct UOverlay* TipsOverlay; // 0x3f0(0x08)
	struct UWidgetSwitcher* TipsSwitcher; // 0x3f8(0x08)
	struct UUMG_GamepadView_C* UMG_GamepadView; // 0x400(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x408(0x08)
	struct UUniformGridPanel* UniformGridPanel_BindingList; // 0x410(0x08)
	struct UUMG_Card_GamepadKeyBinding_C* UseOrReload; // 0x418(0x08)
	struct FMulticastInlineDelegate NoDefaultFocus; // 0x420(0x10)
	struct FMulticastInlineDelegate Skip; // 0x430(0x10)
	struct TMap<struct FString, float> CompletetChallengeArray; // 0x440(0x50)
	struct FString MaxProcessName; // 0x490(0x10)
	float MaxProcessData; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct TArray<struct FString> TempGameRoundChallengeAchievement; // 0x4a8(0x10)

	void ConfirmReset(bool bConfirm); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.ConfirmReset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ConfirmLeave(bool bConfirm); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.ConfirmLeave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowTips(bool bLeaveBinindTips); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.ShowTips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsAllKeyAvaliable(bool bReady); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.IsAllKeyAvaliable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ScrollItemFocus(struct UWidget* Item); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.ScrollItemFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UseOrReload_K2Node_ComponentBoundEvent_0_OnKeySet__DelegateSignature(); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.BndEvt__UseOrReload_K2Node_ComponentBoundEvent_0_OnKeySet__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnFocusAtButtons(struct FKey MainKey, struct FKey ViceKey); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.OnFocusAtButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartRecord(bool StartRecord); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.StartRecord // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_SubSetting_ButtonPresent(int32_t EntryPoint); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.ExecuteUbergraph_UMG_SubSetting_ButtonPresent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Skip__DelegateSignature(); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.Skip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NoDefaultFocus__DelegateSignature(); // Function UMG_SubSetting_ButtonPresent.UMG_SubSetting_ButtonPresent_C.NoDefaultFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

