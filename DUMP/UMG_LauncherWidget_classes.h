// WidgetBlueprintGeneratedClass UMG_LauncherWidget.UMG_LauncherWidget_C
// Size: 0x2f8 (Inherited: 0x290)
struct UUMG_LauncherWidget_C : UPBLauncherWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* RightTacOpen; // 0x298(0x08)
	struct UWidgetAnimation* LeftTacOpen; // 0x2a0(0x08)
	struct UUMG_InGameHUD_ICON_C* UMG_InGameHUD_ICON; // 0x2a8(0x08)
	struct FText LauncherName; // 0x2b0(0x18)
	struct TSoftObjectPtr<struct UTexture2D> LauncherIcon; // 0x2c8(0x28)
	struct FTimerHandle TimerUpdateCoolDownPercent; // 0x2f0(0x08)

	void GetRemainCountPercent(float OutPercent); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.GetRemainCountPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void InterruptUpdateCoolDownPercent(); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.InterruptUpdateCoolDownPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateCoolDownPercent(); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.UpdateCoolDownPercent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopUpdateCoolDownPercent(); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.StopUpdateCoolDownPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitWidgetInfo(); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.InitWidgetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct UWidgetAnimation* GetOpeningAnim(); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.GetOpeningAnim // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void K2_UpdateMagazine(); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.K2_UpdateMagazine // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_Reloading(); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.K2_Reloading // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterruptReloading(); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.K2_InterruptReloading // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ASingleAmmoReloaded(); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.K2_ASingleAmmoReloaded // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ClipReloaded(); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.K2_ClipReloaded // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_LauncherWidget(int32_t EntryPoint); // Function UMG_LauncherWidget.UMG_LauncherWidget_C.ExecuteUbergraph_UMG_LauncherWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

