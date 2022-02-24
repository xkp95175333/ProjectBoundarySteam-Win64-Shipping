// WidgetBlueprintGeneratedClass LoadScreen.LoadScreen_C
// Size: 0x450 (Inherited: 0x3c8)
struct ULoadScreen_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* TipsRefresh; // 0x3d0(0x08)
	struct UWidgetAnimation* MainUp; // 0x3d8(0x08)
	struct UBorder* Fader; // 0x3e0(0x08)
	struct UImage* Image_2; // 0x3e8(0x08)
	struct UImage* Image_128; // 0x3f0(0x08)
	struct UImage* ImageBG; // 0x3f8(0x08)
	struct UImage* LoadingImage; // 0x400(0x08)
	struct UUI_MenuTitle_C* MainTitle; // 0x408(0x08)
	struct UCanvasPanel* Map_Information_Box; // 0x410(0x08)
	struct UTextBlock* MAP_Location; // 0x418(0x08)
	struct UTextBlock* MAP_Name; // 0x420(0x08)
	struct UHorizontalBox* MapBox; // 0x428(0x08)
	struct UUI_MenuTitleSub_C* UI_MenuTitleSub_125; // 0x430(0x08)
	bool IsChineseLanguage; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct TArray<struct FText> TipsArray; // 0x440(0x10)

	void SequenceEvent__ENTRYPOINTLoadScreen_2(); // Function LoadScreen.LoadScreen_C.SequenceEvent__ENTRYPOINTLoadScreen_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent__ENTRYPOINTLoadScreen_1(); // Function LoadScreen.LoadScreen_C.SequenceEvent__ENTRYPOINTLoadScreen_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayTipAnim(); // Function LoadScreen.LoadScreen_C.PlayTipAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NewTips(); // Function LoadScreen.LoadScreen_C.NewTips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitModeName(); // Function LoadScreen.LoadScreen_C.InitModeName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitMapName(); // Function LoadScreen.LoadScreen_C.InitMapName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitTexts(); // Function LoadScreen.LoadScreen_C.InitTexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function LoadScreen.LoadScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function LoadScreen.LoadScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_LoadScreen(int32_t EntryPoint); // Function LoadScreen.LoadScreen_C.ExecuteUbergraph_LoadScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

