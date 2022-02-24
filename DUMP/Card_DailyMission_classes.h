// WidgetBlueprintGeneratedClass Card_DailyMission.Card_DailyMission_C
// Size: 0x3b8 (Inherited: 0x268)
struct UCard_DailyMission_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Black_BG; // 0x270(0x08)
	struct UImage* BlackShadow; // 0x278(0x08)
	struct UOverlay* COMPELETED; // 0x280(0x08)
	struct USizeBox* Emergency_MissionBox; // 0x288(0x08)
	struct UImage* Focus; // 0x290(0x08)
	struct UGenerallyUseButton_C* GenerallyUseButton; // 0x298(0x08)
	struct UOverlay* IconAndProgress; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image_3; // 0x2b0(0x08)
	struct UImage* Image_4; // 0x2b8(0x08)
	struct UImage* Image_87; // 0x2c0(0x08)
	struct UImage* Image_89; // 0x2c8(0x08)
	struct UImage* Image_253; // 0x2d0(0x08)
	struct UImage* Image_341; // 0x2d8(0x08)
	struct UImage* Image_342; // 0x2e0(0x08)
	struct UOverlay* Locked; // 0x2e8(0x08)
	struct UHorizontalBox* MainBoard; // 0x2f0(0x08)
	struct UTextBlock* Progress; // 0x2f8(0x08)
	struct UOverlay* RefreshBoard; // 0x300(0x08)
	struct UButton* RefreshButton; // 0x308(0x08)
	struct UTextBlock* Reward; // 0x310(0x08)
	struct UTextBlock* Text_MissionDiscription; // 0x318(0x08)
	struct UTextBlock* Text_MissionName; // 0x320(0x08)
	struct UTextBlock* Text_Progress; // 0x328(0x08)
	struct UTextBlock* TextBlock_2; // 0x330(0x08)
	struct UTextBlock* TextBlock_3; // 0x338(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Icon; // 0x340(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Text; // 0x348(0x08)
	bool MissionIsLocked; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int32_t MissionMaxTimes; // 0x354(0x04)
	int32_t MissionCurrentTimes; // 0x358(0x04)
	bool IsEmergency; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	struct FSlateColor Compeleted_Slate; // 0x360(0x28)
	struct FSlateColor Unfinish_Slate; // 0x388(0x28)
	bool CanBeRefresh; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	int32_t SlotId; // 0x3b4(0x04)

	void GetPercent(struct TMap<struct FName, int64_t> CurConditions, struct TMap<struct FName, int64_t> CfgConditions, int32_t Percent); // Function Card_DailyMission.Card_DailyMission_C.GetPercent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetCountText(struct TMap<struct FName, int64_t> CurConditions, struct TMap<struct FName, int64_t> CfgConditions, struct FText CountText); // Function Card_DailyMission.Card_DailyMission_C.GetCountText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshInfo(int32_t InSlotId); // Function Card_DailyMission.Card_DailyMission_C.RefreshInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_DailyMission.Card_DailyMission_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__RefreshButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Card_DailyMission.Card_DailyMission_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnServerRefreshDailyChallengeComplete(int32_t SlotId, struct FName OldChallengeId, struct FName NewChallengeId, int32_t ErrorCode); // Function Card_DailyMission.Card_DailyMission_C.OnServerRefreshDailyChallengeComplete // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_DailyMission.Card_DailyMission_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_DailyMission.Card_DailyMission_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_DailyMission.Card_DailyMission_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_DailyMission(int32_t EntryPoint); // Function Card_DailyMission.Card_DailyMission_C.ExecuteUbergraph_Card_DailyMission // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

