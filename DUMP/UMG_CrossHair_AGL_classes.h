// WidgetBlueprintGeneratedClass UMG_CrossHair_AGL.UMG_CrossHair_AGL_C
// Size: 0x398 (Inherited: 0x2d0)
struct UUMG_CrossHair_AGL_C : UUMG_Launcher_CrossHair_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* LandDistanceLeftToRight; // 0x2d8(0x08)
	struct UWidgetAnimation* LandDistanceRightToLeft; // 0x2e0(0x08)
	struct UHorizontalBox* AmmoClip; // 0x2e8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2f0(0x08)
	struct UCanvasPanel* CanvasPanel_54; // 0x2f8(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x300(0x08)
	struct UImage* Image_1; // 0x308(0x08)
	struct UImage* Image_10; // 0x310(0x08)
	struct UImage* Image_19; // 0x318(0x08)
	struct UImage* Image_145; // 0x320(0x08)
	struct UImage* Image_323; // 0x328(0x08)
	struct UImage* Image_NoAmmo; // 0x330(0x08)
	struct UImage* Img_Circle_2; // 0x338(0x08)
	struct UImage* Img_Cross; // 0x340(0x08)
	struct UProgressBar* ProgressBar_443; // 0x348(0x08)
	struct UProgressBar* Reload; // 0x350(0x08)
	struct UScaleBox* ScaleBox_167; // 0x358(0x08)
	struct UVerticalBox* Ver_NoAmmo; // 0x360(0x08)
	struct UUMG_Launcher_LauncherLandDistance_C* WBP_Launcher_LauncherLandDistance; // 0x368(0x08)
	struct TArray<struct UUMG_CrossHair_AmmoCount_C*> AllAmmo; // 0x370(0x10)
	bool Reloading; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	float ReloadingTime; // 0x384(0x04)
	bool PlayedAnimation; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UMaterialInstanceDynamic* SpreadCircleMid; // 0x390(0x08)

	void DefaultLauncherSetting(); // Function UMG_CrossHair_AGL.UMG_CrossHair_AGL_C.DefaultLauncherSetting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RightLauncherSetting(); // Function UMG_CrossHair_AGL.UMG_CrossHair_AGL_C.RightLauncherSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void LeftLauncherSetting(); // Function UMG_CrossHair_AGL.UMG_CrossHair_AGL_C.LeftLauncherSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	float GetLauncherAmmoPercentage(); // Function UMG_CrossHair_AGL.UMG_CrossHair_AGL_C.GetLauncherAmmoPercentage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Construct(); // Function UMG_CrossHair_AGL.UMG_CrossHair_AGL_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NoAmmo(bool bNoAmmo); // Function UMG_CrossHair_AGL.UMG_CrossHair_AGL_C.NoAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_CrossHair_AGL.UMG_CrossHair_AGL_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void UseAmmo(); // Function UMG_CrossHair_AGL.UMG_CrossHair_AGL_C.UseAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReloadLauncher(); // Function UMG_CrossHair_AGL.UMG_CrossHair_AGL_C.ReloadLauncher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_OnTankSkillActive(); // Function UMG_CrossHair_AGL.UMG_CrossHair_AGL_C.CustomEvent_OnTankSkillActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_CrossHair_AGL(int32_t EntryPoint); // Function UMG_CrossHair_AGL.UMG_CrossHair_AGL_C.ExecuteUbergraph_UMG_CrossHair_AGL // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

