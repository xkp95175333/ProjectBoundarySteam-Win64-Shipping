// WidgetBlueprintGeneratedClass GameEffect_TimeBarSwitcher.GameEffect_TimeBarSwitcher_C
// Size: 0x281 (Inherited: 0x260)
struct UGameEffect_TimeBarSwitcher_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UGameEffect_TimeBar_Normal_C* TimeBar_Normal; // 0x268(0x08)
	struct UGameEffect_TimeBar_Overtime_C* TimeBar_Overtime; // 0x270(0x08)
	struct UWidgetSwitcher* TimeBarSwitcher; // 0x278(0x08)
	bool IsRounding; // 0x280(0x01)

	void NotifyRoundStart(); // Function GameEffect_TimeBarSwitcher.GameEffect_TimeBarSwitcher_C.NotifyRoundStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnMatchRoundEnd(struct FName InGameModeName, enum class EPBGameResult InGameResult); // Function GameEffect_TimeBarSwitcher.GameEffect_TimeBarSwitcher_C.OnMatchRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function GameEffect_TimeBarSwitcher.GameEffect_TimeBarSwitcher_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function GameEffect_TimeBarSwitcher.GameEffect_TimeBarSwitcher_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GameEffect_TimeBarSwitcher(int32_t EntryPoint); // Function GameEffect_TimeBarSwitcher.GameEffect_TimeBarSwitcher_C.ExecuteUbergraph_GameEffect_TimeBarSwitcher // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

