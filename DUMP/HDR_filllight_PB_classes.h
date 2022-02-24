// BlueprintGeneratedClass HDR_filllight_PB.HDR_filllight_PB_C
// Size: 0x278 (Inherited: 0x220)
struct AHDR_filllight_PB_C : AActor {
	struct USkyLightComponent* HDRI_LightSource; // 0x220(0x08)
	struct UStaticMeshComponent* HDRI_dome; // 0x228(0x08)
	struct USceneComponent* HDRI; // 0x230(0x08)
	struct UMaterialInstanceDynamic* HDRI_Inst_Runtime; // 0x238(0x08)
	struct UTextureCube* HDRI_Cubemap; // 0x240(0x08)
	float HDRI_Brightness; // 0x248(0x04)
	float HDRI_Desaturation; // 0x24c(0x04)
	struct FLinearColor HDRI_Tint; // 0x250(0x10)
	float HDRI_Contrast; // 0x260(0x04)
	float HDRI_pitch; // 0x264(0x04)
	float HDRI_roll; // 0x268(0x04)
	float HDRI_Yaw; // 0x26c(0x04)
	struct UMaterialInstance* HDRI_Inst_Master; // 0x270(0x08)

	void UserConstructionScript(); // Function HDR_filllight_PB.HDR_filllight_PB_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

