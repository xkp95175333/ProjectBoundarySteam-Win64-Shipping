// WidgetBlueprintGeneratedClass Card_Mainmenu_Recommand.Card_Mainmenu_Recommand_C
// Size: 0x4d0 (Inherited: 0x460)
struct UCard_Mainmenu_Recommand_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* FocusOn; // 0x468(0x08)
	struct UButton* btn; // 0x470(0x08)
	struct UCanvasPanel* Focus_Filter_Board; // 0x478(0x08)
	struct UOverlay* Focus_LightingMask; // 0x480(0x08)
	struct UImage* FocusLine; // 0x488(0x08)
	struct UImage* Image_17; // 0x490(0x08)
	struct UImage* Image_151; // 0x498(0x08)
	struct UImage* Image_356; // 0x4a0(0x08)
	struct UImage* Image_357; // 0x4a8(0x08)
	struct UCanvasPanel* MainBoard; // 0x4b0(0x08)
	struct UTextBlock* TextBlock_1; // 0x4b8(0x08)
	struct UTextBlock* TextBlock_73; // 0x4c0(0x08)
	struct UVerticalBox* TextBoard; // 0x4c8(0x08)

	void OnFocused(); // Function Card_Mainmenu_Recommand.Card_Mainmenu_Recommand_C.OnFocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnUnfocused(); // Function Card_Mainmenu_Recommand.Card_Mainmenu_Recommand_C.OnUnfocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_Mainmenu_Recommand.Card_Mainmenu_Recommand_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_Mainmenu_Recommand.Card_Mainmenu_Recommand_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetInteractableOnKeyboard(bool NewInteractable); // Function Card_Mainmenu_Recommand.Card_Mainmenu_Recommand_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Mainmenu_Recommand(int32_t EntryPoint); // Function Card_Mainmenu_Recommand.Card_Mainmenu_Recommand_C.ExecuteUbergraph_Card_Mainmenu_Recommand // (Final|UbergraphFunction) // @ game+0x1556ec0
};

