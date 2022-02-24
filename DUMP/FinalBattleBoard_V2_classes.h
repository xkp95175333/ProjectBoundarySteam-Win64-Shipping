// WidgetBlueprintGeneratedClass FinalBattleBoard_V2.FinalBattleBoard_V2_C
// Size: 0x480 (Inherited: 0x3d8)
struct UFinalBattleBoard_V2_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UBattleMatchBoard_FFA_V2_C* BattleMatchBoard_FFA_V2; // 0x3e0(0x08)
	struct UButton* Button_SKIP; // 0x3e8(0x08)
	struct UTextBlock* CloseTimeText; // 0x3f0(0x08)
	struct UGameScoreBoard_V2_C* GameScoreBoard_V2; // 0x3f8(0x08)
	struct UMissions_C* Mission; // 0x400(0x08)
	struct UWidgetSwitcher* PBWidgetSwitcher_Content; // 0x408(0x08)
	struct UPersonalBattleInfo_V2_C* PersonalBattleInfo; // 0x410(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x418(0x08)
	struct UUMG_Widget_MainTitle_C* UMG_Widget_MainTitle; // 0x420(0x08)
	struct UUMG_Widget_SmallBaseTabSwitcher_C* UMG_Widget_SmallBaseTabSwitcher; // 0x428(0x08)
	struct TArray<struct UUserWidget*> SummaryWidgets; // 0x430(0x10)
	int32_t SWIndex; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct TArray<struct UBorder*> BorderArray; // 0x448(0x10)
	struct TArray<struct UTextBlock*> NavTagText; // 0x458(0x10)
	int32_t CurTab; // 0x468(0x04)
	int32_t SkipIndex; // 0x46c(0x04)
	int32_t AutoClosetime; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct FTimerHandle AutoCloseTimeHandle; // 0x478(0x08)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartCountCloseTime(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.StartCountCloseTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CountCloseTime(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.CountCloseTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowInChildWidget(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.ShowInChildWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Important_BackWithNoFocus(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.Important_BackWithNoFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Important_RefreshSkipIndexForSkip(int32_t In CurIndex); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.Important_RefreshSkipIndexForSkip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Important_ShowNextTabWhileSkip(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.Important_ShowNextTabWhileSkip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Important_ContinueToFindMatchAfterAllSkip(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.Important_ContinueToFindMatchAfterAllSkip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Important_SetFather(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.Important_SetFather // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowWidget(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.ShowWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Init(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnSwitchToTab(int32_t TabIndex); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.OnSwitchToTab // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Show(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetButtonFocus(); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.SetButtonFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_SmallBaseTabSwitcher_K2Node_ComponentBoundEvent_1_OnTabSwitched__DelegateSignature(int32_t InTabIndex, int32_t OutTabIndex); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.BndEvt__UMG_Widget_SmallBaseTabSwitcher_K2Node_ComponentBoundEvent_1_OnTabSwitched__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_FinalBattleBoard_V2(int32_t EntryPoint); // Function FinalBattleBoard_V2.FinalBattleBoard_V2_C.ExecuteUbergraph_FinalBattleBoard_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

