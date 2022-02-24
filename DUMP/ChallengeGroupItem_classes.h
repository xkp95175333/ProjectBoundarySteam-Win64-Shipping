// WidgetBlueprintGeneratedClass ChallengeGroupItem.ChallengeGroupItem_C
// Size: 0x444 (Inherited: 0x3d8)
struct UChallengeGroupItem_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x3e0(0x08)
	struct UCanvasPanel* CanvasPanel_52; // 0x3e8(0x08)
	struct UHorizontalBox* CountBox; // 0x3f0(0x08)
	struct UImage* Image_ChallengeItem; // 0x3f8(0x08)
	struct UTextBlock* ItemCount; // 0x400(0x08)
	struct UButton* MainButton; // 0x408(0x08)
	struct UTextBlock* Name; // 0x410(0x08)
	struct FMulticastInlineDelegate FocusButton; // 0x418(0x10)
	struct FMulticastInlineDelegate ButtonClick; // 0x428(0x10)
	struct FName MedalID; // 0x438(0x08)
	int32_t Serialnumber; // 0x440(0x04)

	void SetInfo(struct FName InMedalID, int32_t InCount, int32_t InSerialNumber, struct FFPB_MedalDetailsConfig_BP InMedalDetailsConfig); // Function ChallengeGroupItem.ChallengeGroupItem_C.SetInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ChallengeGroupItem.ChallengeGroupItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function ChallengeGroupItem.ChallengeGroupItem_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function ChallengeGroupItem.ChallengeGroupItem_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function ChallengeGroupItem.ChallengeGroupItem_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ChallengeGroupItem(int32_t EntryPoint); // Function ChallengeGroupItem.ChallengeGroupItem_C.ExecuteUbergraph_ChallengeGroupItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void ButtonClick__DelegateSignature(); // Function ChallengeGroupItem.ChallengeGroupItem_C.ButtonClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusButton__DelegateSignature(struct UWidget* Item); // Function ChallengeGroupItem.ChallengeGroupItem_C.FocusButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

