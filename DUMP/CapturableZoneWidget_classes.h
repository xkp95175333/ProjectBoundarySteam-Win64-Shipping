// WidgetBlueprintGeneratedClass CapturableZoneWidget.CapturableZoneWidget_C
// Size: 0x521 (Inherited: 0x3c8)
struct UCapturableZoneWidget_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x3d0(0x08)
	struct UImage* Arrow; // 0x3d8(0x08)
	struct UCanvasPanel* CanvasPanel_BG; // 0x3e0(0x08)
	struct UHorizontalBox* HorizontalBox_Distance; // 0x3e8(0x08)
	struct UImage* Image_167; // 0x3f0(0x08)
	struct UTextBlock* StatusName; // 0x3f8(0x08)
	struct UWidgetSwitcher* StatusSwitcher; // 0x400(0x08)
	struct UTextBlock* TextBlock_Distance; // 0x408(0x08)
	struct UImage* ZoneIcon; // 0x410(0x08)
	struct UImage* ZoneIcon_Locked; // 0x418(0x08)
	struct TMap<struct FName, struct UMaterialInterface*> ZoneStatusIcon; // 0x420(0x50)
	struct FVector2D Size; // 0x470(0x08)
	float OpacityModify; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct FSlateColor ProgressColor; // 0x480(0x28)
	float WinScore; // 0x4a8(0x04)
	bool IsContested; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	struct FText StatusText; // 0x4b0(0x18)
	struct FVector2D EdgeSize; // 0x4c8(0x08)
	struct FVector2D RadarCircleEdgeSize; // 0x4d0(0x08)
	int32_t CraftRadiusModifer; // 0x4d8(0x04)
	struct FVector2D ScreenPosition; // 0x4dc(0x08)
	bool bFront; // 0x4e4(0x01)
	bool bIsOutOfDrawArea; // 0x4e5(0x01)
	char pad_4E6[0x2]; // 0x4e6(0x02)
	float RadarCircleRadius; // 0x4e8(0x04)
	struct FVector CharacterLocation; // 0x4ec(0x0c)
	struct APBGameState_Elimination* EliminationState; // 0x4f8(0x08)
	struct UMaterialInstanceDynamic* ZoneDynamic; // 0x500(0x08)
	char ZoneID; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct TArray<struct APBCapturableZone*> AllCapturableZones; // 0x510(0x10)
	bool Is Player In; // 0x520(0x01)

	float GetArrowTranslation(struct FVector2D ViewportPosition); // Function CapturableZoneWidget.CapturableZoneWidget_C.GetArrowTranslation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetShow(bool Hide); // Function CapturableZoneWidget.CapturableZoneWidget_C.SetShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetIcon(struct FVector2D PlanePosition, bool HideDis); // Function CapturableZoneWidget.CapturableZoneWidget_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FindPositionOnScreenEdge(struct FVector2D InPosition, struct FVector2D EdgeSize, struct FVector2D ScreenPosition); // Function CapturableZoneWidget.CapturableZoneWidget_C.FindPositionOnScreenEdge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsOnCircle(bool In); // Function CapturableZoneWidget.CapturableZoneWidget_C.IsOnCircle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsOnScreen(struct FVector2D InPosition, struct FVector2D InEdgeSize, bool In); // Function CapturableZoneWidget.CapturableZoneWidget_C.IsOnScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CapturableZoneWidget.CapturableZoneWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function CapturableZoneWidget.CapturableZoneWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function CapturableZoneWidget.CapturableZoneWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_CapturableZoneWidget(int32_t EntryPoint); // Function CapturableZoneWidget.CapturableZoneWidget_C.ExecuteUbergraph_CapturableZoneWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

