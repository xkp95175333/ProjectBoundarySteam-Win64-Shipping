// BlueprintGeneratedClass TutorialLevelRoot.TutorialLevelRoot_C
// Size: 0x258 (Inherited: 0x228)
struct ATutorialLevelRoot_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	bool CanBeOverlap; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct UOutOfVolumnWidget_C* OutofVolumWidget; // 0x238(0x08)
	int32_t OutOfVolumnConutDown; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct ATriggerVolume* TriggerVolume_1_ExecuteUbergraph_TutorialLevelRoot_RefProperty; // 0x248(0x08)
	struct APBTeamStart* PBTeamStart5_EdGraph_0_RefProperty; // 0x250(0x08)

	void ResetOutofVolumnTimer(); // Function TutorialLevelRoot.TutorialLevelRoot_C.ResetOutofVolumnTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetOutofVolumnWidget(); // Function TutorialLevelRoot.TutorialLevelRoot_C.SetOutofVolumnWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Overlap(); // Function TutorialLevelRoot.TutorialLevelRoot_C.Set Overlap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResetPlayerTransform(); // Function TutorialLevelRoot.TutorialLevelRoot_C.ResetPlayerTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function TutorialLevelRoot.TutorialLevelRoot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void End Overlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function TutorialLevelRoot.TutorialLevelRoot_C.End Overlap // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Begin Overlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function TutorialLevelRoot.TutorialLevelRoot_C.Begin Overlap // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TutorialLevelRoot.TutorialLevelRoot_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TutorialLevelRoot(int32_t EntryPoint); // Function TutorialLevelRoot.TutorialLevelRoot_C.ExecuteUbergraph_TutorialLevelRoot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

