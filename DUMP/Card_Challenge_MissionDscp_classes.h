// WidgetBlueprintGeneratedClass Card_Challenge_MissionDscp.Card_Challenge_MissionDscp_C
// Size: 0x298 (Inherited: 0x268)
struct UCard_Challenge_MissionDscp_C : UPBUserWidget {
	struct UTextBlock* ChallengeCompleteValue; // 0x268(0x08)
	struct UProgressBar* ChallengeProgressBar; // 0x270(0x08)
	struct UTextBlock* ChallengeProgressValue; // 0x278(0x08)
	struct UTextBlock* Complete; // 0x280(0x08)
	struct UTextBlock* Dscp; // 0x288(0x08)
	struct UImage* Image_558; // 0x290(0x08)

	void GetStatisticsValue(struct FName Key, int64_t Value); // Function Card_Challenge_MissionDscp.Card_Challenge_MissionDscp_C.GetStatisticsValue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetWeaponKillCount(struct FName Key, int64_t WeaponKillCount); // Function Card_Challenge_MissionDscp.Card_Challenge_MissionDscp_C.GetWeaponKillCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct TMap<struct FName, int64_t> GetStatisticsInfo(); // Function Card_Challenge_MissionDscp.Card_Challenge_MissionDscp_C.GetStatisticsInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Refresh Dscp and Progress(struct FName ChallengeId, struct FName StatisticName, int32_t StatisticNameIndex); // Function Card_Challenge_MissionDscp.Card_Challenge_MissionDscp_C.Refresh Dscp and Progress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

