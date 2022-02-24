// BlueprintGeneratedClass KillRandChallenge.KillRandChallenge_C
// Size: 0x24c (Inherited: 0x23c)
struct AKillRandChallenge_C : APBRandChallengeBase_C {
	char pad_23C[0x4]; // 0x23c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	int32_t TempCount; // 0x248(0x04)

	void KillRandChallengeCheck(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function KillRandChallenge.KillRandChallenge_C.KillRandChallengeCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function KillRandChallenge.KillRandChallenge_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_KillRandChallenge(int32_t EntryPoint); // Function KillRandChallenge.KillRandChallenge_C.ExecuteUbergraph_KillRandChallenge // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

