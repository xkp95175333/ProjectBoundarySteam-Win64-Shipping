// BlueprintGeneratedClass APBKillCheckBase_BP.APBKillCheckBase_BP_C
// Size: 0x268 (Inherited: 0x238)
struct AAPBKillCheckBase_BP_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct APlayerState* KillerPlayerState; // 0x240(0x08)
	struct APlayerState* KilledPlayerState; // 0x248(0x08)
	struct APawn* PBKillerPawn; // 0x250(0x08)
	struct APawn* PBKilledPawn; // 0x258(0x08)
	struct AActor* PBDamageCauser; // 0x260(0x08)

	void InvalidKillerHandle(); // Function APBKillCheckBase_BP.APBKillCheckBase_BP_C.InvalidKillerHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ValidKillerHandle(); // Function APBKillCheckBase_BP.APBKillCheckBase_BP_C.ValidKillerHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void KillerComplete(); // Function APBKillCheckBase_BP.APBKillCheckBase_BP_C.KillerComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Kill Notify(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function APBKillCheckBase_BP.APBKillCheckBase_BP_C.Kill Notify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function APBKillCheckBase_BP.APBKillCheckBase_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_APBKillCheckBase_BP(int32_t EntryPoint); // Function APBKillCheckBase_BP.APBKillCheckBase_BP_C.ExecuteUbergraph_APBKillCheckBase_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

