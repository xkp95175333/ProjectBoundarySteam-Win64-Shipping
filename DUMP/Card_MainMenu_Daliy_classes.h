// WidgetBlueprintGeneratedClass Card_MainMenu_Daliy.Card_MainMenu_Daliy_C
// Size: 0x4e8 (Inherited: 0x460)
struct UCard_MainMenu_Daliy_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* FocusOn; // 0x468(0x08)
	struct UImage* BG; // 0x470(0x08)
	struct UButton* btn; // 0x478(0x08)
	struct UCanvasPanel* Focus_Filter_Board; // 0x480(0x08)
	struct UOverlay* Focus_LightingMask; // 0x488(0x08)
	struct UImage* FocusLine; // 0x490(0x08)
	struct UImage* Image_151; // 0x498(0x08)
	struct UImage* Image_286; // 0x4a0(0x08)
	struct UImage* Image_356; // 0x4a8(0x08)
	struct UCanvasPanel* MainBoard; // 0x4b0(0x08)
	struct UOverlay* MainOverlay; // 0x4b8(0x08)
	struct UVerticalBox* Normal_TextBoard; // 0x4c0(0x08)
	struct UImage* shadow; // 0x4c8(0x08)
	struct UTextBlock* TextBlock_8; // 0x4d0(0x08)
	struct UTextBlock* TextBlock_9; // 0x4d8(0x08)
	struct UUnlockIcon_v3_C* UnlockIcon_v3; // 0x4e0(0x08)

	void SetInteractableOnKeyboard(bool NewInteractable); // Function Card_MainMenu_Daliy.Card_MainMenu_Daliy_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Card_MainMenu_Daliy.Card_MainMenu_Daliy_C.BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_MainMenu_Daliy.Card_MainMenu_Daliy_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_MainMenu_Daliy.Card_MainMenu_Daliy_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function Card_MainMenu_Daliy.Card_MainMenu_Daliy_C.BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_MainMenu_Daliy(int32_t EntryPoint); // Function Card_MainMenu_Daliy.Card_MainMenu_Daliy_C.ExecuteUbergraph_Card_MainMenu_Daliy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

