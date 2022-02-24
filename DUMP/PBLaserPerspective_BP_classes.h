// BlueprintGeneratedClass PBLaserPerspective_BP.PBLaserPerspective_BP_C
// Size: 0x328 (Inherited: 0x220)
struct APBLaserPerspective_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Laser_geometry; // 0x228(0x08)
	struct UBillboardComponent* Billboard; // 0x230(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x238(0x08)
	struct UArrowComponent* Rot; // 0x240(0x08)
	float Laser_animation_ping_pong_04CC36804CB9D08E65DFD0A60E99B409; // 0x248(0x04)
	float Laser_animation_forward_04CC36804CB9D08E65DFD0A60E99B409; // 0x24c(0x04)
	enum class ETimelineDirection Laser_animation__Direction_04CC36804CB9D08E65DFD0A60E99B409; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct UTimelineComponent* Laser_animation; // 0x258(0x08)
	struct FVector FOV_&_Distance; // 0x260(0x0c)
	struct FVector Scanning_angle; // 0x26c(0x0c)
	float Beam_angle; // 0x278(0x04)
	float beam_distance; // 0x27c(0x04)
	float laser_geo_length; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UTextureRenderTarget2D* Render_target; // 0x288(0x08)
	struct UMaterialInstanceDynamic* Laser_material; // 0x290(0x08)
	bool is_Animate; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float animation_speed; // 0x29c(0x04)
	enum class EPBLasers_BP Animation pattern; // 0x2a0(0x01)
	enum class EPBLasersMode_BP Laser mode; // 0x2a1(0x01)
	char pad_2A2[0x2]; // 0x2a2(0x02)
	int32_t animation_pattern; // 0x2a4(0x04)
	bool is_Dynamic; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	float scan_angle; // 0x2ac(0x04)
	struct FRotator laser_rot; // 0x2b0(0x0c)
	float Quality; // 0x2bc(0x04)
	float max_fov; // 0x2c0(0x04)
	struct FLinearColor laser_color; // 0x2c4(0x10)
	float laser_visibility; // 0x2d4(0x04)
	float laser_start_brightness; // 0x2d8(0x04)
	float laser_dissipation_intensity; // 0x2dc(0x04)
	float laser_trail_width; // 0x2e0(0x04)
	float laser_trail_intensity; // 0x2e4(0x04)
	float side_beam_width; // 0x2e8(0x04)
	float side_beams_intensity; // 0x2ec(0x04)
	float scan_beam_size; // 0x2f0(0x04)
	float scan_beam_hardness; // 0x2f4(0x04)
	float scan_visibility; // 0x2f8(0x04)
	float scan_beam_speed; // 0x2fc(0x04)
	bool ping_pong_mode; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	float Smoke_density; // 0x304(0x04)
	float smoke_flow_speed; // 0x308(0x04)
	float smoke_tiling; // 0x30c(0x04)
	float smoke_vorticity_tiling; // 0x310(0x04)
	float smoke_vortisity; // 0x314(0x04)
	float max_scan_angle; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UMaterialInterface* Laser_mat_Set; // 0x320(0x08)

	void constructAgain(); // Function PBLaserPerspective_BP.PBLaserPerspective_BP_C.constructAgain // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UserConstructionScript(); // Function PBLaserPerspective_BP.PBLaserPerspective_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Laser_animation__FinishedFunc(); // Function PBLaserPerspective_BP.PBLaserPerspective_BP_C.Laser_animation__FinishedFunc // (BlueprintEvent) // @ game+0x1556ec0
	void Laser_animation__UpdateFunc(); // Function PBLaserPerspective_BP.PBLaserPerspective_BP_C.Laser_animation__UpdateFunc // (BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBLaserPerspective_BP.PBLaserPerspective_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void call_in_editor_update(); // Function PBLaserPerspective_BP.PBLaserPerspective_BP_C.call_in_editor_update // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBLaserPerspective_BP(int32_t EntryPoint); // Function PBLaserPerspective_BP.PBLaserPerspective_BP_C.ExecuteUbergraph_PBLaserPerspective_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};
