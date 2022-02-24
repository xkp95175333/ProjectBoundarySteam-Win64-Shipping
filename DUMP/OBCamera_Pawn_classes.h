// BlueprintGeneratedClass OBCamera_Pawn.OBCamera_Pawn_C
// Size: 0x340 (Inherited: 0x280)
struct AOBCamera_Pawn_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UCineCameraComponent* CineCamera; // 0x288(0x08)
	struct UPBPawnMovement* PBPawnMovement; // 0x290(0x08)
	struct USpringArmComponent* SpringArm; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	float CameraSpringTurnSpeed; // 0x2a8(0x04)
	float TurnInput; // 0x2ac(0x04)
	float TurnInputInterped; // 0x2b0(0x04)
	float LookUpInput; // 0x2b4(0x04)
	float LookUpInputInterped; // 0x2b8(0x04)
	float RollInput; // 0x2bc(0x04)
	float RollInputInterped; // 0x2c0(0x04)
	float RollSpeed; // 0x2c4(0x04)
	bool InversYaixsInput?; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	int32_t PlayerIndex; // 0x2cc(0x04)
	struct FVector FocuseCharacterLocation; // 0x2d0(0x0c)
	bool GoProMode?; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	float MoveForward; // 0x2e0(0x04)
	float MoveForwardInterped; // 0x2e4(0x04)
	float CameraMoveForwardSpeed; // 0x2e8(0x04)
	float FovTransformSpeed; // 0x2ec(0x04)
	struct UMatineeCameraShake* CameraShakeSmall; // 0x2f0(0x08)
	struct UMatineeCameraShake* CameraShake_Small; // 0x2f8(0x08)
	struct UMatineeCameraShake* CameraSkake_Medium; // 0x300(0x08)
	struct UMatineeCameraShake* CameraSkakeMedium; // 0x308(0x08)
	struct UMatineeCameraShake* CameraShake_Fast; // 0x310(0x08)
	struct UMatineeCameraShake* CameraShakeFast; // 0x318(0x08)
	struct TArray<int32_t> ControllerIDArray; // 0x320(0x10)
	struct TArray<struct AGAC_BP_C*> GacArray; // 0x330(0x10)

	void SetCameraFStop(float Max Focal Length); // Function OBCamera_Pawn.OBCamera_Pawn_C.SetCameraFStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCameraFocueLength(); // Function OBCamera_Pawn.OBCamera_Pawn_C.SetCameraFocueLength // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetPlayerID(int32_t PlayerIndex); // Function OBCamera_Pawn.OBCamera_Pawn_C.SetPlayerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopAllCameraShake(); // Function OBCamera_Pawn.OBCamera_Pawn_C.StopAllCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetFocuseCharacterLocation_F(int32_t PlayerId); // Function OBCamera_Pawn.OBCamera_Pawn_C.GetFocuseCharacterLocation_F // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Z_K2Node_InputKeyEvent_23(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Z_K2Node_InputKeyEvent_23 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_X_K2Node_InputKeyEvent_22(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_X_K2Node_InputKeyEvent_22 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_C_K2Node_InputKeyEvent_21(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_C_K2Node_InputKeyEvent_21 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_One_K2Node_InputKeyEvent_20(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_One_K2Node_InputKeyEvent_20 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Two_K2Node_InputKeyEvent_19(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Two_K2Node_InputKeyEvent_19 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Three_K2Node_InputKeyEvent_18(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Three_K2Node_InputKeyEvent_18 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Four_K2Node_InputKeyEvent_17(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Four_K2Node_InputKeyEvent_17 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Five_K2Node_InputKeyEvent_16(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Five_K2Node_InputKeyEvent_16 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Six_K2Node_InputKeyEvent_15(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Six_K2Node_InputKeyEvent_15 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Seven_K2Node_InputKeyEvent_14(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Seven_K2Node_InputKeyEvent_14 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Eight_K2Node_InputKeyEvent_13(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Eight_K2Node_InputKeyEvent_13 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Nine_K2Node_InputKeyEvent_12(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Nine_K2Node_InputKeyEvent_12 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_11(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_11 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_10(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_10 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Alt_Q_K2Node_InputKeyEvent_9(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Alt_Q_K2Node_InputKeyEvent_9 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Alt_E_K2Node_InputKeyEvent_8(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Alt_E_K2Node_InputKeyEvent_8 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Alt_W_K2Node_InputKeyEvent_7(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Alt_W_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Alt_S_K2Node_InputKeyEvent_6(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Alt_S_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Alt_D_K2Node_InputKeyEvent_5(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Alt_D_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Alt_A_K2Node_InputKeyEvent_4(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Alt_A_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_V_K2Node_InputKeyEvent_3(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_V_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_B_K2Node_InputKeyEvent_2(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_B_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_Zero_K2Node_InputKeyEvent_1(struct FKey Key); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpActEvt_Zero_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1556ec0
	void LookUpCamera(); // Function OBCamera_Pawn.OBCamera_Pawn_C.LookUpCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InpAxisEvt_KeyboardRoll_K2Node_InputAxisEvent_3(float AxisValue); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpAxisEvt_KeyboardRoll_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x1556ec0
	void RollCamera(); // Function OBCamera_Pawn.OBCamera_Pawn_C.RollCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_4(float AxisValue); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_4 // (BlueprintEvent) // @ game+0x1556ec0
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5(float AxisValue); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5 // (BlueprintEvent) // @ game+0x1556ec0
	void SetSrintArmLength(); // Function OBCamera_Pawn.OBCamera_Pawn_C.SetSrintArmLength // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TurnCamera(); // Function OBCamera_Pawn.OBCamera_Pawn_C.TurnCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InpAxisEvt_MouseLookUp_K2Node_InputAxisEvent_2(float AxisValue); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpAxisEvt_MouseLookUp_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1556ec0
	void InpAxisEvt_MouseTurn_K2Node_InputAxisEvent_1(float AxisValue); // Function OBCamera_Pawn.OBCamera_Pawn_C.InpAxisEvt_MouseTurn_K2Node_InputAxisEvent_1 // (BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function OBCamera_Pawn.OBCamera_Pawn_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_OBCamera_Pawn(int32_t EntryPoint); // Function OBCamera_Pawn.OBCamera_Pawn_C.ExecuteUbergraph_OBCamera_Pawn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

