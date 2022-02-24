// WidgetBlueprintGeneratedClass BottomTipsBar.BottomTipsBar_C
// Size: 0x2c2 (Inherited: 0x268)
struct UBottomTipsBar_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBottomTips_C* Back; // 0x270(0x08)
	struct UBottomTips_C* Preview; // 0x278(0x08)
	struct UBottomTips_C* Refresh; // 0x280(0x08)
	struct UBottomTips_C* Reset; // 0x288(0x08)
	struct UBottomTips_C* Select; // 0x290(0x08)
	struct UBottomTips_C* Setting; // 0x298(0x08)
	struct UBottomTips_C* SwitchMenu; // 0x2a0(0x08)
	struct UBottomTips_C* TestWeapon; // 0x2a8(0x08)
	struct UBottomTips_C* Zoom; // 0x2b0(0x08)
	bool bBack; // 0x2b8(0x01)
	bool bRefresh; // 0x2b9(0x01)
	bool bSelect; // 0x2ba(0x01)
	bool bSwitchMenu; // 0x2bb(0x01)
	bool bTestWeapon; // 0x2bc(0x01)
	bool bSetting; // 0x2bd(0x01)
	bool bPreview; // 0x2be(0x01)
	bool bZoom; // 0x2bf(0x01)
	bool bReset; // 0x2c0(0x01)
	bool ShouldShowConfirm; // 0x2c1(0x01)

	void PreConstruct(bool IsDesignTime); // Function BottomTipsBar.BottomTipsBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function BottomTipsBar.BottomTipsBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void RefreshBar(bool bBack, bool bRefresh, bool bSwitchMenu, bool bSelect, bool bTestWeapon, bool bSetting, bool bPreview, bool bZoom, bool bReset); // Function BottomTipsBar.BottomTipsBar_C.RefreshBar // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function BottomTipsBar.BottomTipsBar_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void InputDeviceChanged(enum class EInputDevice CurrentDevice); // Function BottomTipsBar.BottomTipsBar_C.InputDeviceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AutoRefresh(); // Function BottomTipsBar.BottomTipsBar_C.AutoRefresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_BottomTipsBar(int32_t EntryPoint); // Function BottomTipsBar.BottomTipsBar_C.ExecuteUbergraph_BottomTipsBar // (Final|UbergraphFunction) // @ game+0x1556ec0
};

