// WidgetBlueprintGeneratedClass UMG_Widget_Role.UMG_Widget_Role_C
// Size: 0x340 (Inherited: 0x268)
struct UUMG_Widget_Role_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FocusOn; // 0x270(0x08)
	struct UButton* Button_Role; // 0x278(0x08)
	struct UOverlay* Focus_LightingMask; // 0x280(0x08)
	struct UImage* FocusLine; // 0x288(0x08)
	struct UImage* Image_151; // 0x290(0x08)
	struct UImage* Image_276; // 0x298(0x08)
	struct UImage* Image_Locked; // 0x2a0(0x08)
	struct UImage* Image_RoleIcon; // 0x2a8(0x08)
	struct UOverlay* OnFocused; // 0x2b0(0x08)
	struct UTextBlock* Text_CareerName; // 0x2b8(0x08)
	struct UUMG_Widget_GeneralFocus_C* UMG_Widget_GeneralFocus; // 0x2c0(0x08)
	struct FName RoleId; // 0x2c8(0x08)
	struct FMulticastInlineDelegate ButtonBeenClicked; // 0x2d0(0x10)
	struct FMulticastInlineDelegate ButtonBeenFocused; // 0x2e0(0x10)
	struct FPBRoleSlot_UI RoleSlot_UI; // 0x2f0(0x50)

	void UnlockSuccessfully(bool IsSucceed); // Function UMG_Widget_Role.UMG_Widget_Role_C.UnlockSuccessfully // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function UMG_Widget_Role.UMG_Widget_Role_C.SetCustomFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetLockedStyle(bool IsLocked); // Function UMG_Widget_Role.UMG_Widget_Role_C.SetLockedStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Widget_Role.UMG_Widget_Role_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_Role_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_Role.UMG_Widget_Role_C.BndEvt__Button_Role_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_Role_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Widget_Role.UMG_Widget_Role_C.BndEvt__Button_Role_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Widget_Role.UMG_Widget_Role_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void UnlockComplete(bool bSuccess); // Function UMG_Widget_Role.UMG_Widget_Role_C.UnlockComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Widget_Role.UMG_Widget_Role_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_Widget_Role.UMG_Widget_Role_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UMG_Widget_Role.UMG_Widget_Role_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Role(int32_t EntryPoint); // Function UMG_Widget_Role.UMG_Widget_Role_C.ExecuteUbergraph_UMG_Widget_Role // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void ButtonBeenFocused__DelegateSignature(struct FName RoleId, bool IsLocked); // Function UMG_Widget_Role.UMG_Widget_Role_C.ButtonBeenFocused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ButtonBeenClicked__DelegateSignature(struct FName RoleId); // Function UMG_Widget_Role.UMG_Widget_Role_C.ButtonBeenClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

