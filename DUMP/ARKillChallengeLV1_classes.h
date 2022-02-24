// BlueprintGeneratedClass ARKillChallengeLV1.ARKillChallengeLV1_C
// Size: 0x2b8 (Inherited: 0x230)
struct AARKillChallengeLV1_C : APBChallengeState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct TArray<struct FName> ItemIDArray; // 0x240(0x10)
	struct APBAchievementManager* AchievementMgr; // 0x250(0x08)
	struct TArray<struct UObject*> DependentClasses; // 0x258(0x10)
	struct TMap<struct FName, int32_t> NeedCounts; // 0x268(0x50)

	void GetProcess(float Rate, struct TArray<struct FProcessData> Data, bool IsDisplay, bool IsFinished); // Function ARKillChallengeLV1.ARKillChallengeLV1_C.GetProcess // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetWeaponKillCount(struct FName Key, struct TMap<struct FName, int64_t> InDataStatistics, int64_t WeaponKillCount); // Function ARKillChallengeLV1.ARKillChallengeLV1_C.GetWeaponKillCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckComplete(struct APBPlayerState* PlayerState); // Function ARKillChallengeLV1.ARKillChallengeLV1_C.CheckComplete // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CanBeShown(bool CanShow); // Function ARKillChallengeLV1.ARKillChallengeLV1_C.CanBeShown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function ARKillChallengeLV1.ARKillChallengeLV1_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyCheckChallengeStatus(struct APBPlayerState* InPlayerState); // Function ARKillChallengeLV1.ARKillChallengeLV1_C.NotifyCheckChallengeStatus // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ARKillChallengeLV1(int32_t EntryPoint); // Function ARKillChallengeLV1.ARKillChallengeLV1_C.ExecuteUbergraph_ARKillChallengeLV1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

