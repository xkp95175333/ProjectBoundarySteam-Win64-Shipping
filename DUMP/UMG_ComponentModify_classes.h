// WidgetBlueprintGeneratedClass UMG_ComponentModify.UMG_ComponentModify_C
// Size: 0x368 (Inherited: 0x2e8)
struct UUMG_ComponentModify_C : UPBComponentModifyWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* ShowOption; // 0x2f0(0x08)
	struct UWidgetAnimation* HideInstantly; // 0x2f8(0x08)
	struct UWidgetAnimation* Show; // 0x300(0x08)
	struct UWidgetSwitcher* LockSwitcher; // 0x308(0x08)
	struct UUMG_ComponentButton_C* ModifyComponent; // 0x310(0x08)
	struct UVerticalBox* ModifyS; // 0x318(0x08)
	struct UUMG_PriceTag_C* PriceTag; // 0x320(0x08)
	struct UUMG_ComponentButton_C* SightComponent; // 0x328(0x08)
	struct UUMG_ComponentButton_C* ToRangeComponent; // 0x330(0x08)
	struct UUMG_ComponentModifyButton_C* UMG_ComponentModifyButton; // 0x338(0x08)
	bool IsDefaultSelect; // 0x340(0x01)
	bool IsSelect; // 0x341(0x01)
	bool IsInWeaponPartLevel; // 0x342(0x01)
	bool IsInWeaponPartDetailLevel; // 0x343(0x01)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<struct FPBWeaponPartSkin_UI> WeaponPartSkinsArr; // 0x348(0x10)
	struct TArray<struct FPBWeaponPartSkin_UI> WeaponPartSightArr; // 0x358(0x10)

	void GetWeaponPartSkinsArr(); // Function UMG_ComponentModify.UMG_ComponentModify_C.GetWeaponPartSkinsArr // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Get Menu Level(); // Function UMG_ComponentModify.UMG_ComponentModify_C.Get Menu Level // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Un Lock Component Complete(bool bSuccess); // Function UMG_ComponentModify.UMG_ComponentModify_C.Un Lock Component Complete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UnLockComponent(); // Function UMG_ComponentModify.UMG_ComponentModify_C.UnLockComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetComponentSelect(); // Function UMG_ComponentModify.UMG_ComponentModify_C.SetComponentSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Save Component Complete(int32_t ErrorCode); // Function UMG_ComponentModify.UMG_ComponentModify_C.Save Component Complete // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TestComponent(); // Function UMG_ComponentModify.UMG_ComponentModify_C.TestComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SaveComponent(); // Function UMG_ComponentModify.UMG_ComponentModify_C.SaveComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_ComponentModify.UMG_ComponentModify_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_ComponentModify.UMG_ComponentModify_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(); // Function UMG_ComponentModify.UMG_ComponentModify_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_ComponentModify.UMG_ComponentModify_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_InitComponentModify(); // Function UMG_ComponentModify.UMG_ComponentModify_C.K2_InitComponentModify // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_2(); // Function UMG_ComponentModify.UMG_ComponentModify_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowWithDelay(float Duration); // Function UMG_ComponentModify.UMG_ComponentModify_C.ShowWithDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_3(); // Function UMG_ComponentModify.UMG_ComponentModify_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_4(); // Function UMG_ComponentModify.UMG_ComponentModify_C.CustomEvent_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_ComponentModify.UMG_ComponentModify_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ComponentModify_UMG_ComponentModifyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_ComponentModify.UMG_ComponentModify_C.BndEvt__UMG_ComponentModify_UMG_ComponentModifyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ComponentModify_UMG_ComponentModifyButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(); // Function UMG_ComponentModify.UMG_ComponentModify_C.BndEvt__UMG_ComponentModify_UMG_ComponentModifyButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ComponentModify(int32_t EntryPoint); // Function UMG_ComponentModify.UMG_ComponentModify_C.ExecuteUbergraph_UMG_ComponentModify // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

