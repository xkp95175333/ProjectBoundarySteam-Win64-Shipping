// BlueprintGeneratedClass Base_DS_ModeWin.Base_DS_ModeWin_C
// Size: 0x258 (Inherited: 0x240)
struct ABase_DS_ModeWin_C : APBDataStatistics {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct FName ModeName; // 0x250(0x08)

	void K2_GameResultInfo(struct APBPlayerState* InPlayerState, struct FName GameModeName, enum class EPBGameResult GameResult); // Function Base_DS_ModeWin.Base_DS_ModeWin_C.K2_GameResultInfo // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Base_DS_ModeWin(int32_t EntryPoint); // Function Base_DS_ModeWin.Base_DS_ModeWin_C.ExecuteUbergraph_Base_DS_ModeWin // (Final|UbergraphFunction) // @ game+0x1556ec0
};

