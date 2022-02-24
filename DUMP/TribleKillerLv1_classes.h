// BlueprintGeneratedClass TribleKillerLv1.TribleKillerLv1_C
// Size: 0x2a8 (Inherited: 0x230)
struct ATribleKillerLv1_C : APBChallengeState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct APBAchievementManager* AchievementMgr; // 0x240(0x08)
	struct TArray<struct UObject*> DependentClasses; // 0x248(0x10)
	struct TMap<struct FName, int32_t> NeedCounts; // 0x258(0x50)

	void GetProcess(float Rate, struct TArray<struct FProcessData> Data, bool IsDisplay, bool IsFinished); // Function TribleKillerLv1.TribleKillerLv1_C.GetProcess // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckComplete(struct APBPlayerState* PlayerState); // Function TribleKillerLv1.TribleKillerLv1_C.CheckComplete // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CanBeShown(bool CanShow); // Function TribleKillerLv1.TribleKillerLv1_C.CanBeShown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function TribleKillerLv1.TribleKillerLv1_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyCheckChallengeStatus(struct APBPlayerState* InPlayerState); // Function TribleKillerLv1.TribleKillerLv1_C.NotifyCheckChallengeStatus // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TribleKillerLv1(int32_t EntryPoint); // Function TribleKillerLv1.TribleKillerLv1_C.ExecuteUbergraph_TribleKillerLv1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

