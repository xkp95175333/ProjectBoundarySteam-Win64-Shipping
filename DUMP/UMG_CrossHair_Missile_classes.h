// WidgetBlueprintGeneratedClass UMG_CrossHair_Missile.UMG_CrossHair_Missile_C
// Size: 0x320 (Inherited: 0x2d0)
struct UUMG_CrossHair_Missile_C : UUMG_Launcher_CrossHair_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2d8(0x08)
	struct UImage* MissileCountImage; // 0x2e0(0x08)
	struct UWidgetSwitcher* ModeSwitcher; // 0x2e8(0x08)
	struct APBVehicle* CurrentVehicle; // 0x2f0(0x08)
	struct APBHomingMissileLauncher* MissileLauncher; // 0x2f8(0x08)
	bool LaserGuidedMode; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct TArray<struct UUMG_Indicator_Character_C*> IndicatorArray; // 0x308(0x10)
	struct UUMG_Indicator_Character_C* Target; // 0x318(0x08)

	void UpdateMissileCount(); // Function UMG_CrossHair_Missile.UMG_CrossHair_Missile_C.UpdateMissileCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_CrossHair_Missile.UMG_CrossHair_Missile_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void UseAmmo(); // Function UMG_CrossHair_Missile.UMG_CrossHair_Missile_C.UseAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEquippedRadar(); // Function UMG_CrossHair_Missile.UMG_CrossHair_Missile_C.NotifyEquippedRadar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function UMG_CrossHair_Missile.UMG_CrossHair_Missile_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_Equiped(); // Function UMG_CrossHair_Missile.UMG_CrossHair_Missile_C.K2_Equiped // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_CrossHair_Missile(int32_t EntryPoint); // Function UMG_CrossHair_Missile.UMG_CrossHair_Missile_C.ExecuteUbergraph_UMG_CrossHair_Missile // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

