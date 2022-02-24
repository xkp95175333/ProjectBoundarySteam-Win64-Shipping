// BlueprintGeneratedClass SpawnArrow_Arrow_BP.SpawnArrow_Arrow_BP_C
// Size: 0x2f4 (Inherited: 0x220)
struct ASpawnArrow_Arrow_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Arrow; // 0x228(0x08)
	struct UArrowComponent* Arrow1; // 0x230(0x08)
	struct USphereComponent* Point; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	float OpacityTimeLine_Time_7B697A964BEF99CB02A34E9BD344FAEE; // 0x248(0x04)
	float OpacityTimeLine_OPC_7B697A964BEF99CB02A34E9BD344FAEE; // 0x24c(0x04)
	enum class ETimelineDirection OpacityTimeLine__Direction_7B697A964BEF99CB02A34E9BD344FAEE; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct UTimelineComponent* OpacityTimeLine; // 0x258(0x08)
	float LifeTime_TimeLine_Time_D407599242844CB03884E0B78421C36A; // 0x260(0x04)
	enum class ETimelineDirection LifeTime_TimeLine__Direction_D407599242844CB03884E0B78421C36A; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* LifeTime_TimeLine; // 0x268(0x08)
	struct APBCharacter* CastToPlayerBp; // 0x270(0x08)
	struct FVector ArrowLocation; // 0x278(0x0c)
	struct FVector PointLocation; // 0x284(0x0c)
	float DletaSeconds; // 0x290(0x04)
	float CountSeconds; // 0x294(0x04)
	float Seconds; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct APBCharacter_BP_C*> Actors; // 0x2a0(0x10)
	bool Attached; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float LifeTime; // 0x2b4(0x04)
	float IndicatorLifeTime; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UMaterialInstanceDynamic* Arrow1MID; // 0x2c0(0x08)
	struct FVector ArrowRelativeLocation; // 0x2c8(0x0c)
	bool MatchStart; // 0x2d4(0x01)
	bool Debug; // 0x2d5(0x01)
	char pad_2D6[0x2]; // 0x2d6(0x02)
	struct UMaterialInstanceDynamic* Arrow2MID; // 0x2d8(0x08)
	struct UMaterialInstanceDynamic* Arrow3MID; // 0x2e0(0x08)
	float flashSpeed; // 0x2e8(0x04)
	bool DisableArrow; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	float LocalTime; // 0x2f0(0x04)

	void IntMID(); // Function SpawnArrow_Arrow_BP.SpawnArrow_Arrow_BP_C.IntMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RotateArrowToPoint(); // Function SpawnArrow_Arrow_BP.SpawnArrow_Arrow_BP_C.RotateArrowToPoint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AttachToPlayerPawn(); // Function SpawnArrow_Arrow_BP.SpawnArrow_Arrow_BP_C.AttachToPlayerPawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OpacityTimeLine__FinishedFunc(); // Function SpawnArrow_Arrow_BP.SpawnArrow_Arrow_BP_C.OpacityTimeLine__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void OpacityTimeLine__UpdateFunc(); // Function SpawnArrow_Arrow_BP.SpawnArrow_Arrow_BP_C.OpacityTimeLine__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void LifeTime_TimeLine__FinishedFunc(); // Function SpawnArrow_Arrow_BP.SpawnArrow_Arrow_BP_C.LifeTime_TimeLine__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void LifeTime_TimeLine__UpdateFunc(); // Function SpawnArrow_Arrow_BP.SpawnArrow_Arrow_BP_C.LifeTime_TimeLine__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void UpdateArrowColor(float Time); // Function SpawnArrow_Arrow_BP.SpawnArrow_Arrow_BP_C.UpdateArrowColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EventActive(); // Function SpawnArrow_Arrow_BP.SpawnArrow_Arrow_BP_C.EventActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_SpawnArrow_Arrow_BP(int32_t EntryPoint); // Function SpawnArrow_Arrow_BP.SpawnArrow_Arrow_BP_C.ExecuteUbergraph_SpawnArrow_Arrow_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

