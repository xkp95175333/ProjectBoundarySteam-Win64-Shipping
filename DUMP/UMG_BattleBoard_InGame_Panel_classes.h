// WidgetBlueprintGeneratedClass UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C
// Size: 0x310 (Inherited: 0x2b8)
struct UUMG_BattleBoard_InGame_Panel_C : UPBBattleBoardInGameWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UBottomTips_C* BottomTips_Close; // 0x2c0(0x08)
	struct UBottomTips_C* BottomTips_Mute; // 0x2c8(0x08)
	struct UBottomTips_C* BottomTips_MuteAll; // 0x2d0(0x08)
	struct UUMG_EnemyTeamPlayerRank_C* EnemyTeamPlayerRank; // 0x2d8(0x08)
	struct UUMG_TeamScore_C* EnmeyTeamScore; // 0x2e0(0x08)
	struct UUMG_MyTeamPlayerRank_C* MyTeamPlayerRank; // 0x2e8(0x08)
	struct UUMG_TeamScore_C* MyTeamScore; // 0x2f0(0x08)
	struct UTextBlock* Text_GameMode; // 0x2f8(0x08)
	struct UTextBlock* Text_GameRemainingTime; // 0x300(0x08)
	struct UTextBlock* Text_MapName; // 0x308(0x08)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CloseWidget(); // Function UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C.CloseWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetModeAndMapName(); // Function UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C.K2_SetModeAndMapName // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetRemainingTime(); // Function UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C.K2_SetRemainingTime // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetMuteAll(); // Function UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C.K2_SetMuteAll // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetMutePlayer(); // Function UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C.K2_SetMutePlayer // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_BattleBoard_InGame_Panel(int32_t EntryPoint); // Function UMG_BattleBoard_InGame_Panel.UMG_BattleBoard_InGame_Panel_C.ExecuteUbergraph_UMG_BattleBoard_InGame_Panel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

