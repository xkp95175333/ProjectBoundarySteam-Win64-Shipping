// BlueprintGeneratedClass TDMKillTrophy.TDMKillTrophy_C
// Size: 0x254 (Inherited: 0x248)
struct ATDMKillTrophy_C : AOnlineAchievemenetBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	int32_t MedalsNum; // 0x250(0x04)

	void TDMKillTrophyCheck(struct TArray<struct FName> RealtimeChallengeArray); // Function TDMKillTrophy.TDMKillTrophy_C.TDMKillTrophyCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function TDMKillTrophy.TDMKillTrophy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function TDMKillTrophy.TDMKillTrophy_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyGameResult(struct FName GameModeName, enum class EPBGameResult GameResult); // Function TDMKillTrophy.TDMKillTrophy_C.NotifyGameResult // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TDMKillTrophy(int32_t EntryPoint); // Function TDMKillTrophy.TDMKillTrophy_C.ExecuteUbergraph_TDMKillTrophy // (Final|UbergraphFunction) // @ game+0x1556ec0
};

