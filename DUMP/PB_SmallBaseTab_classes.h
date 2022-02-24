// WidgetBlueprintGeneratedClass PB_SmallBaseTab.PB_SmallBaseTab_C
// Size: 0x32a (Inherited: 0x301)
struct UPB_SmallBaseTab_C : UPB_BaseTab_C {
	char pad_301[0x7]; // 0x301(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UImage* FocusBar; // 0x310(0x08)
	struct UButton* SubClassbtn; // 0x318(0x08)
	struct UTextBlock* TabTitle; // 0x320(0x08)
	bool IsOnSwitch; // 0x328(0x01)
	bool IsOnHovered; // 0x329(0x01)

	void OnInitialized(); // Function PB_SmallBaseTab.PB_SmallBaseTab_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SwitchIn(); // Function PB_SmallBaseTab.PB_SmallBaseTab_C.SwitchIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchOut(); // Function PB_SmallBaseTab.PB_SmallBaseTab_C.SwitchOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function PB_SmallBaseTab.PB_SmallBaseTab_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PB_SmallBaseTab.PB_SmallBaseTab_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void On Hovered(); // Function PB_SmallBaseTab.PB_SmallBaseTab_C.On Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnUnhovered(); // Function PB_SmallBaseTab.PB_SmallBaseTab_C.OnUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PB_SmallBaseTab(int32_t EntryPoint); // Function PB_SmallBaseTab.PB_SmallBaseTab_C.ExecuteUbergraph_PB_SmallBaseTab // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

