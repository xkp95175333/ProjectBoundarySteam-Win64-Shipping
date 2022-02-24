// WidgetBlueprintGeneratedClass Card_MainOption.Card_MainOption_C
// Size: 0x4e8 (Inherited: 0x3d8)
struct UCard_MainOption_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* OtherSelect; // 0x3e0(0x08)
	struct UWidgetAnimation* SelectedOn; // 0x3e8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x3f0(0x08)
	struct UImage* blackBG; // 0x3f8(0x08)
	struct UImage* FocusMask; // 0x400(0x08)
	struct UImage* Image_114; // 0x408(0x08)
	struct UImage* Image_679; // 0x410(0x08)
	struct UButton* Main_Button; // 0x418(0x08)
	struct UImage* OptionIconImage; // 0x420(0x08)
	struct UImage* SelectedMask; // 0x428(0x08)
	struct UTextBlock* Title; // 0x430(0x08)
	struct UTextBlock* Title_2; // 0x438(0x08)
	struct FText Text_Title; // 0x440(0x18)
	bool EnterDetails; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct FMulticastInlineDelegate Clicked; // 0x460(0x10)
	int32_t Index; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct FSlateColor NormalTextColor; // 0x478(0x28)
	struct FSlateColor UnLevelTextColor; // 0x4a0(0x28)
	struct FMulticastInlineDelegate OnMainOptionFocus; // 0x4c8(0x10)
	struct UTexture2D* OptionIcon; // 0x4d8(0x08)
	bool bIsFocus; // 0x4e0(0x01)
	bool bIsSelected; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	float FocusMaskOpcacity; // 0x4e4(0x04)

	void Designer_SetTitle(struct FText InText); // Function Card_MainOption.Card_MainOption_C.Designer_SetTitle // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnFocus(); // Function Card_MainOption.Card_MainOption_C.Designer_OnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Unfocus(); // Function Card_MainOption.Card_MainOption_C.Designer_Unfocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_EnterAsEntry(); // Function Card_MainOption.Card_MainOption_C.Designer_EnterAsEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_LeaveAsEntry(); // Function Card_MainOption.Card_MainOption_C.Designer_LeaveAsEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OtherGotoNextLevel(); // Function Card_MainOption.Card_MainOption_C.Designer_OtherGotoNextLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OtherLeaveNextLevel(); // Function Card_MainOption.Card_MainOption_C.Designer_OtherLeaveNextLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Main_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Card_MainOption.Card_MainOption_C.BndEvt__Main_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Card_MainOption.Card_MainOption_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Main_button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Card_MainOption.Card_MainOption_C.BndEvt__Main_button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_MainOption.Card_MainOption_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_MainOption.Card_MainOption_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_MainOption.Card_MainOption_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_MainOption.Card_MainOption_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Main_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Card_MainOption.Card_MainOption_C.BndEvt__Main_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void GetIntoNextLevel(bool IsEntry); // Function Card_MainOption.Card_MainOption_C.GetIntoNextLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetBack(); // Function Card_MainOption.Card_MainOption_C.GetBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_MainOption.Card_MainOption_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_MainOption(int32_t EntryPoint); // Function Card_MainOption.Card_MainOption_C.ExecuteUbergraph_Card_MainOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnMainOptionFocus__DelegateSignature(struct UCard_MainOption_C* Caller); // Function Card_MainOption.Card_MainOption_C.OnMainOptionFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Clicked__DelegateSignature(int32_t Index); // Function Card_MainOption.Card_MainOption_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

