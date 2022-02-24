// WidgetBlueprintGeneratedClass UMG_FriendPanel.UMG_FriendPanel_C
// Size: 0x2d0 (Inherited: 0x268)
struct UUMG_FriendPanel_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUMG_FriendAndTeamBoard_C* FriendAndTeamBoard; // 0x270(0x08)
	struct UPBWidgetSwitcher* PBWidgetSwitcher_Content; // 0x278(0x08)
	struct UUMG_RecentlyPlayerListBoard_C* RecentlyPlayerListBoard; // 0x280(0x08)
	struct UUMG_SearchPlayerBoard_C* UMG_SearchPlayerBoard; // 0x288(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x290(0x08)
	struct UUMG_Widget_MainTitle_C* UMG_Widget_MainTitle; // 0x298(0x08)
	struct UUMG_Widget_SmallBaseTabSwitcher_C* UMG_Widget_SmallBaseTabSwitcher; // 0x2a0(0x08)
	struct TArray<struct UUMG_PlayerInfoTips_Widget_C*> TeamArray; // 0x2a8(0x10)
	struct TArray<struct UUMG_PlayerInfoTips_Widget_C*> FriendArray; // 0x2b8(0x10)
	struct UMainMenu_V2_C* MainMenuWidget; // 0x2c8(0x08)

	void ChangeToFriendPanel(); // Function UMG_FriendPanel.UMG_FriendPanel_C.ChangeToFriendPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HiddenWidget(); // Function UMG_FriendPanel.UMG_FriendPanel_C.HiddenWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowWidget(); // Function UMG_FriendPanel.UMG_FriendPanel_C.ShowWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnShowPlayerDetails(struct FPBSinglePlayerInfo PlayerInfo, struct UTexture2D* AvatarImage, enum class EPBPlayerStatus PlayerStatus); // Function UMG_FriendPanel.UMG_FriendPanel_C.OnShowPlayerDetails // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_FriendPanel.UMG_FriendPanel_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchInToTab(int32_t Tab); // Function UMG_FriendPanel.UMG_FriendPanel_C.SwitchInToTab // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_SmallBaseTabSwitcher_K2Node_ComponentBoundEvent_1_OnTabSwitched__DelegateSignature(int32_t InTabIndex, int32_t OutTabIndex); // Function UMG_FriendPanel.UMG_FriendPanel_C.BndEvt__UMG_Widget_SmallBaseTabSwitcher_K2Node_ComponentBoundEvent_1_OnTabSwitched__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_FriendPanel.UMG_FriendPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_FriendPanel(int32_t EntryPoint); // Function UMG_FriendPanel.UMG_FriendPanel_C.ExecuteUbergraph_UMG_FriendPanel // (Final|UbergraphFunction) // @ game+0x1556ec0
};

