// WidgetBlueprintGeneratedClass UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C
// Size: 0x35c (Inherited: 0x268)
struct UUMG_InGameHUD_MiniMapNode_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FirstDisplayAnimation_Heat; // 0x270(0x08)
	struct UWidgetAnimation* FirstDisplayAnimation; // 0x278(0x08)
	struct UBorder* Border_NodeAnimation; // 0x280(0x08)
	struct UBorder* Border_TintBorder; // 0x288(0x08)
	struct UCanvasPanel* CanvasPanel_UVMovement; // 0x290(0x08)
	struct UImage* Image_CenterLine; // 0x298(0x08)
	struct UImage* Image_FirstDisplayAnimation_1; // 0x2a0(0x08)
	struct UImage* Image_FirstDisplayAnimation_2; // 0x2a8(0x08)
	struct UImage* Image_FirstDisplayAnimation_3; // 0x2b0(0x08)
	struct UImage* Image_FirstDisplayAnimation_4; // 0x2b8(0x08)
	struct UOverlay* Overlay_NodeAnimationOverlay; // 0x2c0(0x08)
	struct UOverlay* Overlay_NodeImages; // 0x2c8(0x08)
	struct UImage* Tex_NodeImage; // 0x2d0(0x08)
	struct UImage* Tex_ProjectCircle; // 0x2d8(0x08)
	struct UImage* Tex_RangeCircle; // 0x2e0(0x08)
	struct UImage* Tex_ZhengihtLine; // 0x2e8(0x08)
	float NewVar_1; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct UMaterialInstanceDynamic* RangeCircleMID; // 0x2f8(0x08)
	struct AActor* OwningActor; // 0x300(0x08)
	struct UTexture2D* MissileUpImage; // 0x308(0x08)
	struct UTexture2D* MissileDownImage; // 0x310(0x08)
	struct UTexture2D* NormalUpCircleImage; // 0x318(0x08)
	struct UTexture2D* NormalDownCircleImage; // 0x320(0x08)
	struct UTexture2D* NodeNormalLineImage; // 0x328(0x08)
	struct UTexture2D* NodeMissileLineImage; // 0x330(0x08)
	float MiniMapZHeight; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct UTexture2D* CenterLineUpImage; // 0x340(0x08)
	struct UTexture2D* CenterLineCenterImage; // 0x348(0x08)
	struct UTexture2D* CenterLineDownImage; // 0x350(0x08)
	float CenterLineChangeValue; // 0x358(0x04)

	void SetCenterLineImageByZHeight(float InZheight); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.SetCenterLineImageByZHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayFirstDisplayAnimation_HeatOrFire(); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.PlayFirstDisplayAnimation_HeatOrFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayFirstDisplayAnimation_SightMarked(); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.PlayFirstDisplayAnimation_SightMarked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	bool IsMissile(struct UObject* Object); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.IsMissile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetProjCircleTex(struct UTexture2D* Texture); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.SetProjCircleTex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetLineAndCircleVisiable(enum class ESlateVisibility InVisibility); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.SetLineAndCircleVisiable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDirectionImages(bool Condition); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.SetDirectionImages // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetLineAndCirclePerform(float InZheight); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.SetLineAndCirclePerform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetNodeColor(struct FLinearColor InContentColorAndOpacity); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.SetNodeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetNodeImage(struct UTexture2D* Texture); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.SetNodeImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Node Zheight(float InZheight, struct AActor* InActor); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.Set Node Zheight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_MiniMapNode(int32_t EntryPoint); // Function UMG_InGameHUD_MiniMapNode.UMG_InGameHUD_MiniMapNode_C.ExecuteUbergraph_UMG_InGameHUD_MiniMapNode // (Final|UbergraphFunction) // @ game+0x1556ec0
};

