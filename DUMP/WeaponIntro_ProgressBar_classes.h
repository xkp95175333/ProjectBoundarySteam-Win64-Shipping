// WidgetBlueprintGeneratedClass WeaponIntro_ProgressBar.WeaponIntro_ProgressBar_C
// Size: 0x360 (Inherited: 0x268)
struct UWeaponIntro_ProgressBar_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Arrow_Down; // 0x270(0x08)
	struct UImage* Arrow_Up; // 0x278(0x08)
	struct UWidgetSwitcher* ArrowBoard; // 0x280(0x08)
	struct UProgressBar* CurrentBar; // 0x288(0x08)
	struct UImage* Image_174; // 0x290(0x08)
	struct UTextBlock* PercentNumber; // 0x298(0x08)
	struct UProgressBar* TargetBarDown; // 0x2a0(0x08)
	struct UProgressBar* TargetBarUp; // 0x2a8(0x08)
	struct UTextBlock* WeaponIntro_OptionName; // 0x2b0(0x08)
	float CurrentBarPercent; // 0x2b8(0x04)
	float CurrentBarProgress; // 0x2bc(0x04)
	float TargetBarPercent; // 0x2c0(0x04)
	float TargetBarProgress; // 0x2c4(0x04)
	struct FSlateColor White_Slate; // 0x2c8(0x28)
	struct FSlateColor Red_Slate; // 0x2f0(0x28)
	struct FSlateColor Green_Slate; // 0x318(0x28)
	bool IsEqual; // 0x340(0x01)
	bool IsDown; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct FText Weapon Property Name; // 0x348(0x18)

	void PreConstruct(bool IsDesignTime); // Function WeaponIntro_ProgressBar.WeaponIntro_ProgressBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WeaponIntro_ProgressBar.WeaponIntro_ProgressBar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(float OriginPercentValue, float NewPercentValue, float ActualValue); // Function WeaponIntro_ProgressBar.WeaponIntro_ProgressBar_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_WeaponIntro_ProgressBar(int32_t EntryPoint); // Function WeaponIntro_ProgressBar.WeaponIntro_ProgressBar_C.ExecuteUbergraph_WeaponIntro_ProgressBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

