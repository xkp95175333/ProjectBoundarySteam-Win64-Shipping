// BlueprintGeneratedClass APBHitZoneCheckBase_BP.APBHitZoneCheckBase_BP_C
// Size: 0x2b9 (Inherited: 0x268)
struct AAPBHitZoneCheckBase_BP_C : AAPBKillCheckBase_BP_C {
	struct TMap<struct FString, enum class EPBHitZone> HitZoneMap; // 0x268(0x50)
	enum class EPBHitZone CheckHitZone; // 0x2b8(0x01)

	void ValidKillerHandle(); // Function APBHitZoneCheckBase_BP.APBHitZoneCheckBase_BP_C.ValidKillerHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Kill Notify(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function APBHitZoneCheckBase_BP.APBHitZoneCheckBase_BP_C.Kill Notify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

