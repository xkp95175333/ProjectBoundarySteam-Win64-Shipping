// WidgetBlueprintGeneratedClass UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C
// Size: 0x2d8 (Inherited: 0x268)
struct UUMG_InGameHUD_WarningWidget_BackpackDown_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* ActiveAnimation; // 0x270(0x08)
	struct UWidgetAnimation* IntoDeadZoneTextColorAnimation; // 0x278(0x08)
	struct UBorder* Border_1; // 0x280(0x08)
	struct UImage* Image_209; // 0x288(0x08)
	struct UImage* Image_316; // 0x290(0x08)
	struct UTextBlock* MarkTex; // 0x298(0x08)
	int32_t CurrentStatePior; // 0x2a0(0x04)
	int32_t MaxPiorPoint; // 0x2a4(0x04)
	struct UUMG_InGameHUD_Mother_C* ParientHUD; // 0x2a8(0x08)
	bool IsEnemyNearby; // 0x2b0(0x01)
	bool IsEnemyNearbyTemp; // 0x2b1(0x01)
	char pad_2B2[0x6]; // 0x2b2(0x06)
	struct USoundBase* EnemyNearByActiveSound; // 0x2b8(0x08)
	struct FStruct_GamePlayEvent GE_VehicleDown; // 0x2c0(0x08)
	struct USoundBase* EMUDamagedSound; // 0x2c8(0x08)
	struct FTimerHandle CountDownTimer; // 0x2d0(0x08)

	void SetCountDownVisiable(enum class ESlateVisibility InVisibility); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.SetCountDownVisiable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DeactiveAllEvent(); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.DeactiveAllEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayActiveAnimation(); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.PlayActiveAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopAnimations(); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.StopAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRefreshText(); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.OnRefreshText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetText(struct FText InText, struct FLinearColor TextColor); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRefreshStatePior(); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.OnRefreshStatePior // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveThreadEvent(int32_t ThreadPoint); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.ReceiveThreadEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* Parient); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_Init_2(); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.K2_Init_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_WarningWidget_BackpackDown(int32_t EntryPoint); // Function UMG_InGameHUD_WarningWidget_BackpackDown.UMG_InGameHUD_WarningWidget_BackpackDown_C.ExecuteUbergraph_UMG_InGameHUD_WarningWidget_BackpackDown // (Final|UbergraphFunction) // @ game+0x1556ec0
};

