// WidgetBlueprintGeneratedClass UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C
// Size: 0x3fc (Inherited: 0x268)
struct UUMG_InGameHUD_ICON_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FailAnimation; // 0x270(0x08)
	struct UWidgetAnimation* TriggerAnimation; // 0x278(0x08)
	struct UWidgetAnimation* ActivatingAnimation; // 0x280(0x08)
	struct UWidgetAnimation* ActiveAnimation; // 0x288(0x08)
	struct UWidgetAnimation* CoollingCompletedAnimation; // 0x290(0x08)
	struct UBorder* Border_OverallTint; // 0x298(0x08)
	struct UBorder* Border_TEX; // 0x2a0(0x08)
	struct UImage* Image_ButtonOutLine; // 0x2a8(0x08)
	struct UImage* Img_BG; // 0x2b0(0x08)
	struct UImage* IMG_CoolCompleteAnimation; // 0x2b8(0x08)
	struct UImage* Img_SkillActivatingAnimation; // 0x2c0(0x08)
	struct UImage* Img_SkillActiveAnimation; // 0x2c8(0x08)
	struct UImage* Img_SkillIcon; // 0x2d0(0x08)
	struct UOverlay* Overlay_ActiveAnimation; // 0x2d8(0x08)
	struct UOverlay* Overlay_RemainAmmo; // 0x2e0(0x08)
	struct UPBInputTipsImage* PBInputTipsImage_L; // 0x2e8(0x08)
	struct UPBInputTipsImage* PBInputTipsImage_R; // 0x2f0(0x08)
	struct UProgressBar* ProgressBar_RemainAmmo; // 0x2f8(0x08)
	struct USpacer* Spacer_145; // 0x300(0x08)
	struct UTextBlock* Tex_CoolDownPercent; // 0x308(0x08)
	struct UTextBlock* Tex_FailWarning; // 0x310(0x08)
	struct UTextBlock* Tex_ModuleName; // 0x318(0x08)
	struct UTextBlock* Tex_RemainAmmo; // 0x320(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_ButtonTip; // 0x328(0x08)
	struct FLinearColor PassiveColor; // 0x330(0x10)
	struct FLinearColor DefaultGray; // 0x340(0x10)
	struct FTimerHandle UpdateingIconCoolingDownTimer; // 0x350(0x08)
	bool DashModuleUseable; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	float PASSIVEOpacity; // 0x35c(0x04)
	float CoolDownOpacity; // 0x360(0x04)
	bool bDoubleInputOnGamepad; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	struct UTexture2D* IconTexture; // 0x368(0x08)
	struct TSoftObjectPtr<struct UTexture2D> IconSoftTex; // 0x370(0x28)
	struct FText Text; // 0x398(0x18)
	struct FText AbilityCount; // 0x3b0(0x18)
	struct FText CoolDownPercent; // 0x3c8(0x18)
	struct FName ButtonInputName; // 0x3e0(0x08)
	struct FName LeftInputName; // 0x3e8(0x08)
	struct FName RightInputName; // 0x3f0(0x08)
	float RemainCountPercent; // 0x3f8(0x04)

	void Interface_UpdateCooldownPercent(struct FText In CooldownPercent, bool ShouldShowPercent); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface_UpdateCooldownPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Interface_UpdateRemainCountPercent(float InRemainPercent); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface_UpdateRemainCountPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Interface_OnFail(struct FText InFailReason); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface_OnFail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Interface_OnTrigger(); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface_OnTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Interface_OnStopActivating(); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface_OnStopActivating // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Interface_OnActivating(); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface_OnActivating // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Interface_OnReady(); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface_OnReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Interface_OnCoolDown(struct FText InCoolDownPercent); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface_OnCoolDown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Interface_UpdateCountNumber(struct FText InAbilitiCountNumber); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface_UpdateCountNumber // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Interface_OnPress(); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface_OnPress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Interface_OnPassiveState(); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface_OnPassiveState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Interface Init Icon Info(struct UTexture2D* IconTexture, struct TSoftObjectPtr<struct UTexture2D> InIconSoftTex, struct FText InText, struct FText InAblitiCount, float InRemainCountPercent, struct FText InCoolDownPercent, struct FName InButtonInputName, bool InDoubleInputOnGamepad, struct FName InLeftInputName, struct FName InRightInputName); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Interface Init Icon Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void DSP_OnSwitchInputDevice_Event_1(enum class EInputDevice CurrentDevice); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.DSP_OnSwitchInputDevice_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_ICON(int32_t EntryPoint); // Function UMG_InGameHUD_ICON.UMG_InGameHUD_ICON_C.ExecuteUbergraph_UMG_InGameHUD_ICON // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

