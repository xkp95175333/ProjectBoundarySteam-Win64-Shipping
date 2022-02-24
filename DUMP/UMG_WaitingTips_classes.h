// WidgetBlueprintGeneratedClass UMG_WaitingTips.UMG_WaitingTips_C
// Size: 0x408 (Inherited: 0x3d8)
struct UUMG_WaitingTips_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UCanvasPanel* CanvasPanel_TipS; // 0x3e0(0x08)
	struct UCanvasPanel* CanvasPanel_Waiting; // 0x3e8(0x08)
	struct UImage* Image_144; // 0x3f0(0x08)
	struct UTextBlock* WaitingTitle; // 0x3f8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Notify; // 0x400(0x08)

	void SetInfo(struct FText InText); // Function UMG_WaitingTips.UMG_WaitingTips_C.SetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WaitingForJoinTeam(); // Function UMG_WaitingTips.UMG_WaitingTips_C.WaitingForJoinTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WaitingForSeverCallBack(); // Function UMG_WaitingTips.UMG_WaitingTips_C.WaitingForSeverCallBack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_WaitingTips.UMG_WaitingTips_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function UMG_WaitingTips.UMG_WaitingTips_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_WaitingTips(int32_t EntryPoint); // Function UMG_WaitingTips.UMG_WaitingTips_C.ExecuteUbergraph_UMG_WaitingTips // (Final|UbergraphFunction) // @ game+0x1556ec0
};

