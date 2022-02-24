// WidgetBlueprintGeneratedClass UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C
// Size: 0x371 (Inherited: 0x2f8)
struct UUMG_MemberDetailedInfo_C : UPBMemberInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UWidgetAnimation* FocusOn_Card; // 0x300(0x08)
	struct USizeBox* AvatarIcon; // 0x308(0x08)
	struct UButton* btn; // 0x310(0x08)
	struct UProgressBar* EXP_Progress; // 0x318(0x08)
	struct UImage* Image_Avatar; // 0x320(0x08)
	struct UTextBlock* LevelText; // 0x328(0x08)
	struct UTextBlock* LevelText_2; // 0x330(0x08)
	struct UTextBlock* LevelText_3; // 0x338(0x08)
	struct UOverlay* LoadingBoard; // 0x340(0x08)
	struct UImage* MemberBGImage; // 0x348(0x08)
	struct UTextBlock* Num; // 0x350(0x08)
	struct UScrollText_C* ScrollText; // 0x358(0x08)
	struct UTextBlock* Text_PlayerID; // 0x360(0x08)
	struct UUMG_UnlockPoints_C* UMG_UnlockPoints; // 0x368(0x08)
	bool ShowAvatarIcon; // 0x370(0x01)

	void Get Role Id By Name(enum class EPBRoleName RoleName, struct FName RoleId); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.Get Role Id By Name // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Get User Profile Data(struct FName RoleId, struct FName DataKey, float Value); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.Get User Profile Data // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh All Role Level(); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.Refresh All Role Level // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh Id(); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.Refresh Id // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh Avatar Image(struct UTexture2D* AvatarImage); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.Refresh Avatar Image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh Avatar(struct FPBOnlineUserInfo OnlineUserInfo); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.Refresh Avatar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh Info(); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.Refresh Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetMemberInfo(); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.K2_SetMemberInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MemberDetailedInfo_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.BndEvt__UMG_MemberDetailedInfo_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MemberDetailedInfo_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.BndEvt__UMG_MemberDetailedInfo_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_MemberDetailedInfo(int32_t EntryPoint); // Function UMG_MemberDetailedInfo.UMG_MemberDetailedInfo_C.ExecuteUbergraph_UMG_MemberDetailedInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

