// AnimBlueprintGeneratedClass Mesh_St_Weap_MSA2_Skeleton_AnimBlueprint.Mesh_St_Weap_MSA2_Skeleton_AnimBlueprint_C
// Size: 0x3c4 (Inherited: 0x2c0)
struct UMesh_St_Weap_MSA2_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2c8(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x348(0x48)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x390(0x30)
	int32_t AmmoInClip; // 0x3c0(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Mesh_St_Weap_MSA2_Skeleton_AnimBlueprint.Mesh_St_Weap_MSA2_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Mesh_St_Weap_MSA2_Skeleton_AnimBlueprint.Mesh_St_Weap_MSA2_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Mesh_St_Weap_MSA2_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function Mesh_St_Weap_MSA2_Skeleton_AnimBlueprint.Mesh_St_Weap_MSA2_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Mesh_St_Weap_MSA2_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1556ec0
};

