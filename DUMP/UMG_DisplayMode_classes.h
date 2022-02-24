// WidgetBlueprintGeneratedClass UMG_DisplayMode.UMG_DisplayMode_C
// Size: 0x3e8 (Inherited: 0x288)
struct UUMG_DisplayMode_C : UPBDisplayModeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* StampOn; // 0x290(0x08)
	struct UWidgetAnimation* Collapse; // 0x298(0x08)
	struct UWidgetAnimation* FocusOn; // 0x2a0(0x08)
	struct UBorder* ConfirmBorder; // 0x2a8(0x08)
	struct UButton* ConfirmButton; // 0x2b0(0x08)
	struct UTextBlock* GameDelegate; // 0x2b8(0x08)
	struct UTextBlock* GameMode; // 0x2c0(0x08)
	struct UImage* Image_37; // 0x2c8(0x08)
	struct UImage* MapImage; // 0x2d0(0x08)
	struct UImage* ReviewIcon; // 0x2d8(0x08)
	struct USizeBox* SelectedIcon; // 0x2e0(0x08)
	bool Selected; // 0x2e8(0x01)
	bool Hightlighted; // 0x2e9(0x01)
	char pad_2EA[0x2]; // 0x2ea(0x02)
	struct FUI_ColorPalettes UI_ColorPalettes; // 0x2ec(0xa0)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct UTexture2D* PlotTexture; // 0x390(0x08)
	struct FMulticastInlineDelegate Btn_Clicked; // 0x398(0x10)
	struct UTexture2D* MatchModeTexture; // 0x3a8(0x08)
	struct UPBRadioButtonPanelWidget* In Radio Button Panel Widget; // 0x3b0(0x08)
	struct FText ModeGame_1; // 0x3b8(0x18)
	struct FText ModePlot_1; // 0x3d0(0x18)

	void ReverseStampAnim(); // Function UMG_DisplayMode.UMG_DisplayMode_C.ReverseStampAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReverseCollapseAnim(); // Function UMG_DisplayMode.UMG_DisplayMode_C.ReverseCollapseAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayStampAnim(); // Function UMG_DisplayMode.UMG_DisplayMode_C.PlayStampAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayCollapseAnim(); // Function UMG_DisplayMode.UMG_DisplayMode_C.PlayCollapseAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UnHightlightMode(); // Function UMG_DisplayMode.UMG_DisplayMode_C.UnHightlightMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Hightlight Mode(); // Function UMG_DisplayMode.UMG_DisplayMode_C.Hightlight Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_InitModeInfo(); // Function UMG_DisplayMode.UMG_DisplayMode_C.K2_InitModeInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetConfirmMode(); // Function UMG_DisplayMode.UMG_DisplayMode_C.K2_SetConfirmMode // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_DisplayMode_ConfirmButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UMG_DisplayMode.UMG_DisplayMode_C.BndEvt__UMG_DisplayMode_ConfirmButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_DisplayMode.UMG_DisplayMode_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_DisplayMode.UMG_DisplayMode_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_DisplayMode_ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_DisplayMode.UMG_DisplayMode_C.BndEvt__UMG_DisplayMode_ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_DisplayMode.UMG_DisplayMode_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SelectOption(); // Function UMG_DisplayMode.UMG_DisplayMode_C.SelectOption // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UnselectOption(); // Function UMG_DisplayMode.UMG_DisplayMode_C.UnselectOption // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetRadioButtonPanel(struct UPBRadioButtonPanelWidget* InRadioButtonPanelWidget); // Function UMG_DisplayMode.UMG_DisplayMode_C.SetRadioButtonPanel // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Reset(); // Function UMG_DisplayMode.UMG_DisplayMode_C.Reset // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_DisplayMode.UMG_DisplayMode_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void LogicServerStateChanged(struct FName InStateName); // Function UMG_DisplayMode.UMG_DisplayMode_C.LogicServerStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_DisplayMode(int32_t EntryPoint); // Function UMG_DisplayMode.UMG_DisplayMode_C.ExecuteUbergraph_UMG_DisplayMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Btn_Clicked__DelegateSignature(); // Function UMG_DisplayMode.UMG_DisplayMode_C.Btn_Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

