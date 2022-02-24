// WidgetBlueprintGeneratedClass Medal_v2.Medal_v2_C
// Size: 0x4b0 (Inherited: 0x3d8)
struct UMedal_v2_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UTextBlock* CurrentIndex; // 0x3e0(0x08)
	struct UTextBlock* MaxCount; // 0x3e8(0x08)
	struct UMedalInfo_C* MedalInfo; // 0x3f0(0x08)
	struct UScrollBox* ScrollBox_80; // 0x3f8(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x400(0x08)
	struct UWrapBox* WrapBox_Challenge; // 0x408(0x08)
	struct TMap<struct FName, struct FFPB_MedalDetailsConfig_BP> MedalDetailsConfigMap; // 0x410(0x50)
	struct TMap<struct FName, int32_t> ObtainedMedalCountMap; // 0x460(0x50)

	void SetMaxCount(); // Function Medal_v2.Medal_v2_C.SetMaxCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCurrentIndex(int32_t InSerialNumber); // Function Medal_v2.Medal_v2_C.SetCurrentIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowMedalDetails(struct FName InMedalID); // Function Medal_v2.Medal_v2_C.ShowMedalDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Medal_v2.Medal_v2_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function Medal_v2.Medal_v2_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshInfo(); // Function Medal_v2.Medal_v2_C.RefreshInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetMedalsCount(); // Function Medal_v2.Medal_v2_C.GetMedalsCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Back(); // Function Medal_v2.Medal_v2_C.Back // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Medal_v2.Medal_v2_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Medal_v2.Medal_v2_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function Medal_v2.Medal_v2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Medal_v2.Medal_v2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Medal_v2(int32_t EntryPoint); // Function Medal_v2.Medal_v2_C.ExecuteUbergraph_Medal_v2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

