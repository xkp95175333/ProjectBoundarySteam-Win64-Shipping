// WidgetBlueprintGeneratedClass UMG_FriendOptionButton.UMG_FriendOptionButton_C
// Size: 0x44a (Inherited: 0x3d8)
struct UUMG_FriendOptionButton_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UImage* blackBG; // 0x3e0(0x08)
	struct UImage* BlackShadow; // 0x3e8(0x08)
	struct UTextBlock* ButtonTitle; // 0x3f0(0x08)
	struct UImage* FocusGradient; // 0x3f8(0x08)
	struct UImage* LoadingImage; // 0x400(0x08)
	struct UButton* MainButton; // 0x408(0x08)
	struct USizeBox* SizeBox_4; // 0x410(0x08)
	struct FText ButtonName; // 0x418(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x430(0x10)
	struct FVector2D ButtonSize; // 0x440(0x08)
	bool bCustomEnabled; // 0x448(0x01)
	bool bWaiting; // 0x449(0x01)

	void Construct(); // Function UMG_FriendOptionButton.UMG_FriendOptionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_FriendOptionButton.UMG_FriendOptionButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_FriendOptionButton.UMG_FriendOptionButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function UMG_FriendOptionButton.UMG_FriendOptionButton_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_FriendOptionButton.UMG_FriendOptionButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_FriendOptionButton.UMG_FriendOptionButton_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_FriendOptionButton.UMG_FriendOptionButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomEnbale(bool Enabled); // Function UMG_FriendOptionButton.UMG_FriendOptionButton_C.SetCustomEnbale // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PerformWaiting(bool bWaiting); // Function UMG_FriendOptionButton.UMG_FriendOptionButton_C.PerformWaiting // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_FriendOptionButton(int32_t EntryPoint); // Function UMG_FriendOptionButton.UMG_FriendOptionButton_C.ExecuteUbergraph_UMG_FriendOptionButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnClicked__DelegateSignature(bool bCustomEnabled); // Function UMG_FriendOptionButton.UMG_FriendOptionButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

