// BlueprintGeneratedClass PB_BPMiniMapSceneCapture.PB_BPMiniMapSceneCapture_C
// Size: 0x288 (Inherited: 0x220)
struct APB_BPMiniMapSceneCapture_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D_UP; // 0x228(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D_DeadZone; // 0x230(0x08)
	struct UStaticMeshComponent* StaticMesh_DeadZone; // 0x238(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D_Down; // 0x240(0x08)
	struct USpringArmComponent* SpringArm; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMesh_Scene; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct UTextureRenderTarget2D* MinimapRenderTarget; // 0x268(0x08)
	struct APlayerController* LocalController; // 0x270(0x08)
	struct UTextureRenderTarget2D* MinimapRenderTarget_DeadZone; // 0x278(0x08)
	struct UTextureRenderTarget2D* MinimapRenderTarget_UP; // 0x280(0x08)

	void InitRenderTargets(struct UUMG_InGameHUD_MinimapMain_LogicLayer_C* InMinimapLogicLayer); // Function PB_BPMiniMapSceneCapture.PB_BPMiniMapSceneCapture_C.InitRenderTargets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function PB_BPMiniMapSceneCapture.PB_BPMiniMapSceneCapture_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PB_BPMiniMapSceneCapture(int32_t EntryPoint); // Function PB_BPMiniMapSceneCapture.PB_BPMiniMapSceneCapture_C.ExecuteUbergraph_PB_BPMiniMapSceneCapture // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

