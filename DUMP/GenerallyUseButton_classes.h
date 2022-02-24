// WidgetBlueprintGeneratedClass GenerallyUseButton.GenerallyUseButton_C
// Size: 0x378 (Inherited: 0x268)
struct UGenerallyUseButton_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UButton* SubButton; // 0x270(0x08)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x278(0x10)
	struct FMulticastInlineDelegate OnButtonPressed; // 0x288(0x10)
	struct FMulticastInlineDelegate OnButtonReleaseed; // 0x298(0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnButtonUnhovered; // 0x2b8(0x10)
	struct FMulticastInlineDelegate FocusChanged; // 0x2c8(0x10)
	bool AutoHovernToFocus; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct FLinearColor NormalColor; // 0x2dc(0x10)
	struct FLinearColor HoveredColor; // 0x2ec(0x10)
	struct FLinearColor PressedColor; // 0x2fc(0x10)
	bool UseBrackets; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	int32_t BracketsSize; // 0x310(0x04)
	struct FName BracketsTypeFace; // 0x314(0x08)
	struct FLinearColor BracketsColor; // 0x31c(0x10)
	struct FLinearColor TextColor; // 0x32c(0x10)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct FText Text; // 0x340(0x18)
	int32_t TextSize; // 0x358(0x04)
	struct FName TextTypeFace; // 0x35c(0x08)
	char pad_364[0x4]; // 0x364(0x04)
	struct UObject* FontFamily; // 0x368(0x08)
	bool B_IsPressed; // 0x370(0x01)
	bool B_IsHovered; // 0x371(0x01)
	char pad_372[0x2]; // 0x372(0x02)
	float BracketsDivideSize; // 0x374(0x04)

	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function GenerallyUseButton.GenerallyUseButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function GenerallyUseButton.GenerallyUseButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function GenerallyUseButton.GenerallyUseButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function GenerallyUseButton.GenerallyUseButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function GenerallyUseButton.GenerallyUseButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function GenerallyUseButton.GenerallyUseButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function GenerallyUseButton.GenerallyUseButton_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GenerallyUseButton(int32_t EntryPoint); // Function GenerallyUseButton.GenerallyUseButton_C.ExecuteUbergraph_GenerallyUseButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void FocusChanged__DelegateSignature(bool NewFocused); // Function GenerallyUseButton.GenerallyUseButton_C.FocusChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnButtonUnhovered__DelegateSignature(); // Function GenerallyUseButton.GenerallyUseButton_C.OnButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnButtonHovered__DelegateSignature(); // Function GenerallyUseButton.GenerallyUseButton_C.OnButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnButtonReleaseed__DelegateSignature(); // Function GenerallyUseButton.GenerallyUseButton_C.OnButtonReleaseed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnButtonPressed__DelegateSignature(); // Function GenerallyUseButton.GenerallyUseButton_C.OnButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnButtonClicked__DelegateSignature(); // Function GenerallyUseButton.GenerallyUseButton_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

