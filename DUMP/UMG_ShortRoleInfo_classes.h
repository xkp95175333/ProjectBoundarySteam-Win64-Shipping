// WidgetBlueprintGeneratedClass UMG_ShortRoleInfo.UMG_ShortRoleInfo_C
// Size: 0x35a (Inherited: 0x288)
struct UUMG_ShortRoleInfo_C : UPBShortRoleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* FocusState; // 0x290(0x08)
	struct UWidgetAnimation* Collapse; // 0x298(0x08)
	struct UWidgetAnimation* FocusOn; // 0x2a0(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2a8(0x08)
	struct UImage* Image_2; // 0x2b0(0x08)
	struct UImage* Image_158; // 0x2b8(0x08)
	struct UImage* Image_357; // 0x2c0(0x08)
	struct UCanvasPanel* Lock_Lock_Icon; // 0x2c8(0x08)
	struct UOverlay* LockBand_OL; // 0x2d0(0x08)
	struct USizeBox* LockPanel; // 0x2d8(0x08)
	struct UHorizontalBox* Price; // 0x2e0(0x08)
	struct UBorder* RoleBG; // 0x2e8(0x08)
	struct UButton* RoleBtn; // 0x2f0(0x08)
	struct UImage* RoleIconImage; // 0x2f8(0x08)
	struct UImage* RoleImage; // 0x300(0x08)
	struct UTextBlock* RoleLevelText; // 0x308(0x08)
	struct UTextBlock* RoleNameText; // 0x310(0x08)
	struct UImage* SignImage; // 0x318(0x08)
	struct UTextBlock* UnlockDay; // 0x320(0x08)
	bool BlockFetchData; // 0x328(0x01)
	bool ArtPreview_Selected; // 0x329(0x01)
	char pad_32A[0x6]; // 0x32a(0x06)
	struct FMulticastInlineDelegate Btn_Clicked; // 0x330(0x10)
	bool UsingAsLable; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct FMulticastInlineDelegate Btn_Hoverd; // 0x348(0x10)
	bool IsSelected; // 0x358(0x01)
	bool ShouldGoToNextPage; // 0x359(0x01)

	void SequenceEvent__ENTRYPOINTUMG_ShortRoleInfo_1(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.SequenceEvent__ENTRYPOINTUMG_ShortRoleInfo_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetUpDisplayElements(struct FText RoleNameText, struct FText RoleLevelText, struct TSoftObjectPtr<struct UMaterialInterface> RoleMat, struct TSoftObjectPtr<struct UTexture2D> SignTex); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.SetUpDisplayElements // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShiftToLable(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.ShiftToLable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Get Character Name(struct FText CharacterName); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.Get Character Name // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Get Character Icon(struct TSoftObjectPtr<struct UTexture2D> CharacterIcon); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.Get Character Icon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ShortRoleInfo_RoleBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.BndEvt__UMG_ShortRoleInfo_RoleBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ShortRoleInfo_RoleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.BndEvt__UMG_ShortRoleInfo_RoleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PlayCollapseAnim(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.PlayCollapseAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SelectRole(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.K2_SelectRole // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BackFromArmory(bool bQuitgame); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.BackFromArmory // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetRoleInfo(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.K2_SetRoleInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent_1(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_DisableSelectRole(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.K2_DisableSelectRole // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ShortRoleInfo(int32_t EntryPoint); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.ExecuteUbergraph_UMG_ShortRoleInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Btn_Hoverd__DelegateSignature(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.Btn_Hoverd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Btn_Clicked__DelegateSignature(); // Function UMG_ShortRoleInfo.UMG_ShortRoleInfo_C.Btn_Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

