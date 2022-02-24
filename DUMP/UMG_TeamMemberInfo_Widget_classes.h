// WidgetBlueprintGeneratedClass UMG_TeamMemberInfo_Widget.UMG_TeamMemberInfo_Widget_C
// Size: 0x288 (Inherited: 0x268)
struct UUMG_TeamMemberInfo_Widget_C : UPBSinglePlayerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUMG_PlayerInfoTips_Widget_C* UMG_PlayerInfoTips_Widget; // 0x270(0x08)
	struct FMulticastInlineDelegate OnShowPlayerDetails; // 0x278(0x10)

	void SetDefaultFocus(); // Function UMG_TeamMemberInfo_Widget.UMG_TeamMemberInfo_Widget_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_RefreshTextInfo(struct FPBSinglePlayerInfo InPlayerInfo); // Function UMG_TeamMemberInfo_Widget.UMG_TeamMemberInfo_Widget_C.K2_RefreshTextInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void K2_RefreshAvatarImage(struct UTexture2D* InAvatarImage); // Function UMG_TeamMemberInfo_Widget.UMG_TeamMemberInfo_Widget_C.K2_RefreshAvatarImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_PlayerInfoTips_Widget_K2Node_ComponentBoundEvent_5_OnShowPlayerDetails__DelegateSignature(struct FPBSinglePlayerInfo PlayerInfo, struct UTexture2D* AvatarImage, enum class EPBPlayerStatus PlayerStatus); // Function UMG_TeamMemberInfo_Widget.UMG_TeamMemberInfo_Widget_C.BndEvt__UMG_PlayerInfoTips_Widget_K2Node_ComponentBoundEvent_5_OnShowPlayerDetails__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_TeamMemberInfo_Widget(int32_t EntryPoint); // Function UMG_TeamMemberInfo_Widget.UMG_TeamMemberInfo_Widget_C.ExecuteUbergraph_UMG_TeamMemberInfo_Widget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnShowPlayerDetails__DelegateSignature(struct FPBSinglePlayerInfo PlayerInfo, struct UTexture2D* AvatarImage, enum class EPBPlayerStatus PlayerStatus); // Function UMG_TeamMemberInfo_Widget.UMG_TeamMemberInfo_Widget_C.OnShowPlayerDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

