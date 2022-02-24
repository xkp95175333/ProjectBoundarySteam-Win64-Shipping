// WidgetBlueprintGeneratedClass UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_InGameHUD_MiniMapNode_LogicLayer_C : UPBMiniMapNode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_InGameHUD_MiniMapNode_C* UMG_InGameHUD_MiniMapNode; // 0x268(0x08)
	struct UTexture2D* MissileProjCircle; // 0x270(0x08)
	struct UTexture2D* NormalProjCircle; // 0x278(0x08)

	void Refresh Preference(struct FPBMiniMapIconInfo InMinimapIconInfo); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.Refresh Preference // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	bool IsMissile(struct UObject* Object); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.IsMissile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetNodeProjCircle(struct AActor* InNodeOwner, enum class EPBCamp InCamp); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.SetNodeProjCircle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetNodeZheight(float InZheight, struct AActor* InNodeOwner, enum class EPBCamp InCamp); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.SetNodeZheight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetNodeCircleSize(float Value); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.SetNodeCircleSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetNodeColor(struct FLinearColor InContentColorAndOpacity); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.SetNodeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetNodeImage(struct UTexture2D* Texture); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.SetNodeImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetNodeAncorLocation(struct FVector2D InXY); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.SetNodeAncorLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayFirshDisplayAnimation(enum class EPBMarkReason InMarkReason); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.PlayFirshDisplayAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateNode(struct FPBMiniMapIconInfo InIconInfo); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.UpdateNode // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void K2_AtFirstCapture(enum class EPBMarkReason MarkReason); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.K2_AtFirstCapture // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_MiniMapNode_LogicLayer(int32_t EntryPoint); // Function UMG_InGameHUD_MiniMapNode_LogicLayer.UMG_InGameHUD_MiniMapNode_LogicLayer_C.ExecuteUbergraph_UMG_InGameHUD_MiniMapNode_LogicLayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

