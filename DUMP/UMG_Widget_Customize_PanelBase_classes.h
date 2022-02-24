// WidgetBlueprintGeneratedClass UMG_Widget_Customize_PanelBase.UMG_Widget_Customize_PanelBase_C
// Size: 0x289 (Inherited: 0x268)
struct UUMG_Widget_Customize_PanelBase_C : UPBUserWidget {
	struct FText Title; // 0x268(0x18)
	struct UCustomize_C* father; // 0x280(0x08)
	enum class EPBSlotType SlotType; // 0x288(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG_Widget_Customize_PanelBase.UMG_Widget_Customize_PanelBase_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh(); // Function UMG_Widget_Customize_PanelBase.UMG_Widget_Customize_PanelBase_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyClear(bool bKeepChild); // Function UMG_Widget_Customize_PanelBase.UMG_Widget_Customize_PanelBase_C.NotifyClear // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEnter(); // Function UMG_Widget_Customize_PanelBase.UMG_Widget_Customize_PanelBase_C.NotifyEnter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyExit(struct UUMG_Customize_Base_C* Entry); // Function UMG_Widget_Customize_PanelBase.UMG_Widget_Customize_PanelBase_C.NotifyExit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetWidgets(struct TArray<struct UUMG_Customize_Base_C*> OutWidgets); // Function UMG_Widget_Customize_PanelBase.UMG_Widget_Customize_PanelBase_C.GetWidgets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetPanel(struct UPanelWidget* OutPanel); // Function UMG_Widget_Customize_PanelBase.UMG_Widget_Customize_PanelBase_C.GetPanel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function UMG_Widget_Customize_PanelBase.UMG_Widget_Customize_PanelBase_C.SetDefaultFocus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function UMG_Widget_Customize_PanelBase.UMG_Widget_Customize_PanelBase_C.SetCustomFocus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitPanel(struct TArray<struct UUMG_Customize_Base_C*> InWidgets, struct FText Title, struct UUMG_Customize_Base_C* Entry); // Function UMG_Widget_Customize_PanelBase.UMG_Widget_Customize_PanelBase_C.InitPanel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

