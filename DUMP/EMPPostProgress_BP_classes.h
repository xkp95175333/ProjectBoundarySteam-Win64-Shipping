// BlueprintGeneratedClass EMPPostProgress_BP.EMPPostProgress_BP_C
// Size: 0x1ae8 (Inherited: 0x48)
struct UEMPPostProgress_BP_C : UCameraModifier {
	struct APBCharacter_BP_C* PBCharacter; // 0x48(0x08)
	struct FPostProcessSettings EMPModify; // 0x50(0x550)
	struct FPostProcessSettings EMPPostProcess; // 0x5a0(0x550)
	struct FPostProcessSettings NoneEMPPost; // 0xaf0(0x550)
	struct FPostProcessSettings EMPPost; // 0x1040(0x550)
	struct FPostProcessSettings EMPPostv2; // 0x1590(0x550)
	float BlendWeight; // 0x1ae0(0x04)
	float BlendSpeed; // 0x1ae4(0x04)

	void BlueprintModifyPostProcess(float DeltaTime, float PostProcessBlendWeight, struct FPostProcessSettings PostProcessSettings); // Function EMPPostProgress_BP.EMPPostProgress_BP_C.BlueprintModifyPostProcess // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

