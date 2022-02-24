// WidgetBlueprintGeneratedClass UMG_Indicator_SupplyPoint.UMG_Indicator_SupplyPoint_C
// Size: 0x374 (Inherited: 0x320)
struct UUMG_Indicator_SupplyPoint_C : UPBIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x328(0x08)
	struct UImage* Image_Indicator; // 0x330(0x08)
	struct UInvalidationBox* InvalidationBox_82; // 0x338(0x08)
	struct UTextBlock* TextBlock_Distance; // 0x340(0x08)
	struct UVerticalBox* VerticalBox_94; // 0x348(0x08)
	struct FVector2D IndicatorSize; // 0x350(0x08)
	int32_t FontSize; // 0x358(0x04)
	float MaxScale; // 0x35c(0x04)
	float MinScale; // 0x360(0x04)
	float LowOpacityAlphaValue; // 0x364(0x04)
	float HighOpacityAlphaValue; // 0x368(0x04)
	float NearestDistance; // 0x36c(0x04)
	float FarthestDistance; // 0x370(0x04)

	void SetToHighOpacity(); // Function UMG_Indicator_SupplyPoint.UMG_Indicator_SupplyPoint_C.SetToHighOpacity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ClampSizeWithDistance(float Distance); // Function UMG_Indicator_SupplyPoint.UMG_Indicator_SupplyPoint_C.ClampSizeWithDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetScale(float Scale); // Function UMG_Indicator_SupplyPoint.UMG_Indicator_SupplyPoint_C.SetScale // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDistanceText(struct FText Distance); // Function UMG_Indicator_SupplyPoint.UMG_Indicator_SupplyPoint_C.SetDistanceText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetToLowOpacity(); // Function UMG_Indicator_SupplyPoint.UMG_Indicator_SupplyPoint_C.SetToLowOpacity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Indicator_SupplyPoint.UMG_Indicator_SupplyPoint_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Indicator_SupplyPoint(int32_t EntryPoint); // Function UMG_Indicator_SupplyPoint.UMG_Indicator_SupplyPoint_C.ExecuteUbergraph_UMG_Indicator_SupplyPoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

