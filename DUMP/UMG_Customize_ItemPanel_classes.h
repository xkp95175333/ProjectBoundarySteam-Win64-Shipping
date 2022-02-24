// WidgetBlueprintGeneratedClass UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C
// Size: 0x348 (Inherited: 0x290)
struct UUMG_Customize_ItemPanel_C : UUMG_Customize_Panel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UScrollBox* HorizenMenu; // 0x298(0x08)
	struct UImage* Image_142; // 0x2a0(0x08)
	struct UOverlay* List0; // 0x2a8(0x08)
	struct UOverlay* List1; // 0x2b0(0x08)
	struct UOverlay* List2; // 0x2b8(0x08)
	struct UOverlay* List3; // 0x2c0(0x08)
	struct UOverlay* List4; // 0x2c8(0x08)
	struct UOverlay* List5; // 0x2d0(0x08)
	struct USizeBox* SizeBox_126; // 0x2d8(0x08)
	struct UUMG_Widget_Customize_FirstLevel_C* UMG_Widget_Customize_FirstLevel; // 0x2e0(0x08)
	struct TArray<struct UPanelWidget*> Panels; // 0x2e8(0x10)
	struct TArray<struct UUMG_Customize_Base_C*> FirstLevelWidgets; // 0x2f8(0x10)
	float TargetScrollOffset; // 0x308(0x04)
	float Opacity_Card; // 0x30c(0x04)
	struct TArray<struct USizeBox*> TitleArray; // 0x310(0x10)
	int32_t CurrentLevelIndex; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct TArray<struct UOverlay*> ListMap; // 0x328(0x10)
	struct TArray<float> PanelsOpacity; // 0x338(0x10)

	void GetPanelOfTheLevel(int32_t LevelIndex, struct UPanelWidget* OutWidget); // Function UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C.GetPanelOfTheLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void ExitTheLevel_Internal(int32_t LevelIndex); // Function UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C.ExitTheLevel_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterTheLevel_Internal(int32_t LevelIndex, struct UUMG_Widget_Customize_PanelBase_C* InPanelWidget, struct UUMG_Customize_Base_C* Entry); // Function UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C.EnterTheLevel_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ScrollingAnimation(float InDeltaTime); // Function UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C.ScrollingAnimation // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshScroll_Internal(int32_t CurrentLevelIndex); // Function UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C.RefreshScroll_Internal // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetCurrentPanel(struct UPanelWidget* OutWidget); // Function UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C.GetCurrentPanel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void RefreshScroll(int32_t CurrentLevelIndex); // Function UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C.RefreshScroll // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_ItemPanel(int32_t EntryPoint); // Function UMG_Customize_ItemPanel.UMG_Customize_ItemPanel_C.ExecuteUbergraph_UMG_Customize_ItemPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

