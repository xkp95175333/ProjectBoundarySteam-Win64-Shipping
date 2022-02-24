// WidgetBlueprintGeneratedClass HostHasLeftTheGame.HostHasLeftTheGame_C
// Size: 0x2e8 (Inherited: 0x2b8)
struct UHostHasLeftTheGame_C : UPBConfirmationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UButton* Button_LeavePage; // 0x2c0(0x08)
	struct UImage* Image_1; // 0x2c8(0x08)
	struct UImage* Image_2; // 0x2d0(0x08)
	struct UTextBlock* MessageText; // 0x2d8(0x08)
	struct UPBInputTipsImage* PBInputTipsImage_1; // 0x2e0(0x08)

	void Construct(); // Function HostHasLeftTheGame.HostHasLeftTheGame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HostHasLeftTheGame.HostHasLeftTheGame_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_LeavePage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function HostHasLeftTheGame.HostHasLeftTheGame_C.BndEvt__Button_LeavePage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void InitFocus(); // Function HostHasLeftTheGame.HostHasLeftTheGame_C.InitFocus // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_HostHasLeftTheGame(int32_t EntryPoint); // Function HostHasLeftTheGame.HostHasLeftTheGame_C.ExecuteUbergraph_HostHasLeftTheGame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

