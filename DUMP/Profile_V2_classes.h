// WidgetBlueprintGeneratedClass Profile_V2.Profile_V2_C
// Size: 0x370 (Inherited: 0x2a8)
struct UProfile_V2_C : UUMG_PageBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UCard_Profile_BottomCard_C* Card_Profile_BottomCard; // 0x2b0(0x08)
	struct UCard_Profile_BottomCard_C* Card_Profile_BottomCard_C_2; // 0x2b8(0x08)
	struct UCard_Profile_BottomCard_C* Card_Profile_BottomCard_C_3; // 0x2c0(0x08)
	struct UCard_Profile_BottomCard_C* Card_Profile_BottomCard_C_4; // 0x2c8(0x08)
	struct UCard_Profile_CharacterProgress_C* Card_Profile_CharacterProgress; // 0x2d0(0x08)
	struct UCard_Profile_LevelBoard_C* Card_Profile_LevelBoard; // 0x2d8(0x08)
	struct UCard_Profile_InfoBox_C* HitRate_Box; // 0x2e0(0x08)
	struct UHorizontalBox* HorizontalBox_StatData; // 0x2e8(0x08)
	struct UImage* Image_358; // 0x2f0(0x08)
	struct UCard_Profile_InfoBox_C* KDA_Box; // 0x2f8(0x08)
	struct UCard_Profile_InfoBox_C* Kill_Box; // 0x300(0x08)
	struct UTextBlock* Percent; // 0x308(0x08)
	struct UImage* ProgressBar_Exp; // 0x310(0x08)
	struct URankInfo1_C* RankInfo1_175; // 0x318(0x08)
	struct UCard_Profile_InfoBox_C* SPM_Box; // 0x320(0x08)
	struct UCard_Profile_InfoBox_C* Time_Box; // 0x328(0x08)
	struct UWrapBox* UniformGridPanel_83; // 0x330(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x338(0x08)
	struct UCard_Profile_InfoBox_C* Win_Box; // 0x340(0x08)
	struct UCard_Profile_InfoBox_C* WinRate_Box; // 0x348(0x08)
	struct UTexture2D* ReturnValueLevelImage; // 0x350(0x08)
	struct UProfile_Challenge_C* ProfileChallengeWidget; // 0x358(0x08)
	struct UMedal_v2_C* MedalChallengeWidget; // 0x360(0x08)
	struct UUMG_CombatSummary_Main_C* CombatSummaryWidget; // 0x368(0x08)

	void ShowWidget(); // Function Profile_V2.Profile_V2_C.ShowWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetUnlockItem(struct TArray<struct FName> InUnlockInfoArray, int32_t InMaxShowLockLevel, int32_t InLevelSection, bool bHasNext); // Function Profile_V2.Profile_V2_C.GetUnlockItem // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateUnlockInfo(); // Function Profile_V2.Profile_V2_C.UpdateUnlockInfo // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateInfo(); // Function Profile_V2.Profile_V2_C.UpdateInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshStatData(struct UPanelWidget* Container); // Function Profile_V2.Profile_V2_C.RefreshStatData // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Player Info(); // Function Profile_V2.Profile_V2_C.Set Player Info // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Profile_V2.Profile_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Profile_BottomCard_C_1_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(); // Function Profile_V2.Profile_V2_C.BndEvt__Card_Profile_BottomCard_C_1_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Profile_BottomCard_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(); // Function Profile_V2.Profile_V2_C.BndEvt__Card_Profile_BottomCard_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Profile_BottomCard_C_2_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(); // Function Profile_V2.Profile_V2_C.BndEvt__Card_Profile_BottomCard_C_2_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function Profile_V2.Profile_V2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRefreshStatData(); // Function Profile_V2.Profile_V2_C.OnRefreshStatData // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Profile_V2_Card_Profile_BottomCard_C_3_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(); // Function Profile_V2.Profile_V2_C.BndEvt__Profile_V2_Card_Profile_BottomCard_C_3_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void MakeupRankList(); // Function Profile_V2.Profile_V2_C.MakeupRankList // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Profile_V2(int32_t EntryPoint); // Function Profile_V2.Profile_V2_C.ExecuteUbergraph_Profile_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

