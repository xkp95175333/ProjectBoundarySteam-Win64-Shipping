// WidgetBlueprintGeneratedClass UMG_MerchDetail.UMG_MerchDetail_C
// Size: 0x348 (Inherited: 0x310)
struct UUMG_MerchDetail_C : UPBMerchWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UBottomTipsBar_C* BottomTipsBar; // 0x318(0x08)
	struct UTextBlock* TextBlock_MerchDetail; // 0x320(0x08)
	struct UTextBlock* TextBlock_MerchName; // 0x328(0x08)
	struct UImage* Texture_Merch; // 0x330(0x08)
	struct UUMG_Style_Button04_C* UMG_Style_BuyByCoin; // 0x338(0x08)
	struct UUMG_Style_Button04_C* UMG_Style_BuyByUnlockPoint; // 0x340(0x08)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_MerchDetail.UMG_MerchDetail_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_MerchDetail.UMG_MerchDetail_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh(); // Function UMG_MerchDetail.UMG_MerchDetail_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MerchDetail_UMG_Style_Button04_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UMG_MerchDetail.UMG_MerchDetail_C.BndEvt__UMG_MerchDetail_UMG_Style_Button04_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_MerchDetail.UMG_MerchDetail_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Buy?(bool bConfirm); // Function UMG_MerchDetail.UMG_MerchDetail_C.Buy? // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_MerchDetail.UMG_MerchDetail_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BuyComplete(bool bSuccessful, struct FName MerchName); // Function UMG_MerchDetail.UMG_MerchDetail_C.BuyComplete // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_MerchDetail.UMG_MerchDetail_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function UMG_MerchDetail.UMG_MerchDetail_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent(bool bConfirm); // Function UMG_MerchDetail.UMG_MerchDetail_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_MerchDetail_UMG_Style_BuyByCoin_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UMG_MerchDetail.UMG_MerchDetail_C.BndEvt__UMG_MerchDetail_UMG_Style_BuyByCoin_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Buy(enum class EPBCashType CashType); // Function UMG_MerchDetail.UMG_MerchDetail_C.Buy // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_MerchDetail(int32_t EntryPoint); // Function UMG_MerchDetail.UMG_MerchDetail_C.ExecuteUbergraph_UMG_MerchDetail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

