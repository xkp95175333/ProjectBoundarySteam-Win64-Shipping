// WidgetBlueprintGeneratedClass UMG_Mode_LineCharts_Panel.UMG_Mode_LineCharts_Panel_C
// Size: 0x2a1 (Inherited: 0x268)
struct UUMG_Mode_LineCharts_Panel_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* BackImage; // 0x270(0x08)
	struct UImage* Image_347; // 0x278(0x08)
	struct UImage* Image_642; // 0x280(0x08)
	struct UUMG_Mode_LineCharts_Detail_C* UMG_LineCharts_Detail; // 0x288(0x08)
	struct TArray<float> LineChartValueArray; // 0x290(0x10)
	enum class EPB_SingleDataType_BP SingleDataTpye; // 0x2a0(0x01)

	void RefreshInfo(struct TArray<float> InValueArray, enum class EPB_SingleDataType_BP InType); // Function UMG_Mode_LineCharts_Panel.UMG_Mode_LineCharts_Panel_C.RefreshInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Mode_LineCharts_Panel.UMG_Mode_LineCharts_Panel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Mode_LineCharts_Panel.UMG_Mode_LineCharts_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Mode_LineCharts_Panel(int32_t EntryPoint); // Function UMG_Mode_LineCharts_Panel.UMG_Mode_LineCharts_Panel_C.ExecuteUbergraph_UMG_Mode_LineCharts_Panel // (Final|UbergraphFunction) // @ game+0x1556ec0
};

