// BlueprintGeneratedClass PBDisplayItem_BP.PBDisplayItem_BP_C
// Size: 0x540 (Inherited: 0x32c)
struct APBDisplayItem_BP_C : APBDisplayActor_BP_C {
	char pad_32C[0x4]; // 0x32c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UPointLightComponent* PointLight5; // 0x338(0x08)
	struct USpotLightComponent* SpotLight; // 0x340(0x08)
	struct URectLightComponent* RectLight; // 0x348(0x08)
	struct UPointLightComponent* PointLight3; // 0x350(0x08)
	struct UPointLightComponent* PointLight4; // 0x358(0x08)
	struct UPointLightComponent* PointLight; // 0x360(0x08)
	struct UPointLightComponent* PointLight1; // 0x368(0x08)
	struct UPointLightComponent* PointLight2; // 0x370(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x378(0x08)
	struct UStaticMeshComponent* Plane; // 0x380(0x08)
	float Timeline_0_NewTrack_0_B034A66D45AF64F964277E8CC45217C0; // 0x388(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B034A66D45AF64F964277E8CC45217C0; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x390(0x08)
	struct FPBDisplayActor_Pawn DisplayActorConfig; // 0x398(0x150)
	enum class EPBSlotType SlotType; // 0x4e8(0x01)
	bool CollisionEnable; // 0x4e9(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	struct FRotator CurrentItemRotation; // 0x4ec(0x0c)
	struct FRotator TargetItemRotation; // 0x4f8(0x0c)
	struct FRotator ItemCustomRotation; // 0x504(0x0c)
	struct FVector QuadSaveTemp; // 0x510(0x0c)
	float FocalLength; // 0x51c(0x04)
	struct FRotator CurrentCharacterRotation; // 0x520(0x0c)
	struct FRotator TargetCharacterRotation; // 0x52c(0x0c)
	float CamDistanceCache; // 0x538(0x04)
	float ItemLength; // 0x53c(0x04)

	void QuadSaveTempTest(); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.QuadSaveTempTest // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TickInput(); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.TickInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetItemRotation(); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.SetItemRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetItemCollisionEnable(bool CollisionEnsable); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.SetItemCollisionEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetFocusItem(float InputPin, struct FVector B); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.SetFocusItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshPreviewItem(enum class EPBSlotType SlotType); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.RefreshPreviewItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Timeline_0__FinishedFunc(); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_0__UpdateFunc(); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void ItemQuadTimer(); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.ItemQuadTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ItemQuadTimerSon(); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.ItemQuadTimerSon // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RotationLerp(struct FRotator CurrentCharacterRotation, struct FRotator TargetCharacterRotation); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.RotationLerp // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBDisplayItem_BP(int32_t EntryPoint); // Function PBDisplayItem_BP.PBDisplayItem_BP_C.ExecuteUbergraph_PBDisplayItem_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

