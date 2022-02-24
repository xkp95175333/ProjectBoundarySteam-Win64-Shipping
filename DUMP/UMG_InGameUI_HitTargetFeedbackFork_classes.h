// WidgetBlueprintGeneratedClass UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C
// Size: 0x2d8 (Inherited: 0x268)
struct UUMG_InGameUI_HitTargetFeedbackFork_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* SpawnKillLock_Tom; // 0x270(0x08)
	struct UWidgetAnimation* SpawnKillLock; // 0x278(0x08)
	struct UWidgetAnimation* AnimKillColorTrans; // 0x280(0x08)
	struct UWidgetAnimation* AnimHitFeedback_Armor; // 0x288(0x08)
	struct UWidgetAnimation* AnimHitFeedback; // 0x290(0x08)
	struct UImage* HitArmorImage; // 0x298(0x08)
	struct UImage* HitFeedBack; // 0x2a0(0x08)
	struct UMeshComponent* Sight1PMesh; // 0x2a8(0x08)
	struct AGAC_BP_C* CurrentPawn; // 0x2b0(0x08)
	float CurrentDamage; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UMaterialInstanceDynamic* FOCKMID; // 0x2c0(0x08)
	struct TArray<struct UTexture2D*> FockTextures; // 0x2c8(0x10)

	void PlayHitEnemyAnim(); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.PlayHitEnemyAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTexByDamage(float InDamage); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.SetTexByDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopFeedBackAnimation(); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.StopFeedBackAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateHitForkMaterialSize(); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.UpdateHitForkMaterialSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateHitDamageTemp(float InDamage); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.UpdateHitDamageTemp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ArmorDestoryHandle(); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.ArmorDestoryHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Hit Target Handle(struct APBPlayerState* AttackPlayerState, struct UObject* HitObject, enum class EPBHitZone HitZone, float DamageTaken); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.Hit Target Handle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ClientKillSound(); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.ClientKillSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ClientKilltagertHandle(float KillDistance, struct FText TargetName, enum class EPBHitZone HitZone); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.ClientKilltagertHandle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HitCSTMTargetHandle(bool KillShot, bool headshot, bool ArmorShot, float Damage); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.HitCSTMTargetHandle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateLocation(struct FGeometry Geometry); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.UpdateLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FindSightMesh(); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.FindSightMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void HitEnemy(); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.HitEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void KillEnemy(); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.KillEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HitArmot(); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.HitArmot // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_InGameUI_HitTargetFeedbackFork(int32_t EntryPoint); // Function UMG_InGameUI_HitTargetFeedbackFork.UMG_InGameUI_HitTargetFeedbackFork_C.ExecuteUbergraph_UMG_InGameUI_HitTargetFeedbackFork // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

