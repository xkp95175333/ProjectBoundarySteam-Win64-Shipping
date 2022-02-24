// BlueprintGeneratedClass PBGameMode_Menu_BP.PBGameMode_Menu_BP_C
// Size: 0x560 (Inherited: 0x530)
struct APBGameMode_Menu_BP_C : APBGameMode_Menu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x538(0x08)
	float SkyColor; // 0x540(0x04)
	float SkyColorCache; // 0x544(0x04)
	struct UUMG_InGameUI_HitTargetFeedbackFork_C* HitTargetFeedbackForkWidget; // 0x548(0x08)
	struct UBlackFader_C* FaderWidget; // 0x550(0x08)
	struct UPBMainMenuWidget* MenuWidget; // 0x558(0x08)

	struct UBlackFader_C* Get Fader Widget(); // Function PBGameMode_Menu_BP.PBGameMode_Menu_BP_C.Get Fader Widget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_EnterTestWeapon(); // Function PBGameMode_Menu_BP.PBGameMode_Menu_BP_C.K2_EnterTestWeapon // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_LeaveTestWeapon(); // Function PBGameMode_Menu_BP.PBGameMode_Menu_BP_C.K2_LeaveTestWeapon // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_TestWeaponLevelShown(); // Function PBGameMode_Menu_BP.PBGameMode_Menu_BP_C.K2_TestWeaponLevelShown // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_MenuLevelShown(); // Function PBGameMode_Menu_BP.PBGameMode_Menu_BP_C.K2_MenuLevelShown // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function PBGameMode_Menu_BP.PBGameMode_Menu_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBGameMode_Menu_BP(int32_t EntryPoint); // Function PBGameMode_Menu_BP.PBGameMode_Menu_BP_C.ExecuteUbergraph_PBGameMode_Menu_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

