// WidgetBlueprintGeneratedClass UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C
// Size: 0x3b0 (Inherited: 0x300)
struct UUMG_Widget_LoginPanel_C : UPBLogin {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UCanvasPanel* AccountIncourrentPanel; // 0x308(0x08)
	struct UButton* Button_100; // 0x310(0x08)
	struct UButton* Button_249; // 0x318(0x08)
	struct UButton* Button_387; // 0x320(0x08)
	struct UButton* Button_Close; // 0x328(0x08)
	struct UCanvasPanel* LoginGateAgainPanel; // 0x330(0x08)
	struct UCanvasPanel* LoginGatePanel; // 0x338(0x08)
	struct UCanvasPanel* LoginGateQueue; // 0x340(0x08)
	struct UTextBlock* LoginGateText; // 0x348(0x08)
	struct UCanvasPanel* LoginInputPanel; // 0x350(0x08)
	struct UCanvasPanel* LoginPanel; // 0x358(0x08)
	struct UButton* LoginSteamOfflineButton; // 0x360(0x08)
	struct UCanvasPanel* LoginSteamOfflinePanel; // 0x368(0x08)
	struct UWidgetSwitcher* LoginSwitcher; // 0x370(0x08)
	struct UOverlay* mask; // 0x378(0x08)
	struct UCanvasPanel* SteamUserInvalid; // 0x380(0x08)
	struct UButton* SteamUserInvalidButton; // 0x388(0x08)
	struct UTextBlock* TextBlock_QueueIndex; // 0x390(0x08)
	struct UTextBlock* TipsText; // 0x398(0x08)
	struct UTextBlock* TipsText_2; // 0x3a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x3a8(0x08)

	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_LoginPanel_LoginGateAgainButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.BndEvt__UMG_Widget_LoginPanel_LoginGateAgainButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void K2_SwitchLoginPanel(enum class EPBLoginState InLoginState); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.K2_SwitchLoginPanel // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartLoginCheck(); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.K2_StartLoginCheck // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndLoginCheck(); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.K2_EndLoginCheck // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_LoginPanel_Button_248_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.BndEvt__UMG_Widget_LoginPanel_Button_248_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_LoginPanel_Button_386_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.BndEvt__UMG_Widget_LoginPanel_Button_386_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_LoginPanel_Button_99_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.BndEvt__UMG_Widget_LoginPanel_Button_99_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_LoginPanel_LoginSteamOfflineButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.BndEvt__UMG_Widget_LoginPanel_LoginSteamOfflineButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_LoginPanel_SteamUserInvalidButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.BndEvt__UMG_Widget_LoginPanel_SteamUserInvalidButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_LoginPanel(int32_t EntryPoint); // Function UMG_Widget_LoginPanel.UMG_Widget_LoginPanel_C.ExecuteUbergraph_UMG_Widget_LoginPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

