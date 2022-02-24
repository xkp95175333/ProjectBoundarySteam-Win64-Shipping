// WidgetBlueprintGeneratedClass UMG_FriendOptions.UMG_FriendOptions_C
// Size: 0x3d8 (Inherited: 0x268)
struct UUMG_FriendOptions_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UButton* Anti_FocusLost; // 0x270(0x08)
	struct UBottomTipsBar_C* BottomTipsBar; // 0x278(0x08)
	struct UUMG_FriendOptionButton_C* Button_AddToFriend_2; // 0x280(0x08)
	struct UUMG_FriendOptionButton_C* Button_AddToFriend_3; // 0x288(0x08)
	struct UUMG_FriendOptionButton_C* Button_Block; // 0x290(0x08)
	struct UUMG_FriendOptionButton_C* Button_ChangedLeaderTo_2; // 0x298(0x08)
	struct UUMG_FriendOptionButton_C* Button_Chat; // 0x2a0(0x08)
	struct UUMG_FriendOptionButton_C* Button_Delete; // 0x2a8(0x08)
	struct UUMG_FriendOptionButton_C* Button_Invite; // 0x2b0(0x08)
	struct UUMG_FriendOptionButton_C* Button_Invite_3; // 0x2b8(0x08)
	struct UUMG_FriendOptionButton_C* Button_Kick_2; // 0x2c0(0x08)
	struct UUMG_FriendOptionButton_C* Button_Profile; // 0x2c8(0x08)
	struct UUMG_FriendOptionButton_C* Button_Profile_2; // 0x2d0(0x08)
	struct UUMG_FriendOptionButton_C* Button_Profile_3; // 0x2d8(0x08)
	struct UTextBlock* CanInviteState; // 0x2e0(0x08)
	struct UUMG_Card_Friend_PlayerCard_Large_C* Card_Friend_PlayerCard_Large; // 0x2e8(0x08)
	struct UVerticalBox* FriendOps; // 0x2f0(0x08)
	struct UImage* Image_Avatar; // 0x2f8(0x08)
	struct UWidgetSwitcher* Operations; // 0x300(0x08)
	struct UVerticalBox* StrangerOps; // 0x308(0x08)
	struct UVerticalBox* TeamMateOps; // 0x310(0x08)
	struct UUI_MenuTitle_C* UI_MenuTitle_172; // 0x318(0x08)
	struct FPBOnlineUserInfo OnlineUserInfo; // 0x320(0x60)
	enum class EPBPlayerStatus CardStatus; // 0x380(0x01)
	bool bHasAnyfocus; // 0x381(0x01)
	char pad_382[0x6]; // 0x382(0x06)
	struct UUMG_FriendPanel_C* UpperWidget; // 0x388(0x08)
	struct FPBSinglePlayerInfo PlayerInfo; // 0x390(0x48)

	void SetDefaultFocus(); // Function UMG_FriendOptions.UMG_FriendOptions_C.SetDefaultFocus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HiddenWidget(); // Function UMG_FriendOptions.UMG_FriendOptions_C.HiddenWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowWidget(); // Function UMG_FriendOptions.UMG_FriendOptions_C.ShowWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HandleOnSendInviteComplete(enum class EInviteResult InviteResult, struct FBPUniqueID Invitee, struct FString InviteeName); // Function UMG_FriendOptions.UMG_FriendOptions_C.HandleOnSendInviteComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAvatarImageObtain(struct UTexture2D* AvatarImage); // Function UMG_FriendOptions.UMG_FriendOptions_C.OnAvatarImageObtain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Info(struct FPBSinglePlayerInfo InPlayerInfo, struct UTexture2D* InAvatarImage, enum class EPBPlayerStatus CardStatus); // Function UMG_FriendOptions.UMG_FriendOptions_C.Set Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_FriendOptions.UMG_FriendOptions_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_Profile_2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptions.UMG_FriendOptions_C.BndEvt__Button_Profile_2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_Profile_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptions.UMG_FriendOptions_C.BndEvt__Button_Profile_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_Profile_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptions.UMG_FriendOptions_C.BndEvt__Button_Profile_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_Invite_2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptions.UMG_FriendOptions_C.BndEvt__Button_Invite_2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_Invite_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptions.UMG_FriendOptions_C.BndEvt__Button_Invite_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_ChangedLeaderTo_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptions.UMG_FriendOptions_C.BndEvt__Button_ChangedLeaderTo_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_AddToFriend_2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptions.UMG_FriendOptions_C.BndEvt__Button_AddToFriend_2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_AddToFriend_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptions.UMG_FriendOptions_C.BndEvt__Button_AddToFriend_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void AddToFriendStart(int32_t InLocalUserNum, bool bWasSuccessful, struct FString ListName, struct FString ErrorStr); // Function UMG_FriendOptions.UMG_FriendOptions_C.AddToFriendStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_Kick_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptions.UMG_FriendOptions_C.BndEvt__Button_Kick_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BPOnCheckCanInviteComplete(enum class ECanInviteState CanInviteStrangeState); // Function UMG_FriendOptions.UMG_FriendOptions_C.BPOnCheckCanInviteComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ProfileUIClosed(); // Function UMG_FriendOptions.UMG_FriendOptions_C.ProfileUIClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_ShowCanInivteState(enum class ECanInviteState CanInvite, bool bShow); // Function UMG_FriendOptions.UMG_FriendOptions_C.Designer_ShowCanInivteState // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_FriendOptions.UMG_FriendOptions_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnTeamInfoChanged(struct TArray<struct FTeamMemberInfo> TeamMember, struct TArray<struct FPBOnlineUserInfo> InviteList); // Function UMG_FriendOptions.UMG_FriendOptions_C.OnTeamInfoChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_FriendOptions.UMG_FriendOptions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_FriendOptions_Button_Chat_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptions.UMG_FriendOptions_C.BndEvt__UMG_FriendOptions_Button_Chat_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_FriendOptions_Button_Delete_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptions.UMG_FriendOptions_C.BndEvt__UMG_FriendOptions_Button_Delete_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_FriendOptions(int32_t EntryPoint); // Function UMG_FriendOptions.UMG_FriendOptions_C.ExecuteUbergraph_UMG_FriendOptions // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

