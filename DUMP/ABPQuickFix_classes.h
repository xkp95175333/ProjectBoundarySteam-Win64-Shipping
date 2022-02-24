// BlueprintGeneratedClass ABPQuickFix.ABPQuickFix_C
// Size: 0x240 (Inherited: 0x238)
struct AABPQuickFix_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)

	void ReceiveBeginPlay(); // Function ABPQuickFix.ABPQuickFix_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void UAVFixAirTight(struct TArray<struct ABP_MechUAV_C*> MechUAVArray, struct APlayerState* FixedPlayerState); // Function ABPQuickFix.ABPQuickFix_C.UAVFixAirTight // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ABPQuickFix(int32_t EntryPoint); // Function ABPQuickFix.ABPQuickFix_C.ExecuteUbergraph_ABPQuickFix // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

