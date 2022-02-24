// BlueprintGeneratedClass BP_CamereaModify_LowAirPerrsure.BP_CamereaModify_LowAirPerrsure_C
// Size: 0x5a4 (Inherited: 0x48)
struct UBP_CamereaModify_LowAirPerrsure_C : UCameraModifier {
	float NewVar_1; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FPostProcessSettings NoVFXPost; // 0x50(0x550)
	float AirPresurepercent; // 0x5a0(0x04)

	void BlueprintModifyPostProcess(float DeltaTime, float PostProcessBlendWeight, struct FPostProcessSettings PostProcessSettings); // Function BP_CamereaModify_LowAirPerrsure.BP_CamereaModify_LowAirPerrsure_C.BlueprintModifyPostProcess // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

