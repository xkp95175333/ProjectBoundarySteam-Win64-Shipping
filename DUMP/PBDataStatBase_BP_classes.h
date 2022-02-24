// BlueprintGeneratedClass PBDataStatBase_BP.PBDataStatBase_BP_C
// Size: 0x2a0 (Inherited: 0x240)
struct APBDataStatBase_BP_C : APBDataStatistics {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct TMap<struct APBPlayerState*, struct FFPBRoleUseStartTime_BP> PlayerStateStartUseTime; // 0x250(0x50)

	void PBDataStatBaseHItTarget(struct APBPlayerState* AttackPlayerState, struct AActor* Owner); // Function PBDataStatBase_BP.PBDataStatBase_BP_C.PBDataStatBaseHItTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PrintLogInfo(struct FName SaveKey, int64_t SaveCount); // Function PBDataStatBase_BP.PBDataStatBase_BP_C.PrintLogInfo // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PBDataStatBaseCountRealTimeChallenge(struct APBPlayerState* InPlayerSate, struct TArray<struct FName> RealtimeChallengeArray); // Function PBDataStatBase_BP.PBDataStatBase_BP_C.PBDataStatBaseCountRealTimeChallenge // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddCountStatData(struct TMap<struct FName, int64_t> InDataStatMap, struct FName InKey, int32_t InCount); // Function PBDataStatBase_BP.PBDataStatBase_BP_C.AddCountStatData // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PBDataStatBaseWeaponFire(struct APBPlayerState* InPlayerSate, int32_t InCount); // Function PBDataStatBase_BP.PBDataStatBase_BP_C.PBDataStatBaseWeaponFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PBDataStatBaseGameEndStat(struct APBPlayerState* InPlayerSate, enum class EPBGameResult InGameResult); // Function PBDataStatBase_BP.PBDataStatBase_BP_C.PBDataStatBaseGameEndStat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PBDataStatBaseStatAssistEvent(struct APBPlayerState* PlayerAssist, bool bIsFirst); // Function PBDataStatBase_BP.PBDataStatBase_BP_C.PBDataStatBaseStatAssistEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddStatData(struct TMap<struct FName, int64_t> InDataStatMap, struct FName InKey); // Function PBDataStatBase_BP.PBDataStatBase_BP_C.AddStatData // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PBDataStatBaseStatKillEvent(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function PBDataStatBase_BP.PBDataStatBase_BP_C.PBDataStatBaseStatKillEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBDataStatBase_BP.PBDataStatBase_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBDataStatBase_BP(int32_t EntryPoint); // Function PBDataStatBase_BP.PBDataStatBase_BP_C.ExecuteUbergraph_PBDataStatBase_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

