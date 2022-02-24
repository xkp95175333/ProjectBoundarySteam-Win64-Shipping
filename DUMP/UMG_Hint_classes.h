// WidgetBlueprintGeneratedClass UMG_Hint.UMG_Hint_C
// Size: 0x2dc (Inherited: 0x2a8)
struct UUMG_Hint_C : UUMG_PageBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UButton* Left; // 0x2b0(0x08)
	struct UTextBlock* PageNumber; // 0x2b8(0x08)
	struct UPBWidgetSwitcher* PagesSwitcher; // 0x2c0(0x08)
	struct UButton* Right; // 0x2c8(0x08)
	struct UTextBlock* TotalPages; // 0x2d0(0x08)
	int32_t PageIndex; // 0x2d8(0x04)

	void BndEvt__UMG_Hint_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function UMG_Hint.UMG_Hint_C.BndEvt__UMG_Hint_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Hint_Right_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UMG_Hint.UMG_Hint_C.BndEvt__UMG_Hint_Right_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Hint(int32_t EntryPoint); // Function UMG_Hint.UMG_Hint_C.ExecuteUbergraph_UMG_Hint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

