// WidgetBlueprintGeneratedClass SubMenu_Store.SubMenu_Store_C
// Size: 0x431 (Inherited: 0x3d8)
struct USubMenu_Store_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UCard_Money_C* BuyPoints; // 0x3e0(0x08)
	struct UCard_Goods_C* Goods_2; // 0x3e8(0x08)
	struct UCard_Goods_C* Goods_3; // 0x3f0(0x08)
	struct UCard_Goods_C* Goods_4; // 0x3f8(0x08)
	struct UImage* Image; // 0x400(0x08)
	struct UImage* Image_2; // 0x408(0x08)
	struct UImage* Image_68; // 0x410(0x08)
	struct FText GoodsDetail; // 0x418(0x18)
	bool HasFocusAtGoods; // 0x430(0x01)

	struct UWidget* Hack(enum class EUINavigation Navigation); // Function SubMenu_Store.SubMenu_Store_C.Hack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function SubMenu_Store.SubMenu_Store_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function SubMenu_Store.SubMenu_Store_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Goods_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(); // Function SubMenu_Store.SubMenu_Store_C.BndEvt__Card_Goods_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Goods_376_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(); // Function SubMenu_Store.SubMenu_Store_C.BndEvt__Card_Goods_376_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Money_K2Node_ComponentBoundEvent_2_Click__DelegateSignature(); // Function SubMenu_Store.SubMenu_Store_C.BndEvt__Money_K2Node_ComponentBoundEvent_2_Click__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function SubMenu_Store.SubMenu_Store_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Barrel_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature(); // Function SubMenu_Store.SubMenu_Store_C.BndEvt__Barrel_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function SubMenu_Store.SubMenu_Store_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_SubMenu_Store(int32_t EntryPoint); // Function SubMenu_Store.SubMenu_Store_C.ExecuteUbergraph_SubMenu_Store // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

