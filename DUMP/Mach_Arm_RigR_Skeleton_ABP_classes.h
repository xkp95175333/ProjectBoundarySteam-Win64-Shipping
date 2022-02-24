// AnimBlueprintGeneratedClass Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C
// Size: 0xc8c (Inherited: 0x2e0)
struct UMach_Arm_RigR_Skeleton_ABP_C : UPBAnimInstance_MachArm {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2e8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x318(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x340(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x368(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x390(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3b8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x3e0(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x460(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4a8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x4d8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x520(0x80)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x5a0(0x108)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x6a8(0xc8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x770(0x20)
	struct FAnimNode_LookAt AnimGraphNode_LookAt; // 0x790(0x1b0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x940(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x960(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x9e0(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xa28(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xa58(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xad8(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xb20(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xb50(0xb0)
	bool Deploy?; // 0xc00(0x01)
	bool FPgaget; // 0xc01(0x01)
	bool RecoildMod?; // 0xc02(0x01)
	char pad_C03[0x1]; // 0xc03(0x01)
	struct FVector FireOffset; // 0xc04(0x0c)
	struct FVector LocationOffset; // 0xc10(0x0c)
	struct FVector AxisInput; // 0xc1c(0x0c)
	float InterpSpeed; // 0xc28(0x04)
	float LocationOffsetScale; // 0xc2c(0x04)
	float UpLookSwayIntensity; // 0xc30(0x04)
	float LeftLookSwayIntensity; // 0xc34(0x04)
	float WorldDeltaTime; // 0xc38(0x04)
	char pad_C3C[0x4]; // 0xc3c(0x04)
	struct APawn* ControlledPawn; // 0xc40(0x08)
	struct APawn* LastControlledPawn; // 0xc48(0x08)
	struct APlayerController* PlayerController; // 0xc50(0x08)
	struct APlayerController_BP_C* CastedPlayerControllerBP; // 0xc58(0x08)
	struct AGAC_BP_C* castedGacBp; // 0xc60(0x08)
	struct UMKIII_ABP_C* MKIII_ABP; // 0xc68(0x08)
	float GagetLookSwayRecoverTime; // 0xc70(0x04)
	struct FRotator RotationInputOffset; // 0xc74(0x0c)
	float RotationOffsetScale; // 0xc80(0x04)
	float MouseInputX; // 0xc84(0x04)
	float MouseInputY; // 0xc88(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetRotationOffsetFromController(); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.GetRotationOffsetFromController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP_AnimGraphNode_TransitionResult_2E9AC31447887E33037906A2CF397076(); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP_AnimGraphNode_TransitionResult_2E9AC31447887E33037906A2CF397076 // (BlueprintEvent) // @ game+0x1556ec0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP_AnimGraphNode_TransitionResult_EB25E0074F77703BE92798984FF65CCB(); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP_AnimGraphNode_TransitionResult_EB25E0074F77703BE92798984FF65CCB // (BlueprintEvent) // @ game+0x1556ec0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP_AnimGraphNode_TransitionResult_A2CFCCC84F87D9AC38DEAF9F171F6C40(); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP_AnimGraphNode_TransitionResult_A2CFCCC84F87D9AC38DEAF9F171F6C40 // (BlueprintEvent) // @ game+0x1556ec0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP_AnimGraphNode_TransitionResult_F11EAA0D4635DE8202118498AD710171(); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP_AnimGraphNode_TransitionResult_F11EAA0D4635DE8202118498AD710171 // (BlueprintEvent) // @ game+0x1556ec0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP_AnimGraphNode_TransitionResult_7EFADF3F429ED1D97FAC27819B710F7C(); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP_AnimGraphNode_TransitionResult_7EFADF3F429ED1D97FAC27819B710F7C // (BlueprintEvent) // @ game+0x1556ec0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void FPgagetmod(); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.FPgagetmod // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FireOffset_Anim(struct FVector FireOffset); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.FireOffset_Anim // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IntoRecoilMod(); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.IntoRecoilMod // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OutRecoilMod(); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.OutRecoilMod // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP(int32_t EntryPoint); // Function Mach_Arm_RigR_Skeleton_ABP.Mach_Arm_RigR_Skeleton_ABP_C.ExecuteUbergraph_Mach_Arm_RigR_Skeleton_ABP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

