// WidgetBlueprintGeneratedClass Effect_ExpProgressBar.Effect_ExpProgressBar_C
// Size: 0x544 (Inherited: 0x3d8)
struct UEffect_ExpProgressBar_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* Widget_Hide; // 0x3e0(0x08)
	struct UWidgetAnimation* SkipAnim; // 0x3e8(0x08)
	struct UWidgetAnimation* UpgradeAnim_Hide; // 0x3f0(0x08)
	struct UWidgetAnimation* UpgradeAnim_Show; // 0x3f8(0x08)
	struct UWidgetAnimation* AddScoreAnim; // 0x400(0x08)
	struct UImage* BarLight_AddScore; // 0x408(0x08)
	struct UImage* BarLight_Upgrade; // 0x410(0x08)
	struct UCanvasPanel* Borad_ExpNum; // 0x418(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x420(0x08)
	struct UImage* CountNum; // 0x428(0x08)
	struct UCanvasPanel* CountNumAnchors; // 0x430(0x08)
	struct UTextBlock* CurrentLevel_Text; // 0x438(0x08)
	struct UImage* LevelIcon; // 0x440(0x08)
	struct UTextBlock* NextLevel_Text; // 0x448(0x08)
	struct UImage* NumBG; // 0x450(0x08)
	struct UImage* NumLight; // 0x458(0x08)
	struct UImage* ProgressBar_Exp; // 0x460(0x08)
	struct UMaterialInstanceDynamic* ProgressBar_Dynamic; // 0x468(0x08)
	int32_t RecentlyExp; // 0x470(0x04)
	int32_t CurrentExp; // 0x474(0x04)
	int32_t IncreaseExp; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct TMap<int32_t, int32_t> Level_MaxExp; // 0x480(0x50)
	int32_t UpgradeRemainExp; // 0x4d0(0x04)
	float Origin_EXP; // 0x4d4(0x04)
	float Add_Start_EXP; // 0x4d8(0x04)
	float Add_End_EXP; // 0x4dc(0x04)
	int32_t RecentlyLevel; // 0x4e0(0x04)
	int32_t NextLevel; // 0x4e4(0x04)
	int32_t CurrentLevel; // 0x4e8(0x04)
	bool IsMaxLevel; // 0x4ec(0x01)
	bool IsRemainExp; // 0x4ed(0x01)
	char pad_4EE[0x2]; // 0x4ee(0x02)
	struct TArray<int32_t> NewVar_1; // 0x4f0(0x10)
	struct FMulticastInlineDelegate AddScoreFinishedDispatcher; // 0x500(0x10)
	struct UMaterialInstanceDynamic* CountNum_Dynamic; // 0x510(0x08)
	struct FMulticastInlineDelegate AnimUpdadeDispatcher; // 0x518(0x10)
	bool IsUpgrading; // 0x528(0x01)
	bool IsSkipAddScore; // 0x529(0x01)
	char pad_52A[0x6]; // 0x52a(0x06)
	struct FMulticastInlineDelegate SkipToUpdateDispatcher; // 0x530(0x10)
	int32_t SkipUpgradeLevel; // 0x540(0x04)

	void SequenceEvent__ENTRYPOINTEffect_ExpProgressBar_1(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SequenceEvent__ENTRYPOINTEffect_ExpProgressBar_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WillBeUpdate(float IncreaseExpPercent); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.WillBeUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetParameter_[After]Upgrade(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SetParameter_[After]Upgrade // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetIncreaseExpPercent(float IncreaseExpPercent); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.GetIncreaseExpPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetCurrentExpPercent(float CurrentExpPercent); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.GetCurrentExpPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Init After Upgrade(struct UTexture2D* LevelIcon); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.Init After Upgrade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SkipProgressShow(int32_t Recently_Level, int32_t Max_Level, int32_t Recently_Exp, struct TMap<int32_t, int32_t> Max_Level_Exp, struct UTexture2D* LevelImage, bool WillUpgrade); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SkipProgressShow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCountNumHorizantalSize(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SetCountNumHorizantalSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetAddScoreAnim_EndAnchors(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SetAddScoreAnim_EndAnchors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetAddScoreAnim_EndAnchors_Upgrade(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SetAddScoreAnim_EndAnchors_Upgrade // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetAddScoreAnim_StartAnchors(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SetAddScoreAnim_StartAnchors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetParameter_[After]AddScoreAnim(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SetParameter_[After]AddScoreAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetParameter_[Before]AddScoreAnim(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SetParameter_[Before]AddScoreAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetOriginEXP_BarParameter(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SetOriginEXP_BarParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetAddEXP_Value_[Before]AddScoreAnim(int32_t EXPModifyValue, bool IsHaveRemainEXP); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SetAddEXP_Value_[Before]AddScoreAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetLevelText(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SetLevelText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetOriginEXP_Value(int32_t Recently_Level, int32_t Max_Level, int32_t Recently_Exp, struct TMap<int32_t, int32_t> Max_Level_Exp); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SetOriginEXP_Value // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddScore_IsUpgrade(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.AddScore_IsUpgrade // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitDispatcher(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.InitDispatcher // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Notify_SetRecentlyInfo(int32_t RecentlyLevel, int32_t MaxLevel, int32_t RecentlyExp, struct TMap<int32_t, int32_t> Level_MaxExp, struct UTexture2D* LevelImage); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.Notify_SetRecentlyInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpgradeAnimFinished(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.UpgradeAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddScoreAnimIsFinished(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.AddScoreAnimIsFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Notify_IncreaseExp(int32_t IncreaseExp, struct UTexture2D* LevelIcon); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.Notify_IncreaseExp // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Effect_ExpProgressBar(int32_t EntryPoint); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.ExecuteUbergraph_Effect_ExpProgressBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void SkipToUpdateDispatcher__DelegateSignature(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.SkipToUpdateDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AnimUpdadeDispatcher__DelegateSignature(int32_t NewLevel); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.AnimUpdadeDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddScoreFinishedDispatcher__DelegateSignature(); // Function Effect_ExpProgressBar.Effect_ExpProgressBar_C.AddScoreFinishedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

