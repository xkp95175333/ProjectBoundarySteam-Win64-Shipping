// AnimBlueprintGeneratedClass RCVR_GSW_AR_Skeleton_AnimBlueprint.RCVR_GSW_AR_Skeleton_AnimBlueprint_C
// Size: 0x5ec (Inherited: 0x2c0)
struct URCVR_GSW_AR_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x2f8(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x400(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x420(0x80)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4a0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x4c0(0x108)
	struct FVector BarrelOffset; // 0x5c8(0x0c)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct ACSTM_Base_C* OwnerWeapon; // 0x5d8(0x08)
	struct FVector MuzzleOffset; // 0x5e0(0x0c)

	void AnimGraph(struct FPoseLink AnimGraph); // Function RCVR_GSW_AR_Skeleton_AnimBlueprint.RCVR_GSW_AR_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateOffsets(struct FVector BarrelOffset, struct FVector MuzzleOffset); // Function RCVR_GSW_AR_Skeleton_AnimBlueprint.RCVR_GSW_AR_Skeleton_AnimBlueprint_C.UpdateOffsets // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_RCVR_GSW_AR_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function RCVR_GSW_AR_Skeleton_AnimBlueprint.RCVR_GSW_AR_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RCVR_GSW_AR_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1556ec0
};

