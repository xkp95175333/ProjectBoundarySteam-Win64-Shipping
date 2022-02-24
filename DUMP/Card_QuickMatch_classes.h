// WidgetBlueprintGeneratedClass Card_QuickMatch.Card_QuickMatch_C
// Size: 0x5b8 (Inherited: 0x460)
struct UCard_QuickMatch_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* FocusOnFilter; // 0x468(0x08)
	struct UWidgetAnimation* FocusOn; // 0x470(0x08)
	struct UGenerallyUseButton_C* FilterButton; // 0x478(0x08)
	struct UImage* FilterTextIconA; // 0x480(0x08)
	struct UCanvasPanel* Focus_Filter_Board; // 0x488(0x08)
	struct UOverlay* Focus_LightingMask; // 0x490(0x08)
	struct UCanvasPanel* FocusBoard; // 0x498(0x08)
	struct UImage* FocusLine; // 0x4a0(0x08)
	struct UImage* FocusMask; // 0x4a8(0x08)
	struct UImage* Image; // 0x4b0(0x08)
	struct UImage* Image_1; // 0x4b8(0x08)
	struct UImage* Image_17; // 0x4c0(0x08)
	struct UImage* Image_18; // 0x4c8(0x08)
	struct UImage* Image_125; // 0x4d0(0x08)
	struct UImage* Image_357; // 0x4d8(0x08)
	struct UImage* Image_370; // 0x4e0(0x08)
	struct UImage* Image_371; // 0x4e8(0x08)
	struct UImage* Image_373; // 0x4f0(0x08)
	struct UVerticalBox* InfoBoard; // 0x4f8(0x08)
	struct UOverlay* LockBoard; // 0x500(0x08)
	struct UTextBlock* LockText; // 0x508(0x08)
	struct UCanvasPanel* MainBoard; // 0x510(0x08)
	struct UGenerallyUseButton_C* MainButton; // 0x518(0x08)
	struct UOverlay* Normal_BackGround_Image; // 0x520(0x08)
	struct UOverlay* Overlay_FilterBackGround; // 0x528(0x08)
	struct UHorizontalBox* Overlay_FilterText; // 0x530(0x08)
	struct UTextBlock* TextBlock_8; // 0x538(0x08)
	struct UTextBlock* TextBlock_9; // 0x540(0x08)
	bool IsFilterBtnBeenFocus; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct FMulticastInlineDelegate OnFilterBtnClicked; // 0x550(0x10)
	struct FTimerHandle ProcessTimer; // 0x560(0x08)
	bool IsPS4; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct TArray<struct FName> InputTipsIcon; // 0x570(0x10)
	bool FocusJustReceived; // 0x580(0x01)
	bool IsAValidInput; // 0x581(0x01)
	bool IsValid; // 0x582(0x01)
	bool bFirstFocus; // 0x583(0x01)
	char pad_584[0x4]; // 0x584(0x04)
	struct FString MatchName; // 0x588(0x10)
	struct UMatchOption_Filter_C* MatchOptionFilter; // 0x598(0x08)
	struct UMatchOption_Filter_C* MatchFliterClass; // 0x5a0(0x08)
	struct TArray<struct FString> GameModeShortNames; // 0x5a8(0x10)

	void HandleFilterButtonClicked(); // Function Card_QuickMatch.Card_QuickMatch_C.HandleFilterButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HandleOnSearchStateChange(enum class EPBSearchLimitReason InReason, int32_t InCurTeamNum); // Function Card_QuickMatch.Card_QuickMatch_C.HandleOnSearchStateChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Card_QuickMatch.Card_QuickMatch_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Card_QuickMatch.Card_QuickMatch_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature(); // Function Card_QuickMatch.Card_QuickMatch_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_QuickMatch.Card_QuickMatch_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_FocusChanged__DelegateSignature(bool NewFocused); // Function Card_QuickMatch.Card_QuickMatch_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_FocusChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(); // Function Card_QuickMatch.Card_QuickMatch_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_QuickMatch.Card_QuickMatch_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInteractableOnKeyboard(bool NewInteractable); // Function Card_QuickMatch.Card_QuickMatch_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_QuickMatch.Card_QuickMatch_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_QuickMatch.Card_QuickMatch_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnDisable(); // Function Card_QuickMatch.Card_QuickMatch_C.OnDisable // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnEnable(); // Function Card_QuickMatch.Card_QuickMatch_C.OnEnable // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function Card_QuickMatch.Card_QuickMatch_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnCanSearchStateChanged(enum class EPBSearchLimitReason reason, int32_t CurTeamNum); // Function Card_QuickMatch.Card_QuickMatch_C.NotifyOnCanSearchStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_QuickMatch.Card_QuickMatch_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature(); // Function Card_QuickMatch.Card_QuickMatch_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_FocusChanged__DelegateSignature(bool NewFocused); // Function Card_QuickMatch.Card_QuickMatch_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_FocusChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Card_QuickMatch.Card_QuickMatch_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_QuickMatch(int32_t EntryPoint); // Function Card_QuickMatch.Card_QuickMatch_C.ExecuteUbergraph_Card_QuickMatch // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnFilterBtnClicked__DelegateSignature(); // Function Card_QuickMatch.Card_QuickMatch_C.OnFilterBtnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

