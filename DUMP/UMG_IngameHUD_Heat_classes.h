// WidgetBlueprintGeneratedClass UMG_IngameHUD_Heat.UMG_IngameHUD_Heat_C
// Size: 0x2d4 (Inherited: 0x268)
struct UUMG_IngameHUD_Heat_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* circle; // 0x270(0x08)
	struct UBorder* TintBorder; // 0x278(0x08)
	struct UUMG_InGameHUD_Mother_C* ParientHUD; // 0x280(0x08)
	float WeaponHeatPercent; // 0x288(0x04)
	float MaxHeat; // 0x28c(0x04)
	float BackPackHeatPercent; // 0x290(0x04)
	float FinalHeatPercent; // 0x294(0x04)
	struct FLinearColor LowTempColor; // 0x298(0x10)
	struct FLinearColor MaxTempColor; // 0x2a8(0x10)
	float MaxOringeHeatPercent; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UMaterialInstanceDynamic* CirclePtr; // 0x2c0(0x08)
	struct UCurveFloat* HeatCurve; // 0x2c8(0x08)
	float MapSize; // 0x2d0(0x04)

	void SetHeatCircleSize(); // Function UMG_IngameHUD_Heat.UMG_IngameHUD_Heat_C.SetHeatCircleSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetBarColor(); // Function UMG_IngameHUD_Heat.UMG_IngameHUD_Heat_C.SetBarColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetBigestHeat(); // Function UMG_IngameHUD_Heat.UMG_IngameHUD_Heat_C.GetBigestHeat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* Parient); // Function UMG_IngameHUD_Heat.UMG_IngameHUD_Heat_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_IngameHUD_Heat.UMG_IngameHUD_Heat_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_IngameHUD_Heat(int32_t EntryPoint); // Function UMG_IngameHUD_Heat.UMG_IngameHUD_Heat_C.ExecuteUbergraph_UMG_IngameHUD_Heat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

