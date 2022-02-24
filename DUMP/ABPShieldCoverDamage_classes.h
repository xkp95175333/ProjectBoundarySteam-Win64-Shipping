// BlueprintGeneratedClass ABPShieldCoverDamage.ABPShieldCoverDamage_C
// Size: 0x294 (Inherited: 0x238)
struct AABPShieldCoverDamage_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct TMap<struct APlayerState*, float> ShieldCoverList; // 0x240(0x50)
	float DamageMaxValue; // 0x290(0x04)

	void ClearDeathData(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function ABPShieldCoverDamage.ABPShieldCoverDamage_C.ClearDeathData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShieldCoverDamage(float Damage, struct FDamageEvent DamageType, struct APawn* PawnInstigator, struct AActor* DamageCauser, struct APlayerState* ShieldPlayerState); // Function ABPShieldCoverDamage.ABPShieldCoverDamage_C.ShieldCoverDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function ABPShieldCoverDamage.ABPShieldCoverDamage_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyRoundEndResult(struct FName GameModeName, enum class EPBGameResult GameResult); // Function ABPShieldCoverDamage.ABPShieldCoverDamage_C.NotifyRoundEndResult // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ABPShieldCoverDamage(int32_t EntryPoint); // Function ABPShieldCoverDamage.ABPShieldCoverDamage_C.ExecuteUbergraph_ABPShieldCoverDamage // (Final|UbergraphFunction) // @ game+0x1556ec0
};

