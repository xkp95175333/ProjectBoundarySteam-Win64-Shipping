// BlueprintGeneratedClass ABPSecure.ABPSecure_C
// Size: 0x290 (Inherited: 0x238)
struct AABPSecure_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct TMap<struct FString, enum class EPBGameMode> GameModeMap; // 0x240(0x50)

	void ReceiveBeginPlay(); // Function ABPSecure.ABPSecure_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Secure(struct APBPlayerState* OccupationPlayer, int32_t PreOccupationTeamNum); // Function ABPSecure.ABPSecure_C.Secure // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ABPSecure(int32_t EntryPoint); // Function ABPSecure.ABPSecure_C.ExecuteUbergraph_ABPSecure // (Final|UbergraphFunction) // @ game+0x1556ec0
};

