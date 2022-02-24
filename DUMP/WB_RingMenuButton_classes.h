// WidgetBlueprintGeneratedClass WB_RingMenuButton.WB_RingMenuButton_C
// Size: 0x360 (Inherited: 0x268)
struct UWB_RingMenuButton_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Img_Glow; // 0x270(0x08)
	struct UButton* MenuButton; // 0x278(0x08)
	struct UTextBlock* TextBlock_160; // 0x280(0x08)
	struct FName ButtonID; // 0x288(0x08)
	struct UTexture2D* CenterImage; // 0x290(0x08)
	struct UTexture2D* NewVar_5; // 0x298(0x08)
	int32_t ButtonSlot; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FText ButtonName; // 0x2a8(0x18)
	struct FText ButtonDesc; // 0x2c0(0x18)
	struct UTexture2D* DefaultButton; // 0x2d8(0x08)
	struct UWB_RingMenu_C* ParentMenu; // 0x2e0(0x08)
	struct FLinearColor InactiveColor; // 0x2e8(0x10)
	struct FLinearColor HoveredColor; // 0x2f8(0x10)
	bool IsHovered?; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	struct FLinearColor StartColor; // 0x30c(0x10)
	struct FLinearColor NewVar_3; // 0x31c(0x10)
	float ColorBlendSpeed; // 0x32c(0x04)
	struct FLinearColor UnHoveredColor; // 0x330(0x10)
	bool ConfirmSelect; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	struct FName ConfirmedID; // 0x344(0x08)
	bool Debug?; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	int32_t ConfirmSlot; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct AGAC_BP_C* CastedCharacter; // 0x358(0x08)

	struct FText GetText_1(); // Function WB_RingMenuButton.WB_RingMenuButton_C.GetText_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void getSlot(int32_t Slot); // Function WB_RingMenuButton.WB_RingMenuButton_C.getSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResetConfirm(); // Function WB_RingMenuButton.WB_RingMenuButton_C.ResetConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetID(struct FName ID); // Function WB_RingMenuButton.WB_RingMenuButton_C.GetID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetConfirm(); // Function WB_RingMenuButton.WB_RingMenuButton_C.SetConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetHovered(); // Function WB_RingMenuButton.WB_RingMenuButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsActive(bool NewParam); // Function WB_RingMenuButton.WB_RingMenuButton_C.IsActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetUnhovered(); // Function WB_RingMenuButton.WB_RingMenuButton_C.SetUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetParentMenu(struct UWB_RingMenu_C* ParentMenu); // Function WB_RingMenuButton.WB_RingMenuButton_C.SetParentMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetButtonInfo(struct FRingMenu_Struct MenuInfo); // Function WB_RingMenuButton.WB_RingMenuButton_C.SetButtonInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetColors(struct FLinearColor HoveredColorL, struct FLinearColor UnHoveredColor, struct FLinearColor InactiveColor, float ColorBlendSpeed); // Function WB_RingMenuButton.WB_RingMenuButton_C.SetColors // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Selected(); // Function WB_RingMenuButton.WB_RingMenuButton_C.Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_WB_RingMenuButton(int32_t EntryPoint); // Function WB_RingMenuButton.WB_RingMenuButton_C.ExecuteUbergraph_WB_RingMenuButton // (Final|UbergraphFunction) // @ game+0x1556ec0
};

