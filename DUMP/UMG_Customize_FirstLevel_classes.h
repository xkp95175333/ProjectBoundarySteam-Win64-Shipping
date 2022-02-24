// WidgetBlueprintGeneratedClass UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C
// Size: 0x3e1 (Inherited: 0x2a8)
struct UUMG_Customize_FirstLevel_C : UUMG_Customize_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* SubClass_Focus_On; // 0x2b0(0x08)
	struct UImage* blackBG; // 0x2b8(0x08)
	struct UImage* Border; // 0x2c0(0x08)
	struct UUMG_Widget_Customize_SelectedTips_C* Card_SelectedTips_SubClass; // 0x2c8(0x08)
	struct UImage* Image_127; // 0x2d0(0x08)
	struct UCanvasPanel* ItemBox; // 0x2d8(0x08)
	struct UImage* ItemImage; // 0x2e0(0x08)
	struct URetainerBox* ItemImageBox; // 0x2e8(0x08)
	struct UTextBlock* ItemName; // 0x2f0(0x08)
	struct UTextBlock* ItemName_2; // 0x2f8(0x08)
	struct UScaleBox* ItemScale; // 0x300(0x08)
	struct UCanvasPanel* LockedBox; // 0x308(0x08)
	struct UButton* MainButton; // 0x310(0x08)
	struct UImage* NameBoxBG; // 0x318(0x08)
	struct UImage* NameBoxBG_2; // 0x320(0x08)
	struct UImage* NameBoxShadow; // 0x328(0x08)
	struct UCanvasPanel* NewTipBox; // 0x330(0x08)
	struct UOverlay* NoneItemBoard; // 0x338(0x08)
	struct USizeBox* SizeBox_132; // 0x340(0x08)
	struct UCanvasPanel* SkinBox; // 0x348(0x08)
	struct UImage* SkinBoxBG; // 0x350(0x08)
	struct UImage* SkinBoxShadow; // 0x358(0x08)
	struct UImage* SkinFadeMask; // 0x360(0x08)
	struct UTextBlock* SkinName; // 0x368(0x08)
	struct UImage* SkinPhoto; // 0x370(0x08)
	struct UUMG_Widget_GeneralFocus_C* UMG_Widget_GeneralFocus; // 0x378(0x08)
	struct FPBSlot_UI UI; // 0x380(0x48)
	enum class EPBSlotType SlotType; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	float Height; // 0x3cc(0x04)
	bool IsUseSkinPhoto; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct UTexture2D* SkinPhotoTexture; // 0x3d8(0x08)
	bool IsWeapon; // 0x3e0(0x01)

	void PreEnterNextLevel(); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.PreEnterNextLevel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReverseHightLight_Internal(); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.ReverseHightLight_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReverseFade_Internal(); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.ReverseFade_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HightLight_Internal(); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.HightLight_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Fade_Internal(); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.Fade_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEnter(); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.NotifyEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshUI(); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.RefreshUI // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Init(struct FName RoleId); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetNextLevelWidgets(struct TArray<struct UUMG_Customize_Base_C*> OutWidget); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.GetNextLevelWidgets // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Designer_Focus(bool NewFocus); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.Designer_Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetTitles(struct FText InText); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.Designer_SetTitles // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Unlock(bool IsLocked); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.Designer_Unlock // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_NewItem(bool IsNewItem, bool IsMainNewItem); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.Designer_NewItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_ChangeStyle(int32_t Designer_FocusStyle); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.Designer_ChangeStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetImage(struct UMaterialInterface* Material, struct UTexture2D* Texture); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.Designer_SetImage // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_138_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.BndEvt__Button_138_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_FirstLevel(int32_t EntryPoint); // Function UMG_Customize_FirstLevel.UMG_Customize_FirstLevel_C.ExecuteUbergraph_UMG_Customize_FirstLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

