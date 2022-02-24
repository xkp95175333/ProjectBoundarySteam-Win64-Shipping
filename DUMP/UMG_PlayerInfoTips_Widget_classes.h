// WidgetBlueprintGeneratedClass UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C
// Size: 0x4a0 (Inherited: 0x268)
struct UUMG_PlayerInfoTips_Widget_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FocusOn; // 0x270(0x08)
	struct UImage* blackBG; // 0x278(0x08)
	struct UImage* Color; // 0x280(0x08)
	struct UOverlay* IconBoard; // 0x288(0x08)
	struct UImage* IconImage; // 0x290(0x08)
	struct UImage* Image_Level; // 0x298(0x08)
	struct UHorizontalBox* InfoBoard; // 0x2a0(0x08)
	struct UOverlay* LeaderBox; // 0x2a8(0x08)
	struct UOverlay* Level; // 0x2b0(0x08)
	struct UImage* LoadingImage; // 0x2b8(0x08)
	struct UButton* MainButton; // 0x2c0(0x08)
	struct UScrollText_C* Scroll_Name; // 0x2c8(0x08)
	struct UScrollText_C* Scroll_Status; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_level; // 0x2d8(0x08)
	enum class EPBPlayerStatus CardStatus; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct UMaterialInstanceDynamic* DynamicBG; // 0x2e8(0x08)
	struct FSlateColor OfflineColor; // 0x2f0(0x28)
	struct FSlateColor OnlineColor; // 0x318(0x28)
	struct TMap<int32_t, struct FSlateColor> PlayerColor; // 0x340(0x50)
	struct FText RecentlyPlayedTime; // 0x390(0x18)
	bool IsRecentlyPlayer; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct FText LastPlayTime; // 0x3b0(0x18)
	struct FPBOnlineUserInfo OnlineUserInfo; // 0x3c8(0x60)
	struct FMulticastInlineDelegate OnShowPlayerDetails; // 0x428(0x10)
	struct FText StatusText; // 0x438(0x18)
	struct FPBSinglePlayerInfo PlayeInfo; // 0x450(0x48)
	struct UTexture2D* AvatarImage; // 0x498(0x08)

	void SetDefaultFocus(); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshAvatarImage(struct UTexture2D* InAvatarImage); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.RefreshAvatarImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshTextInfo(struct FPBSinglePlayerInfo InPlayerInfo); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.RefreshTextInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnAvatarSetFromNet(struct UTexture2D* AvatarImage); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.Designer_OnAvatarSetFromNet // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetIsTeamLeader(bool bIsTeamLeader); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.Designer_SetIsTeamLeader // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetIsInTeamList(bool InTeamList); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.Designer_SetIsInTeamList // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetLevel(int32_t Level); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.Designer_SetLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnFocus(bool new focus); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.Designer_OnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BP_OnEntryReleased(); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetOnlineStatue(struct FText InText); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.Designer_SetOnlineStatue // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetName(struct FText DisplayName); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.Designer_SetName // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetStatue(enum class EPBPlayerStatus CardStatus); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.Designer_SetStatue // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_PlayerInfoTips_Widget(int32_t EntryPoint); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.ExecuteUbergraph_UMG_PlayerInfoTips_Widget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnShowPlayerDetails__DelegateSignature(struct FPBSinglePlayerInfo PlayerInfo, struct UTexture2D* AvatarImage, enum class EPBPlayerStatus PlayerStatus); // Function UMG_PlayerInfoTips_Widget.UMG_PlayerInfoTips_Widget_C.OnShowPlayerDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

