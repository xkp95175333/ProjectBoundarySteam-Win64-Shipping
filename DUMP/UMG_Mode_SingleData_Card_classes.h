// WidgetBlueprintGeneratedClass UMG_Mode_SingleData_Card.UMG_Mode_SingleData_Card_C
// Size: 0x289 (Inherited: 0x268)
struct UUMG_Mode_SingleData_Card_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_3; // 0x270(0x08)
	struct UImage* Icon; // 0x278(0x08)
	struct UTextBlock* LineChartValue; // 0x280(0x08)
	enum class EPB_SingleDataType_BP Type; // 0x288(0x01)

	struct FVector2D GetIconPosition(); // Function UMG_Mode_SingleData_Card.UMG_Mode_SingleData_Card_C.GetIconPosition // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void RefreshInfo(enum class EPB_SingleDataType_BP InTpye, float InCurrentValue, float InMaxValue, float InHeight); // Function UMG_Mode_SingleData_Card.UMG_Mode_SingleData_Card_C.RefreshInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Mode_SingleData_Card.UMG_Mode_SingleData_Card_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Mode_SingleData_Card(int32_t EntryPoint); // Function UMG_Mode_SingleData_Card.UMG_Mode_SingleData_Card_C.ExecuteUbergraph_UMG_Mode_SingleData_Card // (Final|UbergraphFunction) // @ game+0x1556ec0
};

