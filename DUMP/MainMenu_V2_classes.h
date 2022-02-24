// WidgetBlueprintGeneratedClass MainMenu_V2.MainMenu_V2_C
// Size: 0x611 (Inherited: 0x3d8)
struct UMainMenu_V2_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* BlurSceneDuringUI_CamTransit; // 0x3e0(0x08)
	struct UWidgetAnimation* HackFadeLoadingLevelAnim; // 0x3e8(0x08)
	struct UWidgetAnimation* MainFadeIn_Fast; // 0x3f0(0x08)
	struct UWidgetAnimation* MainFadeIn; // 0x3f8(0x08)
	struct UCard_Setting_C* Card_Setting; // 0x400(0x08)
	struct UImage* Image_166; // 0x408(0x08)
	struct UPBWidgetSwitcher* PBWidgetSwitcher_Content; // 0x410(0x08)
	struct UProfile_V2_C* Profile_V2; // 0x418(0x08)
	struct USubMenu_Career_C* SubMenu_Career; // 0x420(0x08)
	struct USubMenu_PLAY_C* SubMenu_PLAY; // 0x428(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x430(0x08)
	struct UUMG_Widget_Top_Panel_C* UMG_Widget_Top_Panel; // 0x438(0x08)
	struct UUMG_Widget_Top_PlayerCard_C* UMG_Widget_Top_PlayerCard; // 0x440(0x08)
	struct UUMG_Widget_VersionBoard_C* UMG_Widget_VersionBoard; // 0x448(0x08)
	struct FSlateBrush Highlight; // 0x450(0x88)
	struct FSlateBrush Normal; // 0x4d8(0x88)
	struct FTransform MngLocation; // 0x560(0x30)
	struct TArray<struct UUserWidget*> WidgetCache; // 0x590(0x10)
	struct UPBMainMenuWidget* CurrentSubWidget; // 0x5a0(0x08)
	struct USubMenu_PLAY_C* SubMenu_PLAY; // 0x5a8(0x08)
	struct USubMenu_Career_C* SubMenu_CustomRole; // 0x5b0(0x08)
	struct UProfile_V2_C* SubMenu_Profile; // 0x5b8(0x08)
	int32_t CurTab; // 0x5c0(0x04)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	struct UMainMenuWidget_Base_C* FinalBattleBoard; // 0x5c8(0x08)
	struct APBDisplayActorManager_BP_C* DisplayActor; // 0x5d0(0x08)
	struct USearchingBoard_V1_C* SearchingBoard; // 0x5d8(0x08)
	float TestRankTimer; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct USetting_C* SettingPage; // 0x5e8(0x08)
	float LastCallRefreshDataFromServerTime; // 0x5f0(0x04)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct USubMenu_Store_C* SubMenu_Store; // 0x5f8(0x08)
	struct USubMenu_Gallary_C* SubMenuGallary; // 0x600(0x08)
	struct UUMG_Card_MessageBoard_C* MessageBox; // 0x608(0x08)
	bool IsInMainMenu; // 0x610(0x01)

	void FindOverViewMode(); // Function MainMenu_V2.MainMenu_V2_C.FindOverViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshBottomTips(); // Function MainMenu_V2.MainMenu_V2_C.RefreshBottomTips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BindEvents(); // Function MainMenu_V2.MainMenu_V2_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Show Sun Menu Store Widget(); // Function MainMenu_V2.MainMenu_V2_C.Show Sun Menu Store Widget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowSubMenuGallaryWidget(); // Function MainMenu_V2.MainMenu_V2_C.ShowSubMenuGallaryWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowSubMenuProfileWidget(); // Function MainMenu_V2.MainMenu_V2_C.ShowSubMenuProfileWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowSubMenuCustomRoleWidget(); // Function MainMenu_V2.MainMenu_V2_C.ShowSubMenuCustomRoleWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Show Sub Menu Play Widget(); // Function MainMenu_V2.MainMenu_V2_C.Show Sub Menu Play Widget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnQuitGame(bool bConfirm); // Function MainMenu_V2.MainMenu_V2_C.OnQuitGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AskToQuitGame(); // Function MainMenu_V2.MainMenu_V2_C.AskToQuitGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnCancelSearchingMatch(bool bConfirm); // Function MainMenu_V2.MainMenu_V2_C.OnCancelSearchingMatch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AskToCancelSearchingMatch(); // Function MainMenu_V2.MainMenu_V2_C.AskToCancelSearchingMatch // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UselessFunc(bool bConfirm); // Function MainMenu_V2.MainMenu_V2_C.UselessFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInputDefaultMode(); // Function MainMenu_V2.MainMenu_V2_C.SetInputDefaultMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowMessageBox(bool bShow); // Function MainMenu_V2.MainMenu_V2_C.ShowMessageBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CreateMessageBoard(); // Function MainMenu_V2.MainMenu_V2_C.CreateMessageBoard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HandleLeaveTeam(bool yes); // Function MainMenu_V2.MainMenu_V2_C.HandleLeaveTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AskToLeaveTeam(); // Function MainMenu_V2.MainMenu_V2_C.AskToLeaveTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MainMenu_V2.MainMenu_V2_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshDataFromServer(); // Function MainMenu_V2.MainMenu_V2_C.RefreshDataFromServer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowSettingMenu(); // Function MainMenu_V2.MainMenu_V2_C.ShowSettingMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MainMenu_V2.MainMenu_V2_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Hold Esc or Option(bool KeyDown); // Function MainMenu_V2.MainMenu_V2_C.Hold Esc or Option // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowFriendPage(); // Function MainMenu_V2.MainMenu_V2_C.ShowFriendPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CreateSearchingBoard(); // Function MainMenu_V2.MainMenu_V2_C.CreateSearchingBoard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckAndShowSummary(); // Function MainMenu_V2.MainMenu_V2_C.CheckAndShowSummary // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MainMenu_V2.MainMenu_V2_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitFocus(); // Function MainMenu_V2.MainMenu_V2_C.InitFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function MainMenu_V2.MainMenu_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Show(); // Function MainMenu_V2.MainMenu_V2_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayHackLoadAnimation(); // Function MainMenu_V2.MainMenu_V2_C.PlayHackLoadAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnSwitchToTab(int32_t TabIndex); // Function MainMenu_V2.MainMenu_V2_C.OnSwitchToTab // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function MainMenu_V2.MainMenu_V2_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function MainMenu_V2.MainMenu_V2_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function MainMenu_V2.MainMenu_V2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnTriangleButtonPressed(); // Function MainMenu_V2.MainMenu_V2_C.OnTriangleButtonPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInteractableOnKeyboard(bool NewInteractable); // Function MainMenu_V2.MainMenu_V2_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Ret(bool bConfirm); // Function MainMenu_V2.MainMenu_V2_C.Ret // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnServerGetUserGameInfoComplete(int32_t ErrorCode); // Function MainMenu_V2.MainMenu_V2_C.OnServerGetUserGameInfoComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BPOnTeamMemberRefreshed_Event(struct TArray<struct FTeamMemberInfo> TeamMember, struct TArray<struct FPBOnlineUserInfo> InviteList); // Function MainMenu_V2.MainMenu_V2_C.BPOnTeamMemberRefreshed_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnMatchMakingStateChanged(enum class ELogicServerTeamMatchmakingState State); // Function MainMenu_V2.MainMenu_V2_C.NotifyOnMatchMakingStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnDisplayLevelShow(); // Function MainMenu_V2.MainMenu_V2_C.OnDisplayLevelShow // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SkipFromFinalBattleBoard(); // Function MainMenu_V2.MainMenu_V2_C.SkipFromFinalBattleBoard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_MainMenu_V2(int32_t EntryPoint); // Function MainMenu_V2.MainMenu_V2_C.ExecuteUbergraph_MainMenu_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

