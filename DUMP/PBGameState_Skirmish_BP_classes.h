// BlueprintGeneratedClass PBGameState_Skirmish_BP.PBGameState_Skirmish_BP_C
// Size: 0x718 (Inherited: 0x6b8)
struct APBGameState_Skirmish_BP_C : APBGameState_Skirmish {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x6c0(0x08)
	struct TMap<struct FString, struct FText> TipsInfo; // 0x6c8(0x50)

	void ShowTips(struct FString InName); // Function PBGameState_Skirmish_BP.PBGameState_Skirmish_BP_C.ShowTips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyRegCapturalbeZone(struct APBCapturableZone_Elimination* CapturalbeZone); // Function PBGameState_Skirmish_BP.PBGameState_Skirmish_BP_C.NotifyRegCapturalbeZone // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyZoneActive(); // Function PBGameState_Skirmish_BP.PBGameState_Skirmish_BP_C.NotifyZoneActive // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Notify30secondsleft(); // Function PBGameState_Skirmish_BP.PBGameState_Skirmish_BP_C.Notify30secondsleft // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyPointWillActive(); // Function PBGameState_Skirmish_BP.PBGameState_Skirmish_BP_C.NotifyPointWillActive // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBGameState_Skirmish_BP(int32_t EntryPoint); // Function PBGameState_Skirmish_BP.PBGameState_Skirmish_BP_C.ExecuteUbergraph_PBGameState_Skirmish_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

