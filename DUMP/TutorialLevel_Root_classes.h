// BlueprintGeneratedClass TutorialLevel_Root.TutorialLevel_Root_C
// Size: 0x470 (Inherited: 0x220)
struct ATutorialLevel_Root_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct APlayerController* Controller; // 0x230(0x08)
	struct AGAC_BP_TrainingStage_C* TrainingPawn; // 0x238(0x08)
	enum class RoleNameEnum SetSpawnRole; // 0x240(0x01)
	char pad_241[0xf]; // 0x241(0x0f)
	struct FTransform ActorTransform; // 0x250(0x30)
	int32_t TotalTargetAmount; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UTutorialMainWidget_C* MainWidget; // 0x288(0x08)
	struct TArray<struct ATutorialTarget_Root_C*> TargetArray; // 0x290(0x10)
	struct FMulticastInlineDelegate DispatcherTargetFinish; // 0x2a0(0x10)
	bool LevelIsFinish; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	int32_t TotalFinishTarget; // 0x2b4(0x04)
	struct FMulticastInlineDelegate DisPatcherRefreshNewTarget; // 0x2b8(0x10)
	struct TMap<int32_t, int32_t> TargetInPart; // 0x2c8(0x50)
	int32_t InWhichPart; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FMulticastInlineDelegate DispatcherCreateTargetFinish; // 0x320(0x10)
	struct UPBTutorialWidget_C* SettingWidget; // 0x330(0x08)
	float TickTimer; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct TArray<struct ASteam_Target_Training_C*> SteamTargetArray; // 0x340(0x10)
	struct APBActor_FocusActor_C* FocusActor; // 0x350(0x08)
	enum class EInputDevice CurrentInputDevice; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	int32_t CurrentBannerIndex; // 0x35c(0x04)
	struct FName StringTableID; // 0x360(0x08)
	struct TMap<enum class EInputDevice, struct FName> MatchStringTable; // 0x368(0x50)
	struct TMap<int32_t, struct UDataTable*> BannerDataTableMatch; // 0x3b8(0x50)
	struct UDataTable* CurrentBannerTable; // 0x408(0x08)
	struct UDataTable* CurrentHintTable; // 0x410(0x08)
	int32_t CurrentHintIndex; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct TMap<int32_t, struct UDataTable*> HintDataTableMatch; // 0x420(0x50)

	void BindEventBackMenu(); // Function TutorialLevel_Root.TutorialLevel_Root_C.BindEventBackMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NormalRefreshBannerOnly(); // Function TutorialLevel_Root.TutorialLevel_Root_C.NormalRefreshBannerOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ForceRefreshBanner(); // Function TutorialLevel_Root.TutorialLevel_Root_C.ForceRefreshBanner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NormalRefreshAllHint(); // Function TutorialLevel_Root.TutorialLevel_Root_C.NormalRefreshAllHint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ClearBannerInputImage(); // Function TutorialLevel_Root.TutorialLevel_Root_C.ClearBannerInputImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshBannerInputImage(struct FName InputName); // Function TutorialLevel_Root.TutorialLevel_Root_C.RefreshBannerInputImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddBannerButtonImage(struct FName NewInputName); // Function TutorialLevel_Root.TutorialLevel_Root_C.AddBannerButtonImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Banner Text(struct FText BannerText); // Function TutorialLevel_Root.TutorialLevel_Root_C.Set Banner Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CloseSettingWidget(); // Function TutorialLevel_Root.TutorialLevel_Root_C.CloseSettingWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ForceRefreshHintContent(); // Function TutorialLevel_Root.TutorialLevel_Root_C.ForceRefreshHintContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ForceRefreshAllHint(enum class EInputDevice InputDevice); // Function TutorialLevel_Root.TutorialLevel_Root_C.ForceRefreshAllHint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckTargetFinish(int32_t FinishTargetNum); // Function TutorialLevel_Root.TutorialLevel_Root_C.CheckTargetFinish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh Next Part(); // Function TutorialLevel_Root.TutorialLevel_Root_C.Refresh Next Part // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsAllTarget Finish(int32_t FinishTargetNum, bool IsAllFinish); // Function TutorialLevel_Root.TutorialLevel_Root_C.IsAllTarget Finish // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh Level State(enum class TutorialStateEnum LevelState); // Function TutorialLevel_Root.TutorialLevel_Root_C.Refresh Level State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetTutorialLevelManager(struct ATutorialLevelManager_C* TutorialLevelManager); // Function TutorialLevel_Root.TutorialLevel_Root_C.GetTutorialLevelManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void  BindEventCallTargetFinish(struct ATutorialTarget_Root_C* FinishTarget); // Function TutorialLevel_Root.TutorialLevel_Root_C. BindEventCallTargetFinish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Target Finish Times(int32_t TargetNum, int32_t FinishTimes); // Function TutorialLevel_Root.TutorialLevel_Root_C.Set Target Finish Times // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetTargetIsFinish(int32_t TargetNum, bool NewParam); // Function TutorialLevel_Root.TutorialLevel_Root_C.GetTargetIsFinish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetInstantTarget(int32_t TargetNum, struct ATutorialTarget_Root_C* TargetInstant); // Function TutorialLevel_Root.TutorialLevel_Root_C.GetInstantTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void RemoveAllTarget(); // Function TutorialLevel_Root.TutorialLevel_Root_C.RemoveAllTarget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Target Amount (); // Function TutorialLevel_Root.TutorialLevel_Root_C.Set Target Amount  // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitPawn(enum class RoleNameEnum SetSpawnRole); // Function TutorialLevel_Root.TutorialLevel_Root_C.InitPawn // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Init Widget(); // Function TutorialLevel_Root.TutorialLevel_Root_C.Init Widget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function TutorialLevel_Root.TutorialLevel_Root_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function TutorialLevel_Root.TutorialLevel_Root_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TutorialLevel_Root.TutorialLevel_Root_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void RefreshTarget(); // Function TutorialLevel_Root.TutorialLevel_Root_C.RefreshTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DSP_OnSwitchInputDevice_Event(enum class EInputDevice CurrentDevice); // Function TutorialLevel_Root.TutorialLevel_Root_C.DSP_OnSwitchInputDevice_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TutorialLevel_Root(int32_t EntryPoint); // Function TutorialLevel_Root.TutorialLevel_Root_C.ExecuteUbergraph_TutorialLevel_Root // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void DispatcherCreateTargetFinish__DelegateSignature(); // Function TutorialLevel_Root.TutorialLevel_Root_C.DispatcherCreateTargetFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DisPatcherRefreshNewTarget__DelegateSignature(); // Function TutorialLevel_Root.TutorialLevel_Root_C.DisPatcherRefreshNewTarget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DispatcherTargetFinish__DelegateSignature(int32_t FinishTargetNum); // Function TutorialLevel_Root.TutorialLevel_Root_C.DispatcherTargetFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

