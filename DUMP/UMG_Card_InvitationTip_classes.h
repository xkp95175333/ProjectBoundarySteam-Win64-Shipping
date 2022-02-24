// WidgetBlueprintGeneratedClass UMG_Card_InvitationTip.UMG_Card_InvitationTip_C
// Size: 0x600 (Inherited: 0x460)
struct UUMG_Card_InvitationTip_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* FocusOn; // 0x468(0x08)
	struct UPBInputTipsImage* AcceptButtonTips; // 0x470(0x08)
	struct UImage* blackBG; // 0x478(0x08)
	struct UImage* blackBG_2; // 0x480(0x08)
	struct UImage* BlackShadow; // 0x488(0x08)
	struct UImage* Image_Avatar; // 0x490(0x08)
	struct UTextBlock* InviteText; // 0x498(0x08)
	struct UButton* JoinButton; // 0x4a0(0x08)
	struct UTextBlock* PlayerName; // 0x4a8(0x08)
	struct UProgressBar* ProgressBar; // 0x4b0(0x08)
	struct UPBInputTipsImage* RefuseButtonTips; // 0x4b8(0x08)
	struct UButton* RejectButton; // 0x4c0(0x08)
	struct UHorizontalBox* Tips; // 0x4c8(0x08)
	float MaxWaitTime; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct FPBInvitation MyInvitation; // 0x4d8(0xf8)
	struct FMulticastInlineDelegate OnReplyAtInvitation; // 0x5d0(0x10)
	struct FMulticastInlineDelegate OnInvitationTimeOut; // 0x5e0(0x10)
	struct FTimerHandle TH_TimeOut; // 0x5f0(0x08)
	struct UUMG_WaitingTips_C* JoiningWidget; // 0x5f8(0x08)

	void Timeout(); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.Timeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAvatarObtain(struct UTexture2D* AvatarImage); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.OnAvatarObtain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(struct FPBInvitation invitation); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_RefreshTime(float LeftSec, float TotalSec); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.Designer_RefreshTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InputConfirm(); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.InputConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InputCancel(); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.InputCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnReplyOnInvitationComplete(int64_t TeamID, bool JoinSuccess); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.OnReplyOnInvitationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__RejectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.BndEvt__RejectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Card_InvitationTip(int32_t EntryPoint); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.ExecuteUbergraph_UMG_Card_InvitationTip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnInvitationTimeOut__DelegateSignature(struct UUMG_Card_InvitationTip_C* TimeOutInvitationWidget); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.OnInvitationTimeOut__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnReplyAtInvitation__DelegateSignature(bool yes); // Function UMG_Card_InvitationTip.UMG_Card_InvitationTip_C.OnReplyAtInvitation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

