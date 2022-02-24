// WidgetBlueprintGeneratedClass WBP_InGameHUD_GraplePoint.WBP_InGameHUD_GraplePoint_C
// Size: 0x2f5 (Inherited: 0x268)
struct UWBP_InGameHUD_GraplePoint_C : UPBCatchingModuleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_86; // 0x270(0x08)
	struct UImage* IMG_GrapplePoint; // 0x278(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x280(0x08)
	struct UUMG_InGameHUD_Mother_C* Parient_HUD; // 0x288(0x08)
	bool HookActive; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FSlateColor ValiableColor; // 0x298(0x28)
	struct FSlateColor DisableColor; // 0x2c0(0x28)
	struct FVector2D RenderTranslation; // 0x2e8(0x08)
	float LocationInterpSpeed; // 0x2f0(0x04)
	enum class ESlateVisibility CurrentVisibility; // 0x2f4(0x01)

	void SetImageColor(); // Function WBP_InGameHUD_GraplePoint.WBP_InGameHUD_GraplePoint_C.SetImageColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* ParientWidget); // Function WBP_InGameHUD_GraplePoint.WBP_InGameHUD_GraplePoint_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_InGameHUD_GraplePoint.WBP_InGameHUD_GraplePoint_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_Equiped(); // Function WBP_InGameHUD_GraplePoint.WBP_InGameHUD_GraplePoint_C.K2_Equiped // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_WBP_InGameHUD_GraplePoint(int32_t EntryPoint); // Function WBP_InGameHUD_GraplePoint.WBP_InGameHUD_GraplePoint_C.ExecuteUbergraph_WBP_InGameHUD_GraplePoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

