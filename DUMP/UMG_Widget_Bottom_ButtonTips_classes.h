// WidgetBlueprintGeneratedClass UMG_Widget_Bottom_ButtonTips.UMG_Widget_Bottom_ButtonTips_C
// Size: 0x339 (Inherited: 0x268)
struct UUMG_Widget_Bottom_ButtonTips_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBottomTips_C* BackTip; // 0x270(0x08)
	struct UBottomTips_C* BackToLoadOut; // 0x278(0x08)
	struct UBottomTips_C* CancelSearchingTip; // 0x280(0x08)
	struct UBottomTips_C* ConfirmTip; // 0x288(0x08)
	struct UBottomTips_C* LeaveTeamTip; // 0x290(0x08)
	struct UBottomTips_C* PreviewCameraTip; // 0x298(0x08)
	struct UBottomTips_C* PreviewTip; // 0x2a0(0x08)
	struct UBottomTips_C* QuitTip; // 0x2a8(0x08)
	struct UBottomTips_C* ResetThisPageTip; // 0x2b0(0x08)
	struct UBottomTips_C* SaveTip; // 0x2b8(0x08)
	struct UBottomTips_C* SettingTip; // 0x2c0(0x08)
	struct UBottomTips_C* TestWeaponTip; // 0x2c8(0x08)
	struct UBottomTips_C* ZoomTip; // 0x2d0(0x08)
	struct TMap<enum class EPBButtonTipType, struct UBottomTips_C*> ButtonTipMap; // 0x2d8(0x50)
	struct TArray<enum class EPBButtonTipType> ShowButtonTipArray; // 0x328(0x10)
	bool ShouldShowConfirmTip; // 0x338(0x01)

	void GetTestWeaponTip(struct UBottomTips_C* TestWeaponTip); // Function UMG_Widget_Bottom_ButtonTips.UMG_Widget_Bottom_ButtonTips_C.GetTestWeaponTip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Init(); // Function UMG_Widget_Bottom_ButtonTips.UMG_Widget_Bottom_ButtonTips_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshButonTips(); // Function UMG_Widget_Bottom_ButtonTips.UMG_Widget_Bottom_ButtonTips_C.RefreshButonTips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ChangeButtonTips(struct TArray<enum class EPBButtonTipType> InShowButtonTipArray); // Function UMG_Widget_Bottom_ButtonTips.UMG_Widget_Bottom_ButtonTips_C.ChangeButtonTips // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Widget_Bottom_ButtonTips.UMG_Widget_Bottom_ButtonTips_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Widget_Bottom_ButtonTips.UMG_Widget_Bottom_ButtonTips_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Widget_Bottom_ButtonTips.UMG_Widget_Bottom_ButtonTips_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void InputDeviceChanged(enum class EInputDevice CurrentDevice); // Function UMG_Widget_Bottom_ButtonTips.UMG_Widget_Bottom_ButtonTips_C.InputDeviceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_Bottom_ButtonTips(int32_t EntryPoint); // Function UMG_Widget_Bottom_ButtonTips.UMG_Widget_Bottom_ButtonTips_C.ExecuteUbergraph_UMG_Widget_Bottom_ButtonTips // (Final|UbergraphFunction) // @ game+0x1556ec0
};

