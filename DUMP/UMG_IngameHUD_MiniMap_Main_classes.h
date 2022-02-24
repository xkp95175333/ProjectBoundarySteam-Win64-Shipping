// WidgetBlueprintGeneratedClass UMG_IngameHUD_MiniMap_Main.UMG_IngameHUD_MiniMap_Main_C
// Size: 0x2d8 (Inherited: 0x268)
struct UUMG_IngameHUD_MiniMap_Main_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* SpawnEnemyNodeWarning; // 0x270(0x08)
	struct UImage* Image_BG; // 0x278(0x08)
	struct UImage* Image_BGline; // 0x280(0x08)
	struct UImage* Image_BGline_OutLine; // 0x288(0x08)
	struct UImage* Image_MiniMapScene; // 0x290(0x08)
	struct UImage* Image_MiniMapScene_DeadZone; // 0x298(0x08)
	struct UOverlay* MiniMapNodeContainer; // 0x2a0(0x08)
	struct URetainerBox* RetainerBox_MainRender; // 0x2a8(0x08)
	struct UUMG_IngameHUD_Heat_C* UMG_IngameHUD_Heat; // 0x2b0(0x08)
	struct UMaterialInstanceDynamic* MinimapBGMID; // 0x2b8(0x08)
	struct UTextureRenderTarget2D* MinimapBGRT; // 0x2c0(0x08)
	struct UMaterialInstanceDynamic* MID_SceneCapture; // 0x2c8(0x08)
	struct UMaterialInstanceDynamic* MID_SceneCapture_DeadZone; // 0x2d0(0x08)

	void ResetMinimapBG(); // Function UMG_IngameHUD_MiniMap_Main.UMG_IngameHUD_MiniMap_Main_C.ResetMinimapBG // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitMinimapBG(struct UTextureRenderTarget2D* InRT, struct UTextureRenderTarget2D* InDeadZoneRT, struct UTextureRenderTarget2D* InRT_UP); // Function UMG_IngameHUD_MiniMap_Main.UMG_IngameHUD_MiniMap_Main_C.InitMinimapBG // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayWarningAnimation(); // Function UMG_IngameHUD_MiniMap_Main.UMG_IngameHUD_MiniMap_Main_C.PlayWarningAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddChildNode(struct UWidget* Content); // Function UMG_IngameHUD_MiniMap_Main.UMG_IngameHUD_MiniMap_Main_C.AddChildNode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_IngameHUD_MiniMap_Main.UMG_IngameHUD_MiniMap_Main_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_IngameHUD_MiniMap_Main(int32_t EntryPoint); // Function UMG_IngameHUD_MiniMap_Main.UMG_IngameHUD_MiniMap_Main_C.ExecuteUbergraph_UMG_IngameHUD_MiniMap_Main // (Final|UbergraphFunction) // @ game+0x1556ec0
};

