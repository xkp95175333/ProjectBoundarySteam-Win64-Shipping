// WidgetBlueprintGeneratedClass Card_ConfirmPage.Card_ConfirmPage_C
// Size: 0x496 (Inherited: 0x3d8)
struct UCard_ConfirmPage_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* Focus_False; // 0x3e0(0x08)
	struct UWidgetAnimation* Focus_True; // 0x3e8(0x08)
	struct UButton* BackgroundButton; // 0x3f0(0x08)
	struct UConfirmPageButton_C* ConfirmPageButton_No; // 0x3f8(0x08)
	struct UConfirmPageButton_C* ConfirmPageButton_Yes; // 0x400(0x08)
	struct USizeBox* FALSE; // 0x408(0x08)
	struct UImage* Image_113; // 0x410(0x08)
	struct UVerticalBox* SwitchButtonBox; // 0x418(0x08)
	struct UTextBlock* Text_Discription; // 0x420(0x08)
	struct UUI_MenuTitle_Small_C* TitleBoard_Sub; // 0x428(0x08)
	struct USizeBox* TRUE; // 0x430(0x08)
	bool OnlyYes; // 0x438(0x01)
	bool BackgroundToNo; // 0x439(0x01)
	char pad_43A[0x6]; // 0x43a(0x06)
	struct FMulticastInlineDelegate Ret(bool); // 0x440(0x10)
	bool FocusToYes; // 0x450(0x01)
	bool LastFocusToYes; // 0x451(0x01)
	char pad_452[0x2]; // 0x452(0x02)
	struct FLinearColor TrueBotton_NormalColor; // 0x454(0x10)
	struct FLinearColor TrueBotton_FocusColor; // 0x464(0x10)
	struct FLinearColor FalseBotton_NormalColor; // 0x474(0x10)
	struct FLinearColor FalseBotton_FocusColor; // 0x484(0x10)
	bool HasMadeDesicision; // 0x494(0x01)
	bool bShouldHandleFocus; // 0x495(0x01)

	void Confirm(bool bYes); // Function Card_ConfirmPage.Card_ConfirmPage_C.Confirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Card_ConfirmPage.Card_ConfirmPage_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Card_ConfirmPage.Card_ConfirmPage_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Card_ConfirmPage.Card_ConfirmPage_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Info(struct FText MainTitle, struct FText Description, struct FText YesText, struct FText NoText, bool OnlyYesButton, bool BackgroundToNo, bool ShouldHandleFocus, struct FDelegate Event(bool Yes)); // Function Card_ConfirmPage.Card_ConfirmPage_C.Set Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Focus(); // Function Card_ConfirmPage.Card_ConfirmPage_C.Designer_Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnlyYes(bool OnlyYes); // Function Card_ConfirmPage.Card_ConfirmPage_C.Designer_OnlyYes // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_ConfirmPage.Card_ConfirmPage_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Card_ConfirmPage.Card_ConfirmPage_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Card_ConfirmPage.Card_ConfirmPage_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_ConfirmPage.Card_ConfirmPage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__ConfirmPageButton_Yes_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature(); // Function Card_ConfirmPage.Card_ConfirmPage_C.BndEvt__ConfirmPageButton_Yes_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__ConfirmPageButton_Yes_K2Node_ComponentBoundEvent_10_FocusChanged__DelegateSignature(bool NewFocused); // Function Card_ConfirmPage.Card_ConfirmPage_C.BndEvt__ConfirmPageButton_Yes_K2Node_ComponentBoundEvent_10_FocusChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__ConfirmPageButton_No_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature(); // Function Card_ConfirmPage.Card_ConfirmPage_C.BndEvt__ConfirmPageButton_No_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__ConfirmPageButton_No_K2Node_ComponentBoundEvent_12_FocusChanged__DelegateSignature(bool NewFocused); // Function Card_ConfirmPage.Card_ConfirmPage_C.BndEvt__ConfirmPageButton_No_K2Node_ComponentBoundEvent_12_FocusChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Card_ConfirmPage.Card_ConfirmPage_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_ConfirmPage.Card_ConfirmPage_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_ConfirmPage.Card_ConfirmPage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Card_ConfirmPage.Card_ConfirmPage_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_ConfirmPage(int32_t EntryPoint); // Function Card_ConfirmPage.Card_ConfirmPage_C.ExecuteUbergraph_Card_ConfirmPage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Ret(bool)__DelegateSignature(bool bYes); // Function Card_ConfirmPage.Card_ConfirmPage_C.Ret(bool)__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

