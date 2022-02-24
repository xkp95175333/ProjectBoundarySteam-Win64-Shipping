// BlueprintGeneratedClass GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C
// Size: 0x232a (Inherited: 0x22f0)
struct UGSW_MG_MAG_DRUM_C : UPartDataHolderComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x22f0(0x08)
	struct USkeletalMeshComponent* Mesh1P; // 0x22f8(0x08)
	struct USkeletalMeshComponent* Mesh3P; // 0x2300(0x08)
	struct UObject* AnimClass; // 0x2308(0x08)
	struct UAnimMontage* PartReloadMontage; // 0x2310(0x08)
	float ReloadRate; // 0x2318(0x04)
	char pad_231C[0x4]; // 0x231c(0x04)
	struct APBWeapon_RayProjectile* WeaponOwner; // 0x2320(0x08)
	bool PartReady; // 0x2328(0x01)
	bool Dummy; // 0x2329(0x01)

	void OnNotifyEnd_E0591143462BFE3C753B11BF535EF18C(struct FName NotifyName); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.OnNotifyEnd_E0591143462BFE3C753B11BF535EF18C // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnNotifyBegin_E0591143462BFE3C753B11BF535EF18C(struct FName NotifyName); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.OnNotifyBegin_E0591143462BFE3C753B11BF535EF18C // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInterrupted_E0591143462BFE3C753B11BF535EF18C(struct FName NotifyName); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.OnInterrupted_E0591143462BFE3C753B11BF535EF18C // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnBlendOut_E0591143462BFE3C753B11BF535EF18C(struct FName NotifyName); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.OnBlendOut_E0591143462BFE3C753B11BF535EF18C // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnCompleted_E0591143462BFE3C753B11BF535EF18C(struct FName NotifyName); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.OnCompleted_E0591143462BFE3C753B11BF535EF18C // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnNotifyEnd_CBBA4EE54847A3D2392507AB6CA8AA14(struct FName NotifyName); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.OnNotifyEnd_CBBA4EE54847A3D2392507AB6CA8AA14 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnNotifyBegin_CBBA4EE54847A3D2392507AB6CA8AA14(struct FName NotifyName); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.OnNotifyBegin_CBBA4EE54847A3D2392507AB6CA8AA14 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInterrupted_CBBA4EE54847A3D2392507AB6CA8AA14(struct FName NotifyName); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.OnInterrupted_CBBA4EE54847A3D2392507AB6CA8AA14 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnBlendOut_CBBA4EE54847A3D2392507AB6CA8AA14(struct FName NotifyName); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.OnBlendOut_CBBA4EE54847A3D2392507AB6CA8AA14 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnCompleted_CBBA4EE54847A3D2392507AB6CA8AA14(struct FName NotifyName); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.OnCompleted_CBBA4EE54847A3D2392507AB6CA8AA14 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GSW_MG_MAG_DRUM(int32_t EntryPoint); // Function GSW_MG_MAG_DRUM.GSW_MG_MAG_DRUM_C.ExecuteUbergraph_GSW_MG_MAG_DRUM // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

