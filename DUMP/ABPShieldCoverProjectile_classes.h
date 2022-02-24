// BlueprintGeneratedClass ABPShieldCoverProjectile.ABPShieldCoverProjectile_C
// Size: 0x240 (Inherited: 0x238)
struct AABPShieldCoverProjectile_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)

	void ShieldCoverProjectile(float Damage, struct FDamageEvent DamageType, struct APawn* PawnInstigator, struct AActor* DamageCauser, struct APlayerState* ShieldPlayerState); // Function ABPShieldCoverProjectile.ABPShieldCoverProjectile_C.ShieldCoverProjectile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function ABPShieldCoverProjectile.ABPShieldCoverProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ABPShieldCoverProjectile(int32_t EntryPoint); // Function ABPShieldCoverProjectile.ABPShieldCoverProjectile_C.ExecuteUbergraph_ABPShieldCoverProjectile // (Final|UbergraphFunction) // @ game+0x1556ec0
};

