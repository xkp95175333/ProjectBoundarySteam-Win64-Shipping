// WidgetBlueprintGeneratedClass UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C
// Size: 0x2c0 (Inherited: 0x268)
struct UUMG_Widget_Top_PlayerCard_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCard_Player_C* Card_Player; // 0x270(0x08)
	struct UUMG_Widget_Bottom_Friends_C* UMG_Widget_Bottom_Friends; // 0x278(0x08)
	struct FMulticastInlineDelegate OnSwitchToTab; // 0x280(0x10)
	struct FMulticastInlineDelegate OnShowSettingMenu; // 0x290(0x10)
	struct UMainMenu_V2_C* MainMenuWidget; // 0x2a0(0x08)
	bool bShowFriendTips; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct FMulticastInlineDelegate OnShowFriendsPage; // 0x2b0(0x10)

	void RefreshTips(bool InShowFriendsTip); // Function UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C.RefreshTips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UnregisterInputComponentForSwitcher(); // Function UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C.UnregisterInputComponentForSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RegisterInputComponentForSwitcher(); // Function UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C.RegisterInputComponentForSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_Top_PlayerCard_UMG_Widget_Bottom_Friends_K2Node_ComponentBoundEvent_0_OnFriendButtonClicked__DelegateSignature(); // Function UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C.BndEvt__UMG_Widget_Top_PlayerCard_UMG_Widget_Bottom_Friends_K2Node_ComponentBoundEvent_0_OnFriendButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Top_PlayerCard(int32_t EntryPoint); // Function UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C.ExecuteUbergraph_UMG_Widget_Top_PlayerCard // (Final|UbergraphFunction) // @ game+0x1556ec0
	void OnShowFriendsPage__DelegateSignature(); // Function UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C.OnShowFriendsPage__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnShowSettingMenu__DelegateSignature(); // Function UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C.OnShowSettingMenu__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnSwitchToTab__DelegateSignature(int32_t InTabIndex); // Function UMG_Widget_Top_PlayerCard.UMG_Widget_Top_PlayerCard_C.OnSwitchToTab__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

