// BlueprintGeneratedClass Steam_Target_Training.Steam_Target_Training_C
// Size: 0x3fa (Inherited: 0x2a8)
struct ASteam_Target_Training_C : ATutorialActor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UPBDynamicMarkableComponent* PBDynamicMarkable; // 0x2b0(0x08)
	struct UStaticMeshComponent* Mark; // 0x2b8(0x08)
	struct USphereComponent* Sphere1; // 0x2c0(0x08)
	struct UChildActorComponent* ChildActor; // 0x2c8(0x08)
	struct UArrowComponent* Arrow2; // 0x2d0(0x08)
	struct UStaticMeshComponent* Cube; // 0x2d8(0x08)
	struct UPBHeatComponent* PBHeat; // 0x2e0(0x08)
	struct UArrowComponent* Arrow1; // 0x2e8(0x08)
	struct USceneComponent* Scene_1; // 0x2f0(0x08)
	struct USkeletalMeshComponent* Target_ABC_Fill_40_Combined; // 0x2f8(0x08)
	struct USkeletalMeshComponent* Target_ABC_F9; // 0x300(0x08)
	struct UStaticMeshComponent* head; // 0x308(0x08)
	float FadeTimeline_TimeFade_4BBF83844B39DC7B027620A6EBF75BFB; // 0x310(0x04)
	enum class ETimelineDirection FadeTimeline__Direction_4BBF83844B39DC7B027620A6EBF75BFB; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct UTimelineComponent* FadeTimeline; // 0x318(0x08)
	float Timeline_Foward_NewTrack_0_E4BA86274A4FB32A322EB1A7B5FBCE57; // 0x320(0x04)
	enum class ETimelineDirection Timeline_Foward__Direction_E4BA86274A4FB32A322EB1A7B5FBCE57; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* Timeline_Foward; // 0x328(0x08)
	float Target_Health; // 0x330(0x04)
	bool IsTargetDown; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct FMulticastInlineDelegate TargetIsDown; // 0x338(0x10)
	bool IsValid; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	float LoopRate; // 0x34c(0x04)
	struct FMulticastInlineDelegate TargetIsHit; // 0x350(0x10)
	struct FMulticastInlineDelegate TargetHeadShot; // 0x360(0x10)
	bool IsLoop; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	float MoveDistance; // 0x374(0x04)
	float Defatul_Target_Health; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FMulticastInlineDelegate MeleeHit; // 0x380(0x10)
	struct FMulticastInlineDelegate BeMark; // 0x390(0x10)
	bool CanBeRespawn; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FMulticastInlineDelegate DashMeleeHit; // 0x3a8(0x10)
	struct UDamageType* DamageType; // 0x3b8(0x08)
	struct AActor* DamageCauser; // 0x3c0(0x08)
	struct FVector HitNormal; // 0x3c8(0x0c)
	struct FVector ShotFromDirection; // 0x3d4(0x0c)
	float Damage; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct UPrimitiveComponent* HitComponent; // 0x3e8(0x08)
	struct AActor* CurrentHitActor; // 0x3f0(0x08)
	bool IsOnlyMelee; // 0x3f8(0x01)
	bool HintHidden; // 0x3f9(0x01)

	void HandleDamage(float Damage, struct UDamageType* DamageType, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FVector ShotFromDirection, struct AActor* DamageCauser); // Function Steam_Target_Training.Steam_Target_Training_C.HandleDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TakeDamage(bool IsHeadShot, bool IsDead); // Function Steam_Target_Training.Steam_Target_Training_C.TakeDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetHeadShotDamageFactor(float HeadDamageModifier); // Function Steam_Target_Training.Steam_Target_Training_C.GetHeadShotDamageFactor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	bool IsMeleeDamage(); // Function Steam_Target_Training.Steam_Target_Training_C.IsMeleeDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void HintDownFeedBack(float Damage); // Function Steam_Target_Training.Steam_Target_Training_C.HintDownFeedBack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HitFeedBack(float Damage); // Function Steam_Target_Training.Steam_Target_Training_C.HitFeedBack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpDownLoop(); // Function Steam_Target_Training.Steam_Target_Training_C.UpDownLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TargetDown(); // Function Steam_Target_Training.Steam_Target_Training_C.TargetDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HorizontalLoop(float NewParam); // Function Steam_Target_Training.Steam_Target_Training_C.HorizontalLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TargetUp(); // Function Steam_Target_Training.Steam_Target_Training_C.TargetUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UserConstructionScript(); // Function Steam_Target_Training.Steam_Target_Training_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Timeline_Foward__FinishedFunc(); // Function Steam_Target_Training.Steam_Target_Training_C.Timeline_Foward__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_Foward__UpdateFunc(); // Function Steam_Target_Training.Steam_Target_Training_C.Timeline_Foward__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void FadeTimeline__FinishedFunc(); // Function Steam_Target_Training.Steam_Target_Training_C.FadeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void FadeTimeline__UpdateFunc(); // Function Steam_Target_Training.Steam_Target_Training_C.FadeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void EventHorizontalLoop(float MoveDistance); // Function Steam_Target_Training.Steam_Target_Training_C.EventHorizontalLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EventTargetUp(); // Function Steam_Target_Training.Steam_Target_Training_C.EventTargetUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EventTargetDown(bool IsMelee); // Function Steam_Target_Training.Steam_Target_Training_C.EventTargetDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EventLoopBreak(); // Function Steam_Target_Training.Steam_Target_Training_C.EventLoopBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function Steam_Target_Training.Steam_Target_Training_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function Steam_Target_Training.Steam_Target_Training_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void RemoveWidget(); // Function Steam_Target_Training.Steam_Target_Training_C.RemoveWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BeActive(); // Function Steam_Target_Training.Steam_Target_Training_C.BeActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveRadialDamage(float DamageReceived, struct UDamageType* DamageType, struct FVector Origin, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Steam_Target_Training.Steam_Target_Training_C.ReceiveRadialDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult HitInfo); // Function Steam_Target_Training.Steam_Target_Training_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Steam_Target_Training(int32_t EntryPoint); // Function Steam_Target_Training.Steam_Target_Training_C.ExecuteUbergraph_Steam_Target_Training // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void DashMeleeHit__DelegateSignature(); // Function Steam_Target_Training.Steam_Target_Training_C.DashMeleeHit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BeMark__DelegateSignature(); // Function Steam_Target_Training.Steam_Target_Training_C.BeMark__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MeleeHit__DelegateSignature(); // Function Steam_Target_Training.Steam_Target_Training_C.MeleeHit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TargetHeadShot__DelegateSignature(); // Function Steam_Target_Training.Steam_Target_Training_C.TargetHeadShot__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TargetIsHit__DelegateSignature(); // Function Steam_Target_Training.Steam_Target_Training_C.TargetIsHit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TargetIsDown__DelegateSignature(); // Function Steam_Target_Training.Steam_Target_Training_C.TargetIsDown__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

