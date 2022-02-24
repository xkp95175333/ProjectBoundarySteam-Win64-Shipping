// WidgetBlueprintGeneratedClass UMG_Indicator_MechUAV.UMG_Indicator_MechUAV_C
// Size: 0x3a0 (Inherited: 0x320)
struct UUMG_Indicator_MechUAV_C : UPBIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UCanvasPanel* CanvasPanel_Edge; // 0x328(0x08)
	struct UCanvasPanel* CanvasPanel_Line; // 0x330(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x338(0x08)
	struct UCanvasPanel* CanvasPanel_Main_Indicator; // 0x340(0x08)
	struct UCanvasPanel* CanvasPanel_Main_Normal; // 0x348(0x08)
	struct UCanvasPanel* CanvasPanel_Main_Text; // 0x350(0x08)
	struct UHorizontalBox* HorizontalBox_Distance; // 0x358(0x08)
	struct UImage* Image_Edge_Arrow; // 0x360(0x08)
	struct UImage* Image_Edge_Icon; // 0x368(0x08)
	struct UImage* Image_Line_SolidLine; // 0x370(0x08)
	struct UImage* Image_Normal; // 0x378(0x08)
	struct URetainerBox* RetainerBox_1; // 0x380(0x08)
	struct UTextBlock* TextBlock_Distance; // 0x388(0x08)
	struct UTextBlock* TextBlock_Metre; // 0x390(0x08)
	struct ABP_MechUAV_C* MechUAV; // 0x398(0x08)

	void UpdateInView(); // Function UMG_Indicator_MechUAV.UMG_Indicator_MechUAV_C.UpdateInView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateCorner(); // Function UMG_Indicator_MechUAV.UMG_Indicator_MechUAV_C.UpdateCorner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateDistance(); // Function UMG_Indicator_MechUAV.UMG_Indicator_MechUAV_C.UpdateDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateStatus(); // Function UMG_Indicator_MechUAV.UMG_Indicator_MechUAV_C.UpdateStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdatePosition(); // Function UMG_Indicator_MechUAV.UMG_Indicator_MechUAV_C.UpdatePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Indicator_MechUAV.UMG_Indicator_MechUAV_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCamp(enum class EPBCamp NewCamp); // Function UMG_Indicator_MechUAV.UMG_Indicator_MechUAV_C.K2_UpdateCamp // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Indicator_MechUAV(int32_t EntryPoint); // Function UMG_Indicator_MechUAV.UMG_Indicator_MechUAV_C.ExecuteUbergraph_UMG_Indicator_MechUAV // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

