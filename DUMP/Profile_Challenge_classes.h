// WidgetBlueprintGeneratedClass Profile_Challenge.Profile_Challenge_C
// Size: 0x408 (Inherited: 0x3d8)
struct UProfile_Challenge_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UCard_Challenge_Detail_C* Card_Challenge_Detail; // 0x3e0(0x08)
	struct UCard_Challenge_ScrollList_C* Card_Challenge_ScrollList_47; // 0x3e8(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x3f0(0x08)
	struct UUMG_Widget_MainTitle_C* UMG_Widget_MainTitle; // 0x3f8(0x08)
	struct UUMG_Widget_SmallBaseTabSwitcher_C* UMG_Widget_SmallBaseTabSwitcher; // 0x400(0x08)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function Profile_Challenge.Profile_Challenge_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Profile_Challenge.Profile_Challenge_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function Profile_Challenge.Profile_Challenge_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnSwitchToTab(int32_t InTab); // Function Profile_Challenge.Profile_Challenge_C.OnSwitchToTab // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Profile_Challenge.Profile_Challenge_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowDetailInfo(struct FName ChallengeId, struct FName ChallengeGroupID); // Function Profile_Challenge.Profile_Challenge_C.ShowDetailInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Back(); // Function Profile_Challenge.Profile_Challenge_C.Back // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Profile_Challenge.Profile_Challenge_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Profile_Challenge.Profile_Challenge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_SmallBaseTabSwitcher_K2Node_ComponentBoundEvent_0_OnTabSwitched__DelegateSignature(int32_t InTabIndex, int32_t OutTabIndex); // Function Profile_Challenge.Profile_Challenge_C.BndEvt__UMG_Widget_SmallBaseTabSwitcher_K2Node_ComponentBoundEvent_0_OnTabSwitched__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Profile_Challenge(int32_t EntryPoint); // Function Profile_Challenge.Profile_Challenge_C.ExecuteUbergraph_Profile_Challenge // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

