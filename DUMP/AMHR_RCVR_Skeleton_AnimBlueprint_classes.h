// AnimBlueprintGeneratedClass AMHR_RCVR_Skeleton_AnimBlueprint.AMHR_RCVR_Skeleton_AnimBlueprint_C
// Size: 0x3c0 (Inherited: 0x2c0)
struct UAMHR_RCVR_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x340(0x80)

	void AnimGraph(struct FPoseLink AnimGraph); // Function AMHR_RCVR_Skeleton_AnimBlueprint.AMHR_RCVR_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_AMHR_RCVR_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function AMHR_RCVR_Skeleton_AnimBlueprint.AMHR_RCVR_Skeleton_AnimBlueprint_C.ExecuteUbergraph_AMHR_RCVR_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1556ec0
};

