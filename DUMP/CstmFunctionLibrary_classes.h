// BlueprintGeneratedClass CstmFunctionLibrary.CstmFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UCstmFunctionLibrary_C : UBlueprintFunctionLibrary {

	struct FText GetCharacterSlotTypeName(enum class EPBCharacterSlotType InCharacterSlotType, struct UObject* __WorldContext); // Function CstmFunctionLibrary.CstmFunctionLibrary_C.GetCharacterSlotTypeName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void CompareKeyBinding(struct FName InputItemToFind, struct FKey KeyToCompare, struct UObject* __WorldContext, bool Found); // Function CstmFunctionLibrary.CstmFunctionLibrary_C.CompareKeyBinding // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetRankTypeName(enum class PBRankEnum RankType, struct UObject* __WorldContext, struct FText RankName); // Function CstmFunctionLibrary.CstmFunctionLibrary_C.GetRankTypeName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetTeamName(enum class EPBTeam TeamName, struct UObject* __WorldContext, struct FText Name); // Function CstmFunctionLibrary.CstmFunctionLibrary_C.GetTeamName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetWeaponAttachmentSlotTypeName(enum class EPBPartSlotType WeaponAttachmentSlotTypeName, struct UObject* __WorldContext, struct FText TypeName); // Function CstmFunctionLibrary.CstmFunctionLibrary_C.GetWeaponAttachmentSlotTypeName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetRoleSlotTypeName(enum class EPBSlotType RoleSlotType, struct UObject* __WorldContext, struct FText OutText); // Function CstmFunctionLibrary.CstmFunctionLibrary_C.GetRoleSlotTypeName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SphereTraceAlongCone(int32_t LoopTimes, struct FVector ForewardVec, struct FVector TraceStart, float FOV, float InitialTraceStep, bool DrawDebugInfo, bool DrawSphere, struct FVector DebugRightVec, float DebugDrawTime, struct FRotator DebugSphereRotation, struct UObject* __WorldContext); // Function CstmFunctionLibrary.CstmFunctionLibrary_C.SphereTraceAlongCone // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	float FreeCameraInput(float Input, float InputScale, float ResultToAddSelf, float LimitThreshold, bool NagitiveInput, bool NoLimit, struct UObject* __WorldContext); // Function CstmFunctionLibrary.CstmFunctionLibrary_C.FreeCameraInput // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void 3ChannelRandomize(float F0, float F1, float F2, float RandomRange, struct UObject* __WorldContext, float Channel0, float Channel1, float Channel2); // Function CstmFunctionLibrary.CstmFunctionLibrary_C.3ChannelRandomize // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
};
