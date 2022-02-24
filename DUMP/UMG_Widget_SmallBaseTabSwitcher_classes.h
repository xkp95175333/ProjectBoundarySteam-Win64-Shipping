// WidgetBlueprintGeneratedClass UMG_Widget_SmallBaseTabSwitcher.UMG_Widget_SmallBaseTabSwitcher_C
// Size: 0x300 (Inherited: 0x2dc)
struct UUMG_Widget_SmallBaseTabSwitcher_C : UPB_BaseTabSwitcher_C {
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UPBInputTipsImage* SubClass_Left_Button; // 0x2e8(0x08)
	struct UPBInputTipsImage* SubClass_RightButton; // 0x2f0(0x08)
	struct UHorizontalBox* SubClass_TopBoard; // 0x2f8(0x08)

	void SwitchTab(bool isLeft); // Function UMG_Widget_SmallBaseTabSwitcher.UMG_Widget_SmallBaseTabSwitcher_C.SwitchTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchToTab(struct UPB_BaseTab_C* InTab); // Function UMG_Widget_SmallBaseTabSwitcher.UMG_Widget_SmallBaseTabSwitcher_C.SwitchToTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Widget_SmallBaseTabSwitcher.UMG_Widget_SmallBaseTabSwitcher_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Widget_SmallBaseTabSwitcher.UMG_Widget_SmallBaseTabSwitcher_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_SmallBaseTabSwitcher(int32_t EntryPoint); // Function UMG_Widget_SmallBaseTabSwitcher.UMG_Widget_SmallBaseTabSwitcher_C.ExecuteUbergraph_UMG_Widget_SmallBaseTabSwitcher // (Final|UbergraphFunction) // @ game+0x1556ec0
};

