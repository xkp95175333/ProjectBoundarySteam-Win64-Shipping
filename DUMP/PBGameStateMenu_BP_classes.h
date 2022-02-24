// BlueprintGeneratedClass PBGameStateMenu_BP.PBGameStateMenu_BP_C
// Size: 0x770 (Inherited: 0x708)
struct APBGameStateMenu_BP_C : APBGameState_Menu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x708(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x710(0x08)
	struct FString ModeName; // 0x718(0x10)
	struct UTexture* MapTexture; // 0x728(0x08)
	struct TArray<struct FText> OptionName; // 0x730(0x10)
	struct ATutorialLevelManager_C* TutorialLevelManager; // 0x740(0x08)
	struct UBlackFader_C* FaderWidget; // 0x748(0x08)
	struct FMulticastInlineDelegate EnterTestFieldDelegate; // 0x750(0x10)
	bool bTestSecondWeapon; // 0x760(0x01)
	enum class EPBSlotType TestSlot; // 0x761(0x01)
	char pad_762[0x6]; // 0x762(0x06)
	struct UUMG_ShootingRangeWidget_C* ShootingRangePanel; // 0x768(0x08)

	void ExitShootingRangeSettingPage(); // Function PBGameStateMenu_BP.PBGameStateMenu_BP_C.ExitShootingRangeSettingPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FaderWidgetShow(); // Function PBGameStateMenu_BP.PBGameStateMenu_BP_C.FaderWidgetShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct UBlackFader_C* CreateFaderWidget(); // Function PBGameStateMenu_BP.PBGameStateMenu_BP_C.CreateFaderWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBGameStateMenu_BP.PBGameStateMenu_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBGameStateMenu_BP(int32_t EntryPoint); // Function PBGameStateMenu_BP.PBGameStateMenu_BP_C.ExecuteUbergraph_PBGameStateMenu_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void EnterTestFieldDelegate__DelegateSignature(); // Function PBGameStateMenu_BP.PBGameStateMenu_BP_C.EnterTestFieldDelegate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

