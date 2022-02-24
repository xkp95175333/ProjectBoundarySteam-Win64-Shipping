// BlueprintGeneratedClass ABPInvade.ABPInvade_C
// Size: 0x290 (Inherited: 0x238)
struct AABPInvade_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct TMap<struct FString, enum class EPBGameMode> GameModeMap; // 0x240(0x50)

	void ReceiveBeginPlay(); // Function ABPInvade.ABPInvade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Secure(struct APBPlayerState* OccupationPlayer, int32_t PreOccupationTeamNum); // Function ABPInvade.ABPInvade_C.Secure // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ABPInvade(int32_t EntryPoint); // Function ABPInvade.ABPInvade_C.ExecuteUbergraph_ABPInvade // (Final|UbergraphFunction) // @ game+0x1556ec0
};

