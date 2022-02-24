// WidgetBlueprintGeneratedClass Card_goods.Card_Goods_C
// Size: 0x501 (Inherited: 0x460)
struct UCard_Goods_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* FocusOn; // 0x468(0x08)
	struct UButton* btn; // 0x470(0x08)
	struct UCanvasPanel* CanvasPanel_421; // 0x478(0x08)
	struct UImage* Image_159; // 0x480(0x08)
	struct UImage* Image_198; // 0x488(0x08)
	struct UImage* Image_286; // 0x490(0x08)
	struct UCanvasPanel* MainBoard; // 0x498(0x08)
	struct UOverlay* MainOverlay; // 0x4a0(0x08)
	struct UVerticalBox* Normal_TextBoard; // 0x4a8(0x08)
	struct UTextBlock* TextCost; // 0x4b0(0x08)
	struct UTextBlock* TextGoodsName; // 0x4b8(0x08)
	struct UTexture2D* MainImageTexture; // 0x4c0(0x08)
	struct FText GoodsName; // 0x4c8(0x18)
	int32_t Cost; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct FText GoodsDetail; // 0x4e8(0x18)
	bool Enable; // 0x500(0x01)

	void SetEnable(bool Enable); // Function Card_goods.Card_Goods_C.SetEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInteractableOnKeyboard(bool NewInteractable); // Function Card_goods.Card_Goods_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Card_goods.Card_Goods_C.BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_goods.Card_Goods_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_goods.Card_Goods_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function Card_goods.Card_Goods_C.BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_goods.Card_Goods_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_goods.Card_Goods_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Goods(int32_t EntryPoint); // Function Card_goods.Card_Goods_C.ExecuteUbergraph_Card_Goods // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

