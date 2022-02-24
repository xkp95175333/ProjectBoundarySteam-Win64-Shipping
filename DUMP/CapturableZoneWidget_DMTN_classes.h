// WidgetBlueprintGeneratedClass CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C
// Size: 0x485 (Inherited: 0x320)
struct UCapturableZoneWidget_DMTN_C : UPBIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UCanvasPanel* Board_ZoneProgressBar; // 0x328(0x08)
	struct UCanvasPanel* Board_ZoneStatus; // 0x330(0x08)
	struct UCanvasPanel* CanvasPanel_BG; // 0x338(0x08)
	struct UCanvasPanel* CanvasPanel_Indicator; // 0x340(0x08)
	struct UHorizontalBox* HorizontalBox_Arrow; // 0x348(0x08)
	struct UImage* Image_154; // 0x350(0x08)
	struct UImage* Image_346; // 0x358(0x08)
	struct UInvalidationBox* InvalidationBox_251; // 0x360(0x08)
	struct UInvalidationBox* InvalidationBox_678; // 0x368(0x08)
	struct UInvalidationBox* InvalidationBox_1040; // 0x370(0x08)
	struct UOverlay* PointBox; // 0x378(0x08)
	struct UTextBlock* PointName; // 0x380(0x08)
	struct UTextBlock* TextBlock_Distance; // 0x388(0x08)
	struct UTextBlock* TextBlock_PlayerInZoneText; // 0x390(0x08)
	struct UTextBlock* TextBlock_StatusName; // 0x398(0x08)
	struct UTextBlock* TextBlock_TextZoneName; // 0x3a0(0x08)
	struct UImage* ZoneIcon; // 0x3a8(0x08)
	struct USizeBox* ZoneIcon_Box; // 0x3b0(0x08)
	struct UImage* ZoneProgressBar; // 0x3b8(0x08)
	struct APBCapturableZone_Domination* CapturableZone; // 0x3c0(0x08)
	float Is Ally; // 0x3c8(0x04)
	enum class ZoneStatus ZoneStatus; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	struct TMap<enum class ZoneStatus, struct FText> ZoneStatusTextMap; // 0x3d0(0x50)
	struct FText ShowStatusText; // 0x420(0x18)
	float LastFreamOccupatinCompletionPoint_Globle_Losing; // 0x438(0x04)
	float LastFreamOccupatinCompletionPoint_Globle_ENETaking; // 0x43c(0x04)
	int32_t LastFrameOwningTeamNUM_Globle; // 0x440(0x04)
	int32_t LastFrameOwningTeamNUM_Globle_Taked; // 0x444(0x04)
	struct FString ZoneName; // 0x448(0x10)
	struct FText ZoneNameText; // 0x458(0x18)
	bool IsContested; // 0x470(0x01)
	bool bLocalPlayerIn; // 0x471(0x01)
	char pad_472[0x2]; // 0x472(0x02)
	int32_t CapturedTeamNum; // 0x474(0x04)
	int32_t CapturingTeamNum; // 0x478(0x04)
	int32_t LocalTeamNum; // 0x47c(0x04)
	float OccupationPoint; // 0x480(0x04)
	bool OnceTakedZone; // 0x484(0x01)

	void Try To Play All Zone Are Captured Sound(struct FName SoundName, bool PlayedSound); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.Try To Play All Zone Are Captured Sound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ChoosePlaySound(enum class ZoneStatus CurrentZoneState); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.ChoosePlaySound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateZoneText(); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.UpdateZoneText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ChangeContested(bool bNewIsContested); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.ChangeContested // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ChangeCapturingTeam(int32_t NewCapturingTeam); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.ChangeCapturingTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ChangeCapturedTeam(int32_t NewCapturedTeam); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.ChangeCapturedTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateZoneColor(); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.UpdateZoneColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateZoneStatus(); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.UpdateZoneStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	bool GetLocalPlayerIn(); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.GetLocalPlayerIn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetZoneStatus(enum class ZoneStatus CurrentZoneStatus); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.GetZoneStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void UpdatePlayerIn(); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.UpdatePlayerIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateProgressBar(); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.UpdateProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateWidget(); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateLocation(); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.UpdateLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateZoneIconSizeAndOpacity(); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.UpdateZoneIconSizeAndOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Update Zone Icon(); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.Update Zone Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateIndicatorStatus(enum class EPBIndicatorStatus NewStatus); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.K2_UpdateIndicatorStatus // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateTargetingRatio(float NewLocalPawnTargetingRatio); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.K2_UpdateTargetingRatio // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_CapturableZoneWidget_DMTN(int32_t EntryPoint); // Function CapturableZoneWidget_DMTN.CapturableZoneWidget_DMTN_C.ExecuteUbergraph_CapturableZoneWidget_DMTN // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

