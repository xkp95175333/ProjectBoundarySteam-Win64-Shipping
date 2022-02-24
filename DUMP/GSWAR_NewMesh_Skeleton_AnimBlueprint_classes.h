// AnimBlueprintGeneratedClass GSWAR_NewMesh_Skeleton_AnimBlueprint.GSWAR_NewMesh_Skeleton_AnimBlueprint_C
// Size: 0x3c0 (Inherited: 0x2c0)
struct UGSWAR_NewMesh_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x378(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function GSWAR_NewMesh_Skeleton_AnimBlueprint.GSWAR_NewMesh_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GSWAR_NewMesh_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function GSWAR_NewMesh_Skeleton_AnimBlueprint.GSWAR_NewMesh_Skeleton_AnimBlueprint_C.ExecuteUbergraph_GSWAR_NewMesh_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1556ec0
};

