// WidgetBlueprintGeneratedClass UMG_MemberInfo.UMG_MemberInfo_C
// Size: 0x449 (Inherited: 0x2f8)
struct UUMG_MemberInfo_C : UPBMemberInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UWidgetAnimation* Other; // 0x300(0x08)
	struct UWidgetAnimation* FocusOn_Foe; // 0x308(0x08)
	struct UWidgetAnimation* Searching; // 0x310(0x08)
	struct UWidgetAnimation* Me; // 0x318(0x08)
	struct UWidgetAnimation* FocusOn; // 0x320(0x08)
	struct UOverlay* AvatarBoard; // 0x328(0x08)
	struct UButton* btn; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image_55; // 0x340(0x08)
	struct UImage* InSquadFlag; // 0x348(0x08)
	struct UUMG_SquadMemberDetailInfo_C* MemberDetailInfo; // 0x350(0x08)
	struct USizeBox* MemberInfo; // 0x358(0x08)
	struct UWidgetSwitcher* MemberInfoSwitcher; // 0x360(0x08)
	struct UImage* MySelfFlag; // 0x368(0x08)
	struct UScrollText_C* ScrollText; // 0x370(0x08)
	struct UUMG_MemberDetailedInfo_C* UMG_MemberDetailedInfo; // 0x378(0x08)
	struct FUI_ColorPalettes UI_ColorPalettes; // 0x380(0xa0)
	bool IsFoe; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FMulticastInlineDelegate Hovered; // 0x428(0x10)
	struct FMulticastInlineDelegate Unhovered; // 0x438(0x10)
	bool CanLitUpTitle_IsFirstInRow; // 0x448(0x01)

	void K2_SetMemberInfo(); // Function UMG_MemberInfo.UMG_MemberInfo_C.K2_SetMemberInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MemberInfo_btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UMG_MemberInfo.UMG_MemberInfo_C.BndEvt__UMG_MemberInfo_btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MemberInfo_btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UMG_MemberInfo.UMG_MemberInfo_C.BndEvt__UMG_MemberInfo_btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ArtPreview(bool ForceIsMe, bool ForceIsSearching); // Function UMG_MemberInfo.UMG_MemberInfo_C.ArtPreview // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_MemberInfo(int32_t EntryPoint); // Function UMG_MemberInfo.UMG_MemberInfo_C.ExecuteUbergraph_UMG_MemberInfo // (Final|UbergraphFunction) // @ game+0x1556ec0
	void Unhovered__DelegateSignature(); // Function UMG_MemberInfo.UMG_MemberInfo_C.Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Hovered__DelegateSignature(); // Function UMG_MemberInfo.UMG_MemberInfo_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

