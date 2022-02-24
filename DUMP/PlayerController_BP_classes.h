// BlueprintGeneratedClass PlayerController_BP.PlayerController_BP_C
// Size: 0xde8 (Inherited: 0xaf8)
struct APlayerController_BP_C : APBPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf8(0x08)
	struct UChatComponent_C* ChatComponent; // 0xb00(0x08)
	enum class ETimelineDirection playeFX__Direction_0087F46F46ECEB365A2DBD917A31870C; // 0xb08(0x01)
	char pad_B09[0x7]; // 0xb09(0x07)
	struct UTimelineComponent* playeFX; // 0xb10(0x08)
	bool IsVR?; // 0xb18(0x01)
	char pad_B19[0x7]; // 0xb19(0x07)
	struct UPBUserWidget* BattleMatchInfor; // 0xb20(0x08)
	struct TArray<struct UStaticMesh*> StaticMeshClasses; // 0xb28(0x10)
	bool bInGameMenu; // 0xb38(0x01)
	char pad_B39[0x7]; // 0xb39(0x07)
	struct UFinalBattleBoard_V2_C* FinalBattleBoard; // 0xb40(0x08)
	bool HasBattleBoard; // 0xb48(0x01)
	char pad_B49[0x7]; // 0xb49(0x07)
	struct FMulticastInlineDelegate CloseWideget; // 0xb50(0x10)
	struct FMulticastInlineDelegate CanWarmUp; // 0xb60(0x10)
	struct FMulticastInlineDelegate StartWaitingToJoin; // 0xb70(0x10)
	struct UPBMainMenuWidget* CSTMWidget; // 0xb80(0x08)
	struct FTimerHandle ExitTimeHandle; // 0xb88(0x08)
	bool DebugShowFPS; // 0xb90(0x01)
	char pad_B91[0x7]; // 0xb91(0x07)
	struct UPBUserWidget* WinnerWidget; // 0xb98(0x08)
	bool bWaitToStart; // 0xba0(0x01)
	bool bWarmupEnd; // 0xba1(0x01)
	char pad_BA2[0x6]; // 0xba2(0x06)
	struct ULeaveMatch_C* LeaveTraining; // 0xba8(0x08)
	struct FVector ControllerRotationRate; // 0xbb0(0x0c)
	float Pitch; // 0xbbc(0x04)
	float Yaw; // 0xbc0(0x04)
	float TurnRate; // 0xbc4(0x04)
	float LookUpRate; // 0xbc8(0x04)
	char pad_BCC[0x4]; // 0xbcc(0x04)
	struct UPBUserWidget* WinnerWidgetClass; // 0xbd0(0x08)
	struct FTimerHandle LeaveTestWeaponTimerHandle; // 0xbd8(0x08)
	struct FMulticastInlineDelegate ShowGameBoardWidget; // 0xbe0(0x10)
	struct FMulticastInlineDelegate TeamSwitchFailed; // 0xbf0(0x10)
	struct USetMouseInput_C* SetMouseSensitivity; // 0xc00(0x08)
	float MouseY; // 0xc08(0x04)
	float MouseX; // 0xc0c(0x04)
	float DyingCamraTurnRate; // 0xc10(0x04)
	float DyingCameraLookUpRate; // 0xc14(0x04)
	float DyingCameraPitch; // 0xc18(0x04)
	float DyingCameraYaw; // 0xc1c(0x04)
	struct UCurveFloat* FOVMap; // 0xc20(0x08)
	bool DoIFired; // 0xc28(0x01)
	bool IsInTutorialLevel; // 0xc29(0x01)
	char pad_C2A[0x6]; // 0xc2a(0x06)
	struct FMulticastInlineDelegate ShowTrainingWidget; // 0xc30(0x10)
	struct FMulticastInlineDelegate ShowOptionDispatcher; // 0xc40(0x10)
	struct UWelcomeMenu_V2_C* HackEnterTutorial; // 0xc50(0x08)
	struct AOBCamera_Pawn_C* MyOBCameraPawn_Pointer; // 0xc58(0x08)
	struct UTestRankList_C* RankTestWidget; // 0xc60(0x08)
	float InputF; // 0xc68(0x04)
	float InputU; // 0xc6c(0x04)
	float InputR; // 0xc70(0x04)
	bool HasInput; // 0xc74(0x01)
	char pad_C75[0x3]; // 0xc75(0x03)
	struct FVector LocalInputVector; // 0xc78(0x0c)
	float CahceRoll; // 0xc84(0x04)
	float RollScaler; // 0xc88(0x04)
	float InputRollBase; // 0xc8c(0x04)
	struct FTimerHandle StopRoll; // 0xc90(0x08)
	float FinalyInput; // 0xc98(0x04)
	float inputAxis; // 0xc9c(0x04)
	float InterpSpeed; // 0xca0(0x04)
	float RollPower; // 0xca4(0x04)
	float RollSpeed; // 0xca8(0x04)
	float RollBrakeSpeed; // 0xcac(0x04)
	bool bIsInDyingCameraState; // 0xcb0(0x01)
	char pad_CB1[0x7]; // 0xcb1(0x07)
	struct AGAC_BP_C* BP_KillCamFocusTemp; // 0xcb8(0x08)
	struct FPBInvitation HandlingInvitation; // 0xcc0(0xf8)
	struct UCard_ConfirmPage_C* ConfirmPage; // 0xdb8(0x08)
	struct FMulticastInlineDelegate TempCaller; // 0xdc0(0x10)
	bool IsVisitor; // 0xdd0(0x01)
	bool CanSeeVisitor; // 0xdd1(0x01)
	char pad_DD2[0x6]; // 0xdd2(0x06)
	struct UUMG_ShootingRangeSetting_C* ShootingRangeOption; // 0xdd8(0x08)
	struct UInGameOption_V2_C* InGameOption; // 0xde0(0x08)

	void EnableOutlineWithInputCharacter(struct APBCharacter* InVisitor); // Function PlayerController_BP.PlayerController_BP_C.EnableOutlineWithInputCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HandleConfirmLeaveGAME(bool Condition); // Function PlayerController_BP.PlayerController_BP_C.HandleConfirmLeaveGAME // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HandleConfirmLeaveTEAM(bool Condition); // Function PlayerController_BP.PlayerController_BP_C.HandleConfirmLeaveTEAM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BlockedUserInTEAM(); // Function PlayerController_BP.PlayerController_BP_C.BlockedUserInTEAM // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BlockedUserInGAME(); // Function PlayerController_BP.PlayerController_BP_C.BlockedUserInGAME // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnReplyInvitation(bool bJoin); // Function PlayerController_BP.PlayerController_BP_C.OnReplyInvitation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInvitationShowUp(struct FPBInvitation HandlingInvitation); // Function PlayerController_BP.PlayerController_BP_C.OnInvitationShowUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowDisplayMap(); // Function PlayerController_BP.PlayerController_BP_C.ShowDisplayMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInputValue(); // Function PlayerController_BP.PlayerController_BP_C.SetInputValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnableOutlineWithFocuesCharacter(); // Function PlayerController_BP.PlayerController_BP_C.EnableOutlineWithFocuesCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DisableOutlineWithFocuseCharacter(); // Function PlayerController_BP.PlayerController_BP_C.DisableOutlineWithFocuseCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopRollFC(); // Function PlayerController_BP.PlayerController_BP_C.StopRollFC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Show Scoreboard(bool NewShow); // Function PlayerController_BP.PlayerController_BP_C.Show Scoreboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void LeaveTutorialLevel(); // Function PlayerController_BP.PlayerController_BP_C.LeaveTutorialLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SpawnOBCamera(); // Function PlayerController_BP.PlayerController_BP_C.SpawnOBCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CanShowFader(); // Function PlayerController_BP.PlayerController_BP_C.CanShowFader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BP_UpdateThreePersonCamera(float DeltaTime); // Function PlayerController_BP.PlayerController_BP_C.BP_UpdateThreePersonCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BP_UpdateKillCamera(float DeltaTime); // Function PlayerController_BP.PlayerController_BP_C.BP_UpdateKillCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BP_NotifyStopThreePersonCamera(); // Function PlayerController_BP.PlayerController_BP_C.BP_NotifyStopThreePersonCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BP_NotifyStartThreePersonCamera(); // Function PlayerController_BP.PlayerController_BP_C.BP_NotifyStartThreePersonCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BP_NotifyStopKillCamera(); // Function PlayerController_BP.PlayerController_BP_C.BP_NotifyStopKillCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BP_NotifyStartKillCamera(); // Function PlayerController_BP.PlayerController_BP_C.BP_NotifyStartKillCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCameraSensitivityUp(); // Function PlayerController_BP.PlayerController_BP_C.SetCameraSensitivityUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCameraSensitivityDown(); // Function PlayerController_BP.PlayerController_BP_C.SetCameraSensitivityDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetADSSensitivityUp(); // Function PlayerController_BP.PlayerController_BP_C.SetADSSensitivityUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetADSSensitivityDown(); // Function PlayerController_BP.PlayerController_BP_C.SetADSSensitivityDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsGamePlaying(bool Display); // Function PlayerController_BP.PlayerController_BP_C.IsGamePlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Reset View Target on Close Option(); // Function PlayerController_BP.PlayerController_BP_C.Reset View Target on Close Option // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BackMainWidget(); // Function PlayerController_BP.PlayerController_BP_C.BackMainWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReadyLeaveTestWeapon(); // Function PlayerController_BP.PlayerController_BP_C.ReadyLeaveTestWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetBattleMatchBoardClass(struct UPBUserWidget* battleBoardClass); // Function PlayerController_BP.PlayerController_BP_C.GetBattleMatchBoardClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Spawn2DIndicator(struct APawn* Pawn); // Function PlayerController_BP.PlayerController_BP_C.Spawn2DIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowVoteMapWidget(); // Function PlayerController_BP.PlayerController_BP_C.ShowVoteMapWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetCommondInfo(struct FString Key, struct FString Value); // Function PlayerController_BP.PlayerController_BP_C.GetCommondInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetAimingPointLeftRightShow(bool bShow); // Function PlayerController_BP.PlayerController_BP_C.SetAimingPointLeftRightShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DropBlood(); // Function PlayerController_BP.PlayerController_BP_C.DropBlood // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void playeFX__FinishedFunc(); // Function PlayerController_BP.PlayerController_BP_C.playeFX__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void playeFX__UpdateFunc(); // Function PlayerController_BP.PlayerController_BP_C.playeFX__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_AddCameraSensitivity_K2Node_InputActionEvent_8(struct FKey Key); // Function PlayerController_BP.PlayerController_BP_C.InpActEvt_AddCameraSensitivity_K2Node_InputActionEvent_8 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_AddCameraSensitivity_K2Node_InputActionEvent_7(struct FKey Key); // Function PlayerController_BP.PlayerController_BP_C.InpActEvt_AddCameraSensitivity_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_AddAimSensitivity_K2Node_InputActionEvent_6(struct FKey Key); // Function PlayerController_BP.PlayerController_BP_C.InpActEvt_AddAimSensitivity_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_AddAimSensitivity_K2Node_InputActionEvent_5(struct FKey Key); // Function PlayerController_BP.PlayerController_BP_C.InpActEvt_AddAimSensitivity_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_ReduceAimSensitivity_K2Node_InputActionEvent_4(struct FKey Key); // Function PlayerController_BP.PlayerController_BP_C.InpActEvt_ReduceAimSensitivity_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_ReduceAimSensitivity_K2Node_InputActionEvent_3(struct FKey Key); // Function PlayerController_BP.PlayerController_BP_C.InpActEvt_ReduceAimSensitivity_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_ReduceCameraSensitivity_K2Node_InputActionEvent_2(struct FKey Key); // Function PlayerController_BP.PlayerController_BP_C.InpActEvt_ReduceCameraSensitivity_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_ReduceCameraSensitivity_K2Node_InputActionEvent_1(struct FKey Key); // Function PlayerController_BP.PlayerController_BP_C.InpActEvt_ReduceCameraSensitivity_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PlayerController_BP.PlayerController_BP_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void DropHealthNotice(); // Function PlayerController_BP.PlayerController_BP_C.DropHealthNotice // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PlayerController_BP.PlayerController_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void EventOnMatchEnd(); // Function PlayerController_BP.PlayerController_BP_C.EventOnMatchEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyClearInterface(); // Function PlayerController_BP.PlayerController_BP_C.NotifyClearInterface // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyFirstTimeInGame(); // Function PlayerController_BP.PlayerController_BP_C.NotifyFirstTimeInGame // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CloseOptionMenu(); // Function PlayerController_BP.PlayerController_BP_C.CloseOptionMenu // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStartWarmUp(); // Function PlayerController_BP.PlayerController_BP_C.NotifyStartWarmUp // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEndWarmUp(); // Function PlayerController_BP.PlayerController_BP_C.NotifyEndWarmUp // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStartWaitingToJoin(); // Function PlayerController_BP.PlayerController_BP_C.NotifyStartWaitingToJoin // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyClientSendRoundEndEvent(enum class EPBGameResult GameResult); // Function PlayerController_BP.PlayerController_BP_C.NotifyClientSendRoundEndEvent // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowSelectWeaponWidget(); // Function PlayerController_BP.PlayerController_BP_C.ShowSelectWeaponWidget // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifySwitchTeamFailed(); // Function PlayerController_BP.PlayerController_BP_C.NotifySwitchTeamFailed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStartKillCamera(); // Function PlayerController_BP.PlayerController_BP_C.NotifyStartKillCamera // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStopKillCamera(); // Function PlayerController_BP.PlayerController_BP_C.NotifyStopKillCamera // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStartThreePersonCamera(); // Function PlayerController_BP.PlayerController_BP_C.NotifyStartThreePersonCamera // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStopThreePersonCamera(); // Function PlayerController_BP.PlayerController_BP_C.NotifyStopThreePersonCamera // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyUpdateKillCamera(float DeltaTime); // Function PlayerController_BP.PlayerController_BP_C.NotifyUpdateKillCamera // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function PlayerController_BP.PlayerController_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PossesMeToOBCamera(struct APlayerController_BP_C* InController); // Function PlayerController_BP.PlayerController_BP_C.PossesMeToOBCamera // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_NotifyResetRecognitionEnhancementMID(); // Function PlayerController_BP.PlayerController_BP_C.K2_NotifyResetRecognitionEnhancementMID // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ServerHasInput(); // Function PlayerController_BP.PlayerController_BP_C.ServerHasInput // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ServerHaveNoInput(); // Function PlayerController_BP.PlayerController_BP_C.ServerHaveNoInput // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_CheckInput(); // Function PlayerController_BP.PlayerController_BP_C.Event_CheckInput // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void QuitCSTM(); // Function PlayerController_BP.PlayerController_BP_C.QuitCSTM // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void LoadMap(); // Function PlayerController_BP.PlayerController_BP_C.LoadMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnConfirmMessageShowUp(struct FConfirmInfo Info); // Function PlayerController_BP.PlayerController_BP_C.NotifyOnConfirmMessageShowUp // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void OnConfirmFromUI(bool bYes); // Function PlayerController_BP.PlayerController_BP_C.OnConfirmFromUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_NotifyBeKilled(struct APBPlayerState* KillerPlayerState, struct APBPlayerState* KilledPlayerState, struct UDamageType* KillerDamageType, enum class EPBHitZone HitZone, struct UTextureRenderTarget2D* InInstigatorRenderTarget, struct UTexture* InInstigatorTexture); // Function PlayerController_BP.PlayerController_BP_C.K2_NotifyBeKilled // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowCursor(); // Function PlayerController_BP.PlayerController_BP_C.ShowCursor // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_OpenShootingRangeOption(); // Function PlayerController_BP.PlayerController_BP_C.K2_OpenShootingRangeOption // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_CloseShootingRangeOption(); // Function PlayerController_BP.PlayerController_BP_C.K2_CloseShootingRangeOption // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_OpenGameOption(); // Function PlayerController_BP.PlayerController_BP_C.K2_OpenGameOption // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_CloseGameOption(); // Function PlayerController_BP.PlayerController_BP_C.K2_CloseGameOption // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_PressedScoreBoard(); // Function PlayerController_BP.PlayerController_BP_C.K2_PressedScoreBoard // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_CloseScoreBoardForKeyboard(); // Function PlayerController_BP.PlayerController_BP_C.K2_CloseScoreBoardForKeyboard // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void QuitTutorial(); // Function PlayerController_BP.PlayerController_BP_C.QuitTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PlayerController_BP(int32_t EntryPoint); // Function PlayerController_BP.PlayerController_BP_C.ExecuteUbergraph_PlayerController_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void TempCaller__DelegateSignature(bool bConfirm); // Function PlayerController_BP.PlayerController_BP_C.TempCaller__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOptionDispatcher__DelegateSignature(bool Open); // Function PlayerController_BP.PlayerController_BP_C.ShowOptionDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowTrainingWidget__DelegateSignature(); // Function PlayerController_BP.PlayerController_BP_C.ShowTrainingWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TeamSwitchFailed__DelegateSignature(); // Function PlayerController_BP.PlayerController_BP_C.TeamSwitchFailed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowGameBoardWidget__DelegateSignature(); // Function PlayerController_BP.PlayerController_BP_C.ShowGameBoardWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartWaitingToJoin__DelegateSignature(); // Function PlayerController_BP.PlayerController_BP_C.StartWaitingToJoin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CanWarmUp__DelegateSignature(); // Function PlayerController_BP.PlayerController_BP_C.CanWarmUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CloseWideget__DelegateSignature(); // Function PlayerController_BP.PlayerController_BP_C.CloseWideget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

