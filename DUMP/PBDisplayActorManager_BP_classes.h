// BlueprintGeneratedClass PBDisplayActorManager_BP.PBDisplayActorManager_BP_C
// Size: 0x2e8 (Inherited: 0x220)
struct APBDisplayActorManager_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UChildActorComponent* PBDisplayItem_BP; // 0x228(0x08)
	struct UChildActorComponent* PBDisplayWeapon_BP; // 0x230(0x08)
	struct UChildActorComponent* PBDisplayCharacter_BP; // 0x238(0x08)
	struct USceneComponent* Scene; // 0x240(0x08)
	struct APBWeapon* Weapon1; // 0x248(0x08)
	struct APBWeapon* Weapon2; // 0x250(0x08)
	struct APBVehicle* Vehicle; // 0x258(0x08)
	struct APBWeapon* WeaponPreview; // 0x260(0x08)
	enum class E_DisplayActorState CurrentDisplayState; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct USceneComponent* DisplayMainComponent; // 0x270(0x08)
	enum class EPBSlotType SlotType; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct USceneComponent* FocusComponent; // 0x280(0x08)
	struct UStaticMeshComponent* Accessory3P; // 0x288(0x08)
	struct UStaticMeshComponent* Accessory1P; // 0x290(0x08)
	struct USkeletalMeshComponent* AO_Mesh_1; // 0x298(0x08)
	bool IsInPreviewState; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UTimelineComponent* ExtraCamBlendTimeline; // 0x2a8(0x08)
	struct APBDisplayWeapon_BP_C* WeaponChild; // 0x2b0(0x08)
	struct APBWeapon* Weapon; // 0x2b8(0x08)
	bool NewHidden; // 0x2c0(0x01)
	enum class E_DisplayActorState NewState; // 0x2c1(0x01)
	bool NewShow; // 0x2c2(0x01)
	char pad_2C3[0x5]; // 0x2c3(0x05)
	struct FPBCharacterSlot_UI CharacterSlotStruct; // 0x2c8(0x20)

	void EnterFirstWeapon(bool IsFirstWeapon); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EnterFirstWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusSlotRefresh(enum class EPBCharacterSlotType CharacterCamEnum, enum class EPBPartSlotType InWeaponPartSlotType, bool bOrnament); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.FocusSlotRefresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndCharacterCustomize(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EndCharacterCustomize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BeginHidden(bool Hidden); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.BeginHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowDisplayActor(bool NewShow); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.ShowDisplayActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndFirstLevelPreviewCustomWeapon(bool IsFirstLevel); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EndFirstLevelPreviewCustomWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CharacterVehicleStateControl(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.CharacterVehicleStateControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FirstLevelPreviewCustomWeapon(bool IsFirstLevel); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.FirstLevelPreviewCustomWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusCharacterPart(enum class EPBCharacterSlotType CharacterCamEnum); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.FocusCharacterPart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ClearOldMaterial(struct UMeshComponent* InMesh); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.ClearOldMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartInGameOptionMode(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.StartInGameOptionMode // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ChangeState(enum class E_DisplayActorState NewState); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.ChangeState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterInGameOptionMode(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EnterInGameOptionMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndWeaponState(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EndWeaponState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartWeaponState(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.StartWeaponState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterPawnState(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EnterPawnState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterOverviewMode(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EnterOverviewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExitCustomMode(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.ExitCustomMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndOverviewState(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EndOverviewState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartOverviewState(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.StartOverviewState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndItemState(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EndItemState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartItemState(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.StartItemState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshPerviewWeapon(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.RefreshPerviewWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshPreviewItem(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.RefreshPreviewItem // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshPawn(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.RefreshPawn // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HiddenDisplayActor(bool NewHidden); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.HiddenDisplayActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterCustomMode(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EnterCustomMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusSlot(enum class EPBSlotType InSlotType); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.FocusSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusWeaponPart(enum class EPBPartSlotType InWeaponPartSlotType, bool bOrnament); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.FocusWeaponPart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndCustomWeaponState(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EndCustomWeaponState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Start Custom Weapon State(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.Start Custom Weapon State // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EndPawnState(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.EndPawnState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StartPawnState(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.StartPawnState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RegisterToCustomManager(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.RegisterToCustomManager // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshDisplayActor(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.RefreshDisplayActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UserConstructionScript(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveActorOnClicked(struct FKey ButtonPressed); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.ReceiveActorOnClicked // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveActorOnReleased(struct FKey ButtonReleased); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.ReceiveActorOnReleased // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBDisplayActorManager_BP(int32_t EntryPoint); // Function PBDisplayActorManager_BP.PBDisplayActorManager_BP_C.ExecuteUbergraph_PBDisplayActorManager_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

