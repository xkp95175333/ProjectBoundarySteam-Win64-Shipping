// WidgetBlueprintGeneratedClass UI_MenuTitle_Small.UI_MenuTitle_Small_C
// Size: 0x530 (Inherited: 0x3d8)
struct UUI_MenuTitle_Small_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* Flash; // 0x3e0(0x08)
	struct UImage* BottomLine; // 0x3e8(0x08)
	struct UHorizontalBox* CoundBox; // 0x3f0(0x08)
	struct UTextBlock* Count1; // 0x3f8(0x08)
	struct UTextBlock* Count2; // 0x400(0x08)
	struct UTextBlock* KeyTip; // 0x408(0x08)
	struct UOverlay* KeyTipBox; // 0x410(0x08)
	struct UButton* KeyTipButton; // 0x418(0x08)
	struct UImage* KeyTipIcon; // 0x420(0x08)
	struct USizeBox* SizeBox_102; // 0x428(0x08)
	struct UTextBlock* Title; // 0x430(0x08)
	struct FText Title_Text; // 0x438(0x18)
	bool IsHaveCountBox; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	float MinWidth; // 0x454(0x04)
	int32_t CurrentNum; // 0x458(0x04)
	int32_t MaxNum; // 0x45c(0x04)
	struct FLinearColor BottomLine_Color_L; // 0x460(0x10)
	struct FLinearColor BottomLine_Color_R; // 0x470(0x10)
	struct FSlateColor CountTextColor; // 0x480(0x28)
	struct FSlateColor TitleTextColor; // 0x4a8(0x28)
	bool IsHaveKeyTipBox; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct FText KeyTipText; // 0x4d8(0x18)
	struct UTexture2D* KeyTipIconTexture; // 0x4f0(0x08)
	struct FSlateColor KeyTipTextColor; // 0x4f8(0x28)
	struct FMulticastInlineDelegate KeyTipButtonDispatcher; // 0x520(0x10)

	void ShowOutPanel(); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.ShowOutPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowInPanel(); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.ShowInPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(struct FText InText, bool IsHaveCountBox, int32_t Numer, int32_t Denomin); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCountBox(bool bIsHaveCountBox, int32_t CurrentNum, int32_t MaxNum); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.SetCountBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTitle(struct FText Title); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.SetTitle // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetKeyTipBox(bool bIsHaveKeyTipBox, struct FText KeyTipText, struct UTexture2D* KeyTipIconTexture); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.SetKeyTipBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__KeyTipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.BndEvt__KeyTipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void FlashOn(bool On); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.FlashOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UI_MenuTitle_Small(int32_t EntryPoint); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.ExecuteUbergraph_UI_MenuTitle_Small // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void KeyTipButtonDispatcher__DelegateSignature(); // Function UI_MenuTitle_Small.UI_MenuTitle_Small_C.KeyTipButtonDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

