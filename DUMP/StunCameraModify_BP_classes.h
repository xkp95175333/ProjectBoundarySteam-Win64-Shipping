// BlueprintGeneratedClass StunCameraModify_BP.StunCameraModify_BP_C
// Size: 0xb00 (Inherited: 0x48)
struct UStunCameraModify_BP_C : UCameraModifier {
	struct FWeightedBlendables PostProcessMaterials; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct FPostProcessSettings StunPost; // 0x60(0x550)
	struct FPostProcessSettings NoneStunPost; // 0x5b0(0x550)

	void BlueprintModifyPostProcess(float DeltaTime, float PostProcessBlendWeight, struct FPostProcessSettings PostProcessSettings); // Function StunCameraModify_BP.StunCameraModify_BP_C.BlueprintModifyPostProcess // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

