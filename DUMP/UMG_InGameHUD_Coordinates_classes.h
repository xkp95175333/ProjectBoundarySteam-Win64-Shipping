// WidgetBlueprintGeneratedClass UMG_InGameHUD_Coordinates.UMG_InGameHUD_Coordinates_C
// Size: 0x2f0 (Inherited: 0x268)
struct UUMG_InGameHUD_Coordinates_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Image_BG; // 0x270(0x08)
	struct UImage* Image_OutLine; // 0x278(0x08)
	struct UTextBlock* TextBlock_X; // 0x280(0x08)
	struct UTextBlock* TextBlock_Y; // 0x288(0x08)
	struct UTextBlock* TextBlock_Z; // 0x290(0x08)
	struct UUMG_InGameHUD_Mother_C* HUDMother; // 0x298(0x08)
	struct TMap<int32_t, struct FString> CharMap; // 0x2a0(0x50)

	void SelectZCharByInt(float Value, struct FString Output); // Function UMG_InGameHUD_Coordinates.UMG_InGameHUD_Coordinates_C.SelectZCharByInt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SelectByInt(float A, struct FString OutputChar); // Function UMG_InGameHUD_Coordinates.UMG_InGameHUD_Coordinates_C.SelectByInt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCoordinate(struct FString Prefix, struct UTextBlock* InTextBlock, float InValue); // Function UMG_InGameHUD_Coordinates.UMG_InGameHUD_Coordinates_C.SetCoordinate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetLocation(struct FVector InLocation); // Function UMG_InGameHUD_Coordinates.UMG_InGameHUD_Coordinates_C.SetLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* InGameHUDMother); // Function UMG_InGameHUD_Coordinates.UMG_InGameHUD_Coordinates_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_InGameHUD_Coordinates.UMG_InGameHUD_Coordinates_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_Coordinates(int32_t EntryPoint); // Function UMG_InGameHUD_Coordinates.UMG_InGameHUD_Coordinates_C.ExecuteUbergraph_UMG_InGameHUD_Coordinates // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

