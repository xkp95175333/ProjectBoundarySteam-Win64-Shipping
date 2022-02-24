// AnimBlueprintGeneratedClass VDWF_Skeleton_AnimBlueprint.VDWF_Skeleton_AnimBlueprint_C
// Size: 0x660 (Inherited: 0x2c0)
struct UVDWF_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x2f8(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x400(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x420(0x20)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x440(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x508(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x588(0x80)
	bool Launched; // 0x608(0x01)
	char pad_609[0x3]; // 0x609(0x03)
	struct FVector HeadLocation; // 0x60c(0x0c)
	struct APBCharacter* PBCharacter; // 0x618(0x08)
	float GrappleOpenStats; // 0x620(0x04)
	struct FRotator Rotation; // 0x624(0x0c)
	struct FVector LastHeadLocation; // 0x630(0x0c)
	bool Rotate; // 0x63c(0x01)
	char pad_63D[0x3]; // 0x63d(0x03)
	struct FVector RootOffset; // 0x640(0x0c)
	struct FRotator RootRotation; // 0x64c(0x0c)
	struct APBCatchingModule* PBCatchingModule; // 0x658(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function VDWF_Skeleton_AnimBlueprint.VDWF_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function VDWF_Skeleton_AnimBlueprint.VDWF_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_VDWF_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function VDWF_Skeleton_AnimBlueprint.VDWF_Skeleton_AnimBlueprint_C.ExecuteUbergraph_VDWF_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1556ec0
};

