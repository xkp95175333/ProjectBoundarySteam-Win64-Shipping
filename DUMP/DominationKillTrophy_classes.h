// BlueprintGeneratedClass DominationKillTrophy.DominationKillTrophy_C
// Size: 0x260 (Inherited: 0x248)
struct ADominationKillTrophy_C : AOnlineAchievemenetBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	int32_t KillNum; // 0x250(0x04)
	bool bFind; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct APBCapturableZone_DMTN_C* CurrentZone; // 0x258(0x08)

	void ReceiveBeginPlay(); // Function DominationKillTrophy.DominationKillTrophy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyGameResult(struct FName GameModeName, enum class EPBGameResult GameResult); // Function DominationKillTrophy.DominationKillTrophy_C.NotifyGameResult // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyKillInfoEx(struct APBPlayerState* InPlayerState, struct FName ItemId, enum class EPBHitZone HitZone, struct FName GameModeName, float KillDistance); // Function DominationKillTrophy.DominationKillTrophy_C.NotifyKillInfoEx // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_DominationKillTrophy(int32_t EntryPoint); // Function DominationKillTrophy.DominationKillTrophy_C.ExecuteUbergraph_DominationKillTrophy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

