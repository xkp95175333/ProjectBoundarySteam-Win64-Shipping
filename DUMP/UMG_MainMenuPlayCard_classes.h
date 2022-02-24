// WidgetBlueprintGeneratedClass UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C
// Size: 0x3d1 (Inherited: 0x270)
struct UUMG_MainMenuPlayCard_C : UPBPageButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* Flash; // 0x278(0x08)
	struct UWidgetAnimation* FocusOn; // 0x280(0x08)
	struct UButton* btn; // 0x288(0x08)
	struct UImage* Image_357; // 0x290(0x08)
	struct UImage* Image_Main; // 0x298(0x08)
	struct UImage* Image_ShineBoderLeft; // 0x2a0(0x08)
	struct UVerticalBox* InfoBoard; // 0x2a8(0x08)
	struct UTextBlock* Intro; // 0x2b0(0x08)
	struct UOverlay* Overlay_1; // 0x2b8(0x08)
	struct UTextBlock* Title; // 0x2c0(0x08)
	struct UTextBlock* Title_2; // 0x2c8(0x08)
	struct UUMG_UnderConstructionSign_C* UMG_UnderConstructionSign; // 0x2d0(0x08)
	bool AnimPlayed; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct UTexture2D* PlayImage; // 0x2e0(0x08)
	struct FText CardTitle; // 0x2e8(0x18)
	struct FText CardIntroduce; // 0x300(0x18)
	struct FUI_ColorPalettes UI_Colorpallets; // 0x318(0xa0)
	bool IsMajorButton; // 0x3b8(0x01)
	bool IsSelect; // 0x3b9(0x01)
	bool Locked; // 0x3ba(0x01)
	char pad_3BB[0x5]; // 0x3bb(0x05)
	struct FMulticastInlineDelegate HintsHover; // 0x3c0(0x10)
	bool HintOnly; // 0x3d0(0x01)

	void SetUpStyle(); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.SetUpStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MainMenuPlayCard_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.BndEvt__UMG_MainMenuPlayCard_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MainMenuPlayCard_btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.BndEvt__UMG_MainMenuPlayCard_btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void FlashOn(bool On); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.FlashOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MainMenuPlayCard_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.BndEvt__UMG_MainMenuPlayCard_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MainMenuPlayCard_btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.BndEvt__UMG_MainMenuPlayCard_btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MainMenuPlayCard_btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.BndEvt__UMG_MainMenuPlayCard_btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_MainMenuPlayCard(int32_t EntryPoint); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.ExecuteUbergraph_UMG_MainMenuPlayCard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void HintsHover__DelegateSignature(); // Function UMG_MainMenuPlayCard.UMG_MainMenuPlayCard_C.HintsHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

