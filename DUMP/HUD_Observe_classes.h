// WidgetBlueprintGeneratedClass HUD_Observe.HUD_Observe_C
// Size: 0x2b8 (Inherited: 0x268)
struct UHUD_Observe_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UVerticalBox* CanvasPanel_Ob; // 0x270(0x08)
	struct UHorizontalBox* HorizontalBox_EnterTips; // 0x278(0x08)
	struct UImage* Image_132; // 0x280(0x08)
	struct UImage* Image_Arms; // 0x288(0x08)
	struct UPBInputTipsImage* Image_InputButton; // 0x290(0x08)
	struct UPBInputTipsImage* Image_InuptButton_Middle; // 0x298(0x08)
	struct UTextBlock* TextBlock_level; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_ObName; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_ReviveTips; // 0x2b0(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_Observe.HUD_Observe_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_HUD_Observe(int32_t EntryPoint); // Function HUD_Observe.HUD_Observe_C.ExecuteUbergraph_HUD_Observe // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

