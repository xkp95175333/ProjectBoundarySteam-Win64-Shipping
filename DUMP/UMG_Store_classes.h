// WidgetBlueprintGeneratedClass UMG_Store.UMG_Store_C
// Size: 0x2b0 (Inherited: 0x298)
struct UUMG_Store_C : UPBStoreWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UScrollBox* ScrollBox_MerchList; // 0x2a0(0x08)
	struct UUMG_Style_Button01_C* UMG_Style_Button01; // 0x2a8(0x08)

	void RefreshList(struct TArray<struct FName> MershList); // Function UMG_Store.UMG_Store_C.RefreshList // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Store.UMG_Store_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_RefreshMerchList(struct TArray<struct FName> MerchList); // Function UMG_Store.UMG_Store_C.K2_RefreshMerchList // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Page_Store_UMG_Style_Button01_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UMG_Store.UMG_Store_C.BndEvt__UMG_Page_Store_UMG_Style_Button01_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Store.UMG_Store_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void InitMerchList(); // Function UMG_Store.UMG_Store_C.InitMerchList // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Store(int32_t EntryPoint); // Function UMG_Store.UMG_Store_C.ExecuteUbergraph_UMG_Store // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

