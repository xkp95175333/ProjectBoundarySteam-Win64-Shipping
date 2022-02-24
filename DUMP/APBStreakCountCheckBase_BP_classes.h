// BlueprintGeneratedClass APBStreakCountCheckBase_BP.APBStreakCountCheckBase_BP_C
// Size: 0x2c0 (Inherited: 0x268)
struct AAPBStreakCountCheckBase_BP_C : AAPBKillCheckBase_BP_C {
	int32_t CheckStreakCount; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TMap<struct FString, int32_t> CountCheckMap; // 0x270(0x50)

	void ValidKillerHandle(); // Function APBStreakCountCheckBase_BP.APBStreakCountCheckBase_BP_C.ValidKillerHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StreakCountCheck(); // Function APBStreakCountCheckBase_BP.APBStreakCountCheckBase_BP_C.StreakCountCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

