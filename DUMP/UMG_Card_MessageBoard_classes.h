// WidgetBlueprintGeneratedClass UMG_Card_MessageBoard.UMG_Card_MessageBoard_C
// Size: 0x470 (Inherited: 0x460)
struct UUMG_Card_MessageBoard_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UVerticalBox* MessageList; // 0x468(0x08)

	void ClearAllInvitation(); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.ClearAllInvitation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusAtFirstInvitation(); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.FocusAtFirstInvitation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnReplyAtInvitation(bool yes); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.OnReplyAtInvitation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InvitattionWidgetTimeOut(struct UUMG_Card_InvitationTip_C* TimeOutInvitationWidget); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.InvitattionWidgetTimeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MessageWidgetTimeOut(struct UUMG_MessageTips_C* TimeOutWidget); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.MessageWidgetTimeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnTeamMessageShowUp(struct FString UserName, enum class ETeamMessageType InOperation); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.OnTeamMessageShowUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void InputConfirmInvite(); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.InputConfirmInvite // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InputRefuseInvite(); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.InputRefuseInvite // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInviteShowUp(struct FPBInvitation invitation); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.OnInviteShowUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Card_MessageBoard(int32_t EntryPoint); // Function UMG_Card_MessageBoard.UMG_Card_MessageBoard_C.ExecuteUbergraph_UMG_Card_MessageBoard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

