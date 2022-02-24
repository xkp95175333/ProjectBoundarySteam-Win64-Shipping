// WidgetBlueprintGeneratedClass UMG_InGameHUD_BrakingModuleICON.UMG_InGameHUD_BrakingModuleICON_C
// Size: 0x2a8 (Inherited: 0x268)
struct UUMG_InGameHUD_BrakingModuleICON_C : UPBBrakingModuleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUMG_InGameHUD_ICON_C* UMG_InGameHUD_ICON; // 0x270(0x08)
	struct UUMG_InGameHUD_Mother_C* Parient_HUD; // 0x278(0x08)
	struct UTexture2D* IMG_IconImage; // 0x280(0x08)
	struct FText MobilitiName; // 0x288(0x18)
	struct FTimerHandle UpdateCooldownPercentTimer; // 0x2a0(0x08)

	void StopCooldownTimer(); // Function UMG_InGameHUD_BrakingModuleICON.UMG_InGameHUD_BrakingModuleICON_C.StopCooldownTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartCooldownTimer(); // Function UMG_InGameHUD_BrakingModuleICON.UMG_InGameHUD_BrakingModuleICON_C.StartCooldownTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateCoolDownPercent(); // Function UMG_InGameHUD_BrakingModuleICON.UMG_InGameHUD_BrakingModuleICON_C.UpdateCoolDownPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_Equiped(); // Function UMG_InGameHUD_BrakingModuleICON.UMG_InGameHUD_BrakingModuleICON_C.K2_Equiped // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* ParientWidget); // Function UMG_InGameHUD_BrakingModuleICON.UMG_InGameHUD_BrakingModuleICON_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_InGameHUD_BrakingModuleICON.UMG_InGameHUD_BrakingModuleICON_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_Activate(); // Function UMG_InGameHUD_BrakingModuleICON.UMG_InGameHUD_BrakingModuleICON_C.K2_Activate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deactivate(); // Function UMG_InGameHUD_BrakingModuleICON.UMG_InGameHUD_BrakingModuleICON_C.K2_Deactivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_BrakingModuleICON(int32_t EntryPoint); // Function UMG_InGameHUD_BrakingModuleICON.UMG_InGameHUD_BrakingModuleICON_C.ExecuteUbergraph_UMG_InGameHUD_BrakingModuleICON // (Final|UbergraphFunction) // @ game+0x1556ec0
};

