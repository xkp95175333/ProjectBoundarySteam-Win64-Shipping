// WidgetBlueprintGeneratedClass UMG_IngameHUD_GameTips.UMG_IngameHUD_GameTips_C
// Size: 0x3f8 (Inherited: 0x3c8)
struct UUMG_IngameHUD_GameTips_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x3d0(0x08)
	struct UImage* Black_BG; // 0x3d8(0x08)
	struct UCanvasPanel* CanvasPanel_GameTIp2; // 0x3e0(0x08)
	struct UTextBlock* TextBlock_Tips; // 0x3e8(0x08)
	struct FTimerHandle PlayForwardTimerHandle; // 0x3f0(0x08)

	void SequenceEvent__ENTRYPOINTUMG_IngameHUD_GameTips_1(); // Function UMG_IngameHUD_GameTips.UMG_IngameHUD_GameTips_C.SequenceEvent__ENTRYPOINTUMG_IngameHUD_GameTips_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowTips(struct FText Tip); // Function UMG_IngameHUD_GameTips.UMG_IngameHUD_GameTips_C.ShowTips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HideSelf(); // Function UMG_IngameHUD_GameTips.UMG_IngameHUD_GameTips_C.HideSelf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyMatchStarted(); // Function UMG_IngameHUD_GameTips.UMG_IngameHUD_GameTips_C.NotifyMatchStarted // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SpawnEliminationArrow(); // Function UMG_IngameHUD_GameTips.UMG_IngameHUD_GameTips_C.SpawnEliminationArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RemoveAnim(); // Function UMG_IngameHUD_GameTips.UMG_IngameHUD_GameTips_C.RemoveAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_IngameHUD_GameTips(int32_t EntryPoint); // Function UMG_IngameHUD_GameTips.UMG_IngameHUD_GameTips_C.ExecuteUbergraph_UMG_IngameHUD_GameTips // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

