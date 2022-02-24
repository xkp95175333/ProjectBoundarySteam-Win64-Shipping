// WidgetBlueprintGeneratedClass UMG_Weapon_Info_ProgressBar.UMG_Weapon_Info_ProgressBar_C
// Size: 0x368 (Inherited: 0x268)
struct UUMG_Weapon_Info_ProgressBar_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Arrow_Down; // 0x270(0x08)
	struct UImage* Arrow_Up; // 0x278(0x08)
	struct UWidgetSwitcher* ArrowBoard; // 0x280(0x08)
	struct UTextBlock* PercentNumber; // 0x288(0x08)
	struct UTextBlock* UnitText; // 0x290(0x08)
	struct UTextBlock* WeaponIntro_StatName; // 0x298(0x08)
	float CurrentBarPercent; // 0x2a0(0x04)
	float CurrentBarProgress; // 0x2a4(0x04)
	float TargetBarPercent; // 0x2a8(0x04)
	float TargetBarProgress; // 0x2ac(0x04)
	struct FSlateColor White_Slate; // 0x2b0(0x28)
	struct FSlateColor Red_Slate; // 0x2d8(0x28)
	struct FSlateColor Green_Slate; // 0x300(0x28)
	bool IsEqual; // 0x328(0x01)
	bool IsDown; // 0x329(0x01)
	char pad_32A[0x6]; // 0x32a(0x06)
	struct FText Weapon Property Name; // 0x330(0x18)
	bool StrongerDir; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	int32_t Maximum Fractional Digits; // 0x34c(0x04)
	struct FText Unit; // 0x350(0x18)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Weapon_Info_ProgressBar.UMG_Weapon_Info_ProgressBar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Weapon_Info_ProgressBar.UMG_Weapon_Info_ProgressBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(float NewValue, float ActualValue); // Function UMG_Weapon_Info_ProgressBar.UMG_Weapon_Info_ProgressBar_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Weapon_Info_ProgressBar(int32_t EntryPoint); // Function UMG_Weapon_Info_ProgressBar.UMG_Weapon_Info_ProgressBar_C.ExecuteUbergraph_UMG_Weapon_Info_ProgressBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

