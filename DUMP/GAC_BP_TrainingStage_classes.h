// BlueprintGeneratedClass GAC_BP_TrainingStage.GAC_BP_TrainingStage_C
// Size: 0x3028 (Inherited: 0x2f90)
struct AGAC_BP_TrainingStage_C : AGAC_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f90(0x08)
	float HoldTime_2; // 0x2f98(0x04)
	float HoldTime_3; // 0x2f9c(0x04)
	float FinishTime; // 0x2fa0(0x04)
	char pad_2FA4[0x4]; // 0x2fa4(0x04)
	struct FTimerHandle PylonHoldTime; // 0x2fa8(0x08)
	bool PylonDeActived; // 0x2fb0(0x01)
	char pad_2FB1[0x7]; // 0x2fb1(0x07)
	struct FMulticastInlineDelegate DispatchersActionFinish; // 0x2fb8(0x10)
	bool LimitCamera; // 0x2fc8(0x01)
	char pad_2FC9[0x3]; // 0x2fc9(0x03)
	struct FVector Limited; // 0x2fcc(0x0c)
	struct AActor* FocusActor; // 0x2fd8(0x08)
	float limitAngle; // 0x2fe0(0x04)
	char pad_2FE4[0x4]; // 0x2fe4(0x04)
	struct ASteam_Target_Training_C* DashMeleeTarget; // 0x2fe8(0x08)
	struct TArray<struct ASteam_Target_Training_C*> TargetInRadius; // 0x2ff0(0x10)
	struct TArray<struct FInputActionKeyMapping> TempDisableInputKeys; // 0x3000(0x10)
	struct UAiming_Point_Unarmed_C* AimingCrossPoint; // 0x3010(0x08)
	struct FMulticastInlineDelegate HiddenUnarmedAimingCross; // 0x3018(0x10)

	void IsOnFiring(bool IsOnFire); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.IsOnFiring // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void OnHiddenUnarmedAimingCross(); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.OnHiddenUnarmedAimingCross // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Enable Input Action(bool Enable, struct FName UnlockHook); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.Enable Input Action // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Movement Switch(bool bEnable); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.Movement Switch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	bool CanDoingDashMelee(struct TArray<struct FHitResult> HitResults); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.CanDoingDashMelee // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	enum class EPBMeleeCheckResult FindMeleeTarget(); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.FindMeleeTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetFocusActor(bool NewFocus, struct AActor* FocusActor, float limitAngle); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.SetFocusActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TickFocusActor(); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.TickFocusActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InWhichLevel andPart(int32_t WhichLevel, int32_t WhichPart, bool IsInlevelandPart); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.InWhichLevel andPart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void InpActEvt_RunToggle_K2Node_InputActionEvent_2(struct FKey Key); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.InpActEvt_RunToggle_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_UseSkill_K2Node_InputActionEvent_1(struct FKey Key); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.InpActEvt_UseSkill_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1556ec0
	void InpAxisEvt_Roll_K2Node_InputAxisEvent_16(float AxisValue); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.InpAxisEvt_Roll_K2Node_InputAxisEvent_16 // (BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void InpAxisEvt_Roll_K2Node_InputAxisEvent_2(float AxisValue); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.InpAxisEvt_Roll_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyReplenhFinish_2(); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.NotifyReplenhFinish_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifySwitchWeapon_2(); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.NotifySwitchWeapon_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_DroppedWeapon_2(); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.K2_DroppedWeapon_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GAC_BP_TrainingStage(int32_t EntryPoint); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.ExecuteUbergraph_GAC_BP_TrainingStage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void HiddenUnarmedAimingCross__DelegateSignature(); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.HiddenUnarmedAimingCross__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DispatchersActionFinish__DelegateSignature(enum class ActionInputEnum Enum); // Function GAC_BP_TrainingStage.GAC_BP_TrainingStage_C.DispatchersActionFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

