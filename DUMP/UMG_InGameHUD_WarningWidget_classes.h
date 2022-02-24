// WidgetBlueprintGeneratedClass UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C
// Size: 0x330 (Inherited: 0x270)
struct UUMG_InGameHUD_WarningWidget_C : UPBWarningWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* ActiveAnimation; // 0x278(0x08)
	struct UWidgetAnimation* IntoDeadZoneTextColorAnimation; // 0x280(0x08)
	struct UBorder* Border_1; // 0x288(0x08)
	struct UBorder* Border_2; // 0x290(0x08)
	struct UImage* Image_113; // 0x298(0x08)
	struct UImage* Image_209; // 0x2a0(0x08)
	struct UImage* Image_316; // 0x2a8(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x2b0(0x08)
	struct UTextBlock* MarkTex; // 0x2b8(0x08)
	struct UTextBlock* OutOfBoundCoundDown; // 0x2c0(0x08)
	struct UTextBlock* OutOfBoundCoundDown_2; // 0x2c8(0x08)
	struct UOverlay* OverlayWarningCountDown; // 0x2d0(0x08)
	struct UUMG_InGameHUD_WarningWidget_BackpackDown_C* UMG_InGameHUD_WarningWidget_BackpackDown; // 0x2d8(0x08)
	int32_t CurrentStatePior; // 0x2e0(0x04)
	struct FStruct_GamePlayEvent GE_Mark; // 0x2e4(0x08)
	struct FStruct_GamePlayEvent GE_OutOfSafeZone; // 0x2ec(0x08)
	struct FStruct_GamePlayEvent GE_IntoDeadZone; // 0x2f4(0x08)
	int32_t MaxPiorPoint; // 0x2fc(0x04)
	struct FStruct_GamePlayEvent GE_EnemyNearBy; // 0x300(0x08)
	struct UUMG_InGameHUD_Mother_C* ParientHUD; // 0x308(0x08)
	bool IsEnemyNearby; // 0x310(0x01)
	bool IsEnemyNearbyTemp; // 0x311(0x01)
	char pad_312[0x2]; // 0x312(0x02)
	struct FStruct_GamePlayEvent GE_VehicleDown; // 0x314(0x08)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct USoundBase* EMUDamagedSound; // 0x320(0x08)
	struct FTimerHandle CountDownTimer; // 0x328(0x08)

	void UpdateCountDownTime(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.UpdateCountDownTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCountDownVisiable(enum class ESlateVisibility InVisibility); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.SetCountDownVisiable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Sound_IntoDeadZone(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.Sound_IntoDeadZone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DeactiveAllEvent(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.DeactiveAllEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayActiveAnimation(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.PlayActiveAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopAnimations(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.StopAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRefreshText(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.OnRefreshText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetText(struct FText InText, struct FLinearColor TextColor); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRefreshStatePior(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.OnRefreshStatePior // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveThreadEvent(int32_t ThreadPoint); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.ReceiveThreadEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_FellOutOfWorld(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.K2_FellOutOfWorld // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_MarkCleared(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.K2_MarkCleared // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Marked(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.K2_Marked // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ReEnterWorld(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.K2_ReEnterWorld // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ReEnterSafeZoom(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.K2_ReEnterSafeZoom // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OutOfSafeZoom(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.K2_OutOfSafeZoom // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Init(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.K2_Init // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* Parient); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EventRefreshEnemyNearByState(bool IsEnemyNearby); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.EventRefreshEnemyNearByState // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_VehicleDown(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.K2_VehicleDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_VehicleRestart(); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.K2_VehicleRestart // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_WarningWidget(int32_t EntryPoint); // Function UMG_InGameHUD_WarningWidget.UMG_InGameHUD_WarningWidget_C.ExecuteUbergraph_UMG_InGameHUD_WarningWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

