// BlueprintGeneratedClass ABPMechanic.ABPMechanic_C
// Size: 0x294 (Inherited: 0x238)
struct AABPMechanic_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct TMap<struct APlayerState*, float> UAVFixList; // 0x240(0x50)
	float MaxFixValue; // 0x290(0x04)

	void ABPMechanic_AutoGenFunc(struct TArray<struct ABP_MechUAV_C*> MechUAV, float FixValue, struct APlayerState* FixedPlayerState); // Function ABPMechanic.ABPMechanic_C.ABPMechanic_AutoGenFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function ABPMechanic.ABPMechanic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void KilledClearList(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function ABPMechanic.ABPMechanic_C.KilledClearList // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyRoundEndResult(struct FName GameModeName, enum class EPBGameResult GameResult); // Function ABPMechanic.ABPMechanic_C.NotifyRoundEndResult // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ABPMechanic(int32_t EntryPoint); // Function ABPMechanic.ABPMechanic_C.ExecuteUbergraph_ABPMechanic // (Final|UbergraphFunction) // @ game+0x1556ec0
};

