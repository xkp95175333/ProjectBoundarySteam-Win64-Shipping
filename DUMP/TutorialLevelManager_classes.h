// BlueprintGeneratedClass TutorialLevelManager.TutorialLevelManager_C
// Size: 0x2b0 (Inherited: 0x220)
struct ATutorialLevelManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	int32_t InWhichLevel; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct UTutorial_BlackFader_C* FaderWidget; // 0x238(0x08)
	enum class TutorialStateEnum LevelState; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	int32_t WaitingCountDown; // 0x244(0x04)
	struct UTutorialMainWidget_C* MainWidget; // 0x248(0x08)
	struct FMulticastInlineDelegate DispatcherLoadStreamLevel; // 0x250(0x10)
	struct FName CurretnLevel; // 0x260(0x08)
	int32_t IdleCountDown; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct ATutorialLevel_Root_C* CurrentLevelActor; // 0x270(0x08)
	struct FMulticastInlineDelegate DispatcherLoadLevelFinish; // 0x278(0x10)
	struct FTimerHandle TimerHandle_PlayVideo; // 0x288(0x08)
	struct FTimerHandle TimeHandle_WaitForIdle; // 0x290(0x08)
	struct FTimerHandle TimerHandle_WaitingForNextLevel; // 0x298(0x08)
	struct FMulticastInlineDelegate DispatcherResetPlayerTransform; // 0x2a0(0x10)

	void RemoveFaderWidget(); // Function TutorialLevelManager.TutorialLevelManager_C.RemoveFaderWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void VideoOpened(struct FString OpenedUrl); // Function TutorialLevelManager.TutorialLevelManager_C.VideoOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void VideoEndReached(); // Function TutorialLevelManager.TutorialLevelManager_C.VideoEndReached // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayVideo(); // Function TutorialLevelManager.TutorialLevelManager_C.PlayVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void LoadSubLevel(); // Function TutorialLevelManager.TutorialLevelManager_C.LoadSubLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchLevel(); // Function TutorialLevelManager.TutorialLevelManager_C.SwitchLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreparSwitchLevel(); // Function TutorialLevelManager.TutorialLevelManager_C.PreparSwitchLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Wait ForIdle(); // Function TutorialLevelManager.TutorialLevelManager_C.Wait ForIdle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Spawn Level Actor(); // Function TutorialLevelManager.TutorialLevelManager_C.Spawn Level Actor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Init Widget(); // Function TutorialLevelManager.TutorialLevelManager_C.Init Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Leavel Tutorial(); // Function TutorialLevelManager.TutorialLevelManager_C.Leavel Tutorial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitLevel(); // Function TutorialLevelManager.TutorialLevelManager_C.InitLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WaitingForNextLevel(); // Function TutorialLevelManager.TutorialLevelManager_C.WaitingForNextLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshLevelState(enum class TutorialStateEnum LevelState); // Function TutorialLevelManager.TutorialLevelManager_C.RefreshLevelState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct UTutorial_BlackFader_C* Create Fader Widget(); // Function TutorialLevelManager.TutorialLevelManager_C.Create Fader Widget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Fader Quit Show(); // Function TutorialLevelManager.TutorialLevelManager_C.Fader Quit Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Fader Enter Show(); // Function TutorialLevelManager.TutorialLevelManager_C.Fader Enter Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterStreamTrainingLevel(); // Function TutorialLevelManager.TutorialLevelManager_C.EnterStreamTrainingLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PrepareEnterStreamTrainingLevel(int32_t LevelOrder, struct UUserWidget* FromWidget); // Function TutorialLevelManager.TutorialLevelManager_C.PrepareEnterStreamTrainingLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function TutorialLevelManager.TutorialLevelManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void LoadStreamLevel(); // Function TutorialLevelManager.TutorialLevelManager_C.LoadStreamLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function TutorialLevelManager.TutorialLevelManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void UnloadStreamLevel(); // Function TutorialLevelManager.TutorialLevelManager_C.UnloadStreamLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EventLevelLoadFinish(); // Function TutorialLevelManager.TutorialLevelManager_C.EventLevelLoadFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BindEventWhenLevelShown(); // Function TutorialLevelManager.TutorialLevelManager_C.BindEventWhenLevelShown // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TutorialLevelManager(int32_t EntryPoint); // Function TutorialLevelManager.TutorialLevelManager_C.ExecuteUbergraph_TutorialLevelManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void DispatcherResetPlayerTransform__DelegateSignature(); // Function TutorialLevelManager.TutorialLevelManager_C.DispatcherResetPlayerTransform__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DispatcherLoadLevelFinish__DelegateSignature(); // Function TutorialLevelManager.TutorialLevelManager_C.DispatcherLoadLevelFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DispatcherLoadStreamLevel__DelegateSignature(); // Function TutorialLevelManager.TutorialLevelManager_C.DispatcherLoadStreamLevel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

