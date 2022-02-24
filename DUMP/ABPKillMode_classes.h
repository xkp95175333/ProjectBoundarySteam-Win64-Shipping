// BlueprintGeneratedClass ABPKillMode.ABPKillMode_C
// Size: 0x290 (Inherited: 0x238)
struct AABPKillMode_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct TMap<struct FString, struct FString> NewVar_1; // 0x240(0x50)

	void ReceiveBeginPlay(); // Function ABPKillMode.ABPKillMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Kill(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function ABPKillMode.ABPKillMode_C.Kill // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ABPKillMode(int32_t EntryPoint); // Function ABPKillMode.ABPKillMode_C.ExecuteUbergraph_ABPKillMode // (Final|UbergraphFunction) // @ game+0x1556ec0
};

