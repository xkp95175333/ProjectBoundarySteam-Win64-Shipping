// BlueprintGeneratedClass SmokeObscureVolume_BP.SmokeObscureVolume_BP_C
// Size: 0x388 (Inherited: 0x280)
struct ASmokeObscureVolume_BP_C : APBSmokeObscuringVolume {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UStaticMeshComponent* smoke; // 0x288(0x08)
	struct UParticleSystemComponent* P_Ribbon; // 0x290(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x298(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x2a0(0x08)
	struct UMaterialBillboardComponent* MaterialBillboard; // 0x2a8(0x08)
	struct USphereComponent* Sphere; // 0x2b0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2b8(0x08)
	struct UStaticMeshComponent* Plane; // 0x2c0(0x08)
	float FadeOutAnimation_SmokeGrenadeFadeOutSizeCurve_15B9B89340956B92C4115EA6CCAEFAAE; // 0x2c8(0x04)
	float FadeOutAnimation_SmokeFadeScaleCurve_15B9B89340956B92C4115EA6CCAEFAAE; // 0x2cc(0x04)
	float FadeOutAnimation_SmokeFadeDepthCurve_15B9B89340956B92C4115EA6CCAEFAAE; // 0x2d0(0x04)
	enum class ETimelineDirection FadeOutAnimation__Direction_15B9B89340956B92C4115EA6CCAEFAAE; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct UTimelineComponent* FadeOutAnimation; // 0x2d8(0x08)
	float SmokeAnimation_NewTrack_0_95F100D144CC1416F1E5AC8FC9D72D02; // 0x2e0(0x04)
	float SmokeAnimation_SmokeGrenadeExpandMoveSpeedCurve_95F100D144CC1416F1E5AC8FC9D72D02; // 0x2e4(0x04)
	float SmokeAnimation_SmokeGrenadeExpandMINCurve_95F100D144CC1416F1E5AC8FC9D72D02; // 0x2e8(0x04)
	float SmokeAnimation_SmokeGrenadeDepthCurve_95F100D144CC1416F1E5AC8FC9D72D02; // 0x2ec(0x04)
	float SmokeAnimation_SmokeGrenadeExpandCurve_95F100D144CC1416F1E5AC8FC9D72D02; // 0x2f0(0x04)
	enum class ETimelineDirection SmokeAnimation__Direction_95F100D144CC1416F1E5AC8FC9D72D02; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* SmokeAnimation; // 0x2f8(0x08)
	struct TArray<struct UParticleSystemComponent*> LightningBolts; // 0x300(0x10)
	struct FVector StartLocation; // 0x310(0x0c)
	struct FVector BoundOrigin; // 0x31c(0x0c)
	struct FVector BoundExt; // 0x328(0x0c)
	float Depth; // 0x334(0x04)
	struct APBCharacter* NewVar_1; // 0x338(0x08)
	float NewVar_2; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct UMaterialInstanceDynamic* MAT_Plane; // 0x348(0x08)
	struct UMaterialInstanceDynamic* MAT_Bill; // 0x350(0x08)
	struct UMaterialInstanceDynamic* MAT_Ball; // 0x358(0x08)
	float CharacterDistance; // 0x360(0x04)
	float SmokeSize; // 0x364(0x04)
	struct UMaterialInstanceDynamic* Mid; // 0x368(0x08)
	struct UTextureRenderTarget2D* RT; // 0x370(0x08)
	struct UMaterialInstanceDynamic* moveMID; // 0x378(0x08)
	struct UMaterialInstanceDynamic* SMOKEMID; // 0x380(0x08)

	void SmokeAnimation__FinishedFunc(); // Function SmokeObscureVolume_BP.SmokeObscureVolume_BP_C.SmokeAnimation__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void SmokeAnimation__UpdateFunc(); // Function SmokeObscureVolume_BP.SmokeObscureVolume_BP_C.SmokeAnimation__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void FadeOutAnimation__FinishedFunc(); // Function SmokeObscureVolume_BP.SmokeObscureVolume_BP_C.FadeOutAnimation__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void FadeOutAnimation__UpdateFunc(); // Function SmokeObscureVolume_BP.SmokeObscureVolume_BP_C.FadeOutAnimation__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function SmokeObscureVolume_BP.SmokeObscureVolume_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveDestroyed(); // Function SmokeObscureVolume_BP.SmokeObscureVolume_BP_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_SmokeObscureVolume_BP(int32_t EntryPoint); // Function SmokeObscureVolume_BP.SmokeObscureVolume_BP_C.ExecuteUbergraph_SmokeObscureVolume_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

