// WidgetBlueprintGeneratedClass UMG_TeamList.UMG_TeamList_C
// Size: 0x298 (Inherited: 0x280)
struct UUMG_TeamList_C : UPBTeamListWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UUI_MenuTitle_Small_C* TeamTitle; // 0x288(0x08)
	struct UUMG_FriendPanel_C* OwnerWidget; // 0x290(0x08)

	void OnShowPlayerDetails(struct FPBSinglePlayerInfo PlayerInfo, struct UTexture2D* AvatarImage, enum class EPBPlayerStatus PlayerStatus); // Function UMG_TeamList.UMG_TeamList_C.OnShowPlayerDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BindEventForChildren(); // Function UMG_TeamList.UMG_TeamList_C.BindEventForChildren // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTeamListTitle(bool IsHaveCountBox, int32_t Numer, int32_t Denomin); // Function UMG_TeamList.UMG_TeamList_C.SetTeamListTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function UMG_TeamList.UMG_TeamList_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetTeamListTitleInfo(bool bInHasCountBox, int32_t InTeamMembersNum, int32_t InTeamMaxNum); // Function UMG_TeamList.UMG_TeamList_C.K2_SetTeamListTitleInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_TeamList(int32_t EntryPoint); // Function UMG_TeamList.UMG_TeamList_C.ExecuteUbergraph_UMG_TeamList // (Final|UbergraphFunction) // @ game+0x1556ec0
};

