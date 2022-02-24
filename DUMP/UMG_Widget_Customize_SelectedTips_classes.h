// WidgetBlueprintGeneratedClass UMG_Widget_Customize_SelectedTips.UMG_Widget_Customize_SelectedTips_C
// Size: 0x298 (Inherited: 0x268)
struct UUMG_Widget_Customize_SelectedTips_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* UnselectedAnimation; // 0x270(0x08)
	struct UWidgetAnimation* SelectedAnimation; // 0x278(0x08)
	struct UCanvasPanel* Canvas_Selected; // 0x280(0x08)
	struct UCanvasPanel* Canvas_Unselected; // 0x288(0x08)
	struct UTextBlock* ItemName; // 0x290(0x08)

	void CancelUnselected(); // Function UMG_Widget_Customize_SelectedTips.UMG_Widget_Customize_SelectedTips_C.CancelUnselected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Unselected(); // Function UMG_Widget_Customize_SelectedTips.UMG_Widget_Customize_SelectedTips_C.Unselected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CancelSelected(); // Function UMG_Widget_Customize_SelectedTips.UMG_Widget_Customize_SelectedTips_C.CancelSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Selected(); // Function UMG_Widget_Customize_SelectedTips.UMG_Widget_Customize_SelectedTips_C.Selected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshInfo(struct FText InText); // Function UMG_Widget_Customize_SelectedTips.UMG_Widget_Customize_SelectedTips_C.RefreshInfo // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Customize_SelectedTips(int32_t EntryPoint); // Function UMG_Widget_Customize_SelectedTips.UMG_Widget_Customize_SelectedTips_C.ExecuteUbergraph_UMG_Widget_Customize_SelectedTips // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

