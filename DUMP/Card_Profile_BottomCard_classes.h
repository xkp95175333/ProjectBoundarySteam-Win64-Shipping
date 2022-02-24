// WidgetBlueprintGeneratedClass Card_Profile_BottomCard.Card_Profile_BottomCard_C
// Size: 0x551 (Inherited: 0x460)
struct UCard_Profile_BottomCard_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* Focus; // 0x468(0x08)
	struct UImage* Background; // 0x470(0x08)
	struct UButton* btn; // 0x478(0x08)
	struct UTextBlock* Description_2; // 0x480(0x08)
	struct UTextBlock* Description_3; // 0x488(0x08)
	struct UTextBlock* Description_4; // 0x490(0x08)
	struct UTextBlock* Description_5; // 0x498(0x08)
	struct UOverlay* Focus_LightingMask; // 0x4a0(0x08)
	struct UImage* Icon; // 0x4a8(0x08)
	struct UImage* Image; // 0x4b0(0x08)
	struct UImage* Image_145; // 0x4b8(0x08)
	struct UImage* Image_151; // 0x4c0(0x08)
	struct UImage* Image_249; // 0x4c8(0x08)
	struct UTextBlock* Title; // 0x4d0(0x08)
	struct UTexture2D* Icon_Image; // 0x4d8(0x08)
	struct FText Dscp_2; // 0x4e0(0x18)
	struct FText Dscp_3; // 0x4f8(0x18)
	struct FText Dscp_4; // 0x510(0x18)
	struct FText Dscp_5; // 0x528(0x18)
	struct UTexture2D* BG_Image; // 0x540(0x08)
	struct UProfile_V2_C* Mother; // 0x548(0x08)
	bool ToRankList; // 0x550(0x01)

	void InitMother(struct UProfile_V2_C* Mother); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.InitMother // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInteractableOnKeyboard(bool NewInteractable); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Profile_BottomCard(int32_t EntryPoint); // Function Card_Profile_BottomCard.Card_Profile_BottomCard_C.ExecuteUbergraph_Card_Profile_BottomCard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

