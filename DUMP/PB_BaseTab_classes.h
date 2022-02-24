// WidgetBlueprintGeneratedClass PB_BaseTab.PB_BaseTab_C
// Size: 0x301 (Inherited: 0x268)
struct UPB_BaseTab_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* HoverOn; // 0x270(0x08)
	struct UWidgetAnimation* FocusOn; // 0x278(0x08)
	struct UButton* btn; // 0x280(0x08)
	struct UCanvasPanel* FocusBoard; // 0x288(0x08)
	struct UImage* FocusGradual; // 0x290(0x08)
	struct UImage* FocusLine; // 0x298(0x08)
	struct UCanvasPanel* HoverBoard; // 0x2a0(0x08)
	struct UImage* HoverGradual; // 0x2a8(0x08)
	struct UImage* Lattice; // 0x2b0(0x08)
	struct UCanvasPanel* MainBoard; // 0x2b8(0x08)
	struct UTextBlock* Tab_Text; // 0x2c0(0x08)
	struct UOverlay* TextBoard; // 0x2c8(0x08)
	struct UUnlockIcon_v3_C* UnlockIcon_v3; // 0x2d0(0x08)
	struct FText TabText; // 0x2d8(0x18)
	bool IsTabEnable; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct UUserWidget* father; // 0x2f8(0x08)
	bool IsFocus; // 0x300(0x01)

	void SwitchIn(); // Function PB_BaseTab.PB_BaseTab_C.SwitchIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchOut(); // Function PB_BaseTab.PB_BaseTab_C.SwitchOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function PB_BaseTab.PB_BaseTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void On Hovered(); // Function PB_BaseTab.PB_BaseTab_C.On Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnUnhovered(); // Function PB_BaseTab.PB_BaseTab_C.OnUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnClicked(); // Function PB_BaseTab.PB_BaseTab_C.OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function PB_BaseTab.PB_BaseTab_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetLocked(bool IsTabEnable); // Function PB_BaseTab.PB_BaseTab_C.Designer_SetLocked // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function PB_BaseTab.PB_BaseTab_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PB_BaseTab(int32_t EntryPoint); // Function PB_BaseTab.PB_BaseTab_C.ExecuteUbergraph_PB_BaseTab // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

