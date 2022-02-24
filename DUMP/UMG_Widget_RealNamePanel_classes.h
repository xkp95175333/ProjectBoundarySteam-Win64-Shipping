// WidgetBlueprintGeneratedClass UMG_Widget_RealNamePanel.UMG_Widget_RealNamePanel_C
// Size: 0x2f0 (Inherited: 0x2b0)
struct UUMG_Widget_RealNamePanel_C : UPBRealName {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UButton* CloseButton; // 0x2b8(0x08)
	struct UImage* Image_167; // 0x2c0(0x08)
	struct UOverlay* mask; // 0x2c8(0x08)
	struct UCanvasPanel* RealNameFailedPanel; // 0x2d0(0x08)
	struct UCanvasPanel* RealNameInputPanel; // 0x2d8(0x08)
	struct UCanvasPanel* RealNamePanel; // 0x2e0(0x08)
	struct UWidgetSwitcher* RealNameSwitcher; // 0x2e8(0x08)

	void K2_SwitchRealNamePanel(enum class EPBRealNameState InRealNameState); // Function UMG_Widget_RealNamePanel.UMG_Widget_RealNamePanel_C.K2_SwitchRealNamePanel // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartRealNameCheck(); // Function UMG_Widget_RealNamePanel.UMG_Widget_RealNamePanel_C.K2_StartRealNameCheck // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndRealNameCheck(); // Function UMG_Widget_RealNamePanel.UMG_Widget_RealNamePanel_C.K2_EndRealNameCheck // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_RealNamePanel_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_RealNamePanel.UMG_Widget_RealNamePanel_C.BndEvt__UMG_Widget_RealNamePanel_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_RealNamePanel(int32_t EntryPoint); // Function UMG_Widget_RealNamePanel.UMG_Widget_RealNamePanel_C.ExecuteUbergraph_UMG_Widget_RealNamePanel // (Final|UbergraphFunction) // @ game+0x1556ec0
};

