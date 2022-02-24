// WidgetBlueprintGeneratedClass UMG_ComponentModifyButton.UMG_ComponentModifyButton_C
// Size: 0x321 (Inherited: 0x260)
struct UUMG_ComponentModifyButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Size; // 0x268(0x08)
	struct UWidgetAnimation* HideInstantly; // 0x270(0x08)
	struct UWidgetAnimation* Show; // 0x278(0x08)
	struct UWidgetAnimation* FocusOn; // 0x280(0x08)
	struct UImage* Band; // 0x288(0x08)
	struct UImage* Band_2; // 0x290(0x08)
	struct UButton* btn; // 0x298(0x08)
	struct UBorder* ComponentBorder; // 0x2a0(0x08)
	struct UTextBlock* Desc; // 0x2a8(0x08)
	struct UImage* Icon; // 0x2b0(0x08)
	struct USizeBox* LockFlag; // 0x2b8(0x08)
	struct UTextBlock* Name; // 0x2c0(0x08)
	struct UUMG_ComponentTickBox_C* UMG_ComponentTickBox_267; // 0x2c8(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x2d0(0x10)
	struct FText NameText; // 0x2e0(0x18)
	struct FText DescText; // 0x2f8(0x18)
	struct FMulticastInlineDelegate Hovered; // 0x310(0x10)
	bool IsSelect; // 0x320(0x01)

	void SetComponentFocus(); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.SetComponentFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set ComponentTickBox Visivility(bool NewParam); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.Set ComponentTickBox Visivility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Select(); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.Set Select // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set UnSelect(); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.Set UnSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HandleGradeColor(enum class EPBItemGradeType Index); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.HandleGradeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetLock(bool InLock); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.SetLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetEquipComponent(bool InIsEquip); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.SetEquipComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTextOnTitle(struct FText NameText, struct FText DescText, struct UTexture2D* Texture, enum class EPBItemGradeType Grade); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.SetTextOnTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowWithDelay(float Duration); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.ShowWithDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ComponentModifyButton_Btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.BndEvt__UMG_ComponentModifyButton_Btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ComponentButton_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.BndEvt__UMG_ComponentButton_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ComponentModifyButton(int32_t EntryPoint); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.ExecuteUbergraph_UMG_ComponentModifyButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Hovered__DelegateSignature(); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Clicked__DelegateSignature(); // Function UMG_ComponentModifyButton.UMG_ComponentModifyButton_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

