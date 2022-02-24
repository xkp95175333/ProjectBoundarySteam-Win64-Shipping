// BlueprintGeneratedClass FL_PlaySoundFunction.FL_PlaySoundFunction_C
// Size: 0x28 (Inherited: 0x28)
struct UFL_PlaySoundFunction_C : UBlueprintFunctionLibrary {

	void TriggerEventInGameSoundAttached(struct FName InSoundEventID, struct FName InEventGroup, struct USceneComponent* AttachComponent, enum class EAttachLocation LocationType, struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.TriggerEventInGameSoundAttached // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ClearAllSoundsAndVoices(struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.ClearAllSoundsAndVoices // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopInGameSoundByEventGroup(struct FName InEventGroup, struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.StopInGameSoundByEventGroup // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TriggerEvent_InGameSoundAtLocation(struct FName InSoundEventID, struct FName InEventGroup, struct FVector InLocation, struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.TriggerEvent_InGameSoundAtLocation // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopCurrentBGMusic(struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.StopCurrentBGMusic // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Continue to Play Current BGMusic(struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.Continue to Play Current BGMusic // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Pause CurrentBGMusic(struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.Pause CurrentBGMusic // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TriggerEvent_GameMusic(struct FName InMusicEventID, struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.TriggerEvent_GameMusic // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Trigger Event Character Sound 2D(struct FName InSoundEffectID, struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.Trigger Event Character Sound 2D // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TriggerEvent_CharacterSoundAttached(struct FName InSoundEffectID, struct USceneComponent* AttachComponent, float VolumeMultiplier, float PitchMultiplier, struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.TriggerEvent_CharacterSoundAttached // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TriggerOtherSoundEvent(struct FName InSoundEventID, struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.TriggerOtherSoundEvent // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TriggerRoleSoundEvent(struct FName InSoundEventID, enum class EPBRole InRoleType, struct APBCharacter* InSpeaker, struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.TriggerRoleSoundEvent // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TriggerEventUISound(struct FName InSoundEffectID, struct UObject* __WorldContext); // Function FL_PlaySoundFunction.FL_PlaySoundFunction_C.TriggerEventUISound // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

