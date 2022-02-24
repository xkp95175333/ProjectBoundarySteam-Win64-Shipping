// WidgetBlueprintGeneratedClass SetMouseInput.SetMouseInput_C
// Size: 0x2b0 (Inherited: 0x268)
struct USetMouseInput_C : UPBUserWidget {
	struct UWidgetAnimation* SetCameraSensitivityAnimation; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_94; // 0x270(0x08)
	struct UProgressBar* ProgressBar_ADS; // 0x278(0x08)
	struct UProgressBar* ProgressBar_Camera; // 0x280(0x08)
	struct UTextBlock* Text_ADSSpeed; // 0x288(0x08)
	struct UTextBlock* Text_CameraAcceleration; // 0x290(0x08)
	struct UTextBlock* TextBlock_1; // 0x298(0x08)
	struct UTextBlock* TextBlock_CameraAcceleration; // 0x2a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Sensitivity; // 0x2a8(0x08)

	void SetADSSensitivity(); // Function SetMouseInput.SetMouseInput_C.SetADSSensitivity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCameraSensitivity(); // Function SetMouseInput.SetMouseInput_C.SetCameraSensitivity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

