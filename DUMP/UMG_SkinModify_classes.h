// WidgetBlueprintGeneratedClass UMG_SkinModify.UMG_SkinModify_C
// Size: 0x339 (Inherited: 0x2f8)
struct UUMG_SkinModify_C : UPBSkinModifyWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UWidgetAnimation* ShowOption; // 0x300(0x08)
	struct UWidgetAnimation* HideInstantly; // 0x308(0x08)
	struct UWidgetAnimation* Show; // 0x310(0x08)
	struct UWidgetSwitcher* ModifySwitcher; // 0x318(0x08)
	struct UUMG_PriceTag_C* PriceTag; // 0x320(0x08)
	struct UUMG_ComponentButton_C* ToRangeComponent; // 0x328(0x08)
	struct UUMG_ComponentModifyButton_C* UMG_ComponentModifyButton; // 0x330(0x08)
	bool IsSelect; // 0x338(0x01)

	void SetSkinSelect(); // Function UMG_SkinModify.UMG_SkinModify_C.SetSkinSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Un Lock Skin Complete(bool bSuccess); // Function UMG_SkinModify.UMG_SkinModify_C.Un Lock Skin Complete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UnLock Skin(); // Function UMG_SkinModify.UMG_SkinModify_C.UnLock Skin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Save Skin Complete(int32_t ErrorCode); // Function UMG_SkinModify.UMG_SkinModify_C.Save Skin Complete // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TestSkin(); // Function UMG_SkinModify.UMG_SkinModify_C.TestSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SaveSkin(); // Function UMG_SkinModify.UMG_SkinModify_C.SaveSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_InitSkinModify(); // Function UMG_SkinModify.UMG_SkinModify_C.K2_InitSkinModify // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_SkinModify.UMG_SkinModify_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_SkinModify.UMG_SkinModify_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_SkinModify_UMG_ComponentModifyButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function UMG_SkinModify.UMG_SkinModify_C.BndEvt__UMG_SkinModify_UMG_ComponentModifyButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_SkinModify_UMG_ComponentModifyButton_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(); // Function UMG_SkinModify.UMG_SkinModify_C.BndEvt__UMG_SkinModify_UMG_ComponentModifyButton_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_SkinModify.UMG_SkinModify_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_2(); // Function UMG_SkinModify.UMG_SkinModify_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowWithDelay(float Duration); // Function UMG_SkinModify.UMG_SkinModify_C.ShowWithDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(); // Function UMG_SkinModify.UMG_SkinModify_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_SkinModify(int32_t EntryPoint); // Function UMG_SkinModify.UMG_SkinModify_C.ExecuteUbergraph_UMG_SkinModify // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

