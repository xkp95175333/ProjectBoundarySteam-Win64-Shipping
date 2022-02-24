// AnimBlueprintGeneratedClass GSW_LP_SK_Skeleton_AnimBlueprint.GSW_LP_SK_Skeleton_AnimBlueprint_C
// Size: 0x3c4 (Inherited: 0x2c0)
struct UGSW_LP_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2c8(0x80)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x348(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x378(0x48)
	float Feedback; // 0x3c0(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function GSW_LP_SK_Skeleton_AnimBlueprint.GSW_LP_SK_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GSW_LP_SK_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function GSW_LP_SK_Skeleton_AnimBlueprint.GSW_LP_SK_Skeleton_AnimBlueprint_C.ExecuteUbergraph_GSW_LP_SK_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1556ec0
};

