// WidgetBlueprintGeneratedClass UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C
// Size: 0x2e4 (Inherited: 0x268)
struct UUMG_IngameHUD_WeaponInfo_WeaponName_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* Border_Tint; // 0x270(0x08)
	struct UImage* Img_BG; // 0x278(0x08)
	struct UPBInputTipsImage* Img_OperationInst; // 0x280(0x08)
	struct UTextBlock* Tex_WeaponName; // 0x288(0x08)
	struct AActor* WatchWeapon; // 0x290(0x08)
	struct FLinearColor RedColor; // 0x298(0x10)
	struct FLinearColor OrangeColor; // 0x2a8(0x10)
	struct FLinearColor GreenColor; // 0x2b8(0x10)
	struct APBWeapon* CurrentWeapon; // 0x2c8(0x08)
	float DeactiveOpacity; // 0x2d0(0x04)
	float ActiveOpacity; // 0x2d4(0x04)
	struct UUMG_IngameHUD_WeaponInfomation_C* WeaponInfoWidget; // 0x2d8(0x08)
	float WeaponInitCheckTime; // 0x2e0(0x04)

	void RefreshCurrentWeaponPtr(); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.RefreshCurrentWeaponPtr // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetParrientWidgetPtr(struct UUMG_IngameHUD_WeaponInfomation_C* InWeaponInfoHUD); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.SetParrientWidgetPtr // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetActiveImage(); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.SetActiveImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetCurrentAmmoAndSetColor(); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.GetCurrentAmmoAndSetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetWeaponPtr(struct AActor* WatchWeapon); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.SetWeaponPtr // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Op Inst(struct FName NewInputName); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.Set Op Inst // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetWeaponName(struct FText InText); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.SetWeaponName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CE_OnAmmoChanged(int32_t OutCurrentAmmo, int32_t OutCurrentAmmoInClip); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.CE_OnAmmoChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CE_CurrentWeaponChanged(struct APBWeapon* InWeapon); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.CE_CurrentWeaponChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_IngameHUD_WeaponInfo_WeaponName(int32_t EntryPoint); // Function UMG_IngameHUD_WeaponInfo_WeaponName.UMG_IngameHUD_WeaponInfo_WeaponName_C.ExecuteUbergraph_UMG_IngameHUD_WeaponInfo_WeaponName // (Final|UbergraphFunction) // @ game+0x1556ec0
};

