// WidgetBlueprintGeneratedClass UMG_GamepadView.UMG_GamepadView_C
// Size: 0x358 (Inherited: 0x268)
struct UUMG_GamepadView_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* HighLight_Vice; // 0x270(0x08)
	struct UImage* HighLighter; // 0x278(0x08)
	struct UImage* Main; // 0x280(0x08)
	struct TMap<struct FKey, struct UTexture2D*> PS4KeyMap; // 0x288(0x50)
	struct TMap<struct FKey, struct UTexture2D*> XBOXKeyMap; // 0x2d8(0x50)
	struct FKey MainKey; // 0x328(0x18)
	struct FKey ViceKey; // 0x340(0x18)

	void GetCurrentGamepadKeymap(struct TMap<struct FKey, struct UTexture2D*> KeyMap); // Function UMG_GamepadView.UMG_GamepadView_C.GetCurrentGamepadKeymap // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Highlight(struct FKey InKey, struct FKey ViceKey); // Function UMG_GamepadView.UMG_GamepadView_C.Highlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_GamepadView.UMG_GamepadView_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_GamepadView(int32_t EntryPoint); // Function UMG_GamepadView.UMG_GamepadView_C.ExecuteUbergraph_UMG_GamepadView // (Final|UbergraphFunction) // @ game+0x1556ec0
};

