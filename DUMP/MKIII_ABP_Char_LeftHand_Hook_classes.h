// AnimBlueprintGeneratedClass MKIII_ABP_Char_LeftHand_Hook.MKIII_ABP_Char_LeftHand_Hook_C
// Size: 0xfb2 (Inherited: 0x2c0)
struct UMKIII_ABP_Char_LeftHand_Hook_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8(0x118)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x410(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4d0(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x550(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x610(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x658(0x80)
	char pad_6D8[0x8]; // 0x6d8(0x08)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x6e0(0x1e0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x8c0(0x108)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x9c8(0xf0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xab8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xad8(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xaf8(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xc50(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xc78(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xca0(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xd40(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xe98(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xec0(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xee8(0xa0)
	struct AGAC_BP_C* OwningCharacter; // 0xf88(0x08)
	bool HookSnapping?; // 0xf90(0x01)
	bool IsHookUsing?; // 0xf91(0x01)
	char pad_F92[0x2]; // 0xf92(0x02)
	struct FVector HookingHandOffset; // 0xf94(0x0c)
	struct FVector HookCaughtLocation; // 0xfa0(0x0c)
	float UseGraple_AfterInterp; // 0xfac(0x04)
	enum class EPBStateInHookUsing HookState; // 0xfb0(0x01)
	bool RaiseHand?; // 0xfb1(0x01)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function MKIII_ABP_Char_LeftHand_Hook.MKIII_ABP_Char_LeftHand_Hook_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInterpSpeedAndIntrep(); // Function MKIII_ABP_Char_LeftHand_Hook.MKIII_ABP_Char_LeftHand_Hook_C.SetInterpSpeedAndIntrep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function MKIII_ABP_Char_LeftHand_Hook.MKIII_ABP_Char_LeftHand_Hook_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BlueprintInitializeAnimation(); // Function MKIII_ABP_Char_LeftHand_Hook.MKIII_ABP_Char_LeftHand_Hook_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_MKIII_ABP_Char_LeftHand_Hook(int32_t EntryPoint); // Function MKIII_ABP_Char_LeftHand_Hook.MKIII_ABP_Char_LeftHand_Hook_C.ExecuteUbergraph_MKIII_ABP_Char_LeftHand_Hook // (Final|UbergraphFunction) // @ game+0x1556ec0
};

