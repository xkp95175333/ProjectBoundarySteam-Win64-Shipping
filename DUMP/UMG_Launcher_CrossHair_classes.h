// WidgetBlueprintGeneratedClass UMG_Launcher_CrossHair.UMG_Launcher_CrossHair_C
// Size: 0x2d0 (Inherited: 0x290)
struct UUMG_Launcher_CrossHair_C : UPBLauncherWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct FVector2D MovementOffset; // 0x298(0x08)
	float RotationOffsetScale; // 0x2a0(0x04)
	float InterpSpeed; // 0x2a4(0x04)
	struct FVector TraceLocation; // 0x2a8(0x0c)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FText LauncherDistance_Text; // 0x2b8(0x18)

	void SetRenderTrans(struct UWidget* Target); // Function UMG_Launcher_CrossHair.UMG_Launcher_CrossHair_C.SetRenderTrans // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AimSightOffset(); // Function UMG_Launcher_CrossHair.UMG_Launcher_CrossHair_C.AimSightOffset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEquippedRadar(); // Function UMG_Launcher_CrossHair.UMG_Launcher_CrossHair_C.NotifyEquippedRadar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UseAmmo(); // Function UMG_Launcher_CrossHair.UMG_Launcher_CrossHair_C.UseAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NoAmmo(bool bNoAmmo); // Function UMG_Launcher_CrossHair.UMG_Launcher_CrossHair_C.NoAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReloadLauncher(); // Function UMG_Launcher_CrossHair.UMG_Launcher_CrossHair_C.ReloadLauncher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Launcher_CrossHair.UMG_Launcher_CrossHair_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_Equiped(); // Function UMG_Launcher_CrossHair.UMG_Launcher_CrossHair_C.K2_Equiped // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Launcher_CrossHair(int32_t EntryPoint); // Function UMG_Launcher_CrossHair.UMG_Launcher_CrossHair_C.ExecuteUbergraph_UMG_Launcher_CrossHair // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

