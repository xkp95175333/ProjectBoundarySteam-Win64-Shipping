// BlueprintGeneratedClass EliminationKillTrophy.EliminationKillTrophy_C
// Size: 0x254 (Inherited: 0x248)
struct AEliminationKillTrophy_C : AOnlineAchievemenetBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	int32_t KillNum; // 0x250(0x04)

	void ReceiveBeginPlay(); // Function EliminationKillTrophy.EliminationKillTrophy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyRoundEndResult(struct FName GameModeName, enum class EPBGameResult GameResult); // Function EliminationKillTrophy.EliminationKillTrophy_C.NotifyRoundEndResult // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyKillInfoEx(struct APBPlayerState* InPlayerState, struct FName ItemId, enum class EPBHitZone HitZone, struct FName GameModeName, float KillDistance); // Function EliminationKillTrophy.EliminationKillTrophy_C.NotifyKillInfoEx // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_EliminationKillTrophy(int32_t EntryPoint); // Function EliminationKillTrophy.EliminationKillTrophy_C.ExecuteUbergraph_EliminationKillTrophy // (Final|UbergraphFunction) // @ game+0x1556ec0
};

