// WidgetBlueprintGeneratedClass UMG_ChallengeInfo.UMG_ChallengeInfo_C
// Size: 0x2e9 (Inherited: 0x278)
struct UUMG_ChallengeInfo_C : UPBShortChallengeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UWidgetAnimation* FocusState; // 0x280(0x08)
	struct UWidgetAnimation* Collapse; // 0x288(0x08)
	struct UWidgetAnimation* FocusOn; // 0x290(0x08)
	struct UButton* ChallengeBtn; // 0x298(0x08)
	struct UTextBlock* ChallengeName; // 0x2a0(0x08)
	struct UImage* Image_357; // 0x2a8(0x08)
	struct UImage* PrizeIcon; // 0x2b0(0x08)
	bool BlockFetchData; // 0x2b8(0x01)
	bool ArtPreview_Selected; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)
	struct FMulticastInlineDelegate Btn_Clicked; // 0x2c0(0x10)
	bool UsingAsLable; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FMulticastInlineDelegate Btn_Hoverd; // 0x2d8(0x10)
	bool IsSelected; // 0x2e8(0x01)

	void SequenceEvent__ENTRYPOINTUMG_ChallengeInfo_1(); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.SequenceEvent__ENTRYPOINTUMG_ChallengeInfo_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Get Character Name(struct FText CharacterName); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.Get Character Name // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Get Character Icon(struct TSoftObjectPtr<struct UTexture2D> CharacterIcon); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.Get Character Icon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ShortRoleInfo_RoleBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.BndEvt__UMG_ShortRoleInfo_RoleBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ShortRoleInfo_RoleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.BndEvt__UMG_ShortRoleInfo_RoleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PlayCollapseAnim(); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.PlayCollapseAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent_1(); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateChallengeInfo(struct FText PrizeName, struct UTexture2D* PrizeIcon); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.UpdateChallengeInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetShortChallenge(); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.K2_SetShortChallenge // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ChallengeInfo(int32_t EntryPoint); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.ExecuteUbergraph_UMG_ChallengeInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Btn_Hoverd__DelegateSignature(); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.Btn_Hoverd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Btn_Clicked__DelegateSignature(); // Function UMG_ChallengeInfo.UMG_ChallengeInfo_C.Btn_Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

