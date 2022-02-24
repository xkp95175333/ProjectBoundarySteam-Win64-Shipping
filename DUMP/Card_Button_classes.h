// WidgetBlueprintGeneratedClass Card_Button.Card_Button_C
// Size: 0x4c0 (Inherited: 0x3d8)
struct UCard_Button_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x3e0(0x08)
	struct UImage* BaseBlack; // 0x3e8(0x08)
	struct UTextBlock* Cost; // 0x3f0(0x08)
	struct UGenerallyUseButton_C* GenerallyUseButton; // 0x3f8(0x08)
	struct UImage* Image; // 0x400(0x08)
	struct UImage* Image_503; // 0x408(0x08)
	struct UButton* Main_Button; // 0x410(0x08)
	struct UCanvasPanel* MainBoard; // 0x418(0x08)
	struct UTextBlock* Title; // 0x420(0x08)
	struct FText Text_Title; // 0x428(0x18)
	bool EnterDetails; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FMulticastInlineDelegate Clicked; // 0x448(0x10)
	struct FSlateColor NormalTextColor; // 0x458(0x28)
	struct FSlateColor UnLevelTextColor; // 0x480(0x28)
	int32_t Text_Size; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct UObject* FontFamily; // 0x4b0(0x08)
	struct FName FontFaceType; // 0x4b8(0x08)

	void Designer_OtherGotoNextLevel(); // Function Card_Button.Card_Button_C.Designer_OtherGotoNextLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OtherLeaveNextLevel(); // Function Card_Button.Card_Button_C.Designer_OtherLeaveNextLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_LeaveAsEntry(); // Function Card_Button.Card_Button_C.Designer_LeaveAsEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_EnterAsEntry(); // Function Card_Button.Card_Button_C.Designer_EnterAsEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Unfocus(); // Function Card_Button.Card_Button_C.Designer_Unfocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Main_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Card_Button.Card_Button_C.BndEvt__Main_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnFocus(); // Function Card_Button.Card_Button_C.Designer_OnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_Button.Card_Button_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_Button.Card_Button_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Button.Card_Button_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Button.Card_Button_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Main_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Card_Button.Card_Button_C.BndEvt__Main_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void GetIntoNextLevel(bool IsEntry); // Function Card_Button.Card_Button_C.GetIntoNextLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetBack(); // Function Card_Button.Card_Button_C.GetBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_Button.Card_Button_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetTitle(struct FText InText); // Function Card_Button.Card_Button_C.Designer_SetTitle // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(); // Function Card_Button.Card_Button_C.BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Button(int32_t EntryPoint); // Function Card_Button.Card_Button_C.ExecuteUbergraph_Card_Button // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Clicked__DelegateSignature(); // Function Card_Button.Card_Button_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

