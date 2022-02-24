// BlueprintGeneratedClass DisplayActor.DisplayActor_C
// Size: 0x528 (Inherited: 0x220)
struct ADisplayActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Tac_R; // 0x228(0x08)
	struct UStaticMeshComponent* Tac_L; // 0x230(0x08)
	struct USkeletalMeshComponent* RightArm; // 0x238(0x08)
	struct USkeletalMeshComponent* LeftArm; // 0x240(0x08)
	struct UCameraComponent* Camera; // 0x248(0x08)
	struct UArrowComponent* CameraTransform; // 0x250(0x08)
	struct UArrowComponent* PawnOverviewTransform; // 0x258(0x08)
	struct USpotLightComponent* SpotLight3; // 0x260(0x08)
	struct USpotLightComponent* SpotLight2; // 0x268(0x08)
	struct URectLightComponent* RectLight2; // 0x270(0x08)
	struct URectLightComponent* RectLight; // 0x278(0x08)
	struct USpotLightComponent* SpotLight1; // 0x280(0x08)
	struct USpotLightComponent* SpotLight; // 0x288(0x08)
	struct USkeletalMeshComponent* SkeletalItemMesh; // 0x290(0x08)
	struct UArrowComponent* PawnInGameOptionTransform; // 0x298(0x08)
	struct UArrowComponent* ItemTransform; // 0x2a0(0x08)
	struct UArrowComponent* ItemInitTransform; // 0x2a8(0x08)
	struct UArrowComponent* PawnTransform; // 0x2b0(0x08)
	struct UArrowComponent* PawnInitTransform; // 0x2b8(0x08)
	struct UArrowComponent* Arrow; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticItemMesh; // 0x2c8(0x08)
	struct UStaticMeshComponent* ActorFader; // 0x2d0(0x08)
	struct USkeletalMeshComponent* AO_Mesh; // 0x2d8(0x08)
	struct UArrowComponent* PawnAttachPoint; // 0x2e0(0x08)
	struct UArrowComponent* PawnOrgin; // 0x2e8(0x08)
	struct UArrowComponent* PawnFocus; // 0x2f0(0x08)
	struct UArrowComponent* PawnRotator; // 0x2f8(0x08)
	struct UArrowComponent* ItemRotator; // 0x300(0x08)
	struct USceneComponent* Scene; // 0x308(0x08)
	struct USkeletalMeshComponent* WeaponPreviewMesh_3; // 0x310(0x08)
	struct UArrowComponent* ItemAttachPoint; // 0x318(0x08)
	struct UArrowComponent* ItemOrgin; // 0x320(0x08)
	struct UArrowComponent* ItemPartFocus; // 0x328(0x08)
	struct UStaticMeshComponent* FuncModule; // 0x330(0x08)
	struct UStaticMeshComponent* Tac_T; // 0x338(0x08)
	struct UParticleSystemComponent* GasFX; // 0x340(0x08)
	struct USkeletalMeshComponent* PackMesh; // 0x348(0x08)
	float ExtraCamBlendTimeline_Value_9EBFB6844EFA39EA790E929DA2F29EC4; // 0x350(0x04)
	enum class ETimelineDirection ExtraCamBlendTimeline__Direction_9EBFB6844EFA39EA790E929DA2F29EC4; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct UTimelineComponent* ExtraCamBlendTimeline; // 0x358(0x08)
	struct APBWeapon* Weapon1; // 0x360(0x08)
	struct APBWeapon* Weapon2; // 0x368(0x08)
	struct APBVehicle* Vehicle; // 0x370(0x08)
	struct APBWeapon* WeaponPreview; // 0x378(0x08)
	struct TMap<struct APBWeapon*, struct UAnimSequence*> WeaponUIAnimMap; // 0x380(0x50)
	enum class E_DisplayActorState CurrentDisplayState; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct USceneComponent* DisplayMainComponent; // 0x3d8(0x08)
	enum class EPBSlotType SlotType; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct USceneComponent* FocusComponent; // 0x3e8(0x08)
	bool bHasPawnRotationInput; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	struct FVector OrginOffset; // 0x3f4(0x0c)
	bool bHasItemRotationInput; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FVector Input; // 0x404(0x0c)
	struct UCurveFloat* PawnFilterInput; // 0x410(0x08)
	bool bResetPreviewWeaponTransform; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct UCurveFloat* ItemFilterInput; // 0x420(0x08)
	struct FVector ResetPawnLocation; // 0x428(0x0c)
	struct FRotator ResetPawnRotation01; // 0x434(0x0c)
	struct FRotator ResetPawnRotation02; // 0x440(0x0c)
	struct FVector ResetWeaponLocation; // 0x44c(0x0c)
	struct FRotator ResetWeaponRotation01; // 0x458(0x0c)
	struct FRotator ResetWeaponRotation02; // 0x464(0x0c)
	struct UStaticMeshComponent* Accessory3P; // 0x470(0x08)
	struct UStaticMeshComponent* Accessory1P; // 0x478(0x08)
	struct USkeletalMeshComponent* AO_Mesh_1; // 0x480(0x08)
	char pad_488[0x8]; // 0x488(0x08)
	struct FTransform InitWorldTransformCache; // 0x490(0x30)
	struct FVector ResetCameraLocation; // 0x4c0(0x0c)
	float TargetFOV; // 0x4cc(0x04)
	bool IsInPreviewState; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct TMap<struct FName, struct FPBSkin_GameSaved> NewVar_1; // 0x4d8(0x50)

	void ExitPreviewState(); // Function DisplayActor.DisplayActor_C.ExitPreviewState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterPreviewState(); // Function DisplayActor.DisplayActor_C.EnterPreviewState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GamePadInput(); // Function DisplayActor.DisplayActor_C.GamePadInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void KeyBoardInput(); // Function DisplayActor.DisplayActor_C.KeyBoardInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ApplyResetCameraTransform(float DeltaTime); // Function DisplayActor.DisplayActor_C.ApplyResetCameraTransform // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ClearOldMaterial(struct UMeshComponent* InMesh); // Function DisplayActor.DisplayActor_C.ClearOldMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResetCameraTransform(); // Function DisplayActor.DisplayActor_C.ResetCameraTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ForceNoLOD(struct AActor* Actor); // Function DisplayActor.DisplayActor_C.ForceNoLOD // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GoToExtraCamShotsForUI(bool ReturnToOriginalPosition, struct FTransform NewWorldTransform, float NewFOV, struct FTransform OutNewWorldTransform, float outNewFOV); // Function DisplayActor.DisplayActor_C.GoToExtraCamShotsForUI // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResetWeaponTransform(); // Function DisplayActor.DisplayActor_C.ResetWeaponTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResetPawnTransform(); // Function DisplayActor.DisplayActor_C.ResetPawnTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartInGameOptionMode(); // Function DisplayActor.DisplayActor_C.StartInGameOptionMode // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ChangeState(enum class E_DisplayActorState NewState); // Function DisplayActor.DisplayActor_C.ChangeState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterInGameOptionMode(); // Function DisplayActor.DisplayActor_C.EnterInGameOptionMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ApplyResetWeaponTransform(float DeltaTime); // Function DisplayActor.DisplayActor_C.ApplyResetWeaponTransform // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Apply Reset Pawn Transform(float DeltaTime); // Function DisplayActor.DisplayActor_C.Apply Reset Pawn Transform // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Filter Input(); // Function DisplayActor.DisplayActor_C.Filter Input // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndCustomItemState(); // Function DisplayActor.DisplayActor_C.EndCustomItemState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartCustomItemState(); // Function DisplayActor.DisplayActor_C.StartCustomItemState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndWeaponState(); // Function DisplayActor.DisplayActor_C.EndWeaponState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartWeaponState(); // Function DisplayActor.DisplayActor_C.StartWeaponState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterPawnState(); // Function DisplayActor.DisplayActor_C.EnterPawnState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterOverviewMode(); // Function DisplayActor.DisplayActor_C.EnterOverviewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExitCustomMode(); // Function DisplayActor.DisplayActor_C.ExitCustomMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndOverviewState(); // Function DisplayActor.DisplayActor_C.EndOverviewState // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartOverviewState(); // Function DisplayActor.DisplayActor_C.StartOverviewState // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TickOrgin(float DeltaTime); // Function DisplayActor.DisplayActor_C.TickOrgin // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndItemState(); // Function DisplayActor.DisplayActor_C.EndItemState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartItemState(); // Function DisplayActor.DisplayActor_C.StartItemState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshPerviewWeapon(); // Function DisplayActor.DisplayActor_C.RefreshPerviewWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshPreviewItem(); // Function DisplayActor.DisplayActor_C.RefreshPreviewItem // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshPawn(); // Function DisplayActor.DisplayActor_C.RefreshPawn // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HiddenDisplayActor(bool NewHidden); // Function DisplayActor.DisplayActor_C.HiddenDisplayActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterCustomMode(); // Function DisplayActor.DisplayActor_C.EnterCustomMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetRotatorInput(struct FRotator DeltaRotator); // Function DisplayActor.DisplayActor_C.GetRotatorInput // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void TickItem(float DeltaTime); // Function DisplayActor.DisplayActor_C.TickItem // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TickItemInput(float DeltaTime); // Function DisplayActor.DisplayActor_C.TickItemInput // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TickFocusPart(float DeltaTime); // Function DisplayActor.DisplayActor_C.TickFocusPart // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TickFocus(float DeltaTime); // Function DisplayActor.DisplayActor_C.TickFocus // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Get Perview Weapon(struct APBWeapon* OutputWeapon); // Function DisplayActor.DisplayActor_C.Get Perview Weapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void FocusSlot(enum class EPBSlotType InSlotType); // Function DisplayActor.DisplayActor_C.FocusSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusWeaponPart(enum class EPBPartSlotType InWeaponPartSlotType); // Function DisplayActor.DisplayActor_C.FocusWeaponPart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndCustomWeaponState(); // Function DisplayActor.DisplayActor_C.EndCustomWeaponState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Start Custom Weapon State(); // Function DisplayActor.DisplayActor_C.Start Custom Weapon State // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndPawnState(); // Function DisplayActor.DisplayActor_C.EndPawnState // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartPawnState(); // Function DisplayActor.DisplayActor_C.StartPawnState // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RegisterToCustomManager(); // Function DisplayActor.DisplayActor_C.RegisterToCustomManager // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshDisplayActor(); // Function DisplayActor.DisplayActor_C.RefreshDisplayActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UserConstructionScript(); // Function DisplayActor.DisplayActor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExtraCamBlendTimeline__FinishedFunc(); // Function DisplayActor.DisplayActor_C.ExtraCamBlendTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void ExtraCamBlendTimeline__UpdateFunc(); // Function DisplayActor.DisplayActor_C.ExtraCamBlendTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void ReceiveDestroyed(); // Function DisplayActor.DisplayActor_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function DisplayActor.DisplayActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function DisplayActor.DisplayActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function DisplayActor.DisplayActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void StartUpdateExtraCam(struct FTransform Transform, float FOV, bool Returning); // Function DisplayActor.DisplayActor_C.StartUpdateExtraCam // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveActorOnClicked(struct FKey ButtonPressed); // Function DisplayActor.DisplayActor_C.ReceiveActorOnClicked // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveActorOnReleased(struct FKey ButtonReleased); // Function DisplayActor.DisplayActor_C.ReceiveActorOnReleased // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_DisplayActor(int32_t EntryPoint); // Function DisplayActor.DisplayActor_C.ExecuteUbergraph_DisplayActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

