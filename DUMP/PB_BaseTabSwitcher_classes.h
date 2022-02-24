// WidgetBlueprintGeneratedClass PB_BaseTabSwitcher.PB_BaseTabSwitcher_C
// Size: 0x2dc (Inherited: 0x268)
struct UPB_BaseTabSwitcher_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UPBInputTipsImage* Left_Button; // 0x270(0x08)
	struct UPBInputTipsImage* Right_Button; // 0x278(0x08)
	struct UHorizontalBox* TopBoard; // 0x280(0x08)
	struct TArray<struct UPB_BaseTab_C*> Tabs; // 0x288(0x10)
	int32_t TabIndex; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FMulticastInlineDelegate OnTabSwitched; // 0x2a0(0x10)
	struct UPB_BaseTab_C* TabClass; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnDiabledTabSwitched; // 0x2b8(0x10)
	struct TArray<struct FTabDetail> TabDetails; // 0x2c8(0x10)
	int32_t CurTab; // 0x2d8(0x04)

	void SwitchToDisabledTab(struct UPB_BaseTab_C* InTab); // Function PB_BaseTabSwitcher.PB_BaseTabSwitcher_C.SwitchToDisabledTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchToNumTab(int32_t TabIndex); // Function PB_BaseTabSwitcher.PB_BaseTabSwitcher_C.SwitchToNumTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchToTab(struct UPB_BaseTab_C* InTab); // Function PB_BaseTabSwitcher.PB_BaseTabSwitcher_C.SwitchToTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchTab(bool isLeft); // Function PB_BaseTabSwitcher.PB_BaseTabSwitcher_C.SwitchTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function PB_BaseTabSwitcher.PB_BaseTabSwitcher_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function PB_BaseTabSwitcher.PB_BaseTabSwitcher_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PB_BaseTabSwitcher(int32_t EntryPoint); // Function PB_BaseTabSwitcher.PB_BaseTabSwitcher_C.ExecuteUbergraph_PB_BaseTabSwitcher // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnDiabledTabSwitched__DelegateSignature(int32_t Index, struct FText Text); // Function PB_BaseTabSwitcher.PB_BaseTabSwitcher_C.OnDiabledTabSwitched__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnTabSwitched__DelegateSignature(int32_t InTabIndex, int32_t OutTabIndex); // Function PB_BaseTabSwitcher.PB_BaseTabSwitcher_C.OnTabSwitched__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

