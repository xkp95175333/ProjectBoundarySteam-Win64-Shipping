// WidgetBlueprintGeneratedClass UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C
// Size: 0x2c8 (Inherited: 0x290)
struct UUMG_Customize_SkinPanel_C : UUMG_Customize_Panel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UOverlay* List0; // 0x298(0x08)
	struct UOverlay* List1; // 0x2a0(0x08)
	struct UScrollBox* ScrollBox_Main; // 0x2a8(0x08)
	float TargetScrollOffset; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<struct UPanelWidget*> Panels; // 0x2b8(0x10)

	void ReEnterCurrentLevel(); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.ReEnterCurrentLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ScrollingAnimation(float InDeltaTime); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.ScrollingAnimation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetWidgetsOfLevel(int32_t LevelIndex, struct TArray<struct UUMG_Customize_Base_C*> OutWidgets); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.GetWidgetsOfLevel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetPanelOfTheLevel(int32_t LevelIndex, struct UPanelWidget* OutWidget); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.GetPanelOfTheLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void RefreshScroll(int32_t CurrentLevelIndex); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.RefreshScroll // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExitTheLevel_Internal(int32_t LevelIndex); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.ExitTheLevel_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterTheLevel_Internal(int32_t LevelIndex, struct UUMG_Widget_Customize_PanelBase_C* InPanelWidget, struct UUMG_Customize_Base_C* Entry); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.EnterTheLevel_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh(); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitPanel(struct UUMG_Widget_Customize_PanelBase_C* InPanelWidget, struct FText Title); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.InitPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_SkinPanel(int32_t EntryPoint); // Function UMG_Customize_SkinPanel.UMG_Customize_SkinPanel_C.ExecuteUbergraph_UMG_Customize_SkinPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

