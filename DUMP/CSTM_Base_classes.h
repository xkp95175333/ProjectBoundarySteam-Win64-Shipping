// BlueprintGeneratedClass CSTM_Base.CSTM_Base_C
// Size: 0x1ba4 (Inherited: 0x1a40)
struct ACSTM_Base_C : APBWeapon_RayProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1a40(0x08)
	struct UWeapomFireRocoil_C* WeapomFireRocoil; // 0x1a48(0x08)
	struct FTransform CstmModeTransform; // 0x1a50(0x30)
	struct ACSTM_Base_C* CurrentWeapon; // 0x1a80(0x08)
	struct AGAC_BP_C* OwingGAC_BP; // 0x1a88(0x08)
	bool IsFiring; // 0x1a90(0x01)
	char pad_1A91[0x3]; // 0x1a91(0x03)
	float FireRecoilAnimDuration; // 0x1a94(0x04)
	struct FVector2D ForeBackwardSwayLimit; // 0x1a98(0x08)
	struct FVector2D LeftRightSwaylimit; // 0x1aa0(0x08)
	struct FVector2D UpDownSwayLimit; // 0x1aa8(0x08)
	struct FVector2D RollSwayLimit; // 0x1ab0(0x08)
	struct FVector2D PitchSwayLimit; // 0x1ab8(0x08)
	struct FVector2D YawSwayLimit; // 0x1ac0(0x08)
	struct FVector TouchWallIdleOffset; // 0x1ac8(0x0c)
	char pad_1AD4[0x4]; // 0x1ad4(0x04)
	struct TArray<struct UAnimSequenceBase*> OptionalPawnIdlePoses; // 0x1ad8(0x10)
	struct TArray<struct UAnimSequenceBase*> ExtraPawnIdlePoses; // 0x1ae8(0x10)
	struct TArray<struct UAnimSequenceBase*> ExtraWeaponIdlePoses; // 0x1af8(0x10)
	float EDP; // 0x1b08(0x04)
	struct FVector OnWallIdleWeaponOffset; // 0x1b0c(0x0c)
	struct FRotator OnWallIdleRotationOffset; // 0x1b18(0x0c)
	char pad_1B24[0x4]; // 0x1b24(0x04)
	struct UAiming_Point_C* CrossHairWidget; // 0x1b28(0x08)
	float Damage; // 0x1b30(0x04)
	float Accuracy; // 0x1b34(0x04)
	float FireRate; // 0x1b38(0x04)
	float RPM; // 0x1b3c(0x04)
	float Stability; // 0x1b40(0x04)
	float Stealth; // 0x1b44(0x04)
	float Agility; // 0x1b48(0x04)
	char pad_1B4C[0x4]; // 0x1b4c(0x04)
	struct UCurveFloat* PointCurve; // 0x1b50(0x08)
	bool HeatActive; // 0x1b58(0x01)
	char pad_1B59[0x7]; // 0x1b59(0x07)
	struct UAudioComponent* ADS_AC; // 0x1b60(0x08)
	float SumTargetSpread; // 0x1b68(0x04)
	int32_t ShotCount; // 0x1b6c(0x04)
	struct FTimerHandle ShotCountHandle; // 0x1b70(0x08)
	int32_t ShotCount_FireFlattenThrethod; // 0x1b78(0x04)
	char pad_1B7C[0x4]; // 0x1b7c(0x04)
	struct UMatineeCameraShake* Shake_Fire; // 0x1b80(0x08)
	struct UMatineeCameraShake* Shake_Fire_ADS; // 0x1b88(0x08)
	bool IsADS; // 0x1b90(0x01)
	char pad_1B91[0x3]; // 0x1b91(0x03)
	struct FVector SightOffset; // 0x1b94(0x0c)
	float ButtleSpeed; // 0x1ba0(0x04)

	void WeaponButtleSpeed(); // Function CSTM_Base.CSTM_Base_C.WeaponButtleSpeed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WeaponFat(int32_t FireCount, float OutFatNum); // Function CSTM_Base.CSTM_Base_C.WeaponFat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WeaponAgilityData(); // Function CSTM_Base.CSTM_Base_C.WeaponAgilityData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Weapon Stealth Data(); // Function CSTM_Base.CSTM_Base_C.Weapon Stealth Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WeaponStabilityData(); // Function CSTM_Base.CSTM_Base_C.WeaponStabilityData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WeaponFireRateData(); // Function CSTM_Base.CSTM_Base_C.WeaponFireRateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WeaponAccuracyData(); // Function CSTM_Base.CSTM_Base_C.WeaponAccuracyData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WeaponDamageData(); // Function CSTM_Base.CSTM_Base_C.WeaponDamageData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UndisplayCrosshair(); // Function CSTM_Base.CSTM_Base_C.UndisplayCrosshair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DisplayCrosshair(); // Function CSTM_Base.CSTM_Base_C.DisplayCrosshair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckAndPrintCompFoundOrNot(struct FString CompRefName, struct USceneComponent* CompRefForCheck); // Function CSTM_Base.CSTM_Base_C.CheckAndPrintCompFoundOrNot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PrintResetRelativeTransform(struct UObject* In Comp); // Function CSTM_Base.CSTM_Base_C.PrintResetRelativeTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckAndSetToSocketLocation(struct USceneComponent* CompToSet, struct USceneComponent* CompCarrySocket, struct FName InSocketName); // Function CSTM_Base.CSTM_Base_C.CheckAndSetToSocketLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RecalculatePartOffset(); // Function CSTM_Base.CSTM_Base_C.RecalculatePartOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	bool CheckIfWeCanTick(); // Function CSTM_Base.CSTM_Base_C.CheckIfWeCanTick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetPartSocketOffset(struct USceneComponent* Part1P, struct USceneComponent* Part3P, struct FName From, struct FName To, struct FVector Offset1P, struct FVector Offset3P); // Function CSTM_Base.CSTM_Base_C.GetPartSocketOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DecidePartInstallOffsetAndPartSettings(); // Function CSTM_Base.CSTM_Base_C.DecidePartInstallOffsetAndPartSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ConvertToLocalLocationOffset(struct FVector FromWorldLocation, struct FVector ToWorldLocation, struct USceneComponent* ReferanceObject, bool DrawDebugInfo, struct FString DebugMSG, struct FLinearColor DebugMSG_Color, struct FVector LocalLocationOffset); // Function CSTM_Base.CSTM_Base_C.ConvertToLocalLocationOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UserConstructionScript(); // Function CSTM_Base.CSTM_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnFireTriggered(); // Function CSTM_Base.CSTM_Base_C.OnFireTriggered // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyUnequip(); // Function CSTM_Base.CSTM_Base_C.NotifyUnequip // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsUndeploying(); // Function CSTM_Base.CSTM_Base_C.K2_OnHandsUndeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsDeploying(); // Function CSTM_Base.CSTM_Base_C.K2_OnHandsDeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveDestroyed(); // Function CSTM_Base.CSTM_Base_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void RefreshDisplayData(); // Function CSTM_Base.CSTM_Base_C.RefreshDisplayData // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartADS(); // Function CSTM_Base.CSTM_Base_C.K2_StartADS // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StopADS(); // Function CSTM_Base.CSTM_Base_C.K2_StopADS // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InitSimulatedPartsComplete(); // Function CSTM_Base.CSTM_Base_C.K2_InitSimulatedPartsComplete // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyRecalculateSpecialPartOffset(); // Function CSTM_Base.CSTM_Base_C.NotifyRecalculateSpecialPartOffset // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_FireMultiProjectile(); // Function CSTM_Base.CSTM_Base_C.K2_FireMultiProjectile // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEquipFinished(); // Function CSTM_Base.CSTM_Base_C.NotifyEquipFinished // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ResetShotCount(); // Function CSTM_Base.CSTM_Base_C.ResetShotCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCurrentAmmo(int32_t InCurrentAmmo); // Function CSTM_Base.CSTM_Base_C.K2_UpdateCurrentAmmo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCurrentAmmoInClip(int32_t InCurrentAmmoInClip); // Function CSTM_Base.CSTM_Base_C.K2_UpdateCurrentAmmoInClip // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_CSTM_Base(int32_t EntryPoint); // Function CSTM_Base.CSTM_Base_C.ExecuteUbergraph_CSTM_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

