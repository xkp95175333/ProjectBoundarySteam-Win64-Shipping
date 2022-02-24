// BlueprintGeneratedClass PBDisplayWeapon_BP.PBDisplayWeapon_BP_C
// Size: 0x680 (Inherited: 0x32c)
struct APBDisplayWeapon_BP_C : APBDisplayActor_BP_C {
	char pad_32C[0x4]; // 0x32c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UPointLightComponent* PointLight3; // 0x338(0x08)
	struct UPointLightComponent* PointLight2; // 0x340(0x08)
	struct UPointLightComponent* PointLight1; // 0x348(0x08)
	struct URectLightComponent* RectLight; // 0x350(0x08)
	struct UPointLightComponent* PointLight; // 0x358(0x08)
	struct USpotLightComponent* SpotLight; // 0x360(0x08)
	struct UStaticMeshComponent* Plane; // 0x368(0x08)
	struct UStaticMeshComponent* Mesh_St_Weap_ACOG2X; // 0x370(0x08)
	struct URectLightComponent* RectLight1; // 0x378(0x08)
	float CamLocationTimeline_NewTrack_0_67C0FE894C95F3CBB908D1A7383CD9C0; // 0x380(0x04)
	enum class ETimelineDirection CamLocationTimeline__Direction_67C0FE894C95F3CBB908D1A7383CD9C0; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	struct UTimelineComponent* CamLocationTimeline; // 0x388(0x08)
	float RotationTimeline_NewTrack_0_14302D834FFDD0B7219B3D8360E6E534; // 0x390(0x04)
	enum class ETimelineDirection RotationTimeline__Direction_14302D834FFDD0B7219B3D8360E6E534; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct UTimelineComponent* RotationTimeline; // 0x398(0x08)
	struct APBWeapon* WeaponPreview; // 0x3a0(0x08)
	enum class EPBSlotType SlotType; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct APBWeapon* Weapon1; // 0x3b0(0x08)
	struct APBWeapon* Weapon2; // 0x3b8(0x08)
	struct USceneComponent* FocusComponent; // 0x3c0(0x08)
	enum class EPBPartSlotType WeaponSlot; // 0x3c8(0x01)
	enum class EPBSlotType SlotTypeCurrent; // 0x3c9(0x01)
	char pad_3CA[0x2]; // 0x3ca(0x02)
	struct FRotator FirstUILevelWeaponRotation; // 0x3cc(0x0c)
	struct FVector FirstUILevelWeaponCamLocation; // 0x3d8(0x0c)
	struct FVector LastStateLocation; // 0x3e4(0x0c)
	struct FRotator LastStateRotation; // 0x3f0(0x0c)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct TMap<enum class EPBPartSlotType, struct FRotator> SlotypeAndGunRotation; // 0x400(0x50)
	struct TMap<enum class EPBPartSlotType, struct FVector> SlotypeAndCamLocation; // 0x450(0x50)
	bool IsActive; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct TMap<enum class EPBPartSlotType, struct FPostProcessSettings> SlotypeAndPostProcess; // 0x4a8(0x50)
	struct TMap<struct FName, float> SelectSpecialWeapon; // 0x4f8(0x50)
	struct TMap<float, struct FVector> WeaponLocation; // 0x548(0x50)
	struct UCurveFloat* ValueMap; // 0x598(0x08)
	struct FVector CurrentCameraLocation; // 0x5a0(0x0c)
	struct FVector TargetCameraLocation; // 0x5ac(0x0c)
	struct FRotator CurrentCameraRotation; // 0x5b8(0x0c)
	struct FRotator TargetCameraRotation; // 0x5c4(0x0c)
	struct FRotator CurrentCharacterRotation; // 0x5d0(0x0c)
	struct FRotator TargetCharacterRotation; // 0x5dc(0x0c)
	struct TMap<enum class EPBPartSlotType, struct FRotator> SlotypeAndCamRotation; // 0x5e8(0x50)
	enum class EPBPartSlotType TempSaveSlot; // 0x638(0x01)
	char pad_639[0x3]; // 0x639(0x03)
	struct FRotator FirstUILevelCamRotation; // 0x63c(0x0c)
	struct FRotator SecondUILeveCamRotation; // 0x648(0x0c)
	bool CollisionEnsable; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	float FocalLength; // 0x658(0x04)
	struct FVector QuadSaveTemp; // 0x65c(0x0c)
	float WeaponLength; // 0x668(0x04)
	float CamDistanceCache; // 0x66c(0x04)
	bool FocusPart; // 0x670(0x01)
	bool IsFirstLevel; // 0x671(0x01)
	bool WeaponCustomize; // 0x672(0x01)
	char pad_673[0x1]; // 0x673(0x01)
	struct FRotator RotationForOrnament; // 0x674(0x0c)

	void SetFocusWeaponInCustomize(struct FVector B, float DeltaTime); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.SetFocusWeaponInCustomize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetWeaponInCustomize(bool WeaponCustomize); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.SetWeaponInCustomize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TickInput(); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.TickInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetWeaponCollision(bool CollisionEnable); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.SetWeaponCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetFirstLevelWeapon(bool IsFirstLevel); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.SetFirstLevelWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FVector QuadTrace(float ReturnHorizontalDistance); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.QuadTrace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetRotationAndLocationControl(enum class EPBPartSlotType Selection, bool bOrnament); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.SetRotationAndLocationControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetPreviewWeapon(struct APBWeapon* WeaponPreview); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.GetPreviewWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetWeaponPart(enum class EPBPartSlotType InWeaponPartSlotType, bool bOrnament); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.SetWeaponPart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetFocusWeapon(float DeltaTime, struct FVector B); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.SetFocusWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetForceNoLOD(struct AActor* InputPin); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.SetForceNoLOD // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh Weapon(enum class EPBSlotType InSlotType, struct APBWeapon* WeaponPreview); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.Refresh Weapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CamLocationTimeline__FinishedFunc(); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.CamLocationTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void CamLocationTimeline__UpdateFunc(); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.CamLocationTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void RotationTimeline__FinishedFunc(); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.RotationTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void RotationTimeline__UpdateFunc(); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.RotationTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void RotationLerp(struct FRotator CurrentCharacterRotation, struct FRotator TargetCharacterRotation); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.RotationLerp // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WeaponCamLocationLerp(struct FVector CurrentCameraLocation, struct FVector TargetCameraLocation, struct FRotator CurrentCameraRotation, struct FRotator TargetCameraRotation); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.WeaponCamLocationLerp // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WeaponPartFocus(enum class EPBPartSlotType InWeaponPartSlotType, bool bOrnament); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.WeaponPartFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBDisplayWeapon_BP(int32_t EntryPoint); // Function PBDisplayWeapon_BP.PBDisplayWeapon_BP_C.ExecuteUbergraph_PBDisplayWeapon_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

