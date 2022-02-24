// WidgetBlueprintGeneratedClass UMG_MainMenuBase.UMG_MainMenuBase_C
// Size: 0x2a8 (Inherited: 0x268)
struct UUMG_MainMenuBase_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBottomTips_C* EscTips; // 0x270(0x08)
	struct UUMG_ConnectionStatus_C* UMG_ConnectionStatus; // 0x278(0x08)
	struct UUMG_MessagePanel_C* UMG_MessagePanel; // 0x280(0x08)
	struct UUMG_MessagePanel_C* UMG_MessagePanel_Bottom; // 0x288(0x08)
	struct UUMG_Path_C* UMG_Path; // 0x290(0x08)
	struct UUMG_SettingCard_C* UMG_SettingCard; // 0x298(0x08)
	struct UUMG_Version_C* UMG_Version; // 0x2a0(0x08)

	void OnMatchNotFound(); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.OnMatchNotFound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnMatchFound(); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.OnMatchFound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnMatchmakingStateChanged(enum class ELogicServerTeamMatchmakingState NewState); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.OnMatchmakingStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnMatchmakingStateChangedDelegate(enum class ELogicServerTeamMatchmakingState NewState); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.OnMatchmakingStateChangedDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnMatchFoundDelegate(); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.OnMatchFoundDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnMatchNotFoundDelegate(); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.OnMatchNotFoundDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BackPreviousEvent(bool bQuitgame); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.BackPreviousEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent(); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnNetworkErrorDelegate_Event_1(); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.OnNetworkErrorDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void LogicServerStateChanged(struct FName InStateName); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.LogicServerStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_MainMenuBase(int32_t EntryPoint); // Function UMG_MainMenuBase.UMG_MainMenuBase_C.ExecuteUbergraph_UMG_MainMenuBase // (Final|UbergraphFunction) // @ game+0x1556ec0
};

