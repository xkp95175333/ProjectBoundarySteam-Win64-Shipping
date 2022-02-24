// WidgetBlueprintGeneratedClass HUD_QuickRespawnTips.HUD_QuickRespawnTips_C
// Size: 0x3e8 (Inherited: 0x3c8)
struct UHUD_QuickRespawnTips_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UImage* Image_227; // 0x3d0(0x08)
	struct UImage* Image_426; // 0x3d8(0x08)
	struct USizeBox* QuickRespawnEnabled; // 0x3e0(0x08)

	void Construct(); // Function HUD_QuickRespawnTips.HUD_QuickRespawnTips_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Show(); // Function HUD_QuickRespawnTips.HUD_QuickRespawnTips_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WhenCloseOption(); // Function HUD_QuickRespawnTips.HUD_QuickRespawnTips_C.WhenCloseOption // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WhenOpenOption(); // Function HUD_QuickRespawnTips.HUD_QuickRespawnTips_C.WhenOpenOption // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function HUD_QuickRespawnTips.HUD_QuickRespawnTips_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_HUD_QuickRespawnTips(int32_t EntryPoint); // Function HUD_QuickRespawnTips.HUD_QuickRespawnTips_C.ExecuteUbergraph_HUD_QuickRespawnTips // (Final|UbergraphFunction) // @ game+0x1556ec0
};

