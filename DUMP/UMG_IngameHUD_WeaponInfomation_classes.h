// WidgetBlueprintGeneratedClass UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C
// Size: 0x318 (Inherited: 0x270)
struct UUMG_IngameHUD_WeaponInfomation_C : UPBWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UImage* Image_BG; // 0x278(0x08)
	struct UImage* Img_Weapon; // 0x280(0x08)
	struct UTextBlock* Tex_AmmoType; // 0x288(0x08)
	struct UTextBlock* Tex_ShootType; // 0x290(0x08)
	struct UUMG_InGameHUD_WeaponInfo_AmmoCount_C* WBP_InGameHUD_WeaponInfo_AmmoCount; // 0x298(0x08)
	struct UUMG_IngameHUD_WeaponInfo_WeaponName_C* WBP_IngameHUD_WeaponInfo_WeaponName_Main; // 0x2a0(0x08)
	struct UUMG_IngameHUD_WeaponInfo_WeaponName_C* WBP_IngameHUD_WeaponInfo_WeaponName_Sub; // 0x2a8(0x08)
	struct UUMG_InGameHUD_Mother_C* ParientHUD; // 0x2b0(0x08)
	struct APBWeapon* MainWeapon; // 0x2b8(0x08)
	struct APBWeapon* SecWeapon; // 0x2c0(0x08)
	struct TMap<struct UDamageType*, struct FStruct_UI_IngameHUD_AmmoTypeTEXandColor> DamageTypeTextMap; // 0x2c8(0x50)

	void RefreshWeaponArray(); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.RefreshWeaponArray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetAmmoTypeTex(struct APBWeapon* InputPin); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.SetAmmoTypeTex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshCurrentWeaponIcon(struct APBWeapon* InWeapon); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.RefreshCurrentWeaponIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnWeaponChanged(); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.OnWeaponChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitWeaponIconFail(); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.OnInitWeaponIconFail // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitWeaponIcon(); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.InitWeaponIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CE_Client_NotifyOnCurrentWeaponChanged(struct APBWeapon* InWeapon); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.CE_Client_NotifyOnCurrentWeaponChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomClineEventNotify_OnInventoryChanged(struct TArray<struct APBWeapon*> InWeaponArray); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.CustomClineEventNotify_OnInventoryChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* Parient); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_InitFromPBCharacter(); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.CustomEvent_InitFromPBCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_IngameHUD_WeaponInfomation(int32_t EntryPoint); // Function UMG_IngameHUD_WeaponInfomation.UMG_IngameHUD_WeaponInfomation_C.ExecuteUbergraph_UMG_IngameHUD_WeaponInfomation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

