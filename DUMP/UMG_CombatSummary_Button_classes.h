// WidgetBlueprintGeneratedClass UMG_CombatSummary_Button.UMG_CombatSummary_Button_C
// Size: 0x308 (Inherited: 0x268)
struct UUMG_CombatSummary_Button_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FocusOn; // 0x270(0x08)
	struct UImage* BackImage; // 0x278(0x08)
	struct UImage* FoucsBG; // 0x280(0x08)
	struct UImage* Icon; // 0x288(0x08)
	struct UButton* MainButton; // 0x290(0x08)
	struct UTextBlock* Name; // 0x298(0x08)
	struct FName ID; // 0x2a0(0x08)
	struct UUMG_CombatSummary_Main_C* OwnerWidget; // 0x2a8(0x08)
	enum class EPB_CombatSummaryType_BP CombatSummaryType; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct TMap<struct FName, struct FText> ModeNames; // 0x2b8(0x50)

	void SetCustomFocus(); // Function UMG_CombatSummary_Button.UMG_CombatSummary_Button_C.SetCustomFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetModeButtonInfo(); // Function UMG_CombatSummary_Button.UMG_CombatSummary_Button_C.SetModeButtonInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetWeaponButtonInfo(); // Function UMG_CombatSummary_Button.UMG_CombatSummary_Button_C.SetWeaponButtonInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetRoleButtonInfo(); // Function UMG_CombatSummary_Button.UMG_CombatSummary_Button_C.SetRoleButtonInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(struct FName InID, struct UUMG_CombatSummary_Main_C* InOwnerWidget, enum class EPB_CombatSummaryType_BP InType); // Function UMG_CombatSummary_Button.UMG_CombatSummary_Button_C.SetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_CombatSummary_Button.UMG_CombatSummary_Button_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_CombatSummary_Button.UMG_CombatSummary_Button_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_CombatSummary_Button.UMG_CombatSummary_Button_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_CombatSummary_Button(int32_t EntryPoint); // Function UMG_CombatSummary_Button.UMG_CombatSummary_Button_C.ExecuteUbergraph_UMG_CombatSummary_Button // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

