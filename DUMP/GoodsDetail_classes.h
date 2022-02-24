// WidgetBlueprintGeneratedClass GoodsDetail.GoodsDetail_C
// Size: 0x448 (Inherited: 0x3d8)
struct UGoodsDetail_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UBottomTipsBar_C* BottomTipsBar; // 0x3e0(0x08)
	struct UCard_Button_C* Card_Button; // 0x3e8(0x08)
	struct UTextBlock* Detail; // 0x3f0(0x08)
	struct UImage* GoodsImage; // 0x3f8(0x08)
	struct UTextBlock* GoodsName; // 0x400(0x08)
	struct UHorizontalBox* Hor_Title_2; // 0x408(0x08)
	struct UImage* Image; // 0x410(0x08)
	struct UImage* Image_2; // 0x418(0x08)
	struct UImage* Image_3; // 0x420(0x08)
	struct UImage* Image_356; // 0x428(0x08)
	struct UCanvasPanel* Title_2; // 0x430(0x08)
	struct UTexture2D* GoodsImageTexture; // 0x438(0x08)
	int32_t Cost; // 0x440(0x04)
	int32_t GoodsIndex; // 0x444(0x04)

	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function GoodsDetail.GoodsDetail_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(struct UTexture2D* Texture, int32_t Cost, struct FText Name, struct FText GoodsDetail, int32_t GoodsIndex); // Function GoodsDetail.GoodsDetail_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function GoodsDetail.GoodsDetail_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function GoodsDetail.GoodsDetail_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function GoodsDetail.GoodsDetail_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function GoodsDetail.GoodsDetail_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function GoodsDetail.GoodsDetail_C.BndEvt__Card_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Buy?(bool bConfirm); // Function GoodsDetail.GoodsDetail_C.Buy? // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GoodsDetail(int32_t EntryPoint); // Function GoodsDetail.GoodsDetail_C.ExecuteUbergraph_GoodsDetail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

