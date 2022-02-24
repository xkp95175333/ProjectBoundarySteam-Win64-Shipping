// WidgetBlueprintGeneratedClass ConfirmPageV2.ConfirmPageV2_C
// Size: 0x300 (Inherited: 0x268)
struct UConfirmPageV2_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UButton* Button_LeavePage; // 0x270(0x08)
	struct UCanvasPanel* CanvasPanel_TipS; // 0x278(0x08)
	struct UImage* Image_1; // 0x280(0x08)
	struct UImage* KeyIcon; // 0x288(0x08)
	struct UTextBlock* KeyText; // 0x290(0x08)
	struct UTextBlock* Title; // 0x298(0x08)
	struct FText TitleText; // 0x2a0(0x18)
	struct FText KeyName; // 0x2b8(0x18)
	struct UTexture2D* KeyIconImage; // 0x2d0(0x08)
	float KeyIconHeight; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UTextBlock* NewVar_1; // 0x2e0(0x08)
	bool IsHaveButton; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FMulticastInlineDelegate ButtonClicked; // 0x2f0(0x10)

	void PreConstruct(bool IsDesignTime); // Function ConfirmPageV2.ConfirmPageV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_LeavePage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ConfirmPageV2.ConfirmPageV2_C.BndEvt__Button_LeavePage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ConfirmPageV2(int32_t EntryPoint); // Function ConfirmPageV2.ConfirmPageV2_C.ExecuteUbergraph_ConfirmPageV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void ButtonClicked__DelegateSignature(); // Function ConfirmPageV2.ConfirmPageV2_C.ButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

