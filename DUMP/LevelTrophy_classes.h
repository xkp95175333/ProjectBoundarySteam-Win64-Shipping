// BlueprintGeneratedClass LevelTrophy.LevelTrophy_C
// Size: 0x250 (Inherited: 0x248)
struct ALevelTrophy_C : AOnlineAchievemenetBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)

	void ReceiveBeginPlay(); // Function LevelTrophy.LevelTrophy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void CheckAchievement(); // Function LevelTrophy.LevelTrophy_C.CheckAchievement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnExpChanged(int32_t Exp); // Function LevelTrophy.LevelTrophy_C.OnExpChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_LevelTrophy(int32_t EntryPoint); // Function LevelTrophy.LevelTrophy_C.ExecuteUbergraph_LevelTrophy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

