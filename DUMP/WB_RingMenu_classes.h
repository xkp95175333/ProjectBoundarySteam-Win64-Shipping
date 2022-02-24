// WidgetBlueprintGeneratedClass WB_RingMenu.WB_RingMenu_C
// Size: 0x478 (Inherited: 0x268)
struct UWB_RingMenu_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Background; // 0x270(0x08)
	struct UButton* Button_264; // 0x278(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x280(0x08)
	struct UCanvasPanel* CanvasPanel_522; // 0x288(0x08)
	struct UTextBlock* FromationInfoTEX; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image_2; // 0x2a0(0x08)
	struct UImage* Image_3; // 0x2a8(0x08)
	struct UImage* Image_4; // 0x2b0(0x08)
	struct UImage* Image_5; // 0x2b8(0x08)
	struct UImage* Image_6; // 0x2c0(0x08)
	struct UImage* Image_7; // 0x2c8(0x08)
	struct UImage* Image_207; // 0x2d0(0x08)
	struct UImage* Image_278; // 0x2d8(0x08)
	struct UImage* Image_448; // 0x2e0(0x08)
	struct UImage* Image_711; // 0x2e8(0x08)
	struct UImage* Image_880; // 0x2f0(0x08)
	struct UImage* Image_1020; // 0x2f8(0x08)
	struct UCanvasPanel* InnerIndicatorCanvas; // 0x300(0x08)
	struct UTextBlock* JoinPlayerName; // 0x308(0x08)
	struct UCanvasPanel* MenuCanvas; // 0x310(0x08)
	struct UTextBlock* TEX_EnableFollowMode; // 0x318(0x08)
	struct UMaterialInstanceDynamic* RingMID; // 0x320(0x08)
	struct APlayerController_BP_C* CastedPlayerCTR; // 0x328(0x08)
	struct AGAC_BP_C* CastedPlayerPawn; // 0x330(0x08)
	struct FVector ControllerAxisInput; // 0x338(0x0c)
	float WorldDeltaTime; // 0x344(0x04)
	float ControllerAngle; // 0x348(0x04)
	struct FVector InterpInputVector; // 0x34c(0x0c)
	int32_t NumOfButtons; // 0x358(0x04)
	float ClampedControlerAngle; // 0x35c(0x04)
	float NumOfButtonsF; // 0x360(0x04)
	float ControllerThresshold; // 0x364(0x04)
	struct FVector NewVar_7; // 0x368(0x0c)
	bool PlayerHasMotionOn?; // 0x374(0x01)
	char pad_375[0x3]; // 0x375(0x03)
	int32_t InputNumb; // 0x378(0x04)
	int32_t SelectedNumb; // 0x37c(0x04)
	struct TArray<struct UWB_RingMenuButton_C*> Buttons; // 0x380(0x10)
	struct TArray<struct FRingMenu_Struct> MenuInfos; // 0x390(0x10)
	int32_t MenuInfoLength; // 0x3a0(0x04)
	int32_t ButtonLength; // 0x3a4(0x04)
	int32_t ButtonIndex; // 0x3a8(0x04)
	float RingRadius; // 0x3ac(0x04)
	float HorizontalScale; // 0x3b0(0x04)
	float ButtonSize; // 0x3b4(0x04)
	struct FVector2D Alignment; // 0x3b8(0x08)
	struct UWB_RingMenuButton_C* SelectedButton; // 0x3c0(0x08)
	bool Debuging?; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FText ItemName; // 0x3d0(0x18)
	struct FText ItemDescription; // 0x3e8(0x18)
	bool ApexMod?; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UWB_RingMenuButton_C* LastSelectedButton; // 0x408(0x08)
	float MouseLocationY; // 0x410(0x04)
	float MouseLocationX; // 0x414(0x04)
	float MouseInputScale; // 0x418(0x04)
	bool EnableTick; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	struct FText JoinPlayerNameTex; // 0x420(0x18)
	struct FText FormationButtonIntName; // 0x438(0x18)
	struct FText CenterFromationInfoTex; // 0x450(0x18)
	float NewVar_1; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UWB_RingMenuButton_C* CurrentSelectedButton; // 0x470(0x08)

	void ActiveMarking(); // Function WB_RingMenu.WB_RingMenu_C.ActiveMarking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Center Text Info(struct FText CenterFromationInfoTex, struct FText FromationButtonIntName); // Function WB_RingMenu.WB_RingMenu_C.Set Center Text Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCenterInfo(struct AGAC_BP_C* ingac); // Function WB_RingMenu.WB_RingMenu_C.SetCenterInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResertControllerInput(); // Function WB_RingMenu.WB_RingMenu_C.ResertControllerInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ToggleInViewport(); // Function WB_RingMenu.WB_RingMenu_C.ToggleInViewport // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CancelSelect(); // Function WB_RingMenu.WB_RingMenu_C.CancelSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ConfirmSelect(); // Function WB_RingMenu.WB_RingMenu_C.ConfirmSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Init(); // Function WB_RingMenu.WB_RingMenu_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshMeun(); // Function WB_RingMenu.WB_RingMenu_C.RefreshMeun // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FillInfoBox(); // Function WB_RingMenu.WB_RingMenu_C.FillInfoBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DeselectAllButtons(); // Function WB_RingMenu.WB_RingMenu_C.DeselectAllButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SelectButtons(struct UWB_RingMenuButton_C* SelectedButton); // Function WB_RingMenu.WB_RingMenu_C.SelectButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetButtonByNum(int32_t A, struct TArray<struct UWB_RingMenuButton_C*> Array, struct UWB_RingMenuButton_C* Output); // Function WB_RingMenu.WB_RingMenu_C.GetButtonByNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DrawButtonsOnScreen(); // Function WB_RingMenu.WB_RingMenu_C.DrawButtonsOnScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddItemToMenu(struct FRingMenu_Struct Item); // Function WB_RingMenu.WB_RingMenu_C.AddItemToMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ButtonToMenu(struct FRingMenu_Struct MenuInfo, struct UWB_RingMenuButton_C* Button); // Function WB_RingMenu.WB_RingMenu_C.ButtonToMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CancelSelection(); // Function WB_RingMenu.WB_RingMenu_C.CancelSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetButtonColors(struct FLinearColor HoveredColor, struct FLinearColor UnHoveredColor, struct FLinearColor InactiveColor, float ColorBlendSpeed); // Function WB_RingMenu.WB_RingMenu_C.SetButtonColors // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Hide(); // Function WB_RingMenu.WB_RingMenu_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Show(); // Function WB_RingMenu.WB_RingMenu_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_RingMenu.WB_RingMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function WB_RingMenu.WB_RingMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_WB_RingMenu(int32_t EntryPoint); // Function WB_RingMenu.WB_RingMenu_C.ExecuteUbergraph_WB_RingMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

