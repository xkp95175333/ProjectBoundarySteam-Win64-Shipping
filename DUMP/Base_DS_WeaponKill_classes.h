// BlueprintGeneratedClass Base_DS_WeaponKill.Base_DS_WeaponKill_C
// Size: 0x260 (Inherited: 0x240)
struct ABase_DS_WeaponKill_C : APBDataStatistics {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct TArray<struct FName> ItemIDArray; // 0x250(0x10)

	void GetWeaponKillMapKey(struct FName WeaponID, struct FName MapKey); // Function Base_DS_WeaponKill.Base_DS_WeaponKill_C.GetWeaponKillMapKey // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Base_DS_WeaponKillStat(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function Base_DS_WeaponKill.Base_DS_WeaponKill_C.Base_DS_WeaponKillStat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function Base_DS_WeaponKill.Base_DS_WeaponKill_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Base_DS_WeaponKill(int32_t EntryPoint); // Function Base_DS_WeaponKill.Base_DS_WeaponKill_C.ExecuteUbergraph_Base_DS_WeaponKill // (Final|UbergraphFunction) // @ game+0x1556ec0
};

