// WidgetBlueprintGeneratedClass BP_MechUAV_HUD.BP_MechUAV_HUD_C
// Size: 0x318 (Inherited: 0x268)
struct UBP_MechUAV_HUD_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Blink; // 0x270(0x08)
	struct UImage* BarBG; // 0x278(0x08)
	struct UOverlay* StatusBoard; // 0x280(0x08)
	struct UTextBlock* Text; // 0x288(0x08)
	struct UImage* TextFrame; // 0x290(0x08)
	struct FSlateColor Green_Slate; // 0x298(0x28)
	struct FSlateColor Yellow_Slate; // 0x2c0(0x28)
	struct FSlateColor Red_Slate; // 0x2e8(0x28)
	struct AGAC_BP_C* Character; // 0x310(0x08)

	void NotifyHideStatus(); // Function BP_MechUAV_HUD.BP_MechUAV_HUD_C.NotifyHideStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyShowFixing(); // Function BP_MechUAV_HUD.BP_MechUAV_HUD_C.NotifyShowFixing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyShowRecovering(); // Function BP_MechUAV_HUD.BP_MechUAV_HUD_C.NotifyShowRecovering // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyShowInView(); // Function BP_MechUAV_HUD.BP_MechUAV_HUD_C.NotifyShowInView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BP_MechUAV_HUD.BP_MechUAV_HUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function BP_MechUAV_HUD.BP_MechUAV_HUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_BP_MechUAV_HUD(int32_t EntryPoint); // Function BP_MechUAV_HUD.BP_MechUAV_HUD_C.ExecuteUbergraph_BP_MechUAV_HUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

