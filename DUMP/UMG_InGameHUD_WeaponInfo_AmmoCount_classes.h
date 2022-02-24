// WidgetBlueprintGeneratedClass UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C
// Size: 0x490 (Inherited: 0x270)
struct UUMG_InGameHUD_WeaponInfo_AmmoCount_C : UPBWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UScaleBox* ScaleBox_819; // 0x278(0x08)
	struct UTextBlock* Tex_CurrentAmmoInClip; // 0x280(0x08)
	struct UTextBlock* Tex_CurrentAmmoInClip_2; // 0x288(0x08)
	struct UTextBlock* Tex_CurrentAmmoInClip_3; // 0x290(0x08)
	struct UTextBlock* Tex_CurrentRemainAmmo; // 0x298(0x08)
	struct UTextBlock* Tex_CurrentRemainAmmo_2; // 0x2a0(0x08)
	struct UTextBlock* Tex_CurrentRemainAmmo_3; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_141; // 0x2b0(0x08)
	struct UUMG_InGameHUD_Mother_C* ParientHUD; // 0x2b8(0x08)
	struct AActor* CurrnetWeaponPtr; // 0x2c0(0x08)
	struct APBCharacter* PBCharacterPtr; // 0x2c8(0x08)
	struct TArray<struct AActor*> WeaponArrayTemp; // 0x2d0(0x10)
	int32_t CurrentAmmoTemp; // 0x2e0(0x04)
	int32_t CurrentAmmoInClipTemp; // 0x2e4(0x04)
	struct FSlateColor AmmoGrayColor; // 0x2e8(0x28)
	struct FSlateColor AmmoSafeColor; // 0x310(0x28)
	struct FSlateColor AmmoWaringColor; // 0x338(0x28)
	struct FSlateColor AmmoCriticalWaringColor; // 0x360(0x28)
	struct FSlateColor RemainAmmoSafeColor; // 0x388(0x28)
	struct FSlateColor RemainAmmoGrayColor; // 0x3b0(0x28)
	bool UseingSheild; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	struct FLinearColor ActiveWeaponTexColor; // 0x3dc(0x10)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct APBLauncher* RightLauncher; // 0x3f0(0x08)
	struct APBLauncher* LeftLauncher; // 0x3f8(0x08)
	struct FLinearColor  MainWeaponBorderColor; // 0x400(0x10)
	struct FLinearColor SubWeaponBorderColor; // 0x410(0x10)
	struct FLinearColor MainWeaponTextColor; // 0x420(0x10)
	struct FLinearColor SubWeaponTextColor; // 0x430(0x10)
	struct FSlateColor RemainAmmoWaringColor; // 0x440(0x28)
	struct FSlateColor RemainAmmoCriticalWaringColor; // 0x468(0x28)

	void OnAmmoChangedRefreshCurrentWeaponAmmo(); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.OnAmmoChangedRefreshCurrentWeaponAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void JudgeIfWeaponArrayChanged(struct TArray<struct AActor*> ArrayA); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.JudgeIfWeaponArrayChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetAmmoPosictionTextAndColor(int32_t Ammo, int32_t StartIndex, struct UTextBlock* Target, bool SetRemain?); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.SetAmmoPosictionTextAndColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckOnAmmoChanged(); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.CheckOnAmmoChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshCurrentAmmoText(); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.RefreshCurrentAmmoText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAmmoChanged(); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.OnAmmoChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshMainAndSecWeaponText(); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.RefreshMainAndSecWeaponText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* Parient); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CE_ClinetCurrentAmmoChangerd(int32_t OutCurrentAmmo, int32_t OutCurrentAmmoInClip); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.CE_ClinetCurrentAmmoChangerd // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CE_CurrentWeaponChanged(struct APBWeapon* InWeapon); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.CE_CurrentWeaponChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CE_OnWeaponArrayChanged(struct TArray<struct APBWeapon*> InWeaponArray); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.CE_OnWeaponArrayChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_WeaponInfo_AmmoCount(int32_t EntryPoint); // Function UMG_InGameHUD_WeaponInfo_AmmoCount.UMG_InGameHUD_WeaponInfo_AmmoCount_C.ExecuteUbergraph_UMG_InGameHUD_WeaponInfo_AmmoCount // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

