// WidgetBlueprintGeneratedClass UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C
// Size: 0x3b8 (Inherited: 0x350)
struct UUMG_PlayerInfo_InGame_C : UPBPlayerInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UButton* Button_Focus; // 0x358(0x08)
	struct UImage* Image_FocusOn; // 0x360(0x08)
	struct UOverlay* PlayerInfo; // 0x368(0x08)
	struct UUMG_PlayerState_Tip_C* UMG_PlayerState_Tip_Assist; // 0x370(0x08)
	struct UUMG_PlayerState_Tip_C* UMG_PlayerState_Tip_Death; // 0x378(0x08)
	struct UUMG_PlayerState_Tip_C* UMG_PlayerState_Tip_InternalVoice; // 0x380(0x08)
	struct UUMG_PlayerState_Tip_C* UMG_PlayerState_Tip_Kill; // 0x388(0x08)
	struct UUMG_PlayerState_Tip_C* UMG_PlayerState_Tip_Ping; // 0x390(0x08)
	struct UUMG_PlayerState_Tip_C* UMG_PlayerState_Tip_Player; // 0x398(0x08)
	struct UUMG_PlayerState_Tip_C* UMG_PlayerState_Tip_Role; // 0x3a0(0x08)
	struct UUMG_PlayerState_Tip_C* UMG_PlayerState_Tip_Score; // 0x3a8(0x08)
	struct APBPlayerState* CurrentPlayerState_1; // 0x3b0(0x08)

	void Reset Info Color(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.Reset Info Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Focus Info Color(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.Set Focus Info Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Self Info Color(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.Set Self Info Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetAssistText(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetAssistText // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetScoreText(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetScoreText // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetDeathText(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetDeathText // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetKillText(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetKillText // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetPingText(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetPingText // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetIsDyingImage(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetIsDyingImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetRoleImage(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetRoleImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetLocalMuteImage(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetLocalMuteImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetIsSpeakingImage(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetIsSpeakingImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetNotNullPlayerInfo(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetNotNullPlayerInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetNullPlayerInfo(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetNullPlayerInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetSelectPlayer(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.K2_SetSelectPlayer // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_PlayerInfo_InGame_Button_Focus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.BndEvt__UMG_PlayerInfo_InGame_Button_Focus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_PlayerInfo_InGame(int32_t EntryPoint); // Function UMG_PlayerInfo_InGame.UMG_PlayerInfo_InGame_C.ExecuteUbergraph_UMG_PlayerInfo_InGame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

