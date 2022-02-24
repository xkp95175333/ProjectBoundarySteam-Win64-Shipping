// BlueprintGeneratedClass WP_GSW_LP.WP_GSW_LP_C
// Size: 0x1bc8 (Inherited: 0x1ba4)
struct AWP_GSW_LP_C : ACSTM_Base_C {
	char pad_1BA4[0x4]; // 0x1ba4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ba8(0x08)
	float Timeline_0_NewTrack_0_D49D12C5401697ED07F65FA3B42591A6; // 0x1bb0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_D49D12C5401697ED07F65FA3B42591A6; // 0x1bb4(0x01)
	char pad_1BB5[0x3]; // 0x1bb5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x1bb8(0x08)
	struct UGSW_LP_SK_Skeleton_AnimBlueprint_C* AnimInstance; // 0x1bc0(0x08)

	void Timeline_0__FinishedFunc(); // Function WP_GSW_LP.WP_GSW_LP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Timeline_0__UpdateFunc(); // Function WP_GSW_LP.WP_GSW_LP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void OnFireTriggered(); // Function WP_GSW_LP.WP_GSW_LP_C.OnFireTriggered // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function WP_GSW_LP.WP_GSW_LP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function WP_GSW_LP.WP_GSW_LP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_WP_GSW_LP(int32_t EntryPoint); // Function WP_GSW_LP.WP_GSW_LP_C.ExecuteUbergraph_WP_GSW_LP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

