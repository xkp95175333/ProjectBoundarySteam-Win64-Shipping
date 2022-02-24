// BlueprintGeneratedClass PBCharacter_BP.PBCharacter_BP_C
// Size: 0x2b10 (Inherited: 0x23a0)
struct APBCharacter_BP_C : APBCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x23a0(0x08)
	float ClimbAmbVolumeFadeTimeline_Fade_In_7B25E8D3475E8A016F14BF8B5163E0A1; // 0x23a8(0x04)
	float ClimbAmbVolumeFadeTimeline_Fade_Out_7B25E8D3475E8A016F14BF8B5163E0A1; // 0x23ac(0x04)
	enum class ETimelineDirection ClimbAmbVolumeFadeTimeline__Direction_7B25E8D3475E8A016F14BF8B5163E0A1; // 0x23b0(0x01)
	char pad_23B1[0x7]; // 0x23b1(0x07)
	struct UTimelineComponent* ClimbAmbVolumeFadeTimeline; // 0x23b8(0x08)
	float Timeline_0_CharacterHitScenesCurve_AE1B17AA4CD11F58108900995DEAB96A; // 0x23c0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_AE1B17AA4CD11F58108900995DEAB96A; // 0x23c4(0x01)
	char pad_23C5[0x3]; // 0x23c5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x23c8(0x08)
	float Timeline_1_BeHitGunSwayCurve_C34A62914DE710BFFBA7ABB62EDCE33D; // 0x23d0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_C34A62914DE710BFFBA7ABB62EDCE33D; // 0x23d4(0x01)
	char pad_23D5[0x3]; // 0x23d5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x23d8(0x08)
	bool Is Hit Down?; // 0x23e0(0x01)
	bool Is Amor Break?; // 0x23e1(0x01)
	bool Is Be Hit?; // 0x23e2(0x01)
	char pad_23E3[0x1]; // 0x23e3(0x01)
	float HitDamage; // 0x23e4(0x04)
	float CameraShakeInnerRadius; // 0x23e8(0x04)
	float CameraShakeOuterRadius; // 0x23ec(0x04)
	struct FVector MotionInfo; // 0x23f0(0x0c)
	struct FVector RotationInfo; // 0x23fc(0x0c)
	struct FVector FCurrent; // 0x2408(0x0c)
	struct FVector FNew; // 0x2414(0x0c)
	struct FVector RNew; // 0x2420(0x0c)
	struct FVector RCurrent; // 0x242c(0x0c)
	struct FVector WLocCurrent; // 0x2438(0x0c)
	struct FVector WLocNew; // 0x2444(0x0c)
	struct FVector CurrentV; // 0x2450(0x0c)
	struct FVector PerviourV; // 0x245c(0x0c)
	struct FVector LocalVelocity; // 0x2468(0x0c)
	float EMPHitShakeValue; // 0x2474(0x04)
	float EMPChromatic; // 0x2478(0x04)
	float EMPVignette; // 0x247c(0x04)
	float EMPGrain; // 0x2480(0x04)
	float EMPGamaW; // 0x2484(0x04)
	char pad_2488[0x8]; // 0x2488(0x08)
	struct FPostProcessSettings EMPPostProcess; // 0x2490(0x550)
	struct UUMG_InGameHUD_Mother_C* HelmetHUD; // 0x29e0(0x08)
	struct UHelmetHUDContainer_C* HelmetHUDContainer; // 0x29e8(0x08)
	struct APBVehicle* Vehicle; // 0x29f0(0x08)
	struct UAudioComponent* AirAC; // 0x29f8(0x08)
	struct FVector HelmetHUD Offset; // 0x2a00(0x0c)
	char pad_2A0C[0x4]; // 0x2a0c(0x04)
	struct APawn* DamageCauser; // 0x2a10(0x08)
	struct FVector CharacterHitScenesLocation; // 0x2a18(0x0c)
	float HitSceneVeloctiyScale; // 0x2a24(0x04)
	struct USoundBase* HitShield; // 0x2a28(0x08)
	float BeHitSoundTollerance; // 0x2a30(0x04)
	bool IsVisitor; // 0x2a34(0x01)
	char pad_2A35[0x3]; // 0x2a35(0x03)
	struct APBCharacter_BP_C* Vip; // 0x2a38(0x08)
	struct UPBUserWidget* HighlightUI; // 0x2a40(0x08)
	struct UUMG_HelmetMask_C* HelmetMask; // 0x2a48(0x08)
	enum class EAccelerationDir EAccelerationDir; // 0x2a50(0x01)
	char pad_2A51[0x7]; // 0x2a51(0x07)
	struct UAnimInstance* LauncherLinkGraph; // 0x2a58(0x08)
	struct FName LauncherLinkGraphSocketName; // 0x2a60(0x08)
	bool Is Launcher Firing?; // 0x2a68(0x01)
	bool Is EMU Fixed?; // 0x2a69(0x01)
	char pad_2A6A[0x6]; // 0x2a6a(0x06)
	struct FTimerHandle Breath State Handle; // 0x2a70(0x08)
	struct FTimerHandle Breath Rate Calc Handle; // 0x2a78(0x08)
	struct FTimerHandle Breath Rate Countdown Handle; // 0x2a80(0x08)
	struct FTimerHandle Specific Breath Play Handle; // 0x2a88(0x08)
	struct FName Next Breath State; // 0x2a90(0x08)
	struct FName Last Breath State; // 0x2a98(0x08)
	bool Is Breathing Ready?; // 0x2aa0(0x01)
	bool Is Hold Breath?; // 0x2aa1(0x01)
	char pad_2AA2[0x6]; // 0x2aa2(0x06)
	struct UAudioComponent* BreathAudioComponent; // 0x2aa8(0x08)
	bool Is Recover Breath?; // 0x2ab0(0x01)
	bool Is Fade In?; // 0x2ab1(0x01)
	bool Is Fade Start?; // 0x2ab2(0x01)
	bool Is Cue Int Param Transfer Required?; // 0x2ab3(0x01)
	int32_t Breath Rate Calc Countdown Timer; // 0x2ab4(0x04)
	int32_t Breath Rate Calc Countdown; // 0x2ab8(0x04)
	int32_t Cur Priority; // 0x2abc(0x04)
	float Cur Breath Volume; // 0x2ac0(0x04)
	float Next Breath Sound Volume; // 0x2ac4(0x04)
	float Cur Breath Rate; // 0x2ac8(0x04)
	float Cur Breath In Rate; // 0x2acc(0x04)
	float Cur Breath Out Rate; // 0x2ad0(0x04)
	float Next Breath In Rate; // 0x2ad4(0x04)
	float Next Breath Out Rate; // 0x2ad8(0x04)
	float Last Breath In Rate; // 0x2adc(0x04)
	float Last Breath Out Rate; // 0x2ae0(0x04)
	float Fade In Ratio; // 0x2ae4(0x04)
	float Fade Out Ratio; // 0x2ae8(0x04)
	int32_t Next Breath Sound Int Param; // 0x2aec(0x04)
	int32_t Cur Breath Sound Int Param; // 0x2af0(0x04)
	int32_t Cur Breath Role Int Param; // 0x2af4(0x04)
	float Breath In Sound Switch Threshold; // 0x2af8(0x04)
	float Breath Out Sound Switch Threshold; // 0x2afc(0x04)
	bool Is Observing?; // 0x2b00(0x01)
	bool Is Walking When Brake On?; // 0x2b01(0x01)
	bool Is Print?; // 0x2b02(0x01)
	char pad_2B03[0x5]; // 0x2b03(0x05)
	struct UAudioComponent* ClimbAmbAudioComponent; // 0x2b08(0x08)

	void StopPlayFixEMUBreathSound(); // Function PBCharacter_BP.PBCharacter_BP_C.StopPlayFixEMUBreathSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartPlayFixEMUBreathSound(); // Function PBCharacter_BP.PBCharacter_BP_C.StartPlayFixEMUBreathSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DetermineFixEMUPlayBreathRule(); // Function PBCharacter_BP.PBCharacter_BP_C.DetermineFixEMUPlayBreathRule // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetBreathSoundVolume(); // Function PBCharacter_BP.PBCharacter_BP_C.SetBreathSoundVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCueSwitchIntegerParam(); // Function PBCharacter_BP.PBCharacter_BP_C.SetCueSwitchIntegerParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetBreathFadeRate(); // Function PBCharacter_BP.PBCharacter_BP_C.SetBreathFadeRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayBreathSound(); // Function PBCharacter_BP.PBCharacter_BP_C.PlayBreathSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopBreathRateCalcCountdown(); // Function PBCharacter_BP.PBCharacter_BP_C.StopBreathRateCalcCountdown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartBreathRateCalcCountdown(); // Function PBCharacter_BP.PBCharacter_BP_C.StartBreathRateCalcCountdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopBreathRateCalc(); // Function PBCharacter_BP.PBCharacter_BP_C.StopBreathRateCalc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartBreathRateCalc(); // Function PBCharacter_BP.PBCharacter_BP_C.StartBreathRateCalc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DetermineHighPriorityFadePlayBreathRule(int32_t Cur Priority, int32_t FadeOutCalcCountdown); // Function PBCharacter_BP.PBCharacter_BP_C.DetermineHighPriorityFadePlayBreathRule // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DetermineHighPriorityForcePlayBreathRule(float Cur Breath Volume, int32_t Fade Out Calc Countdown, float Breath In Rate, float Breath Out Rate); // Function PBCharacter_BP.PBCharacter_BP_C.DetermineHighPriorityForcePlayBreathRule // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DetermineLowPriorityFadePlayBreathRule(); // Function PBCharacter_BP.PBCharacter_BP_C.DetermineLowPriorityFadePlayBreathRule // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DetermineLowPriorityForcePlayBreathRule(); // Function PBCharacter_BP.PBCharacter_BP_C.DetermineLowPriorityForcePlayBreathRule // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DetermineBreathRuleWhileBeginPlay(); // Function PBCharacter_BP.PBCharacter_BP_C.DetermineBreathRuleWhileBeginPlay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopSetNextBreathState(); // Function PBCharacter_BP.PBCharacter_BP_C.StopSetNextBreathState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartSetNextBreathState(); // Function PBCharacter_BP.PBCharacter_BP_C.StartSetNextBreathState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAllSelfVoiceFinished(); // Function PBCharacter_BP.PBCharacter_BP_C.OnAllSelfVoiceFinished // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnSelfVoiceStarted(); // Function PBCharacter_BP.PBCharacter_BP_C.OnSelfVoiceStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UnlinkAnimGraphByTag(struct USkeletalMeshComponent* InSkeletalMesh, struct FName InTag); // Function PBCharacter_BP.PBCharacter_BP_C.UnlinkAnimGraphByTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CalcMovementDirection(); // Function PBCharacter_BP.PBCharacter_BP_C.CalcMovementDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TriggerBreatheSoundEvent(struct USoundBase* Sound); // Function PBCharacter_BP.PBCharacter_BP_C.TriggerBreatheSoundEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TriggerTeammateSoundEvent(struct FName InTeammateSoundID); // Function PBCharacter_BP.PBCharacter_BP_C.TriggerTeammateSoundEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TriggerSelfSoundEvent(struct FName InSelfSoundID); // Function PBCharacter_BP.PBCharacter_BP_C.TriggerSelfSoundEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ActuallyPlaySelfOpeningSound(); // Function PBCharacter_BP.PBCharacter_BP_C.ActuallyPlaySelfOpeningSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlaySelfOpeningSound(); // Function PBCharacter_BP.PBCharacter_BP_C.PlaySelfOpeningSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsTeammateWithLocal(bool IsTeammate); // Function PBCharacter_BP.PBCharacter_BP_C.IsTeammateWithLocal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetHudMovementOffset(); // Function PBCharacter_BP.PBCharacter_BP_C.SetHudMovementOffset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeHitDownSound(); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyBeHitDownSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyKilledEnemy(); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyKilledEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetDirectionFromDamageCauser(struct FVector From_Local_Normalized); // Function PBCharacter_BP.PBCharacter_BP_C.GetDirectionFromDamageCauser // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetPickupWeaponWidget(); // Function PBCharacter_BP.PBCharacter_BP_C.SetPickupWeaponWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MapHitValueByVp(float PostionValue, float MapHitValue); // Function PBCharacter_BP.PBCharacter_BP_C.MapHitValueByVp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HitCameraShakeRange(float MapHitValue); // Function PBCharacter_BP.PBCharacter_BP_C.HitCameraShakeRange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HitByLoc(struct FVector HitPostion, bool IsTopPart); // Function PBCharacter_BP.PBCharacter_BP_C.HitByLoc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BehitCameraShake(bool HitByEMP); // Function PBCharacter_BP.PBCharacter_BP_C.BehitCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Timeline_1__FinishedFunc(); // Function PBCharacter_BP.PBCharacter_BP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_1__UpdateFunc(); // Function PBCharacter_BP.PBCharacter_BP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_0__FinishedFunc(); // Function PBCharacter_BP.PBCharacter_BP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_0__UpdateFunc(); // Function PBCharacter_BP.PBCharacter_BP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void ClimbAmbVolumeFadeTimeline__FinishedFunc(); // Function PBCharacter_BP.PBCharacter_BP_C.ClimbAmbVolumeFadeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void ClimbAmbVolumeFadeTimeline__UpdateFunc(); // Function PBCharacter_BP.PBCharacter_BP_C.ClimbAmbVolumeFadeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void K2_TurnOffHelmet(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_TurnOffHelmet // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InitHelmet(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_InitHelmet // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EquipRoleSkill(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_EquipRoleSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EquipedLauncher(struct APBLauncher* InLauncher); // Function PBCharacter_BP.PBCharacter_BP_C.K2_EquipedLauncher // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__CameraImpactRotationArm_K2Node_ComponentBoundEvent_0_OnSpringUpdated__DelegateSignature(struct FVector LatestDeltaVector, struct FVector TotalDeltaVector, bool HasReachedMaxLength); // Function PBCharacter_BP.PBCharacter_BP_C.BndEvt__CameraImpactRotationArm_K2Node_ComponentBoundEvent_0_OnSpringUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function PBCharacter_BP.PBCharacter_BP_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void BeHit_AinmationFeedBack(); // Function PBCharacter_BP.PBCharacter_BP_C.BeHit_AinmationFeedBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DisableHighlightUI(); // Function PBCharacter_BP.PBCharacter_BP_C.DisableHighlightUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetVisitorByInput(struct APlayerState* PlayerState); // Function PBCharacter_BP.PBCharacter_BP_C.SetVisitorByInput // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetVisitorByInput_SERVER(struct APlayerState* PlayerState); // Function PBCharacter_BP.PBCharacter_BP_C.SetVisitorByInput_SERVER // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetVisitorByInput_MULTICAST(struct APlayerState* PlayerState); // Function PBCharacter_BP.PBCharacter_BP_C.SetVisitorByInput_MULTICAST // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OutlineVisitor(); // Function PBCharacter_BP.PBCharacter_BP_C.OutlineVisitor // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OutlineVisitor_SERVER(); // Function PBCharacter_BP.PBCharacter_BP_C.OutlineVisitor_SERVER // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OutlineVisitor_MULTICAST(); // Function PBCharacter_BP.PBCharacter_BP_C.OutlineVisitor_MULTICAST // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EMPHUDEffectOff(); // Function PBCharacter_BP.PBCharacter_BP_C.EMPHUDEffectOff // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void EMPHUDEffectOn(); // Function PBCharacter_BP.PBCharacter_BP_C.EMPHUDEffectOn // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEMPEffectFadeOut(); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyEMPEffectFadeOut // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void HIC(); // Function PBCharacter_BP.PBCharacter_BP_C.HIC // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HIC_SERVER(); // Function PBCharacter_BP.PBCharacter_BP_C.HIC_SERVER // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HIC_MULTICAST(); // Function PBCharacter_BP.PBCharacter_BP_C.HIC_MULTICAST // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_ShowCurrentGamePlayEventHint(enum class EPBGamePlayEventType GamePlayEventType); // Function PBCharacter_BP.PBCharacter_BP_C.K2_ShowCurrentGamePlayEventHint // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyToggleFixAirTightness(bool NewState); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyToggleFixAirTightness // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartingReplenish(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_StartingReplenish // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StoppedReplenish(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_StoppedReplenish // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartFixAirTightnessByMechUAV(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_StartFixAirTightnessByMechUAV // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StopFixAirTightnessByMechUAV(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_StopFixAirTightnessByMechUAV // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_TurnOnHelmet(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_TurnOnHelmet // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartFixAirTightnessByMedStation(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_StartFixAirTightnessByMedStation // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StopFixAirTightnessByMedStation(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_StopFixAirTightnessByMedStation // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartConnection(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_StartConnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterruptConnection(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_InterruptConnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndConnection(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_EndConnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartDisconnection(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_StartDisconnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterruptDisconnection(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_InterruptDisconnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndDisconnection(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_EndDisconnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_UpdateAmorBreakState(bool AmorBreak?); // Function PBCharacter_BP.PBCharacter_BP_C.CustomEvent_UpdateAmorBreakState // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_Sound_BeHit(float DamageTaken); // Function PBCharacter_BP.PBCharacter_BP_C.CustomEvent_Sound_BeHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_Sound_WeaponStartReload(); // Function PBCharacter_BP.PBCharacter_BP_C.CustomEvent_Sound_WeaponStartReload // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOutOfWorld(); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyOutOfWorld // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyReEnterWorld(); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyReEnterWorld // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_Sound_UseingSkill(); // Function PBCharacter_BP.PBCharacter_BP_C.CustomEvent_Sound_UseingSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_Sound_TakingEMP(); // Function PBCharacter_BP.PBCharacter_BP_C.CustomEvent_Sound_TakingEMP // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_PlayMeleeHitSound(struct FName MeleeHitEventID); // Function PBCharacter_BP.PBCharacter_BP_C.K2_PlayMeleeHitSound // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ClientRadialDamage(); // Function PBCharacter_BP.PBCharacter_BP_C.ClientRadialDamage // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeHit(struct APawn* DamageCauser, float DamageTaken); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyBeHit // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function PBCharacter_BP.PBCharacter_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBorn(); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyBorn // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeKilled(); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyBeKilled // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PBCharacter_BP.PBCharacter_BP_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveDestroyed(); // Function PBCharacter_BP.PBCharacter_BP_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyToggleAirTightnessCritical(bool IsCritical); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyToggleAirTightnessCritical // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeHitDown(); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyBeHitDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_WeaponStartReload(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_WeaponStartReload // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartActivateSkill(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_StartActivateSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetClimbStateHUD(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_SetClimbStateHUD // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetAllowedClimbStateHUD(); // Function PBCharacter_BP.PBCharacter_BP_C.K2_SetAllowedClimbStateHUD // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBCharacter_BP.PBCharacter_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(); // Function PBCharacter_BP.PBCharacter_BP_C.CustomEvent_1 // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyFullyRecoverAirTightness(); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyFullyRecoverAirTightness // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyObservingOthers(); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyObservingOthers // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBackSelfCamera(); // Function PBCharacter_BP.PBCharacter_BP_C.NotifyBackSelfCamera // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBCharacter_BP(int32_t EntryPoint); // Function PBCharacter_BP.PBCharacter_BP_C.ExecuteUbergraph_PBCharacter_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

