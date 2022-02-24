// WidgetBlueprintGeneratedClass PB_BaseCard.PB_BaseCard_C
// Size: 0x460 (Inherited: 0x3d8)
struct UPB_BaseCard_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct FText ButtonName; // 0x3e0(0x18)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x3f8(0x10)
	struct FS_SoundTheme SoundTheme; // 0x408(0x28)
	bool preFocus; // 0x430(0x01)
	bool IsEnable; // 0x431(0x01)
	char pad_432[0x6]; // 0x432(0x06)
	struct UButton* Parent_Btn; // 0x438(0x08)
	bool bInitComplete; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UUserWidget* nullptr; // 0x448(0x08)
	struct FMulticastInlineDelegate OnTabSwitched; // 0x450(0x10)

	void InitElements(struct UButton* Parent_Btn); // Function PB_BaseCard.PB_BaseCard_C.InitElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HandleOnFocus(bool newIsFocused); // Function PB_BaseCard.PB_BaseCard_C.HandleOnFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TickCheckFocus(); // Function PB_BaseCard.PB_BaseCard_C.TickCheckFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function PB_BaseCard.PB_BaseCard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function PB_BaseCard.PB_BaseCard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnEnable(); // Function PB_BaseCard.PB_BaseCard_C.OnEnable // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnDisable(); // Function PB_BaseCard.PB_BaseCard_C.OnDisable // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function PB_BaseCard.PB_BaseCard_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function PB_BaseCard.PB_BaseCard_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void MyOnClicked(); // Function PB_BaseCard.PB_BaseCard_C.MyOnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MyOnHovered(); // Function PB_BaseCard.PB_BaseCard_C.MyOnHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MyOnUnhovered(); // Function PB_BaseCard.PB_BaseCard_C.MyOnUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInteractableOnKeyboard(bool NewInteractable); // Function PB_BaseCard.PB_BaseCard_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function PB_BaseCard.PB_BaseCard_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PB_BaseCard(int32_t EntryPoint); // Function PB_BaseCard.PB_BaseCard_C.ExecuteUbergraph_PB_BaseCard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnTabSwitched__DelegateSignature(int32_t InTabIndex, int32_t OutTabIndex); // Function PB_BaseCard.PB_BaseCard_C.OnTabSwitched__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnButtonClicked__DelegateSignature(); // Function PB_BaseCard.PB_BaseCard_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

