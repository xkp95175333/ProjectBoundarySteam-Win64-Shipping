// WidgetBlueprintGeneratedClass UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C
// Size: 0x348 (Inherited: 0x268)
struct UUMG_InGameUI_ScoreIcon_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* KilledPanel_Disappear; // 0x270(0x08)
	struct UWidgetAnimation* KilledPanel_Show; // 0x278(0x08)
	struct UWidgetAnimation* ZoneScore; // 0x280(0x08)
	struct UWidgetAnimation* KillType_Up; // 0x288(0x08)
	struct UWidgetAnimation* KIlltype_Disappear; // 0x290(0x08)
	struct UWidgetAnimation* Anim_Disappear; // 0x298(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image_2; // 0x2b0(0x08)
	struct UImage* Image_3; // 0x2b8(0x08)
	struct UImage* Image_277; // 0x2c0(0x08)
	struct UTextBlock* Kill_range; // 0x2c8(0x08)
	struct UCanvasPanel* KilledPanel; // 0x2d0(0x08)
	struct UCanvasPanel* killnamekilltype; // 0x2d8(0x08)
	struct UTextBlock* killtype; // 0x2e0(0x08)
	struct UScrollText_C* ScrollText; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_Score; // 0x2f0(0x08)
	int32_t CurrentScore; // 0x2f8(0x04)
	int32_t TargetScore; // 0x2fc(0x04)
	struct FTimerHandle AddScoreTimer; // 0x300(0x08)
	struct FTimerHandle DisappearTimer; // 0x308(0x08)
	float DisappearDelay; // 0x310(0x04)
	float score increse time; // 0x314(0x04)
	int32_t multi kill; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct TArray<struct FString> ShowTextArray; // 0x320(0x10)
	struct FTimerHandle KillTypeTime; // 0x330(0x08)
	struct TArray<struct FText> MedalsQueue; // 0x338(0x10)

	void KillInfoShow(); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.KillInfoShow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddScore(int32_t AddedScore, struct TArray<struct FText> Medals); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.AddScore // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void KilltypeDisappear(); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.KilltypeDisappear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FText Get_killtype_Text_1(); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.Get_killtype_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Disappear(); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.Disappear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FinishAddScore(); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.FinishAddScore // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddScoreImpl(); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.AddScoreImpl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddKillScore(float Kill Distance, struct FText kill name); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.AddKillScore // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WidgetAnimationEvt_Anim_Disappear_K2Node_WidgetAnimationEvent_1(); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.WidgetAnimationEvt_Anim_Disappear_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1556ec0
	void WidgetAnimationEvt_KIlltype_Disappear_K2Node_WidgetAnimationEvent_2(); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.WidgetAnimationEvt_KIlltype_Disappear_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x1556ec0
	void WidgetAnimationEvt_KillType_Up_K2Node_WidgetAnimationEvent_3(); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.WidgetAnimationEvt_KillType_Up_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameUI_ScoreIcon(int32_t EntryPoint); // Function UMG_InGameUI_ScoreIcon.UMG_InGameUI_ScoreIcon_C.ExecuteUbergraph_UMG_InGameUI_ScoreIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

