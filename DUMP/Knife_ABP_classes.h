// AnimBlueprintGeneratedClass Knife_ABP.Knife_ABP_C
// Size: 0x3c0 (Inherited: 0x2c0)
struct UKnife_ABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x340(0x80)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Knife_ABP.Knife_ABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Knife_ABP(int32_t EntryPoint); // Function Knife_ABP.Knife_ABP_C.ExecuteUbergraph_Knife_ABP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

