// WidgetBlueprintGeneratedClass UMG_BottomTeamList.UMG_BottomTeamList_C
// Size: 0x2a8 (Inherited: 0x268)
struct UUMG_BottomTeamList_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UPBInputTipsImage* Image_ButtonTips; // 0x270(0x08)
	struct UUMG_Card_BottomTeamListIcon_C* Me; // 0x278(0x08)
	struct UUMG_Card_BottomTeamListIcon_C* TeamMember1; // 0x280(0x08)
	struct UUMG_Card_BottomTeamListIcon_C* TeamMember2; // 0x288(0x08)
	struct UUMG_Card_BottomTeamListIcon_C* TeamMember3; // 0x290(0x08)
	struct UUMG_Card_BottomTeamListIcon_C* TeamMember4; // 0x298(0x08)
	struct UTextBlock* Text_FriendNum; // 0x2a0(0x08)

	void TeamMemUpdate(struct TArray<struct FTeamMemberInfo> TeamMember, struct TArray<struct FPBOnlineUserInfo> InviteList); // Function UMG_BottomTeamList.UMG_BottomTeamList_C.TeamMemUpdate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FriendUpdate(struct TArray<struct FPBOnlineUserInfo> FriendList, int32_t OnlineNum); // Function UMG_BottomTeamList.UMG_BottomTeamList_C.FriendUpdate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_BottomTeamList.UMG_BottomTeamList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnLocalPlayerInfoRefresh(struct FPBOnlineUserInfo OnlineUserInfo); // Function UMG_BottomTeamList.UMG_BottomTeamList_C.OnLocalPlayerInfoRefresh // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_BottomTeamList.UMG_BottomTeamList_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_BottomTeamList.UMG_BottomTeamList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_BottomTeamList(int32_t EntryPoint); // Function UMG_BottomTeamList.UMG_BottomTeamList_C.ExecuteUbergraph_UMG_BottomTeamList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

