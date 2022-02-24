// BlueprintGeneratedClass PBScanActor_BP.PBScanActor_BP_C
// Size: 0x2c8 (Inherited: 0x220)
struct APBScanActor_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UChildActorComponent* BP_Laser_perspective_mode_HL2; // 0x228(0x08)
	struct UChildActorComponent* BP_Laser_perspective_mode_HL; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float Timeline_1_NewTrack_0_73C3930D48C2B743FA2257A60385A99A; // 0x240(0x04)
	enum class ETimelineDirection Timeline_1__Direction_73C3930D48C2B743FA2257A60385A99A; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UTimelineComponent* Timeline_2; // 0x248(0x08)
	float Timeline_3_z_D219E6AF44A81E95735085A9D629BFAE; // 0x250(0x04)
	float Timeline_3_y_D219E6AF44A81E95735085A9D629BFAE; // 0x254(0x04)
	float Timeline_3_x_D219E6AF44A81E95735085A9D629BFAE; // 0x258(0x04)
	enum class ETimelineDirection Timeline_3__Direction_D219E6AF44A81E95735085A9D629BFAE; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct UTimelineComponent* Timeline_4; // 0x260(0x08)
	float Timeline_2_NewTrack_0_4A81CAEC48DC7DAB68F19CA6DD700E1A; // 0x268(0x04)
	enum class ETimelineDirection Timeline_2__Direction_4A81CAEC48DC7DAB68F19CA6DD700E1A; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Timeline_3; // 0x270(0x08)
	float Timeline_0_z_FD3B7D5E4CE501F80878E887854A9928; // 0x278(0x04)
	float Timeline_0_y_FD3B7D5E4CE501F80878E887854A9928; // 0x27c(0x04)
	float Timeline_0_x_FD3B7D5E4CE501F80878E887854A9928; // 0x280(0x04)
	enum class ETimelineDirection Timeline_0__Direction_FD3B7D5E4CE501F80878E887854A9928; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* Timeline_1; // 0x288(0x08)
	struct FMulticastInlineDelegate PlayScan; // 0x290(0x10)
	struct FMulticastInlineDelegate PlayDisaprear; // 0x2a0(0x10)
	float Radius; // 0x2b0(0x04)
	float DelayTime; // 0x2b4(0x04)
	struct FLinearColor LaserColor; // 0x2b8(0x10)

	void ShowOrHide(float Timeline); // Function PBScanActor_BP.PBScanActor_BP_C.ShowOrHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Timeline_1__FinishedFunc(); // Function PBScanActor_BP.PBScanActor_BP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_1__UpdateFunc(); // Function PBScanActor_BP.PBScanActor_BP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_2__FinishedFunc(); // Function PBScanActor_BP.PBScanActor_BP_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_2__UpdateFunc(); // Function PBScanActor_BP.PBScanActor_BP_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_0__FinishedFunc(); // Function PBScanActor_BP.PBScanActor_BP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_0__UpdateFunc(); // Function PBScanActor_BP.PBScanActor_BP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_3__FinishedFunc(); // Function PBScanActor_BP.PBScanActor_BP_C.Timeline_3__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_3__UpdateFunc(); // Function PBScanActor_BP.PBScanActor_BP_C.Timeline_3__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void PlayScan_Event(); // Function PBScanActor_BP.PBScanActor_BP_C.PlayScan_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlatDisaprear_Event(); // Function PBScanActor_BP.PBScanActor_BP_C.PlatDisaprear_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PBScanActor_BP.PBScanActor_BP_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBScanActor_BP.PBScanActor_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBScanActor_BP(int32_t EntryPoint); // Function PBScanActor_BP.PBScanActor_BP_C.ExecuteUbergraph_PBScanActor_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void PlayDisaprear__DelegateSignature(); // Function PBScanActor_BP.PBScanActor_BP_C.PlayDisaprear__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayScan__DelegateSignature(); // Function PBScanActor_BP.PBScanActor_BP_C.PlayScan__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

