// WidgetBlueprintGeneratedClass UMG_Mode_LineCharts_Detail.UMG_Mode_LineCharts_Detail_C
// Size: 0x2c8 (Inherited: 0x268)
struct UUMG_Mode_LineCharts_Detail_C : UPBUserWidget {
	struct UImage* Image_215; // 0x268(0x08)
	struct UImage* Image_329; // 0x270(0x08)
	struct UImage* Image_493; // 0x278(0x08)
	struct UHorizontalBox* LineChart; // 0x280(0x08)
	struct UUMG_Mode_SingleData_Card_C* UMG_Mode_SingleData_Card; // 0x288(0x08)
	struct UUMG_Mode_SingleData_Card_C* UMG_Mode_SingleData_Card_2; // 0x290(0x08)
	struct UUMG_Mode_SingleData_Card_C* UMG_Mode_SingleData_Card_3; // 0x298(0x08)
	struct UUMG_Mode_SingleData_Card_C* UMG_Mode_SingleData_Card_4; // 0x2a0(0x08)
	struct UUMG_Mode_SingleData_Card_C* UMG_Mode_SingleData_Card_5; // 0x2a8(0x08)
	enum class EPB_SingleDataType_BP SingleDataTpye; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct TArray<float> LineChartValueArray; // 0x2b8(0x10)

	void OnPaint(struct FPaintContext Context); // Function UMG_Mode_LineCharts_Detail.UMG_Mode_LineCharts_Detail_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1556ec0
	void ShowInfo(); // Function UMG_Mode_LineCharts_Detail.UMG_Mode_LineCharts_Detail_C.ShowInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshInfo(struct TArray<float> InValueArray, enum class EPB_SingleDataType_BP InType); // Function UMG_Mode_LineCharts_Detail.UMG_Mode_LineCharts_Detail_C.RefreshInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

