// AnimBlueprintGeneratedClass SK_Weapon_Mosin_Skeleton_AnimBlueprint.SK_Weapon_Mosin_Skeleton_AnimBlueprint_C
// Size: 0x508 (Inherited: 0x2c0)
struct USK_Weapon_Mosin_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2c8(0x48)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x310(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x340(0x80)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3c0(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4c8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4e8(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_Weapon_Mosin_Skeleton_AnimBlueprint.SK_Weapon_Mosin_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_SK_Weapon_Mosin_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function SK_Weapon_Mosin_Skeleton_AnimBlueprint.SK_Weapon_Mosin_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_Weapon_Mosin_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1556ec0
};

