// WidgetBlueprintGeneratedClass UMG_SingleChallenge.UMG_SingleChallenge_C
// Size: 0x298 (Inherited: 0x268)
struct UUMG_SingleChallenge_C : UPBUserWidget {
	struct UTextBlock* ChallengeName; // 0x268(0x08)
	struct UProgressBar* ChallengeProgress; // 0x270(0x08)
	struct UVerticalBox* CONDITION_2_VB; // 0x278(0x08)
	struct UTextBlock* CurrentNumber; // 0x280(0x08)
	struct UTextBlock* ProgressNumber; // 0x288(0x08)
	struct UTextBlock* TotalNumber; // 0x290(0x08)

	void SetChallengeInfo(struct FText InChallengeName, struct FText InDescription, int64_t InCurrentNumber, int32_t InCompleteNumber); // Function UMG_SingleChallenge.UMG_SingleChallenge_C.SetChallengeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

