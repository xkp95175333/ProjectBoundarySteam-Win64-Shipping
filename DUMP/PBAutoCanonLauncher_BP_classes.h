// BlueprintGeneratedClass PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C
// Size: 0x724 (Inherited: 0x680)
struct APBAutoCanonLauncher_BP_C : APBLauncher_Deploy_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UPBFireComponent_RayProjectile* PBFireComponent_RayProjectile; // 0x688(0x08)
	struct UStaticMeshComponent* 3PCanonTUbe; // 0x690(0x08)
	struct UStaticMeshComponent* Canontube; // 0x698(0x08)
	struct UArrowComponent* ShellEjectArrow; // 0x6a0(0x08)
	float TubeVelocity; // 0x6a8(0x04)
	float TubeSpringStrength; // 0x6ac(0x04)
	float TubeSpringDamping; // 0x6b0(0x04)
	float TubeSpringDeltaLength; // 0x6b4(0x04)
	float TubeForce; // 0x6b8(0x04)
	float TubeMass; // 0x6bc(0x04)
	float DeltaTime; // 0x6c0(0x04)
	struct FVector2D ReciolVelocity; // 0x6c4(0x08)
	struct FVector2D ReciolSpringStrength; // 0x6cc(0x08)
	struct FVector2D ReciolSpringDamping; // 0x6d4(0x08)
	struct FVector2D ReciolLength; // 0x6dc(0x08)
	struct FVector2D ReciolForce; // 0x6e4(0x08)
	char pad_6EC[0x4]; // 0x6ec(0x04)
	struct APlayerController* Controller; // 0x6f0(0x08)
	struct TArray<struct USceneComponent*> ShellPool; // 0x6f8(0x10)
	struct FTimerHandle CanonSpringHadle; // 0x708(0x08)
	struct FTimerHandle ReciolSpringHandle; // 0x710(0x08)
	struct FTimerHandle DestryShellHandle; // 0x718(0x08)
	float ReloadStartTime; // 0x720(0x04)

	void SetSpring(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.SetSpring // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddReciolForce(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.AddReciolForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddTubeForce(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.AddTubeForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DestoryShell(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.DestoryShell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReciolSpring(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.ReciolSpring // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MuzzleFlash(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.MuzzleFlash // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShellEject(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.ShellEject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CanonSpring(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.CanonSpring // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetForce(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.GetForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Initialization(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.Initialization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayEffect(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.PlayEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OpenFired(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.OpenFired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveDestroyed(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimuilateFire(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.K2_SimuilateFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnEquip(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.K2_OnEquip // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_ClipReloaded(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.K2_ClipReloaded // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deploying(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.K2_Deploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Undeploying(); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.K2_Undeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBAutoCanonLauncher_BP(int32_t EntryPoint); // Function PBAutoCanonLauncher_BP.PBAutoCanonLauncher_BP_C.ExecuteUbergraph_PBAutoCanonLauncher_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

