// WidgetBlueprintGeneratedClass UMG_Widget_Bottom_Friends.UMG_Widget_Bottom_Friends_C
// Size: 0x2b0 (Inherited: 0x268)
struct UUMG_Widget_Bottom_Friends_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UButton* FriendButton; // 0x270(0x08)
	struct UImage* Image_72; // 0x278(0x08)
	struct UImage* Image_170; // 0x280(0x08)
	struct UCanvasPanel* LockedBoard; // 0x288(0x08)
	struct UUMG_BottomTeamList_C* UMG_BottomTeamList; // 0x290(0x08)
	struct FMulticastInlineDelegate OnFriendButtonClicked; // 0x298(0x10)
	struct UMainMenu_V2_C* MainMenuWidget; // 0x2a8(0x08)

	void Construct(); // Function UMG_Widget_Bottom_Friends.UMG_Widget_Bottom_Friends_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__FriendButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function UMG_Widget_Bottom_Friends.UMG_Widget_Bottom_Friends_C.BndEvt__FriendButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Bottom_Friends(int32_t EntryPoint); // Function UMG_Widget_Bottom_Friends.UMG_Widget_Bottom_Friends_C.ExecuteUbergraph_UMG_Widget_Bottom_Friends // (Final|UbergraphFunction) // @ game+0x1556ec0
	void OnFriendButtonClicked__DelegateSignature(); // Function UMG_Widget_Bottom_Friends.UMG_Widget_Bottom_Friends_C.OnFriendButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

