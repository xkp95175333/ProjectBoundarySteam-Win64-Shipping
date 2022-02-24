// WidgetBlueprintGeneratedClass UMG_Indicator_EMP.UMG_Indicator_EMP_C
// Size: 0x330 (Inherited: 0x320)
struct UUMG_Indicator_EMP_C : UPBIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UUMG_Widget_Indicator_C* UMG_Widget_Indicator; // 0x328(0x08)

	void PreConstruct(bool IsDesignTime); // Function UMG_Indicator_EMP.UMG_Indicator_EMP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Indicator_EMP.UMG_Indicator_EMP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCamp(enum class EPBCamp NewCamp); // Function UMG_Indicator_EMP.UMG_Indicator_EMP_C.K2_UpdateCamp // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Indicator_EMP(int32_t EntryPoint); // Function UMG_Indicator_EMP.UMG_Indicator_EMP_C.ExecuteUbergraph_UMG_Indicator_EMP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

