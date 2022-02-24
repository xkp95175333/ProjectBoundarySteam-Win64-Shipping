// WidgetBlueprintGeneratedClass GameEffect_TimeBar_Normal.GameEffect_TimeBar_Normal_C
// Size: 0x369 (Inherited: 0x270)
struct UGameEffect_TimeBar_Normal_C : UPBWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UTextBlock* Colon; // 0x278(0x08)
	struct UOverlay* EndGameBox; // 0x280(0x08)
	struct UImage* Image_53; // 0x288(0x08)
	struct UTextBlock* MajorTime; // 0x290(0x08)
	struct UTextBlock* MajorTime_2; // 0x298(0x08)
	struct UOverlay* MajorTime_Box; // 0x2a0(0x08)
	struct UTextBlock* MinorTime; // 0x2a8(0x08)
	struct UOverlay* MinorTime_Box; // 0x2b0(0x08)
	struct URetainerBox* Re_CountTime; // 0x2b8(0x08)
	struct UImage* Re_CountTime_BG; // 0x2c0(0x08)
	struct FTimerHandle CountTime; // 0x2c8(0x08)
	struct UTextBlock* colonText; // 0x2d0(0x08)
	struct FSlateColor CountDownWaringColor; // 0x2d8(0x28)
	bool bstartCheck; // 0x300(0x01)
	bool bStartCountDown; // 0x301(0x01)
	char pad_302[0x2]; // 0x302(0x02)
	int32_t CountDownNum; // 0x304(0x04)
	int32_t MinorSecond; // 0x308(0x04)
	int32_t NowTime; // 0x30c(0x04)
	int32_t RemainingTime; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct FSlateColor Red_Slate; // 0x318(0x28)
	struct FSlateColor Grey_Slate; // 0x340(0x28)
	bool IsRoundStart; // 0x368(0x01)

	void MillisecondCount(); // Function GameEffect_TimeBar_Normal.GameEffect_TimeBar_Normal_C.MillisecondCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResetTime(); // Function GameEffect_TimeBar_Normal.GameEffect_TimeBar_Normal_C.ResetTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TimeBarStatusChanged(bool IsGameStarted); // Function GameEffect_TimeBar_Normal.GameEffect_TimeBar_Normal_C.TimeBarStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckCountDownTime(); // Function GameEffect_TimeBar_Normal.GameEffect_TimeBar_Normal_C.CheckCountDownTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function GameEffect_TimeBar_Normal.GameEffect_TimeBar_Normal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function GameEffect_TimeBar_Normal.GameEffect_TimeBar_Normal_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function GameEffect_TimeBar_Normal.GameEffect_TimeBar_Normal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_MatchStart(); // Function GameEffect_TimeBar_Normal.GameEffect_TimeBar_Normal_C.CustomEvent_MatchStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_MatchEnd(); // Function GameEffect_TimeBar_Normal.GameEffect_TimeBar_Normal_C.CustomEvent_MatchEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GameEffect_TimeBar_Normal(int32_t EntryPoint); // Function GameEffect_TimeBar_Normal.GameEffect_TimeBar_Normal_C.ExecuteUbergraph_GameEffect_TimeBar_Normal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

