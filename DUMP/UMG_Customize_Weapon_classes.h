// WidgetBlueprintGeneratedClass UMG_Customize_Weapon.UMG_Customize_Weapon_C
// Size: 0x350 (Inherited: 0x2e0)
struct UUMG_Customize_Weapon_C : UUMG_Customize_ItemButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct FPBItem_UI UI; // 0x2e8(0x48)
	struct UUMG_Widget_Customize_PanelBase_C* SkinPanelWidget; // 0x330(0x08)
	struct TArray<enum class EPBPartSlotType> PartSlotMapping; // 0x338(0x10)
	struct UUMG_Widget_Customize_PanelBase_C* OrnamentsPanelWidget; // 0x348(0x08)

	void ReverseHightLight_Internal(); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.ReverseHightLight_Internal // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterNextLevel(); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.EnterNextLevel // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh(); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(bool bHandled); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.SetCustomFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnEdit(); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.OnEdit // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetSlotType(enum class EPBSlotType SlotType); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.GetSlotType // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetRoleID(struct FName RoleId); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.GetRoleID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetItemID(struct FName ItemId); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.GetItemID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetNextLevelWidgets(struct TArray<struct UUMG_Customize_Base_C*> OutWidget); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.GetNextLevelWidgets // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnServerEquipItemComplete2(int32_t ErrorCode); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.OnServerEquipItemComplete2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_Weapon(int32_t EntryPoint); // Function UMG_Customize_Weapon.UMG_Customize_Weapon_C.ExecuteUbergraph_UMG_Customize_Weapon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

