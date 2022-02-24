// WidgetBlueprintGeneratedClass UMG_Widget_Indicator.UMG_Widget_Indicator_C
// Size: 0x2d0 (Inherited: 0x268)
struct UUMG_Widget_Indicator_C : UPBUserWidget {
	struct UCanvasPanel* CanvasPanel_Edge; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_Line; // 0x270(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x278(0x08)
	struct UCanvasPanel* CanvasPanel_Main_Indicator; // 0x280(0x08)
	struct UCanvasPanel* CanvasPanel_Main_Normal; // 0x288(0x08)
	struct UCanvasPanel* CanvasPanel_Main_Text; // 0x290(0x08)
	struct UHorizontalBox* HorizontalBox_Distance; // 0x298(0x08)
	struct UImage* Image_Edge_Arrow; // 0x2a0(0x08)
	struct UImage* Image_Edge_Icon; // 0x2a8(0x08)
	struct UImage* Image_Line_SolidLine; // 0x2b0(0x08)
	struct UImage* Image_Normal; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_Distance; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_Metre; // 0x2c8(0x08)

	void SetupIcon(struct FSlateBrush Icon); // Function UMG_Widget_Indicator.UMG_Widget_Indicator_C.SetupIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateCamp(enum class EPBCamp NewCamp); // Function UMG_Widget_Indicator.UMG_Widget_Indicator_C.UpdateCamp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateInView(bool bMarkableIsInView, enum class EPBIndicatorStatus Status); // Function UMG_Widget_Indicator.UMG_Widget_Indicator_C.UpdateInView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateCorner(); // Function UMG_Widget_Indicator.UMG_Widget_Indicator_C.UpdateCorner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateDistance(struct FText Distance); // Function UMG_Widget_Indicator.UMG_Widget_Indicator_C.UpdateDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateStatus(enum class EPBIndicatorStatus Status); // Function UMG_Widget_Indicator.UMG_Widget_Indicator_C.UpdateStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdatePosition(struct FVector2D EdgePosition, struct FVector2D ScreenPosition, float EdgeArrowRotationDegrees); // Function UMG_Widget_Indicator.UMG_Widget_Indicator_C.UpdatePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

