// WidgetBlueprintGeneratedClass HUD_BeingRescue.HUD_BeingRescue_C
// Size: 0x280 (Inherited: 0x268)
struct UHUD_BeingRescue_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Image_ProgressBars; // 0x270(0x08)
	struct UTextBlock* TextBlock_timer; // 0x278(0x08)

	void Construct(); // Function HUD_BeingRescue.HUD_BeingRescue_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_BeingRescue.HUD_BeingRescue_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_HUD_BeingRescue(int32_t EntryPoint); // Function HUD_BeingRescue.HUD_BeingRescue_C.ExecuteUbergraph_HUD_BeingRescue // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

