// WidgetBlueprintGeneratedClass UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C
// Size: 0x3b5 (Inherited: 0x320)
struct UUMG_Indicator_MotionSensor_C : UPBIndicator {
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
	struct UImage* Image_TeamProgressBar; // 0x380(0x08)
	struct UTextBlock* TextBlock_Distance; // 0x388(0x08)
	struct UTextBlock* TextBlock_Metre; // 0x390(0x08)
	struct APBMotionSensor* MotionSensor; // 0x398(0x08)
	struct FTimerHandle TimeHandle_Twinkle; // 0x3a0(0x08)
	bool bIsBright; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	float Motion Sensor Data Scan Duration; // 0x3ac(0x04)
	float CurrentRemainingTime; // 0x3b0(0x04)
	bool hasScanned; // 0x3b4(0x01)

	void UpdateProgress(float DetaTime); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.UpdateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Twinkle(); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.Twinkle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnHasScannedEnemy(bool InBool); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.OnHasScannedEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateInView(); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.UpdateInView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateDistance(); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.UpdateDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateStatus(); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.UpdateStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdatePosition(); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.UpdatePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCamp(enum class EPBCamp NewCamp); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.K2_UpdateCamp // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Indicator_MotionSensor(int32_t EntryPoint); // Function UMG_Indicator_MotionSensor.UMG_Indicator_MotionSensor_C.ExecuteUbergraph_UMG_Indicator_MotionSensor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

