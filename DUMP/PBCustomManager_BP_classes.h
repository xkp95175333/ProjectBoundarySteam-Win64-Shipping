// BlueprintGeneratedClass PBCustomManager_BP.PBCustomManager_BP_C
// Size: 0x78 (Inherited: 0x30)
struct UPBCustomManager_BP_C : UPBCustomManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)
	struct FMulticastInlineDelegate EnterTestField; // 0x38(0x10)
	struct UUMG_WaitingTips_C* UMG_WaitingForServerTips; // 0x48(0x08)
	struct UUMG_UnlockTips_C* UMG_UnlockTips; // 0x50(0x08)
	struct FMulticastInlineDelegate UnlockComplete; // 0x58(0x10)
	struct FTimerHandle TempTimer; // 0x68(0x08)
	struct APBDisplayActorManager_BP_C* PBDisplayActorManager; // 0x70(0x08)

	void FocusFirstWeapon(bool IsFirstWeapon); // Function PBCustomManager_BP.PBCustomManager_BP_C.FocusFirstWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusSkinSlotRefresh(enum class EPBCharacterSlotType CharacterCamEnum, enum class EPBPartSlotType InWeaponPartSlotType); // Function PBCustomManager_BP.PBCustomManager_BP_C.FocusSkinSlotRefresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomWeapon(); // Function PBCustomManager_BP.PBCustomManager_BP_C.CustomWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterFirstLevelPreviewCustomWeapon(); // Function PBCustomManager_BP.PBCustomManager_BP_C.EnterFirstLevelPreviewCustomWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusCharacterPart(enum class EPBCharacterSlotType CharacterCamEnum); // Function PBCustomManager_BP.PBCustomManager_BP_C.FocusCharacterPart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BP_TryToUnlock(struct FDelegate Event, struct FName InItemID, struct FName InRoleID, struct FName InWeaponId, struct APlayerController* PlayerController); // Function PBCustomManager_BP.PBCustomManager_BP_C.BP_TryToUnlock // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowTipsAboutCantUnlockDueToChallenge(struct UObject* Outer, struct FName InUnlockID, struct FDelegate Event); // Function PBCustomManager_BP.PBCustomManager_BP_C.ShowTipsAboutCantUnlockDueToChallenge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowAskWetherUnlockItemTips(struct UObject* Outer, struct FDelegate Event); // Function PBCustomManager_BP.PBCustomManager_BP_C.ShowAskWetherUnlockItemTips // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HideWaitingForServerTips(); // Function PBCustomManager_BP.PBCustomManager_BP_C.HideWaitingForServerTips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowWaitingForServerTips(struct UObject* Outer); // Function PBCustomManager_BP.PBCustomManager_BP_C.ShowWaitingForServerTips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReadyForDisplayActor(struct APBDisplayActorManager_BP_C* InDisplayActor); // Function PBCustomManager_BP.PBCustomManager_BP_C.ReadyForDisplayActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusWeaponPart(enum class EPBPartSlotType InWeaponPartSlotType, bool bOrnament); // Function PBCustomManager_BP.PBCustomManager_BP_C.FocusWeaponPart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterInGameOptionMode(); // Function PBCustomManager_BP.PBCustomManager_BP_C.EnterInGameOptionMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterPawnMode(); // Function PBCustomManager_BP.PBCustomManager_BP_C.EnterPawnMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterOverviewMode(); // Function PBCustomManager_BP.PBCustomManager_BP_C.EnterOverviewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExitCustomMode(); // Function PBCustomManager_BP.PBCustomManager_BP_C.ExitCustomMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterCustomMode(); // Function PBCustomManager_BP.PBCustomManager_BP_C.EnterCustomMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusSlot(enum class EPBSlotType InSlotType); // Function PBCustomManager_BP.PBCustomManager_BP_C.FocusSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AskWetherUnlockCallBack(bool bYes); // Function PBCustomManager_BP.PBCustomManager_BP_C.AskWetherUnlockCallBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UnlockItemCallBack(struct FName UnlockId, int32_t ErrorCode); // Function PBCustomManager_BP.PBCustomManager_BP_C.UnlockItemCallBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UnlockFailConfirm(bool bConfirm); // Function PBCustomManager_BP.PBCustomManager_BP_C.UnlockFailConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InteranlTryToUnlock(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId, struct APlayerController* PlayerController); // Function PBCustomManager_BP.PBCustomManager_BP_C.InteranlTryToUnlock // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delay(); // Function PBCustomManager_BP.PBCustomManager_BP_C.Delay // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_2(bool bConfirm); // Function PBCustomManager_BP.PBCustomManager_BP_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_RefreshDisplayActor(); // Function PBCustomManager_BP.PBCustomManager_BP_C.K2_RefreshDisplayActor // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBCustomManager_BP(int32_t EntryPoint); // Function PBCustomManager_BP.PBCustomManager_BP_C.ExecuteUbergraph_PBCustomManager_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void UnlockComplete__DelegateSignature(bool bSuccess); // Function PBCustomManager_BP.PBCustomManager_BP_C.UnlockComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterTestField__DelegateSignature(); // Function PBCustomManager_BP.PBCustomManager_BP_C.EnterTestField__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

