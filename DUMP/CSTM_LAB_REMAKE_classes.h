// BlueprintGeneratedClass CSTM_LAB_REMAKE.CSTM_LAB_REMAKE_C
// Size: 0x258 (Inherited: 0x228)
struct ACSTM_LAB_REMAKE_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct TArray<struct ASteam_Target_C*> TargetArray; // 0x230(0x10)
	int32_t Source; // 0x240(0x04)
	bool BeginPlay; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UWIPMark_A_C* WIP_Mark; // 0x248(0x08)
	struct UWIPMark_B_C* WIP_Mark_B; // 0x250(0x08)

	void ReceiveBeginPlay(); // Function CSTM_LAB_REMAKE.CSTM_LAB_REMAKE_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void SourceUp(); // Function CSTM_LAB_REMAKE.CSTM_LAB_REMAKE_C.SourceUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function CSTM_LAB_REMAKE.CSTM_LAB_REMAKE_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void IsHitFeedBack(); // Function CSTM_LAB_REMAKE.CSTM_LAB_REMAKE_C.IsHitFeedBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_CSTM_LAB_REMAKE(int32_t EntryPoint); // Function CSTM_LAB_REMAKE.CSTM_LAB_REMAKE_C.ExecuteUbergraph_CSTM_LAB_REMAKE // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

