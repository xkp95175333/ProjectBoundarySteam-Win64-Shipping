// WidgetBlueprintGeneratedClass UMG_RoleComponent.UMG_RoleComponent_C
// Size: 0x318 (Inherited: 0x2b8)
struct UUMG_RoleComponent_C : UPBRoleComponentBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x2c0(0x08)
	struct UImage* Band; // 0x2c8(0x08)
	struct UButton* btn; // 0x2d0(0x08)
	struct UBorder* ComponentBorder; // 0x2d8(0x08)
	struct UTextBlock* ComponentText; // 0x2e0(0x08)
	struct UTextBlock* CurrentEquipedText; // 0x2e8(0x08)
	struct UImage* Image_357; // 0x2f0(0x08)
	struct FMulticastInlineDelegate Hovered; // 0x2f8(0x10)
	struct FMulticastInlineDelegate Unhovered; // 0x308(0x10)

	void HandleGradeColor(enum class EPBItemGradeType Index); // Function UMG_RoleComponent.UMG_RoleComponent_C.HandleGradeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Get Equipment(); // Function UMG_RoleComponent.UMG_RoleComponent_C.Get Equipment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_RoleComponent_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_RoleComponent.UMG_RoleComponent_C.BndEvt__UMG_RoleComponent_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_RoleComponent.UMG_RoleComponent_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_RoleComponent.UMG_RoleComponent_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_RoleComponentBase_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_RoleComponent.UMG_RoleComponent_C.BndEvt__UMG_RoleComponentBase_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void K2_SetComponentName(); // Function UMG_RoleComponent.UMG_RoleComponent_C.K2_SetComponentName // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_RoleComponent_btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_RoleComponent.UMG_RoleComponent_C.BndEvt__UMG_RoleComponent_btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_RoleComponent(int32_t EntryPoint); // Function UMG_RoleComponent.UMG_RoleComponent_C.ExecuteUbergraph_UMG_RoleComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Unhovered__DelegateSignature(); // Function UMG_RoleComponent.UMG_RoleComponent_C.Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Hovered__DelegateSignature(); // Function UMG_RoleComponent.UMG_RoleComponent_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

