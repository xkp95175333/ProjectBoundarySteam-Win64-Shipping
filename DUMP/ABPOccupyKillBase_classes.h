// BlueprintGeneratedClass ABPOccupyKillBase.ABPOccupyKillBase_C
// Size: 0x490 (Inherited: 0x238)
struct AABPOccupyKillBase_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct TMap<struct FString, enum class EPBGameMode> GameModeMap; // 0x240(0x50)
	struct TArray<struct APBCapturableZone_DMTN_C*> OcccupyZone; // 0x290(0x10)
	struct TMap<struct FString, bool> IsKillerInZone; // 0x2a0(0x50)
	struct TMap<struct FString, bool> IsKillerInTeamZone; // 0x2f0(0x50)
	struct TMap<struct FString, bool> IsKilledInZone; // 0x340(0x50)
	struct TMap<struct FString, bool> IsKilledInTeamZone; // 0x390(0x50)
	struct TMap<struct FString, bool> IsKillerInNoOwnerZone; // 0x3e0(0x50)
	struct TMap<struct FString, bool> IsKilledInNoOwnerZone; // 0x430(0x50)
	struct FString Key; // 0x480(0x10)

	void CheckPlayerInZone(struct AController* CheckController, bool PlayerInZone, bool PlayerInTeamZone, bool IsNoOwnerZone); // Function ABPOccupyKillBase.ABPOccupyKillBase_C.CheckPlayerInZone // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void KillZoneChack(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function ABPOccupyKillBase.ABPOccupyKillBase_C.KillZoneChack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function ABPOccupyKillBase.ABPOccupyKillBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ABPOccupyKillBase(int32_t EntryPoint); // Function ABPOccupyKillBase.ABPOccupyKillBase_C.ExecuteUbergraph_ABPOccupyKillBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

