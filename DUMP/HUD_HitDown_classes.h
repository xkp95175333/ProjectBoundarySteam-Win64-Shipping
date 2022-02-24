// WidgetBlueprintGeneratedClass HUD_HitDown.HUD_HitDown_C
// Size: 0x3e8 (Inherited: 0x3c8)
struct UHUD_HitDown_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UImage* Image_227; // 0x3d0(0x08)
	struct USizeBox* QuickRespawnEnabled; // 0x3d8(0x08)
	struct UImage* WaitingBar; // 0x3e0(0x08)

	void Construct(); // Function HUD_HitDown.HUD_HitDown_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_HitDown.HUD_HitDown_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Show(); // Function HUD_HitDown.HUD_HitDown_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OpenOption(); // Function HUD_HitDown.HUD_HitDown_C.OpenOption // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CloseOption(); // Function HUD_HitDown.HUD_HitDown_C.CloseOption // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function HUD_HitDown.HUD_HitDown_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_HUD_HitDown(int32_t EntryPoint); // Function HUD_HitDown.HUD_HitDown_C.ExecuteUbergraph_HUD_HitDown // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

