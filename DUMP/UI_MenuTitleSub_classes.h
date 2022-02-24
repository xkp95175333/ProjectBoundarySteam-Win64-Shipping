// WidgetBlueprintGeneratedClass UI_MenuTitleSub.UI_MenuTitleSub_C
// Size: 0x2b1 (Inherited: 0x268)
struct UUI_MenuTitleSub_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Switch_Next; // 0x270(0x08)
	struct UImage* FocusBar; // 0x278(0x08)
	struct UImage* Image_460; // 0x280(0x08)
	struct UHorizontalBox* MainHorizantalBox; // 0x288(0x08)
	struct UTextBlock* TabTitle; // 0x290(0x08)
	struct FText MainTitleText; // 0x298(0x18)
	bool IsHaveTab; // 0x2b0(0x01)

	void PreConstruct(bool IsDesignTime); // Function UI_MenuTitleSub.UI_MenuTitleSub_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetTitleText(struct FText InText); // Function UI_MenuTitleSub.UI_MenuTitleSub_C.SetTitleText // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UI_MenuTitleSub(int32_t EntryPoint); // Function UI_MenuTitleSub.UI_MenuTitleSub_C.ExecuteUbergraph_UI_MenuTitleSub // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

