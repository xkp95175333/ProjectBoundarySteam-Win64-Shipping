// WidgetBlueprintGeneratedClass UMG_InGameHUD_MinimapMain_LogicLayer.UMG_InGameHUD_MinimapMain_LogicLayer_C
// Size: 0x3b8 (Inherited: 0x398)
struct UUMG_InGameHUD_MinimapMain_LogicLayer_C : UPBMiniMapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UUMG_IngameHUD_MiniMap_Main_C* UMG_IngameHUD_MiniMap_Main; // 0x3a0(0x08)
	struct UTexture2D* MissileImage; // 0x3a8(0x08)
	struct APB_BPMiniMapSceneCapture_C* SceneCapture; // 0x3b0(0x08)

	void InitMiniMapCaptureRT(); // Function UMG_InGameHUD_MinimapMain_LogicLayer.UMG_InGameHUD_MinimapMain_LogicLayer_C.InitMiniMapCaptureRT // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetMiniMapMain(struct UUMG_IngameHUD_MiniMap_Main_C* OutPtr); // Function UMG_InGameHUD_MinimapMain_LogicLayer.UMG_InGameHUD_MinimapMain_LogicLayer_C.GetMiniMapMain // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlaySpawnWarningNodeAnimation(); // Function UMG_InGameHUD_MinimapMain_LogicLayer.UMG_InGameHUD_MinimapMain_LogicLayer_C.PlaySpawnWarningNodeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddWidgetToCanvas(struct UUMG_InGameHUD_MiniMapNode_LogicLayer_C* Widget); // Function UMG_InGameHUD_MinimapMain_LogicLayer.UMG_InGameHUD_MinimapMain_LogicLayer_C.AddWidgetToCanvas // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_InGameHUD_MinimapMain_LogicLayer.UMG_InGameHUD_MinimapMain_LogicLayer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_AddWidgetToCanvasPanel(struct UPBMiniMapNode* OutMiniMapNode); // Function UMG_InGameHUD_MinimapMain_LogicLayer.UMG_InGameHUD_MinimapMain_LogicLayer_C.K2_AddWidgetToCanvasPanel // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Init(); // Function UMG_InGameHUD_MinimapMain_LogicLayer.UMG_InGameHUD_MinimapMain_LogicLayer_C.K2_Init // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_MinimapMain_LogicLayer(int32_t EntryPoint); // Function UMG_InGameHUD_MinimapMain_LogicLayer.UMG_InGameHUD_MinimapMain_LogicLayer_C.ExecuteUbergraph_UMG_InGameHUD_MinimapMain_LogicLayer // (Final|UbergraphFunction) // @ game+0x1556ec0
};

