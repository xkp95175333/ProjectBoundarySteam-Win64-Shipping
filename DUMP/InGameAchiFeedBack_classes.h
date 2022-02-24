// WidgetBlueprintGeneratedClass InGameAchiFeedBack.InGameAchiFeedBack_C
// Size: 0x352 (Inherited: 0x268)
struct UInGameAchiFeedBack_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* LevelUpTextAnim; // 0x270(0x08)
	struct UWidgetAnimation* IconShakeStageColume; // 0x278(0x08)
	struct UWidgetAnimation* IconShakeStage2; // 0x280(0x08)
	struct UWidgetAnimation* IconShakeStage1; // 0x288(0x08)
	struct UTextBlock* ArchivementNameText; // 0x290(0x08)
	struct UCanvasPanel* CanvasPanelMain; // 0x298(0x08)
	struct UImage* Img_1; // 0x2a0(0x08)
	struct UImage* Img_2; // 0x2a8(0x08)
	struct UImage* Img_3; // 0x2b0(0x08)
	struct UImage* Img_4; // 0x2b8(0x08)
	struct UImage* Img_5; // 0x2c0(0x08)
	struct UImage* IMG_Main; // 0x2c8(0x08)
	struct UTextBlock* TextLevelNum; // 0x2d0(0x08)
	struct UObject* DefaultBlankImage; // 0x2d8(0x08)
	struct FText AchiDisplayText; // 0x2e0(0x18)
	struct TArray<struct FAchievementInfo> ArchInfo; // 0x2f8(0x10)
	struct FText LevelNum; // 0x308(0x18)
	char LevelNumCache; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct FMulticastInlineDelegate PlayEnd; // 0x328(0x10)
	bool AreWeTheOnlyOneIcon; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct TArray<struct FAchievementInfo> ArchInfoTest; // 0x340(0x10)
	bool bShake1IsPlaying; // 0x350(0x01)
	bool bLevelUpIsPlaying; // 0x351(0x01)

	void UpdateArchiColumContent(); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.UpdateArchiColumContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitWidget(struct TArray<struct FAchievementInfo> ArchInfo); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.InitWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AdditemAndPlayAnim(bool ShouldPlayAnim, bool LevelUp); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.AdditemAndPlayAnim // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateSubWidget(bool HaveValue, struct UImage* ImageWidget, struct UObject* Image); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.UpdateSubWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateLevelNum(); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.UpdateLevelNum // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateWidgetAndStartAnim(); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.UpdateWidgetAndStartAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void WidgetAnimationEvt_IconShakeStage1_K2Node_WidgetAnimationEvent_1(); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.WidgetAnimationEvt_IconShakeStage1_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1556ec0
	void WidgetAnimationEvt_LevelUpTextAnim_K2Node_WidgetAnimationEvent_2(); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.WidgetAnimationEvt_LevelUpTextAnim_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x1556ec0
	void WidgetAnimationEvt_IconShakeStage2_K2Node_WidgetAnimationEvent_3(); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.WidgetAnimationEvt_IconShakeStage2_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_InGameAchiFeedBack(int32_t EntryPoint); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.ExecuteUbergraph_InGameAchiFeedBack // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void PlayEnd__DelegateSignature(); // Function InGameAchiFeedBack.InGameAchiFeedBack_C.PlayEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

