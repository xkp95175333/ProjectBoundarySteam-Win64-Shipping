// WidgetBlueprintGeneratedClass GameEffect_AreaPointTips.GameEffect_AreaPointTips_C
// Size: 0x428 (Inherited: 0x3c8)
struct UGameEffect_AreaPointTips_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UImage* AreaPoint; // 0x3d0(0x08)
	struct UTextBlock* AreaPointName_Text; // 0x3d8(0x08)
	struct UTextBlock* TextZoneName; // 0x3e0(0x08)
	struct UImage* ZoneIcon; // 0x3e8(0x08)
	float ProgressValue; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct UMaterialInstanceDynamic* ZoneDynamic; // 0x3f8(0x08)
	struct APBCapturableZone_DMTN_C* CapturableZone; // 0x400(0x08)
	float IsAlly; // 0x408(0x04)
	float CapturingAnimationTimeline; // 0x40c(0x04)
	struct FText ZoneNameText; // 0x410(0x18)

	void UpdateWidget(); // Function GameEffect_AreaPointTips.GameEffect_AreaPointTips_C.UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function GameEffect_AreaPointTips.GameEffect_AreaPointTips_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function GameEffect_AreaPointTips.GameEffect_AreaPointTips_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GameEffect_AreaPointTips(int32_t EntryPoint); // Function GameEffect_AreaPointTips.GameEffect_AreaPointTips_C.ExecuteUbergraph_GameEffect_AreaPointTips // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

