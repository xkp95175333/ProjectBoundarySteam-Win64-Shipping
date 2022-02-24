// WidgetBlueprintGeneratedClass UMG_Widget_Customize_Panel02.UMG_Widget_Customize_Panel02_C
// Size: 0x2dc (Inherited: 0x289)
struct UUMG_Widget_Customize_Panel02_C : UUMG_Widget_Customize_PanelBase_C {
	char pad_289[0x7]; // 0x289(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct URetainerBox* RetainerBox_ScrollPanel; // 0x298(0x08)
	struct UScrollBox* ScrollBox_Main; // 0x2a0(0x08)
	struct USizeBox* SizeBox_154; // 0x2a8(0x08)
	struct UUI_MenuTitle_Small_C* UI_MenuTitle_Small; // 0x2b0(0x08)
	struct UVerticalBox* VerticalBox_224; // 0x2b8(0x08)
	struct TArray<struct UUMG_Customize_Base_C*> ItemList; // 0x2c0(0x10)
	float GradientEdgeOpenHeight; // 0x2d0(0x04)
	float T_AlphaGradientValue; // 0x2d4(0x04)
	float B_AlphaGradientValue; // 0x2d8(0x04)

	void RefreshScrollOpacity(float DeltaTime); // Function UMG_Widget_Customize_Panel02.UMG_Widget_Customize_Panel02_C.RefreshScrollOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyClear(bool bKeepChild); // Function UMG_Widget_Customize_Panel02.UMG_Widget_Customize_Panel02_C.NotifyClear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyExit(struct UUMG_Customize_Base_C* Entry); // Function UMG_Widget_Customize_Panel02.UMG_Widget_Customize_Panel02_C.NotifyExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEnter(); // Function UMG_Widget_Customize_Panel02.UMG_Widget_Customize_Panel02_C.NotifyEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetPanel(struct UPanelWidget* OutPanel); // Function UMG_Widget_Customize_Panel02.UMG_Widget_Customize_Panel02_C.GetPanel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetWidgets(struct TArray<struct UUMG_Customize_Base_C*> OutWidgets); // Function UMG_Widget_Customize_Panel02.UMG_Widget_Customize_Panel02_C.GetWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void InitPanel(struct TArray<struct UUMG_Customize_Base_C*> InWidgets, struct FText Title, struct UUMG_Customize_Base_C* Entry); // Function UMG_Widget_Customize_Panel02.UMG_Widget_Customize_Panel02_C.InitPanel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Widget_Customize_Panel02.UMG_Widget_Customize_Panel02_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Customize_Panel02(int32_t EntryPoint); // Function UMG_Widget_Customize_Panel02.UMG_Widget_Customize_Panel02_C.ExecuteUbergraph_UMG_Widget_Customize_Panel02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

