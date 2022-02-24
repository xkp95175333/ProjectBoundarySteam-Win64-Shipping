// WidgetBlueprintGeneratedClass UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C
// Size: 0x34c (Inherited: 0x270)
struct UUMG_InGameHUD_Mother_C : UPBWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* HideOnADS; // 0x278(0x08)
	struct UWidgetAnimation* EngineShut; // 0x280(0x08)
	struct UBorder* Border_GrapleBorder; // 0x288(0x08)
	struct UBorder* Border_IngameHUD_WarningWidget; // 0x290(0x08)
	struct UBorder* Border_MiniMap; // 0x298(0x08)
	struct UBorder* Border_MobilitiModule; // 0x2a0(0x08)
	struct UBorder* Border_Skill; // 0x2a8(0x08)
	struct UBorder* Border_Tac_Left; // 0x2b0(0x08)
	struct UBorder* Border_Tac_Right; // 0x2b8(0x08)
	struct UBorder* Engine; // 0x2c0(0x08)
	struct UHUD_BeingRescue_C* HUD_BeingRescue; // 0x2c8(0x08)
	struct UImage* Image_107; // 0x2d0(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x2d8(0x08)
	struct UOverlay* Overlay_1; // 0x2e0(0x08)
	struct UUMG_IngameHUD_AllowedClimb_C* UMG_IngameHUD_AllowedClimb; // 0x2e8(0x08)
	struct UUMG_IngameHUD_Climbing_C* UMG_IngameHUD_Climbing; // 0x2f0(0x08)
	struct UUMG_InGameHUD_Coordinates_C* UMG_InGameHUD_Coordinates; // 0x2f8(0x08)
	struct UUMG_InGameHUD_Health_C* UMG_InGameHUD_Health_L; // 0x300(0x08)
	struct UUMG_InGameHUD_Health_C* UMG_InGameHUD_Health_R; // 0x308(0x08)
	struct UUMG_InGameHUD_OperationInstruction_C* UMG_InGameHUD_OperationInstruction; // 0x310(0x08)
	struct UUMG_InGameHUD_SkillActiveState_C* UMG_InGameHUD_SkillActiveState_476; // 0x318(0x08)
	struct UUMG_IngameHUD_WeaponInfomation_C* UMG_IngameHUD_WeaponInfomation; // 0x320(0x08)
	struct UUMG_IngameHUD_AmmoWarning_C* WBP_IngameHUD_AmmoWarning; // 0x328(0x08)
	struct UPBWarningWidget* WarningWidget; // 0x330(0x08)
	struct UPBMiniMapWidget* MiniMapPtr; // 0x338(0x08)
	struct UPBWarningWidget* BackPackWarningWidget; // 0x340(0x08)
	float NewVar_1; // 0x348(0x04)

	void AddBackPackWidget(struct UPBWarningWidget* InWidget); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.AddBackPackWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddMovebilitiWidget(struct UUserWidget* InMovebilitiWidget); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.AddMovebilitiWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddCatchableHintWidget(struct UPBCatchingModuleWidget* InCatchingWidget); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.AddCatchableHintWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddTacWidget(struct UPBLauncherWidget* InLauncherWidget); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.AddTacWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddWarningWidget(struct UPBWarningWidget* InWidget); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.AddWarningWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddMiniMap(struct UPBMiniMapWidget* InMiniMap); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.AddMiniMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddRoleSkillWidget(struct UPBRoleSkillWidget* InRoleSkillPanel); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.AddRoleSkillWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HiddenBeingRescuedTip(); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.HiddenBeingRescuedTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowBeingRescuedTip(); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.ShowBeingRescuedTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FindItemNameFromPBItemDataTable(struct APBWeapon* Target, bool Succeed, struct FText ItemName); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.FindItemNameFromPBItemDataTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void EngineIdle(bool GoIdle); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.EngineIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_InitMobilityIcon(); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.CustomEvent_InitMobilityIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_Mother(int32_t EntryPoint); // Function UMG_InGameHUD_Mother.UMG_InGameHUD_Mother_C.ExecuteUbergraph_UMG_InGameHUD_Mother // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

