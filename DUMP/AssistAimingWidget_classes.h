// WidgetBlueprintGeneratedClass AssistAimingWidget.AssistAimingWidget_C
// Size: 0x288 (Inherited: 0x268)
struct UAssistAimingWidget_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USizeBox* AssistAimingRangeSizeBox; // 0x270(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x278(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x280(0x08)

	void SetCirclePosition(struct FVector2D NewPosition); // Function AssistAimingWidget.AssistAimingWidget_C.SetCirclePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCircleRadius(float InRadius); // Function AssistAimingWidget.AssistAimingWidget_C.SetCircleRadius // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function AssistAimingWidget.AssistAimingWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function AssistAimingWidget.AssistAimingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AssistAimingWidget.AssistAimingWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetRadius(float InRadius); // Function AssistAimingWidget.AssistAimingWidget_C.SetRadius // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_AssistAimingWidget(int32_t EntryPoint); // Function AssistAimingWidget.AssistAimingWidget_C.ExecuteUbergraph_AssistAimingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

