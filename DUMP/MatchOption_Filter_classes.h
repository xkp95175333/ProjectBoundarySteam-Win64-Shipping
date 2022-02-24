// WidgetBlueprintGeneratedClass MatchOption_Filter.MatchOption_Filter_C
// Size: 0x458 (Inherited: 0x3d8)
struct UMatchOption_Filter_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* WarningInformation; // 0x3e0(0x08)
	struct UCard_ForSelected_C* FacilityCapture; // 0x3e8(0x08)
	struct UCard_ForSelected_C* OrbitalPurge; // 0x3f0(0x08)
	struct UCard_ForSelected_C* TeamDeathMatch; // 0x3f8(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x400(0x08)
	struct UUMG_Widget_MainTitle_C* UMG_Widget_MainTitle; // 0x408(0x08)
	struct FMulticastInlineDelegate ReturnData; // 0x410(0x10)
	bool IsPS4; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct TArray<struct FString> GameModeShortName; // 0x428(0x10)
	struct FString MatchGroupName; // 0x438(0x10)
	struct TArray<struct UCard_ForSelected_C*> SelectCardArray; // 0x448(0x10)

	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MatchOption_Filter.MatchOption_Filter_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function MatchOption_Filter.MatchOption_Filter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function MatchOption_Filter.MatchOption_Filter_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Back(); // Function MatchOption_Filter.MatchOption_Filter_C.Back // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_MatchOption_Filter(int32_t EntryPoint); // Function MatchOption_Filter.MatchOption_Filter_C.ExecuteUbergraph_MatchOption_Filter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void ReturnData__DelegateSignature(struct TArray<enum class EPBGameMode> OutGameMode); // Function MatchOption_Filter.MatchOption_Filter_C.ReturnData__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

