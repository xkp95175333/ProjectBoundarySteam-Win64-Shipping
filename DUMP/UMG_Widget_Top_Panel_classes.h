// WidgetBlueprintGeneratedClass UMG_Widget_Top_Panel.UMG_Widget_Top_Panel_C
// Size: 0x298 (Inherited: 0x268)
struct UUMG_Widget_Top_Panel_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UPB_BaseTabSwitcher_C* PB_BaseTabSwitcher; // 0x270(0x08)
	struct FMulticastInlineDelegate OnSwitchToTab; // 0x278(0x10)
	struct FMulticastInlineDelegate OnShowSettingMenu; // 0x288(0x10)

	void BackToFirstPage(); // Function UMG_Widget_Top_Panel.UMG_Widget_Top_Panel_C.BackToFirstPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchTab(bool isLeft); // Function UMG_Widget_Top_Panel.UMG_Widget_Top_Panel_C.SwitchTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UnregisterInputComponentForSwitcher(); // Function UMG_Widget_Top_Panel.UMG_Widget_Top_Panel_C.UnregisterInputComponentForSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RegisterInputComponentForSwitcher(); // Function UMG_Widget_Top_Panel.UMG_Widget_Top_Panel_C.RegisterInputComponentForSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__PB_BaseTabSwitcher_K2Node_ComponentBoundEvent_0_OnTabSwitched__DelegateSignature(int32_t InTabIndex, int32_t OutTabIndex); // Function UMG_Widget_Top_Panel.UMG_Widget_Top_Panel_C.BndEvt__PB_BaseTabSwitcher_K2Node_ComponentBoundEvent_0_OnTabSwitched__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Widget_Top_Panel.UMG_Widget_Top_Panel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Top_Panel(int32_t EntryPoint); // Function UMG_Widget_Top_Panel.UMG_Widget_Top_Panel_C.ExecuteUbergraph_UMG_Widget_Top_Panel // (Final|UbergraphFunction) // @ game+0x1556ec0
	void OnShowSettingMenu__DelegateSignature(); // Function UMG_Widget_Top_Panel.UMG_Widget_Top_Panel_C.OnShowSettingMenu__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnSwitchToTab__DelegateSignature(int32_t InTabIndex); // Function UMG_Widget_Top_Panel.UMG_Widget_Top_Panel_C.OnSwitchToTab__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

