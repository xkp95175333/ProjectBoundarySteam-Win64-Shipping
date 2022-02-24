// BlueprintGeneratedClass PSXHSHeatDetector_BP.PSXHSHeatDetector_BP_C
// Size: 0x3e8 (Inherited: 0x3c0)
struct APSXHSHeatDetector_BP_C : APBRadar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct FLinearColor EnemyColor; // 0x3c8(0x10)
	struct FLinearColor FriendlyColor; // 0x3d8(0x10)

	void ReceiveBeginPlay(); // Function PSXHSHeatDetector_BP.PSXHSHeatDetector_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(); // Function PSXHSHeatDetector_BP.PSXHSHeatDetector_BP_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PSXHSHeatDetector_BP(int32_t EntryPoint); // Function PSXHSHeatDetector_BP.PSXHSHeatDetector_BP_C.ExecuteUbergraph_PSXHSHeatDetector_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

