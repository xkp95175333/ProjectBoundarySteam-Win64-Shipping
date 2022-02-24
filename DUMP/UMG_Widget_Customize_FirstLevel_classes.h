// WidgetBlueprintGeneratedClass UMG_Widget_Customize_FirstLevel.UMG_Widget_Customize_FirstLevel_C
// Size: 0x2e0 (Inherited: 0x289)
struct UUMG_Widget_Customize_FirstLevel_C : UUMG_Widget_Customize_PanelBase_C {
	char pad_289[0x7]; // 0x289(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UUMG_Customize_FirstLevel_C* FirstLevel_ActiveMode; // 0x298(0x08)
	struct UUMG_Customize_FirstLevel_C* FirstLevel_CharacterSkin; // 0x2a0(0x08)
	struct UUMG_Customize_FirstLevel_Weapon_C* FirstLevel_FirstWeapon; // 0x2a8(0x08)
	struct UUMG_Customize_FirstLevel_C* FirstLevel_LeftPylon; // 0x2b0(0x08)
	struct UUMG_Customize_FirstLevel_C* FirstLevel_MeleeWeapon; // 0x2b8(0x08)
	struct UUMG_Customize_FirstLevel_C* FirstLevel_RightPylon; // 0x2c0(0x08)
	struct UUMG_Customize_FirstLevel_Weapon_C* FirstLevel_SecWeapon; // 0x2c8(0x08)
	struct TArray<struct UUMG_Customize_Base_C*> WidgetButtonArray; // 0x2d0(0x10)

	void InitPanel(struct TArray<struct UUMG_Customize_Base_C*> InWidgets, struct FText Title, struct UUMG_Customize_Base_C* Entry); // Function UMG_Widget_Customize_FirstLevel.UMG_Widget_Customize_FirstLevel_C.InitPanel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function UMG_Widget_Customize_FirstLevel.UMG_Widget_Customize_FirstLevel_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct UWidget* DoCustomNavigation_1(enum class EUINavigation Navigation); // Function UMG_Widget_Customize_FirstLevel.UMG_Widget_Customize_FirstLevel_C.DoCustomNavigation_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetWidgets(struct TArray<struct UUMG_Customize_Base_C*> OutWidgets); // Function UMG_Widget_Customize_FirstLevel.UMG_Widget_Customize_FirstLevel_C.GetWidgets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Widget_Customize_FirstLevel.UMG_Widget_Customize_FirstLevel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Customize_FirstLevel(int32_t EntryPoint); // Function UMG_Widget_Customize_FirstLevel.UMG_Widget_Customize_FirstLevel_C.ExecuteUbergraph_UMG_Widget_Customize_FirstLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

