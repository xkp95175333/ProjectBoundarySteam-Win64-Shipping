// WidgetBlueprintGeneratedClass SubMenu_PLAY.SubMenu_PLAY_C
// Size: 0x4b0 (Inherited: 0x3d8)
struct USubMenu_PLAY_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UTextBlock* Announcement; // 0x3e0(0x08)
	struct UButton* Button_90; // 0x3e8(0x08)
	struct UCard_Contract_C* Card_Contract; // 0x3f0(0x08)
	struct UCard_Contract_C* Card_Contract_2; // 0x3f8(0x08)
	struct UCard_Contract_C* Card_Contract_3; // 0x400(0x08)
	struct UCard_MainMenu_Daliy_C* Card_Daliy_V0; // 0x408(0x08)
	struct UCard_PlayMode_C* Card_DMTN; // 0x410(0x08)
	struct UCard_PlayMode_C* Card_FC; // 0x418(0x08)
	struct UCard_PlayMode_C* Card_FFA; // 0x420(0x08)
	struct UCard_Info_C* Card_Info; // 0x428(0x08)
	struct UCard_Mainmenu_Local_C* Card_Local; // 0x430(0x08)
	struct UCard_MainMenu_News_C* Card_MainMenu_News; // 0x438(0x08)
	struct UCard_PlayMode_C* Card_OP; // 0x440(0x08)
	struct UCard_Play_C* Card_Play; // 0x448(0x08)
	struct UCard_QuickMatch_C* Card_QuickMatch; // 0x450(0x08)
	struct UCard_QuickMatch_C* Card_QuickSmallMatch; // 0x458(0x08)
	struct UCard_Mainmenu_Recommand_C* Card_Recommand; // 0x460(0x08)
	struct UCard_PlayMode_C* Card_SM; // 0x468(0x08)
	struct UCard_PlayMode_C* Card_SM_2; // 0x470(0x08)
	struct UCard_PlayMode_C* Card_TDM; // 0x478(0x08)
	struct UCard_PlayMode_C* Card_Training; // 0x480(0x08)
	struct UButton* FocusMe_WhenIsSearching; // 0x488(0x08)
	struct UImage* Image_182; // 0x490(0x08)
	struct UMatchOption_Filter_C* MatchOption_Filter; // 0x498(0x08)
	struct UDailyMissionMenu_C* SubMenu_DailyMission; // 0x4a0(0x08)
	struct UCard_QuickMatch_C* LastSelectQuickMatchButton; // 0x4a8(0x08)

	void Update Announcement(int32_t ErrorCode); // Function SubMenu_PLAY.SubMenu_PLAY_C.Update Announcement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckAnnouncement(); // Function SubMenu_PLAY.SubMenu_PLAY_C.CheckAnnouncement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowWidget(); // Function SubMenu_PLAY.SubMenu_PLAY_C.ShowWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Can Search(bool Condition); // Function SubMenu_PLAY.SubMenu_PLAY_C.Set Can Search // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Init(); // Function SubMenu_PLAY.SubMenu_PLAY_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Training_K2Node_ComponentBoundEvent_13_OnButtonClicked__DelegateSignature(); // Function SubMenu_PLAY.SubMenu_PLAY_C.BndEvt__Card_Training_K2Node_ComponentBoundEvent_13_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetInteractableOnKeyboard(bool NewInteractable); // Function SubMenu_PLAY.SubMenu_PLAY_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Daliy_V0_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(); // Function SubMenu_PLAY.SubMenu_PLAY_C.BndEvt__Card_Daliy_V0_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Mainmenu_Recommand_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature(); // Function SubMenu_PLAY.SubMenu_PLAY_C.BndEvt__Card_Mainmenu_Recommand_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function SubMenu_PLAY.SubMenu_PLAY_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnCanSearchStateChanged(enum class EPBSearchLimitReason reason, int32_t CurTeamNum); // Function SubMenu_PLAY.SubMenu_PLAY_C.NotifyOnCanSearchStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_QuickMatch_K2Node_ComponentBoundEvent_12_OnFilterBtnClicked__DelegateSignature(); // Function SubMenu_PLAY.SubMenu_PLAY_C.BndEvt__Card_QuickMatch_K2Node_ComponentBoundEvent_12_OnFilterBtnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_QuickSmallMatch_K2Node_ComponentBoundEvent_14_OnFilterBtnClicked__DelegateSignature(); // Function SubMenu_PLAY.SubMenu_PLAY_C.BndEvt__Card_QuickSmallMatch_K2Node_ComponentBoundEvent_14_OnFilterBtnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function SubMenu_PLAY.SubMenu_PLAY_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ClickedSkipToContinueMatch(); // Function SubMenu_PLAY.SubMenu_PLAY_C.ClickedSkipToContinueMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function SubMenu_PLAY.SubMenu_PLAY_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_SubMenu_PLAY(int32_t EntryPoint); // Function SubMenu_PLAY.SubMenu_PLAY_C.ExecuteUbergraph_SubMenu_PLAY // (Final|UbergraphFunction) // @ game+0x1556ec0
};

