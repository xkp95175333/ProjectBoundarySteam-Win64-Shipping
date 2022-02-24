// WidgetBlueprintGeneratedClass UMG_ModifyList.UMG_ModifyList_C
// Size: 0x380 (Inherited: 0x2a8)
struct UUMG_ModifyList_C : UPBComponentListWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* FocusOnRight; // 0x2b0(0x08)
	struct UWidgetAnimation* Flash; // 0x2b8(0x08)
	struct UWidgetAnimation* FocusOnLeft; // 0x2c0(0x08)
	struct UBorder* ComponentBorder; // 0x2c8(0x08)
	struct UBorder* ComponentBorder_2; // 0x2d0(0x08)
	struct UButton* ComponentBtn; // 0x2d8(0x08)
	struct UPBScrollBox* Components_ScrollBox; // 0x2e0(0x08)
	struct UPBWidgetSwitcher* ComponentSwitcher; // 0x2e8(0x08)
	struct UTextBlock* ComponentTitle; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image_357; // 0x300(0x08)
	struct UButton* SkinBtn; // 0x308(0x08)
	struct UOverlay* SkinModify; // 0x310(0x08)
	struct UPBScrollBox* Skins_ScrollBox; // 0x318(0x08)
	struct UTextBlock* SkinTitle; // 0x320(0x08)
	bool IsFocusOnComponentBtn; // 0x328(0x01)
	bool IsFocusOnSkinBtn; // 0x329(0x01)
	bool IsShowSkinModify; // 0x32a(0x01)
	bool IsShowDelayAnim; // 0x32b(0x01)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct TMap<struct FString, bool> HackMap; // 0x330(0x50)

	void SwitchTab(bool SwitchToSkin); // Function UMG_ModifyList.UMG_ModifyList_C.SwitchTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CreateVehcileSkinWidget(); // Function UMG_ModifyList.UMG_ModifyList_C.CreateVehcileSkinWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddChildToVBoxAndFlushPadding(struct UPBScrollBox* ScrollBox, struct UWidget* Child); // Function UMG_ModifyList.UMG_ModifyList_C.AddChildToVBoxAndFlushPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Create Character Skin Widgets(); // Function UMG_ModifyList.UMG_ModifyList_C.Create Character Skin Widgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CreateWeaponBlueprintWidgets(); // Function UMG_ModifyList.UMG_ModifyList_C.CreateWeaponBlueprintWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Create Weapon Part Model Widgets(); // Function UMG_ModifyList.UMG_ModifyList_C.Create Weapon Part Model Widgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CreateWeaponPartSkinWidgets(); // Function UMG_ModifyList.UMG_ModifyList_C.CreateWeaponPartSkinWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CreateWeaponPartWidgets(); // Function UMG_ModifyList.UMG_ModifyList_C.CreateWeaponPartWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Create Item Widgets(); // Function UMG_ModifyList.UMG_ModifyList_C.Create Item Widgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetComponentList(); // Function UMG_ModifyList.UMG_ModifyList_C.K2_SetComponentList // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ModifyList_ComponentBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ModifyList.UMG_ModifyList_C.BndEvt__UMG_ModifyList_ComponentBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ModifyList_SkinBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ModifyList.UMG_ModifyList_C.BndEvt__UMG_ModifyList_SkinBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ModifyList(int32_t EntryPoint); // Function UMG_ModifyList.UMG_ModifyList_C.ExecuteUbergraph_UMG_ModifyList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

