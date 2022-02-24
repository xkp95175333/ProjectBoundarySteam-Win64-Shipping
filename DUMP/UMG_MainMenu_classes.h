// WidgetBlueprintGeneratedClass UMG_MainMenu.UMG_MainMenu_C
// Size: 0x310 (Inherited: 0x2a8)
struct UUMG_MainMenu_C : UUMG_PageBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* ShowUnlock; // 0x2b0(0x08)
	struct UUMG_MainMenuPlayCard_C* Armory; // 0x2b8(0x08)
	struct UUMG_MainMenuPlayCard_C* Assignment; // 0x2c0(0x08)
	struct UOverlay* Background; // 0x2c8(0x08)
	struct UImage* BGImage1; // 0x2d0(0x08)
	struct UImage* BGImage2; // 0x2d8(0x08)
	struct UCard_Info_C* News; // 0x2e0(0x08)
	struct UUMG_MainMenuPlayCard_C* Report; // 0x2e8(0x08)
	struct UUMG_MainMenuPlayCard_C* Store; // 0x2f0(0x08)
	struct UUMG_MainMenuPlayCard_C* Store_2; // 0x2f8(0x08)
	struct UUMG_NewUnLockedItems_C* UMG_NewUnLockedItems; // 0x300(0x08)
	struct UUMG_SquadShortInfoInMainMenu_C* UMG_SquadShortInfoInMainMenu; // 0x308(0x08)

	void ShowMainMenuLevel(); // Function UMG_MainMenu.UMG_MainMenu_C.ShowMainMenuLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_MainMenu.UMG_MainMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_MainMenu.UMG_MainMenu_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void VisiblityChange(enum class ESlateVisibility InVisibility); // Function UMG_MainMenu.UMG_MainMenu_C.VisiblityChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void LoadAssetsCompleteEvent(); // Function UMG_MainMenu.UMG_MainMenu_C.LoadAssetsCompleteEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MainMenu_UMG_NewUnLockedItems_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature(); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__UMG_MainMenu_UMG_NewUnLockedItems_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_MainMenu(int32_t EntryPoint); // Function UMG_MainMenu.UMG_MainMenu_C.ExecuteUbergraph_UMG_MainMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

