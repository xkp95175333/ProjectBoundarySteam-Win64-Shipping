// AnimBlueprintGeneratedClass WPN_ShieldAttack_Skeleton_ABP.WPN_ShieldAttack_Skeleton_ABP_C
// Size: 0x4e9 (Inherited: 0x2c0)
struct UWPN_ShieldAttack_Skeleton_ABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2c8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x310(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x390(0x80)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x410(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x440(0xa0)
	struct ABP_Tank_Skill_C* TankSkill; // 0x4e0(0x08)
	enum class EPBRoleSkillHandsState CurrentHandsState; // 0x4e8(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function WPN_ShieldAttack_Skeleton_ABP.WPN_ShieldAttack_Skeleton_ABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WPN_ShieldAttack_Skeleton_ABP_AnimGraphNode_BlendListByBool_A932E67B47593369C105DAADAC08B588(); // Function WPN_ShieldAttack_Skeleton_ABP.WPN_ShieldAttack_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WPN_ShieldAttack_Skeleton_ABP_AnimGraphNode_BlendListByBool_A932E67B47593369C105DAADAC08B588 // (BlueprintEvent) // @ game+0x1556ec0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function WPN_ShieldAttack_Skeleton_ABP.WPN_ShieldAttack_Skeleton_ABP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_WPN_ShieldAttack_Skeleton_ABP(int32_t EntryPoint); // Function WPN_ShieldAttack_Skeleton_ABP.WPN_ShieldAttack_Skeleton_ABP_C.ExecuteUbergraph_WPN_ShieldAttack_Skeleton_ABP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

