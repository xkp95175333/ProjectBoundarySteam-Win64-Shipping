// WidgetBlueprintGeneratedClass Card_ForSelected.Card_ForSelected_C
// Size: 0x4e0 (Inherited: 0x460)
struct UCard_ForSelected_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* WarningOff; // 0x468(0x08)
	struct UWidgetAnimation* WarningOn; // 0x470(0x08)
	struct UWidgetAnimation* FocusOn_Board; // 0x478(0x08)
	struct UWidgetAnimation* Selected; // 0x480(0x08)
	struct UWidgetAnimation* FocusOn; // 0x488(0x08)
	struct UGenerallyUseButton_C* GenerallyUseButton; // 0x490(0x08)
	struct UImage* Image_229; // 0x498(0x08)
	struct UTextBlock* TextBlock_1; // 0x4a0(0x08)
	bool bIsSelected; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UTexture2D* ImageToShow; // 0x4b0(0x08)
	bool bIsWarning; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct FMulticastInlineDelegate WarningEndDispatcher; // 0x4c0(0x10)
	struct FString MatchName; // 0x4d0(0x10)

	void RefreshButtonText(); // Function Card_ForSelected.Card_ForSelected_C.RefreshButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckSeflFocus(struct TArray<struct FString> MatchItems); // Function Card_ForSelected.Card_ForSelected_C.CheckSeflFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_ForSelected.Card_ForSelected_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnSelectChanged(bool bNewSelected); // Function Card_ForSelected.Card_ForSelected_C.OnSelectChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_ForSelected.Card_ForSelected_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_ForSelected.Card_ForSelected_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_ForSelected.Card_ForSelected_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(); // Function Card_ForSelected.Card_ForSelected_C.BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_ForSelected.Card_ForSelected_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void EnterClicked(); // Function Card_ForSelected.Card_ForSelected_C.EnterClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_0_OnButtonHovered__DelegateSignature(); // Function Card_ForSelected.Card_ForSelected_C.BndEvt__GenerallyUseButton_K2Node_ComponentBoundEvent_0_OnButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void WarningStart(); // Function Card_ForSelected.Card_ForSelected_C.WarningStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WarningEnd(); // Function Card_ForSelected.Card_ForSelected_C.WarningEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_ForSelected(int32_t EntryPoint); // Function Card_ForSelected.Card_ForSelected_C.ExecuteUbergraph_Card_ForSelected // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void WarningEndDispatcher__DelegateSignature(); // Function Card_ForSelected.Card_ForSelected_C.WarningEndDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

