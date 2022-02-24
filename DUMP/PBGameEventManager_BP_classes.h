// BlueprintGeneratedClass PBGameEventManager_BP.PBGameEventManager_BP_C
// Size: 0x5a8 (Inherited: 0x4b8)
struct APBGameEventManager_BP_C : APBGameEventManager {
	struct FMulticastInlineDelegate RescurePlayerEventDispatcher; // 0x4b8(0x10)
	struct FMulticastInlineDelegate ShieldDamageEventDispatchers; // 0x4c8(0x10)
	struct FMulticastInlineDelegate MechUAVFixAirTightnessDispatcher; // 0x4d8(0x10)
	struct FMulticastInlineDelegate MechUAVAddAirTightnessValueDispatcher; // 0x4e8(0x10)
	struct FMulticastInlineDelegate HitCSTMTargetEventDispatcher; // 0x4f8(0x10)
	struct FMulticastInlineDelegate CapturableZoneCreateEventDispatcher; // 0x508(0x10)
	struct FMulticastInlineDelegate ServerRealCompleteDispatcher; // 0x518(0x10)
	struct FMulticastInlineDelegate UpdateMuteStateEventDispatcher; // 0x528(0x10)
	struct FMulticastInlineDelegate UpdateMuteAllStateNewEventDispatcher; // 0x538(0x10)
	struct FMulticastInlineDelegate CapturableWillActive; // 0x548(0x10)
	struct FMulticastInlineDelegate Test; // 0x558(0x10)
	struct FMulticastInlineDelegate RefreshCustomizeLocationEventDispatchers; // 0x568(0x10)
	struct FMulticastInlineDelegate RotateDisplayActorCameraEventDispatchers; // 0x578(0x10)
	struct FMulticastInlineDelegate InitDisplayActorCompleteEventDispatchers; // 0x588(0x10)
	struct FMulticastInlineDelegate RefreshWeaponCompleteEventDispatcher; // 0x598(0x10)

	void RefreshWeaponCompleteEventDispatcher__DelegateSignature(); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.RefreshWeaponCompleteEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitDisplayActorCompleteEventDispatchers__DelegateSignature(); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.InitDisplayActorCompleteEventDispatchers__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RotateDisplayActorCameraEventDispatchers__DelegateSignature(); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.RotateDisplayActorCameraEventDispatchers__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshCustomizeLocationEventDispatchers__DelegateSignature(struct TArray<struct FVector2D> UIScreenPosition); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.RefreshCustomizeLocationEventDispatchers__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Test__DelegateSignature(); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.Test__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CapturableWillActive__DelegateSignature(); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.CapturableWillActive__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateMuteAllStateNewEventDispatcher__DelegateSignature(); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.UpdateMuteAllStateNewEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateMuteStateEventDispatcher__DelegateSignature(bool bIsMute, bool bHide); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.UpdateMuteStateEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ServerRealCompleteDispatcher__DelegateSignature(struct APBPlayerState* InPlayerState, struct FName RealTimeChallegeID, struct FName ItemId); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.ServerRealCompleteDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CapturableZoneCreateEventDispatcher__DelegateSignature(struct APBCapturableZone* InCapturableZone); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.CapturableZoneCreateEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HitCSTMTargetEventDispatcher__DelegateSignature(bool KillShot, bool headshot, bool ArmorShot, float Damage); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.HitCSTMTargetEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MechUAVAddAirTightnessValueDispatcher__DelegateSignature(struct TArray<struct ABP_MechUAV_C*> MechUAV, float FixValue, struct APlayerState* FixedPlayerState); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.MechUAVAddAirTightnessValueDispatcher__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MechUAVFixAirTightnessDispatcher__DelegateSignature(struct TArray<struct ABP_MechUAV_C*> MechUAVArray, struct APlayerState* FixedPlayerState); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.MechUAVFixAirTightnessDispatcher__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShieldDamageEventDispatchers__DelegateSignature(float Damage, struct FDamageEvent DamageType, struct APawn* PawnInstigator, struct AActor* DamageCauser, struct APlayerState* ShieldPlayerState); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.ShieldDamageEventDispatchers__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RescurePlayerEventDispatcher__DelegateSignature(struct APBPlayerState* InPlayerState, bool bIsPlayer); // Function PBGameEventManager_BP.PBGameEventManager_BP_C.RescurePlayerEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

