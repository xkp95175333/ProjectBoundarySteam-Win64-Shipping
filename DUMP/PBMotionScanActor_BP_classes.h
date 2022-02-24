// BlueprintGeneratedClass PBMotionScanActor_BP.PBMotionScanActor_BP_C
// Size: 0x2b0 (Inherited: 0x220)
struct APBMotionScanActor_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UChildActorComponent* BP_Laser_perspective_mode_HL2; // 0x228(0x08)
	struct UChildActorComponent* BP_Laser_perspective_mode_HL; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float Timeline_4_NewTrack_0_40738CDB45EE5AC43C3C13AF42767A88; // 0x240(0x04)
	enum class ETimelineDirection Timeline_4__Direction_40738CDB45EE5AC43C3C13AF42767A88; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UTimelineComponent* Timeline_5; // 0x248(0x08)
	float Timeline_2_z_40B609AD4BC7522FA4BA76B78F7F374D; // 0x250(0x04)
	float Timeline_2_y_40B609AD4BC7522FA4BA76B78F7F374D; // 0x254(0x04)
	float Timeline_2_x_40B609AD4BC7522FA4BA76B78F7F374D; // 0x258(0x04)
	enum class ETimelineDirection Timeline_2__Direction_40B609AD4BC7522FA4BA76B78F7F374D; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct UTimelineComponent* Timeline_3; // 0x260(0x08)
	float Timeline_1_NewTrack_0_A174667248A0766648479CBCC524DE49; // 0x268(0x04)
	enum class ETimelineDirection Timeline_1__Direction_A174667248A0766648479CBCC524DE49; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x270(0x08)
	struct FMulticastInlineDelegate PlayScan; // 0x278(0x10)
	struct FMulticastInlineDelegate PlayDisaprear; // 0x288(0x10)
	float Radius; // 0x298(0x04)
	float DelayTime; // 0x29c(0x04)
	struct FLinearColor LaserColor; // 0x2a0(0x10)

	void ShowOrHide(float TimeLineInput); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.ShowOrHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Timeline_1__FinishedFunc(); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_1__UpdateFunc(); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_2__FinishedFunc(); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_2__UpdateFunc(); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_4__FinishedFunc(); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.Timeline_4__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_4__UpdateFunc(); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.Timeline_4__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void PlayScan_Event(); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.PlayScan_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlatDisaprear_Event(); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.PlatDisaprear_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBMotionScanActor_BP(int32_t EntryPoint); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.ExecuteUbergraph_PBMotionScanActor_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void PlayDisaprear__DelegateSignature(); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.PlayDisaprear__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayScan__DelegateSignature(); // Function PBMotionScanActor_BP.PBMotionScanActor_BP_C.PlayScan__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

