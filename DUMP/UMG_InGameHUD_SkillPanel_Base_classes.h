// WidgetBlueprintGeneratedClass UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C
// Size: 0x3a8 (Inherited: 0x268)
struct UUMG_InGameHUD_SkillPanel_Base_C : UPBRoleSkillWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUMG_InGameHUD_ICON_C* UMG_InGameHUD_ICON; // 0x270(0x08)
	bool IsUseable; // 0x278(0x01)
	bool IsReloading; // 0x279(0x01)
	bool IsHaveSubSkill; // 0x27a(0x01)
	char pad_27B[0x1]; // 0x27b(0x01)
	int32_t States; // 0x27c(0x04)
	struct FSlateColor Green; // 0x280(0x28)
	struct FSlateColor Grey; // 0x2a8(0x28)
	struct FSlateColor white; // 0x2d0(0x28)
	struct FSlateColor Red; // 0x2f8(0x28)
	float ActivateTimePercent; // 0x320(0x04)
	float CoolDownTimePercent; // 0x324(0x04)
	float UseTimesPercent; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct FText PreText; // 0x330(0x18)
	struct FText PreText_Sub; // 0x348(0x18)
	bool IsDeploying_Skill; // 0x360(0x01)
	bool IsCount_Skill; // 0x361(0x01)
	bool Sub_IsCount_Skill; // 0x362(0x01)
	bool IsKeeping_&_CD_Skill; // 0x363(0x01)
	bool IsBuff_&_CD_Skill; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	struct UTexture2D* SkillIconImage; // 0x368(0x08)
	struct UTexture2D* SkillIconImage_Sub; // 0x370(0x08)
	struct FMulticastInlineDelegate Dispatcher_OnNotifyActualActivate; // 0x378(0x10)
	struct FMulticastInlineDelegate Dispather_OnNotifyUpdateDuration; // 0x388(0x10)
	struct FMulticastInlineDelegate Dispather_OnNotifyDeactive; // 0x398(0x10)

	void UpdateHUDCoolDownPercent(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.UpdateHUDCoolDownPercent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BindEventToDeactive(struct FDelegate Event); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.BindEventToDeactive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BindEventToUpdateDuration(struct FDelegate Event); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.BindEventToUpdateDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BindEventToActualActive(struct FDelegate Event); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.BindEventToActualActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndCoolDown(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.K2_EndCoolDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartActivate(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.K2_StartActivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCoolDownTime(float DeltaTime); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.K2_UpdateCoolDownTime // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ActualActivate(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.K2_ActualActivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Undeployed(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.K2_Undeployed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateDuration(float DeltaTime); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.K2_UpdateDuration // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartDeactivate(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.K2_StartDeactivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndDeactivate(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.K2_EndDeactivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_AutoDeactivate(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.K2_AutoDeactivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deployed(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.K2_Deployed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UseFailed(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.K2_UseFailed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameHUD_SkillPanel_Base(int32_t EntryPoint); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.ExecuteUbergraph_UMG_InGameHUD_SkillPanel_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Dispather_OnNotifyDeactive__DelegateSignature(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.Dispather_OnNotifyDeactive__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Dispather_OnNotifyUpdateDuration__DelegateSignature(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.Dispather_OnNotifyUpdateDuration__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Dispatcher_OnNotifyActualActivate__DelegateSignature(); // Function UMG_InGameHUD_SkillPanel_Base.UMG_InGameHUD_SkillPanel_Base_C.Dispatcher_OnNotifyActualActivate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

