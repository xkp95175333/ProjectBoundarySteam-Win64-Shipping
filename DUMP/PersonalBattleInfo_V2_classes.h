// WidgetBlueprintGeneratedClass PersonalBattleInfo_V2.PersonalBattleInfo_V2_C
// Size: 0x6d0 (Inherited: 0x3d8)
struct UPersonalBattleInfo_V2_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UImage* Image_88; // 0x3e0(0x08)
	struct UImage* Image_129; // 0x3e8(0x08)
	struct UImage* Image_131; // 0x3f0(0x08)
	struct UImage* Image_Level; // 0x3f8(0x08)
	struct UImage* Image_ScrollLeft; // 0x400(0x08)
	struct UImage* Image_ScrollRight; // 0x408(0x08)
	struct UVerticalBox* LeftBox; // 0x410(0x08)
	struct UModeInfo_C* ModeInfo; // 0x418(0x08)
	struct UTextBlock* Num_Combat; // 0x420(0x08)
	struct UTextBlock* Num_GameResult; // 0x428(0x08)
	struct UTextBlock* Num_GameTime; // 0x430(0x08)
	struct UTextBlock* Num_NextLevelExp; // 0x438(0x08)
	struct UTextBlock* Num_TotalExp; // 0x440(0x08)
	struct UImage* ProgressBar_Exp; // 0x448(0x08)
	struct UVerticalBox* RightBox; // 0x450(0x08)
	struct UScrollBox* ScrollBox_Medals; // 0x458(0x08)
	struct UTextBlock* Text_CurentExp; // 0x460(0x08)
	struct UTextBlock* TextBlock_assist; // 0x468(0x08)
	struct UTextBlock* TextBlock_Combat; // 0x470(0x08)
	struct UTextBlock* TextBlock_Death; // 0x478(0x08)
	struct UTextBlock* TextBlock_GameResult; // 0x480(0x08)
	struct UTextBlock* TextBlock_GameTime; // 0x488(0x08)
	struct UTextBlock* TextBlock_Kills; // 0x490(0x08)
	struct UTextBlock* TextBlock_NextLevel; // 0x498(0x08)
	struct UTextBlock* TextBlock_Ratio; // 0x4a0(0x08)
	struct UTextBlock* TextBlock_Score; // 0x4a8(0x08)
	struct UTextBlock* TextBlock_StartLevel; // 0x4b0(0x08)
	struct UTextBlock* TextBlock_TotalExp; // 0x4b8(0x08)
	struct UTextBlock* TextBlock_UnlockCount; // 0x4c0(0x08)
	int32_t TotalExp; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct FMulticastInlineDelegate NoDefaultFocus; // 0x4d0(0x10)
	struct FMulticastInlineDelegate Skip; // 0x4e0(0x10)
	struct APBGameState* As Project Boundary State; // 0x4f0(0x08)
	struct TArray<struct FPBAchievementStatInfo> TempCombatAchievementStat; // 0x4f8(0x10)
	struct TArray<struct FText> ItemTextArray; // 0x508(0x10)
	struct UEffect_SummaryUnlock_C* UnLockitemWidget; // 0x518(0x08)
	bool bIsDirty; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct FMulticastInlineDelegate ShowCompleteDispatcher; // 0x528(0x10)
	struct FMatchResultInfo GameMatchResultInfomation; // 0x538(0x130)
	struct FExpLevelInfo LevelInfoTemp; // 0x668(0x68)

	void ShowAddExpProgress(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.ShowAddExpProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowMedals(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.ShowMedals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndShowUnlockwidget(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.EndShowUnlockwidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateInfo(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.UpdateInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowLevelInfo(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.ShowLevelInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartShow(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.StartShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowUnlockItem(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.ShowUnlockItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CreateUnlockItem(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.CreateUnlockItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetArrow(struct UWidget* Item); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.SetArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SkipWidget(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.SkipWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ScrollItemFocus(struct UWidget* Item); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.ScrollItemFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnUnfocused(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.OnUnfocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PersonalBattleInfo_V2(int32_t EntryPoint); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.ExecuteUbergraph_PersonalBattleInfo_V2 // (Final|UbergraphFunction) // @ game+0x1556ec0
	void ShowCompleteDispatcher__DelegateSignature(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.ShowCompleteDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Skip__DelegateSignature(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.Skip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NoDefaultFocus__DelegateSignature(); // Function PersonalBattleInfo_V2.PersonalBattleInfo_V2_C.NoDefaultFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

