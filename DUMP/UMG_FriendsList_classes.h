// WidgetBlueprintGeneratedClass UMG_FriendsList.UMG_FriendsList_C
// Size: 0x298 (Inherited: 0x280)
struct UUMG_FriendsList_C : UPBFriendsListWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UUI_MenuTitle_Small_C* FriendsTitle; // 0x288(0x08)
	struct UUMG_FriendPanel_C* OwnerWidget; // 0x290(0x08)

	void OnShowPlayerDetails(struct FPBSinglePlayerInfo PlayerInfo, struct UTexture2D* AvatarImage, enum class EPBPlayerStatus PlayerStatus); // Function UMG_FriendsList.UMG_FriendsList_C.OnShowPlayerDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BindEventForChirdren(); // Function UMG_FriendsList.UMG_FriendsList_C.BindEventForChirdren // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function UMG_FriendsList.UMG_FriendsList_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetFriendsListTitle(bool IsHaveCountBox, int32_t Numer, int32_t Denomin); // Function UMG_FriendsList.UMG_FriendsList_C.SetFriendsListTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetFriendsListTitleInfo(bool bInHasCountBox, int32_t InOnlineNum, int32_t InFriendsNum); // Function UMG_FriendsList.UMG_FriendsList_C.K2_SetFriendsListTitleInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnInvitableButtonClicked(); // Function UMG_FriendsList.UMG_FriendsList_C.K2_OnInvitableButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_FriendsList(int32_t EntryPoint); // Function UMG_FriendsList.UMG_FriendsList_C.ExecuteUbergraph_UMG_FriendsList // (Final|UbergraphFunction) // @ game+0x1556ec0
};

