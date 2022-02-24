// WidgetBlueprintGeneratedClass UMG_ProfilePageBase.UMG_ProfilePageBase_C
// Size: 0x319 (Inherited: 0x2a8)
struct UUMG_ProfilePageBase_C : UUMG_PageBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UPBWidgetSwitcher* ContentSwitcher; // 0x2b0(0x08)
	struct UScaleBox* CrewPannel; // 0x2b8(0x08)
	struct UImage* Image_3; // 0x2c0(0x08)
	struct UImage* Image_110; // 0x2c8(0x08)
	struct UTextBlock* SquadName1; // 0x2d0(0x08)
	struct UTextBlock* SquadName2; // 0x2d8(0x08)
	struct UUMG_Missions_C* UMG_Missions; // 0x2e0(0x08)
	struct UUMG_Profile_Button_C* UMG_Profile_Button_Crew; // 0x2e8(0x08)
	struct UUMG_Profile_Button_C* UMG_Profile_Button_Planning; // 0x2f0(0x08)
	struct UUMG_ProfileRole_C* UMG_ProfilePage_ProfilePhoto; // 0x2f8(0x08)
	struct UUMG_ProfileRole_C* UMG_ProfilePage_ProfilePhoto_2; // 0x300(0x08)
	struct UUMG_ProfileRole_C* UMG_ProfilePage_ProfilePhoto_3; // 0x308(0x08)
	struct UUMG_SquadShortInfoInAssignment_C* UMG_SquadShortInfoInAssignment; // 0x310(0x08)
	bool Should_Elipse_ESC_For_Sub_Menu; // 0x318(0x01)

	void HideSubBtnDisplay(bool Btn1_Fold, bool Btn2_Fold, bool Btn3_Fold); // Function UMG_ProfilePageBase.UMG_ProfilePageBase_C.HideSubBtnDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_ProfilePageBase.UMG_ProfilePageBase_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ProfilePageBase_UMG_ProfilePage_ProfilePhoto_K2Node_ComponentBoundEvent_0_BtnClicked__DelegateSignature(); // Function UMG_ProfilePageBase.UMG_ProfilePageBase_C.BndEvt__UMG_ProfilePageBase_UMG_ProfilePage_ProfilePhoto_K2Node_ComponentBoundEvent_0_BtnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ProfilePageBase_UMG_ProfilePage_ProfilePhoto_1_K2Node_ComponentBoundEvent_1_BtnClicked__DelegateSignature(); // Function UMG_ProfilePageBase.UMG_ProfilePageBase_C.BndEvt__UMG_ProfilePageBase_UMG_ProfilePage_ProfilePhoto_1_K2Node_ComponentBoundEvent_1_BtnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ProfilePageBase_UMG_ProfilePage_ProfilePhoto_2_K2Node_ComponentBoundEvent_2_BtnClicked__DelegateSignature(); // Function UMG_ProfilePageBase.UMG_ProfilePageBase_C.BndEvt__UMG_ProfilePageBase_UMG_ProfilePage_ProfilePhoto_2_K2Node_ComponentBoundEvent_2_BtnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_ProfilePageBase.UMG_ProfilePageBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ProfilePageBase_UMG_Profile_Button_Planning_K2Node_ComponentBoundEvent_3_Btn_Clicked__DelegateSignature(); // Function UMG_ProfilePageBase.UMG_ProfilePageBase_C.BndEvt__UMG_ProfilePageBase_UMG_Profile_Button_Planning_K2Node_ComponentBoundEvent_3_Btn_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ProfilePageBase_UMG_Profile_Button_Crew_K2Node_ComponentBoundEvent_5_Btn_Clicked__DelegateSignature(); // Function UMG_ProfilePageBase.UMG_ProfilePageBase_C.BndEvt__UMG_ProfilePageBase_UMG_Profile_Button_Crew_K2Node_ComponentBoundEvent_5_Btn_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ProfilePageBase_UMG_Profile_Button_Planning_K2Node_ComponentBoundEvent_6_Btn_Hovered__DelegateSignature(); // Function UMG_ProfilePageBase.UMG_ProfilePageBase_C.BndEvt__UMG_ProfilePageBase_UMG_Profile_Button_Planning_K2Node_ComponentBoundEvent_6_Btn_Hovered__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ProfilePageBase_UMG_Profile_Button_Crew_K2Node_ComponentBoundEvent_7_Btn_Hovered__DelegateSignature(); // Function UMG_ProfilePageBase.UMG_ProfilePageBase_C.BndEvt__UMG_ProfilePageBase_UMG_Profile_Button_Crew_K2Node_ComponentBoundEvent_7_Btn_Hovered__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ProfilePageBase(int32_t EntryPoint); // Function UMG_ProfilePageBase.UMG_ProfilePageBase_C.ExecuteUbergraph_UMG_ProfilePageBase // (Final|UbergraphFunction) // @ game+0x1556ec0
};

