// WidgetBlueprintGeneratedClass WelcomeMenu_V2.WelcomeMenu_V2_C
// Size: 0x440 (Inherited: 0x298)
struct UWelcomeMenu_V2_C : UPBWelcomeMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* GameHealth; // 0x2a0(0x08)
	struct UWidgetAnimation* startray; // 0x2a8(0x08)
	struct UCanvasPanel* BottomCanvas; // 0x2b0(0x08)
	struct UButton* Button_Local; // 0x2b8(0x08)
	struct UImage* EULA_BG; // 0x2c0(0x08)
	struct UImage* GameHealthReminder_BG; // 0x2c8(0x08)
	struct UButton* MainBtn; // 0x2d0(0x08)
	struct UTextBlock* Text_Message; // 0x2d8(0x08)
	struct FSlateColor Color; // 0x2e0(0x28)
	struct FSlateBrush Nomal; // 0x308(0x88)
	struct FSlateBrush Highlight; // 0x390(0x88)
	struct APBDisplayActorManager_BP_C* DisplayActor; // 0x418(0x08)
	struct TArray<struct FName> InputTipsIcon; // 0x420(0x10)
	struct UPB_GameInstance_C* PBGameInstance; // 0x430(0x08)
	struct UWidget* ContinouslyFocusWidget; // 0x438(0x08)

	void SequenceEvent__ENTRYPOINTWelcomeMenu_V2_1(struct UImage* GameHealthReminder_BG); // Function WelcomeMenu_V2.WelcomeMenu_V2_C.SequenceEvent__ENTRYPOINTWelcomeMenu_V2_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WelcomeMenu_V2.WelcomeMenu_V2_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MoveCamera(); // Function WelcomeMenu_V2.WelcomeMenu_V2_C.MoveCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function WelcomeMenu_V2.WelcomeMenu_V2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function WelcomeMenu_V2.WelcomeMenu_V2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OpenGameCamSelect(); // Function WelcomeMenu_V2.WelcomeMenu_V2_C.OpenGameCamSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_LoginPanel_K2Node_ComponentBoundEvent_9_OnAccountLoginSuccess__DelegateSignature(); // Function WelcomeMenu_V2.WelcomeMenu_V2_C.BndEvt__UMG_Widget_LoginPanel_K2Node_ComponentBoundEvent_9_OnAccountLoginSuccess__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void K2_ShowSpray(); // Function WelcomeMenu_V2.WelcomeMenu_V2_C.K2_ShowSpray // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function WelcomeMenu_V2.WelcomeMenu_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void GameHealthReminder_BG_Event_1(struct UImage* GameHealthReminder_BG); // Function WelcomeMenu_V2.WelcomeMenu_V2_C.GameHealthReminder_BG_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_WelcomeMenu_V2(int32_t EntryPoint); // Function WelcomeMenu_V2.WelcomeMenu_V2_C.ExecuteUbergraph_WelcomeMenu_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

