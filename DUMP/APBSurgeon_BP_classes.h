// BlueprintGeneratedClass APBSurgeon_BP.APBSurgeon_BP_C
// Size: 0x278 (Inherited: 0x268)
struct AAPBSurgeon_BP_C : AAPBKillCheckBase_BP_C {
	float BackstabMinAngle; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct UDamageType* CheckDamageType; // 0x270(0x08)

	void ValidKillerHandle(); // Function APBSurgeon_BP.APBSurgeon_BP_C.ValidKillerHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Kill Notify(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function APBSurgeon_BP.APBSurgeon_BP_C.Kill Notify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

