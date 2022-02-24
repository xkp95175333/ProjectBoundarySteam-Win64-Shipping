// WidgetBlueprintGeneratedClass UMG_Customize_General.UMG_Customize_General_C
// Size: 0x330 (Inherited: 0x2e0)
struct UUMG_Customize_General_C : UUMG_Customize_ItemButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct FPBItem_UI UI; // 0x2e8(0x48)

	void Refresh(); // Function UMG_Customize_General.UMG_Customize_General_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(bool bHandled); // Function UMG_Customize_General.UMG_Customize_General_C.SetCustomFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnEdit(); // Function UMG_Customize_General.UMG_Customize_General_C.OnEdit // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetSlotType(enum class EPBSlotType SlotType); // Function UMG_Customize_General.UMG_Customize_General_C.GetSlotType // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetRoleID(struct FName RoleId); // Function UMG_Customize_General.UMG_Customize_General_C.GetRoleID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetItemID(struct FName ItemId); // Function UMG_Customize_General.UMG_Customize_General_C.GetItemID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetNextLevelWidgets(struct TArray<struct UUMG_Customize_Base_C*> OutWidget); // Function UMG_Customize_General.UMG_Customize_General_C.GetNextLevelWidgets // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Customize_General.UMG_Customize_General_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_General.UMG_Customize_General_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_General(int32_t EntryPoint); // Function UMG_Customize_General.UMG_Customize_General_C.ExecuteUbergraph_UMG_Customize_General // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

