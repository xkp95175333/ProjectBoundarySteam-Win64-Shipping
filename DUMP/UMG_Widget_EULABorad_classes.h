// WidgetBlueprintGeneratedClass UMG_Widget_EULABorad.UMG_Widget_EULABorad_C
// Size: 0x2c0 (Inherited: 0x290)
struct UUMG_Widget_EULABorad_C : UPBEULABorad {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UBorder* AcceptBorder; // 0x298(0x08)
	struct UConfirmPageV2_C* ConfirmPageV2; // 0x2a0(0x08)
	struct UOverlay* EULA_Reject_Hint; // 0x2a8(0x08)
	struct UScrollBox* EULA_Scroll; // 0x2b0(0x08)
	struct UCanvasPanel* EULABorad; // 0x2b8(0x08)

	void Construct(); // Function UMG_Widget_EULABorad.UMG_Widget_EULABorad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_EULABorad_EULA_Scroll_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function UMG_Widget_EULABorad.UMG_Widget_EULABorad_C.BndEvt__UMG_Widget_EULABorad_EULA_Scroll_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Widget_EULABorad.UMG_Widget_EULABorad_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(enum class ESlateVisibility InVisibility); // Function UMG_Widget_EULABorad.UMG_Widget_EULABorad_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_EULABorad(int32_t EntryPoint); // Function UMG_Widget_EULABorad.UMG_Widget_EULABorad_C.ExecuteUbergraph_UMG_Widget_EULABorad // (Final|UbergraphFunction) // @ game+0x1556ec0
};

