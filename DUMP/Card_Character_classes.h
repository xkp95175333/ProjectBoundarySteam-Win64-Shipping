// WidgetBlueprintGeneratedClass Card_Character.Card_Character_C
// Size: 0x508 (Inherited: 0x460)
struct UCard_Character_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* FocusOn; // 0x468(0x08)
	struct UButton* btn; // 0x470(0x08)
	struct UImage* FocusMask; // 0x478(0x08)
	struct UImage* Image; // 0x480(0x08)
	struct UImage* Image_1; // 0x488(0x08)
	struct UImage* Image_356; // 0x490(0x08)
	struct UImage* Image_357; // 0x498(0x08)
	struct UCanvasPanel* MainBoard; // 0x4a0(0x08)
	struct UImage* MainImage; // 0x4a8(0x08)
	struct UOverlay* Overlay_1; // 0x4b0(0x08)
	struct UImage* Role_Class; // 0x4b8(0x08)
	struct UImage* Role_Class_2; // 0x4c0(0x08)
	struct UUnlockIcon_v3_C* UnlockIcon_v3; // 0x4c8(0x08)
	struct FName RoleId; // 0x4d0(0x08)
	struct FMulticastInlineDelegate ButtonBeenFocused; // 0x4d8(0x10)
	struct UCustomize_C* SavedCustomize; // 0x4e8(0x08)
	struct FMulticastInlineDelegate ButtonBeenClicked; // 0x4f0(0x10)
	struct UPBCustomManager_BP_C* PBCustomManagerBP; // 0x500(0x08)

	void UnlockStatus(bool Success, bool Output); // Function Card_Character.Card_Character_C.UnlockStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetPBCustomManager_BP(struct UPBCustomManager_BP_C* PBCustomManagerBP); // Function Card_Character.Card_Character_C.GetPBCustomManager_BP // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetLockStyle(bool NewLocked); // Function Card_Character.Card_Character_C.SetLockStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HackByJaqenToSetImage(); // Function Card_Character.Card_Character_C.HackByJaqenToSetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function Card_Character.Card_Character_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnFocused(); // Function Card_Character.Card_Character_C.OnFocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnUnfocused(); // Function Card_Character.Card_Character_C.OnUnfocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInteractableOnKeyboard(bool NewInteractable); // Function Card_Character.Card_Character_C.SetInteractableOnKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Card_Character.Card_Character_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_Character.Card_Character_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_Character.Card_Character_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_Character.Card_Character_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Card_Character.Card_Character_C.BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Card_Character.Card_Character_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Character.Card_Character_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void UnlockComplete(bool bSuccess); // Function Card_Character.Card_Character_C.UnlockComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Character.Card_Character_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void MouseLeft(); // Function Card_Character.Card_Character_C.MouseLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Character(int32_t EntryPoint); // Function Card_Character.Card_Character_C.ExecuteUbergraph_Card_Character // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void ButtonBeenClicked__DelegateSignature(struct FName RoleId); // Function Card_Character.Card_Character_C.ButtonBeenClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ButtonBeenFocused__DelegateSignature(struct FName Role ID, bool IsLocked); // Function Card_Character.Card_Character_C.ButtonBeenFocused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

