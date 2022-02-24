// WidgetBlueprintGeneratedClass UMG_CombatSummary_Main.UMG_CombatSummary_Main_C
// Size: 0x448 (Inherited: 0x3d8)
struct UUMG_CombatSummary_Main_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UScrollBox* ScrollList; // 0x3e0(0x08)
	struct UUMG_CombatSummary_Detail_Mode_C* UMG_CombatSummary_Detail_Mode; // 0x3e8(0x08)
	struct UUMG_CombatSummary_Detail_Role_C* UMG_CombatSummary_Detail_Role; // 0x3f0(0x08)
	struct UUMG_CombatSummary_Detail_Weapon_C* UMG_CombatSummary_Detail_Weapon; // 0x3f8(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x400(0x08)
	struct UUMG_Widget_MainTitle_C* UMG_Widget_MainTitle; // 0x408(0x08)
	struct UUMG_Widget_SmallBaseTabSwitcher_C* UMG_Widget_SmallBaseTabSwitcher; // 0x410(0x08)
	struct TArray<struct FName> RoleIDArray; // 0x418(0x10)
	struct TArray<struct FName> WeaponIDArray; // 0x428(0x10)
	struct TArray<struct FName> ModeIDArray; // 0x438(0x10)

	void RefreshDetails(struct FName InID, enum class EPB_CombatSummaryType_BP InType); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.RefreshDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Show Scroll List Info(struct TArray<struct FName> InIDArray, enum class EPB_CombatSummaryType_BP InType); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.Show Scroll List Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Back(); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.Back // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnSwitchToTab(int32_t TabIndex); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.OnSwitchToTab // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnSwitchOutOfTab(int32_t TabInsex); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.OnSwitchOutOfTab // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__PB_SmallBaseTabSwitcher_Replace_K2Node_ComponentBoundEvent_1_OnTabSwitched__DelegateSignature(int32_t InTabIndex, int32_t OutTabIndex); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.BndEvt__PB_SmallBaseTabSwitcher_Replace_K2Node_ComponentBoundEvent_1_OnTabSwitched__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_CombatSummary_Main(int32_t EntryPoint); // Function UMG_CombatSummary_Main.UMG_CombatSummary_Main_C.ExecuteUbergraph_UMG_CombatSummary_Main // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

