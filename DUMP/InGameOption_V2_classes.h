// WidgetBlueprintGeneratedClass InGameOption_V2.InGameOption_V2_C
// Size: 0x480 (Inherited: 0x3d8)
struct UInGameOption_V2_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UButton* Button_1; // 0x3e0(0x08)
	struct UCard_BigButton_C* Card_Leave; // 0x3e8(0x08)
	struct UCard_BigButton_C* Card_Setting; // 0x3f0(0x08)
	struct UConfirmPage_C* ConfirmPage; // 0x3f8(0x08)
	struct UOverlay* GameOption; // 0x400(0x08)
	struct UInGameOption_Missions_C* InGameOption_Missions; // 0x408(0x08)
	struct UInGameOption_Role_C* InGameOption_Role; // 0x410(0x08)
	struct UOverlay* OptionPad; // 0x418(0x08)
	struct UPBWidgetSwitcher* PBWidgetSwitcher_Content; // 0x420(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x428(0x08)
	struct UUMG_Widget_MainTitle_C* UMG_Widget_MainTitle; // 0x430(0x08)
	struct UUMG_Widget_SmallBaseTabSwitcher_C* UMG_Widget_SmallBaseTabSwitcher; // 0x438(0x08)
	struct FText MapName; // 0x440(0x18)
	struct APlayerController_BP_C* TheController; // 0x458(0x08)
	struct APBDisplayActorManager_BP_C* TempDisplayerActor; // 0x460(0x08)
	struct UObject* LeaveMatchHint; // 0x468(0x08)
	bool NewShow; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct USetting_C* SettingPage; // 0x478(0x08)

	void SwitchToConfirmPage(); // Function InGameOption_V2.InGameOption_V2_C.SwitchToConfirmPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchBackToAOSelectPage(); // Function InGameOption_V2.InGameOption_V2_C.SwitchBackToAOSelectPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function InGameOption_V2.InGameOption_V2_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowDisplayActor(bool NewShow); // Function InGameOption_V2.InGameOption_V2_C.ShowDisplayActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function InGameOption_V2.InGameOption_V2_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function InGameOption_V2.InGameOption_V2_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function InGameOption_V2.InGameOption_V2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CloseEvent(); // Function InGameOption_V2.InGameOption_V2_C.CloseEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__InGameOption_Role_K2Node_ComponentBoundEvent_1_RoleBeenClicked_InGameOption_Role__DelegateSignature(struct FName RoleId); // Function InGameOption_V2.InGameOption_V2_C.BndEvt__InGameOption_Role_K2Node_ComponentBoundEvent_1_RoleBeenClicked_InGameOption_Role__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Show(); // Function InGameOption_V2.InGameOption_V2_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnSwitchOutOfTab(int32_t OutTab); // Function InGameOption_V2.InGameOption_V2_C.OnSwitchOutOfTab // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnSwitchToTab(int32_t InTab); // Function InGameOption_V2.InGameOption_V2_C.OnSwitchToTab // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function InGameOption_V2.InGameOption_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Setting_K2Node_ComponentBoundEvent_7_Click__DelegateSignature(); // Function InGameOption_V2.InGameOption_V2_C.BndEvt__Card_Setting_K2Node_ComponentBoundEvent_7_Click__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Back(); // Function InGameOption_V2.InGameOption_V2_C.Back // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BackFromSetting(); // Function InGameOption_V2.InGameOption_V2_C.BackFromSetting // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function InGameOption_V2.InGameOption_V2_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Leave_K2Node_ComponentBoundEvent_8_Click__DelegateSignature(); // Function InGameOption_V2.InGameOption_V2_C.BndEvt__Card_Leave_K2Node_ComponentBoundEvent_8_Click__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ConfrimCallback(bool bConfirm); // Function InGameOption_V2.InGameOption_V2_C.ConfrimCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function InGameOption_V2.InGameOption_V2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_SmallBaseTabSwitcher_K2Node_ComponentBoundEvent_2_OnTabSwitched__DelegateSignature(int32_t InTabIndex, int32_t OutTabIndex); // Function InGameOption_V2.InGameOption_V2_C.BndEvt__UMG_Widget_SmallBaseTabSwitcher_K2Node_ComponentBoundEvent_2_OnTabSwitched__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_InGameOption_V2(int32_t EntryPoint); // Function InGameOption_V2.InGameOption_V2_C.ExecuteUbergraph_InGameOption_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

