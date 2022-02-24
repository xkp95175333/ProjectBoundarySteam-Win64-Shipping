// WidgetBlueprintGeneratedClass Card_Profile_CharacterProgress.Card_Profile_CharacterProgress_C
// Size: 0x550 (Inherited: 0x460)
struct UCard_Profile_CharacterProgress_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UButton* btn; // 0x468(0x08)
	struct UCard_Profile_InfoBox_C* Card_Profile_InfoBox; // 0x470(0x08)
	struct UCard_Profile_InfoBox_C* Card_Profile_InfoBox_2; // 0x478(0x08)
	struct UCard_Profile_InfoBox_C* Card_Profile_InfoBox_3; // 0x480(0x08)
	struct UCard_Profile_InfoBox_C* Card_Profile_InfoBox_4; // 0x488(0x08)
	struct UCard_Profile_InfoBox_C* Card_Profile_InfoBox_5; // 0x490(0x08)
	struct UCard_Profile_InfoBox_C* Card_Profile_InfoBox_6; // 0x498(0x08)
	struct UCard_Profile_InfoBox_C* Card_Profile_InfoBox_7; // 0x4a0(0x08)
	struct UCard_Profile_InfoBox_C* Card_Profile_InfoBox_8; // 0x4a8(0x08)
	struct UImage* CharacterPhoto; // 0x4b0(0x08)
	struct UOverlay* Icon; // 0x4b8(0x08)
	struct UImage* Image; // 0x4c0(0x08)
	struct UImage* Image_2; // 0x4c8(0x08)
	struct UImage* Image_3; // 0x4d0(0x08)
	struct UImage* Image_4; // 0x4d8(0x08)
	struct UImage* Image_5; // 0x4e0(0x08)
	struct UImage* Image_6; // 0x4e8(0x08)
	struct UImage* Image_7; // 0x4f0(0x08)
	struct UImage* Image_8; // 0x4f8(0x08)
	struct UImage* Image_114; // 0x500(0x08)
	struct UImage* Image_399; // 0x508(0x08)
	struct UImage* Image_Icon; // 0x510(0x08)
	struct UHorizontalBox* InfoBoxHorizontalBox_2; // 0x518(0x08)
	struct UHorizontalBox* InfoBoxHorizontalBox_3; // 0x520(0x08)
	struct UCanvasPanel* MainBoard; // 0x528(0x08)
	struct UTextBlock* RoleClassName; // 0x530(0x08)
	struct UVerticalBox* VerticalBox_DataInfo; // 0x538(0x08)
	struct FName RoleId; // 0x540(0x08)
	struct UTexture* Image_Photo; // 0x548(0x08)

	void RefreshStatData(struct UPanelWidget* Container); // Function Card_Profile_CharacterProgress.Card_Profile_CharacterProgress_C.RefreshStatData // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(struct FName RoleId); // Function Card_Profile_CharacterProgress.Card_Profile_CharacterProgress_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnFocused(); // Function Card_Profile_CharacterProgress.Card_Profile_CharacterProgress_C.OnFocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnUnfocused(); // Function Card_Profile_CharacterProgress.Card_Profile_CharacterProgress_C.OnUnfocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_Profile_CharacterProgress.Card_Profile_CharacterProgress_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_Profile_CharacterProgress.Card_Profile_CharacterProgress_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetInteractableOnKeyboard(bool NewInteractable); // Function Card_Profile_CharacterProgress.Card_Profile_CharacterProgress_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh(); // Function Card_Profile_CharacterProgress.Card_Profile_CharacterProgress_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Profile_CharacterProgress(int32_t EntryPoint); // Function Card_Profile_CharacterProgress.Card_Profile_CharacterProgress_C.ExecuteUbergraph_Card_Profile_CharacterProgress // (Final|UbergraphFunction) // @ game+0x1556ec0
};

