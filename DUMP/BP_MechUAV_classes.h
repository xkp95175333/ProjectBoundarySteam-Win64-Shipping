// BlueprintGeneratedClass BP_MechUAV.BP_MechUAV_C
// Size: 0x398 (Inherited: 0x220)
struct ABP_MechUAV_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPBDynamicMarkableComponent* PBDynamicMarkable; // 0x228(0x08)
	struct UChildActorComponent* MED_RangeSphere; // 0x230(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x238(0x08)
	struct USceneComponent* Scene; // 0x240(0x08)
	struct APBCharacter* SavedTarget; // 0x248(0x08)
	struct APBPlayerState* SaviorPlayerState; // 0x250(0x08)
	float MoveSpeed; // 0x258(0x04)
	float RescueTime; // 0x25c(0x04)
	bool IsArrivedToTarget; // 0x260(0x01)
	bool IsFlying; // 0x261(0x01)
	bool NoObstrution; // 0x262(0x01)
	char pad_263[0x1]; // 0x263(0x01)
	float CheckRadius; // 0x264(0x04)
	struct TArray<struct APBCharacter*> TeamateInView; // 0x268(0x10)
	float SelfRecoverSpeed; // 0x278(0x04)
	float TeamateRecoverSpeed; // 0x27c(0x04)
	float SingleFixAirTightnessScaler; // 0x280(0x04)
	float TogetherFixAirTightnessScaler; // 0x284(0x04)
	bool IsUsable; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float MaxHealth; // 0x28c(0x04)
	float CurrentHealth; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct UParticleSystem* ExpoledEffect; // 0x298(0x08)
	struct FTimerHandle TimerHandle_Rescue; // 0x2a0(0x08)
	struct ABP_MED_Skill_C* MyOwnerSkill; // 0x2a8(0x08)
	struct FVector NextLocation; // 0x2b0(0x0c)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct AMED_RangeSphere_C* MED_Skill_Sphere_Actor; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct FTransform Relative; // 0x2d0(0x30)
	struct APBPlayerState* PBPlyerState; // 0x300(0x08)
	struct FName SocketName; // 0x308(0x08)
	struct FTimerHandle CheckHandle; // 0x310(0x08)
	char pad_318[0x8]; // 0x318(0x08)
	struct FTransform CurrentTransform; // 0x320(0x30)
	struct FTransform TargetTransform; // 0x350(0x30)
	struct FVector CurrentLocation; // 0x380(0x0c)
	struct FVector TargetLocation; // 0x38c(0x0c)

	void Simulate Movement Tick(float DeltaSeconds); // Function BP_MechUAV.BP_MechUAV_C.Simulate Movement Tick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FollowOwner(float DeltaSeconds); // Function BP_MechUAV.BP_MechUAV_C.FollowOwner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsFarFromTarget(bool IsFarFromTarget); // Function BP_MechUAV.BP_MechUAV_C.IsFarFromTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetScanTransform(struct FTransform ScanTransform); // Function BP_MechUAV.BP_MechUAV_C.GetScanTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetRescueTime(float RescuTime); // Function BP_MechUAV.BP_MechUAV_C.GetRescueTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void OnRep_IsFlying(); // Function BP_MechUAV.BP_MechUAV_C.OnRep_IsFlying // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FaceToTargetLocation(); // Function BP_MechUAV.BP_MechUAV_C.FaceToTargetLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRep_PBPlyerState(); // Function BP_MechUAV.BP_MechUAV_C.OnRep_PBPlyerState // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DestroyVisualSphere(); // Function BP_MechUAV.BP_MechUAV_C.DestroyVisualSphere // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetMED_RangeSphere(struct AMED_RangeSphere_C* AsMED Range Sphere); // Function BP_MechUAV.BP_MechUAV_C.GetMED_RangeSphere // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void CheckCanShowMedVisualSphereToTeamate(); // Function BP_MechUAV.BP_MechUAV_C.CheckCanShowMedVisualSphereToTeamate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowMedVisualSphereToTeamate(); // Function BP_MechUAV.BP_MechUAV_C.ShowMedVisualSphereToTeamate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Init Med Visual Sphere State(); // Function BP_MechUAV.BP_MechUAV_C.Init Med Visual Sphere State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SpawnMedVisualSphere(); // Function BP_MechUAV.BP_MechUAV_C.SpawnMedVisualSphere // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HitOtherActor(); // Function BP_MechUAV.BP_MechUAV_C.HitOtherActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsDamageFromEnemy(struct AController* Controller, bool IsFromEnemy); // Function BP_MechUAV.BP_MechUAV_C.IsDamageFromEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Deactived(); // Function BP_MechUAV.BP_MechUAV_C.Deactived // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Activated(); // Function BP_MechUAV.BP_MechUAV_C.Activated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Remover Self from Teamate(struct AGAC_BP_C* GAC BP); // Function BP_MechUAV.BP_MechUAV_C.Remover Self from Teamate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RemoveTeamate(struct APBCharacter* Character); // Function BP_MechUAV.BP_MechUAV_C.RemoveTeamate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetNextLocation(float DeltaSecond); // Function BP_MechUAV.BP_MechUAV_C.SetNextLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MoveToTarget(float DeltaSecond); // Function BP_MechUAV.BP_MechUAV_C.MoveToTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TeamateNotInView(struct APBCharacter* Character); // Function BP_MechUAV.BP_MechUAV_C.TeamateNotInView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckPoint(struct APBCharacter* Character, struct FVector Point, bool HasObstructtion); // Function BP_MechUAV.BP_MechUAV_C.CheckPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTargetPos(struct FVector InPosition); // Function BP_MechUAV.BP_MechUAV_C.SetTargetPos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AllowRotation(); // Function BP_MechUAV.BP_MechUAV_C.AllowRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FinishRescue(); // Function BP_MechUAV.BP_MechUAV_C.FinishRescue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopRotation(); // Function BP_MechUAV.BP_MechUAV_C.StopRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DealDamage(float Damage, bool IsValid); // Function BP_MechUAV.BP_MechUAV_C.DealDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartSaveTarget(); // Function BP_MechUAV.BP_MechUAV_C.StartSaveTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetSavedTarget(struct APBCharacter* InSavedTarget, struct FName SocketName); // Function BP_MechUAV.BP_MechUAV_C.SetSavedTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckHasObstructtion(struct APBCharacter* Character, bool HasObstructtion); // Function BP_MechUAV.BP_MechUAV_C.CheckHasObstructtion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CheckIsInDistance(struct APBCharacter* Character, bool IsInDistance); // Function BP_MechUAV.BP_MechUAV_C.CheckIsInDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FindTeamateInView(); // Function BP_MechUAV.BP_MechUAV_C.FindTeamateInView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UserConstructionScript(); // Function BP_MechUAV.BP_MechUAV_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnTakePointDamage_Event(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct UDamageType* DamageType, struct AActor* DamageCauser); // Function BP_MechUAV.BP_MechUAV_C.OnTakePointDamage_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function BP_MechUAV.BP_MechUAV_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void SpawnEmitter_Multicast(); // Function BP_MechUAV.BP_MechUAV_C.SpawnEmitter_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function BP_MechUAV.BP_MechUAV_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SaveTarget_Multi(); // Function BP_MechUAV.BP_MechUAV_C.SaveTarget_Multi // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnTakeRadialDamage_Event(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct FVector Origin, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BP_MechUAV.BP_MechUAV_C.OnTakeRadialDamage_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InterruptRescue_Multi(); // Function BP_MechUAV.BP_MechUAV_C.InterruptRescue_Multi // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DelayDestroy(); // Function BP_MechUAV.BP_MechUAV_C.DelayDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_BP_MechUAV(int32_t EntryPoint); // Function BP_MechUAV.BP_MechUAV_C.ExecuteUbergraph_BP_MechUAV // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

