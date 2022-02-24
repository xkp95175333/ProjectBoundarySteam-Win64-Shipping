// WidgetBlueprintGeneratedClass GameEffect_BP.GameEffect_BP_C
// Size: 0x2a8 (Inherited: 0x270)
struct UGameEffect_BP_C : UPBTopScoreBoardWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	bool IsOvertime; // 0x278(0x01)
	bool Enum; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
	struct TArray<struct UGameEffect_PlayerIcon_C*> PlayerIcon; // 0x280(0x10)
	struct UGameEffect_GoalBoard_AreaPoint_C* Board_AreaPoint; // 0x290(0x08)
	struct UInGameAchiFeedBack_C* LevelUpWidget; // 0x298(0x08)
	struct UUMG_InGameUI_ScoreIcon_C* ScoreIcon; // 0x2a0(0x08)

	void ShowRealChallenge(struct TArray<struct FName> RealtimeChallengeArray); // Function GameEffect_BP.GameEffect_BP_C.ShowRealChallenge // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowKillInfo(float KillDistance, struct FText TargetName, enum class EPBHitZone HitZone); // Function GameEffect_BP.GameEffect_BP_C.ShowKillInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RemoveRealChallengeWidget(); // Function GameEffect_BP.GameEffect_BP_C.RemoveRealChallengeWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HandleRealChallengeWidgetShow(struct TArray<struct FName> InRealChallengeArray); // Function GameEffect_BP.GameEffect_BP_C.HandleRealChallengeWidgetShow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshMemberInfo(); // Function GameEffect_BP.GameEffect_BP_C.RefreshMemberInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateMemberIcons(); // Function GameEffect_BP.GameEffect_BP_C.K2_UpdateMemberIcons // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function GameEffect_BP.GameEffect_BP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GameEffect_BP(int32_t EntryPoint); // Function GameEffect_BP.GameEffect_BP_C.ExecuteUbergraph_GameEffect_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

