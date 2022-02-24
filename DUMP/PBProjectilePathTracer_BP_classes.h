// BlueprintGeneratedClass PBProjectilePathTracer_BP.PBProjectilePathTracer_BP_C
// Size: 0x130 (Inherited: 0xb0)
struct UPBProjectilePathTracer_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	float BulletVelocity; // 0xb8(0x04)
	int32_t BeamNums; // 0xbc(0x04)
	struct TArray<struct FVector> BeamColor; // 0xc0(0x10)
	float Beam Size; // 0xd0(0x04)
	float Duration; // 0xd4(0x04)
	int32_t MaxBounces; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FMulticastInlineDelegate FireReleased; // 0xe0(0x10)
	struct FMulticastInlineDelegate FirePressed; // 0xf0(0x10)
	struct TArray<struct UParticleSystemComponent*> BeamRefArray; // 0x100(0x10)
	struct UParticleSystemComponent* Marker Ref; // 0x110(0x08)
	struct FMulticastInlineDelegate OnHidden; // 0x118(0x10)
	struct UParticleSystemComponent* canDestroy; // 0x128(0x08)

	void ReceiveBeginPlay(); // Function PBProjectilePathTracer_BP.PBProjectilePathTracer_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function PBProjectilePathTracer_BP.PBProjectilePathTracer_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void FireReleased_Event(); // Function PBProjectilePathTracer_BP.PBProjectilePathTracer_BP_C.FireReleased_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FirePressed_Event(); // Function PBProjectilePathTracer_BP.PBProjectilePathTracer_BP_C.FirePressed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnHidden_Event(); // Function PBProjectilePathTracer_BP.PBProjectilePathTracer_BP_C.OnHidden_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PBProjectilePathTracer_BP.PBProjectilePathTracer_BP_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBProjectilePathTracer_BP(int32_t EntryPoint); // Function PBProjectilePathTracer_BP.PBProjectilePathTracer_BP_C.ExecuteUbergraph_PBProjectilePathTracer_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnHidden__DelegateSignature(); // Function PBProjectilePathTracer_BP.PBProjectilePathTracer_BP_C.OnHidden__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FirePressed__DelegateSignature(); // Function PBProjectilePathTracer_BP.PBProjectilePathTracer_BP_C.FirePressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FireReleased__DelegateSignature(); // Function PBProjectilePathTracer_BP.PBProjectilePathTracer_BP_C.FireReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

