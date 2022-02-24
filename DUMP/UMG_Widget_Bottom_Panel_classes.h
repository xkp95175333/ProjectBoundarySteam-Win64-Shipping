// WidgetBlueprintGeneratedClass UMG_Widget_Bottom_Panel.UMG_Widget_Bottom_Panel_C
// Size: 0x2b0 (Inherited: 0x268)
struct UUMG_Widget_Bottom_Panel_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUMG_Widget_Bottom_ButtonTips_C* UMG_Widget_Bottom_ButtonTips; // 0x270(0x08)
	struct UUMG_Widget_Bottom_Friends_C* UMG_Widget_Bottom_Friends; // 0x278(0x08)
	struct FMulticastInlineDelegate OnShowFriendsPage; // 0x280(0x10)
	struct TArray<enum class EPBButtonTipType> ButtonTipsArray; // 0x290(0x10)
	bool bShowFriendTips; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UMainMenu_V2_C* MainMenuWidget; // 0x2a8(0x08)

	void GetTestWeaponTip(struct UBottomTips_C* TestWeaponTip); // Function UMG_Widget_Bottom_Panel.UMG_Widget_Bottom_Panel_C.GetTestWeaponTip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void RefreshTips(struct TArray<enum class EPBButtonTipType> InShowButtonTipArray, bool InShowFriendsTip); // Function UMG_Widget_Bottom_Panel.UMG_Widget_Bottom_Panel_C.RefreshTips // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_Bottom_Friends_K2Node_ComponentBoundEvent_0_OnFriendButtonClicked__DelegateSignature(); // Function UMG_Widget_Bottom_Panel.UMG_Widget_Bottom_Panel_C.BndEvt__UMG_Widget_Bottom_Friends_K2Node_ComponentBoundEvent_0_OnFriendButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Widget_Bottom_Panel.UMG_Widget_Bottom_Panel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Widget_Bottom_Panel.UMG_Widget_Bottom_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Bottom_Panel(int32_t EntryPoint); // Function UMG_Widget_Bottom_Panel.UMG_Widget_Bottom_Panel_C.ExecuteUbergraph_UMG_Widget_Bottom_Panel // (Final|UbergraphFunction) // @ game+0x1556ec0
	void OnShowFriendsPage__DelegateSignature(); // Function UMG_Widget_Bottom_Panel.UMG_Widget_Bottom_Panel_C.OnShowFriendsPage__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

