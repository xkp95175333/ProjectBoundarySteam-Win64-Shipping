// WidgetBlueprintGeneratedClass UMG_Launcher_LauncherLandDistance.UMG_Launcher_LauncherLandDistance_C
// Size: 0x2e8 (Inherited: 0x2d0)
struct UUMG_Launcher_LauncherLandDistance_C : UUMG_Launcher_CrossHair_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_128; // 0x2d8(0x08)
	struct UUMG_Launcher_CrossHair_C* LauncherHUD; // 0x2e0(0x08)

	struct FText GetDistanceText(); // Function UMG_Launcher_LauncherLandDistance.UMG_Launcher_LauncherLandDistance_C.GetDistanceText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Launcher_LauncherLandDistance.UMG_Launcher_LauncherLandDistance_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Launcher_LauncherLandDistance.UMG_Launcher_LauncherLandDistance_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Launcher_LauncherLandDistance(int32_t EntryPoint); // Function UMG_Launcher_LauncherLandDistance.UMG_Launcher_LauncherLandDistance_C.ExecuteUbergraph_UMG_Launcher_LauncherLandDistance // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

