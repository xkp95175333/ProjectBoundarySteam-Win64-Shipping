// WidgetBlueprintGeneratedClass UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C
// Size: 0x370 (Inherited: 0x270)
struct UUMG_InGameHUD_OperationInstruction_C : UPBWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_211; // 0x280(0x08)
	struct UPBInputTipsImage* Image_ButtonHnit; // 0x288(0x08)
	struct UInvalidationBox* InvalidationBox_3; // 0x290(0x08)
	struct UScaleBox* MechUAVIcon; // 0x298(0x08)
	struct UHorizontalBox* OperationTip; // 0x2a0(0x08)
	struct UProgressBar* ProgressBar_365; // 0x2a8(0x08)
	struct UProgressBar* ProgressBar_MechUAV; // 0x2b0(0x08)
	struct UImage* ProgressBarframe; // 0x2b8(0x08)
	struct UImage* ProgressBarframe_2; // 0x2c0(0x08)
	struct UScaleBox* SB_Progress; // 0x2c8(0x08)
	struct UScaleBox* SB_Progress_MechUAV; // 0x2d0(0x08)
	struct UTextBlock* Tex_Operation; // 0x2d8(0x08)
	struct UTextBlock* Tex_RemainTime; // 0x2e0(0x08)
	struct UTextBlock* Tex_RemainTime_MechUAV; // 0x2e8(0x08)
	struct UTextBlock* Tex_RemainTime_MechUAV_2; // 0x2f0(0x08)
	struct UUMG_InGameHUD_Mother_C* ParientHUD; // 0x2f8(0x08)
	struct FTimerHandle ProgressBarTimer; // 0x300(0x08)
	enum class EPBGamePlayEventType CurrentGamePlayEventType; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct TMap<enum class EPBGamePlayEventType, struct FFPBGameEventConfig_BP> GameEventMap; // 0x310(0x50)
	enum class EPBGamePlayEventType PrevGamePlayEventType; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FTimerHandle MechUAVProgressBarTimer; // 0x368(0x08)

	void UpdateMechUAVProgressBar(); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.UpdateMechUAVProgressBar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HiddenMechUAVHint(); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.HiddenMechUAVHint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowMechUAVHint(); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.ShowMechUAVHint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BackToPrevGameEventHint(); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.BackToPrevGameEventHint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowGameEventHint(enum class EPBGamePlayEventType InGamePlayEventType); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.ShowGameEventHint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetPickUPWeaponName(struct FText WeaponName); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.GetPickUPWeaponName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void StopProgressBarTimer(); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.StopProgressBarTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateProgressBarProgress(); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.UpdateProgressBarProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshPerefrence(struct FText InText, struct FName InputName); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.RefreshPerefrence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_ParientPreConstruct(struct UUMG_InGameHUD_Mother_C* Parient); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.Event_ParientPreConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_OperationInstruction(int32_t EntryPoint); // Function UMG_InGameHUD_OperationInstruction.UMG_InGameHUD_OperationInstruction_C.ExecuteUbergraph_UMG_InGameHUD_OperationInstruction // (Final|UbergraphFunction) // @ game+0x1556ec0
};

