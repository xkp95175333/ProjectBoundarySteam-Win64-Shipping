// WidgetBlueprintGeneratedClass UMG_SubSetting_Controller.UMG_SubSetting_Controller_C
// Size: 0x530 (Inherited: 0x3d8)
struct UUMG_SubSetting_Controller_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UUMG_Card_EnumOption_C* ControllerType; // 0x3e0(0x08)
	struct UUMG_Card_EnumOption_C* ControllerType_2; // 0x3e8(0x08)
	struct UUMG_Card_EnumOption_C* MO_JoystickPattern; // 0x3f0(0x08)
	struct UCard_NewPageOptions_C* NO_ButtonPreset; // 0x3f8(0x08)
	struct UScrollBox* ScrollBox_1; // 0x400(0x08)
	struct UUMG_Card_FloatOption_C* SL_DeadZone; // 0x408(0x08)
	struct UUMG_Card_FloatOption_C* SL_GamepadADSSpeed; // 0x410(0x08)
	struct UUMG_Card_FloatOption_C* SL_GamepadADSSpeedX; // 0x418(0x08)
	struct UUMG_Card_FloatOption_C* SL_GamepadADSSpeedY; // 0x420(0x08)
	struct UUMG_Card_FloatOption_C* SL_GamepadSpeed; // 0x428(0x08)
	struct UUMG_Card_FloatOption_C* SL_GamepadSpeedX; // 0x430(0x08)
	struct UUMG_Card_FloatOption_C* SL_GamepadSpeedY; // 0x438(0x08)
	struct UUMG_Card_FloatOption_C* SL_MotionADSSpeed; // 0x440(0x08)
	struct UUMG_Card_FloatOption_C* SL_MotionADSSpeedX; // 0x448(0x08)
	struct UUMG_Card_FloatOption_C* SL_MotionADSSpeedY; // 0x450(0x08)
	struct UUMG_Card_FloatOption_C* SL_MotionSpeed; // 0x458(0x08)
	struct UUMG_Card_FloatOption_C* SL_MotionSpeedX; // 0x460(0x08)
	struct UUMG_Card_FloatOption_C* SL_MotionSpeedY; // 0x468(0x08)
	struct UUMG_Card_BoolOption_C* SO_AimingAssist; // 0x470(0x08)
	struct UUMG_Card_BoolOption_C* SO_EnableMotion; // 0x478(0x08)
	struct UUMG_Card_BoolOption_C* SO_EnableVibration; // 0x480(0x08)
	struct UUMG_Card_BoolOption_C* SO_InvertY; // 0x488(0x08)
	struct UUMG_Card_BoolOption_C* SO_MotionInvertY; // 0x490(0x08)
	struct FMulticastInlineDelegate NoDefaultFocus; // 0x498(0x10)
	struct FMulticastInlineDelegate Skip; // 0x4a8(0x10)
	struct TMap<struct FString, float> CompletetChallengeArray; // 0x4b8(0x50)
	struct FString MaxProcessName; // 0x508(0x10)
	float MaxProcessData; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct TArray<struct FString> TempGameRoundChallengeAchievement; // 0x520(0x10)

	void ScrollItemFocus(struct UWidget* Item); // Function UMG_SubSetting_Controller.UMG_SubSetting_Controller_C.ScrollItemFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_SubSetting_Controller.UMG_SubSetting_Controller_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function UMG_SubSetting_Controller.UMG_SubSetting_Controller_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function UMG_SubSetting_Controller.UMG_SubSetting_Controller_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__NO_ButtonPreset_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function UMG_SubSetting_Controller.UMG_SubSetting_Controller_C.BndEvt__NO_ButtonPreset_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function UMG_SubSetting_Controller.UMG_SubSetting_Controller_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_SubSetting_Controller(int32_t EntryPoint); // Function UMG_SubSetting_Controller.UMG_SubSetting_Controller_C.ExecuteUbergraph_UMG_SubSetting_Controller // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Skip__DelegateSignature(); // Function UMG_SubSetting_Controller.UMG_SubSetting_Controller_C.Skip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NoDefaultFocus__DelegateSignature(); // Function UMG_SubSetting_Controller.UMG_SubSetting_Controller_C.NoDefaultFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

