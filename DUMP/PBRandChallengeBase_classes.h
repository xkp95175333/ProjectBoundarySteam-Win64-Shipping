// BlueprintGeneratedClass PBRandChallengeBase.PBRandChallengeBase_C
// Size: 0x23c (Inherited: 0x230)
struct APBRandChallengeBase_C : APBChallengeState {
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	int32_t Count; // 0x238(0x04)

	void GetChallengeData(struct FChallengeData OutData, bool bFind); // Function PBRandChallengeBase.PBRandChallengeBase_C.GetChallengeData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetPercent(float OutPercent); // Function PBRandChallengeBase.PBRandChallengeBase_C.GetPercent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetCountString(struct FText CountStr); // Function PBRandChallengeBase.PBRandChallengeBase_C.GetCountString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

