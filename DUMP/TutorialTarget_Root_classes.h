// BlueprintGeneratedClass TutorialTarget_Root.TutorialTarget_Root_C
// Size: 0x2b1 (Inherited: 0x220)
struct ATutorialTarget_Root_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	int32_t FinishTimes; // 0x230(0x04)
	char pad_234[0xc]; // 0x234(0x0c)
	struct FTransform ActorTransform; // 0x240(0x30)
	struct TArray<struct AActor*> ActorArray; // 0x270(0x10)
	struct FMulticastInlineDelegate Finish; // 0x280(0x10)
	bool IsFinish; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	int32_t CurrentFinish; // 0x294(0x04)
	struct FMulticastInlineDelegate TargetFinish; // 0x298(0x10)
	struct AGAC_BP_TrainingStage_C* TrainingPawn; // 0x2a8(0x08)
	enum class ActionInputEnum NeedFinishActionInput; // 0x2b0(0x01)

	void CheckActionInput(enum class ActionInputEnum ActionInput); // Function TutorialTarget_Root.TutorialTarget_Root_C.CheckActionInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetNeedFinishActionInput(enum class ActionInputEnum ActionInput); // Function TutorialTarget_Root.TutorialTarget_Root_C.SetNeedFinishActionInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckIsTargetFinish(); // Function TutorialTarget_Root.TutorialTarget_Root_C.CheckIsTargetFinish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckAcitonInput(enum class ActionInputEnum ActionInput); // Function TutorialTarget_Root.TutorialTarget_Root_C.CheckAcitonInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set FinishAmount(int32_t HowManyTimesToFinish); // Function TutorialTarget_Root.TutorialTarget_Root_C.Set FinishAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetPlayerPosition(); // Function TutorialTarget_Root.TutorialTarget_Root_C.GetPlayerPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function TutorialTarget_Root.TutorialTarget_Root_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TutorialTarget_Root.TutorialTarget_Root_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void EventCheckIsTargetFinish(); // Function TutorialTarget_Root.TutorialTarget_Root_C.EventCheckIsTargetFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function TutorialTarget_Root.TutorialTarget_Root_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TutorialTarget_Root(int32_t EntryPoint); // Function TutorialTarget_Root.TutorialTarget_Root_C.ExecuteUbergraph_TutorialTarget_Root // (Final|UbergraphFunction) // @ game+0x1556ec0
	void TargetFinish__DelegateSignature(struct ATutorialTarget_Root_C* FinishTarget); // Function TutorialTarget_Root.TutorialTarget_Root_C.TargetFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Finish__DelegateSignature(); // Function TutorialTarget_Root.TutorialTarget_Root_C.Finish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

