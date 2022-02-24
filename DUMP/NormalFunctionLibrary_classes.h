// BlueprintGeneratedClass NormalFunctionLibrary.NormalFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UNormalFunctionLibrary_C : UBlueprintFunctionLibrary {

	void BoxAdd(struct FBox A, struct FBox B, struct UObject* __WorldContext, struct FBox Ret); // Function NormalFunctionLibrary.NormalFunctionLibrary_C.BoxAdd // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsFriend(struct APlayerState* InPlayerState, struct UObject* __WorldContext, bool bIsFriend); // Function NormalFunctionLibrary.NormalFunctionLibrary_C.IsFriend // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsErrorCodeOkay(int32_t InErrorCode, struct UObject* __WorldContext, bool IsOkay, struct FText ErrorText); // Function NormalFunctionLibrary.NormalFunctionLibrary_C.IsErrorCodeOkay // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlaySoundFXOnHitEnemy(enum class EPBHitZone HitZone, struct UObject* __WorldContext); // Function NormalFunctionLibrary.NormalFunctionLibrary_C.PlaySoundFXOnHitEnemy // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetPBGameEventManager_BP(struct UObject* __WorldContext, struct APBGameEventManager_BP_C* AsPBGame Event Manager BP); // Function NormalFunctionLibrary.NormalFunctionLibrary_C.GetPBGameEventManager_BP // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetPBAchievemanager_BP(struct UObject* __WorldContext, struct APBAchievementManager_BP_C* OutPBAchievement Manager BP); // Function NormalFunctionLibrary.NormalFunctionLibrary_C.GetPBAchievemanager_BP // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Outlinewith Character(struct AController* InControler, bool bIsEnable, bool isNotAlwaysShow, struct APawn* InPawn, struct UObject* __WorldContext); // Function NormalFunctionLibrary.NormalFunctionLibrary_C.Outlinewith Character // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetSoundRole(struct FName InID, struct UObject* __WorldContext, enum class SoundRole NewParam); // Function NormalFunctionLibrary.NormalFunctionLibrary_C.GetSoundRole // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetErrorTextFromErrorCode(int32_t ErrorCode, struct UObject* __WorldContext, struct FText ErrorText); // Function NormalFunctionLibrary.NormalFunctionLibrary_C.GetErrorTextFromErrorCode // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetPawnClassID(struct FName ID, struct UObject* __WorldContext, struct FName OutRoleID); // Function NormalFunctionLibrary.NormalFunctionLibrary_C.GetPawnClassID // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
};

