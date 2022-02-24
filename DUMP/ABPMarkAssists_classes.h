// BlueprintGeneratedClass ABPMarkAssists.ABPMarkAssists_C
// Size: 0x240 (Inherited: 0x238)
struct AABPMarkAssists_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)

	void MarkAssistsCheck(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function ABPMarkAssists.ABPMarkAssists_C.MarkAssistsCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function ABPMarkAssists.ABPMarkAssists_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ABPMarkAssists(int32_t EntryPoint); // Function ABPMarkAssists.ABPMarkAssists_C.ExecuteUbergraph_ABPMarkAssists // (Final|UbergraphFunction) // @ game+0x1556ec0
};

