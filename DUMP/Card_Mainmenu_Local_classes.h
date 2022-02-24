// WidgetBlueprintGeneratedClass Card_Mainmenu_Local.Card_Mainmenu_Local_C
// Size: 0x519 (Inherited: 0x460)
struct UCard_Mainmenu_Local_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* FocusOn; // 0x468(0x08)
	struct UImage* blackBG; // 0x470(0x08)
	struct UImage* BlackShadow; // 0x478(0x08)
	struct UButton* btn; // 0x480(0x08)
	struct UOverlay* Focus_LightingMask; // 0x488(0x08)
	struct UCanvasPanel* FocusBoard; // 0x490(0x08)
	struct UImage* FocusLine; // 0x498(0x08)
	struct UImage* Image_132; // 0x4a0(0x08)
	struct UImage* Image_151; // 0x4a8(0x08)
	struct UImage* Image_229; // 0x4b0(0x08)
	struct UImage* Image_293; // 0x4b8(0x08)
	struct UImage* Image_356; // 0x4c0(0x08)
	struct UCanvasPanel* MainBoard; // 0x4c8(0x08)
	struct UOverlay* OverLay_BackGround_Image; // 0x4d0(0x08)
	struct UTextBlock* TextBlock_1; // 0x4d8(0x08)
	struct UTextBlock* TextBlock_73; // 0x4e0(0x08)
	struct UVerticalBox* TextBoard; // 0x4e8(0x08)
	bool CanBeFocus; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct TArray<enum class EUINavigation> Secret; // 0x4f8(0x10)
	struct TArray<enum class EUINavigation> CorrectNum; // 0x508(0x10)
	bool CanGetIn; // 0x518(0x01)

	struct UWidget* RefreshInfo(enum class EUINavigation Navigation); // Function Card_Mainmenu_Local.Card_Mainmenu_Local_C.RefreshInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_Mainmenu_Local.Card_Mainmenu_Local_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_Mainmenu_Local.Card_Mainmenu_Local_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Card_Mainmenu_Local.Card_Mainmenu_Local_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnFocused(); // Function Card_Mainmenu_Local.Card_Mainmenu_Local_C.OnFocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnUnfocused(); // Function Card_Mainmenu_Local.Card_Mainmenu_Local_C.OnUnfocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInteractableOnKeyboard(bool NewInteractable); // Function Card_Mainmenu_Local.Card_Mainmenu_Local_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(); // Function Card_Mainmenu_Local.Card_Mainmenu_Local_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Clicked(); // Function Card_Mainmenu_Local.Card_Mainmenu_Local_C.Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Mainmenu_Local(int32_t EntryPoint); // Function Card_Mainmenu_Local.Card_Mainmenu_Local_C.ExecuteUbergraph_Card_Mainmenu_Local // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

