// BlueprintGeneratedClass WP_RPK.WP_RPK_C
// Size: 0x1bc0 (Inherited: 0x1ba4)
struct AWP_RPK_C : ACSTM_Base_C {
	char pad_1BA4[0x4]; // 0x1ba4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ba8(0x08)
	struct USkeletalMeshComponent* Fake_AKM_SK_MAG; // 0x1bb0(0x08)
	struct UStaticMeshComponent* Fake_AKM_MAG; // 0x1bb8(0x08)

	void ReceiveTick(float DeltaSeconds); // Function WP_RPK.WP_RPK_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_WP_RPK(int32_t EntryPoint); // Function WP_RPK.WP_RPK_C.ExecuteUbergraph_WP_RPK // (Final|UbergraphFunction) // @ game+0x1556ec0
};

