// WidgetBlueprintGeneratedClass MoneyDetail.MoneyDetail_C
// Size: 0x430 (Inherited: 0x3d8)
struct UMoneyDetail_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UBottomTipsBar_C* BottomTipsBar; // 0x3e0(0x08)
	struct UCard_BuyMoney_C* Card_BuyMoney; // 0x3e8(0x08)
	struct UCard_BuyMoney_C* Card_BuyMoney_2; // 0x3f0(0x08)
	struct UCard_BuyMoney_C* Card_BuyMoney_3; // 0x3f8(0x08)
	struct UCard_BuyMoney_C* Card_BuyMoney_4; // 0x400(0x08)
	struct UHorizontalBox* Hor_Title; // 0x408(0x08)
	struct UImage* Image_1; // 0x410(0x08)
	struct UImage* Image_2; // 0x418(0x08)
	struct UImage* Image_192; // 0x420(0x08)
	struct UCanvasPanel* Title; // 0x428(0x08)

	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MoneyDetail.MoneyDetail_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function MoneyDetail.MoneyDetail_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function MoneyDetail.MoneyDetail_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function MoneyDetail.MoneyDetail_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_BuyMoney_K2Node_ComponentBoundEvent_0_Click__DelegateSignature(); // Function MoneyDetail.MoneyDetail_C.BndEvt__Card_BuyMoney_K2Node_ComponentBoundEvent_0_Click__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_BuyMoney_1_K2Node_ComponentBoundEvent_1_Click__DelegateSignature(); // Function MoneyDetail.MoneyDetail_C.BndEvt__Card_BuyMoney_1_K2Node_ComponentBoundEvent_1_Click__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_BuyMoney_2_K2Node_ComponentBoundEvent_2_Click__DelegateSignature(); // Function MoneyDetail.MoneyDetail_C.BndEvt__Card_BuyMoney_2_K2Node_ComponentBoundEvent_2_Click__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_BuyMoney_3_K2Node_ComponentBoundEvent_3_Click__DelegateSignature(); // Function MoneyDetail.MoneyDetail_C.BndEvt__Card_BuyMoney_3_K2Node_ComponentBoundEvent_3_Click__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Ret(bool bConfirm); // Function MoneyDetail.MoneyDetail_C.Ret // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_MoneyDetail(int32_t EntryPoint); // Function MoneyDetail.MoneyDetail_C.ExecuteUbergraph_MoneyDetail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

