// WidgetBlueprintGeneratedClass TraningIndicator.TraningIndicator_C
// Size: 0x3a0 (Inherited: 0x320)
struct UTraningIndicator_C : UPBIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UCanvasPanel* CanvasPanel_Edge; // 0x328(0x08)
	struct UCanvasPanel* CanvasPanel_Line; // 0x330(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x338(0x08)
	struct UCanvasPanel* CanvasPanel_Main_Text; // 0x340(0x08)
	struct UHorizontalBox* HorizontalBox_Distance; // 0x348(0x08)
	struct UImage* Image_Edge_Arrow; // 0x350(0x08)
	struct UImage* Image_Edge_Icon; // 0x358(0x08)
	struct UImage* Image_Line_SolidLine; // 0x360(0x08)
	struct UImage* Image_Main_Conner_A; // 0x368(0x08)
	struct UImage* Image_Main_Conner_B; // 0x370(0x08)
	struct UImage* Image_Main_Conner_C; // 0x378(0x08)
	struct UImage* Image_Main_Conner_D; // 0x380(0x08)
	struct UTextBlock* TextBlock_Distance; // 0x388(0x08)
	struct UTextBlock* TextBlock_Metre; // 0x390(0x08)
	struct APBSensor* Sensor; // 0x398(0x08)

	void UpdateInView(); // Function TraningIndicator.TraningIndicator_C.UpdateInView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateCorner(); // Function TraningIndicator.TraningIndicator_C.UpdateCorner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateDistance(); // Function TraningIndicator.TraningIndicator_C.UpdateDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateStatus(); // Function TraningIndicator.TraningIndicator_C.UpdateStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdatePosition(); // Function TraningIndicator.TraningIndicator_C.UpdatePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TraningIndicator.TraningIndicator_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCamp(enum class EPBCamp NewCamp); // Function TraningIndicator.TraningIndicator_C.K2_UpdateCamp // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TraningIndicator(int32_t EntryPoint); // Function TraningIndicator.TraningIndicator_C.ExecuteUbergraph_TraningIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

