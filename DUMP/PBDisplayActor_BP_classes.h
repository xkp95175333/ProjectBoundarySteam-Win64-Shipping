// BlueprintGeneratedClass PBDisplayActor_BP.PBDisplayActor_BP_C
// Size: 0x32c (Inherited: 0x220)
struct APBDisplayActor_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	struct UArrowComponent* CameraTransform; // 0x230(0x08)
	struct UArrowComponent* AttachPoint; // 0x238(0x08)
	struct UCameraComponent* Camera; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct FVector Input; // 0x250(0x0c)
	bool bHasPawnRotationInput; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct UCurveFloat* PawnFilterInput; // 0x260(0x08)
	float TargetFOV; // 0x268(0x04)
	struct FVector ResetPawnLocation; // 0x26c(0x0c)
	struct FRotator ResetPawnRotation02; // 0x278(0x0c)
	struct FRotator ResetPawnRotation01; // 0x284(0x0c)
	struct FVector ResetCameraLocation; // 0x290(0x0c)
	struct FRotator RotatorPoint; // 0x29c(0x0c)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct FTransform TransformPoint; // 0x2b0(0x30)
	struct FVector FocusPoint; // 0x2e0(0x0c)
	struct FVector MainCamLocation; // 0x2ec(0x0c)
	struct FVector Move; // 0x2f8(0x0c)
	char pad_304[0x4]; // 0x304(0x04)
	struct UArrowComponent* ActorFocusPoint; // 0x308(0x08)
	struct FVector QuadSave; // 0x310(0x0c)
	bool ShouldInput; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct FRotator LastRotator; // 0x320(0x0c)

	struct FVector QuadTrace(float ReturnHorizontalDistance); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.QuadTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCameraLocation(); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.SetCameraLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetAttach(); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.SetAttach // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResetCamTransform(); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.ResetCamTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnableInputAndControl(); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.EnableInputAndControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResetRotation(float DeltaTime); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.ResetRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TickInput(); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.TickInput // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetRotatorInput(struct FRotator Delta Rotator); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.GetRotatorInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void FilterInput(); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.FilterInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GamePadInput(); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.GamePadInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void KeyBoardInput(); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.KeyBoardInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBDisplayActor_BP(int32_t EntryPoint); // Function PBDisplayActor_BP.PBDisplayActor_BP_C.ExecuteUbergraph_PBDisplayActor_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

