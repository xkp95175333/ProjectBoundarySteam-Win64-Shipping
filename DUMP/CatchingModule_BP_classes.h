// BlueprintGeneratedClass CatchingModule_BP.CatchingModule_BP_C
// Size: 0x4b0 (Inherited: 0x488)
struct ACatchingModule_BP_C : APBCatchingModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UAnimInstance* SubAninmationClass; // 0x490(0x08)
	enum class EPBAnimLinkSlot AnimLinkSlot; // 0x498(0x01)
	enum class EPBStateInHookUsing HookState; // 0x499(0x01)
	bool HookSnapping?; // 0x49a(0x01)
	bool IsHookUsing?; // 0x49b(0x01)
	bool RaiseHand?; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	struct FVector HookCaughtLocation; // 0x4a0(0x0c)
	float UseGraple_AfterInterp; // 0x4ac(0x04)

	void UnLinkAnimationGraph(); // Function CatchingModule_BP.CatchingModule_BP_C.UnLinkAnimationGraph // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void LinkAnimationGraph(); // Function CatchingModule_BP.CatchingModule_BP_C.LinkAnimationGraph // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_HookLaunching(); // Function CatchingModule_BP.CatchingModule_BP_C.K2_HookLaunching // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_HookLocked(); // Function CatchingModule_BP.CatchingModule_BP_C.K2_HookLocked // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_HookRecycling(); // Function CatchingModule_BP.CatchingModule_BP_C.K2_HookRecycling // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_HookReset(); // Function CatchingModule_BP.CatchingModule_BP_C.K2_HookReset // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_RaiseingHand(); // Function CatchingModule_BP.CatchingModule_BP_C.K2_RaiseingHand // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_CatchingModule_BP(int32_t EntryPoint); // Function CatchingModule_BP.CatchingModule_BP_C.ExecuteUbergraph_CatchingModule_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

