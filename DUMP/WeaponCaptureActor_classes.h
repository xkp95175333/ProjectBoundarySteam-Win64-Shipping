// BlueprintGeneratedClass WeaponCaptureActor.WeaponCaptureActor_C
// Size: 0x290 (Inherited: 0x248)
struct AWeaponCaptureActor_C : APBWeaponCapture {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneCaptureComponent2D* OrthograhicCaptureComponent2D; // 0x250(0x08)
	struct UPointLightComponent* PointLight; // 0x258(0x08)
	struct UDirectionalLightComponent* DirectionalLight; // 0x260(0x08)
	struct UStaticMeshComponent* Sphere; // 0x268(0x08)
	struct USkeletalMeshComponent* AMR_R; // 0x270(0x08)
	struct USceneCaptureComponent2D* PerspectiveCaptureComponent2D; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct FLightingChannels LightingChannels; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float CaptureDelayTime; // 0x28c(0x04)

	void AdjustCameraAndWeaponLocation(struct APBWeapon* InWeapon, struct FVector2D DesireAnchorPercentage); // Function WeaponCaptureActor.WeaponCaptureActor_C.AdjustCameraAndWeaponLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CalWeaponRealSize(struct APBWeapon* InWeapon, struct FVector RetSize, struct FVector Center); // Function WeaponCaptureActor.WeaponCaptureActor_C.CalWeaponRealSize // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartCaptureTask_Step_04(); // Function WeaponCaptureActor.WeaponCaptureActor_C.StartCaptureTask_Step_04 // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartCaptureTask_Step_03(); // Function WeaponCaptureActor.WeaponCaptureActor_C.StartCaptureTask_Step_03 // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartCaptureTask_Step_02(); // Function WeaponCaptureActor.WeaponCaptureActor_C.StartCaptureTask_Step_02 // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartCaptureTask_Step_01(); // Function WeaponCaptureActor.WeaponCaptureActor_C.StartCaptureTask_Step_01 // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartCaptureTask(); // Function WeaponCaptureActor.WeaponCaptureActor_C.StartCaptureTask // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetWeaponPartInfo_Skirmish(struct FName RoleId, struct FName Key, enum class EPBSlotType SlotType, bool bIsSkirmish, struct FPBWeaponPartNetworkConfig PBWeaponPartSavedConfig); // Function WeaponCaptureActor.WeaponCaptureActor_C.GetWeaponPartInfo_Skirmish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BPFindWeaponPartConfig_Skirmish(struct APBWeapon* WeaponClass, struct FName RoleId, struct FName ID, enum class EPBSlotType SlotType, struct APBWeapon* OutWeaponClass, struct FPBWeaponPartNetworkConfig ReturnWeaponPartConfigData); // Function WeaponCaptureActor.WeaponCaptureActor_C.BPFindWeaponPartConfig_Skirmish // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BPCaptureOneWeapon_Skirmish(struct APBWeapon* InWeapon, struct FName RoleId, struct FName ID, enum class EPBSlotType SlotType, struct UTextureRenderTarget2D* OutRenderTarget, struct UTextureRenderTarget2D* OutDepthRenderTarget); // Function WeaponCaptureActor.WeaponCaptureActor_C.BPCaptureOneWeapon_Skirmish // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BPCaptureWeaponToRenderTarget_Skirmish(struct FName RoleId, struct FName ID, enum class EPBSlotType SlotType, struct UTextureRenderTarget2D* OutRenderTarget, struct UTextureRenderTarget2D* OutDepthRenderTarget); // Function WeaponCaptureActor.WeaponCaptureActor_C.BPCaptureWeaponToRenderTarget_Skirmish // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PerspectiveCapture(struct APBWeapon* Weapon, struct UTextureRenderTarget2D* RT, struct UTextureRenderTarget2D* DepthRT); // Function WeaponCaptureActor.WeaponCaptureActor_C.PerspectiveCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OrthogtahicCapture(struct APBWeapon* Weapon, struct UTextureRenderTarget2D* RT, struct UTextureRenderTarget2D* DepthRT); // Function WeaponCaptureActor.WeaponCaptureActor_C.OrthogtahicCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BPCaptureWeaponToRenderTarget(struct FName RoleId, struct FName ID, enum class EPBSlotType SlotType, struct UTextureRenderTarget2D* OutRenderTarget, struct UTextureRenderTarget2D* OutDepthRenderTarget); // Function WeaponCaptureActor.WeaponCaptureActor_C.BPCaptureWeaponToRenderTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetWeaponPartInfo(struct FName RoleId, struct FName Key, enum class EPBSlotType SlotType, struct FPBWeaponPartNetworkConfig PBWeaponPartSavedConfig); // Function WeaponCaptureActor.WeaponCaptureActor_C.GetWeaponPartInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BPCaptureOneWeapon(struct APBWeapon* InWeapon, struct FName RoleId, struct FName ID, enum class EPBSlotType SlotType, struct UTextureRenderTarget2D* OutRenderTarget, struct UTextureRenderTarget2D* OutDepthRenderTarget); // Function WeaponCaptureActor.WeaponCaptureActor_C.BPCaptureOneWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BPActualCaptureOneWeapon(struct APBWeapon* Weapon, struct UTextureRenderTarget2D* OutNormalRT, struct UTextureRenderTarget2D* OutNormalDepthRT, struct UTextureRenderTarget2D* OutSmallRT, struct UTextureRenderTarget2D* OutSmallDepthRT); // Function WeaponCaptureActor.WeaponCaptureActor_C.BPActualCaptureOneWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BPSetupWeaponLocation(struct APBWeapon* Weapon, struct FRotator Rotation); // Function WeaponCaptureActor.WeaponCaptureActor_C.BPSetupWeaponLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BPFindWeaponPartConfig(struct APBWeapon* WeaponClass, struct FName RoleId, struct FName ID, enum class EPBSlotType SlotType, struct APBWeapon* OutWeaponClass, struct FPBWeaponPartNetworkConfig ReturnWeaponPartConfigData); // Function WeaponCaptureActor.WeaponCaptureActor_C.BPFindWeaponPartConfig // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartCaptureTask(); // Function WeaponCaptureActor.WeaponCaptureActor_C.K2_StartCaptureTask // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_WeaponCaptureActor(int32_t EntryPoint); // Function WeaponCaptureActor.WeaponCaptureActor_C.ExecuteUbergraph_WeaponCaptureActor // (Final|UbergraphFunction) // @ game+0x1556ec0
};

