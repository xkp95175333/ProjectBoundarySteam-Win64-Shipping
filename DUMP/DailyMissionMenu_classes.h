// WidgetBlueprintGeneratedClass DailyMissionMenu.DailyMissionMenu_C
// Size: 0x490 (Inherited: 0x3d8)
struct UDailyMissionMenu_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UButton* Anti_FocusLost; // 0x3e0(0x08)
	struct UCard_DailyMission_C* DailyMission; // 0x3e8(0x08)
	struct UCard_DailyMission_C* DailyMission_C_2; // 0x3f0(0x08)
	struct UCard_DailyMission_C* DailyMission_C_3; // 0x3f8(0x08)
	struct UImage* Image_137; // 0x400(0x08)
	struct UUI_MenuTitle_Small_C* TitleBoard_Sub; // 0x408(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x410(0x08)
	struct FString MaxProcessName; // 0x418(0x10)
	float MaxProcessData; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct TMap<struct FString, float> CompletetChallengeArray; // 0x430(0x50)
	struct TArray<struct FString> TempGameRoundChallengeAchievement; // 0x480(0x10)

	void Back(); // Function DailyMissionMenu.DailyMissionMenu_C.Back // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function DailyMissionMenu.DailyMissionMenu_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function DailyMissionMenu.DailyMissionMenu_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function DailyMissionMenu.DailyMissionMenu_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function DailyMissionMenu.DailyMissionMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Anti_FocusLost_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function DailyMissionMenu.DailyMissionMenu_C.BndEvt__Anti_FocusLost_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent(); // Function DailyMissionMenu.DailyMissionMenu_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_3(struct UWidget* Item); // Function DailyMissionMenu.DailyMissionMenu_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_DailyMissionMenu(int32_t EntryPoint); // Function DailyMissionMenu.DailyMissionMenu_C.ExecuteUbergraph_DailyMissionMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

