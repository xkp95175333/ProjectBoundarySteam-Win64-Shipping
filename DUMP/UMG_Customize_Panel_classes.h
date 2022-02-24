// WidgetBlueprintGeneratedClass UMG_Customize_Panel.UMG_Customize_Panel_C
// Size: 0x290 (Inherited: 0x268)
struct UUMG_Customize_Panel_C : UPBUserWidget {
	struct TArray<struct UUMG_Customize_Base_C*> EntryPath; // 0x268(0x10)
	int32_t CurrentMenuLevel; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct UUMG_Widget_Customize_PanelBase_C*> PanelPath; // 0x280(0x10)

	void ReEnterCurrentLevel(); // Function UMG_Customize_Panel.UMG_Customize_Panel_C.ReEnterCurrentLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshCurrentLevelWidgets(); // Function UMG_Customize_Panel.UMG_Customize_Panel_C.RefreshCurrentLevelWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetPanelWidgetOfTheLevel(int32_t LevelIndex, struct UUMG_Widget_Customize_PanelBase_C* OutWidget); // Function UMG_Customize_Panel.UMG_Customize_Panel_C.GetPanelWidgetOfTheLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetPanelOfTheLevel(int32_t LevelIndex, struct UPanelWidget* OutWidget); // Function UMG_Customize_Panel.UMG_Customize_Panel_C.GetPanelOfTheLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetWidgetsOfLevel(int32_t LevelIndex, struct TArray<struct UUMG_Customize_Base_C*> OutWidgets); // Function UMG_Customize_Panel.UMG_Customize_Panel_C.GetWidgetsOfLevel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void ExitCurrentLevel(bool ExitSuccess); // Function UMG_Customize_Panel.UMG_Customize_Panel_C.ExitCurrentLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExitTheLevel_Internal(int32_t LevelIndex); // Function UMG_Customize_Panel.UMG_Customize_Panel_C.ExitTheLevel_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterTheLevel_Internal(int32_t LevelIndex, struct UUMG_Widget_Customize_PanelBase_C* InPanelWidget, struct UUMG_Customize_Base_C* Entry); // Function UMG_Customize_Panel.UMG_Customize_Panel_C.EnterTheLevel_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExitTheLevel(int32_t LevelIndex); // Function UMG_Customize_Panel.UMG_Customize_Panel_C.ExitTheLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterTheLevel(int32_t LevelIndex, struct UUMG_Widget_Customize_PanelBase_C* InPanelWidget, struct FText Title, struct UUMG_Customize_Base_C* Entry); // Function UMG_Customize_Panel.UMG_Customize_Panel_C.EnterTheLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

