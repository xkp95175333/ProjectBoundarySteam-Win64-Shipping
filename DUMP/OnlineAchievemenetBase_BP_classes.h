// BlueprintGeneratedClass OnlineAchievemenetBase_BP.OnlineAchievemenetBase_BP_C
// Size: 0x248 (Inherited: 0x230)
struct AOnlineAchievemenetBase_BP_C : APBChallengeState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct FName AchievementName; // 0x240(0x08)

	void CompleteAchievement(); // Function OnlineAchievemenetBase_BP.OnlineAchievemenetBase_BP_C.CompleteAchievement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckAchievement(); // Function OnlineAchievemenetBase_BP.OnlineAchievemenetBase_BP_C.CheckAchievement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function OnlineAchievemenetBase_BP.OnlineAchievemenetBase_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_OnlineAchievemenetBase_BP(int32_t EntryPoint); // Function OnlineAchievemenetBase_BP.OnlineAchievemenetBase_BP_C.ExecuteUbergraph_OnlineAchievemenetBase_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

