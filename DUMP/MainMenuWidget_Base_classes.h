// WidgetBlueprintGeneratedClass MainMenuWidget_Base.MainMenuWidget_Base_C
// Size: 0x3d8 (Inherited: 0x3c8)
struct UMainMenuWidget_Base_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UMainMenuWidget_Base_C* father; // 0x3d0(0x08)

	void FillIntoOverlay(struct UOverlay* InOverlay, struct UWidget* Content); // Function MainMenuWidget_Base.MainMenuWidget_Base_C.FillIntoOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function MainMenuWidget_Base.MainMenuWidget_Base_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function MainMenuWidget_Base.MainMenuWidget_Base_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnUnfocused(); // Function MainMenuWidget_Base.MainMenuWidget_Base_C.OnUnfocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnFocused(); // Function MainMenuWidget_Base.MainMenuWidget_Base_C.OnFocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function MainMenuWidget_Base.MainMenuWidget_Base_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function MainMenuWidget_Base.MainMenuWidget_Base_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInteractableOnKeyboard(bool NewInteractable); // Function MainMenuWidget_Base.MainMenuWidget_Base_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function MainMenuWidget_Base.MainMenuWidget_Base_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_MainMenuWidget_Base(int32_t EntryPoint); // Function MainMenuWidget_Base.MainMenuWidget_Base_C.ExecuteUbergraph_MainMenuWidget_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

