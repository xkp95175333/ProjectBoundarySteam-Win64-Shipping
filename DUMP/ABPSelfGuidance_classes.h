// BlueprintGeneratedClass ABPSelfGuidance.ABPSelfGuidance_C
// Size: 0x240 (Inherited: 0x238)
struct AABPSelfGuidance_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)

	void MarkAssistsCheck(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function ABPSelfGuidance.ABPSelfGuidance_C.MarkAssistsCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function ABPSelfGuidance.ABPSelfGuidance_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ABPSelfGuidance(int32_t EntryPoint); // Function ABPSelfGuidance.ABPSelfGuidance_C.ExecuteUbergraph_ABPSelfGuidance // (Final|UbergraphFunction) // @ game+0x1556ec0
};

