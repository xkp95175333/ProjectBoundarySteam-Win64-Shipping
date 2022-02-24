// BlueprintGeneratedClass PBProjectileTracerFunLabFunction_BP.PBProjectileTracerFunLabFunction_BP_C
// Size: 0x28 (Inherited: 0x28)
struct UPBProjectileTracerFunLabFunction_BP_C : UBlueprintFunctionLibrary {

	void Tracer Spawn Particles(float BeamSize, int32_t Nums, struct UTexture* BeamPoint, struct UTexture* Marker, struct FLinearColor Color, struct UObject* __WorldContext, struct TArray<struct UParticleSystemComponent*> Beam Reference, struct UParticleSystemComponent* Marker Reference); // Function PBProjectileTracerFunLabFunction_BP.PBProjectileTracerFunLabFunction_BP_C.Tracer Spawn Particles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tracer Set Particles Position(struct TArray<struct FVector> LocationsArray, struct TArray<struct UParticleSystemComponent*> BeamsReference, struct UParticleSystemComponent* MarkerReference, struct FHitResult Hit Result, struct UObject* __WorldContext); // Function PBProjectileTracerFunLabFunction_BP.PBProjectileTracerFunLabFunction_BP_C.Tracer Set Particles Position // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tracer Cal Trace Path(struct FVector Location, struct FVector Velocity, int32_t Divisions, float Duration, int32_t Max Bounces, float Radius, struct TArray<enum class EObjectTypeQuery> Object Type, struct TArray<struct AActor*> Actors To Ignore, float Restitution, float Friction, bool PlayProjectile Movement, struct UObject* __WorldContext, struct TArray<struct FVector> Location Array, struct FHitResult Out Hit); // Function PBProjectileTracerFunLabFunction_BP.PBProjectileTracerFunLabFunction_BP_C.Tracer Cal Trace Path // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

