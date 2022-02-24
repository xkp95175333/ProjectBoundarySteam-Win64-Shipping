// BlueprintGeneratedClass LensBroken_BP.LensBroken_BP_C
// Size: 0x5d0 (Inherited: 0x48)
struct ULensBroken_BP_C : UCameraModifier {
	struct APBCharacter_BP_C* Character; // 0x48(0x08)
	float RedVersionThreshold; // 0x50(0x04)
	struct FLinearColor RedVersionColor; // 0x54(0x10)
	struct FLinearColor NormalVersionColor; // 0x64(0x10)
	bool IsEMPEffectOn; // 0x74(0x01)
	char pad_75[0xb]; // 0x75(0x0b)
	struct FPostProcessSettings LensBrokenPP; // 0x80(0x550)

	void BlueprintModifyPostProcess(float DeltaTime, float PostProcessBlendWeight, struct FPostProcessSettings PostProcessSettings); // Function LensBroken_BP.LensBroken_BP_C.BlueprintModifyPostProcess // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

