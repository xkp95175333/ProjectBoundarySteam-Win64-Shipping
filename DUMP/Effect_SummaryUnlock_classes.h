// WidgetBlueprintGeneratedClass Effect_SummaryUnlock.Effect_SummaryUnlock_C
// Size: 0x63a (Inherited: 0x3d8)
struct UEffect_SummaryUnlock_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* SkipUnlock; // 0x3e0(0x08)
	struct UWidgetAnimation* SkipUpgradeAnim; // 0x3e8(0x08)
	struct UWidgetAnimation* UpgradeAnim_Skip_End; // 0x3f0(0x08)
	struct UWidgetAnimation* UpgradeAnim_End; // 0x3f8(0x08)
	struct UWidgetAnimation* UpgradeAnim; // 0x400(0x08)
	struct UWidgetAnimation* Hide_Exp; // 0x408(0x08)
	struct UWidgetAnimation* Show_Exp; // 0x410(0x08)
	struct UWidgetAnimation* CountTime; // 0x418(0x08)
	struct UWidgetAnimation* Show_MainBoard; // 0x420(0x08)
	struct UWidgetAnimation* Show_Unlock_Single; // 0x428(0x08)
	struct UWidgetAnimation* Hide_MainBoard; // 0x430(0x08)
	struct UWidgetAnimation* SkipTips; // 0x438(0x08)
	struct UWidgetAnimation* ShowUnlock; // 0x440(0x08)
	struct UCanvasPanel* BackGroundBoard; // 0x448(0x08)
	struct UVerticalBox* Board_AddScoreItem; // 0x450(0x08)
	struct UEffect_ExpProgressBar_C* Effect_ExpProgressBar; // 0x458(0x08)
	struct UCanvasPanel* ExpInfo; // 0x460(0x08)
	struct UImage* Image; // 0x468(0x08)
	struct UImage* Image_503; // 0x470(0x08)
	struct UOverlay* ItemBox; // 0x478(0x08)
	struct UHorizontalBox* ItemSummary; // 0x480(0x08)
	struct UImage* MainBG; // 0x488(0x08)
	struct UCanvasPanel* MainBoard; // 0x490(0x08)
	struct UTextBlock* NewLevelText; // 0x498(0x08)
	struct UPBInputTipsImage* PBInputTipsImage_1; // 0x4a0(0x08)
	struct UTextBlock* ShowTimeText; // 0x4a8(0x08)
	struct UHorizontalBox* SkipTipsBoard; // 0x4b0(0x08)
	struct UImage* Unlock_Lattice; // 0x4b8(0x08)
	struct UCanvasPanel* UnlockBoard; // 0x4c0(0x08)
	struct UCanvasPanel* UnlockBoard_SummaryItem; // 0x4c8(0x08)
	struct UCanvasPanel* Upgrade; // 0x4d0(0x08)
	struct UImage* Upgrade_Lattice; // 0x4d8(0x08)
	struct UCanvasPanel* UpgradeBoard; // 0x4e0(0x08)
	struct UImage* UpgradeIcon; // 0x4e8(0x08)
	int32_t ItemIndex; // 0x4f0(0x04)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct TArray<struct UEffect_UnlockSingle_C*> UnlockItemWidget_InAnim; // 0x4f8(0x10)
	struct TArray<struct UEffect_UnlockSummary_C*> UnlockItemWidget_InSummary; // 0x508(0x10)
	struct TArray<struct UTexture2D*> UnlockItemTexture; // 0x518(0x10)
	struct TArray<struct FText> UnlockItemName; // 0x528(0x10)
	bool bIsCanCloseBySkip; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct FMulticastInlineDelegate CloseSelf; // 0x540(0x10)
	struct FTimerHandle DelayShowNextItem; // 0x550(0x08)
	struct FTimerHandle DelayShowNextUnlockItemAndOutCurrentItem; // 0x558(0x08)
	int32_t AutoClosetime; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct FTimerHandle AutoCloseTimeHandle; // 0x568(0x08)
	struct TArray<struct UEffect_AddScoreItem_C*> AddScoreItem; // 0x570(0x10)
	struct TArray<struct FText> AddScoreTypeName; // 0x580(0x10)
	struct TArray<int32_t> AddScoreValue; // 0x590(0x10)
	int32_t AddScoreIndex; // 0x5a0(0x04)
	bool IsUnlockedSth; // 0x5a4(0x01)
	char pad_5A5[0x3]; // 0x5a5(0x03)
	struct FTimerHandle HoldOnUpgradeTimerHandle; // 0x5a8(0x08)
	bool IsUpgrade; // 0x5b0(0x01)
	bool bIsShowingAddEXP; // 0x5b1(0x01)
	char pad_5B2[0x6]; // 0x5b2(0x06)
	struct FTimerHandle AddNextScoreTH; // 0x5b8(0x08)
	struct FExpLevelInfo PlayerLevelInfo; // 0x5c0(0x68)
	int32_t MaxLevel; // 0x628(0x04)
	bool bIsSkipLevelShow; // 0x62c(0x01)
	bool bIsShowFinalLevelAnim; // 0x62d(0x01)
	bool bIsSkipWaitLevelHideTime; // 0x62e(0x01)
	bool IsUpgrading; // 0x62f(0x01)
	int32_t NowUpdateToLevel; // 0x630(0x04)
	bool bIsPlayedSkipUpgradeAnim; // 0x634(0x01)
	bool SkipUpdateAnimNeedToSwitch; // 0x635(0x01)
	bool HasPlayedSkipUpdateAnim; // 0x636(0x01)
	bool UpgradeAnimIsFinished; // 0x637(0x01)
	bool IsShowingItemSummary; // 0x638(0x01)
	bool UnlockAnimIsFinished; // 0x639(0x01)

	void SequenceEvent__ENTRYPOINTEffect_SummaryUnlock_4(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.SequenceEvent__ENTRYPOINTEffect_SummaryUnlock_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent__ENTRYPOINTEffect_SummaryUnlock_3(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.SequenceEvent__ENTRYPOINTEffect_SummaryUnlock_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent__ENTRYPOINTEffect_SummaryUnlock_2(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.SequenceEvent__ENTRYPOINTEffect_SummaryUnlock_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent__ENTRYPOINTEffect_SummaryUnlock_1(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.SequenceEvent__ENTRYPOINTEffect_SummaryUnlock_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowFinalExpBoard(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.ShowFinalExpBoard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayUpdateAnimSkip(int32_t Level); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.PlayUpdateAnimSkip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayUpdateAnim(int32_t Level); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.PlayUpdateAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply HandleSkip(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.HandleSkip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowFinalScoreInfo(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.ShowFinalScoreInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckIsShowUnlockItem(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.CheckIsShowUnlockItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayUnlockAnimation(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.PlayUnlockAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SkipExpProgressBarAnim(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.SkipExpProgressBarAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SkipUnlockItemShow(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.SkipUnlockItemShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowAddExpProgress(int32_t RecentlyLevel, int32_t MaxLevel, int32_t RecentlyExp, struct TMap<int32_t, int32_t> Level_MaxExp, struct FExpLevelInfo PlayerLevelInfo); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.ShowAddExpProgress // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CountCloseTime(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.CountCloseTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowSummary(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.ShowSummary // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowNextUnlockItemAndOutCurrentItem(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.ShowNextUnlockItemAndOutCurrentItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadAcceptKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.GamepadAcceptKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ItemIn(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.ItemIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void End(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.End // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIcon(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.ShowIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WidgetAnimationEvt_SkipTips_K2Node_WidgetAnimationEvent_2(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.WidgetAnimationEvt_SkipTips_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x1556ec0
	void ShowMainBoard(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.ShowMainBoard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartUpgrade(int32_t NewLevel); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.StartUpgrade // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HoldOnUpgrade(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.HoldOnUpgrade // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void LoopAgain(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.LoopAgain // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitProgressBarDispatcher(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.InitProgressBarDispatcher // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetEXPProgressValue(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.SetEXPProgressValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AfterUpgrade(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.AfterUpgrade // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SkipToUpgrade(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.SkipToUpgrade // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartAddScore(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.StartAddScore // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SkipUpdateAnimFinished(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.SkipUpdateAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateAnimSwitchToSkip(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.UpdateAnimSwitchToSkip // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Effect_SummaryUnlock(int32_t EntryPoint); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.ExecuteUbergraph_Effect_SummaryUnlock // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void CloseSelf__DelegateSignature(); // Function Effect_SummaryUnlock.Effect_SummaryUnlock_C.CloseSelf__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

