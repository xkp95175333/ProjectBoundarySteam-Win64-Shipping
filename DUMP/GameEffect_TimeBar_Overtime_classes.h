// WidgetBlueprintGeneratedClass GameEffect_TimeBar_Overtime.GameEffect_TimeBar_Overtime_C
// Size: 0x419 (Inherited: 0x3c8)
struct UGameEffect_TimeBar_Overtime_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* ContestedFlash; // 0x3d0(0x08)
	struct UTextBlock* CountTime_Text; // 0x3d8(0x08)
	struct UTextBlock* CountTime_Text_Copy; // 0x3e0(0x08)
	struct UImage* Progress_Right; // 0x3e8(0x08)
	struct URetainerBox* RetainerBox_1; // 0x3f0(0x08)
	struct USizeBox* SizeBox_28; // 0x3f8(0x08)
	bool IsCountTimePause; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FColor Yellow; // 0x404(0x04)
	struct FColor Grey; // 0x408(0x04)
	float CountTime; // 0x40c(0x04)
	int32_t CountTimeInt; // 0x410(0x04)
	float CountTimeAnim; // 0x414(0x04)
	bool IsContested; // 0x418(0x01)

	void ProgressBar_StatusChange(bool IsPause, bool IsContested); // Function GameEffect_TimeBar_Overtime.GameEffect_TimeBar_Overtime_C.ProgressBar_StatusChange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ProgressBar_CountTimeAnim(); // Function GameEffect_TimeBar_Overtime.GameEffect_TimeBar_Overtime_C.ProgressBar_CountTimeAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function GameEffect_TimeBar_Overtime.GameEffect_TimeBar_Overtime_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function GameEffect_TimeBar_Overtime.GameEffect_TimeBar_Overtime_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GameEffect_TimeBar_Overtime(int32_t EntryPoint); // Function GameEffect_TimeBar_Overtime.GameEffect_TimeBar_Overtime_C.ExecuteUbergraph_GameEffect_TimeBar_Overtime // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

