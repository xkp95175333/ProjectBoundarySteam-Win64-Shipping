// BlueprintGeneratedClass GameWinTrophy.GameWinTrophy_C
// Size: 0x250 (Inherited: 0x248)
struct AGameWinTrophy_C : AOnlineAchievemenetBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)

	void ReceiveBeginPlay(); // Function GameWinTrophy.GameWinTrophy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyGameResult(struct FName GameModeName, enum class EPBGameResult GameResult); // Function GameWinTrophy.GameWinTrophy_C.NotifyGameResult // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CheckAchievement(); // Function GameWinTrophy.GameWinTrophy_C.CheckAchievement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GameWinTrophy(int32_t EntryPoint); // Function GameWinTrophy.GameWinTrophy_C.ExecuteUbergraph_GameWinTrophy // (Final|UbergraphFunction) // @ game+0x1556ec0
};

