// BlueprintGeneratedClass PBDataStatFunction_BP.PBDataStatFunction_BP_C
// Size: 0x28 (Inherited: 0x28)
struct UPBDataStatFunction_BP_C : UBlueprintFunctionLibrary {

	void GetMaxGameTimeRole(struct UObject* __WorldContext, struct FName OutRoleID); // Function PBDataStatFunction_BP.PBDataStatFunction_BP_C.GetMaxGameTimeRole // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetStatDataRoleImage(struct FName InRoleID, struct UObject* __WorldContext, struct UTexture2D* RoleImage); // Function PBDataStatFunction_BP.PBDataStatFunction_BP_C.GetStatDataRoleImage // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetGameTime(struct FName InRoleID, struct UObject* __WorldContext, struct FText OutText); // Function PBDataStatFunction_BP.PBDataStatFunction_BP_C.GetGameTime // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetStatData(struct FName InRoleID, struct FName InKey, struct UObject* __WorldContext, struct FText OutText); // Function PBDataStatFunction_BP.PBDataStatFunction_BP_C.GetStatData // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetWinRate(struct FName InRoleID, struct UObject* __WorldContext, struct FText OutText); // Function PBDataStatFunction_BP.PBDataStatFunction_BP_C.GetWinRate // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetSPM(struct FName InRoleID, struct UObject* __WorldContext, struct FText OutText); // Function PBDataStatFunction_BP.PBDataStatFunction_BP_C.GetSPM // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetKDA(struct FName InRoleID, struct UObject* __WorldContext, struct FText OutText); // Function PBDataStatFunction_BP.PBDataStatFunction_BP_C.GetKDA // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetStatKey(struct FName InRoleID, struct FString StatDataKey, struct UObject* __WorldContext, struct FName OutDataStatName); // Function PBDataStatFunction_BP.PBDataStatFunction_BP_C.GetStatKey // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetHItRate(struct FName InRoleID, struct UObject* __WorldContext, struct FText OutText); // Function PBDataStatFunction_BP.PBDataStatFunction_BP_C.GetHItRate // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

