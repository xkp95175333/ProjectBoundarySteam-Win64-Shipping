// WidgetBlueprintGeneratedClass UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C
// Size: 0x360 (Inherited: 0x268)
struct UUMG_Widget_Customize_Button_Small_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FocusChanged; // 0x270(0x08)
	struct UWidgetAnimation* EquipingAnimation; // 0x278(0x08)
	struct UWidgetAnimation* FocusOn; // 0x280(0x08)
	struct UImage* blackBG; // 0x288(0x08)
	struct UImage* blackBG_2; // 0x290(0x08)
	struct UUMG_Widget_Customize_SelectedTips_C* Card_SelectedTips; // 0x298(0x08)
	struct UCanvasPanel* EquipingBoard; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image_2; // 0x2b0(0x08)
	struct UImage* Image_127; // 0x2b8(0x08)
	struct UImage* Image_258; // 0x2c0(0x08)
	struct UImage* ItemImage; // 0x2c8(0x08)
	struct UTextBlock* ItemName_Normal; // 0x2d0(0x08)
	struct UCanvasPanel* LockedBoard; // 0x2d8(0x08)
	struct UButton* MainButton; // 0x2e0(0x08)
	struct UImage* MainNewItemTIp; // 0x2e8(0x08)
	struct UCanvasPanel* NewBoard; // 0x2f0(0x08)
	struct UImage* NewGradual; // 0x2f8(0x08)
	struct UOverlay* NoneItemBoard; // 0x300(0x08)
	struct URetainerBox* RetainerBox_IconImage; // 0x308(0x08)
	struct UScaleBox* ScaleBox_IconImage; // 0x310(0x08)
	struct URetainerBox* SecNewItemTIp; // 0x318(0x08)
	bool bIsEquited; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	struct FMargin NormalItemSize; // 0x324(0x10)
	int32_t Designer_FocusStyle; // 0x334(0x04)
	struct FMulticastInlineDelegate OnClickMainButton; // 0x338(0x10)
	bool bIsLocked; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FMulticastInlineDelegate OnHoveredMainButton; // 0x350(0x10)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh(struct FText Name, bool bIsEquiped, struct UTexture2D* Texture, bool bIsLocked, struct UTextureRenderTarget2D* RenderTarget, struct UTextureRenderTarget2D* DepthTarget); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Unlock(bool bInIsLocked); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.Designer_Unlock // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Focus(bool NewFocus); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.Designer_Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_Equipped(bool Condition); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.Designer_Equipped // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_NewItem(bool IsNewItem, bool IsMainNewItem); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.Designer_NewItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetTitles(struct FText InText); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.Designer_SetTitles // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_EnterToShowDetails(bool boolEnter, bool bIsMeSelected); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.Designer_EnterToShowDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetImage(struct UMaterialInterface* Material, struct UTexture2D* Texture); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.Designer_SetImage // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_ChangeStyle(int32_t Designer_FocusStyle); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.Designer_ChangeStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Customize_Button_Small(int32_t EntryPoint); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.ExecuteUbergraph_UMG_Widget_Customize_Button_Small // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnHoveredMainButton__DelegateSignature(); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.OnHoveredMainButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnClickMainButton__DelegateSignature(); // Function UMG_Widget_Customize_Button_Small.UMG_Widget_Customize_Button_Small_C.OnClickMainButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

