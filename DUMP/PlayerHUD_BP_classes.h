// BlueprintGeneratedClass PlayerHUD_BP.PlayerHUD_BP_C
// Size: 0x8b8 (Inherited: 0x840)
struct APlayerHUD_BP_C : APBHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x840(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x848(0x08)
	struct UKillList_C* KillList; // 0x850(0x08)
	bool beingAffectedByEMP; // 0x858(0x01)
	char pad_859[0x3]; // 0x859(0x03)
	float Phase2Delay; // 0x85c(0x04)
	float Phase3Delay; // 0x860(0x04)
	char pad_864[0x4]; // 0x864(0x04)
	struct FTimerHandle Phase2DelayTimerHandle; // 0x868(0x08)
	struct FTimerHandle Phase3DelayTimerHandle; // 0x870(0x08)
	bool InOutWarning; // 0x878(0x01)
	char pad_879[0x7]; // 0x879(0x07)
	struct UAssistAimingWidget_C* AssistAimingWidget; // 0x880(0x08)
	struct UCountDown_C* CountDown; // 0x888(0x08)
	float AssistAimingRadius; // 0x890(0x04)
	char pad_894[0x4]; // 0x894(0x04)
	struct TArray<struct FString> Medal; // 0x898(0x10)
	struct TArray<struct UPBMainMenuWidget*> CapturableWidget; // 0x8a8(0x10)

	void HIdeWidgets(); // Function PlayerHUD_BP.PlayerHUD_BP_C.HIdeWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RemoveWidgetOnEndPlay(); // Function PlayerHUD_BP.PlayerHUD_BP_C.RemoveWidgetOnEndPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RemoveWidgets(); // Function PlayerHUD_BP.PlayerHUD_BP_C.RemoveWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartRebooting(); // Function PlayerHUD_BP.PlayerHUD_BP_C.StartRebooting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartRebootingPhase3(); // Function PlayerHUD_BP.PlayerHUD_BP_C.StartRebootingPhase3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartRebootingPhase2(); // Function PlayerHUD_BP.PlayerHUD_BP_C.StartRebootingPhase2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartRebootingPhase1(); // Function PlayerHUD_BP.PlayerHUD_BP_C.StartRebootingPhase1 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndEMPEffect(); // Function PlayerHUD_BP.PlayerHUD_BP_C.EndEMPEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartEMPEffect(); // Function PlayerHUD_BP.PlayerHUD_BP_C.StartEMPEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetMissileModeWidget(bool OnMissileMode); // Function PlayerHUD_BP.PlayerHUD_BP_C.SetMissileModeWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeKilled(struct APBPlayerState* KillerPlayerState, struct APBPlayerState* KilledPlayerState, struct UDamageType* DamageType, enum class EPBHitZone HitZone, struct UTextureRenderTarget2D* InInstigatorRenderTarget, struct UTexture* InInstigatorTexture); // Function PlayerHUD_BP.PlayerHUD_BP_C.NotifyBeKilled // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PlayerHUD_BP.PlayerHUD_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PlayerHUD_BP.PlayerHUD_BP_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyPlayerEnter(struct APBPlayerState* KillerPlayerState, bool bEnter); // Function PlayerHUD_BP.PlayerHUD_BP_C.NotifyPlayerEnter // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BeKilledSoundEvent(struct APBPlayerState* KillerPlayerState, struct APBPlayerState* KilledPlayerState, struct UDamageType* DamageType); // Function PlayerHUD_BP.PlayerHUD_BP_C.BeKilledSoundEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PlayerHUD_BP(int32_t EntryPoint); // Function PlayerHUD_BP.PlayerHUD_BP_C.ExecuteUbergraph_PlayerHUD_BP // (Final|UbergraphFunction) // @ game+0x1556ec0
};

