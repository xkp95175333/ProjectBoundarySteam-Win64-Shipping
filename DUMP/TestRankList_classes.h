// WidgetBlueprintGeneratedClass TestRankList.TestRankList_C
// Size: 0x440 (Inherited: 0x3d8)
struct UTestRankList_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UTextBlock* ActuallRank; // 0x3e0(0x08)
	struct UTextBlock* DrawRank; // 0x3e8(0x08)
	struct UTextBlock* EnemyAVG; // 0x3f0(0x08)
	struct UVerticalBox* EnemyList; // 0x3f8(0x08)
	struct UTextBlock* FailRank; // 0x400(0x08)
	struct UTextBlock* MatchCount; // 0x408(0x08)
	struct UTextBlock* RankEnemyTitle; // 0x410(0x08)
	struct UTextBlock* RankTeamTitle; // 0x418(0x08)
	struct UTextBlock* SelfRank; // 0x420(0x08)
	struct UTextBlock* TeamAVG; // 0x428(0x08)
	struct UVerticalBox* TeamList; // 0x430(0x08)
	struct UTextBlock* WinRank; // 0x438(0x08)

	void SetInfo(struct FMatchDataTest MatchDataTest); // Function TestRankList.TestRankList_C.SetInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function TestRankList.TestRankList_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function TestRankList.TestRankList_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function TestRankList.TestRankList_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshInfo(); // Function TestRankList.TestRankList_C.RefreshInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TestRankList(int32_t EntryPoint); // Function TestRankList.TestRankList_C.ExecuteUbergraph_TestRankList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

