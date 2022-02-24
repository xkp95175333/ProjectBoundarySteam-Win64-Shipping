// WidgetBlueprintGeneratedClass ConfirmPageButton.ConfirmPageButton_C
// Size: 0x404 (Inherited: 0x268)
struct UConfirmPageButton_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UOverlay* BackGroundBoard; // 0x270(0x08)
	struct UImage* BackgroundImage; // 0x278(0x08)
	struct UImage* BlackShadow; // 0x280(0x08)
	struct UTextBlock* Botton; // 0x288(0x08)
	struct UTextBlock* brackets_L; // 0x290(0x08)
	struct UTextBlock* brackets_R; // 0x298(0x08)
	struct UOverlay* BracketsBox; // 0x2a0(0x08)
	struct USpacer* BracketsDivide; // 0x2a8(0x08)
	struct UButton* SubButton; // 0x2b0(0x08)
	struct UOverlay* TextBox; // 0x2b8(0x08)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnButtonPressed; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnButtonReleaseed; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnButtonUnhovered; // 0x300(0x10)
	struct FMulticastInlineDelegate FocusChanged; // 0x310(0x10)
	bool AutoHovernToFocus; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	struct FLinearColor NormalColor; // 0x324(0x10)
	struct FLinearColor HoveredColor; // 0x334(0x10)
	struct FLinearColor PressedColor; // 0x344(0x10)
	bool UseBrackets; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	int32_t BracketsSize; // 0x358(0x04)
	struct FName BracketsTypeFace; // 0x35c(0x08)
	struct FLinearColor BracketsColor; // 0x364(0x10)
	struct FLinearColor TextColor; // 0x374(0x10)
	char pad_384[0x4]; // 0x384(0x04)
	struct FText Text; // 0x388(0x18)
	int32_t TextSize; // 0x3a0(0x04)
	struct FName TextTypeFace; // 0x3a4(0x08)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct UObject* NewVar_1; // 0x3b0(0x08)
	struct UObject* FontFamily; // 0x3b8(0x08)
	bool B_IsPressed; // 0x3c0(0x01)
	bool B_IsHovered; // 0x3c1(0x01)
	char pad_3C2[0x2]; // 0x3c2(0x02)
	float BracketsNormalDivide; // 0x3c4(0x04)
	float BracketsFocusDivide; // 0x3c8(0x04)
	float BracketsDivideSize; // 0x3cc(0x04)
	bool IsFocus; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	float NormalOpacity; // 0x3d4(0x04)
	float FocusOpacity; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct FText BottonText; // 0x3e0(0x18)
	float NormalShadowOpacity; // 0x3f8(0x04)
	float FocusShadowOpacity; // 0x3fc(0x04)
	float ActiveShadowOpacity; // 0x400(0x04)

	void Designer_OnFocus(); // Function ConfirmPageButton.ConfirmPageButton_C.Designer_OnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnUnfocus(); // Function ConfirmPageButton.ConfirmPageButton_C.Designer_OnUnfocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ConfirmPageButton.ConfirmPageButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function ConfirmPageButton.ConfirmPageButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetColor(struct FLinearColor NormalColor, struct FLinearColor HoveredColor, struct FLinearColor PressedColor); // Function ConfirmPageButton.ConfirmPageButton_C.SetColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetText(struct FText BottonText); // Function ConfirmPageButton.ConfirmPageButton_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ConfirmPageButton.ConfirmPageButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function ConfirmPageButton.ConfirmPageButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function ConfirmPageButton.ConfirmPageButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ConfirmPageButton.ConfirmPageButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function ConfirmPageButton.ConfirmPageButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function ConfirmPageButton.ConfirmPageButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function ConfirmPageButton.ConfirmPageButton_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetBottonText(struct FText BottonText); // Function ConfirmPageButton.ConfirmPageButton_C.SetBottonText // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ConfirmPageButton(int32_t EntryPoint); // Function ConfirmPageButton.ConfirmPageButton_C.ExecuteUbergraph_ConfirmPageButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void FocusChanged__DelegateSignature(bool NewFocused); // Function ConfirmPageButton.ConfirmPageButton_C.FocusChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnButtonUnhovered__DelegateSignature(); // Function ConfirmPageButton.ConfirmPageButton_C.OnButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnButtonHovered__DelegateSignature(); // Function ConfirmPageButton.ConfirmPageButton_C.OnButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnButtonReleaseed__DelegateSignature(); // Function ConfirmPageButton.ConfirmPageButton_C.OnButtonReleaseed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnButtonPressed__DelegateSignature(); // Function ConfirmPageButton.ConfirmPageButton_C.OnButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnButtonClicked__DelegateSignature(); // Function ConfirmPageButton.ConfirmPageButton_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

