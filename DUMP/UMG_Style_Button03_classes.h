// WidgetBlueprintGeneratedClass UMG_Style_Button03.UMG_Style_Button03_C
// Size: 0x33b (Inherited: 0x260)
struct UUMG_Style_Button03_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FocusOn; // 0x268(0x08)
	struct UButton* btn; // 0x270(0x08)
	struct UTextBlock* CoinCost; // 0x278(0x08)
	struct UHorizontalBox* CoinPad; // 0x280(0x08)
	struct UImage* Image_Merch; // 0x288(0x08)
	struct UTextBlock* MerchName; // 0x290(0x08)
	struct UVerticalBox* Normal_TextBoard; // 0x298(0x08)
	struct UTextBlock* TextBlock_OR; // 0x2a0(0x08)
	struct UTextBlock* UnlockPointCost; // 0x2a8(0x08)
	struct UHorizontalBox* UnlockPointPad; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2b8(0x10)
	struct FText Name; // 0x2c8(0x18)
	struct FText CoinText; // 0x2e0(0x18)
	struct FText UnlockText; // 0x2f8(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Texture2D; // 0x310(0x28)
	bool bEnable; // 0x338(0x01)
	bool bEnableCoin; // 0x339(0x01)
	bool bEnableUnlockPoint; // 0x33a(0x01)

	void Refresh(struct FText InName, struct FText InUnlockPointText, struct FText InCoinText, struct TSoftObjectPtr<struct UTexture2D> InTexture2D, bool bInEnable, bool bInEnableUnlockPoint, bool bInEnableCoin); // Function UMG_Style_Button03.UMG_Style_Button03_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Style_Button03_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Style_Button03.UMG_Style_Button03_C.BndEvt__UMG_Style_Button03_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Style_Button03.UMG_Style_Button03_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Merch_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Style_Button03.UMG_Style_Button03_C.BndEvt__UMG_Merch_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Merch_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Style_Button03.UMG_Style_Button03_C.BndEvt__UMG_Merch_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Style_Button03(int32_t EntryPoint); // Function UMG_Style_Button03.UMG_Style_Button03_C.ExecuteUbergraph_UMG_Style_Button03 // (Final|UbergraphFunction) // @ game+0x1556ec0
	void OnClicked__DelegateSignature(); // Function UMG_Style_Button03.UMG_Style_Button03_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

