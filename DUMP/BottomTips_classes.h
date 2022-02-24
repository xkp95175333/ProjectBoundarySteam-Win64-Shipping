// WidgetBlueprintGeneratedClass BottomTips.BottomTips_C
// Size: 0x448 (Inherited: 0x3d8)
struct UBottomTips_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* SmartButton; // 0x3e0(0x08)
	struct UImage* BottomBar; // 0x3e8(0x08)
	struct UPBInputTipsImage* ButtonImage; // 0x3f0(0x08)
	struct UPBInputTipsImage* ButtonImage_2; // 0x3f8(0x08)
	struct UTextBlock* ButtonName_3; // 0x400(0x08)
	struct UImage* Image_956; // 0x408(0x08)
	struct UButton* MainButton; // 0x410(0x08)
	struct USizeBox* SecImage; // 0x418(0x08)
	struct USizeBox* Tip_Select; // 0x420(0x08)
	struct FText ButtonText; // 0x428(0x18)
	struct FName Input; // 0x440(0x08)

	void ModifyText(struct FText ModifyText); // Function BottomTips.BottomTips_C.ModifyText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function BottomTips.BottomTips_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function BottomTips.BottomTips_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function BottomTips.BottomTips_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // Function BottomTips.BottomTips_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature(); // Function BottomTips.BottomTips_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function BottomTips.BottomTips_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_BottomTips(int32_t EntryPoint); // Function BottomTips.BottomTips_C.ExecuteUbergraph_BottomTips // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

