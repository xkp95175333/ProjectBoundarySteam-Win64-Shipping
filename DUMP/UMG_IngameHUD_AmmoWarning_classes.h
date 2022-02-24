// WidgetBlueprintGeneratedClass UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C
// Size: 0x346 (Inherited: 0x268)
struct UUMG_IngameHUD_AmmoWarning_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* NoAmmoWarrningAnimation; // 0x270(0x08)
	struct UBorder* Border_1; // 0x278(0x08)
	struct UImage* Image_107; // 0x280(0x08)
	struct UImage* Image_243; // 0x288(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x290(0x08)
	struct UOverlay* Overlay_1; // 0x298(0x08)
	struct UTextBlock* Tex_AmmoWarring; // 0x2a0(0x08)
	struct UUMG_InGameHUD_Mother_C* ParientHUD; // 0x2a8(0x08)
	struct APBWeapon* CurrentWeaponPtr; // 0x2b0(0x08)
	int32_t AmmoPerClip; // 0x2b8(0x04)
	int32_t CurrentAmmoInCilp; // 0x2bc(0x04)
	enum class Enum_HUD_AmmoWarningState E_HUD_AmmoState; // 0x2c0(0x01)
	enum class Enum_HUD_AmmoWarningState E_HUD_AmmoState_Temp; // 0x2c1(0x01)
	char pad_2C2[0x2]; // 0x2c2(0x02)
	struct FLinearColor ReloadColor; // 0x2c4(0x10)
	struct FLinearColor NoAmmoColor; // 0x2d4(0x10)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FText ReloadWarrningText; // 0x2e8(0x18)
	struct FText NoAmmoWarrningText; // 0x300(0x18)
	struct UWidgetAnimation* NoAmmoWarrningAnimation_1; // 0x318(0x08)
	struct FLinearColor BorderReloadColor; // 0x320(0x10)
	struct FLinearColor BorderNoAmmoColor; // 0x330(0x10)
	int32_t TotalAmmo; // 0x340(0x04)
	enum class EPBHandsState CurrentHandState; // 0x344(0x01)
	enum class EPBHandsState CurrentHandState_Temp; // 0x345(0x01)

	void OnLowAmmo(); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.OnLowAmmo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnNoAmmo(); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.OnNoAmmo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAmmoNeedReload(); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.OnAmmoNeedReload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAmmoSafe(); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.OnAmmoSafe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAmmoStateChanged(); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.OnAmmoStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void JudgeIfAmmoStateChanged(); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.JudgeIfAmmoStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CalCurrentAmmoState(); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.CalCurrentAmmoState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* Parient); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CE_CurrentWeaponChanged(struct APBWeapon* InWeapon); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.CE_CurrentWeaponChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_IngameHUD_AmmoWarning(int32_t EntryPoint); // Function UMG_IngameHUD_AmmoWarning.UMG_IngameHUD_AmmoWarning_C.ExecuteUbergraph_UMG_IngameHUD_AmmoWarning // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

