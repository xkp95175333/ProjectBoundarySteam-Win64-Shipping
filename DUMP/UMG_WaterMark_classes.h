// WidgetBlueprintGeneratedClass UMG_WaterMark.UMG_WaterMark_C
// Size: 0x2f0 (Inherited: 0x268)
struct UUMG_WaterMark_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* HintFlashStop; // 0x270(0x08)
	struct UWidgetAnimation* HintFlash; // 0x278(0x08)
	struct UWidgetAnimation* ShowHint; // 0x280(0x08)
	struct UImage* Image_21; // 0x288(0x08)
	struct UImage* Image_524; // 0x290(0x08)
	struct UTextBlock* PageNumber; // 0x298(0x08)
	struct UPBWidgetSwitcher* PagesSwitcher; // 0x2a0(0x08)
	struct UTextBlock* Text_PlayerID; // 0x2a8(0x08)
	struct UTextBlock* TextID; // 0x2b0(0x08)
	struct UTextBlock* TotalPages; // 0x2b8(0x08)
	struct UTextBlock* Ver; // 0x2c0(0x08)
	struct TArray<struct UTextBlock*> TextWidgets; // 0x2c8(0x10)
	int32_t PageIndex; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FTimerHandle TimerRight; // 0x2e0(0x08)
	struct FTimerHandle TimerLeft; // 0x2e8(0x08)

	void OnInitialized(); // Function UMG_WaterMark.UMG_WaterMark_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SteamCheckID(); // Function UMG_WaterMark.UMG_WaterMark_C.SteamCheckID // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HintShow(); // Function UMG_WaterMark.UMG_WaterMark_C.HintShow // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HintHide(); // Function UMG_WaterMark.UMG_WaterMark_C.HintHide // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NavRight(); // Function UMG_WaterMark.UMG_WaterMark_C.NavRight // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NavLeft(); // Function UMG_WaterMark.UMG_WaterMark_C.NavLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayHintHighlight(); // Function UMG_WaterMark.UMG_WaterMark_C.PlayHintHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopHintHighlight(); // Function UMG_WaterMark.UMG_WaterMark_C.StopHintHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PingPongHint(); // Function UMG_WaterMark.UMG_WaterMark_C.PingPongHint // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_WaterMark(int32_t EntryPoint); // Function UMG_WaterMark.UMG_WaterMark_C.ExecuteUbergraph_UMG_WaterMark // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

