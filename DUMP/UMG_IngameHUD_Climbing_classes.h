// WidgetBlueprintGeneratedClass UMG_IngameHUD_Climbing.UMG_IngameHUD_Climbing_C
// Size: 0x2b0 (Inherited: 0x268)
struct UUMG_IngameHUD_Climbing_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* SwitchState; // 0x270(0x08)
	struct UImage* BG; // 0x278(0x08)
	struct UImage* Image_107; // 0x280(0x08)
	struct UImage* Image_259; // 0x288(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x290(0x08)
	struct UOverlay* Overlay_1; // 0x298(0x08)
	struct UTextBlock* Tex_CatchWarring; // 0x2a0(0x08)
	struct UTextBlock* Tex_CatchWarring_2; // 0x2a8(0x08)

	void ClimbStateChange(); // Function UMG_IngameHUD_Climbing.UMG_IngameHUD_Climbing_C.ClimbStateChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_IngameHUD_Climbing.UMG_IngameHUD_Climbing_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_IngameHUD_Climbing(int32_t EntryPoint); // Function UMG_IngameHUD_Climbing.UMG_IngameHUD_Climbing_C.ExecuteUbergraph_UMG_IngameHUD_Climbing // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

