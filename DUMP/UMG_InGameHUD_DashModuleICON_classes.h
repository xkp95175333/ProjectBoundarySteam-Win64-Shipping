// WidgetBlueprintGeneratedClass UMG_InGameHUD_DashModuleICON.UMG_InGameHUD_DashModuleICON_C
// Size: 0x2a8 (Inherited: 0x268)
struct UUMG_InGameHUD_DashModuleICON_C : UPBDashModuleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUMG_InGameHUD_ICON_C* UMG_InGameHUD_ICON; // 0x270(0x08)
	struct UUMG_InGameHUD_Mother_C* Parient_HUD; // 0x278(0x08)
	struct UTexture2D* IMG_IconImage; // 0x280(0x08)
	struct FText MobilitiName; // 0x288(0x18)
	struct FTimerHandle UpdateCooldownPercentTimer; // 0x2a0(0x08)

	void StopCooldownTimer(); // Function UMG_InGameHUD_DashModuleICON.UMG_InGameHUD_DashModuleICON_C.StopCooldownTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Get Current Count(int32_t CurrentUseTimes); // Function UMG_InGameHUD_DashModuleICON.UMG_InGameHUD_DashModuleICON_C.Get Current Count // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void StartCooldownTimer(); // Function UMG_InGameHUD_DashModuleICON.UMG_InGameHUD_DashModuleICON_C.StartCooldownTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateCoolDownPercent(); // Function UMG_InGameHUD_DashModuleICON.UMG_InGameHUD_DashModuleICON_C.UpdateCoolDownPercent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* ParientWidget); // Function UMG_InGameHUD_DashModuleICON.UMG_InGameHUD_DashModuleICON_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_InGameHUD_DashModuleICON.UMG_InGameHUD_DashModuleICON_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_MinusUseTimes(); // Function UMG_InGameHUD_DashModuleICON.UMG_InGameHUD_DashModuleICON_C.K2_MinusUseTimes // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_RestoreUseTimes(); // Function UMG_InGameHUD_DashModuleICON.UMG_InGameHUD_DashModuleICON_C.K2_RestoreUseTimes // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Equiped(); // Function UMG_InGameHUD_DashModuleICON.UMG_InGameHUD_DashModuleICON_C.K2_Equiped // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_DashModuleICON(int32_t EntryPoint); // Function UMG_InGameHUD_DashModuleICON.UMG_InGameHUD_DashModuleICON_C.ExecuteUbergraph_UMG_InGameHUD_DashModuleICON // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

