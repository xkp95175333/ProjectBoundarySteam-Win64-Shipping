// WidgetBlueprintGeneratedClass UMG_InGameHUD_Health.UMG_InGameHUD_Health_C
// Size: 0x2b0 (Inherited: 0x270)
struct UUMG_InGameHUD_Health_C : UPBWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* Hide; // 0x278(0x08)
	struct UProgressBar* ProgressBar_Health; // 0x280(0x08)
	struct UProgressBar* ProgressBar_Red; // 0x288(0x08)
	struct UUMG_InGameHUD_Mother_C* ParientHUD; // 0x290(0x08)
	float CurrentAirPressure; // 0x298(0x04)
	float CurrentAirThigtness; // 0x29c(0x04)
	float ChunckSize; // 0x2a0(0x04)
	float OverallHealth; // 0x2a4(0x04)
	float CurrentHealth; // 0x2a8(0x04)
	float CurrentHealthPercentInterped; // 0x2ac(0x04)

	void GetHealthInfo(); // Function UMG_InGameHUD_Health.UMG_InGameHUD_Health_C.GetHealthInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetBarShieldLine(struct UProgressBar* InBarPtr); // Function UMG_InGameHUD_Health.UMG_InGameHUD_Health_C.SetBarShieldLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateBarPerform(); // Function UMG_InGameHUD_Health.UMG_InGameHUD_Health_C.UpdateBarPerform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_InGameHUD_Health.UMG_InGameHUD_Health_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* Parient); // Function UMG_InGameHUD_Health.UMG_InGameHUD_Health_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_Health(int32_t EntryPoint); // Function UMG_InGameHUD_Health.UMG_InGameHUD_Health_C.ExecuteUbergraph_UMG_InGameHUD_Health // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

