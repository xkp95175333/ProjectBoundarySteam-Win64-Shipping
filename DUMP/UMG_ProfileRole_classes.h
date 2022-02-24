// WidgetBlueprintGeneratedClass UMG_ProfileRole.UMG_ProfileRole_C
// Size: 0x3c0 (Inherited: 0x2b8)
struct UUMG_ProfileRole_C : UPBRoleSettleEXPWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x2c0(0x08)
	struct UWidgetAnimation* Unfold; // 0x2c8(0x08)
	struct UWidgetAnimation* MainCollapse; // 0x2d0(0x08)
	struct UButton* btn; // 0x2d8(0x08)
	struct UProgressBar* EXP_Progress; // 0x2e0(0x08)
	struct UTextBlock* LevelNum; // 0x2e8(0x08)
	struct UTextBlock* Name; // 0x2f0(0x08)
	struct UImage* RolePhoto; // 0x2f8(0x08)
	struct UScaleBox* ScaleBox_Boder; // 0x300(0x08)
	struct UImage* SignImage; // 0x308(0x08)
	struct FUI_ColorPalettes UI_ColorPalettes; // 0x310(0xa0)
	struct FMulticastInlineDelegate BtnClicked; // 0x3b0(0x10)

	void ShowSideMenu(); // Function UMG_ProfileRole.UMG_ProfileRole_C.ShowSideMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HideMain(); // Function UMG_ProfileRole.UMG_ProfileRole_C.HideMain // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ProfilePage_ProfilePhoto_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ProfileRole.UMG_ProfileRole_C.BndEvt__UMG_ProfilePage_ProfilePhoto_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ProfilePage_ProfilePhoto_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ProfileRole.UMG_ProfileRole_C.BndEvt__UMG_ProfilePage_ProfilePhoto_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ProfilePage_ProfilePhoto_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UMG_ProfileRole.UMG_ProfileRole_C.BndEvt__UMG_ProfilePage_ProfilePhoto_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ShowMain(); // Function UMG_ProfileRole.UMG_ProfileRole_C.ShowMain // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HideSideMenu(); // Function UMG_ProfileRole.UMG_ProfileRole_C.HideSideMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetRoleEXP(); // Function UMG_ProfileRole.UMG_ProfileRole_C.K2_SetRoleEXP // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ProfileRole(int32_t EntryPoint); // Function UMG_ProfileRole.UMG_ProfileRole_C.ExecuteUbergraph_UMG_ProfileRole // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void BtnClicked__DelegateSignature(); // Function UMG_ProfileRole.UMG_ProfileRole_C.BtnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

