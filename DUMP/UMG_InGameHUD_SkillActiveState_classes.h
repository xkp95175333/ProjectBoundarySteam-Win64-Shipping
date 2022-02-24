// WidgetBlueprintGeneratedClass UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C
// Size: 0x2d8 (Inherited: 0x268)
struct UUMG_InGameHUD_SkillActiveState_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* SkilDeactiveAnimation; // 0x270(0x08)
	struct UWidgetAnimation* SkillActiveAnimation; // 0x278(0x08)
	struct UImage* Image_BG; // 0x280(0x08)
	struct UImage* Img_SkillIcon; // 0x288(0x08)
	struct UProgressBar* ProgressBar_SkillProgress; // 0x290(0x08)
	struct UScaleBox* ScaleBox_Main; // 0x298(0x08)
	struct UTextBlock* Tex_SkillName; // 0x2a0(0x08)
	struct UPBRoleSkillWidget* ParientSkillWidget; // 0x2a8(0x08)
	struct FText SkillName; // 0x2b0(0x18)
	struct UTexture2D* Img_SkillIconImage; // 0x2c8(0x08)
	struct FTimerHandle TimerHandle_UpdateProgressBar; // 0x2d0(0x08)

	void GetOwningSkill(struct APBBaseRoleSkillModule* BaseRoleSkill); // Function UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C.GetOwningSkill // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void DeactiveWidget(); // Function UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C.DeactiveWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetProgressBarPercent(); // Function UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C.SetProgressBarPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ActiveWidget(); // Function UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C.ActiveWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnActive(); // Function UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C.OnActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateDuration(); // Function UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C.UpdateDuration // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UPBRoleSkillWidget* Parient); // Function UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CallBack_DeactiveAnimationFinished(); // Function UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C.CallBack_DeactiveAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Deavtive(); // Function UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C.Deavtive // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_SkillActiveState(int32_t EntryPoint); // Function UMG_InGameHUD_SkillActiveState.UMG_InGameHUD_SkillActiveState_C.ExecuteUbergraph_UMG_InGameHUD_SkillActiveState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

