// BlueprintGeneratedClass InputConsumerForKeyBinding.InputConsumerForKeyBinding_C
// Size: 0x270 (Inherited: 0x220)
struct AInputConsumerForKeyBinding_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct FMulticastInlineDelegate Return; // 0x230(0x10)
	bool bGamepadKey; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct TArray<struct FKey> AvaliableGamepadKeys; // 0x248(0x10)
	bool DoubleKeys; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct TArray<struct FKey> RetKeys; // 0x260(0x10)

	void TryToReturn(bool Cancel); // Function InputConsumerForKeyBinding.InputConsumerForKeyBinding_C.TryToReturn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_2(struct FKey Key); // Function InputConsumerForKeyBinding.InputConsumerForKeyBinding_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1556ec0
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(struct FKey Key); // Function InputConsumerForKeyBinding.InputConsumerForKeyBinding_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function InputConsumerForKeyBinding.InputConsumerForKeyBinding_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_InputConsumerForKeyBinding(int32_t EntryPoint); // Function InputConsumerForKeyBinding.InputConsumerForKeyBinding_C.ExecuteUbergraph_InputConsumerForKeyBinding // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Return__DelegateSignature(bool Cancel, struct TArray<struct FKey> RetKey, bool Shift, bool Ctrl, bool Alt); // Function InputConsumerForKeyBinding.InputConsumerForKeyBinding_C.Return__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

