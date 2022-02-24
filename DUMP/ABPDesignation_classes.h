// BlueprintGeneratedClass ABPDesignation.ABPDesignation_C
// Size: 0x240 (Inherited: 0x238)
struct AABPDesignation_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)

	void MarkAssistsCheck(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function ABPDesignation.ABPDesignation_C.MarkAssistsCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function ABPDesignation.ABPDesignation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ABPDesignation(int32_t EntryPoint); // Function ABPDesignation.ABPDesignation_C.ExecuteUbergraph_ABPDesignation // (Final|UbergraphFunction) // @ game+0x1556ec0
};

