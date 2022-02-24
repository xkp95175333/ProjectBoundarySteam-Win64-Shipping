// BlueprintGeneratedClass Steam_Target.Steam_Target_C
// Size: 0x324 (Inherited: 0x220)
struct ASteam_Target_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Pelvis 1; // 0x228(0x08)
	struct UTextRenderComponent* TextRender; // 0x230(0x08)
	struct UStaticMeshComponent* Armor1; // 0x238(0x08)
	struct UStaticMeshComponent* Face; // 0x240(0x08)
	struct UStaticMeshComponent* pelvis; // 0x248(0x08)
	struct UStaticMeshComponent* Legs; // 0x250(0x08)
	struct UStaticMeshComponent* Chest; // 0x258(0x08)
	struct UStaticMeshComponent* head; // 0x260(0x08)
	struct UStaticMeshComponent* Armor; // 0x268(0x08)
	struct UStaticMeshComponent* WB_ShootingRange_DistanceSignBoard; // 0x270(0x08)
	struct UStaticMeshComponent* Foot; // 0x278(0x08)
	struct UPBDynamicMarkableComponent* PBDynamicMarkable; // 0x280(0x08)
	struct UArrowComponent* Arrow1; // 0x288(0x08)
	struct USceneComponent* Scene; // 0x290(0x08)
	struct USkeletalMeshComponent* Target_ABC_Fill_40_Combined; // 0x298(0x08)
	struct USkeletalMeshComponent* Target_ABC_F9; // 0x2a0(0x08)
	struct USphereComponent* Sphere1; // 0x2a8(0x08)
	struct UStaticMeshComponent* Cube; // 0x2b0(0x08)
	float FadeTimeline_TimeFade_B3EB47C449C2A2DD0EF7329BBE59DBFE; // 0x2b8(0x04)
	enum class ETimelineDirection FadeTimeline__Direction_B3EB47C449C2A2DD0EF7329BBE59DBFE; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* FadeTimeline; // 0x2c0(0x08)
	float Timeline_Foward_NewTrack_0_658DB6CE4B9D568724925CAD9264D401; // 0x2c8(0x04)
	enum class ETimelineDirection Timeline_Foward__Direction_658DB6CE4B9D568724925CAD9264D401; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct UTimelineComponent* Timeline_Foward; // 0x2d0(0x08)
	float Current_Health; // 0x2d8(0x04)
	bool IsTargetDown; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct FMulticastInlineDelegate TargetIsDown; // 0x2e0(0x10)
	bool IsValid; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float LoopRate; // 0x2f4(0x04)
	struct FMulticastInlineDelegate TargetIsHit; // 0x2f8(0x10)
	struct FMulticastInlineDelegate TargetHeadShot; // 0x308(0x10)
	bool IsLoop; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float MoveDistance; // 0x31c(0x04)
	float Defatul_Target_Health; // 0x320(0x04)

	void HandleDamage(float Damage, struct UObject* DamageType, struct FVector HitNormal, struct UObject* HitComponent, struct FVector ShotFromDirection, struct UObject* DamageCauser); // Function Steam_Target.Steam_Target_C.HandleDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HitFeedBack(float Damage, bool KillShot, bool headshot, bool ArmorShot); // Function Steam_Target.Steam_Target_C.HitFeedBack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpDownLoop(); // Function Steam_Target.Steam_Target_C.UpDownLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TargetDown(); // Function Steam_Target.Steam_Target_C.TargetDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HorizontalLoop(float NewParam); // Function Steam_Target.Steam_Target_C.HorizontalLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TargetUp(); // Function Steam_Target.Steam_Target_C.TargetUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UserConstructionScript(); // Function Steam_Target.Steam_Target_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Timeline_Foward__FinishedFunc(); // Function Steam_Target.Steam_Target_C.Timeline_Foward__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_Foward__UpdateFunc(); // Function Steam_Target.Steam_Target_C.Timeline_Foward__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void FadeTimeline__FinishedFunc(); // Function Steam_Target.Steam_Target_C.FadeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void FadeTimeline__UpdateFunc(); // Function Steam_Target.Steam_Target_C.FadeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void EventTargetUp(); // Function Steam_Target.Steam_Target_C.EventTargetUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EventTargetDown(); // Function Steam_Target.Steam_Target_C.EventTargetDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EventLoopBreak(); // Function Steam_Target.Steam_Target_C.EventLoopBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function Steam_Target.Steam_Target_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void EventHorizontalLoop(float MoveDistance); // Function Steam_Target.Steam_Target_C.EventHorizontalLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveRadialDamage(float DamageReceived, struct UDamageType* DamageType, struct FVector Origin, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Steam_Target.Steam_Target_C.ReceiveRadialDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult HitInfo); // Function Steam_Target.Steam_Target_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Steam_Target(int32_t EntryPoint); // Function Steam_Target.Steam_Target_C.ExecuteUbergraph_Steam_Target // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void TargetHeadShot__DelegateSignature(); // Function Steam_Target.Steam_Target_C.TargetHeadShot__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TargetIsHit__DelegateSignature(); // Function Steam_Target.Steam_Target_C.TargetIsHit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TargetIsDown__DelegateSignature(); // Function Steam_Target.Steam_Target_C.TargetIsDown__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

