// WidgetBlueprintGeneratedClass UI_MenuTitle.UI_MenuTitle_C
// Size: 0x2c1 (Inherited: 0x268)
struct UUI_MenuTitle_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Switch_Next; // 0x270(0x08)
	struct UTextBlock* FrameTitle; // 0x278(0x08)
	struct UImage* LatticeBG; // 0x280(0x08)
	struct UHorizontalBox* MainHorizantalBox; // 0x288(0x08)
	struct UTextBlock* MainTitle; // 0x290(0x08)
	struct UImage* TitleImage; // 0x298(0x08)
	struct FText MainTitleText; // 0x2a0(0x18)
	struct UTexture2D* TitleImageTexture; // 0x2b8(0x08)
	bool IsHaveTab; // 0x2c0(0x01)

	void PreConstruct(bool IsDesignTime); // Function UI_MenuTitle.UI_MenuTitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(struct FText TitleText); // Function UI_MenuTitle.UI_MenuTitle_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UI_MenuTitle(int32_t EntryPoint); // Function UI_MenuTitle.UI_MenuTitle_C.ExecuteUbergraph_UI_MenuTitle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

