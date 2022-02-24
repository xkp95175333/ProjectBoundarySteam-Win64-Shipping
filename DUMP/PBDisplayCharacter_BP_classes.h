// BlueprintGeneratedClass PBDisplayCharacter_BP.PBDisplayCharacter_BP_C
// Size: 0x7f0 (Inherited: 0x32c)
struct APBDisplayCharacter_BP_C : APBDisplayActor_BP_C {
	char pad_32C[0x4]; // 0x32c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UStaticMeshComponent* Plane; // 0x338(0x08)
	struct UStaticMeshComponent* Plane3; // 0x340(0x08)
	struct UStaticMeshComponent* Plane2; // 0x348(0x08)
	struct USceneComponent* Scene; // 0x350(0x08)
	struct UStaticMeshComponent* RoleIcon; // 0x358(0x08)
	struct UBoxComponent* Box; // 0x360(0x08)
	struct UBoxComponent* HeadSet; // 0x368(0x08)
	struct UBoxComponent* VehicleSet; // 0x370(0x08)
	struct UBoxComponent* ArmSet; // 0x378(0x08)
	struct URectLightComponent* RectLight3; // 0x380(0x08)
	struct URectLightComponent* RectLight2; // 0x388(0x08)
	struct UPointLightComponent* PointLight4; // 0x390(0x08)
	struct UDirectionalLightComponent* DirectionalLight; // 0x398(0x08)
	struct UDirectionalLightComponent* DirectionalLight1; // 0x3a0(0x08)
	struct UPointLightComponent* PointLight2; // 0x3a8(0x08)
	struct URectLightComponent* RectLight1; // 0x3b0(0x08)
	struct UStaticMeshComponent* FuncModule; // 0x3b8(0x08)
	struct USkeletalMeshComponent* PackMesh; // 0x3c0(0x08)
	struct USkeletalMeshComponent* LeftArm; // 0x3c8(0x08)
	struct USkeletalMeshComponent* RightArm; // 0x3d0(0x08)
	struct UStaticMeshComponent* Tac_R; // 0x3d8(0x08)
	struct UStaticMeshComponent* Tac_L; // 0x3e0(0x08)
	struct UStaticMeshComponent* Tac_T; // 0x3e8(0x08)
	float Timeline_0_NewTrack_0_86211CF0437BDC7436FF248AE21D6139; // 0x3f0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_86211CF0437BDC7436FF248AE21D6139; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x3f8(0x08)
	float Timeline_CameraLocation_NewTrack_0_840D180040BF98AA441B638D9619A841; // 0x400(0x04)
	enum class ETimelineDirection Timeline_CameraLocation__Direction_840D180040BF98AA441B638D9619A841; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	struct UTimelineComponent* Timeline_CameraLocation; // 0x408(0x08)
	struct APBVehicle* Vehicle; // 0x410(0x08)
	struct APBWeapon* Weapon2; // 0x418(0x08)
	struct APBWeapon* Weapon1; // 0x420(0x08)
	struct UCineCameraComponent* ActiveCam; // 0x428(0x08)
	struct UCameraComponent* CurrentCamra; // 0x430(0x08)
	struct USceneComponent* FocusComponent; // 0x438(0x08)
	struct FPBDisplayActor_Pawn DisplayActorConfig; // 0x440(0x150)
	struct FRotator VehicleRotation; // 0x590(0x0c)
	struct FVector VehicleCamLocation; // 0x59c(0x0c)
	bool LocationHasChanged; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	struct FRotator CharacterOverViewRotation; // 0x5ac(0x0c)
	struct FVector CharacterOverViewCamLocation; // 0x5b8(0x0c)
	struct FVector LastStateCamLocation; // 0x5c4(0x0c)
	struct FRotator LastStateCharacterRotation; // 0x5d0(0x0c)
	struct FRotator CurrentCharacterRotation; // 0x5dc(0x0c)
	struct FRotator TargetCharacterRotation; // 0x5e8(0x0c)
	struct FVector CurrentCameraLocation; // 0x5f4(0x0c)
	struct FVector TargetCameraLocation; // 0x600(0x0c)
	struct FRotator NoneUIOverViewRotation; // 0x60c(0x0c)
	struct FVector NoneUIOverViewCamLocaction; // 0x618(0x0c)
	struct FRotator CurrentCameraRotation; // 0x624(0x0c)
	struct FRotator TargetCameraRotation; // 0x630(0x0c)
	struct FRotator VehicleCamRotation; // 0x63c(0x0c)
	struct FRotator NoneUIOverViewCamRotation; // 0x648(0x0c)
	struct FRotator CharacterOverViewCamRotation; // 0x654(0x0c)
	struct FRotator LastStateCamRotation; // 0x660(0x0c)
	char pad_66C[0x4]; // 0x66c(0x04)
	struct TMap<enum class EPBCharacterSlotType, struct FRotator> CharacterSlotAndRotation; // 0x670(0x50)
	struct TMap<enum class EPBCharacterSlotType, struct FRotator> CamSlotAndRotation; // 0x6c0(0x50)
	struct TMap<enum class EPBCharacterSlotType, struct FVector> CamSlotAndLocation; // 0x710(0x50)
	enum class EPBCharacterSlotType TempSaveSlot; // 0x760(0x01)
	bool CollisionEnable; // 0x761(0x01)
	char pad_762[0x2]; // 0x762(0x02)
	float FocalLength; // 0x764(0x04)
	struct FVector QuadSaveTemp; // 0x768(0x0c)
	bool ShouldFastBlend; // 0x774(0x01)
	char pad_775[0x3]; // 0x775(0x03)
	float CamSetZ; // 0x778(0x04)
	float CamSetY; // 0x77c(0x04)
	float CamSetX; // 0x780(0x04)
	struct FVector SetCamFocusLocation; // 0x784(0x0c)
	struct TMap<enum class EPBCharacterSlotType, float> CamSlotAndLocation_1; // 0x790(0x50)
	struct TArray<struct FVector2D> ScreenPositionArray; // 0x7e0(0x10)

	void Set Focus Weapon(bool IsFirstWeapon); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.Set Focus Weapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetScreenPosition(struct USceneComponent* InSceneComponent, struct FVector2D ScreenPosition); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.GetScreenPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInGameOptionShouldNotInputeAndActorPositionSetting(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetInGameOptionShouldNotInputeAndActorPositionSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetOverviewShouldInputAndActorPositionSetting(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetOverviewShouldInputAndActorPositionSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetEndCustomCollision(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetEndCustomCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCollisionInCharacterCSTM(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetCollisionInCharacterCSTM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TickInput(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.TickInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetVehicleRotationAndLocation(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetVehicleRotationAndLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetNoneUIRotationAndLocation(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetNoneUIRotationAndLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetLastStateRotationAndLocation(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetLastStateRotationAndLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetOverviewCamAndAngleSetting(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetOverviewCamAndAngleSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FVector QuadTrace(float ReturnHorizontalDistance); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.QuadTrace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCharacterCollision(bool CollisionEnable); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetCharacterCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCharacterPart(enum class EPBCharacterSlotType CharacterCamEnum); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetCharacterPart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetFocusCharacter(struct FVector QuadPoint); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetFocusCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetForceNoLOD(struct AActor* InputPin); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.SetForceNoLOD // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ClearOldMaterial(struct UMeshComponent* Target); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.ClearOldMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshPawn(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.RefreshPawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Timeline_CameraLocation__FinishedFunc(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.Timeline_CameraLocation__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_CameraLocation__UpdateFunc(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.Timeline_CameraLocation__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_0__FinishedFunc(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_0__UpdateFunc(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CharacterRotation(struct FRotator CurrentCharacterRotation, struct FRotator TargetCharacterRotation); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.CharacterRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CameraLocation(struct FVector CurrentCameraLocation, struct FVector TargetCameraLocation, struct FRotator CurrentCameraRotation, struct FRotator TargetCameraRotation); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.CameraLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CharacterQuadTimer(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.CharacterQuadTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CharacterQuadTimerSon(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.CharacterQuadTimerSon // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBDisplayCharacter_BP(int32_t EntryPoint); // Function PBDisplayCharacter_BP.PBDisplayCharacter_BP_C.ExecuteUbergraph_PBDisplayCharacter_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

