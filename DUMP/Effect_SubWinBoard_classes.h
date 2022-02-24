// WidgetBlueprintGeneratedClass Effect_SubWinBoard.Effect_SubWinBoard_C
// Size: 0x390 (Inherited: 0x268)
struct UEffect_SubWinBoard_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* ShowBlackBG; // 0x270(0x08)
	struct UWidgetAnimation* ExchangeTeam; // 0x278(0x08)
	struct UWidgetAnimation* Finish_Normal; // 0x280(0x08)
	struct UWidgetAnimation* Result_Draw; // 0x288(0x08)
	struct UWidgetAnimation* Result_EnemyWin; // 0x290(0x08)
	struct UWidgetAnimation* Result_AllyWin; // 0x298(0x08)
	struct UWidgetAnimation* Finish_WIthScore; // 0x2a0(0x08)
	struct UImage* Ally_BG; // 0x2a8(0x08)
	struct UTextBlock* Ally_Score; // 0x2b0(0x08)
	struct UImage* AllyLogo; // 0x2b8(0x08)
	struct UTextBlock* AllyTeamName; // 0x2c0(0x08)
	struct UCanvasPanel* BackGroundBoard; // 0x2c8(0x08)
	struct UImage* Black_BG; // 0x2d0(0x08)
	struct UCanvasPanel* Board_BG; // 0x2d8(0x08)
	struct UImage* Draw_BG; // 0x2e0(0x08)
	struct UImage* Draw_Lines; // 0x2e8(0x08)
	struct UImage* Draw_Lines_2; // 0x2f0(0x08)
	struct UTextBlock* DrawText; // 0x2f8(0x08)
	struct UImage* Enemy_BG; // 0x300(0x08)
	struct UTextBlock* Enemy_Score; // 0x308(0x08)
	struct UImage* EnemyLogo; // 0x310(0x08)
	struct UTextBlock* EnemyTeamName; // 0x318(0x08)
	struct UImage* ExChange_BG; // 0x320(0x08)
	struct UCanvasPanel* Lines_Board; // 0x328(0x08)
	struct UCanvasPanel* Lines_Board_2; // 0x330(0x08)
	struct UTextBlock* LostText; // 0x338(0x08)
	struct UCanvasPanel* Normal_BGBox; // 0x340(0x08)
	struct UTextBlock* WinText; // 0x348(0x08)
	int32_t RoundNum; // 0x350(0x04)
	bool IsExchangeTeam; // 0x354(0x01)
	enum class EPBGameResult eGameResult; // 0x355(0x01)
	char pad_356[0x2]; // 0x356(0x02)
	int32_t AllyScore; // 0x358(0x04)
	int32_t EnemyScore; // 0x35c(0x04)
	struct FText AllyTeamName_Text; // 0x360(0x18)
	struct FText EnemyTeamName_Text; // 0x378(0x18)

	void SequenceEvent__ENTRYPOINTEffect_SubWinBoard_5(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.SequenceEvent__ENTRYPOINTEffect_SubWinBoard_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent__ENTRYPOINTEffect_SubWinBoard_4(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.SequenceEvent__ENTRYPOINTEffect_SubWinBoard_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent__ENTRYPOINTEffect_SubWinBoard_3(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.SequenceEvent__ENTRYPOINTEffect_SubWinBoard_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent__ENTRYPOINTEffect_SubWinBoard_2(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.SequenceEvent__ENTRYPOINTEffect_SubWinBoard_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent__ENTRYPOINTEffect_SubWinBoard_1(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.SequenceEvent__ENTRYPOINTEffect_SubWinBoard_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartShow(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.StartShow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent_1(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayResult_OP_SKM(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.PlayResult_OP_SKM // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayFinish_OP_SKM(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.PlayFinish_OP_SKM // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResultPause(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.ResultPause // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Init(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayFinish_FC_TDM(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.PlayFinish_FC_TDM // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayFinished(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.PlayFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Pause_Exchange(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.Pause_Exchange // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AnimEvent_PlayFInish_FC_TDM(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.AnimEvent_PlayFInish_FC_TDM // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ChangeTeam(); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.ChangeTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Effect_SubWinBoard(int32_t EntryPoint); // Function Effect_SubWinBoard.Effect_SubWinBoard_C.ExecuteUbergraph_Effect_SubWinBoard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

