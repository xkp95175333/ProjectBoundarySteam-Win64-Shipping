// Class ProjectBoundary.AsyncTaskAttributeChanged
// Size: 0x90 (Inherited: 0x30)
struct UAsyncTaskAttributeChanged : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnAttributeChanged; // 0x30(0x10)
	struct UAbilitySystemComponent* ASC; // 0x40(0x08)
	char pad_48[0x48]; // 0x48(0x48)

	struct UAsyncTaskAttributeChanged* ListenForAttributesChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct TArray<struct FGameplayAttribute> Attributes); // Function ProjectBoundary.AsyncTaskAttributeChanged.ListenForAttributesChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11461c0
	struct UAsyncTaskAttributeChanged* ListenForAttributeChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute); // Function ProjectBoundary.AsyncTaskAttributeChanged.ListenForAttributeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1146090
	void EndTask(); // Function ProjectBoundary.AsyncTaskAttributeChanged.EndTask // (Final|Native|Public|BlueprintCallable) // @ game+0x11447a0
};

// Class ProjectBoundary.AsyncTaskGameplayTagAddedRemoved
// Size: 0x78 (Inherited: 0x30)
struct UAsyncTaskGameplayTagAddedRemoved : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnTagAdded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnTagRemoved; // 0x40(0x10)
	struct UAbilitySystemComponent* ASC; // 0x50(0x08)
	char pad_58[0x20]; // 0x58(0x20)

	struct UAsyncTaskGameplayTagAddedRemoved* ListenForGameplayTagAddedOrRemoved(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayTagContainer Tags); // Function ProjectBoundary.AsyncTaskGameplayTagAddedRemoved.ListenForGameplayTagAddedOrRemoved // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1146300
	void EndTask(); // Function ProjectBoundary.AsyncTaskGameplayTagAddedRemoved.EndTask // (Final|Native|Public|BlueprintCallable) // @ game+0x11447c0
};

// Class ProjectBoundary.AttachModuleComponent
// Size: 0x168 (Inherited: 0xb0)
struct UAttachModuleComponent : UActorComponent {
	char pad_B0[0x10]; // 0xb0(0x10)
	struct UTexture2D* InstigatorTexture; // 0xc0(0x08)
	char pad_C8[0xa0]; // 0xc8(0xa0)

	void OnStartFunctioning(struct FVector InLoactionParam); // Function ProjectBoundary.AttachModuleComponent.OnStartFunctioning // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1146690
};

// Class ProjectBoundary.MatchmakingQoSCollector
// Size: 0x40 (Inherited: 0x28)
struct UMatchmakingQoSCollector : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class ProjectBoundary.AwsGameliftQoSCollector
// Size: 0x40 (Inherited: 0x40)
struct UAwsGameliftQoSCollector : UMatchmakingQoSCollector {
};

// Class ProjectBoundary.MatchmakingService
// Size: 0x40 (Inherited: 0x28)
struct UMatchmakingService : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class ProjectBoundary.AwsGameliftService
// Size: 0x168 (Inherited: 0x40)
struct UAwsGameliftService : UMatchmakingService {
	char pad_40[0x128]; // 0x40(0x128)
};

// Class ProjectBoundary.BlueprintFunctions
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintFunctions : UBlueprintFunctionLibrary {

	void StopFlushingKeysWhenLostFocus(struct UObject* WorldContextObject, bool NewStop); // Function ProjectBoundary.BlueprintFunctions.StopFlushingKeysWhenLostFocus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11472a0
	bool SimulateReleaseKey(struct FKey Key, int32_t UserIndex); // Function ProjectBoundary.BlueprintFunctions.SimulateReleaseKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1147170
	bool SimulatePressKey(struct FKey Key, bool bRepeat, int32_t UserIndex); // Function ProjectBoundary.BlueprintFunctions.SimulatePressKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1146ff0
	void SetGamma(float InVal); // Function ProjectBoundary.BlueprintFunctions.SetGamma // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1146f70
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry Geometry, struct FVector2D ScreenPosition, struct FVector2D LocalCoordinate); // Function ProjectBoundary.BlueprintFunctions.ScreenToWidgetLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1146de0
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D AbsoluteCoordinate); // Function ProjectBoundary.BlueprintFunctions.ScreenToWidgetAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1146ce0
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D ViewportPosition); // Function ProjectBoundary.BlueprintFunctions.ScreenToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1146be0
	float RotationDegrees(struct UObject* WorldContextObject, struct FVector2D ScreenPosition); // Function ProjectBoundary.BlueprintFunctions.RotationDegrees // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1146b10
	void RenderDataArrayAsLineBatch(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FLinearColor LineColor, char DepthPriority, float Thickness, float LifeTime); // Function ProjectBoundary.BlueprintFunctions.RenderDataArrayAsLineBatch // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x11468d0
	bool NeedToAvoidIndulging(struct FString ID); // Function ProjectBoundary.BlueprintFunctions.NeedToAvoidIndulging // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1146510
	void MapSortFromValues(struct TMap<struct FName, int32_t> IntMap); // Function ProjectBoundary.BlueprintFunctions.MapSortFromValues // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1146420
	bool IsWithEditor(); // Function ProjectBoundary.BlueprintFunctions.IsWithEditor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd4f790
	bool IsValidID(struct FString ID); // Function ProjectBoundary.BlueprintFunctions.IsValidID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1145fa0
	bool IsOnScreen(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D InEdgeSize); // Function ProjectBoundary.BlueprintFunctions.IsOnScreen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1145ea0
	bool IsOnCircle(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, float DrawRadius); // Function ProjectBoundary.BlueprintFunctions.IsOnCircle // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1145da0
	bool IsLoopedSound(struct USoundBase* InSoundBase); // Function ProjectBoundary.BlueprintFunctions.IsLoopedSound // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1145d10
	bool IsChineseName(struct FString InName); // Function ProjectBoundary.BlueprintFunctions.IsChineseName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1145c20
	bool IsBoxOverlapCircle(struct UObject* WorldContextObject, struct FVector2D BasePosition, float Radius, struct FVector BoundsExtent, struct FTransform LocalToWorld); // Function ProjectBoundary.BlueprintFunctions.IsBoxOverlapCircle // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1145a00
	struct FName GetUnlockIDByItem(struct UObject* WorldContextObject, struct FName InItemID, struct FName InRoleID, struct FName InWeaponId); // Function ProjectBoundary.BlueprintFunctions.GetUnlockIDByItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1145890
	bool GetScreenPositionFromWorldLocation(struct UObject* WorldContextObject, struct FVector WorldLocation, struct FVector2D ScreenPosition); // Function ProjectBoundary.BlueprintFunctions.GetScreenPositionFromWorldLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1145770
	struct FVector2D GetScreenLocationinSafeZoneLocation(struct UObject* WorldContextObject, struct FVector2D ScreenLocation); // Function ProjectBoundary.BlueprintFunctions.GetScreenLocationinSafeZoneLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x11456b0
	enum class EPBCamp GetPlayerTeamStatus(struct UObject* WorldContextObject, struct APBPlayerState* OwnerPlayerState, struct APBPlayerState* OtherPlayerState); // Function ProjectBoundary.BlueprintFunctions.GetPlayerTeamStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11455b0
	struct UPBPersistentUser* GetPBPersistentUser(struct UObject* WorldContextObject); // Function ProjectBoundary.BlueprintFunctions.GetPBPersistentUser // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1145520
	struct UPBOptions* GetPBOptions(struct UObject* WorldContextObject); // Function ProjectBoundary.BlueprintFunctions.GetPBOptions // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1145490
	struct FName GetPBEquipmentID(struct AActor* PBActor); // Function ProjectBoundary.BlueprintFunctions.GetPBEquipmentID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1145400
	struct ULogicServerCache* GetLogicServerCache(struct UObject* WorldContextObject); // Function ProjectBoundary.BlueprintFunctions.GetLogicServerCache // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1145370
	struct FPBWeapon_GameSaved GetDefaultWeaponSaved(struct FName InWeaponId, bool bIsRandom); // Function ProjectBoundary.BlueprintFunctions.GetDefaultWeaponSaved // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1145110
	struct FPBWeaponPartNetworkConfig GetDefaultWeaponNetworkConfig(struct FName InWeaponId, bool bIsRandom); // Function ProjectBoundary.BlueprintFunctions.GetDefaultWeaponNetworkConfig // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1144ef0
	void FindScreenEdgeLocationForWorldLocation(struct UObject* WorldContextObject, struct FVector InLocation, float EdgePercent, struct FVector2D OutScreenPosition, float OutRotationAngleDegrees, bool bIsOnScreen); // Function ProjectBoundary.BlueprintFunctions.FindScreenEdgeLocationForWorldLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1144cd0
	struct FVector2D FindPositionOnScreenEdge(struct UObject* WorldContextObject, struct FVector2D PlanePosition, struct FVector2D InEdgeSize); // Function ProjectBoundary.BlueprintFunctions.FindPositionOnScreenEdge // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1144bd0
	void ExecuteConsoleCommand(struct FString ConsoleCommand); // Function ProjectBoundary.BlueprintFunctions.ExecuteConsoleCommand // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1144af0
	bool EqualEqual_WeaponGameSavedWeaponGameSaved(struct FPBWeaponPartNetworkConfig A, struct FPBWeaponPartNetworkConfig B); // Function ProjectBoundary.BlueprintFunctions.EqualEqual_WeaponGameSavedWeaponGameSaved // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1144930
	bool EqualEqual_IdId(struct FBPUniqueID A, struct FBPUniqueID B); // Function ProjectBoundary.BlueprintFunctions.EqualEqual_IdId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x11447e0
	struct FBPFocusEvent ConvertToBPFocusEvent(struct FFocusEvent InEvent); // Function ProjectBoundary.BlueprintFunctions.ConvertToBPFocusEvent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1144710
	struct FString Conv_Int64ToString(int64_t inInt); // Function ProjectBoundary.BlueprintFunctions.Conv_Int64ToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1144640
	struct FVector2D CircleScreenPosition(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, float DrawRadius); // Function ProjectBoundary.BlueprintFunctions.CircleScreenPosition // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1144530
};

// Class ProjectBoundary.BTDecorator_HasLoSTo
// Size: 0x90 (Inherited: 0x68)
struct UBTDecorator_HasLoSTo : UBTDecorator {
	struct FBlackboardKeySelector EnemyKey; // 0x68(0x28)
};

// Class ProjectBoundary.BTTask_FindPickup
// Size: 0x98 (Inherited: 0x98)
struct UBTTask_FindPickup : UBTTask_BlackboardBase {
};

// Class ProjectBoundary.BTTask_FindPointNearEnemy
// Size: 0x98 (Inherited: 0x98)
struct UBTTask_FindPointNearEnemy : UBTTask_BlackboardBase {
};

// Class ProjectBoundary.BTTask_FlyTo
// Size: 0xd0 (Inherited: 0x70)
struct UBTTask_FlyTo : UBTTaskNode {
	struct APBAIPathFindingManager* NavigationManager; // 0x70(0x08)
	struct FBlackboardKeySelector FlightLocationKey; // 0x78(0x28)
	struct FBlackboardKeySelector FlightResultKey; // 0xa0(0x28)
	float MinimumProximityRequired; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	void Pathfinding_OnFinish(struct FPBNavigationQueryData Data); // Function ProjectBoundary.BTTask_FlyTo.Pathfinding_OnFinish // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1146720
	void OnPathBlockedByDynamicObstacles(struct APBBot* Bot); // Function ProjectBoundary.BTTask_FlyTo.OnPathBlockedByDynamicObstacles // (Final|Native|Protected|BlueprintCallable) // @ game+0x1146600
};

// Class ProjectBoundary.CatchableObject
// Size: 0x260 (Inherited: 0x220)
struct ACatchableObject : AActor {
	struct UStaticMeshComponent* CatchableMeshComponent; // 0x220(0x08)
	char pad_228[0x8]; // 0x228(0x08)
	struct APBVehicle* OwningVehicle; // 0x230(0x08)
	char pad_238[0x28]; // 0x238(0x28)
};

// Class ProjectBoundary.DetonatorComponent
// Size: 0x130 (Inherited: 0xb0)
struct UDetonatorComponent : UActorComponent {
	float SensorRadius; // 0xb0(0x04)
	enum class EProjectileTypes ProjectileTypes; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct AActor* AttachedExplosive; // 0xb8(0x08)
	struct APlayerState* OwnerPlayerState; // 0xc0(0x08)
	struct TMap<struct AActor*, bool> InRangeCharacterSideMap; // 0xc8(0x50)
	char pad_118[0x18]; // 0x118(0x18)
};

// Class ProjectBoundary.EMPComponent
// Size: 0x188 (Inherited: 0x168)
struct UEMPComponent : UAttachModuleComponent {
	char pad_168[0x20]; // 0x168(0x20)
};

// Class ProjectBoundary.ExplosiveComponent
// Size: 0x1b8 (Inherited: 0x168)
struct UExplosiveComponent : UAttachModuleComponent {
	char pad_168[0x50]; // 0x168(0x50)
};

// Class ProjectBoundary.LocalMatchmakingService
// Size: 0xc0 (Inherited: 0x40)
struct ULocalMatchmakingService : UMatchmakingService {
	struct FString MatchServerURL; // 0x40(0x10)
	char pad_50[0x70]; // 0x50(0x70)
};

// Class ProjectBoundary.LogicServerCache
// Size: 0x6e8 (Inherited: 0x30)
struct ULogicServerCache : UGameInstanceSubsystem {
	struct FMulticastInlineDelegate OnExpChangeDelegate; // 0x30(0x10)
	struct FMulticastInlineDelegate OnGetDataStatisticsInfoChangeDelegate; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)
	struct FMulticastInlineDelegate UpdateQueueIndexDelegate; // 0x98(0x10)
	char pad_A8[0x640]; // 0xa8(0x640)

	void UpdateQueueIndex__DelegateSignature(); // DelegateFunction ProjectBoundary.LogicServerCache.UpdateQueueIndex__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	bool UnlockItem(struct FName InUnlockID, struct FDelegate InCallback); // Function ProjectBoundary.LogicServerCache.UnlockItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x114a6a0
	bool ServerSwitchGameTimeCalc(enum class EPBAdultVerifyStatus InVerifyStatus, struct FDelegate InCallback); // Function ProjectBoundary.LogicServerCache.ServerSwitchGameTimeCalc // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x114a5a0
	bool ServerRefreshDailyChallenge(int32_t InSlotId, struct FDelegate InCallback); // Function ProjectBoundary.LogicServerCache.ServerRefreshDailyChallenge // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x114a4d0
	void ServerGetAnnouncement(struct FDelegate InCallback); // Function ProjectBoundary.LogicServerCache.ServerGetAnnouncement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x114a450
	void SelectTestRole(struct FName InRoleID); // Function ProjectBoundary.LogicServerCache.SelectTestRole // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x114a360
	void SelectCurrentRole(struct FName InNewID); // Function ProjectBoundary.LogicServerCache.SelectCurrentRole // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x114a2c0
	void OnLogicServerSwitchGameTimeCalc__DelegateSignature(int32_t ErrorCode); // DelegateFunction ProjectBoundary.LogicServerCache.OnLogicServerSwitchGameTimeCalc__DelegateSignature // (Public|Delegate) // @ game+0x1556ec0
	void OnLogicServerRefreshDailyChallenge__DelegateSignature(int32_t SlotId, struct FName OldChallengeId, struct FName NewChallengeId, int32_t ErrorCode); // DelegateFunction ProjectBoundary.LogicServerCache.OnLogicServerRefreshDailyChallenge__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x1556ec0
	void OnLogicServerGetUserGameInfo__DelegateSignature(int32_t ErrorCode); // DelegateFunction ProjectBoundary.LogicServerCache.OnLogicServerGetUserGameInfo__DelegateSignature // (Public|Delegate) // @ game+0x1556ec0
	void OnLogicServerGetRecentPlayUserList__DelegateSignature(struct FRecentPlayUsersMapWrapper RecentPlayUsersMap, int32_t ErrorCode); // DelegateFunction ProjectBoundary.LogicServerCache.OnLogicServerGetRecentPlayUserList__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x1556ec0
	void OnLogicServerGetChallengeCompleteState__DelegateSignature(int32_t ErrorCode, bool IsCompleted); // DelegateFunction ProjectBoundary.LogicServerCache.OnLogicServerGetChallengeCompleteState__DelegateSignature // (Public|Delegate) // @ game+0x1556ec0
	void OnLogicServerGetBasicAttributes__DelegateSignature(int32_t Exp, int32_t UnlockPoint, int32_t ErrorCode); // DelegateFunction ProjectBoundary.LogicServerCache.OnLogicServerGetBasicAttributes__DelegateSignature // (Public|Delegate) // @ game+0x1556ec0
	void OnLogicServerGetAnnouncement__DelegateSignature(int32_t ErrorCode); // DelegateFunction ProjectBoundary.LogicServerCache.OnLogicServerGetAnnouncement__DelegateSignature // (Public|Delegate) // @ game+0x1556ec0
	void LogicServerGetDataStatisticsInfoChange__DelegateSignature(); // DelegateFunction ProjectBoundary.LogicServerCache.LogicServerGetDataStatisticsInfoChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	void LogicServerExpChange__DelegateSignature(int32_t Exp); // DelegateFunction ProjectBoundary.LogicServerCache.LogicServerExpChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	bool IsItemUnlocked(struct FName InUnlockID); // Function ProjectBoundary.LogicServerCache.IsItemUnlocked // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x114a220
	void GoToCustomize(); // Function ProjectBoundary.LogicServerCache.GoToCustomize // (Final|Native|Public|BlueprintCallable) // @ game+0x114a200
	struct FString GetUserIdString(); // Function ProjectBoundary.LogicServerCache.GetUserIdString // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x114a0c0
	bool GetUserGameInfo(struct FDelegate InCallback); // Function ProjectBoundary.LogicServerCache.GetUserGameInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x114a000
	struct FName GetTestRoleID(); // Function ProjectBoundary.LogicServerCache.GetTestRoleID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1149fe0
	struct FString GetServerConnectionStatus(); // Function ProjectBoundary.LogicServerCache.GetServerConnectionStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1149f60
	struct FPBRole_GameSaved GetRoleTestConfig(); // Function ProjectBoundary.LogicServerCache.GetRoleTestConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1149f30
	bool GetRecentPlayUserList(struct FDelegate InCallback); // Function ProjectBoundary.LogicServerCache.GetRecentPlayUserList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1149e70
	struct TMap<struct FName, struct FChallengeData> GetRandChallengeInfo(); // Function ProjectBoundary.LogicServerCache.GetRandChallengeInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1149d40
	int32_t GetQueueIndex(); // Function ProjectBoundary.LogicServerCache.GetQueueIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1149d10
	struct TMap<struct FName, bool> GetNormalChallengeInfo(); // Function ProjectBoundary.LogicServerCache.GetNormalChallengeInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1149bb0
	struct TMap<struct FName, int64_t> GetDataStatisticsInfo(); // Function ProjectBoundary.LogicServerCache.GetDataStatisticsInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1149b30
	int32_t GetDailyChallengeRefreshNumUsed(); // Function ProjectBoundary.LogicServerCache.GetDailyChallengeRefreshNumUsed // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xcff900
	int32_t GetDailyChallengeRefreshNum(); // Function ProjectBoundary.LogicServerCache.GetDailyChallengeRefreshNum // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xcff900
	struct TMap<int32_t, struct FPBChallengeData> GetDailyChallengeInfo(); // Function ProjectBoundary.LogicServerCache.GetDailyChallengeInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11499d0
	struct FName GetCurrentRoleID(); // Function ProjectBoundary.LogicServerCache.GetCurrentRoleID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11499b0
	bool GetBasicAttributes(struct FDelegate InCallback); // Function ProjectBoundary.LogicServerCache.GetBasicAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11498f0
	struct FString GetAnnouncement(); // Function ProjectBoundary.LogicServerCache.GetAnnouncement // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1149830
	enum class EPBAdultVerifyStatus GetAdultVerifyStatus(); // Function ProjectBoundary.LogicServerCache.GetAdultVerifyStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xcff920
	bool CompleteChallenge(struct FString InUserId, struct TArray<struct FString> InChallengeIds); // Function ProjectBoundary.LogicServerCache.CompleteChallenge // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1149700
};

// Class ProjectBoundary.NullMatchmakingService
// Size: 0x48 (Inherited: 0x40)
struct UNullMatchmakingService : UMatchmakingService {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class ProjectBoundary.PartDataHolderComponent
// Size: 0x22f0 (Inherited: 0xb0)
struct UPartDataHolderComponent : UActorComponent {
	struct FPartDisplayInfo PartDisplayInfo; // 0xb0(0x38)
	struct FName PartID; // 0xe8(0x08)
	struct FPBPartConfigRow PartConfigFromCSV; // 0xf0(0x21d8)
	struct UMeshComponent* PartMesh1P; // 0x22c8(0x08)
	struct UMeshComponent* PartMesh3P; // 0x22d0(0x08)
	struct UMeshComponent* DuplicatePartMesh1P; // 0x22d8(0x08)
	struct UMeshComponent* DuplicatePartMesh3P; // 0x22e0(0x08)
	bool DebugSwitch; // 0x22e8(0x01)
	char pad_22E9[0x7]; // 0x22e9(0x07)

	struct UMeshComponent* GetPartMesh3P(); // Function ProjectBoundary.PartDataHolderComponent.GetPartMesh3P // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1149cf0
	struct UMeshComponent* GetPartMesh1P(); // Function ProjectBoundary.PartDataHolderComponent.GetPartMesh1P // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1149cd0
	struct FName GetPartID(); // Function ProjectBoundary.PartDataHolderComponent.GetPartID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1149cb0
	struct UMeshComponent* GetDuplicatePartMesh3P(); // Function ProjectBoundary.PartDataHolderComponent.GetDuplicatePartMesh3P // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1149b90
	struct UMeshComponent* GetDuplicatePartMesh1P(); // Function ProjectBoundary.PartDataHolderComponent.GetDuplicatePartMesh1P // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1149b70
	void ChangeAimingMesh(bool bIsAiming); // Function ProjectBoundary.PartDataHolderComponent.ChangeAimingMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1149670
};

// Class ProjectBoundary.PBAbilitySystemComponent
// Size: 0x1308 (Inherited: 0x1308)
struct UPBAbilitySystemComponent : UAbilitySystemComponent {

	struct FGameplayAbilitySpecHandle FindAbilitySpecHandleForClass(struct UGameplayAbility* AbilityClass, struct UObject* OptionalSourceObject); // Function ProjectBoundary.PBAbilitySystemComponent.FindAbilitySpecHandleForClass // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x114eca0
};

// Class ProjectBoundary.PBAchievementManager
// Size: 0x4a0 (Inherited: 0x220)
struct APBAchievementManager : AActor {
	char pad_220[0x18]; // 0x220(0x18)
	struct TArray<struct FString> RealtimeAchievementArray; // 0x238(0x10)
	struct TMap<struct FString, int32_t> CombatRealtimeAchStat; // 0x248(0x50)
	struct TArray<struct FMedalsInfoStat> MedalsInfoArray; // 0x298(0x10)
	struct APBGameState* PBGameState; // 0x2a8(0x08)
	struct TArray<struct FAchievementInfo> RealtimeAchievementNameArray; // 0x2b0(0x10)
	struct TMap<struct FString, struct UTexture2D*> RealtimeAchievementImageInfo; // 0x2c0(0x50)
	char pad_310[0x18]; // 0x310(0x18)
	struct TArray<struct FCombatInfo> CombatInfoArray; // 0x328(0x10)
	struct TMap<struct FString, struct APBChallengeState*> ChallengeMap; // 0x338(0x50)
	struct TMap<struct FString, struct APBChallengeState*> DailyChallengeMap; // 0x388(0x50)
	struct TMap<struct FString, struct APBChallengeState*> RandChallengeMap; // 0x3d8(0x50)
	struct TMap<struct FString, struct APBChallengeState*> RealtimeChallengeMap; // 0x428(0x50)
	struct TArray<struct FString> GameRoundCompleteChallengeArray; // 0x478(0x10)
	struct TArray<struct FString> CachCompleteChallengeArray; // 0x488(0x10)
	char pad_498[0x8]; // 0x498(0x08)

	bool IsCompleteChallengeAchievementFromID(struct FString ID); // Function ProjectBoundary.PBAchievementManager.IsCompleteChallengeAchievementFromID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x114f2c0
	bool IsCompleteChallengeAchievement(struct UObject* ChallengeClass); // Function ProjectBoundary.PBAchievementManager.IsCompleteChallengeAchievement // (Final|Native|Public|BlueprintCallable) // @ game+0x114f220
	struct TArray<struct FString> GetGameRoundChallengeAchievement(); // Function ProjectBoundary.PBAchievementManager.GetGameRoundChallengeAchievement // (Final|Native|Public|BlueprintCallable) // @ game+0x114f030
	void CompleteDailyChallengeAchievement(struct FString InID); // Function ProjectBoundary.PBAchievementManager.CompleteDailyChallengeAchievement // (Final|Native|Public|HasOutParms) // @ game+0x114eb70
	void CompleteChallengeAchievement(struct UObject* ChallengeClass); // Function ProjectBoundary.PBAchievementManager.CompleteChallengeAchievement // (Final|Native|Public|BlueprintCallable) // @ game+0x114eae0
};

// Class ProjectBoundary.PBUserWidget
// Size: 0x268 (Inherited: 0x260)
struct UPBUserWidget : UUserWidget {
	char bIsAffectedByOption : 1; // 0x260(0x01)
	char pad_260_1 : 7; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)

	void PBAddWidgetToViewport(enum class EWidgetContainerType ContainerType, int32_t ZOrder); // Function ProjectBoundary.PBUserWidget.PBAddWidgetToViewport // (Native|Public|BlueprintCallable) // @ game+0x11eacd0
};

// Class ProjectBoundary.PBActionTeamWidget
// Size: 0x2a0 (Inherited: 0x268)
struct UPBActionTeamWidget : UPBUserWidget {
	enum class EPBCamp ActionCamp; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FPBActionTeam_UI ActionTeamUI; // 0x270(0x30)

	void RefreshActionTeamPlayers(); // Function ProjectBoundary.PBActionTeamWidget.RefreshActionTeamPlayers // (Final|Native|Protected) // @ game+0x114fbb0
	void K2_SetActionTeamInfo(); // Function ProjectBoundary.PBActionTeamWidget.K2_SetActionTeamInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBAddCreditWidget
// Size: 0x268 (Inherited: 0x268)
struct UPBAddCreditWidget : UPBUserWidget {
};

// Class ProjectBoundary.PBAIController
// Size: 0x368 (Inherited: 0x328)
struct APBAIController : AAIController {
	struct UBlackboardComponent* BlackboardComp; // 0x328(0x08)
	struct UBehaviorTreeComponent* BehaviorComp; // 0x330(0x08)
	char pad_338[0x10]; // 0x338(0x10)
	float InnerRadius; // 0x348(0x04)
	float OutterRadius; // 0x34c(0x04)
	float ShootingDirectionRate; // 0x350(0x04)
	bool IsRandomPattern; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	float PlayerWeight; // 0x358(0x04)
	char pad_35C[0x8]; // 0x35c(0x08)
	enum class DominatingSense BotDominatingSense; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)

	void StopShooting(); // Function ProjectBoundary.PBAIController.StopShooting // (Final|Native|Public|BlueprintCallable) // @ game+0x114fdc0
	void ShootEnemy(); // Function ProjectBoundary.PBAIController.ShootEnemy // (Final|Native|Public|BlueprintCallable) // @ game+0x114fda0
	void SetEnemy(struct APawn* InPawn); // Function ProjectBoundary.PBAIController.SetEnemy // (Final|Native|Public|BlueprintCallable) // @ game+0x114fd10
	bool IsEnemyInSightCone(struct APBCharacter* InEnemy); // Function ProjectBoundary.PBAIController.IsEnemyInSightCone // (Final|Native|Public|BlueprintCallable) // @ game+0x114f980
	struct FVector GetRandomPositionInSphere(struct FVector Center, float MinRadius, float MaxRadius); // Function ProjectBoundary.PBAIController.GetRandomPositionInSphere // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x114f0c0
	struct APBCharacter* GetEnemy(); // Function ProjectBoundary.PBAIController.GetEnemy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x114f000
	void FindEnemyInSightCone(); // Function ProjectBoundary.PBAIController.FindEnemyInSightCone // (Final|Native|Public|BlueprintCallable) // @ game+0x114ee30
	bool FindClosestEnemyWithLOS(struct APBCharacter* ExcludeEnemy); // Function ProjectBoundary.PBAIController.FindClosestEnemyWithLOS // (Final|Native|Public|BlueprintCallable) // @ game+0x114ed90
	void FindClosestEnemy(); // Function ProjectBoundary.PBAIController.FindClosestEnemy // (Final|Native|Public|BlueprintCallable) // @ game+0x114ed70
};

// Class ProjectBoundary.PBAimingComponent
// Size: 0x270 (Inherited: 0xb0)
struct UPBAimingComponent : UActorComponent {
	struct FAssistAimingConfig DefaultAssistAimingConfig; // 0xb0(0x30)
	struct UCurveFloat* DistanceWeightCurve; // 0xe0(0x08)
	struct UCurveFloat* ScreenDistanceWeightCurve; // 0xe8(0x08)
	struct UCurveFloat* DragVelocityDistanceFloatCurve; // 0xf0(0x08)
	float MaximumTrackingRadiusTolerance; // 0xf8(0x04)
	float DefaultScreenDistanceWeight; // 0xfc(0x04)
	float DefaultDistanceWeight; // 0x100(0x04)
	char bDrawDebug; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FAssistAimingConfig CurrentAssistAimingConfig; // 0x108(0x30)
	struct APBPlayerState* OwnerPlayerState; // 0x138(0x08)
	struct APBPlayerController* OwnerController; // 0x140(0x08)
	char pad_148[0x28]; // 0x148(0x28)
	struct TArray<struct UPBDynamicMarkableComponent*> PendingCheckArray_Async; // 0x170(0x10)
	struct TArray<struct AActor*> PendingCheckOwnerArray_Async; // 0x180(0x10)
	struct TArray<struct AActor*> PendingCheckOwnerArrayWithoutTarget_Async; // 0x190(0x10)
	char pad_1A0[0xd0]; // 0x1a0(0xd0)
};

// Class ProjectBoundary.PBAIPathFindingManager
// Size: 0x430 (Inherited: 0x220)
struct APBAIPathFindingManager : AActor {
	char pad_220[0x148]; // 0x220(0x148)
	struct USceneComponent* SceneComponent; // 0x368(0x08)
	struct UBoxComponent* WorldBoundaryVisualizer; // 0x370(0x08)
	struct FPBNavVoxelXYZ NavVolumeData; // 0x378(0x10)
	char bDrawDebugVoxel : 1; // 0x388(0x01)
	char bVisualizePaths : 1; // 0x388(0x01)
	char pad_388_2 : 6; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	float VoxelSize; // 0x38c(0x04)
	int32_t XGridSize; // 0x390(0x04)
	int32_t YGridSize; // 0x394(0x04)
	int32_t ZGridSize; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct TArray<enum class ECollisionChannel> ObstacleQueryChannels; // 0x3a0(0x10)
	struct TArray<struct AActor*> ActorsToIgnoreForCollision; // 0x3b0(0x10)
	bool PerformCollisionChecksOnStartup; // 0x3c0(0x01)
	char pad_3C1[0x5f]; // 0x3c1(0x5f)
	char bEnableMultiThreading : 1; // 0x420(0x01)
	char pad_420_1 : 7; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	int32_t MaxPathSolverIterationsPerTick; // 0x424(0x04)
	char pad_428[0x8]; // 0x428(0x08)

	bool SchedulePathfindingTask(struct FPBNavigationQueryTask Task, struct FDelegate ResultHandlerDelegate); // Function ProjectBoundary.PBAIPathFindingManager.SchedulePathfindingTask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x114fbd0
	bool IsLocationWithinNavigableWorld(struct FVector PotentialDestination); // Function ProjectBoundary.PBAIPathFindingManager.IsLocationWithinNavigableWorld // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x114fa20
	bool IsDirectPathSweep(struct UPrimitiveComponent* CollisionComponent, struct FVector Start, struct FVector End, struct FHitResult OutHit, bool bFindInitialOverlaps); // Function ProjectBoundary.PBAIPathFindingManager.IsDirectPathSweep // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x114f790
	bool IsDirectPathLineTrace(struct FVector Start, struct FVector End, struct FHitResult OutHit, struct TArray<struct AActor*> ActorsToIgnore, bool bFindInitialOverlaps); // Function ProjectBoundary.PBAIPathFindingManager.IsDirectPathLineTrace // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x114f570
	bool IsDirectPathLineSweep(struct UPrimitiveComponent* CollisionComponent, struct FVector Start, struct FVector End, struct FHitResult OutHit, bool bFindInitialOverlaps); // Function ProjectBoundary.PBAIPathFindingManager.IsDirectPathLineSweep // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x114f380
	void GenerateNavigationVolumePixels(); // Function ProjectBoundary.PBAIPathFindingManager.GenerateNavigationVolumePixels // (Final|Native|Protected|BlueprintCallable) // @ game+0x114efc0
	bool FindPathSolution_StressTesting(struct AActor* Actor, struct FVector Destination, struct TArray<struct FVector> PathSolution); // Function ProjectBoundary.PBAIPathFindingManager.FindPathSolution_StressTesting // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x114ee50
	void Debug_DrawAllVolumes(float LineThickness); // Function ProjectBoundary.PBAIPathFindingManager.Debug_DrawAllVolumes // (Final|Native|Public|BlueprintCallable) // @ game+0x114ec20
};

// Class ProjectBoundary.PBAllPlayerSettleWidget
// Size: 0x2f8 (Inherited: 0x268)
struct UPBAllPlayerSettleWidget : UPBUserWidget {
	struct FPBTeamSettleInfo_UI MyTeamSettle; // 0x268(0x20)
	struct FPBTeamSettleInfo_UI EnemyTeamSettle; // 0x288(0x20)
	struct FPlayerMatchResultInfo MVPInfo; // 0x2a8(0x28)
	struct FPlayerMatchResultInfo SVPInfo; // 0x2d0(0x28)

	void K2_SetMVPPlayerInfo(); // Function ProjectBoundary.PBAllPlayerSettleWidget.K2_SetMVPPlayerInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetAllPlayerInfo(); // Function ProjectBoundary.PBAllPlayerSettleWidget.K2_SetAllPlayerInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBAnimInstance_BackPcak_Jet
// Size: 0x330 (Inherited: 0x2c0)
struct UPBAnimInstance_BackPcak_Jet : UAnimInstance {
	char pad_2C0[0x58]; // 0x2c0(0x58)
	float ZMovement; // 0x318(0x04)
	float YMovement; // 0x31c(0x04)
	float FBMovement; // 0x320(0x04)
	char pad_324[0xc]; // 0x324(0x0c)
};

// Class ProjectBoundary.PBAnimInstance_MachArm
// Size: 0x2e0 (Inherited: 0x2c0)
struct UPBAnimInstance_MachArm : UAnimInstance {
	struct FVector CurrentLookAtLocation; // 0x2b8(0x0c)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct APBLauncher* OwningLauncher; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)
};

// Class ProjectBoundary.PBAnimNotify_PlaySound
// Size: 0x60 (Inherited: 0x58)
struct UPBAnimNotify_PlaySound : UAnimNotify_PlaySound {
	struct USoundBase* Sound3P; // 0x58(0x08)
};

// Class ProjectBoundary.PBAntiIndulge
// Size: 0x278 (Inherited: 0x260)
struct UPBAntiIndulge : UUserWidget {
	struct UButton* AntiIndulgeButton; // 0x260(0x08)
	struct FMulticastInlineDelegate OnAcceptAntiIndulge; // 0x268(0x10)

	void AcceptAntiIndulge(); // Function ProjectBoundary.PBAntiIndulge.AcceptAntiIndulge // (Final|Native|Private|BlueprintCallable) // @ game+0x114e960
};

// Class ProjectBoundary.PBAreaPointWidget
// Size: 0x268 (Inherited: 0x268)
struct UPBAreaPointWidget : UPBUserWidget {
};

// Class ProjectBoundary.PBSkinBase
// Size: 0x30 (Inherited: 0x30)
struct UPBSkinBase : UDataAsset {
};

// Class ProjectBoundary.PBCharacterSkinBase
// Size: 0x30 (Inherited: 0x30)
struct UPBCharacterSkinBase : UPBSkinBase {
};

// Class ProjectBoundary.PBArmBadgeSkin
// Size: 0x80 (Inherited: 0x30)
struct UPBArmBadgeSkin : UPBCharacterSkinBase {
	struct TMap<struct FName, struct FPBSkinMaterialDetailV1> SlotAndMaterialInfoMap; // 0x30(0x50)
};

// Class ProjectBoundary.PBArmorComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UPBArmorComponent : UStaticMeshComponent {
};

// Class ProjectBoundary.PBArmorManagerComponent
// Size: 0x2a0 (Inherited: 0x200)
struct UPBArmorManagerComponent : USceneComponent {
	struct FPBBeDisabledInfo BeDisabledInfo; // 0x1f8(0x30)
	struct APawn* OwnerPawn; // 0x228(0x08)
	struct FTimerHandle RecoverHealthPauseTimerHandle; // 0x230(0x08)
	enum class EPBArmorState CurrentState; // 0x238(0x01)
	char bCanRecoverHealth : 1; // 0x239(0x01)
	float Health; // 0x23c(0x04)
	struct USoundBase* BeHitSound; // 0x240(0x08)
	struct FMulticastInlineDelegate OnBeHit; // 0x248(0x10)
	struct FMulticastInlineDelegate OnBeDestroy; // 0x258(0x10)
	struct FMulticastInlineDelegate OnUpdateHealth; // 0x268(0x10)
	struct FMulticastInlineDelegate OnChangeState; // 0x278(0x10)
	float MaxHealth; // 0x288(0x04)
	float RecoverHealthPreSecond; // 0x28c(0x04)
	float RecoverHealthPreSecondWhenReboot; // 0x290(0x04)
	float RecoverHealthPauseTime; // 0x294(0x04)
	float EndRebootHealthVolume; // 0x298(0x04)
	enum class EPBArmorBreakMode BreakMode; // 0x29c(0x01)

	void OnRep_Health(); // Function ProjectBoundary.PBArmorManagerComponent.OnRep_Health // (Final|Native|Public) // @ game+0x114fb90
	void OnRep_CurrentState(enum class EPBArmorState OldState); // Function ProjectBoundary.PBArmorManagerComponent.OnRep_CurrentState // (Final|Native|Public) // @ game+0x114fb10
	void OnRep_BeDisabledInfo(); // Function ProjectBoundary.PBArmorManagerComponent.OnRep_BeDisabledInfo // (Final|Native|Protected) // @ game+0x114faf0
	void NotifyStopRecoverHealth(); // Function ProjectBoundary.PBArmorManagerComponent.NotifyStopRecoverHealth // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStartRecoverHealth(); // Function ProjectBoundary.PBArmorManagerComponent.NotifyStartRecoverHealth // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	bool IsNormal(); // Function ProjectBoundary.PBArmorManagerComponent.IsNormal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x114fac0
	float GetHealthPercent(); // Function ProjectBoundary.PBArmorManagerComponent.GetHealthPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x114f090
	float GetHealth(); // Function ProjectBoundary.PBArmorManagerComponent.GetHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x114f070
	enum class EPBArmorState GetCurrentState(); // Function ProjectBoundary.PBArmorManagerComponent.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x114efe0
	void FullyRecoverHealth(); // Function ProjectBoundary.PBArmorManagerComponent.FullyRecoverHealth // (Final|Native|Public|BlueprintCallable) // @ game+0x114efa0
	void ClientBeHit(float DamageTaken, struct FDamageEvent DamageEvent, struct APawn* PawnInstigator, struct AActor* DamageCauser); // Function ProjectBoundary.PBArmorManagerComponent.ClientBeHit // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x114e980
};

// Class ProjectBoundary.PBArmoryManager
// Size: 0xa8 (Inherited: 0x30)
struct UPBArmoryManager : UGameInstanceSubsystem {
	char pad_30[0x40]; // 0x30(0x40)
	struct FMulticastInlineDelegate UnlockPointUpdatedEvent; // 0x70(0x10)
	struct FMulticastInlineDelegate CoinUpdatedEvent; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct FMulticastInlineDelegate LoadAssetsComplete; // 0x98(0x10)

	void HandleEnteredMainMenu(); // Function ProjectBoundary.PBArmoryManager.HandleEnteredMainMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x1153b10
	void HandleEnteredArmory(); // Function ProjectBoundary.PBArmoryManager.HandleEnteredArmory // (Final|Native|Public|BlueprintCallable) // @ game+0x1153af0
	int32_t GetUnlockPoint(); // Function ProjectBoundary.PBArmoryManager.GetUnlockPoint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1153ab0
	struct TArray<struct FName> GetNewItems(); // Function ProjectBoundary.PBArmoryManager.GetNewItems // (Final|Native|Public|BlueprintCallable) // @ game+0x11539c0
	struct TArray<struct FPBNewItemInfo> GetItemsInfo(); // Function ProjectBoundary.PBArmoryManager.GetItemsInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x1153870
	int32_t GetCoin(); // Function ProjectBoundary.PBArmoryManager.GetCoin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1153790
	void ClearNewItems(); // Function ProjectBoundary.PBArmoryManager.ClearNewItems // (Final|Native|Public|BlueprintCallable) // @ game+0x1153730
};

// Class ProjectBoundary.PBAttachables
// Size: 0x258 (Inherited: 0x220)
struct APBAttachables : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	float Mass; // 0x228(0x04)
	char bAffectByEMP : 1; // 0x22c(0x01)
	char pad_22C_1 : 7; // 0x22c(0x01)
	enum class EAttachableTypes AttachableType; // 0x22d(0x01)
	char pad_22E[0x22]; // 0x22e(0x22)
	bool bIsActiveItem; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)

	void OnRep_IsActiveItem(bool bOldState); // Function ProjectBoundary.PBAttachables.OnRep_IsActiveItem // (Final|Native|Public) // @ game+0x1153e70
	void NotifyOnEMPEffectUpdate(enum class EEMPEffectStatus InEffectState); // Function ProjectBoundary.PBAttachables.NotifyOnEMPEffectUpdate // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyDeactivate(); // Function ProjectBoundary.PBAttachables.NotifyDeactivate // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyActivate(); // Function ProjectBoundary.PBAttachables.NotifyActivate // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnEquip(); // Function ProjectBoundary.PBAttachables.K2_OnEquip // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	bool IsActivated(); // Function ProjectBoundary.PBAttachables.IsActivated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1153b30
	struct APBPlayerState* GetOwnerPlayerState(); // Function ProjectBoundary.PBAttachables.GetOwnerPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1153a20
	struct APawn* GetOwnerPawn(); // Function ProjectBoundary.PBAttachables.GetOwnerPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11539f0
	float GetMass(); // Function ProjectBoundary.PBAttachables.GetMass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11539a0
	enum class EAttachableTypes GetAttachableType(); // Function ProjectBoundary.PBAttachables.GetAttachableType // (Final|Native|Public|BlueprintCallable) // @ game+0x1153770
	void Deactivate(); // Function ProjectBoundary.PBAttachables.Deactivate // (Native|Public|BlueprintCallable) // @ game+0x1153750
	void Activate(); // Function ProjectBoundary.PBAttachables.Activate // (Native|Public|BlueprintCallable) // @ game+0x893320
};

// Class ProjectBoundary.PBAttachedSoundVolume
// Size: 0x280 (Inherited: 0x268)
struct APBAttachedSoundVolume : APhysicsVolume {
	char pad_268[0x8]; // 0x268(0x08)
	struct USoundCue* AttachSoundCue; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)

	void StopSoundOnAttach(); // Function ProjectBoundary.PBAttachedSoundVolume.StopSoundOnAttach // (Final|Native|Public) // @ game+0x11543b0
	void PlaySoundOnAttach(); // Function ProjectBoundary.PBAttachedSoundVolume.PlaySoundOnAttach // (Final|Native|Public) // @ game+0x1153f00
	void ManuallyResetIsLocalPlayerInVolume(struct AActor* InActor); // Function ProjectBoundary.PBAttachedSoundVolume.ManuallyResetIsLocalPlayerInVolume // (Final|Native|Public) // @ game+0x1153c80
	void ManuallyRefreshIsLocalPlayerInVolume(struct AActor* InActor); // Function ProjectBoundary.PBAttachedSoundVolume.ManuallyRefreshIsLocalPlayerInVolume // (Final|Native|Public) // @ game+0x1153bf0
};

// Class ProjectBoundary.PBAttributeSet
// Size: 0x30 (Inherited: 0x30)
struct UPBAttributeSet : UAttributeSet {
};

// Class ProjectBoundary.PBBaseRoleSkillModule
// Size: 0x5a8 (Inherited: 0x220)
struct APBBaseRoleSkillModule : AActor {
	char bCanDeploy : 1; // 0x220(0x01)
	char pad_220_1 : 7; // 0x220(0x01)
	enum class EPBRoleSkillHandsState CurrentHandsState; // 0x221(0x01)
	char pad_222[0x6]; // 0x222(0x06)
	struct FPBMeleeConfig StartMeleeConfig; // 0x228(0x40)
	struct FPBMeleeConfig NoTargetMeleeConfig; // 0x268(0x40)
	struct FPBMeleeConfig HasTargetMeleeConfig; // 0x2a8(0x40)
	char bCanMelee : 1; // 0x2e8(0x01)
	char pad_2E8_1 : 7; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FMeleeAttackData MeleeAttackData; // 0x2f0(0x130)
	char pad_420[0x40]; // 0x420(0x40)
	int32_t UseTimes; // 0x460(0x04)
	int32_t CurrentUseTimes; // 0x464(0x04)
	char bIsInUsing : 1; // 0x468(0x01)
	char pad_468_1 : 7; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct FPBPawnMontageGroup Anim_ActivateSkillDefault; // 0x470(0x28)
	struct FPBPawnMontageGroup Anim_ActivateSkillSpecial; // 0x498(0x28)
	struct FPBPawnMontageGroup Anim_DeactivateSkillDefault; // 0x4c0(0x28)
	struct FPBPawnMontageGroup Anim_DeactivateSkillSpecial; // 0x4e8(0x28)
	float ActualActivateTime; // 0x510(0x04)
	float ActualDeactivateTime; // 0x514(0x04)
	float Duration; // 0x518(0x04)
	char bCanActivate : 1; // 0x51c(0x01)
	char bActivateOnDeath : 1; // 0x51c(0x01)
	char bCanManualDeactivate : 1; // 0x51c(0x01)
	char pad_51C_3 : 5; // 0x51c(0x01)
	char pad_51D[0x3]; // 0x51d(0x03)
	struct FTimerHandle TimerHandle_ActualActivate; // 0x520(0x08)
	struct FTimerHandle TimerHandle_ActualDeactivate; // 0x528(0x08)
	struct FTimerHandle TimerHandle_Duration; // 0x530(0x08)
	char bIsActivated : 1; // 0x538(0x01)
	char pad_538_1 : 7; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	float CoolDownTime; // 0x53c(0x04)
	float CurrentCoolDownTime; // 0x540(0x04)
	char bInCoolDown : 1; // 0x544(0x01)
	char pad_544_1 : 7; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	struct USoundBase* StartADSSound; // 0x548(0x08)
	struct USoundBase* StopADSSound; // 0x550(0x08)
	char bAiming : 1; // 0x558(0x01)
	char pad_558_1 : 7; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct UPBRoleSkillWidget* UIClass; // 0x560(0x08)
	struct UPBRoleSkillWidget* PanelWidget; // 0x568(0x08)
	char pad_570[0x28]; // 0x570(0x28)
	char bChangeBaseState : 1; // 0x598(0x01)
	char bDrawDebug : 1; // 0x598(0x01)
	char pad_598_2 : 6; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct APBCharacter* OwningCharacter; // 0x5a0(0x08)

	void StartCoolDown(); // Function ProjectBoundary.PBBaseRoleSkillModule.StartCoolDown // (Final|Native|Protected|BlueprintCallable) // @ game+0x1154390
	void K2_UseSkillFailed(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_UseSkillFailed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateDuration(float DeltaTime); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_UpdateDuration // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCoolDownTime(float DeltaTime); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_UpdateCoolDownTime // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StopADS(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_StopADS // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartDeactivateSkill(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_StartDeactivateSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartCoolDown(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_StartCoolDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartADS(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_StartADS // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartAcitvateSkill(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_StartAcitvateSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsUndeploying(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_OnHandsUndeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsUndeployed(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_OnHandsUndeployed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsDeploying(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_OnHandsDeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsDeployed(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_OnHandsDeployed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnEquip(struct AActor* NewOwner); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_OnEquip // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterruptSkill(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_InterruptSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndDeactivateSkill(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_EndDeactivateSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndCoolDown(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_EndCoolDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndActivateSkill(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_EndActivateSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DeactivatedSkill(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_DeactivatedSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ActivatedSkill(); // Function ProjectBoundary.PBBaseRoleSkillModule.K2_ActivatedSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	float GetDurationRemaining(); // Function ProjectBoundary.PBBaseRoleSkillModule.GetDurationRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1153810
	float GetDurationElapsed(); // Function ProjectBoundary.PBBaseRoleSkillModule.GetDurationElapsed // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11537b0
	bool CanUse(); // Function ProjectBoundary.PBBaseRoleSkillModule.CanUse // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1153700
	void AutoDeactivate(); // Function ProjectBoundary.PBBaseRoleSkillModule.AutoDeactivate // (Native|Public|BlueprintCallable) // @ game+0x1153640
};

// Class ProjectBoundary.PBAutoDefenceSystem
// Size: 0x5c0 (Inherited: 0x5a8)
struct APBAutoDefenceSystem : APBBaseRoleSkillModule {
	int32_t AutoDefenceCounter; // 0x5a8(0x04)
	float AutoDefenceRadius; // 0x5ac(0x04)
	int32_t CurrentAutoDefenceCounter; // 0x5b0(0x04)
	char pad_5B4[0xc]; // 0x5b4(0x0c)

	void MulticastInterceptSuccess(struct FVector InInterceptPoint); // Function ProjectBoundary.PBAutoDefenceSystem.MulticastInterceptSuccess // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x1153d10
	void K2_InterceptSuccess(struct FVector InHitPoint); // Function ProjectBoundary.PBAutoDefenceSystem.K2_InterceptSuccess // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x1556ec0
	float GetRemainingTimeInUsing(); // Function ProjectBoundary.PBAutoDefenceSystem.GetRemainingTimeInUsing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1153a50
};

// Class ProjectBoundary.PBLauncher
// Size: 0x610 (Inherited: 0x258)
struct APBLauncher : APBAttachables {
	struct USkeletalMeshComponent* ArmMesh1P; // 0x258(0x08)
	struct USkeletalMeshComponent* ArmMesh3P; // 0x260(0x08)
	struct UStaticMeshComponent* Mesh1P; // 0x268(0x08)
	struct UStaticMeshComponent* Mesh3P; // 0x270(0x08)
	struct USceneComponent* TransformComponent; // 0x278(0x08)
	struct UPBFireComponent* FireComponent; // 0x280(0x08)
	struct FPBLauncherNetworkConfig SavedData; // 0x288(0x10)
	struct UStaticMesh* LeftMesh; // 0x298(0x08)
	struct UStaticMesh* RightMesh; // 0x2a0(0x08)
	struct USkeletalMesh* LeftArmMesh; // 0x2a8(0x08)
	struct USkeletalMesh* RightArmMesh; // 0x2b0(0x08)
	struct UAnimInstance* LeftArmAnimClass; // 0x2b8(0x08)
	struct UAnimInstance* RightArmAnimClass; // 0x2c0(0x08)
	enum class EPBLauncherPosition LauncherPosition; // 0x2c8(0x01)
	enum class EPBLauncherState CurrentState; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	float CurrentTime; // 0x2cc(0x04)
	char pad_2D0[0xc]; // 0x2d0(0x0c)
	enum class EPBLauncherState PendingState; // 0x2dc(0x01)
	char pad_2DD[0x13]; // 0x2dd(0x13)
	struct FPBLauncherMontageGroup DeployingMontage; // 0x2f0(0x28)
	struct FPBLauncherMontageGroup UndeployingMontage; // 0x318(0x28)
	float ReloadingDelay; // 0x340(0x04)
	float ReloadingDuration; // 0x344(0x04)
	float SingleAmmoReloadingDuration; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FPBLauncherMontageGroup FiringMontage; // 0x350(0x28)
	struct FPBFiringConfig FireConfig; // 0x378(0x18)
	struct FName EventIDFire_1P; // 0x390(0x08)
	struct FName EventIDFire_3P; // 0x398(0x08)
	struct FName EventID_FireVoice_Self; // 0x3a0(0x08)
	struct FName EventID_FireVoice_Teammate; // 0x3a8(0x08)
	int32_t MaxProjectile; // 0x3b0(0x04)
	int32_t BurstCounter; // 0x3b4(0x04)
	char bIsFiring : 1; // 0x3b8(0x01)
	char bPendingFiring : 1; // 0x3b8(0x01)
	char pad_3B8_2 : 6; // 0x3b8(0x01)
	char pad_3B9[0x1f]; // 0x3b9(0x1f)
	struct TArray<struct FName> MuzzleSocketNameArray; // 0x3d8(0x10)
	int32_t SocketIndex; // 0x3e8(0x04)
	float MinSpread; // 0x3ec(0x04)
	float MaxSpread; // 0x3f0(0x04)
	float RecoverSpreadRate; // 0x3f4(0x04)
	float SpreadDeltePreFiring; // 0x3f8(0x04)
	float CurrentSpread; // 0x3fc(0x04)
	float EnableFireControlTime; // 0x400(0x04)
	char pad_404[0xc]; // 0x404(0x0c)
	char bIsFireControlEnabled : 1; // 0x410(0x01)
	char pad_410_1 : 7; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct TArray<struct APBProjectileBase*> FiredProjectilesArray; // 0x418(0x10)
	char bInProjectileControlMode : 1; // 0x428(0x01)
	char pad_428_1 : 7; // 0x428(0x01)
	char pad_429[0x17]; // 0x429(0x17)
	char bInSpecialMode : 1; // 0x440(0x01)
	char pad_440_1 : 7; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	struct FFireTriggerConfig FireTriggerConfig; // 0x444(0x0c)
	char pad_450[0x4]; // 0x450(0x04)
	struct FPBMagazineConfig MagazineConfig; // 0x454(0x0c)
	float AutoFillMagazineTime; // 0x460(0x04)
	char bIsAllowedAutoFillMagazine : 1; // 0x464(0x01)
	char pad_464_1 : 7; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct FPBMagazine Magazine; // 0x468(0x20)
	char pad_488[0x8]; // 0x488(0x08)
	struct FName LauncherInfo; // 0x490(0x08)
	char bInForceState : 1; // 0x498(0x01)
	char pad_498_1 : 7; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct UPBLauncherWidget* CrossHairWidgetClass; // 0x4a0(0x08)
	struct UPBLauncherWidget* PanelClass; // 0x4a8(0x08)
	struct UTexture2D* Thumbnail; // 0x4b0(0x08)
	struct UPBLauncherWidget* CrossHairWidget; // 0x4b8(0x08)
	struct UPBLauncherWidget* PanelWidget; // 0x4c0(0x08)
	float RecoverSpeed; // 0x4c8(0x04)
	float MaxOffsetAngle; // 0x4cc(0x04)
	char pad_4D0[0x10]; // 0x4d0(0x10)
	struct FHitResult LineTraceHitResult; // 0x4e0(0x8c)
	char pad_56C[0xa4]; // 0x56c(0xa4)

	void ServerSpawnProjectile(struct FVector Origin, struct FVector ShootDir); // Function ProjectBoundary.PBLauncher.ServerSpawnProjectile // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x1195e20
	void ServerOnUndeploy(); // Function ProjectBoundary.PBLauncher.ServerOnUndeploy // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195dd0
	void ServerOnTriggerProjectile(); // Function ProjectBoundary.PBLauncher.ServerOnTriggerProjectile // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195d80
	void ServerOnStopReload(); // Function ProjectBoundary.PBLauncher.ServerOnStopReload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195d30
	void ServerOnStopFire(); // Function ProjectBoundary.PBLauncher.ServerOnStopFire // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195ce0
	void ServerOnStartReload(); // Function ProjectBoundary.PBLauncher.ServerOnStartReload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195c90
	void ServerOnStartFire(); // Function ProjectBoundary.PBLauncher.ServerOnStartFire // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195c40
	void ServerOnReoload(); // Function ProjectBoundary.PBLauncher.ServerOnReoload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195bf0
	void ServerOnReleasedSpecialAction(); // Function ProjectBoundary.PBLauncher.ServerOnReleasedSpecialAction // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195ba0
	void ServerOnReleased(); // Function ProjectBoundary.PBLauncher.ServerOnReleased // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195b50
	void ServerOnRefill(); // Function ProjectBoundary.PBLauncher.ServerOnRefill // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195b00
	void ServerOnPressedSpecialAction(); // Function ProjectBoundary.PBLauncher.ServerOnPressedSpecialAction // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195ab0
	void ServerOnPressed(); // Function ProjectBoundary.PBLauncher.ServerOnPressed // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195a60
	void ServerOnFire(); // Function ProjectBoundary.PBLauncher.ServerOnFire // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195a10
	void ServerOnDeploy(); // Function ProjectBoundary.PBLauncher.ServerOnDeploy // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11959c0
	void ServerFiring(); // Function ProjectBoundary.PBLauncher.ServerFiring // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1195970
	void OnUndeployFinished(); // Function ProjectBoundary.PBLauncher.OnUndeployFinished // (Final|Native|Protected|BlueprintCallable) // @ game+0x11957a0
	void OnUndeploy(bool bNotifyServer); // Function ProjectBoundary.PBLauncher.OnUndeploy // (Final|Native|Public|BlueprintCallable) // @ game+0x1195710
	void OnTriggerProjectile(); // Function ProjectBoundary.PBLauncher.OnTriggerProjectile // (Final|Native|Public|BlueprintCallable) // @ game+0x11956f0
	void OnStopReload(); // Function ProjectBoundary.PBLauncher.OnStopReload // (Final|Native|Public|BlueprintCallable) // @ game+0x11956d0
	void OnStopFire(bool bNotifyServer); // Function ProjectBoundary.PBLauncher.OnStopFire // (Final|Native|Public|BlueprintCallable) // @ game+0x1195640
	void OnStartReload(); // Function ProjectBoundary.PBLauncher.OnStartReload // (Final|Native|Public|BlueprintCallable) // @ game+0x1195620
	void OnStartFire(bool bNotifyServer); // Function ProjectBoundary.PBLauncher.OnStartFire // (Final|Native|Public|BlueprintCallable) // @ game+0x1195590
	void OnRep_SavedData(); // Function ProjectBoundary.PBLauncher.OnRep_SavedData // (Final|Native|Protected) // @ game+0x1195570
	void OnRep_PendingState(); // Function ProjectBoundary.PBLauncher.OnRep_PendingState // (Final|Native|Protected) // @ game+0x1195550
	void OnRep_PendingFiring(); // Function ProjectBoundary.PBLauncher.OnRep_PendingFiring // (Final|Native|Protected) // @ game+0x1195530
	void OnRep_Magazine(); // Function ProjectBoundary.PBLauncher.OnRep_Magazine // (Final|Native|Protected) // @ game+0x1195510
	void OnRep_IsFiring(); // Function ProjectBoundary.PBLauncher.OnRep_IsFiring // (Final|Native|Protected) // @ game+0x11954f0
	void OnRep_InProjectileControlMode(); // Function ProjectBoundary.PBLauncher.OnRep_InProjectileControlMode // (Final|Native|Protected) // @ game+0x11954d0
	void OnRep_BurstCounter(); // Function ProjectBoundary.PBLauncher.OnRep_BurstCounter // (Final|Native|Protected) // @ game+0x11954b0
	void OnReload(); // Function ProjectBoundary.PBLauncher.OnReload // (Final|Native|Public|BlueprintCallable) // @ game+0x1195490
	void OnReleasedSpecialAction(); // Function ProjectBoundary.PBLauncher.OnReleasedSpecialAction // (Native|Public|BlueprintCallable) // @ game+0x1164360
	void OnReleased(); // Function ProjectBoundary.PBLauncher.OnReleased // (Native|Public|BlueprintCallable) // @ game+0x1195470
	void OnRefill(); // Function ProjectBoundary.PBLauncher.OnRefill // (Final|Native|Public|BlueprintCallable) // @ game+0x1195450
	void OnPressedSpecialAction(); // Function ProjectBoundary.PBLauncher.OnPressedSpecialAction // (Native|Public|BlueprintCallable) // @ game+0x1195430
	void OnPressed(); // Function ProjectBoundary.PBLauncher.OnPressed // (Native|Public|BlueprintCallable) // @ game+0x1195410
	void OnFire(bool bNotifyServer); // Function ProjectBoundary.PBLauncher.OnFire // (Native|Public|BlueprintCallable) // @ game+0x1195380
	void OnDeployFinished(); // Function ProjectBoundary.PBLauncher.OnDeployFinished // (Final|Native|Protected|BlueprintCallable) // @ game+0x1195360
	void OnDeploy(bool bNotifyServer); // Function ProjectBoundary.PBLauncher.OnDeploy // (Final|Native|Public|BlueprintCallable) // @ game+0x11952d0
	void K2_UpdateTargetLocation(struct FVector TargetLocation); // Function ProjectBoundary.PBLauncher.K2_UpdateTargetLocation // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateMagazine(); // Function ProjectBoundary.PBLauncher.K2_UpdateMagazine // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Undeploying(); // Function ProjectBoundary.PBLauncher.K2_Undeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_TriggerProjectile(); // Function ProjectBoundary.PBLauncher.K2_TriggerProjectile // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartFillMagazine(); // Function ProjectBoundary.PBLauncher.K2_StartFillMagazine // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Standby(); // Function ProjectBoundary.PBLauncher.K2_Standby // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SpawnProjectile(struct FVector Origin, struct FVector ShootDir); // Function ProjectBoundary.PBLauncher.K2_SpawnProjectile // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimulateStopFire(); // Function ProjectBoundary.PBLauncher.K2_SimulateStopFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimulateStartFire(); // Function ProjectBoundary.PBLauncher.K2_SimulateStartFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimuilateFire(); // Function ProjectBoundary.PBLauncher.K2_SimuilateFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Reloading(); // Function ProjectBoundary.PBLauncher.K2_Reloading // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Ready(); // Function ProjectBoundary.PBLauncher.K2_Ready // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnUndeployFinished(); // Function ProjectBoundary.PBLauncher.K2_OnUndeployFinished // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnDeployFinished(); // Function ProjectBoundary.PBLauncher.K2_OnDeployFinished // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterruptReloading(); // Function ProjectBoundary.PBLauncher.K2_InterruptReloading // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Handup(); // Function ProjectBoundary.PBLauncher.K2_Handup // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Fired(); // Function ProjectBoundary.PBLauncher.K2_Fired // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ExitSpecialMode(); // Function ProjectBoundary.PBLauncher.K2_ExitSpecialMode // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EnterSpecialMode(); // Function ProjectBoundary.PBLauncher.K2_EnterSpecialMode // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndFillMagazine(); // Function ProjectBoundary.PBLauncher.K2_EndFillMagazine // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EnableFireControl(); // Function ProjectBoundary.PBLauncher.K2_EnableFireControl // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DisableFireControl(); // Function ProjectBoundary.PBLauncher.K2_DisableFireControl // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deploying(); // Function ProjectBoundary.PBLauncher.K2_Deploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ClipReloaded(); // Function ProjectBoundary.PBLauncher.K2_ClipReloaded // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ASingleAmmoReloaded(); // Function ProjectBoundary.PBLauncher.K2_ASingleAmmoReloaded // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_AdjustedAim(struct FVector Origin, struct FVector ShootDir); // Function ProjectBoundary.PBLauncher.K2_AdjustedAim // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x1556ec0
	bool IsUndeploying(); // Function ProjectBoundary.PBLauncher.IsUndeploying // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1195110
	bool IsStandby(); // Function ProjectBoundary.PBLauncher.IsStandby // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11950e0
	bool IsReady(); // Function ProjectBoundary.PBLauncher.IsReady // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11950b0
	bool IsDeploying(); // Function ProjectBoundary.PBLauncher.IsDeploying // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1194fe0
	bool IsDeloyingOrDeployed(); // Function ProjectBoundary.PBLauncher.IsDeloyingOrDeployed // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1194fb0
	bool HasInfiniteAmmo(); // Function ProjectBoundary.PBLauncher.HasInfiniteAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1194f80
	bool HasAmmoInClip(); // Function ProjectBoundary.PBLauncher.HasAmmoInClip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1194f50
	struct FVector GetSocketRotation(); // Function ProjectBoundary.PBLauncher.GetSocketRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1194db0
	struct FVector GetSocketLocation(); // Function ProjectBoundary.PBLauncher.GetSocketLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1194d70
	char GetProjectileShouldBounce(struct APBProjectile* ProjectileClass); // Function ProjectBoundary.PBLauncher.GetProjectileShouldBounce // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1194cd0
	float GetProjectileLifeTime(struct APBProjectile* ProjectileClass); // Function ProjectBoundary.PBLauncher.GetProjectileLifeTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1194c30
	float GetProjectileInitSpeed(struct APBProjectile* ProjectileClass); // Function ProjectBoundary.PBLauncher.GetProjectileInitSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1194b90
	int32_t GetProjectileBounce(struct APBProjectile* ProjectileClass); // Function ProjectBoundary.PBLauncher.GetProjectileBounce // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1194af0
	struct FName GetFireSocketName(); // Function ProjectBoundary.PBLauncher.GetFireSocketName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1194a30
	void GetAdjustedAim(struct FVector Origin, struct FVector ShootDir); // Function ProjectBoundary.PBLauncher.GetAdjustedAim // (Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1194940
	void ExitProjectileControlMode(); // Function ProjectBoundary.PBLauncher.ExitProjectileControlMode // (Native|Protected|BlueprintCallable) // @ game+0x1194920
	void EnterProjctileControlMode(); // Function ProjectBoundary.PBLauncher.EnterProjctileControlMode // (Native|Protected|BlueprintCallable) // @ game+0x1194900
	void ClientClipReloaded(); // Function ProjectBoundary.PBLauncher.ClientClipReloaded // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x11948e0
};

// Class ProjectBoundary.PBAutoMissileLauncher
// Size: 0x658 (Inherited: 0x610)
struct APBAutoMissileLauncher : APBLauncher {
	struct APBLGM_SmallMissile* ProjectileClass; // 0x610(0x08)
	struct TArray<struct UPBDynamicMarkableComponent*> TracedArray; // 0x618(0x10)
	struct TArray<struct UPBDynamicMarkableComponent*> HitTargetArray; // 0x628(0x10)
	struct TArray<struct UPBDynamicMarkableComponent*> TargetArray; // 0x638(0x10)
	struct UPBDynamicMarkableComponent* Target; // 0x648(0x08)
	char pad_650[0x8]; // 0x650(0x08)

	void ServerSpawnProjectileWithTarget(struct FVector Origin, struct FVector ShootDir, struct UPBDynamicMarkableComponent* InTarget); // Function ProjectBoundary.PBAutoMissileLauncher.ServerSpawnProjectileWithTarget // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x1154140
	void K2_SpawnProjectileWithTarget(struct FVector Origin, struct FVector ShootDir, struct UPBDynamicMarkableComponent* InTarget); // Function ProjectBoundary.PBAutoMissileLauncher.K2_SpawnProjectileWithTarget // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x1556ec0
	void K2_ExitReadyState(); // Function ProjectBoundary.PBAutoMissileLauncher.K2_ExitReadyState // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EnterReadyState(); // Function ProjectBoundary.PBAutoMissileLauncher.K2_EnterReadyState // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBBattleBoardInGameWidget
// Size: 0x2b8 (Inherited: 0x268)
struct UPBBattleBoardInGameWidget : UPBUserWidget {
	struct FPBBattleBoard_UI BattleBoardUI; // 0x268(0x50)

	void SetInputUIMode(); // Function ProjectBoundary.PBBattleBoardInGameWidget.SetInputUIMode // (Final|Native|Protected|BlueprintCallable) // @ game+0x1154370
	void SetInputGameMode(); // Function ProjectBoundary.PBBattleBoardInGameWidget.SetInputGameMode // (Final|Native|Protected|BlueprintCallable) // @ game+0x1154350
	void RefreshRemainingTime(); // Function ProjectBoundary.PBBattleBoardInGameWidget.RefreshRemainingTime // (Final|Native|Protected) // @ game+0x1154080
	void RefreshPendingMutePlayerState(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBBattleBoardInGameWidget.RefreshPendingMutePlayerState // (Final|Native|Protected) // @ game+0x1153ff0
	void RefreshMutePlayerText(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBBattleBoardInGameWidget.RefreshMutePlayerText // (Final|Native|Protected) // @ game+0x1153f60
	void RefreshMuteAllText(); // Function ProjectBoundary.PBBattleBoardInGameWidget.RefreshMuteAllText // (Final|Native|Protected) // @ game+0x1153f40
	void RefreshBattleBoardInfo(); // Function ProjectBoundary.PBBattleBoardInGameWidget.RefreshBattleBoardInfo // (Final|Native|Protected) // @ game+0x1153f20
	void MutePlayer(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBBattleBoardInGameWidget.MutePlayer // (Final|Native|Protected|BlueprintCallable) // @ game+0x1153dc0
	void MuteAllPlayer(); // Function ProjectBoundary.PBBattleBoardInGameWidget.MuteAllPlayer // (Final|Native|Protected|BlueprintCallable) // @ game+0x1153da0
	void K2_SetRemainingTime(); // Function ProjectBoundary.PBBattleBoardInGameWidget.K2_SetRemainingTime // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetMutePlayer(); // Function ProjectBoundary.PBBattleBoardInGameWidget.K2_SetMutePlayer // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetMuteAll(); // Function ProjectBoundary.PBBattleBoardInGameWidget.K2_SetMuteAll // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetModeAndMapName(); // Function ProjectBoundary.PBBattleBoardInGameWidget.K2_SetModeAndMapName // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBCharacter
// Size: 0x23a0 (Inherited: 0x4c0)
struct APBCharacter : ACharacter {
	struct UPBCharacterSkeletalMeshComponent* Mesh1P; // 0x4c0(0x08)
	struct USkeletalMeshComponent* Mesh3P; // 0x4c8(0x08)
	char pad_4D0[0x10]; // 0x4d0(0x10)
	struct UCameraComponent* FirstPersonCameraComponent; // 0x4e0(0x08)
	struct USphereComponent* HeadHitBox; // 0x4e8(0x08)
	struct UPBCharacterMovement* PBCharacterMovement; // 0x4f0(0x08)
	struct FPBMovementConfig MovementConfig; // 0x4f8(0x44)
	char pad_53C[0x1c]; // 0x53c(0x1c)
	struct FMulticastInlineDelegate OnPBCharacterEMPEffectOnDelegates; // 0x558(0x10)
	struct FMulticastInlineDelegate OnPBCharacterEMPEffectOffDelegates; // 0x568(0x10)
	struct TMap<enum class EPBPiercingZone, struct FPBHitZoneDefenseData> PiercingZoneDefenseDataMap; // 0x578(0x50)
	char pad_5C8[0x8]; // 0x5c8(0x08)
	struct TArray<struct APBCharacter*> ExcludeActorArray; // 0x5d0(0x10)
	struct FName ExcludeCheckSocketName; // 0x5e0(0x08)
	float ExcludeDistance; // 0x5e8(0x04)
	char pad_5EC[0x8]; // 0x5ec(0x08)
	float AnimRotatorYawScale; // 0x5f4(0x04)
	float AnimRotatorPitchScale; // 0x5f8(0x04)
	float AnimRotatorRollScale; // 0x5fc(0x04)
	float AnimMovementForwardScale; // 0x600(0x04)
	float AnimMovementUpScale; // 0x604(0x04)
	float AnimMovementRightScale; // 0x608(0x04)
	float AnimTraceDefaultLength; // 0x60c(0x04)
	float AnimTraceSize; // 0x610(0x04)
	float AnimFeetTraceModifier; // 0x614(0x04)
	float AnimFeetTraceSphereSizeModifier; // 0x618(0x04)
	float AnimDistanceToFloorClampedMin; // 0x61c(0x04)
	float AnimDistanceToFloorClampedMax; // 0x620(0x04)
	float AnimWallAttachTraceDistance; // 0x624(0x04)
	float AnimWallAttaceTraceSphrerSizeModifier; // 0x628(0x04)
	float HandLiftDistance; // 0x62c(0x04)
	char pad_630[0x398]; // 0x630(0x398)
	struct FVector GamepadRotateInput; // 0x9c8(0x0c)
	struct FVector AxisInputToController; // 0x9d4(0x0c)
	struct FVector2D MouseAxisInput; // 0x9e0(0x08)
	char pad_9E8[0x10]; // 0x9e8(0x10)
	float NotMoveConfirmDuration; // 0x9f8(0x04)
	float AutoAimSwitchDuration; // 0x9fc(0x04)
	char pad_A00[0x20]; // 0xa00(0x20)
	float CatchSurfaceDoubleClickDelayTime; // 0xa20(0x04)
	float DetachSurfaceDoubleClickDelayTime; // 0xa24(0x04)
	char bTryingToAim : 1; // 0xa28(0x01)
	char pad_A28_1 : 7; // 0xa28(0x01)
	char pad_A29[0x7]; // 0xa29(0x07)
	char bGetDataFromXML : 1; // 0xa30(0x01)
	char pad_A30_1 : 7; // 0xa30(0x01)
	char pad_A31[0x5f]; // 0xa31(0x5f)
	struct AController* LastControllerBeforeDie; // 0xa90(0x08)
	char pad_A98[0x4]; // 0xa98(0x04)
	struct FName CameraSocket; // 0xa9c(0x08)
	char pad_AA4[0x4]; // 0xaa4(0x04)
	struct TMap<struct UPBUserWidget*, struct UPBUserWidget*> InUseWidgetPool; // 0xaa8(0x50)
	char pad_AF8[0x68]; // 0xaf8(0x68)
	struct FName VehicleAttachPoint; // 0xb60(0x08)
	struct FName WeaponAttachPoint1P; // 0xb68(0x08)
	struct FName WeaponAttachPoint3P; // 0xb70(0x08)
	struct TArray<struct APBWeapon*> Inventory; // 0xb78(0x10)
	struct APBMarker* MoveMarker; // 0xb88(0x08)
	char pad_B90[0x8]; // 0xb90(0x08)
	struct APBVehicle* CurrentVehicle; // 0xb98(0x08)
	int32_t InventoryCapacity; // 0xba0(0x04)
	char pad_BA4[0x4]; // 0xba4(0x04)
	float TargetingSpeedModifier; // 0xba8(0x04)
	float BeginPlaySoundAccelerationMag; // 0xbac(0x04)
	char bWantsToFire : 1; // 0xbb0(0x01)
	char pad_BB0_1 : 7; // 0xbb0(0x01)
	char pad_BB1[0x7]; // 0xbb1(0x07)
	float BaseTurnRate; // 0xbb8(0x04)
	char pad_BBC[0x4]; // 0xbbc(0x04)
	float BaseRollRate; // 0xbc0(0x04)
	char pad_BC4[0x4]; // 0xbc4(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> MeshMIDs; // 0xbc8(0x10)
	struct UAnimMontage* DeathAnim; // 0xbd8(0x08)
	struct UAnimMontage* MeleeAnim1P; // 0xbe0(0x08)
	struct UAnimMontage* MeleeAnim3P; // 0xbe8(0x08)
	struct UParticleSystem* RespawnFX; // 0xbf0(0x08)
	struct UMaterialParameterCollection* OnEMPCrosshairToggleCollection; // 0xbf8(0x08)
	char pad_C00[0x8]; // 0xc00(0x08)
	float RagdollLifeTime; // 0xc08(0x04)
	char pad_C0C[0x4]; // 0xc0c(0x04)
	struct TMap<struct FName, enum class EPBHitZone> HitZoneMap; // 0xc10(0x50)
	float FaceDamageModifier; // 0xc60(0x04)
	float HeadDamageModifier; // 0xc64(0x04)
	float ChestDamageModifier; // 0xc68(0x04)
	float TripeDamageModifier; // 0xc6c(0x04)
	float HipDamageModifier; // 0xc70(0x04)
	float UpperArmDamageModifier; // 0xc74(0x04)
	float UpperArmAndChestDamageModifier; // 0xc78(0x04)
	float ForeArmDamageModifier; // 0xc7c(0x04)
	float ForeArmAndChestDamageModifier; // 0xc80(0x04)
	float ForeArmAndTripeDamageModifier; // 0xc84(0x04)
	float ForeArmAndHeadDamageModifier; // 0xc88(0x04)
	float ForeArmAndFaceDamageModifier; // 0xc8c(0x04)
	float HandDamageModifier; // 0xc90(0x04)
	float HandAndChestDamageModifier; // 0xc94(0x04)
	float HandAndTripeDamageModifier; // 0xc98(0x04)
	float HandAndHeadDamageModifier; // 0xc9c(0x04)
	float HandAndFaceDamageModifier; // 0xca0(0x04)
	float ThighDamageModifier; // 0xca4(0x04)
	float ShankDamageModifier; // 0xca8(0x04)
	float ShankAndThighDamageModifier; // 0xcac(0x04)
	float FootDamageModifier; // 0xcb0(0x04)
	float FootAndShankDamageModifier; // 0xcb4(0x04)
	float FootAndThighDamageModifier; // 0xcb8(0x04)
	float HeadshotRatio; // 0xcbc(0x04)
	char pad_CC0[0x8]; // 0xcc0(0x08)
	struct FPBZeroHealthInfo ZeroHealthInfo; // 0xcc8(0x20)
	char pad_CE8_0 : 1; // 0xce8(0x01)
	char bIsDying : 1; // 0xce8(0x01)
	char bIsHitDown : 1; // 0xce8(0x01)
	char pad_CE8_3 : 5; // 0xce8(0x01)
	char pad_CE9[0x7]; // 0xce9(0x07)
	struct UPBUserWidget* IsHitDownTipsClass; // 0xcf0(0x08)
	char pad_CF8[0x18]; // 0xcf8(0x18)
	char bEnableQuickRespawn : 1; // 0xd10(0x01)
	char pad_D10_1 : 7; // 0xd10(0x01)
	char pad_D11[0x7]; // 0xd11(0x07)
	struct UPBUserWidget* QuickRespawnTipsWidgetClass; // 0xd18(0x08)
	struct APBCharacter* PendingBeingRescuedCharacter; // 0xd20(0x08)
	struct APBCharacter* Savior; // 0xd28(0x08)
	struct APBPlayerState* SaviorPlayerState; // 0xd30(0x08)
	struct APBCharacter* BeingRescuedCharacter; // 0xd38(0x08)
	char pad_D40[0x8]; // 0xd40(0x08)
	struct UAnimMontage* DoctorMontage; // 0xd48(0x08)
	struct UAnimMontage* PatientMontage; // 0xd50(0x08)
	float RescueTime; // 0xd58(0x04)
	float RescueDistance; // 0xd5c(0x04)
	char pad_D60[0x8]; // 0xd60(0x08)
	struct AActor* InteractActor; // 0xd68(0x08)
	char pad_D70[0xc]; // 0xd70(0x0c)
	float GrabWeaponHoldTime; // 0xd7c(0x04)
	struct APBWeapon* PendingPickupWeapon; // 0xd80(0x08)
	char pad_D88[0xc]; // 0xd88(0x0c)
	float MaxFlySpeedInVehicleDown; // 0xd94(0x04)
	struct UCurveFloat* InputScalerCurveInVehicleDown; // 0xd98(0x08)
	struct UCurveFloat* MaxRotationSpeedCurveInVehicleDown; // 0xda0(0x08)
	char pad_DA8[0x9]; // 0xda8(0x09)
	enum class EPBTeam MyCurrentTeam; // 0xdb1(0x01)
	char pad_DB2[0x2]; // 0xdb2(0x02)
	struct FPBCharacterConfig CharacterConfig; // 0xdb4(0x04)
	char pad_DB8[0x20]; // 0xdb8(0x20)
	struct UDamageType* OutOfWorldDmgType; // 0xdd8(0x08)
	char pad_DE0[0x18]; // 0xde0(0x18)
	struct TArray<struct FName> AimingSocketPriorityArray; // 0xdf8(0x10)
	char pad_E08[0x8]; // 0xe08(0x08)
	struct FPBJetConfig JetConfig; // 0xe10(0x10)
	char bIsRunning : 1; // 0xe20(0x01)
	char pad_E20_1 : 7; // 0xe20(0x01)
	enum class EPBDashState CurrentDashState; // 0xe21(0x01)
	char bIsDashed : 1; // 0xe22(0x01)
	char pad_E22_1 : 7; // 0xe22(0x01)
	char pad_E23[0x5]; // 0xe23(0x05)
	struct UCameraShakeBase* DashAccelerationShake; // 0xe28(0x08)
	struct UCameraShakeBase* DashDecelerationShake; // 0xe30(0x08)
	float DashFOV; // 0xe38(0x04)
	float DashFOVInterpSpeed; // 0xe3c(0x04)
	float DashDecelerationFOVInterpSpeed; // 0xe40(0x04)
	char pad_E44[0x1]; // 0xe44(0x01)
	enum class EPBStateInHookUsing StateInHookUsing; // 0xe45(0x01)
	char pad_E46[0x1ca]; // 0xe46(0x1ca)
	struct FPBCaughtData CurrentHookLockData; // 0x1010(0x30)
	struct FPBCaughtData CurrentCaughtData; // 0x1040(0x30)
	char pad_1070[0x58]; // 0x1070(0x58)
	enum class ESurfaceCatchingStatus SurfaceCatchingStatus; // 0x10c8(0x01)
	char pad_10C9[0x7]; // 0x10c9(0x07)
	struct FSurfaceCatching SurfaceCatchingConfig; // 0x10d0(0x68)
	char pad_1138[0x2a0]; // 0x1138(0x2a0)
	float NormalFOV; // 0x13d8(0x04)
	float TargetingFOV; // 0x13dc(0x04)
	float TargetingFOVInterpSpeed; // 0x13e0(0x04)
	char pad_13E4[0xc]; // 0x13e4(0x0c)
	struct UPBSpringComponent* CameraLocationArm; // 0x13f0(0x08)
	struct UPBSpringComponent* CameraRotationArm; // 0x13f8(0x08)
	struct UPBSpringComponent* CameraHitRotationArm; // 0x1400(0x08)
	struct UPBSpringComponent* CameraShakeRotationArm; // 0x1408(0x08)
	struct UPBSpringComponent* CameraShakeLocationArm; // 0x1410(0x08)
	struct UPBSpringComponent* CameraImpactRotationArm; // 0x1418(0x08)
	struct UPBSpringComponent* MeshBounceRotationArm; // 0x1420(0x08)
	struct UPBSpringComponent* WeaponBounceRotationArm; // 0x1428(0x08)
	struct UPBSpringComponent* MeshBounceTranslationArm; // 0x1430(0x08)
	struct UPBSpringComponent* WeaponBounceTranslationArm; // 0x1438(0x08)
	struct UPBSpringComponent* RotationBounceCameraEffectArm; // 0x1440(0x08)
	struct UPBSpringComponent* TranslationBounceCameraEffectArm; // 0x1448(0x08)
	struct UPBSpringComponent* CameraShakeFOVArm; // 0x1450(0x08)
	char pad_1458[0x110]; // 0x1458(0x110)
	struct FVector WeaponTotalBounceRotation; // 0x1568(0x0c)
	struct FVector WeaponTotalBounceTranslation; // 0x1574(0x0c)
	struct FVector CameraEffectLocationZeroTolerance; // 0x1580(0x0c)
	struct FVector CameraEffectRotationZeroTolerance; // 0x158c(0x0c)
	struct FPBCameraShakeConfig NormalCameraShakeConfig; // 0x1598(0xa0)
	struct FPBCameraShakeConfig ADS_CameraShakeConfig; // 0x1638(0xa0)
	struct FPBCameraMoveSlideConfig NormalCameraMoveSlideConfig; // 0x16d8(0x18)
	struct FPBCameraMoveSlideConfig ADS_CameraMoveSlideConfig; // 0x16f0(0x18)
	float MinMoveSlideDeltaSpeed; // 0x1708(0x04)
	float MinImpactDeltaSpeed; // 0x170c(0x04)
	float ImpactScaler; // 0x1710(0x04)
	float NormalDamageFactor; // 0x1714(0x04)
	float ADS_DamageFactor; // 0x1718(0x04)
	char pad_171C[0xc]; // 0x171c(0x0c)
	struct APBMobilityModule* CurrentMobilityModule; // 0x1728(0x08)
	struct UPBCollisionSoundComponent* CurrentCollisionSoundComponent; // 0x1730(0x08)
	struct APBBaseRoleSkillModule* CurrentRoleSkillModule; // 0x1738(0x08)
	char pad_1740[0x4]; // 0x1740(0x04)
	int32_t SpecialistID; // 0x1744(0x04)
	struct UPBVisionMarkingComponent* VisionMarkingComponent; // 0x1748(0x08)
	struct UPBDynamicMarkableComponent* MarkableComponent; // 0x1750(0x08)
	struct FText ArmsName; // 0x1758(0x18)
	struct TSoftObjectPtr<struct UTexture2D> ArmsTexture; // 0x1770(0x28)
	enum class EPBRole PBRole; // 0x1798(0x01)
	char pad_1799[0x3]; // 0x1799(0x03)
	struct FName RoleId; // 0x179c(0x08)
	char pad_17A4[0x144]; // 0x17a4(0x144)
	struct FPBCharacterNetworkConfig CharacterSkinConfig; // 0x18e8(0x20)
	char pad_1908[0x10]; // 0x1908(0x10)
	struct UParticleSystemComponent* FixAirTight_SelfAidFX_Spawned; // 0x1918(0x08)
	struct UParticleSystem* FixAirTight_SelfAidFX; // 0x1920(0x08)
	struct FName FixAirTight_FXAttachPointName; // 0x1928(0x08)
	struct UAnimMontage* FixAirTightnessMontage; // 0x1930(0x08)
	float FixAirTightnessHoldTime; // 0x1938(0x04)
	char pad_193C[0x4]; // 0x193c(0x04)
	struct UParticleSystem* AirTightnessDropToCriticalFX; // 0x1940(0x08)
	float ManuallyFixAirTightnessDuration; // 0x1948(0x04)
	char pad_194C[0x4]; // 0x194c(0x04)
	struct UPBDamageNormalComponent* DamageNormalComponent; // 0x1950(0x08)
	struct FName EventID_AirLeaking; // 0x1958(0x08)
	char pad_1960[0x4]; // 0x1960(0x04)
	struct FName EventID_HalfHealthBreath; // 0x1964(0x08)
	struct FName EventID_HalfHealthHeartBeat; // 0x196c(0x08)
	char pad_1974[0x4]; // 0x1974(0x04)
	struct FName EventID_OnDeath; // 0x1978(0x08)
	struct TMap<enum class EPBHitZone, struct FName> HitZoneBeHitSoundEventMap; // 0x1980(0x50)
	struct FName EventID_MoveNormal_Forward; // 0x19d0(0x08)
	struct FName EventID_MoveNormal_Back; // 0x19d8(0x08)
	struct FName EventID_MoveNormal_Left; // 0x19e0(0x08)
	struct FName EventID_MoveNormal_Right; // 0x19e8(0x08)
	struct FName EventID_MoveNormal_Up; // 0x19f0(0x08)
	struct FName EventID_MoveNormal_Down; // 0x19f8(0x08)
	struct FName EventID_StopMove_Forward; // 0x1a00(0x08)
	struct FName EventID_StopMove_Back; // 0x1a08(0x08)
	struct FName EventID_StopMove_Left; // 0x1a10(0x08)
	struct FName EventID_StopMove_Right; // 0x1a18(0x08)
	struct FName EventID_StopMove_Up; // 0x1a20(0x08)
	struct FName EventID_StopMove_Down; // 0x1a28(0x08)
	struct FName EventID_MoveFast_Forward; // 0x1a30(0x08)
	struct FName EventID_MoveFast_Back; // 0x1a38(0x08)
	struct FName EventID_MoveFast_Left; // 0x1a40(0x08)
	struct FName EventID_MoveFast_Right; // 0x1a48(0x08)
	struct FName EventID_MoveFast_Up; // 0x1a50(0x08)
	struct FName EventID_MoveFast_Down; // 0x1a58(0x08)
	struct FName EventID_StopMoveFast_Forward; // 0x1a60(0x08)
	struct FName EventID_StopMoveFast_Back; // 0x1a68(0x08)
	struct FName EventID_StopMoveFast_Left; // 0x1a70(0x08)
	struct FName EventID_StopMoveFast_Right; // 0x1a78(0x08)
	struct FName EventID_StopMoveFast_Up; // 0x1a80(0x08)
	struct FName EventID_StopMoveFast_Down; // 0x1a88(0x08)
	char pad_1A90[0x4]; // 0x1a90(0x04)
	struct FName EventID_IdleBreath; // 0x1a94(0x08)
	struct FName EventID_EMPWarning; // 0x1a9c(0x08)
	struct FName EventID_SystemRebooting; // 0x1aa4(0x08)
	char pad_1AAC[0xc]; // 0x1aac(0x0c)
	float ReplenishDuration; // 0x1ab8(0x04)
	float HoldTimeToStartReplenish; // 0x1abc(0x04)
	float StartReplenishTime; // 0x1ac0(0x04)
	float StopReplenishTime; // 0x1ac4(0x04)
	struct UAnimMontage* StartReplenishAnimMontage; // 0x1ac8(0x08)
	struct UAnimMontage* ReplenishingAnimMontage; // 0x1ad0(0x08)
	struct UAnimMontage* StopReplenishAnimMontage; // 0x1ad8(0x08)
	char pad_1AE0[0x58]; // 0x1ae0(0x58)
	float CollisionAccVelocityCosThresholdToPlaySound; // 0x1b38(0x04)
	float MinAccOnVDirectionToPlaySound; // 0x1b3c(0x04)
	float MinSpeedOnNormalToPlaySound; // 0x1b40(0x04)
	int32_t RescueNum; // 0x1b44(0x04)
	enum class EPBHandsState PrevInherentHandsState; // 0x1b48(0x01)
	enum class EPBHandsState CurrentHandsState; // 0x1b49(0x01)
	enum class EPBHandsState PendingHandsState; // 0x1b4a(0x01)
	enum class EPBHandsState BaseState; // 0x1b4b(0x01)
	enum class EPBHandsState PendingBaseState; // 0x1b4c(0x01)
	char bDrawDebug_HandsState : 1; // 0x1b4d(0x01)
	char pad_1B4D_1 : 7; // 0x1b4d(0x01)
	char pad_1B4E[0x2]; // 0x1b4e(0x02)
	struct FTimerHandle TimerHandle_HandsState_ChangeState; // 0x1b50(0x08)
	struct FTimerHandle TimerHandle_HandsState_ChangeIdlePose; // 0x1b58(0x08)
	struct UAnimSequenceBase* PendingIdlePose; // 0x1b60(0x08)
	struct UAnimSequenceBase* EmptyHandsIdlePose; // 0x1b68(0x08)
	struct APBWeapon* CurrentWeapon; // 0x1b70(0x08)
	struct APBWeapon* PendingWeapon; // 0x1b78(0x08)
	struct TMap<enum class EPBLauncherPosition, struct FPBPawnMontageGroup> ActivateMontage_LauncherController; // 0x1b80(0x50)
	struct TMap<enum class EPBLauncherPosition, struct FPBPawnMontageGroup> DeployMontage_LauncherController; // 0x1bd0(0x50)
	struct TMap<enum class EPBLauncherPosition, struct FPBPawnMontageGroup> UndeployMontage_LauncherController; // 0x1c20(0x50)
	struct TMap<enum class EPBLauncherPosition, struct UAnimSequenceBase*> DeployedIdlePose_LauncherController; // 0x1c70(0x50)
	struct TMap<enum class EPBLauncherPosition, struct UAnimSequenceBase*> UndeployedIdlePose_LauncherController; // 0x1cc0(0x50)
	struct UAnimInstance* DefaultLinkAnimGraph; // 0x1d10(0x08)
	struct UAnimInstance* LauncherLinkAnimGraph; // 0x1d18(0x08)
	enum class EPBAnimLinkSlot LauncerAnimSlot; // 0x1d20(0x01)
	char pad_1D21[0x7]; // 0x1d21(0x07)
	struct UAnimSequenceBase* LauncherPendingBlendIdlePose; // 0x1d28(0x08)
	struct UAnimSequenceBase* LauncherBlendIdlePose; // 0x1d30(0x08)
	struct FTimerHandle TimerHadnle_LauncherController_ChangeIdlePose; // 0x1d38(0x08)
	struct APBLauncher* CurrentLauncher; // 0x1d40(0x08)
	char pad_1D48[0x4]; // 0x1d48(0x04)
	struct FPBControlCapability ControlCapability; // 0x1d4c(0x68)
	char bRoleSkillForbidDeployWeapon : 1; // 0x1db4(0x01)
	char pad_1DB4_1 : 7; // 0x1db4(0x01)
	char pad_1DB5[0x3]; // 0x1db5(0x03)
	struct UAnimSequenceBase* DroppedWeaponIdlePose; // 0x1db8(0x08)
	struct UAnimMontage* DroppingWeaponMontage; // 0x1dc0(0x08)
	struct UAnimMontage* GrabingWeaponMontage; // 0x1dc8(0x08)
	float GrabbingWeaponTime; // 0x1dd0(0x04)
	float GrabbingLerpWeaponTime; // 0x1dd4(0x04)
	float DroppingWeaponTime; // 0x1dd8(0x04)
	char pad_1DDC[0xc]; // 0x1ddc(0x0c)
	struct APBWeapon* PendingGrabWeapon; // 0x1de8(0x08)
	char pad_1DF0[0x230]; // 0x1df0(0x230)
	struct APBMeleeWeapon* CurrentMeleeWeapon; // 0x2020(0x08)
	struct AActor* MeleeTarget; // 0x2028(0x08)
	char pad_2030[0x148]; // 0x2030(0x148)
	float DashMeleeDetectEnemyRadius; // 0x2178(0x04)
	float DashMeleeRotateAnglePreSecond; // 0x217c(0x04)
	float DashMeleePunchImpulseScale; // 0x2180(0x04)
	char pad_2184[0x4]; // 0x2184(0x04)
	struct UAnimSequenceBase* UnarmedIdlePose; // 0x2188(0x08)
	struct FVector HandleWeaponRotationScaler; // 0x2190(0x0c)
	struct FVector HandleWeaponTranslationScaler; // 0x219c(0x0c)
	struct TMap<enum class ECharacterStatus, float> NormalStatusMap; // 0x21a8(0x50)
	struct TMap<enum class ECharacterStatus, float> TargetingStatusMap; // 0x21f8(0x50)
	float CheckDistance; // 0x2248(0x04)
	float CheckRadius; // 0x224c(0x04)
	char pad_2250[0x1]; // 0x2250(0x01)
	char bIsHiddenBySkill : 1; // 0x2251(0x01)
	char pad_2251_1 : 1; // 0x2251(0x01)
	char bReadyInStartSpot : 1; // 0x2251(0x01)
	char pad_2251_3 : 5; // 0x2251(0x01)
	char pad_2252[0x6]; // 0x2252(0x06)
	struct APBLauncher* CurrentLeftLauncher; // 0x2258(0x08)
	struct APBLauncher* CurrentRightLauncher; // 0x2260(0x08)
	char pad_2268[0x20]; // 0x2268(0x20)
	char pad_2288_0 : 1; // 0x2288(0x01)
	char bIsRescueLocked : 1; // 0x2288(0x01)
	char bIsFixingAirTightnessByMechUAV : 1; // 0x2288(0x01)
	char pad_2288_3 : 5; // 0x2288(0x01)
	char pad_2289[0x3]; // 0x2289(0x03)
	float FixAirTightnessProgress; // 0x228c(0x04)
	float BeingRescuedTime; // 0x2290(0x04)
	float BeingRescuedPercent; // 0x2294(0x04)
	char bIsBeingRescuedByMechUAV : 1; // 0x2298(0x01)
	char pad_2298_1 : 7; // 0x2298(0x01)
	char pad_2299[0x7]; // 0x2299(0x07)
	struct UPBWarningWidget* WarningWidgetClass; // 0x22a0(0x08)
	struct UPBWarningWidget* WarningWidget; // 0x22a8(0x08)
	struct UPBMiniMapWidget* MiniMapWidgetClass; // 0x22b0(0x08)
	struct UPBMiniMapWidget* MiniMapWidget; // 0x22b8(0x08)
	struct UCurveFloat* HandleWeaponRotationScalerCurve; // 0x22c0(0x08)
	struct UCurveFloat* HandleWeaponTranslationScalerCurve; // 0x22c8(0x08)
	char pad_22D0[0x28]; // 0x22d0(0x28)
	struct TArray<struct APBMedicine*> MedStationArray; // 0x22f8(0x10)
	char bIsFixingAirtightnessByMedStation : 1; // 0x2308(0x01)
	char pad_2308_1 : 7; // 0x2308(0x01)
	char pad_2309[0x13]; // 0x2309(0x13)
	float HoldTimeToConnect; // 0x231c(0x04)
	float ConnectionTime; // 0x2320(0x04)
	float HoldTimeToDisonnect; // 0x2324(0x04)
	float DisconnectionTime; // 0x2328(0x04)
	float ConnectionDistance; // 0x232c(0x04)
	float AutoDisconnectionDistance; // 0x2330(0x04)
	float StopMoveDistance; // 0x2334(0x04)
	float ConnectionSpeedFactor; // 0x2338(0x04)
	float BeConnectedMoveSpeed; // 0x233c(0x04)
	bool bActivateMobilitySwitcher; // 0x2340(0x01)
	char pad_2341[0x7]; // 0x2341(0x07)
	struct APBCharacter* PendingBeConnectedCharacter; // 0x2348(0x08)
	struct APBCharacter* PendingBeDisconnectedCharacter; // 0x2350(0x08)
	struct APBCharacter* BeConnectedCharacter; // 0x2358(0x08)
	char bIsConnected : 1; // 0x2360(0x01)
	char pad_2360_1 : 7; // 0x2360(0x01)
	char pad_2361[0x7]; // 0x2361(0x07)
	struct APBCharacter* ConnectedCharacter; // 0x2368(0x08)
	char bHasBeenConnected : 1; // 0x2370(0x01)
	char bIsBeingConnectedLocked : 1; // 0x2370(0x01)
	char pad_2370_2 : 6; // 0x2370(0x01)
	char pad_2371[0x2f]; // 0x2371(0x2f)

	void UseSkill(); // Function ProjectBoundary.PBCharacter.UseSkill // (Final|Native|Protected) // @ game+0x11681a0
	void UseCurrentWeaponAmmo(); // Function ProjectBoundary.PBCharacter.UseCurrentWeaponAmmo // (Final|Native|Public|BlueprintCallable) // @ game+0x1168180
	void UpdateWeaponBounceTranslationArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateWeaponBounceTranslationArm // (Final|Native|Private|HasDefaults) // @ game+0x1168040
	void UpdateWeaponBounceRotationArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateWeaponBounceRotationArm // (Final|Native|Private|HasDefaults) // @ game+0x1167f00
	void UpdateTranslationBounceCameraEffectArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateTranslationBounceCameraEffectArm // (Final|Native|Private|HasDefaults) // @ game+0x1167dc0
	void UpdateRotationBounceCameraEffectArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateRotationBounceCameraEffectArm // (Final|Native|Private|HasDefaults) // @ game+0x1167c80
	void UpdateMeshBounceTranslationArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateMeshBounceTranslationArm // (Final|Native|Private|HasDefaults) // @ game+0x1167b40
	void UpdateMeshBounceRotationArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateMeshBounceRotationArm // (Final|Native|Private|HasDefaults) // @ game+0x1167a00
	void UpdateCameraShakeRotationArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateCameraShakeRotationArm // (Final|Native|Private|HasDefaults) // @ game+0x11678c0
	void UpdateCameraShakeLocationArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateCameraShakeLocationArm // (Final|Native|Private|HasDefaults) // @ game+0x1167780
	void UpdateCameraShakeFOVArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateCameraShakeFOVArm // (Final|Native|Private|HasDefaults) // @ game+0x1167640
	void UpdateCameraRotationArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateCameraRotationArm // (Final|Native|Private|HasDefaults) // @ game+0x1167500
	void UpdateCameraLocationArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateCameraLocationArm // (Final|Native|Private|HasDefaults) // @ game+0x11673c0
	void UpdateCameraImpactRotationArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateCameraImpactRotationArm // (Final|Native|Private|HasDefaults) // @ game+0x1167280
	void UpdateCameraDamageRotationArm(struct FVector InDeltaVector, struct FVector TotalDeltaVector, bool HasReachMax); // Function ProjectBoundary.PBCharacter.UpdateCameraDamageRotationArm // (Final|Native|Private|HasDefaults) // @ game+0x1167140
	void ToggleChangeTeam(); // Function ProjectBoundary.PBCharacter.ToggleChangeTeam // (Final|Native|Protected|BlueprintCallable) // @ game+0x1167120
	void SwitchToWeapon(int32_t Index); // Function ProjectBoundary.PBCharacter.SwitchToWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x1167090
	void StopWeaponFire(); // Function ProjectBoundary.PBCharacter.StopWeaponFire // (Final|Native|Public|BlueprintCallable) // @ game+0x1167070
	void StopCameraShake(struct UCameraShakeBase* CameraShake); // Function ProjectBoundary.PBCharacter.StopCameraShake // (Final|Native|Private|BlueprintCallable) // @ game+0x1166fe0
	void StartWeaponFire(); // Function ProjectBoundary.PBCharacter.StartWeaponFire // (Final|Native|Public|BlueprintCallable) // @ game+0x1166fc0
	void StartSaveSelf(); // Function ProjectBoundary.PBCharacter.StartSaveSelf // (Final|Native|Protected|BlueprintCallable) // @ game+0x1166fa0
	void StartFixAirTightnessByMechUAV(); // Function ProjectBoundary.PBCharacter.StartFixAirTightnessByMechUAV // (Final|Native|Protected|BlueprintCallable) // @ game+0x1166f80
	void StartBeingRescued(struct APBPlayerState* InSaviorPlayerState); // Function ProjectBoundary.PBCharacter.StartBeingRescued // (Final|Native|Protected|BlueprintCallable) // @ game+0x1166ef0
	void StartBeenSaved(struct APBPlayerState* InSaviorPlayerState); // Function ProjectBoundary.PBCharacter.StartBeenSaved // (Final|Native|Protected|BlueprintCallable) // @ game+0x1166e60
	void SkillModuleSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.SkillModuleSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1166dd0
	struct UPBUserWidget* ShowWidget(struct UPBUserWidget* InClass); // Function ProjectBoundary.PBCharacter.ShowWidget // (Final|Native|Private|BlueprintCallable) // @ game+0x1166d30
	void SetSurfaceCatchingStatus(enum class ESurfaceCatchingStatus Status); // Function ProjectBoundary.PBCharacter.SetSurfaceCatchingStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x1166c60
	void SetIsAllowedCatch(bool bEnable); // Function ProjectBoundary.PBCharacter.SetIsAllowedCatch // (Final|Native|Public|BlueprintCallable) // @ game+0x1166bd0
	void SetAirTightness(float InAirTightness); // Function ProjectBoundary.PBCharacter.SetAirTightness // (Final|Native|Public|BlueprintCallable) // @ game+0x1166980
	void ServerUndeployRoleSkill(); // Function ProjectBoundary.PBCharacter.ServerUndeployRoleSkill // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11668e0
	void ServerSwitchToPendingWeapon(struct APBWeapon* NewWeapon); // Function ProjectBoundary.PBCharacter.ServerSwitchToPendingWeapon // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166820
	void ServerStopReplenish(); // Function ProjectBoundary.PBCharacter.ServerStopReplenish // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11667d0
	void ServerStopFixAirTightness(); // Function ProjectBoundary.PBCharacter.ServerStopFixAirTightness // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x1166780
	void ServerStopExcludeBraking(); // Function ProjectBoundary.PBCharacter.ServerStopExcludeBraking // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166730
	void ServerStopExclude(); // Function ProjectBoundary.PBCharacter.ServerStopExclude // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11666e0
	void ServerStartReplenish(); // Function ProjectBoundary.PBCharacter.ServerStartReplenish // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166690
	void ServerStartNoTargetMelee(); // Function ProjectBoundary.PBCharacter.ServerStartNoTargetMelee // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166640
	void ServerStartMoveRelatively(struct FPBCaughtData NewCaughtData); // Function ProjectBoundary.PBCharacter.ServerStartMoveRelatively // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1166570
	void ServerStartFixAirTightness(); // Function ProjectBoundary.PBCharacter.ServerStartFixAirTightness // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x1166520
	void ServerStartDisconnection(struct APBCharacter* InPendingBeDisconnectedCharater); // Function ProjectBoundary.PBCharacter.ServerStartDisconnection // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166460
	void ServerStartDashMelee(); // Function ProjectBoundary.PBCharacter.ServerStartDashMelee // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166410
	void ServerStartConnection(struct APBCharacter* InPendingBeConnectedCharater); // Function ProjectBoundary.PBCharacter.ServerStartConnection // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166350
	void ServerStartCloseRange(); // Function ProjectBoundary.PBCharacter.ServerStartCloseRange // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166300
	void ServerSpawnRoleInventory(); // Function ProjectBoundary.PBCharacter.ServerSpawnRoleInventory // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11662b0
	void ServerSetFiring(bool bNewFiring); // Function ProjectBoundary.PBCharacter.ServerSetFiring // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11661f0
	void ServerRescueOther(struct APBCharacter* BeingRescue); // Function ProjectBoundary.PBCharacter.ServerRescueOther // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166130
	void ServerReadyInStartSpot(); // Function ProjectBoundary.PBCharacter.ServerReadyInStartSpot // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166090
	void ServerQuickRespawn(); // Function ProjectBoundary.PBCharacter.ServerQuickRespawn // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166040
	void ServerOnStopBraking(); // Function ProjectBoundary.PBCharacter.ServerOnStopBraking // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165fa0
	void ServerOnStartBraking(); // Function ProjectBoundary.PBCharacter.ServerOnStartBraking // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165f50
	void ServerOnReleasedADS(); // Function ProjectBoundary.PBCharacter.ServerOnReleasedADS // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1165f00
	void ServerOnPressedADS(); // Function ProjectBoundary.PBCharacter.ServerOnPressedADS // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1165eb0
	void ServerInterruptDisconnection(); // Function ProjectBoundary.PBCharacter.ServerInterruptDisconnection // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165d90
	void ServerInterruptConnection(); // Function ProjectBoundary.PBCharacter.ServerInterruptConnection // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165d40
	void ServerInteract(struct AActor* Target, struct UAnimMontage* SelfAnim, struct UAnimMontage* TargetAnim); // Function ProjectBoundary.PBCharacter.ServerInteract // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165c00
	void ServerGrabWeapon(struct APBWeapon* NextWeapon); // Function ProjectBoundary.PBCharacter.ServerGrabWeapon // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165b40
	void ServerExcludeOther(struct FVector Impulse); // Function ProjectBoundary.PBCharacter.ServerExcludeOther // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x1165a70
	void ServerExcludeBraking(); // Function ProjectBoundary.PBCharacter.ServerExcludeBraking // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165a20
	void ServerDropWeapon(); // Function ProjectBoundary.PBCharacter.ServerDropWeapon // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11659d0
	void ServerDeployRoleSkill(); // Function ProjectBoundary.PBCharacter.ServerDeployRoleSkill // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165980
	void ServerDeactivateSkill(); // Function ProjectBoundary.PBCharacter.ServerDeactivateSkill // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165930
	void ServerCancelRescueOther(); // Function ProjectBoundary.PBCharacter.ServerCancelRescueOther // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11658e0
	void ServerCancelInteract(struct AActor* Target, struct UAnimMontage* SelfAnim, struct UAnimMontage* TargetAnim); // Function ProjectBoundary.PBCharacter.ServerCancelInteract // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165750
	void ServerActualRescued(); // Function ProjectBoundary.PBCharacter.ServerActualRescued // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x1165700
	void ServerActivateSkill(); // Function ProjectBoundary.PBCharacter.ServerActivateSkill // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11656b0
	void RotationSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.RotationSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x11654e0
	void RoleSkillSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.RoleSkillSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1165450
	void RescueOtherSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.RescueOtherSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x11653a0
	void ReplenishSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.ReplenishSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1165310
	void RemoveWidgetByClass(struct UPBUserWidget* InClass); // Function ProjectBoundary.PBCharacter.RemoveWidgetByClass // (Final|Native|Private|BlueprintCallable) // @ game+0x1165280
	void RemoveWeapon(struct APBWeapon* Weapon); // Function ProjectBoundary.PBCharacter.RemoveWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x11651f0
	void ReloadWeaponSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.ReloadWeaponSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1165160
	void ReloadCurrentWeapon(); // Function ProjectBoundary.PBCharacter.ReloadCurrentWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x1165140
	void ReleaseFastMove(); // Function ProjectBoundary.PBCharacter.ReleaseFastMove // (Final|Native|Public|BlueprintCallable) // @ game+0x1165120
	void ReEnterSafeZoom(); // Function ProjectBoundary.PBCharacter.ReEnterSafeZoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1165070
	void PressFastMove(); // Function ProjectBoundary.PBCharacter.PressFastMove // (Final|Native|Public|BlueprintCallable) // @ game+0x1165050
	void PlayCameraShake(struct UCameraShakeBase* CameraShake); // Function ProjectBoundary.PBCharacter.PlayCameraShake // (Final|Native|Private|BlueprintCallable) // @ game+0x1164f30
	void OutOfSafeZoom(); // Function ProjectBoundary.PBCharacter.OutOfSafeZoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1164f10
	void OnUnMarked(); // Function ProjectBoundary.PBCharacter.OnUnMarked // (Final|Native|Public) // @ game+0x1164ed0
	void OnStopRunning(); // Function ProjectBoundary.PBCharacter.OnStopRunning // (Final|Native|Public|BlueprintCallable) // @ game+0x1164eb0
	void OnStopFire(); // Function ProjectBoundary.PBCharacter.OnStopFire // (Final|Native|Public|BlueprintCallable) // @ game+0x1164e90
	void OnStartRunning(); // Function ProjectBoundary.PBCharacter.OnStartRunning // (Final|Native|Public|BlueprintCallable) // @ game+0x1164e70
	void OnStartFire(); // Function ProjectBoundary.PBCharacter.OnStartFire // (Final|Native|Public|BlueprintCallable) // @ game+0x1164e50
	void OnRep_ZeroHealthInfo(); // Function ProjectBoundary.PBCharacter.OnRep_ZeroHealthInfo // (Final|Native|Protected) // @ game+0x1164e10
	void OnRep_RoleSkillForbidDeployWeapon(); // Function ProjectBoundary.PBCharacter.OnRep_RoleSkillForbidDeployWeapon // (Final|Native|Protected) // @ game+0x9c37b0
	void OnRep_RoleSkill(); // Function ProjectBoundary.PBCharacter.OnRep_RoleSkill // (Final|Native|Protected) // @ game+0x1164df0
	void OnRep_RoleID(); // Function ProjectBoundary.PBCharacter.OnRep_RoleID // (Final|Native|Protected) // @ game+0x1164dd0
	void OnRep_ReadyInStartSpot(); // Function ProjectBoundary.PBCharacter.OnRep_ReadyInStartSpot // (Final|Native|Protected) // @ game+0x1164db0
	void OnRep_PendingWeapon(); // Function ProjectBoundary.PBCharacter.OnRep_PendingWeapon // (Final|Native|Protected) // @ game+0x1164b80
	void OnRep_PendingHandsState(enum class EPBHandsState PrevHandsState); // Function ProjectBoundary.PBCharacter.OnRep_PendingHandsState // (Final|Native|Protected) // @ game+0x1164d30
	void OnRep_PendingGrabWeapon(); // Function ProjectBoundary.PBCharacter.OnRep_PendingGrabWeapon // (Final|Native|Protected) // @ game+0x1164d10
	void OnRep_PendingBaseState(); // Function ProjectBoundary.PBCharacter.OnRep_PendingBaseState // (Final|Native|Protected) // @ game+0x1164b80
	void OnRep_MovementConfig(); // Function ProjectBoundary.PBCharacter.OnRep_MovementConfig // (Final|Native|Protected) // @ game+0x1164cf0
	void OnRep_IsFixingAirtightnessByMedStation(); // Function ProjectBoundary.PBCharacter.OnRep_IsFixingAirtightnessByMedStation // (Final|Native|Protected) // @ game+0x1164cd0
	void OnRep_IsDashed(); // Function ProjectBoundary.PBCharacter.OnRep_IsDashed // (Final|Native|Private) // @ game+0x1164cb0
	void OnRep_Inventory(); // Function ProjectBoundary.PBCharacter.OnRep_Inventory // (Final|Native|Private) // @ game+0x1164c90
	void OnRep_HoldingADS(); // Function ProjectBoundary.PBCharacter.OnRep_HoldingADS // (Final|Native|Protected) // @ game+0x1164c70
	void OnRep_CurrentVehicle(struct APBVehicle* LastVehicle); // Function ProjectBoundary.PBCharacter.OnRep_CurrentVehicle // (Final|Native|Private) // @ game+0x1164be0
	void OnRep_CurrentRightLauncher(); // Function ProjectBoundary.PBCharacter.OnRep_CurrentRightLauncher // (Final|Native|Protected) // @ game+0x1164b80
	void OnRep_CurrentMobilityModule(); // Function ProjectBoundary.PBCharacter.OnRep_CurrentMobilityModule // (Final|Native|Private) // @ game+0x1164bc0
	void OnRep_CurrentMeleeWeapon(); // Function ProjectBoundary.PBCharacter.OnRep_CurrentMeleeWeapon // (Final|Native|Protected) // @ game+0x1164ba0
	void OnRep_CurrentLeftLauncher(); // Function ProjectBoundary.PBCharacter.OnRep_CurrentLeftLauncher // (Final|Native|Protected) // @ game+0x1164b80
	void OnRep_CurrentLauncher(); // Function ProjectBoundary.PBCharacter.OnRep_CurrentLauncher // (Final|Native|Protected) // @ game+0x1164b80
	void OnRep_CurrentDashState(enum class EPBDashState OldState); // Function ProjectBoundary.PBCharacter.OnRep_CurrentDashState // (Final|Native|Private) // @ game+0x1164ae0
	void OnRep_CharacterSkinConfig(); // Function ProjectBoundary.PBCharacter.OnRep_CharacterSkinConfig // (Final|Native|Protected) // @ game+0x1164ac0
	void OnReloadAllowOtherActions(); // Function ProjectBoundary.PBCharacter.OnReloadAllowOtherActions // (Final|Native|Public|BlueprintCallable) // @ game+0x1164aa0
	void OnPrevWeapon(); // Function ProjectBoundary.PBCharacter.OnPrevWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x1164a80
	void OnNextWeapon(); // Function ProjectBoundary.PBCharacter.OnNextWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x1164a60
	void OnMarked(); // Function ProjectBoundary.PBCharacter.OnMarked // (Final|Native|Public) // @ game+0x1164a40
	void OnFireReleased(); // Function ProjectBoundary.PBCharacter.OnFireReleased // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnFireHold(); // Function ProjectBoundary.PBCharacter.OnFireHold // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyUpdateEngineTemperaturePercentage(); // Function ProjectBoundary.PBCharacter.NotifyUpdateEngineTemperaturePercentage // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyUpdateCurrentAmmoInClip(); // Function ProjectBoundary.PBCharacter.NotifyUpdateCurrentAmmoInClip // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyUpdateCurrentAmmo(); // Function ProjectBoundary.PBCharacter.NotifyUpdateCurrentAmmo // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyUpdateAirTightnessPercentage(); // Function ProjectBoundary.PBCharacter.NotifyUpdateAirTightnessPercentage // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyUpdateAirPressurePercentage(); // Function ProjectBoundary.PBCharacter.NotifyUpdateAirPressurePercentage // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyToggleFixAirTightness(bool NewState); // Function ProjectBoundary.PBCharacter.NotifyToggleFixAirTightness // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyToggleAirTightnessCritical(bool IsCritical); // Function ProjectBoundary.PBCharacter.NotifyToggleAirTightnessCritical // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifySwitchWeapon(); // Function ProjectBoundary.PBCharacter.NotifySwitchWeapon // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStartRescueOther(); // Function ProjectBoundary.PBCharacter.NotifyStartRescueOther // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStartBeingRescued(); // Function ProjectBoundary.PBCharacter.NotifyStartBeingRescued // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyShowWidgetsOfMechUAV(); // Function ProjectBoundary.PBCharacter.NotifyShowWidgetsOfMechUAV // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyShowAirTightnessTip(bool bIsShow); // Function ProjectBoundary.PBCharacter.NotifyShowAirTightnessTip // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyResurrection(); // Function ProjectBoundary.PBCharacter.NotifyResurrection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyReplenishFailedTip(); // Function ProjectBoundary.PBCharacter.NotifyReplenishFailedTip // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyReplenhFinish(); // Function ProjectBoundary.PBCharacter.NotifyReplenhFinish // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyReEnterWorld(); // Function ProjectBoundary.PBCharacter.NotifyReEnterWorld // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyReEnterNormalRaderSignalVolume(); // Function ProjectBoundary.PBCharacter.NotifyReEnterNormalRaderSignalVolume // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOutOfWorld(); // Function ProjectBoundary.PBCharacter.NotifyOutOfWorld // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOutOfNormalRaderSignalVolume(); // Function ProjectBoundary.PBCharacter.NotifyOutOfNormalRaderSignalVolume // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnStartDash(); // Function ProjectBoundary.PBCharacter.NotifyOnStartDash // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnEquipMobilityModule(); // Function ProjectBoundary.PBCharacter.NotifyOnEquipMobilityModule // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnEndDash(); // Function ProjectBoundary.PBCharacter.NotifyOnEndDash // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyObservingOthers(); // Function ProjectBoundary.PBCharacter.NotifyObservingOthers // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyMoveBlockedBy(struct FHitResult Impact); // Function ProjectBoundary.PBCharacter.NotifyMoveBlockedBy // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void NotifyInterruptRescue(); // Function ProjectBoundary.PBCharacter.NotifyInterruptRescue // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyHaveTargetRescueRescued(); // Function ProjectBoundary.PBCharacter.NotifyHaveTargetRescueRescued // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyHaveBestPickupWeapon(); // Function ProjectBoundary.PBCharacter.NotifyHaveBestPickupWeapon // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyFullyRecoverAirTightness(); // Function ProjectBoundary.PBCharacter.NotifyFullyRecoverAirTightness // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEndRescueOther(); // Function ProjectBoundary.PBCharacter.NotifyEndRescueOther // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEndDashDeceleration(); // Function ProjectBoundary.PBCharacter.NotifyEndDashDeceleration // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEndDashConstant(); // Function ProjectBoundary.PBCharacter.NotifyEndDashConstant // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEndDashAcceleration(); // Function ProjectBoundary.PBCharacter.NotifyEndDashAcceleration // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEndBeingRescued(); // Function ProjectBoundary.PBCharacter.NotifyEndBeingRescued // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEMPEffectFadeOut(); // Function ProjectBoundary.PBCharacter.NotifyEMPEffectFadeOut // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyCleanWidgetsOfMechUAV(); // Function ProjectBoundary.PBCharacter.NotifyCleanWidgetsOfMechUAV // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyCleanTargetRescued(); // Function ProjectBoundary.PBCharacter.NotifyCleanTargetRescued // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyCleanPickupWeapon(); // Function ProjectBoundary.PBCharacter.NotifyCleanPickupWeapon // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBorn(); // Function ProjectBoundary.PBCharacter.NotifyBorn // (Native|Event|Public|BlueprintEvent) // @ game+0x11646b0
	void NotifyBePossessedByLocalPlayer(); // Function ProjectBoundary.PBCharacter.NotifyBePossessedByLocalPlayer // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeKilled(); // Function ProjectBoundary.PBCharacter.NotifyBeKilled // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeHitShield(struct APawn* PawnInstigator); // Function ProjectBoundary.PBCharacter.NotifyBeHitShield // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeHitDown(); // Function ProjectBoundary.PBCharacter.NotifyBeHitDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeHitArmor(struct APawn* PawnInstigator); // Function ProjectBoundary.PBCharacter.NotifyBeHitArmor // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeHit(struct APawn* DamageCauser, float DamageTaken); // Function ProjectBoundary.PBCharacter.NotifyBeHit // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeginDashDeceleration(); // Function ProjectBoundary.PBCharacter.NotifyBeginDashDeceleration // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeginDashConstant(); // Function ProjectBoundary.PBCharacter.NotifyBeginDashConstant // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeginDashAcceleration(); // Function ProjectBoundary.PBCharacter.NotifyBeginDashAcceleration // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeDestoryArmor(struct APawn* PawnInstigator); // Function ProjectBoundary.PBCharacter.NotifyBeDestoryArmor // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBackSelfCamera(); // Function ProjectBoundary.PBCharacter.NotifyBackSelfCamera // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NextWeaponSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.NextWeaponSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1164620
	void MultiTakeEMPEffect(float EMPDamage, enum class EPBEMPType EMPType); // Function ProjectBoundary.PBCharacter.MultiTakeEMPEffect // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0x1164240
	void MultiResurrection(); // Function ProjectBoundary.PBCharacter.MultiResurrection // (Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable) // @ game+0x1164220
	void MultiInteract(struct AActor* Target, struct UAnimMontage* SelfAnim, struct UAnimMontage* TargetAnim); // Function ProjectBoundary.PBCharacter.MultiInteract // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x1164110
	void MultiFinishFixAirTightness(); // Function ProjectBoundary.PBCharacter.MultiFinishFixAirTightness // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x11640f0
	void MultiDrawBones(struct TArray<struct FTransform> BoneTransforms, struct TArray<struct FName> BoneNames); // Function ProjectBoundary.PBCharacter.MultiDrawBones // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x1163ff0
	void MulticastStartDisconnection(struct APBCharacter* InPendingBeDisconnectedCharater); // Function ProjectBoundary.PBCharacter.MulticastStartDisconnection // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x1164470
	void MulticastStartConnection(struct APBCharacter* InPendingBeConnectedCharater); // Function ProjectBoundary.PBCharacter.MulticastStartConnection // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x11643e0
	void MulticastInterruptDisconnection(); // Function ProjectBoundary.PBCharacter.MulticastInterruptDisconnection // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x11643c0
	void MulticastInterruptConnection(); // Function ProjectBoundary.PBCharacter.MulticastInterruptConnection // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x11643a0
	void MulticastDeactivateSkill(); // Function ProjectBoundary.PBCharacter.MulticastDeactivateSkill // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x1164380
	void MulticastAutoDisconnection(); // Function ProjectBoundary.PBCharacter.MulticastAutoDisconnection // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x1164360
	void MulticastActivateSkill(); // Function ProjectBoundary.PBCharacter.MulticastActivateSkill // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x1164340
	void Multicast_UpdateStunEndurancePercentage(float InDamageTaken); // Function ProjectBoundary.PBCharacter.Multicast_UpdateStunEndurancePercentage // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x1164500
	void MultiCancelInteract(struct AActor* Target, struct UAnimMontage* SelfAnim, struct UAnimMontage* TargetAnim); // Function ProjectBoundary.PBCharacter.MultiCancelInteract // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x1163ee0
	void MobilitySwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.MobilitySwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1163e50
	void MeleeSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.MeleeSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1163dc0
	void LauncherSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.LauncherSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1163d30
	void K2_WeaponStartReload(); // Function ProjectBoundary.PBCharacter.K2_WeaponStartReload // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_UnlockHook(); // Function ProjectBoundary.PBCharacter.K2_UnlockHook // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UndeployingWeapon(); // Function ProjectBoundary.PBCharacter.K2_UndeployingWeapon // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UndeployingRoleSkill(); // Function ProjectBoundary.PBCharacter.K2_UndeployingRoleSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UndeployingLauncherController(); // Function ProjectBoundary.PBCharacter.K2_UndeployingLauncherController // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UndeployedWeapon(); // Function ProjectBoundary.PBCharacter.K2_UndeployedWeapon // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UndeployedRoleSkill(); // Function ProjectBoundary.PBCharacter.K2_UndeployedRoleSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UndeployedLauncherController(); // Function ProjectBoundary.PBCharacter.K2_UndeployedLauncherController // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_TurnOnHelmet(); // Function ProjectBoundary.PBCharacter.K2_TurnOnHelmet // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_TurnOffHelmet(); // Function ProjectBoundary.PBCharacter.K2_TurnOffHelmet // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StoppingReplenish(); // Function ProjectBoundary.PBCharacter.K2_StoppingReplenish // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StoppedReplenish(); // Function ProjectBoundary.PBCharacter.K2_StoppedReplenish // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StopFixAirTightnessByMedStation(); // Function ProjectBoundary.PBCharacter.K2_StopFixAirTightnessByMedStation // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StopFixAirTightnessByMechUAV(); // Function ProjectBoundary.PBCharacter.K2_StopFixAirTightnessByMechUAV // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartingReplenish(); // Function ProjectBoundary.PBCharacter.K2_StartingReplenish // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartFixAirTightnessByMedStation(); // Function ProjectBoundary.PBCharacter.K2_StartFixAirTightnessByMedStation // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartFixAirTightnessByMechUAV(); // Function ProjectBoundary.PBCharacter.K2_StartFixAirTightnessByMechUAV // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartedReplenish(); // Function ProjectBoundary.PBCharacter.K2_StartedReplenish // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartDoingMelee(); // Function ProjectBoundary.PBCharacter.K2_StartDoingMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartDoingDashMelee(); // Function ProjectBoundary.PBCharacter.K2_StartDoingDashMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartDisconnection(); // Function ProjectBoundary.PBCharacter.K2_StartDisconnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartDeactivateSkill(); // Function ProjectBoundary.PBCharacter.K2_StartDeactivateSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartConnection(); // Function ProjectBoundary.PBCharacter.K2_StartConnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartBeingDisconnected(); // Function ProjectBoundary.PBCharacter.K2_StartBeingDisconnected // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartBeingConnected(); // Function ProjectBoundary.PBCharacter.K2_StartBeingConnected // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartActivateSkill(); // Function ProjectBoundary.PBCharacter.K2_StartActivateSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ShowCurrentGamePlayEventHint(enum class EPBGamePlayEventType GamePlayEventType); // Function ProjectBoundary.PBCharacter.K2_ShowCurrentGamePlayEventHint // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetRenderDepth(bool bIsSet); // Function ProjectBoundary.PBCharacter.K2_SetRenderDepth // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetClimbStateHUD(); // Function ProjectBoundary.PBCharacter.K2_SetClimbStateHUD // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetAllowedClimbStateHUD(); // Function ProjectBoundary.PBCharacter.K2_SetAllowedClimbStateHUD // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_ResetHook(); // Function ProjectBoundary.PBCharacter.K2_ResetHook // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_RefreshSkin(); // Function ProjectBoundary.PBCharacter.K2_RefreshSkin // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ReEnterSafeZoom(); // Function ProjectBoundary.PBCharacter.K2_ReEnterSafeZoom // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_RecycleHook(); // Function ProjectBoundary.PBCharacter.K2_RecycleHook // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_PrepareToLaunchHook(); // Function ProjectBoundary.PBCharacter.K2_PrepareToLaunchHook // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_PlayMeleeHitSound(struct FName MeleeHitEventID); // Function ProjectBoundary.PBCharacter.K2_PlayMeleeHitSound // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OutOfSafeZoom(); // Function ProjectBoundary.PBCharacter.K2_OutOfSafeZoom // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_LockHook(); // Function ProjectBoundary.PBCharacter.K2_LockHook // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_LaunchHook(); // Function ProjectBoundary.PBCharacter.K2_LaunchHook // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterruptSkill(); // Function ProjectBoundary.PBCharacter.K2_InterruptSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterruptDisconnection(); // Function ProjectBoundary.PBCharacter.K2_InterruptDisconnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterruptConnection(); // Function ProjectBoundary.PBCharacter.K2_InterruptConnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterruptBeingDisconnected(); // Function ProjectBoundary.PBCharacter.K2_InterruptBeingDisconnected // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterruptBeingConnected(); // Function ProjectBoundary.PBCharacter.K2_InterruptBeingConnected // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InitHelmet(); // Function ProjectBoundary.PBCharacter.K2_InitHelmet // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_GrabbingWeapon(); // Function ProjectBoundary.PBCharacter.K2_GrabbingWeapon // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_GrabbedWeapon(); // Function ProjectBoundary.PBCharacter.K2_GrabbedWeapon // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EquipRoleSkill(); // Function ProjectBoundary.PBCharacter.K2_EquipRoleSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EquipedVehicle(struct APBVehicle* InVehicle); // Function ProjectBoundary.PBCharacter.K2_EquipedVehicle // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EquipedRadar(struct APBRadar* InRadar); // Function ProjectBoundary.PBCharacter.K2_EquipedRadar // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EquipedLauncher(struct APBLauncher* InLauncher); // Function ProjectBoundary.PBCharacter.K2_EquipedLauncher // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EnteringUnarmedState(); // Function ProjectBoundary.PBCharacter.K2_EnteringUnarmedState // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndDisconnection(); // Function ProjectBoundary.PBCharacter.K2_EndDisconnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndDeactivateSkill(); // Function ProjectBoundary.PBCharacter.K2_EndDeactivateSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndConnection(); // Function ProjectBoundary.PBCharacter.K2_EndConnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndBeingDisconnected(); // Function ProjectBoundary.PBCharacter.K2_EndBeingDisconnected // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndBeingConnected(); // Function ProjectBoundary.PBCharacter.K2_EndBeingConnected // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndActivateSkill(); // Function ProjectBoundary.PBCharacter.K2_EndActivateSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DroppingWeapon(); // Function ProjectBoundary.PBCharacter.K2_DroppingWeapon // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DroppedWeapon(); // Function ProjectBoundary.PBCharacter.K2_DroppedWeapon // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoneMelee(); // Function ProjectBoundary.PBCharacter.K2_DoneMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoneDashMelee(); // Function ProjectBoundary.PBCharacter.K2_DoneDashMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoingNoTargetMelee(); // Function ProjectBoundary.PBCharacter.K2_DoingNoTargetMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoingNoTargetDashMelee(); // Function ProjectBoundary.PBCharacter.K2_DoingNoTargetDashMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoingHasTargetMelee(); // Function ProjectBoundary.PBCharacter.K2_DoingHasTargetMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoingHasTargetDashMelee(); // Function ProjectBoundary.PBCharacter.K2_DoingHasTargetDashMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DeployingWeapon(); // Function ProjectBoundary.PBCharacter.K2_DeployingWeapon // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DeployingRoleSkill(); // Function ProjectBoundary.PBCharacter.K2_DeployingRoleSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DeployingLauncherController(); // Function ProjectBoundary.PBCharacter.K2_DeployingLauncherController // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DeployedWeapon(); // Function ProjectBoundary.PBCharacter.K2_DeployedWeapon // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DeployedRoleSkill(); // Function ProjectBoundary.PBCharacter.K2_DeployedRoleSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DeployedLauncherController(); // Function ProjectBoundary.PBCharacter.K2_DeployedLauncherController // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_CurrentRoleSkillResumeByKeyboard(); // Function ProjectBoundary.PBCharacter.K2_CurrentRoleSkillResumeByKeyboard // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_CancelPreparationOfLaunchHook(); // Function ProjectBoundary.PBCharacter.K2_CancelPreparationOfLaunchHook // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_AutoDisconnection(); // Function ProjectBoundary.PBCharacter.K2_AutoDisconnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_AutoBeDisconnection(); // Function ProjectBoundary.PBCharacter.K2_AutoBeDisconnection // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	bool IsTargeting(); // Function ProjectBoundary.PBCharacter.IsTargeting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163610
	bool IsSteadyTargeting(); // Function ProjectBoundary.PBCharacter.IsSteadyTargeting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163d00
	bool IsSnapping(); // Function ProjectBoundary.PBCharacter.IsSnapping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163cd0
	bool IsRunning(); // Function ProjectBoundary.PBCharacter.IsRunning // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163ca0
	bool IsQuickRespawnEnable(); // Function ProjectBoundary.PBCharacter.IsQuickRespawnEnable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163c70
	bool IsMoveRelatively(); // Function ProjectBoundary.PBCharacter.IsMoveRelatively // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163af0
	bool IsMeleeDashed(); // Function ProjectBoundary.PBCharacter.IsMeleeDashed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163ac0
	bool IsInWeaponState(); // Function ProjectBoundary.PBCharacter.IsInWeaponState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163a90
	bool IsInRoleSkillState(); // Function ProjectBoundary.PBCharacter.IsInRoleSkillState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163a60
	bool IsInNormalRadarSignal(); // Function ProjectBoundary.PBCharacter.IsInNormalRadarSignal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163a30
	bool IsInMeleeState(); // Function ProjectBoundary.PBCharacter.IsInMeleeState // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x1163a00
	bool IsInLauncherControllerState(); // Function ProjectBoundary.PBCharacter.IsInLauncherControllerState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x11639d0
	bool IsInHookUsingState(); // Function ProjectBoundary.PBCharacter.IsInHookUsingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11639a0
	bool IsInEMPStaggerEffect(); // Function ProjectBoundary.PBCharacter.IsInEMPStaggerEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163960
	bool IsInDroppingAndGrabbingWeaponState(); // Function ProjectBoundary.PBCharacter.IsInDroppingAndGrabbingWeaponState // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x1163930
	bool IsFirstPerson(); // Function ProjectBoundary.PBCharacter.IsFirstPerson // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163900
	bool IsFiring(); // Function ProjectBoundary.PBCharacter.IsFiring // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11638d0
	bool IsEnemyForPawn(struct APawn* TestPawn); // Function ProjectBoundary.PBCharacter.IsEnemyForPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163830
	bool IsEMPEffectState(); // Function ProjectBoundary.PBCharacter.IsEMPEffectState // (Final|Native|Public|BlueprintCallable) // @ game+0x11637f0
	bool IsDeployedWeapon(); // Function ProjectBoundary.PBCharacter.IsDeployedWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11637c0
	bool IsDeployedRoleSkill(); // Function ProjectBoundary.PBCharacter.IsDeployedRoleSkill // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163790
	bool IsDeployedLauncherController(); // Function ProjectBoundary.PBCharacter.IsDeployedLauncherController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163760
	bool IsDashed(); // Function ProjectBoundary.PBCharacter.IsDashed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163730
	bool IsCaught(); // Function ProjectBoundary.PBCharacter.IsCaught // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163700
	bool IsCatchedStaticMesh(); // Function ProjectBoundary.PBCharacter.IsCatchedStaticMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11636c0
	bool IsCatchedStatic(); // Function ProjectBoundary.PBCharacter.IsCatchedStatic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163680
	bool IsCatchedDestructibleMesh(); // Function ProjectBoundary.PBCharacter.IsCatchedDestructibleMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163640
	bool IsADS(); // Function ProjectBoundary.PBCharacter.IsADS // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163610
	void InterruptRescue(); // Function ProjectBoundary.PBCharacter.InterruptRescue // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11635f0
	void InterruptFixAirTightnessByMechUAV(); // Function ProjectBoundary.PBCharacter.InterruptFixAirTightnessByMechUAV // (Final|Native|Protected|BlueprintCallable) // @ game+0x11635d0
	void InterruptBeingRescuedByMechUAV(); // Function ProjectBoundary.PBCharacter.InterruptBeingRescuedByMechUAV // (Final|Native|Protected|BlueprintCallable) // @ game+0x11635b0
	void Interact(struct AActor* Target, struct UAnimMontage* SelfAnim, struct UAnimMontage* TargetAnim); // Function ProjectBoundary.PBCharacter.Interact // (Final|Native|Public|BlueprintCallable) // @ game+0x11634a0
	void GrabWeaponSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.GrabWeaponSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1163410
	struct TArray<struct APBWeapon*> GetWeaponArray(); // Function ProjectBoundary.PBCharacter.GetWeaponArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163310
	struct FRotator GetWallAttachRotation(); // Function ProjectBoundary.PBCharacter.GetWallAttachRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11632e0
	struct FVector GetWallAttachPoint(); // Function ProjectBoundary.PBCharacter.GetWallAttachPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11632b0
	float GetTargetingSpeedModifier(); // Function ProjectBoundary.PBCharacter.GetTargetingSpeedModifier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163280
	struct FSurfaceCatching GetSurfaceCatchingConfig(); // Function ProjectBoundary.PBCharacter.GetSurfaceCatchingConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163200
	struct APBPlayerState* GetSaviorPlayerState(); // Function ProjectBoundary.PBCharacter.GetSaviorPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11631e0
	struct FPBRoleNetworkConfig GetRoleConfig(); // Function ProjectBoundary.PBCharacter.GetRoleConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1163080
	struct UPBSkeletalMeshComponent* GetRightHand(); // Function ProjectBoundary.PBCharacter.GetRightHand // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163060
	float GetRescueOtherPercent(); // Function ProjectBoundary.PBCharacter.GetRescueOtherPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163030
	float GetRescueOtherEscapeTime(); // Function ProjectBoundary.PBCharacter.GetRescueOtherEscapeTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163000
	float GetOutOfWorldurviveTime(); // Function ProjectBoundary.PBCharacter.GetOutOfWorldurviveTime // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1162fe0
	float GetOutOfWorldRemainingTime(); // Function ProjectBoundary.PBCharacter.GetOutOfWorldRemainingTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162fb0
	struct FString GetNetRoleName(); // Function ProjectBoundary.PBCharacter.GetNetRoleName // (Final|Native|Public|BlueprintCallable) // @ game+0x1162e50
	float GetNetMass(); // Function ProjectBoundary.PBCharacter.GetNetMass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162e20
	struct FVector GetMuzzleFlashLocation(struct FName MuzzleAttachPoint); // Function ProjectBoundary.PBCharacter.GetMuzzleFlashLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162d70
	struct FVector GetMovementInput(); // Function ProjectBoundary.PBCharacter.GetMovementInput // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1162d40
	struct USkeletalMeshComponent* GetMesh3P(); // Function ProjectBoundary.PBCharacter.GetMesh3P // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162d20
	struct APBCharacter* GetMedic(); // Function ProjectBoundary.PBCharacter.GetMedic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162d00
	float GetMaxAirTightness(); // Function ProjectBoundary.PBCharacter.GetMaxAirTightness // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162cb0
	float GetMaxAirPressure(); // Function ProjectBoundary.PBCharacter.GetMaxAirPressure // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162c60
	struct UPBSkeletalMeshComponent* GetLeftHand(); // Function ProjectBoundary.PBCharacter.GetLeftHand // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162c40
	bool GetIsStunned(); // Function ProjectBoundary.PBCharacter.GetIsStunned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162c00
	bool GetIsOnHidden(); // Function ProjectBoundary.PBCharacter.GetIsOnHidden // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162bd0
	bool GetIsLocalControlledBeforeDie(); // Function ProjectBoundary.PBCharacter.GetIsLocalControlledBeforeDie // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1162ba0
	bool GetIsLeftHandExceed(); // Function ProjectBoundary.PBCharacter.GetIsLeftHandExceed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162b70
	bool GetIsInSmokeObscuringZone(); // Function ProjectBoundary.PBCharacter.GetIsInSmokeObscuringZone // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162b40
	bool GetIsGrabbing(); // Function ProjectBoundary.PBCharacter.GetIsGrabbing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162b00
	bool GetIsCrouched(); // Function ProjectBoundary.PBCharacter.GetIsCrouched // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162ad0
	bool GetIsCatchSurface(); // Function ProjectBoundary.PBCharacter.GetIsCatchSurface // (Final|Native|Public|BlueprintCallable) // @ game+0x1162aa0
	bool GetIsAutoCatchSurface(); // Function ProjectBoundary.PBCharacter.GetIsAutoCatchSurface // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1162a70
	bool GetIsAllowedCatch(); // Function ProjectBoundary.PBCharacter.GetIsAllowedCatch // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162a40
	struct UAnimSequenceBase* GetIdleAnim(); // Function ProjectBoundary.PBCharacter.GetIdleAnim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162a20
	bool GetHasCatchingCooledDown(); // Function ProjectBoundary.PBCharacter.GetHasCatchingCooledDown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162980
	float GetFixAirTightnessProcess(); // Function ProjectBoundary.PBCharacter.GetFixAirTightnessProcess // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162960
	float GetEnableQuickRespawnRemainTime(); // Function ProjectBoundary.PBCharacter.GetEnableQuickRespawnRemainTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162930
	float GetEnableQuickRespawnPercent(); // Function ProjectBoundary.PBCharacter.GetEnableQuickRespawnPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162900
	struct FEMPToleranceConfig GetEMPToleranceConfig(); // Function ProjectBoundary.PBCharacter.GetEMPToleranceConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11628b0
	float GetDistanceToFloorRotateCache(); // Function ProjectBoundary.PBCharacter.GetDistanceToFloorRotateCache // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162890
	float GetDistanceToFloorCache(); // Function ProjectBoundary.PBCharacter.GetDistanceToFloorCache // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162870
	float GetDisconnectingRemainingTime(); // Function ProjectBoundary.PBCharacter.GetDisconnectingRemainingTime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162840
	float GetDisconnectingPercent(); // Function ProjectBoundary.PBCharacter.GetDisconnectingPercent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162810
	enum class EPBDashState GetDashCurrentState(); // Function ProjectBoundary.PBCharacter.GetDashCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11627f0
	struct APBWeapon* GetCurrentWeapon(); // Function ProjectBoundary.PBCharacter.GetCurrentWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11627d0
	struct APBVehicle* GetCurrentVehicle(); // Function ProjectBoundary.PBCharacter.GetCurrentVehicle // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11627b0
	enum class ESurfaceCatchingStatus GetCurrentSurfaceCatchingStatus(); // Function ProjectBoundary.PBCharacter.GetCurrentSurfaceCatchingStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162790
	float GetCurrentStunEnduracePercentage(); // Function ProjectBoundary.PBCharacter.GetCurrentStunEnduracePercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162750
	float GetCurrentStunEndurace(); // Function ProjectBoundary.PBCharacter.GetCurrentStunEndurace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162710
	float GetCurrentReplenishPercentage(); // Function ProjectBoundary.PBCharacter.GetCurrentReplenishPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11626e0
	struct APBMobilityModule* GetCurrentMobilityModule(); // Function ProjectBoundary.PBCharacter.GetCurrentMobilityModule // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11626c0
	float GetCurrentEMPTolerance(); // Function ProjectBoundary.PBCharacter.GetCurrentEMPTolerance // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1162680
	enum class ECharacterStatus GetCurrentCharacterStatus(); // Function ProjectBoundary.PBCharacter.GetCurrentCharacterStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1162660
	float GetConnectingRemainingTime(); // Function ProjectBoundary.PBCharacter.GetConnectingRemainingTime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x11625b0
	float GetConnectingPercent(); // Function ProjectBoundary.PBCharacter.GetConnectingPercent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162580
	float GetBeingRescuedPercent(); // Function ProjectBoundary.PBCharacter.GetBeingRescuedPercent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162550
	float GetBeingRescuedEscapeTime(); // Function ProjectBoundary.PBCharacter.GetBeingRescuedEscapeTime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162520
	struct FVector GetAxisInputToController(); // Function ProjectBoundary.PBCharacter.GetAxisInputToController // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x11624f0
	struct FVector GetAxisInput(); // Function ProjectBoundary.PBCharacter.GetAxisInput // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x11624c0
	struct FHitResult GetAnimHitResult(); // Function ProjectBoundary.PBCharacter.GetAnimHitResult // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162400
	float GetAirTightnessPercentage(); // Function ProjectBoundary.PBCharacter.GetAirTightnessPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11623b0
	float GetAirTightness(); // Function ProjectBoundary.PBCharacter.GetAirTightness // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162370
	float GetAirPressurePercentage(); // Function ProjectBoundary.PBCharacter.GetAirPressurePercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162320
	float GetAirPressure(); // Function ProjectBoundary.PBCharacter.GetAirPressure // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11622e0
	float GetAimingRatio(); // Function ProjectBoundary.PBCharacter.GetAimingRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11622b0
	struct UAnimSequenceBase* GetAimingAnim(); // Function ProjectBoundary.PBCharacter.GetAimingAnim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162290
	struct UAnimSequenceBase* Get3PJetLoopAnim(); // Function ProjectBoundary.PBCharacter.Get3PJetLoopAnim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162270
	struct UAnimSequenceBase* Get3PJetEnterAnim(); // Function ProjectBoundary.PBCharacter.Get3PJetEnterAnim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162250
	struct UAnimSequenceBase* Get3PJetEndAnim(); // Function ProjectBoundary.PBCharacter.Get3PJetEndAnim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162250
	struct UAnimSequenceBase* Get3PADSIdleAnim(); // Function ProjectBoundary.PBCharacter.Get3PADSIdleAnim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162230
	struct UAnimSequenceBase* Get1PJetLoopAnim(); // Function ProjectBoundary.PBCharacter.Get1PJetLoopAnim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162210
	struct UAnimSequenceBase* Get1PJetEnterAnim(); // Function ProjectBoundary.PBCharacter.Get1PJetEnterAnim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11621f0
	struct UAnimSequenceBase* Get1PJetEndAnim(); // Function ProjectBoundary.PBCharacter.Get1PJetEndAnim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11621d0
	struct UAnimSequenceBase* Get1PADSIdleAnim(); // Function ProjectBoundary.PBCharacter.Get1PADSIdleAnim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11621b0
	void ForceZeroHealth(); // Function ProjectBoundary.PBCharacter.ForceZeroHealth // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1162190
	void ForceDisable(); // Function ProjectBoundary.PBCharacter.ForceDisable // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1162170
	void ForceDie(); // Function ProjectBoundary.PBCharacter.ForceDie // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1162150
	void FixAirTightnessSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.FixAirTightnessSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x11620c0
	void FireSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.FireSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1162030
	void FinishFixAirTightness(); // Function ProjectBoundary.PBCharacter.FinishFixAirTightness // (Final|Native|Protected|BlueprintCallable) // @ game+0x1162010
	struct APBWeapon* FindBestPickupWeapon(); // Function ProjectBoundary.PBCharacter.FindBestPickupWeapon // (Final|Native|Protected|BlueprintCallable) // @ game+0x1161fe0
	void FastMoveSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.FastMoveSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1161f50
	void EquipPendingWeapon(struct APBWeapon* NewWeapon); // Function ProjectBoundary.PBCharacter.EquipPendingWeapon // (Final|Native|Protected|BlueprintCallable) // @ game+0x1161ec0
	void EndBeingRescued(); // Function ProjectBoundary.PBCharacter.EndBeingRescued // (Final|Native|Protected|BlueprintCallable) // @ game+0x1161ea0
	bool EnableSurfaceCatching(); // Function ProjectBoundary.PBCharacter.EnableSurfaceCatching // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1161e70
	void EnableQuickRespawn(); // Function ProjectBoundary.PBCharacter.EnableQuickRespawn // (Final|Native|Protected) // @ game+0x1161e50
	void EMPStaggerEffectOn(); // Function ProjectBoundary.PBCharacter.EMPStaggerEffectOn // (Native|Event|Protected|BlueprintEvent) // @ game+0x1161e30
	void EMPStaggerEffectOff(); // Function ProjectBoundary.PBCharacter.EMPStaggerEffectOff // (Native|Event|Protected|BlueprintEvent) // @ game+0x1161e10
	void EMPHUDEffectOn(); // Function ProjectBoundary.PBCharacter.EMPHUDEffectOn // (Native|Event|Protected|BlueprintEvent) // @ game+0x1161df0
	void EMPHUDEffectOff(); // Function ProjectBoundary.PBCharacter.EMPHUDEffectOff // (Native|Event|Protected|BlueprintEvent) // @ game+0x1161dd0
	bool DashHasCooledDown(); // Function ProjectBoundary.PBCharacter.DashHasCooledDown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1161da0
	void ClientStartMoveRelatively(); // Function ProjectBoundary.PBCharacter.ClientStartMoveRelatively // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1161d80
	void ClientSetRenderDepth(bool bIsSet); // Function ProjectBoundary.PBCharacter.ClientSetRenderDepth // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1161cf0
	void ClientInterruptSkill(); // Function ProjectBoundary.PBCharacter.ClientInterruptSkill // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1161cd0
	void ClientInterruptRescueOther(); // Function ProjectBoundary.PBCharacter.ClientInterruptRescueOther // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1161cb0
	void ClientInterruptFixAirTightnessByMechUAV(); // Function ProjectBoundary.PBCharacter.ClientInterruptFixAirTightnessByMechUAV // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1161c90
	void ClientInterruptDisconnection(); // Function ProjectBoundary.PBCharacter.ClientInterruptDisconnection // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1161c70
	void ClientInterruptConnection(); // Function ProjectBoundary.PBCharacter.ClientInterruptConnection // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1161c50
	void ClientBeHit(float DamageTaken, struct FDamageEvent DamageEvent, struct APawn* PawnInstigator, enum class EPBHitZone HitZone); // Function ProjectBoundary.PBCharacter.ClientBeHit // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1161ad0
	bool CheckIfEnemyNearby(float NearbyEnemyCheckDistace); // Function ProjectBoundary.PBCharacter.CheckIfEnemyNearby // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x1161a40
	void CharacterRollSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.CharacterRollSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x11619b0
	void CatchSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.CatchSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1161850
	bool CanRoll(); // Function ProjectBoundary.PBCharacter.CanRoll // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11616f0
	bool CanDash(); // Function ProjectBoundary.PBCharacter.CanDash // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11616c0
	void CancelInteract(struct AActor* Target, struct UAnimMontage* SelfAnim, struct UAnimMontage* TargetAnim); // Function ProjectBoundary.PBCharacter.CancelInteract // (Final|Native|Public|BlueprintCallable) // @ game+0x1161740
	void CancelEquipPendingWeapon(); // Function ProjectBoundary.PBCharacter.CancelEquipPendingWeapon // (Final|Native|Protected|BlueprintCallable) // @ game+0x1161720
	void AutoCatchSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.AutoCatchSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1161630
	bool AllowRescueOther(); // Function ProjectBoundary.PBCharacter.AllowRescueOther // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1161600
	bool AllowQuickRespawn(); // Function ProjectBoundary.PBCharacter.AllowQuickRespawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11615d0
	bool AllowObserveOthers(); // Function ProjectBoundary.PBCharacter.AllowObserveOthers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11615a0
	void AimingSwitch(bool bEnable); // Function ProjectBoundary.PBCharacter.AimingSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1161510
	void AddWeapon(struct APBWeapon* Weapon); // Function ProjectBoundary.PBCharacter.AddWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x1161480
	void AddMaxAirPressure(float InAirPressureModifier); // Function ProjectBoundary.PBCharacter.AddMaxAirPressure // (Final|Native|Public|BlueprintCallable) // @ game+0x11613f0
	void AddAirPressure(float InDelta); // Function ProjectBoundary.PBCharacter.AddAirPressure // (Final|Native|Public|BlueprintCallable) // @ game+0x1161360
};

// Class ProjectBoundary.PBBot
// Size: 0x2550 (Inherited: 0x23a0)
struct APBBot : APBCharacter {
	struct UBehaviorTree* BotBehavior; // 0x2398(0x08)
	enum class EPBAIMotionStatus AIMotionStatus; // 0x23a0(0x01)
	enum class EPBAIShootingStatus AIShootingStatus; // 0x23a1(0x01)
	struct FPBRoleNetworkConfig RoleConfig; // 0x23a8(0x140)
	float sightFOV; // 0x24e8(0x04)
	float TurnSpeed; // 0x24ec(0x04)
	float VisionDistance; // 0x24f0(0x04)
	struct FVector InitialMoveGoal; // 0x24f4(0x0c)
	float MinShootingDistance; // 0x2500(0x04)
	float MaxShootingDistance; // 0x2504(0x04)
	float PatrolRadius; // 0x2508(0x04)
	float HuntingDistance; // 0x250c(0x04)
	float MovementSpeedWhenShooting; // 0x2510(0x04)
	float PathAbortionDistance; // 0x2514(0x04)
	char pad_251A[0x36]; // 0x251a(0x36)

	void OnEnemyFound(); // Function ProjectBoundary.PBBot.OnEnemyFound // (Final|Native|Public|BlueprintCallable) // @ game+0x1153e50
	void NotifyStartStreamLvl(); // Function ProjectBoundary.PBBot.NotifyStartStreamLvl // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	bool IsFlightLocationWithinNavigableWorld(struct FVector Location); // Function ProjectBoundary.PBBot.IsFlightLocationWithinNavigableWorld // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1153b50
	float GetVisionDistance(); // Function ProjectBoundary.PBBot.GetVisionDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x1153ad0
	float GetSightFOV(); // Function ProjectBoundary.PBBot.GetSightFOV // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1153a80
	bool CanNavigate(struct FVector Location); // Function ProjectBoundary.PBBot.CanNavigate // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1153660
};

// Class ProjectBoundary.PBMobilityModule
// Size: 0x250 (Inherited: 0x220)
struct APBMobilityModule : AActor {
	struct APBCharacter* OwnerCharacter; // 0x220(0x08)
	char bIsEnabled : 1; // 0x228(0x01)
	char pad_228_1 : 7; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	float KeyPressResponseInterval; // 0x22c(0x04)
	float KeyReleaseResponseInterval; // 0x230(0x04)
	char pad_234[0x1c]; // 0x234(0x1c)

	void K2_OwnerBeHitDown(); // Function ProjectBoundary.PBMobilityModule.K2_OwnerBeHitDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Enable(); // Function ProjectBoundary.PBMobilityModule.K2_Enable // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Disable(); // Function ProjectBoundary.PBMobilityModule.K2_Disable // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBBrakingModule
// Size: 0x278 (Inherited: 0x250)
struct APBBrakingModule : APBMobilityModule {
	int32_t BrakingActivatedCounter; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct FPBBrakingModuleConfig Config; // 0x258(0x10)
	struct UPBBrakingModuleWidget* UIClass; // 0x268(0x08)
	struct UPBBrakingModuleWidget* PanelWidget; // 0x270(0x08)

	void ServerDeactivateBraking(); // Function ProjectBoundary.PBBrakingModule.ServerDeactivateBraking // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11540f0
	void ServerActivateBraking(); // Function ProjectBoundary.PBBrakingModule.ServerActivateBraking // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11540a0
	void K2_DeactivateBraking(); // Function ProjectBoundary.PBBrakingModule.K2_DeactivateBraking // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ActivateBraking(); // Function ProjectBoundary.PBBrakingModule.K2_ActivateBraking // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBBrakingModuleWidget
// Size: 0x268 (Inherited: 0x260)
struct UPBBrakingModuleWidget : UUserWidget {
	struct APBBrakingModule* OwningBrakingModule; // 0x260(0x08)

	void K2_Equiped(); // Function ProjectBoundary.PBBrakingModuleWidget.K2_Equiped // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Enable(); // Function ProjectBoundary.PBBrakingModuleWidget.K2_Enable // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Disable(); // Function ProjectBoundary.PBBrakingModuleWidget.K2_Disable // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deactivate(); // Function ProjectBoundary.PBBrakingModuleWidget.K2_Deactivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Activate(); // Function ProjectBoundary.PBBrakingModuleWidget.K2_Activate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBButton
// Size: 0x430 (Inherited: 0x428)
struct UPBButton : UButton {
	bool HandleDefaultInput; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)

	void SetHandleDefaultInput(bool Val); // Function ProjectBoundary.PBButton.SetHandleDefaultInput // (Final|Native|Public|BlueprintCallable) // @ game+0x11542c0
};

// Class ProjectBoundary.PBCapturableZone
// Size: 0x250 (Inherited: 0x230)
struct APBCapturableZone : AStaticMeshActor {
	struct UPBMarkableComponent_Domination* Markable; // 0x230(0x08)
	struct TArray<struct APBPlayerState*> PBPlayerStateArray; // 0x238(0x10)
	char ZoneID; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)

	bool IsPlayerIn(struct APBPlayerState* PlayerState); // Function ProjectBoundary.PBCapturableZone.IsPlayerIn // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163b30
	char GetZoneID(); // Function ProjectBoundary.PBCapturableZone.GetZoneID // (Final|Native|Public|BlueprintCallable) // @ game+0x11633d0
};

// Class ProjectBoundary.PBCapturableZone_Domination
// Size: 0x270 (Inherited: 0x250)
struct APBCapturableZone_Domination : APBCapturableZone {
	float TimeCount; // 0x250(0x04)
	float OccupationPoint; // 0x254(0x04)
	int32_t OccupyingTeamNum; // 0x258(0x04)
	int32_t OccupationTeamNum; // 0x25c(0x04)
	char pad_260[0x4]; // 0x260(0x04)
	int32_t Contested; // 0x264(0x04)
	char pad_268[0x8]; // 0x268(0x08)

	void NotifyResetInfo(); // Function ProjectBoundary.PBCapturableZone_Domination.NotifyResetInfo // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	int32_t GetOccupyingTeamNum(); // Function ProjectBoundary.PBCapturableZone_Domination.GetOccupyingTeamNum // (Final|Native|Public|BlueprintCallable) // @ game+0x1162f90
	int32_t GetOccupationTeamNum(); // Function ProjectBoundary.PBCapturableZone_Domination.GetOccupationTeamNum // (Final|Native|Public|BlueprintCallable) // @ game+0x1162f30
	float GetOccupationPoint(); // Function ProjectBoundary.PBCapturableZone_Domination.GetOccupationPoint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162ef0
	bool GetContested(); // Function ProjectBoundary.PBCapturableZone_Domination.GetContested // (Final|Native|Public|BlueprintCallable) // @ game+0x1162600
};

// Class ProjectBoundary.PBCapturableZone_Elimination
// Size: 0x250 (Inherited: 0x250)
struct APBCapturableZone_Elimination : APBCapturableZone {
};

// Class ProjectBoundary.PBCapturableZone_KOH
// Size: 0x278 (Inherited: 0x250)
struct APBCapturableZone_KOH : APBCapturableZone {
	char ShowZone : 1; // 0x250(0x01)
	char pad_250_1 : 7; // 0x250(0x01)
	char pad_251[0x27]; // 0x251(0x27)
};

// Class ProjectBoundary.PBCapturableZoneTrigger
// Size: 0x240 (Inherited: 0x230)
struct APBCapturableZoneTrigger : AStaticMeshActor {
	char ZoneID; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct APBCapturableZone* PBCapturableZoneptr; // 0x238(0x08)
};

// Class ProjectBoundary.PBCapturableZoneTrigger_KOH
// Size: 0x240 (Inherited: 0x230)
struct APBCapturableZoneTrigger_KOH : AStaticMeshActor {
	char ZoneID; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct APBCapturableZone_KOH* ShowGroupZonePtr; // 0x238(0x08)
};

// Class ProjectBoundary.PBCapturableZoneV2
// Size: 0x2b8 (Inherited: 0x230)
struct APBCapturableZoneV2 : AStaticMeshActor {
	struct UPBMarkableComponent_Domination* Markable; // 0x230(0x08)
	struct UStaticMeshComponent* CollisionStaticMesh; // 0x238(0x08)
	struct TArray<struct APBPlayerState*> PBPlayerStateArray; // 0x240(0x10)
	bool bIsActive; // 0x250(0x01)
	char pad_251[0x1]; // 0x251(0x01)
	char ZoneID; // 0x252(0x01)
	char pad_253[0x5]; // 0x253(0x05)
	struct FString ZoneName; // 0x258(0x10)
	float TimeCount; // 0x268(0x04)
	enum class EPBZoneStatus ZoneStatus; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	float OccupationPoint; // 0x270(0x04)
	int32_t OccupyingTeamNum; // 0x274(0x04)
	int32_t OccupationTeamNum; // 0x278(0x04)
	bool bContested; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	float OccupationTimeChangeValue; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	float OccupationCompletionPoint; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct TArray<float> OccupationPointIncreaseValue; // 0x290(0x10)
	float OccupationTimeReduceValue; // 0x2a0(0x04)
	float DelayIncreaseScoreTime; // 0x2a4(0x04)
	bool bShouldResetOccupationPoint; // 0x2a8(0x01)
	bool bDoesOccupationPlayerNumChangeOccupationSpeed; // 0x2a9(0x01)
	char pad_2AA[0xe]; // 0x2aa(0x0e)

	void ResetInfo(); // Function ProjectBoundary.PBCapturableZoneV2.ResetInfo // (Final|Native|Protected) // @ game+0x1165430
	void PlayerLeave(struct APBPlayerState* PlayerState); // Function ProjectBoundary.PBCapturableZoneV2.PlayerLeave // (Final|Native|Protected) // @ game+0x1164fc0
	void OnCollisionComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectBoundary.PBCapturableZoneV2.OnCollisionComponentEndOverlap // (Final|Native|Protected) // @ game+0x11648e0
	void OnCollisionComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ProjectBoundary.PBCapturableZoneV2.OnCollisionComponentBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x11646d0
	bool IsPlayerIn(struct APBPlayerState* PlayerState); // Function ProjectBoundary.PBCapturableZoneV2.IsPlayerIn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1163bd0
	enum class EPBZoneStatus GetZoneStatus(); // Function ProjectBoundary.PBCapturableZoneV2.GetZoneStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11633f0
	int32_t GetOccupyingTeamNum(); // Function ProjectBoundary.PBCapturableZoneV2.GetOccupyingTeamNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162f70
	float GetOccupationTimeChangeValue(); // Function ProjectBoundary.PBCapturableZoneV2.GetOccupationTimeChangeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162f50
	int32_t GetOccupationTeamNum(); // Function ProjectBoundary.PBCapturableZoneV2.GetOccupationTeamNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162f10
	float GetOccupationPoint(); // Function ProjectBoundary.PBCapturableZoneV2.GetOccupationPoint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162ed0
	bool GetContested(); // Function ProjectBoundary.PBCapturableZoneV2.GetContested // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11625e0
	void ActiveCapturableZone(bool bNewIsActive); // Function ProjectBoundary.PBCapturableZoneV2.ActiveCapturableZone // (Final|Native|Protected) // @ game+0x11612d0
};

// Class ProjectBoundary.PBCarouselButtonInterface
// Size: 0x28 (Inherited: 0x28)
struct UPBCarouselButtonInterface : UInterface {

	void SetCarouselPanel(struct UPBCarouselPanelWidget* InCarouselPanelWidget); // Function ProjectBoundary.PBCarouselButtonInterface.SetCarouselPanel // (Native|Event|Protected|BlueprintEvent) // @ game+0x1166b40
	void OnUnselectButton(); // Function ProjectBoundary.PBCarouselButtonInterface.OnUnselectButton // (Native|Event|Protected|BlueprintEvent) // @ game+0x1164ef0
	void OnSelectButton(); // Function ProjectBoundary.PBCarouselButtonInterface.OnSelectButton // (Native|Event|Protected|BlueprintEvent) // @ game+0x1164e30
};

// Class ProjectBoundary.PBCarouselPanelWidget
// Size: 0x178 (Inherited: 0x130)
struct UPBCarouselPanelWidget : UCanvasPanel {
	bool bAnimateScroll; // 0x130(0x01)
	enum class EDescendantScrollDestination InScrollDestination; // 0x131(0x01)
	char pad_132[0x6]; // 0x132(0x06)
	struct TArray<struct UWidget*> CarouselItemArr; // 0x138(0x10)
	struct TArray<struct UWidget*> CarouselButtonArr; // 0x148(0x10)
	struct UScrollBox* ScrollBox; // 0x158(0x08)
	int32_t CurrentItemIndex; // 0x160(0x04)
	int32_t CurrentButtonIndex; // 0x164(0x04)
	bool bAutoScroll; // 0x168(0x01)
	bool bReverse; // 0x169(0x01)
	char pad_16A[0x2]; // 0x16a(0x02)
	float TimeInterval; // 0x16c(0x04)
	char pad_170[0x8]; // 0x170(0x08)

	void SetAutoScroll(bool bInAutoScroll, bool bInReverse, float InTimeInterval); // Function ProjectBoundary.PBCarouselPanelWidget.SetAutoScroll // (Final|Native|Public|BlueprintCallable) // @ game+0x1166a10
	bool SelectItemByIndex(int32_t Index); // Function ProjectBoundary.PBCarouselPanelWidget.SelectItemByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x1165610
	bool SelectItemByButton(struct UWidget* InCurrentButton); // Function ProjectBoundary.PBCarouselPanelWidget.SelectItemByButton // (Final|Native|Public|BlueprintCallable) // @ game+0x1165570
	void Next(bool bReverseScroll); // Function ProjectBoundary.PBCarouselPanelWidget.Next // (Final|Native|Public|BlueprintCallable) // @ game+0x1164590
};

// Class ProjectBoundary.PBCatchingModule
// Size: 0x488 (Inherited: 0x250)
struct APBCatchingModule : APBMobilityModule {
	struct USceneComponent* TransformComponent; // 0x250(0x08)
	struct USkeletalMeshComponent* Launcher1P; // 0x258(0x08)
	struct USkeletalMeshComponent* Launcher3P; // 0x260(0x08)
	struct UCableComponent* Cable1P; // 0x268(0x08)
	struct UCableComponent* Cable3P; // 0x270(0x08)
	char pad_278[0x4]; // 0x278(0x04)
	struct FPBCatchingConfig DataConfig; // 0x27c(0x2c)
	struct FPBCaughtData CurrentHookLockData; // 0x2a8(0x30)
	struct FName AttachSocketName; // 0x2d8(0x08)
	enum class EPBHookStatus CurrentHookStatus; // 0x2e0(0x01)
	char bIsInCoolDown : 1; // 0x2e1(0x01)
	char pad_2E1_1 : 7; // 0x2e1(0x01)
	char pad_2E2[0xe]; // 0x2e2(0x0e)
	struct FVector EndLocation; // 0x2f0(0x0c)
	char pad_2FC[0xac]; // 0x2fc(0xac)
	struct UPBCatchingModuleWidget* UIClass; // 0x3a8(0x08)
	struct UPBCatchingModuleWidget* PanelWidget; // 0x3b0(0x08)
	struct UPBCatchingModuleWidget* CatchableHintWidgetClass; // 0x3b8(0x08)
	struct UPBCatchingModuleWidget* CatchableHintWidget; // 0x3c0(0x08)
	char pad_3C8[0xc0]; // 0x3c8(0xc0)

	bool ShouldShowHint(); // Function ProjectBoundary.PBCatchingModule.ShouldShowHint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1166ce0
	void ServerUnlockHook(); // Function ProjectBoundary.PBCatchingModule.ServerUnlockHook // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1166930
	void ServerRecycleHook(); // Function ProjectBoundary.PBCatchingModule.ServerRecycleHook // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11660e0
	void ServerPrepareToLaunchHook(); // Function ProjectBoundary.PBCatchingModule.ServerPrepareToLaunchHook // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165ff0
	void ServerLaunchHook(struct FPBCaughtData InData); // Function ProjectBoundary.PBCatchingModule.ServerLaunchHook // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165de0
	void ServerCancelPreparationOfLaunchHook(); // Function ProjectBoundary.PBCatchingModule.ServerCancelPreparationOfLaunchHook // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1165890
	void OnRep_CurrentHookLockData(); // Function ProjectBoundary.PBCatchingModule.OnRep_CurrentHookLockData // (Final|Native|Protected) // @ game+0x1164b60
	void K2_RaiseingHand(); // Function ProjectBoundary.PBCatchingModule.K2_RaiseingHand // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_HookReset(); // Function ProjectBoundary.PBCatchingModule.K2_HookReset // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_HookRecycling(); // Function ProjectBoundary.PBCatchingModule.K2_HookRecycling // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_HookLocked(); // Function ProjectBoundary.PBCatchingModule.K2_HookLocked // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_HookLaunching(); // Function ProjectBoundary.PBCatchingModule.K2_HookLaunching // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	struct FVector2D GetHintPosition(); // Function ProjectBoundary.PBCatchingModule.GetHintPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11629b0
	float GetCoolingDownPercent(); // Function ProjectBoundary.PBCatchingModule.GetCoolingDownPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1162630
	void ClientConfirmLaunchHook(); // Function ProjectBoundary.PBCatchingModule.ClientConfirmLaunchHook // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1161c30
};

// Class ProjectBoundary.PBCatchingModuleWidget
// Size: 0x268 (Inherited: 0x260)
struct UPBCatchingModuleWidget : UUserWidget {
	struct APBCatchingModule* OwningCatchingModule; // 0x260(0x08)

	void K2_Equiped(); // Function ProjectBoundary.PBCatchingModuleWidget.K2_Equiped // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndCoolDown(); // Function ProjectBoundary.PBCatchingModuleWidget.K2_EndCoolDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deactivate(); // Function ProjectBoundary.PBCatchingModuleWidget.K2_Deactivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Activate(); // Function ProjectBoundary.PBCatchingModuleWidget.K2_Activate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBChallengeState
// Size: 0x230 (Inherited: 0x220)
struct APBChallengeState : AActor {
	char pad_220[0x10]; // 0x220(0x10)

	void NotifyStunEndurancePercentageToPlayerState(struct APBPlayerState* InPlayerState, float CurrentStunEndurancePercentage); // Function ProjectBoundary.PBChallengeState.NotifyStunEndurancePercentageToPlayerState // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyRoundEndResult(struct FName GameModeName, enum class EPBGameResult GameResult); // Function ProjectBoundary.PBChallengeState.NotifyRoundEndResult // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOccupationZone(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBChallengeState.NotifyOccupationZone // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyMedalsInfoStatToPlayerState(struct APBPlayerState* InPlayerState, struct TArray<struct FMedalsInfoStat> MedalsInfoArray); // Function ProjectBoundary.PBChallengeState.NotifyMedalsInfoStatToPlayerState // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void NotifyMedalsInfoStat(struct TArray<struct FMedalsInfoStat> MedalsInfoArray); // Function ProjectBoundary.PBChallengeState.NotifyMedalsInfoStat // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void NotifyKillInfoEx(struct APBPlayerState* InPlayerState, struct FName ItemId, enum class EPBHitZone HitZone, struct FName GameModeName, float KillDistance); // Function ProjectBoundary.PBChallengeState.NotifyKillInfoEx // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyGameResultToPlayerState(struct APBPlayerState* InPlayerState, struct FName GameModeName, enum class EPBGameResult GameResult); // Function ProjectBoundary.PBChallengeState.NotifyGameResultToPlayerState // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyGameResult(struct FName GameModeName, enum class EPBGameResult GameResult); // Function ProjectBoundary.PBChallengeState.NotifyGameResult // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyGameRanking(struct APBPlayerState* InPlayerState, int32_t RankNum); // Function ProjectBoundary.PBChallengeState.NotifyGameRanking // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEXPChange(); // Function ProjectBoundary.PBChallengeState.NotifyEXPChange // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEMPStateToPlayerState(struct APBPlayerState* InPlayerState, enum class EEMPEffectStatus CurrentEMPEffectStatus); // Function ProjectBoundary.PBChallengeState.NotifyEMPStateToPlayerState // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyCurrentRoleID(struct FName ItemId); // Function ProjectBoundary.PBChallengeState.NotifyCurrentRoleID // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyCheckChallengeStatus(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBChallengeState.NotifyCheckChallengeStatus // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyCauseDamage(struct APBPlayerState* InPlayerState, float InDamageValue); // Function ProjectBoundary.PBChallengeState.NotifyCauseDamage // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	struct FString GetID(); // Function ProjectBoundary.PBChallengeState.GetID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11629e0
	void ChallengeCompleted(struct APBPlayerState* InPlayerState, enum class EPBChallengeType ChallengeType); // Function ProjectBoundary.PBChallengeState.ChallengeCompleted // (Final|Native|Public|BlueprintCallable) // @ game+0x11618e0
};

// Class ProjectBoundary.PBChallengeWidget
// Size: 0x2c0 (Inherited: 0x268)
struct UPBChallengeWidget : UPBUserWidget {
	struct FPBChallenge_UI ChallengeUI; // 0x268(0x58)

	void RefreshChallenge(struct FName InChallengeName); // Function ProjectBoundary.PBChallengeWidget.RefreshChallenge // (Final|Native|Protected) // @ game+0x1165090
	void K2_RefreshChallenge(); // Function ProjectBoundary.PBChallengeWidget.K2_RefreshChallenge // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBCharacterAnimInstance_FP
// Size: 0x4d0 (Inherited: 0x2c0)
struct UPBCharacterAnimInstance_FP : UAnimInstance {
	struct FVector AttachPoint; // 0x2b8(0x0c)
	float DisToWallTime_AfterInterp; // 0x2c4(0x04)
	struct FVector InterpedAttachPoint; // 0x2c8(0x0c)
	bool bIsOnWallHandsUp; // 0x2d4(0x01)
	struct FVector FrontSightComponentSpace; // 0x2d8(0x0c)
	struct UAnimSequenceBase* SkillAnim; // 0x2e8(0x08)
	struct UAnimSequenceBase* AimingAnim; // 0x2f0(0x08)
	struct UAnimSequenceBase* IdleAnim; // 0x2f8(0x08)
	struct UAnimSequenceBase* ReloadingAimingPose; // 0x300(0x08)
	struct APBCharacter* OwningCharacter; // 0x308(0x08)
	float ADSRate; // 0x310(0x04)
	enum class EPBHandsState OwnerCurrentHandState; // 0x314(0x01)
	bool bIsOwnerADS; // 0x315(0x01)
	char pad_317[0x1]; // 0x317(0x01)
	struct APBWeapon_RayProjectile* CurrentWeapon; // 0x318(0x08)
	bool bCanAimingReloading; // 0x320(0x01)
	bool bShouldAttach; // 0x321(0x01)
	enum class EPBWeaponState CurrentWeaponState; // 0x322(0x01)
	bool bIsMelee; // 0x323(0x01)
	struct FVector DefaultSightOffset; // 0x324(0x0c)
	struct FRotator DefaultWeaponRotation; // 0x330(0x0c)
	struct FVector WeaponAimOffset; // 0x33c(0x0c)
	struct FVector DefaultWeaponAimOffset; // 0x348(0x0c)
	struct FVector WeaponWalkSwayOffset; // 0x354(0x0c)
	struct FRotator WeaponLookSwayRotator; // 0x360(0x0c)
	struct FRotator WeaponLookSwayRotator_ADS_Final; // 0x36c(0x0c)
	struct FRotator BreathOffsetRotator; // 0x378(0x0c)
	struct FVector BreathOffsetVector; // 0x384(0x0c)
	struct FVector FireRecoilOffsetVector; // 0x390(0x0c)
	struct FRotator FireRecoilOffsetRotation; // 0x39c(0x0c)
	struct UCurveFloat* AimingRateChangeCurve; // 0x3a8(0x08)
	float WalkSwayIntensity; // 0x3b0(0x04)
	float LookSwayIntensity; // 0x3b4(0x04)
	float MaxMouseDelta; // 0x3b8(0x04)
	float AimWalkSwayInterpSpeed; // 0x3bc(0x04)
	float AimLookSwayInterpSpeed; // 0x3c0(0x04)
	float AimWalkSwayScale; // 0x3c4(0x04)
	float AimLookSwayMaxAngleScale; // 0x3c8(0x04)
	float WeaponLookSwayLeftMaxAngle; // 0x3cc(0x04)
	float WeaponLookSwayDownMaxAngle; // 0x3d0(0x04)
	float AttachPointInterpSpeed; // 0x3d4(0x04)
	float UpNoiseSpeed; // 0x3d8(0x04)
	float LeftNoiseSpeed; // 0x3dc(0x04)
	float NoiseRotationRate; // 0x3e0(0x04)
	float NoiseRotationOffsetRate; // 0x3e4(0x04)
	struct FName FrontSightSocketName; // 0x3e8(0x08)
	struct FName CenterSightSocketName; // 0x3f0(0x08)
	struct FName UpSightSocketName; // 0x3f8(0x08)
	struct FName DownSightSocketName; // 0x400(0x08)
	struct FName LeftSightSocketName; // 0x408(0x08)
	char pad_410[0xc0]; // 0x410(0xc0)

	struct FHitResult GetLeftHandTraceResult(); // Function ProjectBoundary.PBCharacterAnimInstance_FP.GetLeftHandTraceResult // (Final|Native|Public|BlueprintCallable) // @ game+0x116bac0
};

// Class ProjectBoundary.PBCharacterAnimInstance_Post
// Size: 0x320 (Inherited: 0x2c0)
struct UPBCharacterAnimInstance_Post : UAnimInstance {
	struct APBCharacter* OwningCharacter; // 0x2b8(0x08)
	char pad_2C8[0x18]; // 0x2c8(0x18)
	bool bIKMode; // 0x2e0(0x01)
	char pad_2E1[0x17]; // 0x2e1(0x17)
	struct FPBTPAnimationIKVariable LIKVariables; // 0x2f8(0x10)
	struct FPBTPAnimationIKVariable RIKVariables; // 0x308(0x10)
	char pad_318[0x8]; // 0x318(0x08)
};

// Class ProjectBoundary.PBCharacterAnimInstance_TP
// Size: 0x3c0 (Inherited: 0x2c0)
struct UPBCharacterAnimInstance_TP : UAnimInstance {
	struct FPBTPAnimationVariable TPAnimationVariable; // 0x2b8(0x58)
	struct APBCharacter* OwningCharacter; // 0x310(0x08)
	char pad_320[0xa0]; // 0x320(0xa0)
};

// Class ProjectBoundary.PBCharacterMovement
// Size: 0xba0 (Inherited: 0xb00)
struct UPBCharacterMovement : UCharacterMovementComponent {
	struct APBCharacter* PBCharacterOwner; // 0xb00(0x08)
	float ActiveBrakingFriction; // 0xb08(0x04)
	float EngineHeatThresholdAngle; // 0xb0c(0x04)
	char pad_B10[0x50]; // 0xb10(0x50)
	float MaxSurfaceMovingSpeed; // 0xb60(0x04)
	float CaughtMovementBrakingDeceleration; // 0xb64(0x04)
	float CaughtFriction; // 0xb68(0x04)
	char pad_B6C[0x34]; // 0xb6c(0x34)

	enum class EPBDashState GetCurrentDashState(); // Function ProjectBoundary.PBCharacterMovement.GetCurrentDashState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x116b8a0
};

// Class ProjectBoundary.PBSkeletalMeshComponent
// Size: 0xf30 (Inherited: 0xed0)
struct UPBSkeletalMeshComponent : USkeletalMeshComponent {
	char pad_ED0[0x50]; // 0xed0(0x50)
	float FOVAngle; // 0xf20(0x04)
	char bEnableCustomFOV : 1; // 0xf24(0x01)
	char pad_F24_1 : 7; // 0xf24(0x01)
	char pad_F25[0xb]; // 0xf25(0x0b)

	void UnbindRenderMatrixSource(struct UActorComponent* Source); // Function ProjectBoundary.PBSkeletalMeshComponent.UnbindRenderMatrixSource // (Final|Native|Public|BlueprintCallable) // @ game+0x11c9c30
	struct FMatrix GetCustomRenderTransformMatrixConst(); // Function ProjectBoundary.PBSkeletalMeshComponent.GetCustomRenderTransformMatrixConst // (Final|Native|Public|HasDefaults|Const) // @ game+0x11c92a0
	struct FMatrix GetCustomRenderTransformMatrix(); // Function ProjectBoundary.PBSkeletalMeshComponent.GetCustomRenderTransformMatrix // (Final|Native|Public|HasDefaults) // @ game+0x11c9250
	struct FMatrix GetCustomRenderMatrix__DelegateSignature(); // DelegateFunction ProjectBoundary.PBSkeletalMeshComponent.GetCustomRenderMatrix__DelegateSignature // (Public|Delegate|HasDefaults) // @ game+0x1556ec0
	void BindRenderMatrixSource_Static(struct UPBStaticMeshComponent* Source); // Function ProjectBoundary.PBSkeletalMeshComponent.BindRenderMatrixSource_Static // (Final|Native|Public|BlueprintCallable) // @ game+0x11c8f40
	void BindRenderMatrixSource_Skeletal(struct UPBSkeletalMeshComponent* Source); // Function ProjectBoundary.PBSkeletalMeshComponent.BindRenderMatrixSource_Skeletal // (Final|Native|Public|BlueprintCallable) // @ game+0x11c8eb0
};

// Class ProjectBoundary.PBCharacterSkeletalMeshComponent
// Size: 0xf30 (Inherited: 0xf30)
struct UPBCharacterSkeletalMeshComponent : UPBSkeletalMeshComponent {
};

// Class ProjectBoundary.PBChatManager
// Size: 0xd0 (Inherited: 0x30)
struct UPBChatManager : UGameInstanceSubsystem {
	struct UProjectBoundaryInstance* PBGameInstance; // 0x30(0x08)
	struct ULogicServerCache* LogicServerCache; // 0x38(0x08)
	struct FMulticastInlineDelegate OnStartFriendChatDelegate; // 0x40(0x10)
	struct FMulticastInlineDelegate OnSelfSendMessageDelegate; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFriendReceivedMessageDelegate; // 0x60(0x10)
	struct FMulticastInlineDelegate OnChatLobbyReceivedMessageDelegate; // 0x70(0x10)
	struct TMap<struct FString, struct FPBFriendChatMessageSaved> FriendsMessageSavedContainer; // 0x80(0x50)

	void StartFriendChat(struct FString InFrinedID); // Function ProjectBoundary.PBChatManager.StartFriendChat // (Final|Native|Public|BlueprintCallable) // @ game+0x116c720
	void SendMessageToFriend(struct FString InFrinedID, struct FText InMessage); // Function ProjectBoundary.PBChatManager.SendMessageToFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x116c5c0
	void SendMessageToChatLobby(struct FText InMessage); // Function ProjectBoundary.PBChatManager.SendMessageToChatLobby // (Final|Native|Public|BlueprintCallable) // @ game+0x116c4e0
	void OnReceivedMessage(struct FPBReceivedMessageData InReceivedMessageData); // Function ProjectBoundary.PBChatManager.OnReceivedMessage // (Final|Native|Protected) // @ game+0x116c230
	struct TMap<struct FString, struct FPBFriendChatMessageSaved> GetFriendsMessageSavedContainer(); // Function ProjectBoundary.PBChatManager.GetFriendsMessageSavedContainer // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x116b8c0
};

// Class ProjectBoundary.PBChatWidgetStyle
// Size: 0x938 (Inherited: 0x30)
struct UPBChatWidgetStyle : USlateWidgetStyleContainerBase {
	struct FPBChatStyle ChatStyle; // 0x30(0x908)
};

// Class ProjectBoundary.PBPlayerController
// Size: 0xaf8 (Inherited: 0x570)
struct APBPlayerController : APlayerController {
	struct UPBAimingComponent* AimingComponent; // 0x570(0x08)
	struct FMulticastInlineDelegate OnNotifyOptionOpenDelegates; // 0x578(0x10)
	struct FMulticastInlineDelegate OnNotifyOptionCloseDelegates; // 0x588(0x10)
	char pad_598[0x48]; // 0x598(0x48)
	struct UCameraComponent* AllyCameraComponent; // 0x5e0(0x08)
	struct UPBUserWidget* ObserverWidgetClass; // 0x5e8(0x08)
	struct UPBUserWidget* ObserverWidget; // 0x5f0(0x08)
	char pad_5F8[0x8]; // 0x5f8(0x08)
	struct APBCharacter* ObserveCharacter; // 0x600(0x08)
	float DelayEnterObserverStateTime; // 0x608(0x04)
	char pad_60C[0xc]; // 0x60c(0x0c)
	char pad_618_0 : 1; // 0x618(0x01)
	char bInfiniteAmmo : 1; // 0x618(0x01)
	char bInfiniteClip : 1; // 0x618(0x01)
	char bAirTightnessRegen : 1; // 0x618(0x01)
	char bGodMode : 1; // 0x618(0x01)
	char pad_618_5 : 3; // 0x618(0x01)
	char pad_619[0x3]; // 0x619(0x03)
	struct FVector LastDeathLocation; // 0x61c(0x0c)
	char pad_628[0xa0]; // 0x628(0xa0)
	struct APBCharacter* PBCharacter; // 0x6c8(0x08)
	struct APBPlayerCameraManager* PBPlayerCameraManger; // 0x6d0(0x08)
	char ActiveZoneID; // 0x6d8(0x01)
	char pad_6D9[0x7]; // 0x6d9(0x07)
	struct APawn* DefaultPawnClass; // 0x6e0(0x08)
	struct FName ServerRoleID; // 0x6e8(0x08)
	char pad_6F0[0x140]; // 0x6f0(0x140)
	struct FPBRoleNetworkConfig SkirmishRoleConfig; // 0x830(0x140)
	struct FMulticastInlineDelegate OnMatchEnd; // 0x970(0x10)
	struct FMulticastInlineDelegate OnMatchRoundEnd; // 0x980(0x10)
	float CameraVelocityMax; // 0x990(0x04)
	struct FVector2D CameraAcceleration; // 0x994(0x08)
	float CameraAccelerationMax; // 0x99c(0x04)
	float CameraAccelerationDefault; // 0x9a0(0x04)
	float CameraFriction; // 0x9a4(0x04)
	float CameraFrictionCoefficient; // 0x9a8(0x04)
	float CameraFrictionCoefficientInEMP; // 0x9ac(0x04)
	float BodyReturnSpeed; // 0x9b0(0x04)
	bool bEnableCameraSwag; // 0x9b4(0x01)
	bool bApplyCameraFriction; // 0x9b5(0x01)
	char pad_9B6[0x12]; // 0x9b6(0x12)
	struct UPBUserWidget* FeedbackForkClass; // 0x9c8(0x08)
	struct UPBUserWidget* SkirmishRoleWidget; // 0x9d0(0x08)
	char pad_9D8[0x4]; // 0x9d8(0x04)
	struct FVector StartTPCameraLocation; // 0x9dc(0x0c)
	char pad_9E8[0x8]; // 0x9e8(0x08)
	struct AActor* KillCamFocus; // 0x9f0(0x08)
	struct FVector StartKillCamLocation; // 0x9f8(0x0c)
	char pad_A04[0x4]; // 0xa04(0x04)
	struct TWeakObjectPtr<struct UPBUserWidget> OptionWidget; // 0xa08(0x08)
	struct UPBUserWidget* OnDeathWidgetClass; // 0xa10(0x08)
	struct UPBUserWidget* OnWaitinToJoinWidgetClass; // 0xa18(0x08)
	struct UPBUserWidget* OnWarmUpTimeCountWidgetClass; // 0xa20(0x08)
	struct UPBUserWidget* OnWarmUpWidgetClass; // 0xa28(0x08)
	struct TWeakObjectPtr<struct UPBMainMenuWidget> WaitingToJoinWidget; // 0xa30(0x08)
	struct TWeakObjectPtr<struct UPBMainMenuWidget> WarmUpTimeCountWidget; // 0xa38(0x08)
	struct TWeakObjectPtr<struct UPBMainMenuWidget> WarmUpWidget; // 0xa40(0x08)
	float OnDeathBlendTime; // 0xa48(0x04)
	enum class EViewTargetBlendFunction OnDeathBlendFunction; // 0xa4c(0x01)
	char pad_A4D[0x3]; // 0xa4d(0x03)
	float OnDeathBlendExp; // 0xa50(0x04)
	char bOnDeathLockOutgoing : 1; // 0xa54(0x01)
	char pad_A54_1 : 7; // 0xa54(0x01)
	char pad_A55[0x7]; // 0xa55(0x07)
	struct FName MusicID_WaitingRoom; // 0xa5c(0x08)
	struct FName MusicID_SelectRole; // 0xa64(0x08)
	struct FName MusicID_ReadyToFight; // 0xa6c(0x08)
	char pad_A74[0x4]; // 0xa74(0x04)
	struct TArray<struct APBTeamStart*> SelectedTeamStart; // 0xa78(0x10)
	char pad_A88[0x1c]; // 0xa88(0x1c)
	float ReviveDelayTime; // 0xaa4(0x04)
	char pad_AA8[0x20]; // 0xaa8(0x20)
	struct APBTeamStart* PendingStartSpot; // 0xac8(0x08)
	char pad_AD0[0x28]; // 0xad0(0x28)

	bool VRConvertWorldLocationToScreenLocation(struct FVector WorldLocation, struct FVector2D ScreenLocation); // Function ProjectBoundary.PBPlayerController.VRConvertWorldLocationToScreenLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b4160
	void VoteMap(struct FString MapName); // Function ProjectBoundary.PBPlayerController.VoteMap // (Final|Native|Public|BlueprintCallable) // @ game+0x11b4250
	void UpdateRotation(float DeltaTime); // Function ProjectBoundary.PBPlayerController.UpdateRotation // (Native|Protected|BlueprintCallable) // @ game+0x11b40d0
	void UnloadCurrentMap(); // Function ProjectBoundary.PBPlayerController.UnloadCurrentMap // (Final|Native|Public|BlueprintCallable) // @ game+0x11b40b0
	void UnBindGameInputComponetKey(); // Function ProjectBoundary.PBPlayerController.UnBindGameInputComponetKey // (Final|Native|Public|BlueprintCallable) // @ game+0x11b4090
	void ToggleViewDisplayActor(bool bToViewDisplayActor); // Function ProjectBoundary.PBPlayerController.ToggleViewDisplayActor // (Final|Native|Public|BlueprintCallable) // @ game+0x11b4000
	bool SwitchTeam(); // Function ProjectBoundary.PBPlayerController.SwitchTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3fd0
	void StopThreePersonCamera(); // Function ProjectBoundary.PBPlayerController.StopThreePersonCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3fb0
	void StopKillCamera(); // Function ProjectBoundary.PBPlayerController.StopKillCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3f90
	void StartThreePersonCamera(); // Function ProjectBoundary.PBPlayerController.StartThreePersonCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3f70
	void StartTestMelee(); // Function ProjectBoundary.PBPlayerController.StartTestMelee // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b3f50
	void StartKillCamera(); // Function ProjectBoundary.PBPlayerController.StartKillCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3f30
	void SkirmishClientSendRoleInfo(struct FPBRoleNetworkConfig InRoleConfig); // Function ProjectBoundary.PBPlayerController.SkirmishClientSendRoleInfo // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x11b3e70
	void SimulateInputKey(struct FKey Key, bool bPressed); // Function ProjectBoundary.PBPlayerController.SimulateInputKey // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3d40
	void ShowSelectWeaponWidget(); // Function ProjectBoundary.PBPlayerController.ShowSelectWeaponWidget // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowGameOption(bool bShow); // Function ProjectBoundary.PBPlayerController.ShowGameOption // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3cb0
	void ShowConfirm(struct FConfirmInfo Info); // Function ProjectBoundary.PBPlayerController.ShowConfirm // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3b60
	bool ShouldUpdateThreeCamera(); // Function ProjectBoundary.PBPlayerController.ShouldUpdateThreeCamera // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x11b3b30
	bool ShouldUpdateCamera(); // Function ProjectBoundary.PBPlayerController.ShouldUpdateCamera // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x11b3b00
	void SetOptionsNavigationConfig(); // Function ProjectBoundary.PBPlayerController.SetOptionsNavigationConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3ae0
	void SetNormalNavigationConfig(); // Function ProjectBoundary.PBPlayerController.SetNormalNavigationConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3ac0
	void SetIsInCSTM(bool bin); // Function ProjectBoundary.PBPlayerController.SetIsInCSTM // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3a30
	void SetInputModeGameAndUI(); // Function ProjectBoundary.PBPlayerController.SetInputModeGameAndUI // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3a10
	void SetGodMode(bool bEnable); // Function ProjectBoundary.PBPlayerController.SetGodMode // (Final|Exec|Native|Public) // @ game+0x11b3980
	void SetBeginnerDefaultPawnClass(struct FName InRoleID); // Function ProjectBoundary.PBPlayerController.SetBeginnerDefaultPawnClass // (Final|Native|Public|BlueprintCallable) // @ game+0x11b38f0
	void SetAllowGameActions(bool bAllow); // Function ProjectBoundary.PBPlayerController.SetAllowGameActions // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3860
	void ServerTestMelee(); // Function ProjectBoundary.PBPlayerController.ServerTestMelee // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b3810
	void ServerSuicide(int32_t SuicideMode); // Function ProjectBoundary.PBPlayerController.ServerSuicide // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b3750
	void ServerSlomo(float NewTimeDilation); // Function ProjectBoundary.PBPlayerController.ServerSlomo // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x11b36c0
	void ServerSetReady(); // Function ProjectBoundary.PBPlayerController.ServerSetReady // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b3670
	void ServerSetPlayerLevel(int32_t Level); // Function ProjectBoundary.PBPlayerController.ServerSetPlayerLevel // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b35b0
	void ServerSay(struct FString Msg); // Function ProjectBoundary.PBPlayerController.ServerSay // (Net|Native|Event|Public|NetServer|NetValidate) // @ game+0x11b34f0
	void ServerOnConfirmSelectClass(struct FPBRoleNetworkConfig InRoleConfig); // Function ProjectBoundary.PBPlayerController.ServerOnConfirmSelectClass // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b3430
	void ServerNotifyVoteMap(struct FString MapName, struct FString VotePlayerName); // Function ProjectBoundary.PBPlayerController.ServerNotifyVoteMap // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x11b3310
	void ServerMapLoadComplete(); // Function ProjectBoundary.PBPlayerController.ServerMapLoadComplete // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b32c0
	void ServerCheat(struct FString Msg); // Function ProjectBoundary.PBPlayerController.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b3200
	void SendRoleNetworkConfig(struct FName InRoleID); // Function ProjectBoundary.PBPlayerController.SendRoleNetworkConfig // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11b3170
	void Say(struct FString Msg); // Function ProjectBoundary.PBPlayerController.Say // (Exec|Native|Public) // @ game+0x11b30b0
	void SaveIfDirty(); // Function ProjectBoundary.PBPlayerController.SaveIfDirty // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3090
	void SaveGameData(); // Function ProjectBoundary.PBPlayerController.SaveGameData // (Final|Native|Public|BlueprintCallable) // @ game+0x11b3070
	bool SaveFocusingWidget(); // Function ProjectBoundary.PBPlayerController.SaveFocusingWidget // (Final|Native|Private|BlueprintCallable) // @ game+0x11b3040
	void RoundEndNotify(); // Function ProjectBoundary.PBPlayerController.RoundEndNotify // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void RequireClientRole(); // Function ProjectBoundary.PBPlayerController.RequireClientRole // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b3020
	void ReceiveACEReportedData_OnServer(struct TArray<char> Data); // Function ProjectBoundary.PBPlayerController.ReceiveACEReportedData_OnServer // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x11b2f80
	void ReceiveACEAntiData_OnClient(struct TArray<char> Data); // Function ProjectBoundary.PBPlayerController.ReceiveACEAntiData_OnClient // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x11b2ee0
	void ReadyForKillCamera(struct AActor* ActorToFocus); // Function ProjectBoundary.PBPlayerController.ReadyForKillCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2e50
	void PBServerSetSpectatorLocation(struct FVector NewLoc, struct FRotator NewRot); // Function ProjectBoundary.PBPlayerController.PBServerSetSpectatorLocation // (Net|Native|Event|Public|NetServer|HasDefaults|NetValidate) // @ game+0x11b2d10
	void PBServerRestartPlayer(); // Function ProjectBoundary.PBPlayerController.PBServerRestartPlayer // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b2cc0
	void PBClientGameEnded(struct FName InGameMapID, uint64_t InUserId, int32_t InCampID, int32_t InGameDuraion, int32_t InGameResult, struct AActor* EndGameFocus, enum class EPBGameResult GameResult, int32_t TimeRemaining, int32_t PlayerScores); // Function ProjectBoundary.PBPlayerController.PBClientGameEnded // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b2a20
	void OpenOption(); // Function ProjectBoundary.PBPlayerController.OpenOption // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2a00
	void OnRep_LastDeathLocation(); // Function ProjectBoundary.PBPlayerController.OnRep_LastDeathLocation // (Final|Native|Protected) // @ game+0x11b29e0
	void OnRep_KillCamFocus(); // Function ProjectBoundary.PBPlayerController.OnRep_KillCamFocus // (Final|Native|Protected) // @ game+0x11b29e0
	void OnLeaderboardReadComplete(bool bWasSuccessful); // Function ProjectBoundary.PBPlayerController.OnLeaderboardReadComplete // (Final|Native|Public) // @ game+0x11b2730
	void OnConfirmSelectClass(); // Function ProjectBoundary.PBPlayerController.OnConfirmSelectClass // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2710
	void OnConfirm(bool bConfirm); // Function ProjectBoundary.PBPlayerController.OnConfirm // (Final|Native|Protected|BlueprintCallable) // @ game+0x11b2680
	void NotifyUpdateKillCamera(float DeltaTime); // Function ProjectBoundary.PBPlayerController.NotifyUpdateKillCamera // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifySwitchTeamFailed(); // Function ProjectBoundary.PBPlayerController.NotifySwitchTeamFailed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStopThreePersonCamera(); // Function ProjectBoundary.PBPlayerController.NotifyStopThreePersonCamera // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStopKillCamera(); // Function ProjectBoundary.PBPlayerController.NotifyStopKillCamera // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStartWarmUp(); // Function ProjectBoundary.PBPlayerController.NotifyStartWarmUp // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStartWaitingToJoin(); // Function ProjectBoundary.PBPlayerController.NotifyStartWaitingToJoin // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStartThreePersonCamera(); // Function ProjectBoundary.PBPlayerController.NotifyStartThreePersonCamera // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyStartKillCamera(); // Function ProjectBoundary.PBPlayerController.NotifyStartKillCamera // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyServerReSpawn(); // Function ProjectBoundary.PBPlayerController.NotifyServerReSpawn // (Final|Native|Public|BlueprintCallable) // @ game+0x11b0e00
	void NotifyServerReady(); // Function ProjectBoundary.PBPlayerController.NotifyServerReady // (Final|Native|Public|BlueprintCallable) // @ game+0x9c37b0
	void NotifyReceivedTeamNumber(); // Function ProjectBoundary.PBPlayerController.NotifyReceivedTeamNumber // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyReceivedPlayerState(); // Function ProjectBoundary.PBPlayerController.NotifyReceivedPlayerState // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyReceivedFirstPersonTeamNumber(); // Function ProjectBoundary.PBPlayerController.NotifyReceivedFirstPersonTeamNumber // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyReceivedFirstPersonPlayerState(); // Function ProjectBoundary.PBPlayerController.NotifyReceivedFirstPersonPlayerState // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyPlayerLevelUp(int32_t Level); // Function ProjectBoundary.PBPlayerController.NotifyPlayerLevelUp // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnConfirmMessageShowUp(struct FConfirmInfo Info); // Function ProjectBoundary.PBPlayerController.NotifyOnConfirmMessageShowUp // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyMenuOn(); // Function ProjectBoundary.PBPlayerController.NotifyMenuOn // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyMenuOff(); // Function ProjectBoundary.PBPlayerController.NotifyMenuOff // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyMapLoadComplete(); // Function ProjectBoundary.PBPlayerController.NotifyMapLoadComplete // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyHitShield(); // Function ProjectBoundary.PBPlayerController.NotifyHitShield // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyHitArmor(); // Function ProjectBoundary.PBPlayerController.NotifyHitArmor // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyGameStarted(); // Function ProjectBoundary.PBPlayerController.NotifyGameStarted // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyFirstTimeInGame(); // Function ProjectBoundary.PBPlayerController.NotifyFirstTimeInGame // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyFFARankInfo(struct TArray<struct APBPlayerState*> RankInfo, struct TArray<int32_t> RankScores); // Function ProjectBoundary.PBPlayerController.NotifyFFARankInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEndWarmUp(); // Function ProjectBoundary.PBPlayerController.NotifyEndWarmUp // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyDisableArmor(); // Function ProjectBoundary.PBPlayerController.NotifyDisableArmor // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyClientSendRoundEndEvent(enum class EPBGameResult GameResult); // Function ProjectBoundary.PBPlayerController.NotifyClientSendRoundEndEvent // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyClearInterface(); // Function ProjectBoundary.PBPlayerController.NotifyClearInterface // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void MenuClientGameStarted(); // Function ProjectBoundary.PBPlayerController.MenuClientGameStarted // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b24f0
	void K2_PressedScoreBoard(); // Function ProjectBoundary.PBPlayerController.K2_PressedScoreBoard // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_OpenShootingRangeOption(); // Function ProjectBoundary.PBPlayerController.K2_OpenShootingRangeOption // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_OpenGameOption(); // Function ProjectBoundary.PBPlayerController.K2_OpenGameOption // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_NotifyResetRecognitionEnhancementMID(); // Function ProjectBoundary.PBPlayerController.K2_NotifyResetRecognitionEnhancementMID // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_NotifyBeKilled(struct APBPlayerState* KillerPlayerState, struct APBPlayerState* KilledPlayerState, struct UDamageType* KillerDamageType, enum class EPBHitZone HitZone, struct UTextureRenderTarget2D* InInstigatorRenderTarget, struct UTexture* InInstigatorTexture); // Function ProjectBoundary.PBPlayerController.K2_NotifyBeKilled // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_CloseShootingRangeOption(); // Function ProjectBoundary.PBPlayerController.K2_CloseShootingRangeOption // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_CloseScoreBoardForKeyboard(); // Function ProjectBoundary.PBPlayerController.K2_CloseScoreBoardForKeyboard // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_CloseGameOption(); // Function ProjectBoundary.PBPlayerController.K2_CloseGameOption // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	bool IsVibrationEnabled(); // Function ProjectBoundary.PBPlayerController.IsVibrationEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b24c0
	bool IsShowGameOption(); // Function ProjectBoundary.PBPlayerController.IsShowGameOption // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2490
	bool GetStartPlayingGame(); // Function ProjectBoundary.PBPlayerController.GetStartPlayingGame // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2440
	struct FVector2D GetScreenOffsetFromWorldLocation(); // Function ProjectBoundary.PBPlayerController.GetScreenOffsetFromWorldLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b2400
	struct UPBUserWidget* GetOnDeathWidget(); // Function ProjectBoundary.PBPlayerController.GetOnDeathWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11b2300
	float GetOnDeathBlendTime(); // Function ProjectBoundary.PBPlayerController.GetOnDeathBlendTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b22e0
	struct APBCharacter* GetObserveCharacter(); // Function ProjectBoundary.PBPlayerController.GetObserveCharacter // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11b22c0
	bool GetIsInCSTM(); // Function ProjectBoundary.PBPlayerController.GetIsInCSTM // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2290
	struct FKey GetGamepadBackKey(); // Function ProjectBoundary.PBPlayerController.GetGamepadBackKey // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11b2220
	struct FKey GetGamepadAcceptKey(); // Function ProjectBoundary.PBPlayerController.GetGamepadAcceptKey // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11b21b0
	float GetCameraAccelerationMax(); // Function ProjectBoundary.PBPlayerController.GetCameraAccelerationMax // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2190
	float GetCameraAccelerationDefault(); // Function ProjectBoundary.PBPlayerController.GetCameraAccelerationDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2170
	struct FVector2D GetCameraAcceleration(); // Function ProjectBoundary.PBPlayerController.GetCameraAcceleration // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11b2140
	void CSTM_Suicide(); // Function ProjectBoundary.PBPlayerController.CSTM_Suicide // (Final|Native|Public|BlueprintCallable) // @ game+0x11b0cc0
	void CreateWarmUpWidget(); // Function ProjectBoundary.PBPlayerController.CreateWarmUpWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2120
	void CreateWaitingToJoinWidget(); // Function ProjectBoundary.PBPlayerController.CreateWaitingToJoinWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2100
	void CreateOnDeathWidget(); // Function ProjectBoundary.PBPlayerController.CreateOnDeathWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x11b20e0
	void CloseOptionMenu(); // Function ProjectBoundary.PBPlayerController.CloseOptionMenu // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CloseOption(); // Function ProjectBoundary.PBPlayerController.CloseOption // (Final|Native|Public|BlueprintCallable) // @ game+0x11b20c0
	void ClientWaitingToWarmUp(); // Function ProjectBoundary.PBPlayerController.ClientWaitingToWarmUp // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b20a0
	void ClientWaitingToJoin(); // Function ProjectBoundary.PBPlayerController.ClientWaitingToJoin // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b2080
	void ClientWaitGameStarted(); // Function ProjectBoundary.PBPlayerController.ClientWaitGameStarted // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b2060
	void ClientVoteMap(struct FString MapName); // Function ProjectBoundary.PBPlayerController.ClientVoteMap // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b1fa0
	void ClientUpdateBasicAttributesFromDB(); // Function ProjectBoundary.PBPlayerController.ClientUpdateBasicAttributesFromDB // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1f80
	void ClientStartOnlineGame(); // Function ProjectBoundary.PBPlayerController.ClientStartOnlineGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1f60
	void ClientSetSpectatorCamera(struct FVector CameraLocation, struct FRotator CameraRotation); // Function ProjectBoundary.PBPlayerController.ClientSetSpectatorCamera // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x11b1e70
	void ClientSendScoreResult(struct TArray<int32_t> EndTeamScore); // Function ProjectBoundary.PBPlayerController.ClientSendScoreResult // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1dd0
	void ClientSendRoundEndEvent(enum class EPBGameResult GameResult, int32_t TimeRemaining); // Function ProjectBoundary.PBPlayerController.ClientSendRoundEndEvent // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1d00
	void ClientSendFFARankResult(struct TArray<struct APBPlayerState*> RankInfo, struct TArray<int32_t> RankScores); // Function ProjectBoundary.PBPlayerController.ClientSendFFARankResult // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1c00
	void ClientSendActiveZoneID(char ZoneID); // Function ProjectBoundary.PBPlayerController.ClientSendActiveZoneID // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1b80
	void ClientRestartInStartPort(struct AActor* NewStartSpot); // Function ProjectBoundary.PBPlayerController.ClientRestartInStartPort // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1af0
	void ClientResetActiveZoneID(); // Function ProjectBoundary.PBPlayerController.ClientResetActiveZoneID // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1ad0
	void ClientMatchEndSaveData(struct FMatchEndUserData InEndData); // Function ProjectBoundary.PBPlayerController.ClientMatchEndSaveData // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1a40
	void ClientKillEnemy(struct FDateTime TimeKill, struct FVector KillUserLocation, struct FName KillerRoleID, struct APBPlayerState* KillerPlayerState, struct AActor* DamageCauserOwner, struct APBPlayerState* VictimPlayerState, float InKillDistance, float InKillDamage, enum class EPBHitZone InHitZone); // Function ProjectBoundary.PBPlayerController.ClientKillEnemy // (Net|NetReliableNative|Event|Protected|HasDefaults|NetClient) // @ game+0x11b1790
	void ClientJoinPlayingGame(); // Function ProjectBoundary.PBPlayerController.ClientJoinPlayingGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1770
	void ClientHitShield(float DamageTaken, struct FDamageEvent DamageEvent, struct UObject* HitTarget, enum class EPBHitZone HitZone); // Function ProjectBoundary.PBPlayerController.ClientHitShield // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1610
	void ClientHitEnemy(float DamageTaken, struct APBPlayerState* InstigatorPlayerState, struct AActor* DamageCauserOwner, struct APBCharacter* InHitCharacter, enum class EPBHitZone HitZone); // Function ProjectBoundary.PBPlayerController.ClientHitEnemy // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x11b1470
	void ClientHitArmor(float DamageTaken, struct FDamageEvent DamageEvent, struct UObject* HitTarget, enum class EPBHitZone HitZone); // Function ProjectBoundary.PBPlayerController.ClientHitArmor // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1310
	void ClientGameStarted(); // Function ProjectBoundary.PBPlayerController.ClientGameStarted // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b12f0
	void ClientEndOnlineGame(); // Function ProjectBoundary.PBPlayerController.ClientEndOnlineGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b12d0
	void ClientDisconnectAndTravelToMainMenuLevel(struct FString InMatchResultInfoString); // Function ProjectBoundary.PBPlayerController.ClientDisconnectAndTravelToMainMenuLevel // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1230
	void ClientDisableArmor(float DamageTaken, struct FDamageEvent DamageEvent); // Function ProjectBoundary.PBPlayerController.ClientDisableArmor // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b1150
	void ClientBeKilled(struct APBPlayerState* VictimPlayerState, struct FName VictimRoleID); // Function ProjectBoundary.PBPlayerController.ClientBeKilled // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x11b1080
	void ClientBeDisabled(struct FDamageEvent DamageEvent, struct APBPlayerState* VictimPlayerState, struct FName VictimRoleID, struct FName VictimWeaponID, struct FVector VictimUserLocation); // Function ProjectBoundary.PBPlayerController.ClientBeDisabled // (Net|NetReliableNative|Event|Protected|HasDefaults|NetClient) // @ game+0x11b0ed0
	void ClientActiveAllExistingZones(bool bActive); // Function ProjectBoundary.PBPlayerController.ClientActiveAllExistingZones // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b0e40
	void ClearAllCharacter(); // Function ProjectBoundary.PBPlayerController.ClearAllCharacter // (Final|Native|Public|BlueprintCallable) // @ game+0x11b0e20
	void CheckRespawn(); // Function ProjectBoundary.PBPlayerController.CheckRespawn // (Final|Native|Public) // @ game+0x11b0e00
	void CheatServerGameEnd(int32_t GameResult); // Function ProjectBoundary.PBPlayerController.CheatServerGameEnd // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b0d40
	bool CanSwitchTeam(); // Function ProjectBoundary.PBPlayerController.CanSwitchTeam // (Final|Native|Protected|BlueprintCallable) // @ game+0x11b0d10
	bool CanStartKillCamera(); // Function ProjectBoundary.PBPlayerController.CanStartKillCamera // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x11b0ce0
	void BindGameInputComponetKey(); // Function ProjectBoundary.PBPlayerController.BindGameInputComponetKey // (Final|Native|Public|BlueprintCallable) // @ game+0x11b0ca0
	bool BackFocus(); // Function ProjectBoundary.PBPlayerController.BackFocus // (Final|Native|Private|BlueprintCallable) // @ game+0x11b0c70
	bool AllowQuickRespawn(); // Function ProjectBoundary.PBPlayerController.AllowQuickRespawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11615d0
	void AddPlayerExp(int32_t Exp); // Function ProjectBoundary.PBPlayerController.AddPlayerExp // (Final|Native|Public|BlueprintCallable) // @ game+0x11b0be0
};

// Class ProjectBoundary.PBCheatManager
// Size: 0x78 (Inherited: 0x78)
struct UPBCheatManager : UCheatManager {

	void ToggleMatchTimer(); // Function ProjectBoundary.PBCheatManager.ToggleMatchTimer // (Final|Exec|Native|Public) // @ game+0x116c800
	void ToggleInfiniteClip(); // Function ProjectBoundary.PBCheatManager.ToggleInfiniteClip // (Final|Exec|Native|Public) // @ game+0x116c7e0
	void ToggleInfiniteAmmo(); // Function ProjectBoundary.PBCheatManager.ToggleInfiniteAmmo // (Final|Exec|Native|Public) // @ game+0x116c7c0
	void SpawnBot(); // Function ProjectBoundary.PBCheatManager.SpawnBot // (Final|Exec|Native|Public) // @ game+0x116c700
	void ReadUserAndPlayersScoreFromBoard(int32_t InRangStart, int32_t InRangNum); // Function ProjectBoundary.PBCheatManager.ReadUserAndPlayersScoreFromBoard // (Final|Exec|Native|Public) // @ game+0x116c410
	void PBCharacterSuicide(int32_t SuicideMode); // Function ProjectBoundary.PBCheatManager.PBCharacterSuicide // (Exec|Native|Public) // @ game+0x116c380
	void NetWorkFailedTest(); // Function ProjectBoundary.PBCheatManager.NetWorkFailedTest // (Final|Exec|Native|Public) // @ game+0x116c210
	void MarkedPlayer(int32_t MarkedIndex); // Function ProjectBoundary.PBCheatManager.MarkedPlayer // (Final|Exec|Native|Public) // @ game+0x116c180
	void GameEnd(int32_t GameResult); // Function ProjectBoundary.PBCheatManager.GameEnd // (Final|Exec|Native|Public) // @ game+0x116b6b0
	void ForceMatchStart(); // Function ProjectBoundary.PBCheatManager.ForceMatchStart // (Final|Exec|Native|Public) // @ game+0x116b690
	void Cheat(struct FString Msg); // Function ProjectBoundary.PBCheatManager.Cheat // (Final|Exec|Native|Public) // @ game+0x116b5d0
	void ChangeTeam(int32_t NewTeamNumber); // Function ProjectBoundary.PBCheatManager.ChangeTeam // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x116b540
	void ChangeMarArray(bool bSet); // Function ProjectBoundary.PBCheatManager.ChangeMarArray // (Final|Exec|Native|Public) // @ game+0x116b4b0
};

// Class ProjectBoundary.PBCollisionSoundComponent
// Size: 0x110 (Inherited: 0xb0)
struct UPBCollisionSoundComponent : UActorComponent {
	struct TMap<enum class EPBHitZone, struct FPBCollisionSoundMap> CollisionSoundMap; // 0xb0(0x50)
	struct UCurveFloat* PhyColSoundCurve; // 0x100(0x08)
	float SelectCrushLevelBySpeed; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// Class ProjectBoundary.PBComponentListWidget
// Size: 0x2a8 (Inherited: 0x268)
struct UPBComponentListWidget : UPBUserWidget {
	struct FName RoleId; // 0x268(0x08)
	struct FName ComponentId; // 0x270(0x08)
	struct FName ComponentPartId; // 0x278(0x08)
	enum class EPBSlotType SlotType; // 0x280(0x01)
	enum class EPBPartSlotType PartSlotType; // 0x281(0x01)
	enum class EPBSkinClass SkinType; // 0x282(0x01)
	enum class EPBCharacterSlotType CharacterSlotType; // 0x283(0x01)
	struct FPBComponentList_UI ComponentListUI; // 0x284(0x20)
	char pad_2A4[0x4]; // 0x2a4(0x04)

	void K2_SetComponentList(); // Function ProjectBoundary.PBComponentListWidget.K2_SetComponentList // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	struct TArray<struct FPBWeaponPartSkin_UI> GetWeaponPartSkins(); // Function ProjectBoundary.PBComponentListWidget.GetWeaponPartSkins // (Final|Native|Protected|BlueprintCallable) // @ game+0x116bfa0
	struct TArray<struct FPBWeaponPartSlot_UI> GetWeaponParts(); // Function ProjectBoundary.PBComponentListWidget.GetWeaponParts // (Final|Native|Protected|BlueprintCallable) // @ game+0x116c100
	struct TArray<struct FPBWeaponPart_UI> GetWeaponPartModels(); // Function ProjectBoundary.PBComponentListWidget.GetWeaponPartModels // (Final|Native|Protected|BlueprintCallable) // @ game+0x116be40
	struct TArray<struct FPBWeaponBlueprint_UI> GetWeaponBlueprints(); // Function ProjectBoundary.PBComponentListWidget.GetWeaponBlueprints // (Final|Native|Protected|BlueprintCallable) // @ game+0x116bce0
	struct TArray<struct FPBVehicleSkin_UI> GetVehcileSkins(); // Function ProjectBoundary.PBComponentListWidget.GetVehcileSkins // (Final|Native|Protected|BlueprintCallable) // @ game+0x116bb80
	struct TArray<struct FPBItem_UI> GetItems(); // Function ProjectBoundary.PBComponentListWidget.GetItems // (Final|Native|Protected|BlueprintCallable) // @ game+0x116b960
	struct TArray<struct FPBCharacterSkin_UI> GetCharacterSkins(); // Function ProjectBoundary.PBComponentListWidget.GetCharacterSkins // (Final|Native|Protected|BlueprintCallable) // @ game+0x116b740
};

// Class ProjectBoundary.PBRoleComponentBaseWidget
// Size: 0x2b8 (Inherited: 0x268)
struct UPBRoleComponentBaseWidget : UPBUserWidget {
	struct FText DisplayText; // 0x268(0x18)
	enum class EPBSlotType SpecifySlotType; // 0x280(0x01)
	enum class EPBCharacterSlotType SpecifyCharacterSlotType; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	struct FName ComponentId; // 0x284(0x08)
	struct FName ComponentPartId; // 0x28c(0x08)
	enum class EPBSlotType SlotType; // 0x294(0x01)
	enum class EPBPartSlotType PartSlotType; // 0x295(0x01)
	char pad_296[0xa]; // 0x296(0x0a)
	enum class EPBSkinClass SkinType; // 0x2a0(0x01)
	bool bShouldRefreshTestWeapon; // 0x2a1(0x01)
	char pad_2A2[0x2]; // 0x2a2(0x02)
	struct FName SkinID; // 0x2a4(0x08)
	struct FName BlueprintID; // 0x2ac(0x08)
	bool bIsWeaponPart; // 0x2b4(0x01)
	bool bIsVehcile; // 0x2b5(0x01)
	enum class EPBCharacterSlotType CharacterSlotType; // 0x2b6(0x01)
	char pad_2B7[0x1]; // 0x2b7(0x01)

	void ToRange(); // Function ProjectBoundary.PBRoleComponentBaseWidget.ToRange // (Final|Native|Protected|BlueprintCallable) // @ game+0x11c38f0
	void SaveModify(); // Function ProjectBoundary.PBRoleComponentBaseWidget.SaveModify // (Final|Native|Protected|BlueprintCallable) // @ game+0x11c34f0
	void RefreshComponent(); // Function ProjectBoundary.PBRoleComponentBaseWidget.RefreshComponent // (Native|Protected|BlueprintCallable) // @ game+0x11c3410
	void K2_SetComponentName(); // Function ProjectBoundary.PBRoleComponentBaseWidget.K2_SetComponentName // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	struct FPBVehicleSkin_UI GetEquipVehicleSkin(); // Function ProjectBoundary.PBRoleComponentBaseWidget.GetEquipVehicleSkin // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x11c2f60
	struct FPBCharacterSkin_UI GetEquipCharacterSkin(); // Function ProjectBoundary.PBRoleComponentBaseWidget.GetEquipCharacterSkin // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x11c2e80
	void EnterModify(); // Function ProjectBoundary.PBRoleComponentBaseWidget.EnterModify // (Final|Native|Protected|BlueprintCallable) // @ game+0x11c2e00
};

// Class ProjectBoundary.PBComponentModifyWidget
// Size: 0x2e8 (Inherited: 0x2b8)
struct UPBComponentModifyWidget : UPBRoleComponentBaseWidget {
	struct FPBComponentModify_UI ComponentModifyUI; // 0x2b8(0x2c)
	char pad_2E4[0x4]; // 0x2e4(0x04)

	void K2_InitComponentModify(); // Function ProjectBoundary.PBComponentModifyWidget.K2_InitComponentModify // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void EnterSightModify(); // Function ProjectBoundary.PBComponentModifyWidget.EnterSightModify // (Final|Native|Protected|BlueprintCallable) // @ game+0x116b670
};

// Class ProjectBoundary.PBConfirmationWidget
// Size: 0x2b8 (Inherited: 0x268)
struct UPBConfirmationWidget : UPBUserWidget {
	char pad_268[0x20]; // 0x268(0x20)
	struct FText ShowMessage; // 0x288(0x18)
	char pad_2A0[0x18]; // 0x2a0(0x18)

	void SetUserFocusWidget(struct UWidget* FocusWidget, int32_t Index); // Function ProjectBoundary.PBConfirmationWidget.SetUserFocusWidget // (Native|Public|BlueprintCallable) // @ game+0x117adc0
	void OnConfirmClick(); // Function ProjectBoundary.PBConfirmationWidget.OnConfirmClick // (Final|Native|Public|BlueprintCallable) // @ game+0x117ab90
	bool IsCircleForEnter(); // Function ProjectBoundary.PBConfirmationWidget.IsCircleForEnter // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x117a770
	void InitFocus(); // Function ProjectBoundary.PBConfirmationWidget.InitFocus // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBConfirmModeWidget
// Size: 0x2c8 (Inherited: 0x268)
struct UPBConfirmModeWidget : UPBUserWidget {
	struct FPBActionMap_UI ActionMapUI; // 0x268(0x60)

	void SetActionModeInfo(struct FName InModeName); // Function ProjectBoundary.PBConfirmModeWidget.SetActionModeInfo // (Final|Native|Protected) // @ game+0x117ad30
	void SetActionMapInfo(struct FName InMapName, bool bSuccessful); // Function ProjectBoundary.PBConfirmModeWidget.SetActionMapInfo // (Final|Native|Protected) // @ game+0x117ac60
	void K2_SetActionModeInfo(); // Function ProjectBoundary.PBConfirmModeWidget.K2_SetActionModeInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetActionMapInfo(); // Function ProjectBoundary.PBConfirmModeWidget.K2_SetActionMapInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBCustomManager
// Size: 0x30 (Inherited: 0x30)
struct UPBCustomManager : UWorldSubsystem {

	void UnlockItem(struct FName InItemID, struct FDelegate Callback, struct FName InRoleID, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.UnlockItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x117ae90
	void RefreshTestWeapon(struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.RefreshTestWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x117abd0
	void RefreshDisplayActor(); // Function ProjectBoundary.PBCustomManager.RefreshDisplayActor // (Final|Native|Public|BlueprintCallable) // @ game+0x117abb0
	void K2_RefreshDisplayActor(); // Function ProjectBoundary.PBCustomManager.K2_RefreshDisplayActor // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnRestartPlayer(struct AController* NewPlayer); // Function ProjectBoundary.PBCustomManager.K2_OnRestartPlayer // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	bool IsWeaponSkinLocked(struct FName InSkinID, bool bIsWeaponSuitSkin, struct FName InRoleID, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.IsWeaponSkinLocked // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x117aa00
	bool IsWeaponPartSkinLocked(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.IsWeaponPartSkinLocked // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x117a8c0
	bool IsItemLocked(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.IsItemLocked // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x117a7a0
	bool IsChallengeUnlockItem(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.IsChallengeUnlockItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x117a650
	struct FPBWeapon_GameSaved GetWeaponSaved_TestSaved(enum class EPBSlotType InSlotType, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.GetWeaponSaved_TestSaved // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117a560
	struct FPBWeapon_GameSaved GetWeaponSaved(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.GetWeaponSaved // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117a420
	struct TArray<struct FPBWeaponPartSlot_UI> GetWeaponPartSlots_UI(struct FName InRoleID, struct FName InWeaponId, enum class EPBSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetWeaponPartSlots_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1179c80
	struct FName GetWeaponPartSlotEquippedID_TestSaved(enum class EPBSlotType InSlotType, struct FName InWeaponId, enum class EPBPartSlotType InPartSlotType); // Function ProjectBoundary.PBCustomManager.GetWeaponPartSlotEquippedID_TestSaved // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11799c0
	struct FName GetWeaponPartSlotEquippedID(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, enum class EPBPartSlotType InPartSlotType); // Function ProjectBoundary.PBCustomManager.GetWeaponPartSlotEquippedID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1179850
	struct FPBWeaponPartSlot_UI GetWeaponPartSlot_UI(struct FName InRoleID, struct FName InWeaponId, enum class EPBSlotType InSlotType, enum class EPBPartSlotType InWeaponPartSlot); // Function ProjectBoundary.PBCustomManager.GetWeaponPartSlot_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1179ae0
	struct TArray<struct FPBWeaponPartSkin_UI> GetWeaponPartSkins_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, enum class EPBPartSlotType InPartSlotType, struct FName InPartId, enum class EPBSkinClass InSKinClass); // Function ProjectBoundary.PBCustomManager.GetWeaponPartSkins_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1179580
	struct TArray<struct FPBWeaponPartSkinGradeSlot_UI> GetWeaponPartSkinGradeSlots_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, struct FName InPartId); // Function ProjectBoundary.PBCustomManager.GetWeaponPartSkinGradeSlots_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1179010
	struct FPBWeaponPartSkinGradeSlot_UI GetWeaponPartSkinGradeSlot_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, struct FName InPartId, enum class EPBItemGradeType InGradeType); // Function ProjectBoundary.PBCustomManager.GetWeaponPartSkinGradeSlot_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1178de0
	struct FPBWeaponPartSkin_UI GetWeaponPartSkin_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, enum class EPBPartSlotType InPartSlotType, struct FName InPartId, struct FName InSkinID, enum class EPBSkinClass InSKinClass); // Function ProjectBoundary.PBCustomManager.GetWeaponPartSkin_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1179290
	struct TArray<struct FPBWeaponPart_UI> GetWeaponParts_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, enum class EPBPartSlotType InWeaponPartSlotType); // Function ProjectBoundary.PBCustomManager.GetWeaponParts_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x117a1a0
	struct FPBWeaponPart_UI GetWeaponPart_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, enum class EPBPartSlotType InWeaponPartSlotType, struct FName InPartId); // Function ProjectBoundary.PBCustomManager.GetWeaponPart_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1179f20
	struct FPBWeaponPart_DisplayInfo GetWeaponPart_DisplayInfo(struct FName InWeaponPartID); // Function ProjectBoundary.PBCustomManager.GetWeaponPart_DisplayInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1179de0
	struct TArray<struct FPBWeaponOrnament_UI> GetWeaponOrnaments_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.GetWeaponOrnaments_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1178b20
	struct FPBWeaponOrnament_UI GetWeaponOrnament_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, struct FName InOrnamentID); // Function ProjectBoundary.PBCustomManager.GetWeaponOrnament_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1178880
	struct FPBWeaponPartNetworkConfig GetWeaponNetworkConfig_TestSaved(enum class EPBSlotType InSlotType, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.GetWeaponNetworkConfig_TestSaved // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1178740
	struct FPBWeaponPartNetworkConfig GetWeaponNetworkConfig(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.GetWeaponNetworkConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11785c0
	struct TArray<struct FPBWeaponBlueprint_UI> GetWeaponBlueprints_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.GetWeaponBlueprints_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1178390
	struct FPBWeaponBlueprint_UI GetWeaponBlueprint_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, struct FName InBlueprintID); // Function ProjectBoundary.PBCustomManager.GetWeaponBlueprint_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1178150
	struct FPBVehicleSlot_GameSaved GetVehicleSlotSaved_TestSaved(); // Function ProjectBoundary.PBCustomManager.GetVehicleSlotSaved_TestSaved // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1178060
	struct FPBVehicleSlot_GameSaved GetVehicleSlotSaved(struct FName InRoleID); // Function ProjectBoundary.PBCustomManager.GetVehicleSlotSaved // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1177fb0
	struct FPBVehicleSlot_UI GetVehicleSlot_UI(struct FName InRoleID); // Function ProjectBoundary.PBCustomManager.GetVehicleSlot_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11780a0
	struct TArray<struct FPBVehicleSkin_UI> GetVehcileSkins_UI(struct FName InRoleID, struct FName InVehicleID); // Function ProjectBoundary.PBCustomManager.GetVehcileSkins_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1177de0
	struct FPBVehicleSkin_UI GetVehcileSkin_UI(struct FName InRoleID, struct FName InVehicleID, struct FName InSkinID); // Function ProjectBoundary.PBCustomManager.GetVehcileSkin_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1177c00
	struct FPBUnlockDataTableRowBase GetUnlockDataTableRow(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.GetUnlockDataTableRow // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1177940
	struct FName GetSlotEquippedID_TestSaved(enum class EPBSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetSlotEquippedID_TestSaved // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1177720
	struct FName GetSlotEquippedID(struct FName InRoleID, enum class EPBSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetSlotEquippedID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1177640
	struct FPBSlot_UI GetSlot_UI(struct FName InRoleID, enum class EPBSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetSlot_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11777c0
	struct FPBRoleSlot_UI GetRoleSlot_UI(struct FName InRoleID); // Function ProjectBoundary.PBCustomManager.GetRoleSlot_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11774f0
	struct TArray<struct FPBMeleeWeaponSkin_UI> GetMeleeWeaponSkins_UI(struct FName InRoleID, struct FName InMeleeWeaponID); // Function ProjectBoundary.PBCustomManager.GetMeleeWeaponSkins_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1177320
	struct FPBMeleeWeaponSkin_UI GetMeleeWeaponSkin_UI(struct FName InRoleID, struct FName InMeleeWeaponID, struct FName InSkinID); // Function ProjectBoundary.PBCustomManager.GetMeleeWeaponSkin_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1177140
	struct FName GetItemUnlockID(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId); // Function ProjectBoundary.PBCustomManager.GetItemUnlockID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1176c20
	struct TArray<struct FPBItemSkinGradeSlot_UI> GetItemSkinGradeSlots_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InItemID); // Function ProjectBoundary.PBCustomManager.GetItemSkinGradeSlots_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11769f0
	struct FPBItemSkinGradeSlot_UI GetItemSkinGradeSlot_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InItemID, enum class EPBItemGradeType InGradeType); // Function ProjectBoundary.PBCustomManager.GetItemSkinGradeSlot_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11767e0
	struct TArray<struct FPBItem_UI> GetItems_UI(struct FName InRoleID, enum class EPBSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetItems_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1176f70
	struct TArray<struct FName> GetItemIDArrayFromSlotType(struct FName InRoleID, enum class EPBSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetItemIDArrayFromSlotType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1176700
	struct TArray<struct FName> GetItemIDArrayFromCharacterSlotType(struct FName InRoleID, enum class EPBCharacterSlotType InCharacterSlotType); // Function ProjectBoundary.PBCustomManager.GetItemIDArrayFromCharacterSlotType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1176620
	struct FPBItem_UI GetItem_UI(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InItemID); // Function ProjectBoundary.PBCustomManager.GetItem_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1176d60
	struct FPBDisplayActor_Weapon GetDisplayActorConfig_Weapon(enum class EPBSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetDisplayActorConfig_Weapon // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1176510
	struct FPBDisplayActor_Vehicle GetDisplayActorConfig_Vehicle(); // Function ProjectBoundary.PBCustomManager.GetDisplayActorConfig_Vehicle // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11764d0
	struct FPBDisplayActor_Pawn GetDisplayActorConfig_Pawn(); // Function ProjectBoundary.PBCustomManager.GetDisplayActorConfig_Pawn // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1176320
	struct FPBDisplayActor_MeleeWeapon GetDisplayActorConfig_MeleeWeapon(); // Function ProjectBoundary.PBCustomManager.GetDisplayActorConfig_MeleeWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11762e0
	struct TArray<struct FPBCharacterSlot_UI> GetCharacterSlots_UI(struct FName InRoleID); // Function ProjectBoundary.PBCustomManager.GetCharacterSlots_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1176200
	struct FName GetCharacterSlotEquippedID_TestSaved(enum class EPBCharacterSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetCharacterSlotEquippedID_TestSaved // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1176080
	struct FName GetCharacterSlotEquippedID(struct FName InRoleID, enum class EPBCharacterSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetCharacterSlotEquippedID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1175fa0
	struct FPBCharacterSlot_UI GetCharacterSlot_UI(struct FName InRoleID, enum class EPBCharacterSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetCharacterSlot_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1176120
	struct FPBCharacterSkinSlot_GameSaved GetCharacterSkinSlotSaved_TestSaved(); // Function ProjectBoundary.PBCustomManager.GetCharacterSkinSlotSaved_TestSaved // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1175bb0
	struct FPBCharacterSkinSlot_GameSaved GetCharacterSkinSlotSaved(struct FName InRoleID); // Function ProjectBoundary.PBCustomManager.GetCharacterSkinSlotSaved // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1175b10
	struct TArray<struct FPBCharacterSkin_UI> GetCharacterSkins_UI(struct FName InRoleID, enum class EPBCharacterSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetCharacterSkins_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1175dd0
	struct TArray<struct FPBCharacterSkinGradeSlot_UI> GetCharacterSkinGradeSlots_UI(struct FName InRoleID, enum class EPBCharacterSlotType InSlotType); // Function ProjectBoundary.PBCustomManager.GetCharacterSkinGradeSlots_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1175940
	struct FPBCharacterSkinGradeSlot_UI GetCharacterSkinGradeSlot_UI(struct FName InRoleID, enum class EPBCharacterSlotType InSlotType, enum class EPBItemGradeType InGradeType); // Function ProjectBoundary.PBCustomManager.GetCharacterSkinGradeSlot_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1175780
	struct FPBCharacterSkin_UI GetCharacterSkin_UI(struct FName InRoleID, enum class EPBCharacterSlotType InSlotType, struct FName InSkinID); // Function ProjectBoundary.PBCustomManager.GetCharacterSkin_UI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1175bf0
	struct FPBCharacterDisplayInfo GetCharacterDisplayInfo(struct FName InCharacterID); // Function ProjectBoundary.PBCustomManager.GetCharacterDisplayInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11756b0
	void EquipWeaponPartSkin_TestSaved(enum class EPBSlotType InSlotType, struct FName InWeaponId, struct FName InPartId, struct FName InSkinID); // Function ProjectBoundary.PBCustomManager.EquipWeaponPartSkin_TestSaved // (Final|Native|Public|BlueprintCallable) // @ game+0x11753f0
	void EquipWeaponPartSkin(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, struct FName InPartId, struct FName InSkinID, struct FDelegate Callback); // Function ProjectBoundary.PBCustomManager.EquipWeaponPartSkin // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11751f0
	void EquipWeaponPart_TestSaved(enum class EPBSlotType InSlotType, struct FName InWeaponId, enum class EPBPartSlotType InPartSlotType, struct FName InPartId); // Function ProjectBoundary.PBCustomManager.EquipWeaponPart_TestSaved // (Final|Native|Public|BlueprintCallable) // @ game+0x1175550
	void EquipWeaponPart(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, enum class EPBPartSlotType InPartSlotType, struct FName InPartId, struct FDelegate Callback); // Function ProjectBoundary.PBCustomManager.EquipWeaponPart // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1174ff0
	void EquipWeaponOrnament_TestSaved(enum class EPBSlotType InSlotType, struct FName InWeaponId, struct FName InOrnamentID); // Function ProjectBoundary.PBCustomManager.EquipWeaponOrnament_TestSaved // (Final|Native|Public|BlueprintCallable) // @ game+0x1174ee0
	void EquipWeaponOrnament(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, struct FName InOrnamentID, struct FDelegate Callback); // Function ProjectBoundary.PBCustomManager.EquipWeaponOrnament // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1174d30
	void EquipWeaponBlueprint_TestSaved(enum class EPBSlotType InSlotType, struct FName InWeaponId, struct FName InBlueprintID); // Function ProjectBoundary.PBCustomManager.EquipWeaponBlueprint_TestSaved // (Final|Native|Public|BlueprintCallable) // @ game+0x1174c20
	void EquipWeaponBlueprint(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InWeaponId, struct FName InBlueprintID, struct FDelegate Callback); // Function ProjectBoundary.PBCustomManager.EquipWeaponBlueprint // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1174a70
	void EquipVehicleSkin_TestSaved(struct FName InSkinID); // Function ProjectBoundary.PBCustomManager.EquipVehicleSkin_TestSaved // (Final|Native|Public|BlueprintCallable) // @ game+0x11749e0
	void EquipVehicleSkin(struct FName InRoleID, struct FName InSkinID, struct FDelegate Callback); // Function ProjectBoundary.PBCustomManager.EquipVehicleSkin // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11748b0
	void EquipMeleeWeaponSkin_TestSaved(struct FName InMeleeWeaponID, struct FName InSkinID); // Function ProjectBoundary.PBCustomManager.EquipMeleeWeaponSkin_TestSaved // (Final|Native|Public|BlueprintCallable) // @ game+0x11747e0
	void EquipMeleeWeaponSkin(struct FName InRoleID, struct FName InMeleeWeaponID, struct FName InSkinID, struct FDelegate Callback); // Function ProjectBoundary.PBCustomManager.EquipMeleeWeaponSkin // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1174650
	void EquipItem_TestSaved(enum class EPBSlotType InSlotType, struct FName InItemID); // Function ProjectBoundary.PBCustomManager.EquipItem_TestSaved // (Final|Native|Public|BlueprintCallable) // @ game+0x1174580
	void EquipItem(struct FName InRoleID, enum class EPBSlotType InSlotType, struct FName InItemID, struct FDelegate Callback); // Function ProjectBoundary.PBCustomManager.EquipItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11743f0
	void EquipCharacterSkin_TestSaved(enum class EPBCharacterSlotType InSlotType, struct FName InSkinID); // Function ProjectBoundary.PBCustomManager.EquipCharacterSkin_TestSaved // (Final|Native|Public|BlueprintCallable) // @ game+0x1174320
	void EquipCharacterSkin(struct FName InRoleID, enum class EPBCharacterSlotType InSlotType, struct FName InSkinID, struct FDelegate Callback); // Function ProjectBoundary.PBCustomManager.EquipCharacterSkin // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1174190
};

// Class ProjectBoundary.PBDailyChallengeCounter
// Size: 0x270 (Inherited: 0x220)
struct APBDailyChallengeCounter : AActor {
	char pad_220[0x50]; // 0x220(0x50)

	void ServerNotifyGameResult(struct APBPlayerState* InPlayerState, struct FName InGameMode, enum class EPBGameResult InGameResult); // Function ProjectBoundary.PBDailyChallengeCounter.ServerNotifyGameResult // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void AddConditionCount(struct FName InConditionKey, struct APlayerState* InPlayerState, int32_t AddNum); // Function ProjectBoundary.PBDailyChallengeCounter.AddConditionCount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x117e630
};

// Class ProjectBoundary.PBDailyTaskWidget
// Size: 0x268 (Inherited: 0x268)
struct UPBDailyTaskWidget : UPBUserWidget {
};

// Class ProjectBoundary.PBDamageEMPComponent
// Size: 0x1b8 (Inherited: 0xb0)
struct UPBDamageEMPComponent : UActorComponent {
	char pad_B0[0xc0]; // 0xb0(0xc0)
	struct FEMPToleranceConfig EMPToleranceConfig; // 0x170(0x28)
	char pad_198[0x20]; // 0x198(0x20)

	void SetEMPInvulnerable(bool InValue); // Function ProjectBoundary.PBDamageEMPComponent.SetEMPInvulnerable // (Final|Native|Public|BlueprintCallable) // @ game+0x117f400
	bool IsInEMPStaggerEffect(); // Function ProjectBoundary.PBDamageEMPComponent.IsInEMPStaggerEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117eb20
	bool IsEMPEffectState(); // Function ProjectBoundary.PBDamageEMPComponent.IsEMPEffectState // (Final|Native|Public|BlueprintCallable) // @ game+0x117eaf0
	struct FEMPToleranceConfig GetEMPToleranceConfig(); // Function ProjectBoundary.PBDamageEMPComponent.GetEMPToleranceConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x117e950
	float GetCurrentEMPTolerance(); // Function ProjectBoundary.PBDamageEMPComponent.GetCurrentEMPTolerance // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x117e8f0
};

// Class ProjectBoundary.PBDamageImpulseComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UPBDamageImpulseComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class ProjectBoundary.PBDamageNormalComponent
// Size: 0x178 (Inherited: 0xb0)
struct UPBDamageNormalComponent : UActorComponent {
	char pad_B0[0x58]; // 0xb0(0x58)
	struct FAirTightnessConfig AirTightnessConfig; // 0x108(0x14)
	struct FAirPressureConfig AirPressureConfig; // 0x11c(0x1c)
	float OverAirPressureLimit; // 0x138(0x04)
	float OneShotOneKillScaler; // 0x13c(0x04)
	float AirTightness; // 0x140(0x04)
	float AirPressure; // 0x144(0x04)
	char pad_148[0x30]; // 0x148(0x30)

	void SetAirTightness(float InAirTightness); // Function ProjectBoundary.PBDamageNormalComponent.SetAirTightness // (Final|Native|Public|BlueprintCallable) // @ game+0x117f2f0
	void SetAirPressure(float InAirPressure); // Function ProjectBoundary.PBDamageNormalComponent.SetAirPressure // (Final|Native|Public|BlueprintCallable) // @ game+0x117f270
	void OnRep_UpdateAirTightness(); // Function ProjectBoundary.PBDamageNormalComponent.OnRep_UpdateAirTightness // (Final|Native|Protected) // @ game+0x117ec40
	void OnRep_UpdateAirPressure(); // Function ProjectBoundary.PBDamageNormalComponent.OnRep_UpdateAirPressure // (Final|Native|Protected) // @ game+0x117ec20
	bool IsAirIsTightnessCritical(); // Function ProjectBoundary.PBDamageNormalComponent.IsAirIsTightnessCritical // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117eac0
	float GetMaxAirTightness(); // Function ProjectBoundary.PBDamageNormalComponent.GetMaxAirTightness // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117ea20
	float GetMaxAirPressure(); // Function ProjectBoundary.PBDamageNormalComponent.GetMaxAirPressure // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117e9f0
	float GetAirTightnessPercentage(); // Function ProjectBoundary.PBDamageNormalComponent.GetAirTightnessPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117e890
	float GetAirTightness(); // Function ProjectBoundary.PBDamageNormalComponent.GetAirTightness // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117e870
	float GetAirPressurePercentage(); // Function ProjectBoundary.PBDamageNormalComponent.GetAirPressurePercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117e840
	float GetAirPressure(); // Function ProjectBoundary.PBDamageNormalComponent.GetAirPressure // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117e820
	bool CanCompleteOneShotOneKill(); // Function ProjectBoundary.PBDamageNormalComponent.CanCompleteOneShotOneKill // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117e7d0
	void AddMaxAirPressure(float InAirPressureModifier); // Function ProjectBoundary.PBDamageNormalComponent.AddMaxAirPressure // (Final|Native|Public|BlueprintCallable) // @ game+0x117e750
	void AddAirPressure(float InDelta); // Function ProjectBoundary.PBDamageNormalComponent.AddAirPressure // (Final|Native|Public|BlueprintCallable) // @ game+0x117e5b0
};

// Class ProjectBoundary.PBDamageStunComponent
// Size: 0x108 (Inherited: 0xb0)
struct UPBDamageStunComponent : UActorComponent {
	float MaxStunEndurance; // 0xb0(0x04)
	float MinStunEndurance; // 0xb4(0x04)
	float StunEnduranceRecoveryRate; // 0xb8(0x04)
	float StunEnduranceRecoveryDelay; // 0xbc(0x04)
	struct UCurveFloat* StunRotationScalerCurve; // 0xc0(0x08)
	struct UCurveFloat* StunTranslationScalerCurve; // 0xc8(0x08)
	char ImmuneFromStun : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct UCurveFloat* StunRecoveryCurve; // 0xd8(0x08)
	char pad_E0[0x28]; // 0xe0(0x28)

	bool GetIsStunned(); // Function ProjectBoundary.PBDamageStunComponent.GetIsStunned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117e9c0
	float GetCurrentStunEndurancePercentage(); // Function ProjectBoundary.PBDamageStunComponent.GetCurrentStunEndurancePercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117e930
	float GetCurrentStunEndurance(); // Function ProjectBoundary.PBDamageStunComponent.GetCurrentStunEndurance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x117e910
};

// Class ProjectBoundary.PBDamageType
// Size: 0x60 (Inherited: 0x40)
struct UPBDamageType : UDamageType {
	struct UForceFeedbackEffect* HitForceFeedback; // 0x40(0x08)
	struct UForceFeedbackEffect* KilledForceFeedback; // 0x48(0x08)
	struct UTexture* KillTexture; // 0x50(0x08)
	float KillScore; // 0x58(0x04)
	enum class EEquipmentDamageTypes EquiptmentType; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class ProjectBoundary.PBDashModule
// Size: 0x298 (Inherited: 0x250)
struct APBDashModule : APBMobilityModule {
	struct FPBDashMovementConfig MovementConfig; // 0x250(0x0c)
	struct FPBDashConfig DataConfig; // 0x25c(0x1c)
	int32_t CurrentUseTimes; // 0x278(0x04)
	char pad_27C[0xc]; // 0x27c(0x0c)
	struct UPBDashModuleWidget* UIClass; // 0x288(0x08)
	struct UPBDashModuleWidget* PanelWidget; // 0x290(0x08)

	void ServerStartDash(); // Function ProjectBoundary.PBDashModule.ServerStartDash // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x117f220
	float GetCoolingDownPercent(); // Function ProjectBoundary.PBDashModule.GetCoolingDownPercent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x117e8c0
};

// Class ProjectBoundary.PBDashModuleWidget
// Size: 0x268 (Inherited: 0x260)
struct UPBDashModuleWidget : UUserWidget {
	struct APBDashModule* OwningDashModule; // 0x260(0x08)

	void K2_RestoreUseTimes(); // Function ProjectBoundary.PBDashModuleWidget.K2_RestoreUseTimes // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_MinusUseTimes(); // Function ProjectBoundary.PBDashModuleWidget.K2_MinusUseTimes // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Equiped(); // Function ProjectBoundary.PBDashModuleWidget.K2_Equiped // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Enable(); // Function ProjectBoundary.PBDashModuleWidget.K2_Enable // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Disable(); // Function ProjectBoundary.PBDashModuleWidget.K2_Disable // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBDataCollector
// Size: 0x50 (Inherited: 0x28)
struct UPBDataCollector : UObject {
	char pad_28[0x28]; // 0x28(0x28)

	void RecordDeathInfo(struct FString VictimPlayerName, struct FVector DeathLocation, struct FString VictimPlayerTeam, struct FString KillerPlayerName, struct FVector KillerPlayerLocation, struct FString KillerPlayerTeam, struct FString VictimPlayerWeapon, struct FString KillerPlayerWeapon, struct FString KillerRole, struct FString VictimRole); // Function ProjectBoundary.PBDataCollector.RecordDeathInfo // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x117ec60
};

// Class ProjectBoundary.PBDataManager
// Size: 0x2e0 (Inherited: 0x30)
struct UPBDataManager : UGameInstanceSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
	struct FString AnalyticsModuleName; // 0x48(0x10)
	struct FPBUserProfileData UserProfileData; // 0x58(0x230)
	char pad_288[0x8]; // 0x288(0x08)
	struct TMap<struct AActor*, struct FName> DamageCauserOwnerIDMap; // 0x290(0x50)

	void RequestData(); // Function ProjectBoundary.PBDataManager.RequestData // (Final|Native|Public|BlueprintCallable) // @ game+0x117f200
};

// Class ProjectBoundary.PBDataStatistics
// Size: 0x240 (Inherited: 0x220)
struct APBDataStatistics : AActor {
	char pad_220[0x20]; // 0x220(0x20)

	void K2_MedalsInfo(struct APBPlayerState* InPlayerState, struct TArray<struct FMedalsInfoStat> MedalsInfoArray); // Function ProjectBoundary.PBDataStatistics.K2_MedalsInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void K2_KillInfo(struct APBPlayerState* InPlayerState, struct FName ItemId, enum class EPBHitZone HitZone, struct FName GameModeName); // Function ProjectBoundary.PBDataStatistics.K2_KillInfo // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_GameResultInfo(struct APBPlayerState* InPlayerState, struct FName GameModeName, enum class EPBGameResult GameResult); // Function ProjectBoundary.PBDataStatistics.K2_GameResultInfo // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	enum class EPBDataStatisticsType GetStatisticsType(); // Function ProjectBoundary.PBDataStatistics.GetStatisticsType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x117ea90
	struct FString GetStatisticsName(); // Function ProjectBoundary.PBDataStatistics.GetStatisticsName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x117ea50
	struct FName GetID(); // Function ProjectBoundary.PBDataStatistics.GetID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x117e990
};

// Class ProjectBoundary.PBDataStatisticsMgr
// Size: 0x270 (Inherited: 0x220)
struct APBDataStatisticsMgr : AActor {
	struct TMap<struct FName, struct APBDataStatistics*> DataStatisticsMap; // 0x220(0x50)
};

// Class ProjectBoundary.PBEnergyComponent
// Size: 0x110 (Inherited: 0xb0)
struct UPBEnergyComponent : UActorComponent {
	char pad_B0[0x30]; // 0xb0(0x30)
	float RemainingEnergy; // 0xe0(0x04)
	char bConsumingEnergy : 1; // 0xe4(0x01)
	char pad_E4_1 : 7; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float RemainingDelay; // 0xe8(0x04)
	char bIsRecoveringEnergy : 1; // 0xec(0x01)
	char bIsDelayRecoverEnergy : 1; // 0xec(0x01)
	char bIsEnergySupplyStopped : 1; // 0xec(0x01)
	char pad_EC_3 : 5; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FPBEnergyConfig Config; // 0xf0(0x1c)
	char pad_10C[0x4]; // 0x10c(0x04)

	void StopConsumeEnergy(); // Function ProjectBoundary.PBEnergyComponent.StopConsumeEnergy // (Final|Native|Public|BlueprintCallable) // @ game+0x1183990
	void StartConsumeEnergy(); // Function ProjectBoundary.PBEnergyComponent.StartConsumeEnergy // (Final|Native|Public|BlueprintCallable) // @ game+0x11838e0
	void OnRep_RemainingEnergy(); // Function ProjectBoundary.PBEnergyComponent.OnRep_RemainingEnergy // (Final|Native|Protected) // @ game+0x9c37b0
	void OnRep_IsEnergySupplyStopped(); // Function ProjectBoundary.PBEnergyComponent.OnRep_IsEnergySupplyStopped // (Final|Native|Protected) // @ game+0x1183660
	void K2_UpdateRemainingEnergy(); // Function ProjectBoundary.PBEnergyComponent.K2_UpdateRemainingEnergy // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ConsumeCustomEnergy(float Consumption, bool bSpecialMobility); // Function ProjectBoundary.PBEnergyComponent.ConsumeCustomEnergy // (Final|Native|Public|BlueprintCallable) // @ game+0x1182810
};

// Class ProjectBoundary.PBDefenseEnergyComponent
// Size: 0x110 (Inherited: 0x110)
struct UPBDefenseEnergyComponent : UPBEnergyComponent {
};

// Class ProjectBoundary.PBDemoSpectator
// Size: 0x598 (Inherited: 0x570)
struct APBDemoSpectator : APlayerController {
	char pad_570[0x28]; // 0x570(0x28)
};

// Class ProjectBoundary.PBDestructibleMeshComponent
// Size: 0x530 (Inherited: 0x4d0)
struct UPBDestructibleMeshComponent : UStaticMeshComponent {
	struct TArray<struct FMeshPool> DestructionStages; // 0x4d0(0x10)
	struct UParticleSystem* DestructionParticle; // 0x4e0(0x08)
	struct UParticleSystem* ImpactParticle; // 0x4e8(0x08)
	float StageThresholdDamage; // 0x4f0(0x04)
	int32_t SimulatePhysicsStage; // 0x4f4(0x04)
	int32_t BreakDownStage; // 0x4f8(0x04)
	char bSpawnEmitterBeforeDestroy : 1; // 0x4fc(0x01)
	char pad_4FC_1 : 7; // 0x4fc(0x01)
	char pad_4FD[0x3]; // 0x4fd(0x03)
	struct USoundBase* Expo_Sound; // 0x500(0x08)
	char pad_508[0x10]; // 0x508(0x10)
	struct TArray<struct APBCharacter*> CaughtCharacters; // 0x518(0x10)
	char pad_528[0x8]; // 0x528(0x08)
};

// Class ProjectBoundary.PBDisplayModeWidget
// Size: 0x288 (Inherited: 0x268)
struct UPBDisplayModeWidget : UPBUserWidget {
	struct FName ModeName; // 0x268(0x08)
	struct FString ModeForMatchmaking; // 0x270(0x10)
	bool bIsSelect; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)

	void SetConfirmMode(struct FName InModeName); // Function ProjectBoundary.PBDisplayModeWidget.SetConfirmMode // (Final|Native|Protected) // @ game+0x117f370
	void MatchMapComplete(struct FName InMapName, bool bSuccessful); // Function ProjectBoundary.PBDisplayModeWidget.MatchMapComplete // (Final|Native|Protected) // @ game+0x117eb50
	void K2_SetConfirmMode(); // Function ProjectBoundary.PBDisplayModeWidget.K2_SetConfirmMode // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InitModeInfo(); // Function ProjectBoundary.PBDisplayModeWidget.K2_InitModeInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ConfirmMode(); // Function ProjectBoundary.PBDisplayModeWidget.ConfirmMode // (Final|Native|Protected|BlueprintCallable) // @ game+0x117e800
};

// Class ProjectBoundary.PBEarthAndSun
// Size: 0x2d0 (Inherited: 0x220)
struct APBEarthAndSun : AActor {
	struct USceneComponent* SunEarthRoot; // 0x220(0x08)
	struct UStaticMeshComponent* Atmosphere; // 0x228(0x08)
	struct UStaticMeshComponent* Earth; // 0x230(0x08)
	struct UStaticMeshComponent* Sun; // 0x238(0x08)
	struct UArrowComponent* SunDirection; // 0x240(0x08)
	struct UDirectionalLightComponent* SunLight; // 0x248(0x08)
	struct USkyLightComponent* EarthBounceLight; // 0x250(0x08)
	struct FTimeBasedRotation SunRotation; // 0x258(0x18)
	struct FTimeBasedRotation EarthRotation; // 0x270(0x18)
	struct FSunAndEarth SunAndEarth; // 0x288(0x28)
	char bUseWorldTime : 1; // 0x2b0(0x01)
	char pad_2B0_1 : 7; // 0x2b0(0x01)
	char pad_2B1[0x1f]; // 0x2b1(0x1f)
};

// Class ProjectBoundary.PBProjectileBase
// Size: 0x260 (Inherited: 0x220)
struct APBProjectileBase : AActor {
	char pad_220[0x28]; // 0x220(0x28)
	struct APawn* OwnerPawn; // 0x248(0x08)
	struct UTexture2D* InstigatorTexture; // 0x250(0x08)
	enum class EProjectileTypes ProjectileType; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// Class ProjectBoundary.PBProjectile
// Size: 0x680 (Inherited: 0x260)
struct APBProjectile : APBProjectileBase {
	char pad_260[0x4]; // 0x260(0x04)
	char bIsDisabled : 1; // 0x264(0x01)
	char pad_264_1 : 7; // 0x264(0x01)
	char pad_265[0xb]; // 0x265(0x0b)
	struct UProjectileMovementComponent* MovementComp; // 0x270(0x08)
	struct USphereComponent* CollisionComp; // 0x278(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x280(0x08)
	struct USoundCue* ExplosionSound; // 0x288(0x08)
	struct FSoundAttenuationSettings AttenuationSetting; // 0x290(0x3a0)
	struct APBExplosionEffect* ExplosionTemplate; // 0x630(0x08)
	char pad_638[0x8]; // 0x638(0x08)
	bool bExploded; // 0x640(0x01)
	char pad_641[0x3]; // 0x641(0x03)
	int32_t MaxBounceCounts; // 0x644(0x04)
	int32_t BounceCounts; // 0x648(0x04)
	float ImpulseScale; // 0x64c(0x04)
	float BounceImpulseModifier; // 0x650(0x04)
	char bCanBeControl : 1; // 0x654(0x01)
	char pad_654_1 : 7; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	struct APBPlayerState* OwnerPlayerState; // 0x658(0x08)
	char pad_660[0x10]; // 0x660(0x10)
	struct UParticleSystem* ExplodeParticleFX; // 0x670(0x08)
	char bCanBeIntercepted : 1; // 0x678(0x01)
	char bHasBeenIntercepted : 1; // 0x678(0x01)
	char pad_678_2 : 6; // 0x678(0x01)
	char pad_679[0x7]; // 0x679(0x07)

	void OnRep_PlayerState(); // Function ProjectBoundary.PBProjectile.OnRep_PlayerState // (Final|Native|Public) // @ game+0x11bf280
	void OnRep_IsDisabled(); // Function ProjectBoundary.PBProjectile.OnRep_IsDisabled // (Native|Protected) // @ game+0x8935a0
	void OnRep_Exploded(); // Function ProjectBoundary.PBProjectile.OnRep_Exploded // (Native|Protected) // @ game+0x893580
	void OnRep_Bounce(); // Function ProjectBoundary.PBProjectile.OnRep_Bounce // (Native|Protected) // @ game+0x856110
	void OnImpact(struct FHitResult HitResult); // Function ProjectBoundary.PBProjectile.OnImpact // (Native|Public|HasOutParms) // @ game+0x11bf1a0
	void OnBounce(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function ProjectBoundary.PBProjectile.OnBounce // (Native|Public|HasOutParms|HasDefaults) // @ game+0x11bf090
	void NotifyReceivePlayerState(); // Function ProjectBoundary.PBProjectile.NotifyReceivePlayerState // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void MulticastExplode(struct FHitResult Impact); // Function ProjectBoundary.PBProjectile.MulticastExplode // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x11bef50
	void Launch(struct APawn* InOwner, struct APawn* InTarget); // Function ProjectBoundary.PBProjectile.Launch // (Native|Public|BlueprintCallable) // @ game+0x11bedf0
	void K2_Explode(struct FHitResult Impact); // Function ProjectBoundary.PBProjectile.K2_Explode // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	float GetSpeed(); // Function ProjectBoundary.PBProjectile.GetSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11bed00
	char GetShouldBounce(); // Function ProjectBoundary.PBProjectile.GetShouldBounce // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11becd0
	enum class EProjectileTypes GetProjectileType(); // Function ProjectBoundary.PBProjectile.GetProjectileType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11becb0
	struct APBPlayerState* GetOwnerPlayerState(); // Function ProjectBoundary.PBProjectile.GetOwnerPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11bec90
	float GetLifeTime(); // Function ProjectBoundary.PBProjectile.GetLifeTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11bec50
	int32_t GetBounceCounts(); // Function ProjectBoundary.PBProjectile.GetBounceCounts // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11bec20
};

// Class ProjectBoundary.PBEMP
// Size: 0x6f8 (Inherited: 0x680)
struct APBEMP : APBProjectile {
	struct UStaticMeshComponent* EMPMesh; // 0x680(0x08)
	struct UDetonatorComponent* Detonator; // 0x688(0x08)
	char pad_690[0x18]; // 0x690(0x18)
	struct FPBEMPData EMPConfig; // 0x6a8(0x48)
	char bGetDataFromXML : 1; // 0x6f0(0x01)
	char pad_6F0_1 : 7; // 0x6f0(0x01)
	char pad_6F1[0x7]; // 0x6f1(0x07)
};

// Class ProjectBoundary.PBEMPDamageType
// Size: 0x60 (Inherited: 0x60)
struct UPBEMPDamageType : UPBDamageType {
};

// Class ProjectBoundary.PBEMPDamageType_Powerful
// Size: 0x60 (Inherited: 0x60)
struct UPBEMPDamageType_Powerful : UPBEMPDamageType {
};

// Class ProjectBoundary.PBEMPDamageType_Weakness
// Size: 0x60 (Inherited: 0x60)
struct UPBEMPDamageType_Weakness : UPBEMPDamageType {
};

// Class ProjectBoundary.PBEMPGrenade
// Size: 0x760 (Inherited: 0x680)
struct APBEMPGrenade : APBProjectile {
	struct UStaticMeshComponent* EMPGrenadeMesh; // 0x680(0x08)
	struct UPBDynamicMarkableComponent* MarkableComponent; // 0x688(0x08)
	struct UDetonatorComponent* DetonatorComponent; // 0x690(0x08)
	struct FPBEMPGrenadeData EMPGrenadeData; // 0x698(0xc8)
};

// Class ProjectBoundary.PBEnergySupplyComponent
// Size: 0x118 (Inherited: 0x110)
struct UPBEnergySupplyComponent : UPBEnergyComponent {
	enum class EPBEnergySupplyType Type; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// Class ProjectBoundary.PBEngine
// Size: 0xe30 (Inherited: 0xe30)
struct UPBEngine : UGameEngine {
};

// Class ProjectBoundary.PBEnterGame
// Size: 0x278 (Inherited: 0x260)
struct UPBEnterGame : UUserWidget {
	struct FMulticastInlineDelegate OnEnterGame; // 0x260(0x10)
	struct UButton* EnterGameButton; // 0x270(0x08)

	void EnterGame(); // Function ProjectBoundary.PBEnterGame.EnterGame // (Final|Native|Public|BlueprintCallable) // @ game+0x1182990
};

// Class ProjectBoundary.PBEquipmentSkinBase
// Size: 0x30 (Inherited: 0x30)
struct UPBEquipmentSkinBase : UPBSkinBase {
};

// Class ProjectBoundary.PBEULABorad
// Size: 0x290 (Inherited: 0x260)
struct UPBEULABorad : UUserWidget {
	struct FMulticastInlineDelegate OnAcceptUserAgreement; // 0x260(0x10)
	struct FMulticastInlineDelegate OnRefuseUserAgreement; // 0x270(0x10)
	struct UButton* AcceptEULAButton; // 0x280(0x08)
	struct UButton* RefuseEULAButton; // 0x288(0x08)

	void Refuse(); // Function ProjectBoundary.PBEULABorad.Refuse // (Final|Native|Public|BlueprintCallable) // @ game+0x1183680
	void Accept(); // Function ProjectBoundary.PBEULABorad.Accept // (Final|Native|Public|BlueprintCallable) // @ game+0x1182530
};

// Class ProjectBoundary.PBExpandArea
// Size: 0x2c0 (Inherited: 0x260)
struct UPBExpandArea : UUserWidget {
	struct UButton* ButtonSwitch; // 0x260(0x08)
	struct UOverlay* OverlayMask; // 0x268(0x08)
	struct UNamedSlot* Body; // 0x270(0x08)
	struct UVerticalBox* VerticalBoxRoot; // 0x278(0x08)
	float ExtendSpeed; // 0x280(0x04)
	float LimitTime; // 0x284(0x04)
	bool bExtend; // 0x288(0x01)
	char pad_289[0x37]; // 0x289(0x37)

	void Toggle(); // Function ProjectBoundary.PBExpandArea.Toggle // (Final|Native|Protected|BlueprintCallable) // @ game+0x11839b0
	void Shrink(); // Function ProjectBoundary.PBExpandArea.Shrink // (Final|Native|Protected|BlueprintCallable) // @ game+0x11837d0
	void Extend(); // Function ProjectBoundary.PBExpandArea.Extend // (Final|Native|Protected|BlueprintCallable) // @ game+0x11829b0
};

// Class ProjectBoundary.PBExplosionEffect
// Size: 0x2f0 (Inherited: 0x220)
struct APBExplosionEffect : AActor {
	struct UParticleSystem* ExplosionFX; // 0x220(0x08)
	struct UPointLightComponent* ExplosionLight; // 0x228(0x08)
	float ExplosionLightFadeOut; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct USoundCue* ExplosionSound; // 0x238(0x08)
	struct FDecalData Decal; // 0x240(0x18)
	struct FHitResult SurfaceHit; // 0x258(0x8c)
	char pad_2E4[0xc]; // 0x2e4(0x0c)
};

// Class ProjectBoundary.PBFireComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UPBFireComponent : UActorComponent {
	char pad_B0[0x10]; // 0xb0(0x10)

	struct APBProjectileBase* SpawnProjectile(struct FVector Origin, struct FVector Direction); // Function ProjectBoundary.PBFireComponent.SpawnProjectile // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11837f0
	struct APawn* GetOwnerPawn(); // Function ProjectBoundary.PBFireComponent.GetOwnerPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1182ca0
};

// Class ProjectBoundary.PBFireComponent_Projectile
// Size: 0xc8 (Inherited: 0xc0)
struct UPBFireComponent_Projectile : UPBFireComponent {
	struct APBProjectile* ProjectileClass; // 0xc0(0x08)
};

// Class ProjectBoundary.PBFireComponent_RayProjectile
// Size: 0x770 (Inherited: 0xc0)
struct UPBFireComponent_RayProjectile : UPBFireComponent {
	struct FName ProjectileConfigID; // 0xc0(0x08)
	char pad_C8[0x6a8]; // 0xc8(0x6a8)

	void BroadcastFireProjectile(struct FVector_NetQuantize100 Origin, struct FVector_NetQuantize100 Direction); // Function ProjectBoundary.PBFireComponent_RayProjectile.BroadcastFireProjectile // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x1182720
};

// Class ProjectBoundary.PBFriendManager
// Size: 0x290 (Inherited: 0x30)
struct UPBFriendManager : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct UProjectBoundaryInstance* PBGameInstance; // 0x38(0x08)
	char pad_40[0x38]; // 0x40(0x38)
	struct UPBFriendsListWidget* FriendsListWidget; // 0x78(0x08)
	char pad_80[0x20]; // 0x80(0x20)
	struct FMulticastInlineDelegate OnAddFriendSucceedDelegate; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnDeleteFriendSucceedDelegate; // 0xb0(0x10)
	char pad_C0[0x10]; // 0xc0(0x10)
	struct FMulticastInlineDelegate DspOnFriendListRefreshed; // 0xd0(0x10)
	struct FMulticastInlineDelegate DspOnLocalPlayerInfoRefreshed; // 0xe0(0x10)
	struct FMulticastInlineDelegate DspOnRecentPlayerListRefreshed; // 0xf0(0x10)
	char pad_100[0x50]; // 0x100(0x50)
	struct TArray<struct FPBOnlineUserInfo> PartyArray; // 0x150(0x10)
	struct TArray<struct FPBOnlineUserInfo> RecentPlayerArray; // 0x160(0x10)
	char pad_170[0x60]; // 0x170(0x60)
	struct TMap<struct FString, struct FAvatarSingleQuery> AvatarQueryCache; // 0x1d0(0x50)
	char pad_220[0x70]; // 0x220(0x70)

	void TryQueryOneUserInfo(struct FBPUniqueID ID, struct FDelegate InDelegate); // Function ProjectBoundary.PBFriendManager.TryQueryOneUserInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x1183b60
	void TryGetAvatar(struct FString AvatarUrl, struct FDelegate InDelegate, struct FBPUniqueID InUniqueId); // Function ProjectBoundary.PBFriendManager.TryGetAvatar // (Final|Native|Public|BlueprintCallable) // @ game+0x11839d0
	void StartTrackingNewPlayerIsInBlockedList(bool bTrack); // Function ProjectBoundary.PBFriendManager.StartTrackingNewPlayerIsInBlockedList // (Final|Native|Public|BlueprintCallable) // @ game+0x1183900
	void ShowProfile(struct FBPUniqueID InUser, struct FDelegate Callback); // Function ProjectBoundary.PBFriendManager.ShowProfile // (Final|Native|Public|BlueprintCallable) // @ game+0x11836a0
	void OnLocalPlayerOnlineUserInfoRefreshed(struct FPBOnlineUserInfo OnlineUserInfo); // Function ProjectBoundary.PBFriendManager.OnLocalPlayerOnlineUserInfoRefreshed // (Final|Native|Private|HasOutParms) // @ game+0x1183550
	void OnInvitableButtonClicked(); // Function ProjectBoundary.PBFriendManager.OnInvitableButtonClicked // (Final|Native|Public) // @ game+0x1183530
	void OnGetSimpleInfoComplete(struct FUserSimpleInfoMapWrapper InUsersInfoMap, int32_t InErrorCode); // Function ProjectBoundary.PBFriendManager.OnGetSimpleInfoComplete // (Final|Native|Protected|HasOutParms) // @ game+0x11833c0
	bool IsValidID(struct FBPUniqueID ID); // Function ProjectBoundary.PBFriendManager.IsValidID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11832c0
	bool IsFriend(struct FBPUniqueID ID); // Function ProjectBoundary.PBFriendManager.IsFriend // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11831e0
	bool IsAnyBlockedUserInGameNow(); // Function ProjectBoundary.PBFriendManager.IsAnyBlockedUserInGameNow // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11831b0
	void HandleQuerySimpleInfoOfRecentPlayerFromPBServerComplete(struct FUserSimpleInfoMapWrapper UsersInfoMap, int32_t ErrorCode); // Function ProjectBoundary.PBFriendManager.HandleQuerySimpleInfoOfRecentPlayerFromPBServerComplete // (Final|Native|Private|HasOutParms) // @ game+0x1183040
	void HandleQuerySimpleInfoOfOnePlayerFromPBServerComplete(struct FUserSimpleInfoMapWrapper UsersInfoMap, int32_t ErrorCode); // Function ProjectBoundary.PBFriendManager.HandleQuerySimpleInfoOfOnePlayerFromPBServerComplete // (Final|Native|Private|HasOutParms) // @ game+0x1182ed0
	void HandelQueryRecentPlayerFromPBServerComplete(struct FRecentPlayUsersMapWrapper RecentPlayUsersMap, int32_t ErrorCode); // Function ProjectBoundary.PBFriendManager.HandelQueryRecentPlayerFromPBServerComplete // (Final|Native|Private|HasOutParms) // @ game+0x1182d60
	struct TArray<struct FPBOnlineUserInfo> GetRecentPlayerList(); // Function ProjectBoundary.PBFriendManager.GetRecentPlayerList // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1182d30
	void GetPartyInfo(); // Function ProjectBoundary.PBFriendManager.GetPartyInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x1182d10
	struct TArray<struct FPBOnlineUserInfo> GetPartyArray(); // Function ProjectBoundary.PBFriendManager.GetPartyArray // (Final|Native|Public|BlueprintCallable) // @ game+0x1182cd0
	int32_t GetOnlineNum(); // Function ProjectBoundary.PBFriendManager.GetOnlineNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1182c80
	struct FBPUniqueID GetMyID(); // Function ProjectBoundary.PBFriendManager.GetMyID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1182c10
	struct FString GetMyAccountID(); // Function ProjectBoundary.PBFriendManager.GetMyAccountID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1182b90
	struct FPBOnlineUserInfo GetLocalPlayerOnlineUserInfo(); // Function ProjectBoundary.PBFriendManager.GetLocalPlayerOnlineUserInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1182a00
	struct TArray<struct FPBOnlineUserInfo> GetFriendList(); // Function ProjectBoundary.PBFriendManager.GetFriendList // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11829d0
	void DeleteFriend(struct FString InUserId); // Function ProjectBoundary.PBFriendManager.DeleteFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x11828f0
	void AddToFriend(struct FBPUniqueID InUser, struct FDelegate Delegate); // Function ProjectBoundary.PBFriendManager.AddToFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x11825f0
	void AddFriend(struct FString InUserId); // Function ProjectBoundary.PBFriendManager.AddFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x1182550
};

// Class ProjectBoundary.PBFriendsListWidget
// Size: 0x280 (Inherited: 0x268)
struct UPBFriendsListWidget : UPBUserWidget {
	struct UPanelWidget* FriendsList; // 0x268(0x08)
	struct UPBSinglePlayerWidget* ItemClass; // 0x270(0x08)
	int32_t MaxNumPerRaw; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)

	void UpdateFriendsList(struct TArray<struct FPBOnlineUserInfo> InFriendList, int32_t InOnlineUserNum); // Function ProjectBoundary.PBFriendsListWidget.UpdateFriendsList // (Final|Native|Protected|HasOutParms) // @ game+0x1186df0
	void K2_SetFriendsListTitleInfo(bool bInHasCountBox, int32_t InOnlineNum, int32_t InFriendsNum); // Function ProjectBoundary.PBFriendsListWidget.K2_SetFriendsListTitleInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnInvitableButtonClicked(); // Function ProjectBoundary.PBFriendsListWidget.K2_OnInvitableButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBGameEventManager
// Size: 0x4b8 (Inherited: 0x220)
struct APBGameEventManager : AInfo {
	struct FMulticastInlineDelegate ServerKillDetailInfoDelegates; // 0x220(0x10)
	struct FMulticastInlineDelegate ServerAssistEventDelegates; // 0x230(0x10)
	struct FMulticastInlineDelegate ServerSensorMarkEventDelegates; // 0x240(0x10)
	struct FMulticastInlineDelegate ServerVisionMarkEventDelegates; // 0x250(0x10)
	struct FMulticastInlineDelegate ServerOccupyZoneDelegates; // 0x260(0x10)
	struct FMulticastInlineDelegate ClientNotifyRealtimeChallengeDelegate; // 0x270(0x10)
	struct FMulticastInlineDelegate ClientNotifyKillTargetDelegate; // 0x280(0x10)
	struct FMulticastInlineDelegate NotifyHitTargetDelegate; // 0x290(0x10)
	struct FMulticastInlineDelegate DestoryArmorDelegate; // 0x2a0(0x10)
	struct FMulticastInlineDelegate GameEndDelegate; // 0x2b0(0x10)
	struct FMulticastInlineDelegate GameRoundEndDelegate; // 0x2c0(0x10)
	struct FMulticastInlineDelegate WeaponFireDelegate; // 0x2d0(0x10)
	struct FMulticastInlineDelegate NotifyInventoryChanged; // 0x2e0(0x10)
	struct FMulticastInlineDelegate NotifyHealthChanged; // 0x2f0(0x10)
	struct FMulticastInlineDelegate ClientNotifyCurrentWeaponChanged; // 0x300(0x10)
	struct FMulticastInlineDelegate ClientNotifyAmmoChanged; // 0x310(0x10)
	struct FMulticastInlineDelegate ServerSpawnCharacterDelegate; // 0x320(0x10)
	struct FMulticastInlineDelegate ServerNotifyRealtimeChallengeDelegate; // 0x330(0x10)
	struct FMulticastInlineDelegate ServerStatHitTargetDelegate; // 0x340(0x10)
	struct FMulticastInlineDelegate OnBlockedUserShowUpInGameDelegate; // 0x350(0x10)
	struct FMulticastInlineDelegate OnBlockedUserShowUpInTeamDelegate; // 0x360(0x10)
	char pad_370[0x48]; // 0x370(0x48)
	struct FMulticastInlineDelegate ClientVoiceUpdateStateDelegate; // 0x3b8(0x10)
	struct FMulticastInlineDelegate UpdateShowArmoryRoleEvent; // 0x3c8(0x10)
	struct FMulticastInlineDelegate UpdateShowMemberEvent; // 0x3d8(0x10)
	struct FMulticastInlineDelegate UpdateSquadMemberEvent; // 0x3e8(0x10)
	struct FMulticastInlineDelegate MatchMapCompleteEvent; // 0x3f8(0x10)
	struct FMulticastInlineDelegate ConfirmModeEvent; // 0x408(0x10)
	struct FMulticastInlineDelegate RefreshPathEvent; // 0x418(0x10)
	struct FMulticastInlineDelegate SaveModifyEvent; // 0x428(0x10)
	struct FMulticastInlineDelegate EnterModifyEvent; // 0x438(0x10)
	struct FMulticastInlineDelegate ReturnTestEvent; // 0x448(0x10)
	struct FMulticastInlineDelegate ModifyEvent; // 0x458(0x10)
	struct FMulticastInlineDelegate EnterSightModifyEvent; // 0x468(0x10)
	struct FMulticastInlineDelegate RefreshWeaponEvent; // 0x478(0x10)
	struct FMulticastInlineDelegate BackPreviousEvent; // 0x488(0x10)
	struct FMulticastInlineDelegate RefreshChallengeEvent; // 0x498(0x10)
	struct FMulticastInlineDelegate DisableSelectRoleEvent; // 0x4a8(0x10)
};

// Class ProjectBoundary.PBGameMode
// Size: 0x4c0 (Inherited: 0x308)
struct APBGameMode : AGameMode {
	struct APawn* BotPawnClass; // 0x308(0x08)
	char pad_310[0x4]; // 0x310(0x04)
	int32_t RoundTime; // 0x314(0x04)
	int32_t TimeBetweenMatches; // 0x318(0x04)
	int32_t KillScore; // 0x31c(0x04)
	int32_t DeathScore; // 0x320(0x04)
	float DamageSelfScale; // 0x324(0x04)
	int32_t MaxBots; // 0x328(0x04)
	char bFixedTeamNum : 1; // 0x32c(0x01)
	char pad_32C_1 : 7; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	int32_t TeamNumZero; // 0x330(0x04)
	char pad_334[0x2c]; // 0x334(0x2c)
	struct FString DataServerUrl; // 0x360(0x10)
	struct TArray<struct APBAIController*> BotControllers; // 0x370(0x10)
	char pad_380[0xa]; // 0x380(0x0a)
	char bIsQuickMode : 1; // 0x38a(0x01)
	char pad_38A_1 : 7; // 0x38a(0x01)
	char pad_38B[0x5]; // 0x38b(0x05)
	struct TArray<struct APBPickup*> LevelPickups; // 0x390(0x10)
	struct UUserWidget* CurrentWidget; // 0x3a0(0x08)
	char pad_3A8[0x10]; // 0x3a8(0x10)
	struct UUserWidget* HelmetHudWidgetClass; // 0x3b8(0x08)
	int32_t WarmupTime; // 0x3c0(0x04)
	int32_t WarmupTimeMin; // 0x3c4(0x04)
	enum class EEndGameMode EndGameMode; // 0x3c8(0x01)
	char UseRandomName : 1; // 0x3c9(0x01)
	char HostNameTag : 1; // 0x3c9(0x01)
	char pad_3C9_2 : 6; // 0x3c9(0x01)
	char pad_3CA[0x56]; // 0x3ca(0x56)
	float KillingStreakDuration; // 0x420(0x04)
	int32_t KillingStreakBonus; // 0x424(0x04)
	int32_t HitHeadBonus; // 0x428(0x04)
	char pad_42C[0x94]; // 0x42c(0x94)

	void StoreSelectedMapName(struct FString MapName); // Function ProjectBoundary.PBGameMode.StoreSelectedMapName // (Final|Native|Public|BlueprintCallable) // @ game+0x1186cc0
	void StoreGameMode(struct FString Mode); // Function ProjectBoundary.PBGameMode.StoreGameMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1186bd0
	void StoreFriendBotNum(int32_t Num); // Function ProjectBoundary.PBGameMode.StoreFriendBotNum // (Final|Native|Public|BlueprintCallable) // @ game+0x1186b40
	void StoreEnemyBotNum(int32_t Num); // Function ProjectBoundary.PBGameMode.StoreEnemyBotNum // (Final|Native|Public|BlueprintCallable) // @ game+0x1186ab0
	void SetRoundTime(int32_t Minute); // Function ProjectBoundary.PBGameMode.SetRoundTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1186a20
	void SetRoomMaxNum(int32_t Num); // Function ProjectBoundary.PBGameMode.SetRoomMaxNum // (Final|Native|Public|BlueprintCallable) // @ game+0x1186990
	void SetFriendlyFireSwitch(bool InState); // Function ProjectBoundary.PBGameMode.SetFriendlyFireSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1186900
	void SetAllowBots(bool bInAllowBots, int32_t InMaxBots); // Function ProjectBoundary.PBGameMode.SetAllowBots // (Final|Exec|Native|Public) // @ game+0x1186830
	bool PBReadyToStartMatch(); // Function ProjectBoundary.PBGameMode.PBReadyToStartMatch // (Native|Event|Public|BlueprintEvent) // @ game+0x1186800
	enum class EPBGameMode GetThisGameMode(); // Function ProjectBoundary.PBGameMode.GetThisGameMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1186720
	struct FString GetSelectedMapName(); // Function ProjectBoundary.PBGameMode.GetSelectedMapName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11866a0
	struct FString GetSelectedGameMode(); // Function ProjectBoundary.PBGameMode.GetSelectedGameMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1186620
	int32_t GetRoundTime(); // Function ProjectBoundary.PBGameMode.GetRoundTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11865f0
	int32_t GetRoomMaxNum(); // Function ProjectBoundary.PBGameMode.GetRoomMaxNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11865c0
	enum class EPBCamp GetPlayerTeamStatus(struct APBPlayerState* PlayerStateLeft, struct APBPlayerState* PlayerStateRight); // Function ProjectBoundary.PBGameMode.GetPlayerTeamStatus // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11864f0
	struct FString GetModeShortName(); // Function ProjectBoundary.PBGameMode.GetModeShortName // (Native|Public|BlueprintCallable) // @ game+0x1186470
	int32_t GetFriendBotNum(); // Function ProjectBoundary.PBGameMode.GetFriendBotNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1186440
	int32_t GetEnemyBotNum(); // Function ProjectBoundary.PBGameMode.GetEnemyBotNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1186410
	void FinishMatch(bool bBreak); // Function ProjectBoundary.PBGameMode.FinishMatch // (Exec|Native|Public) // @ game+0x1186380
};

// Class ProjectBoundary.PBGameMode_CSTM
// Size: 0x4c0 (Inherited: 0x4c0)
struct APBGameMode_CSTM : APBGameMode {
};

// Class ProjectBoundary.PBGameMode_CTV
// Size: 0x4d0 (Inherited: 0x4c0)
struct APBGameMode_CTV : APBGameMode {
	char pad_4C0[0x10]; // 0x4c0(0x10)
};

// Class ProjectBoundary.PBGameMode_Demo
// Size: 0x4c0 (Inherited: 0x4c0)
struct APBGameMode_Demo : APBGameMode {
};

// Class ProjectBoundary.PBTeamGameMode
// Size: 0x618 (Inherited: 0x4c0)
struct APBTeamGameMode : APBGameMode {
	struct TMap<int32_t, struct APBTeamStartZone*> TeamStartZoneMap; // 0x4c0(0x50)
	char pad_510[0x108]; // 0x510(0x108)
};

// Class ProjectBoundary.PBGameMode_Domination
// Size: 0x638 (Inherited: 0x618)
struct APBGameMode_Domination : APBTeamGameMode {
	char pad_618[0x18]; // 0x618(0x18)
	float OccupationCompletionPoint; // 0x630(0x04)
	char pad_634[0x4]; // 0x634(0x04)
};

// Class ProjectBoundary.PBGameMode_Elimination
// Size: 0x530 (Inherited: 0x4c0)
struct APBGameMode_Elimination : APBGameMode {
	char pad_4C0[0x1]; // 0x4c0(0x01)
	char RoundNum; // 0x4c1(0x01)
	char pad_4C2[0x6e]; // 0x4c2(0x6e)
};

// Class ProjectBoundary.PBIndividualGameMode
// Size: 0x5d8 (Inherited: 0x4c0)
struct APBIndividualGameMode : APBGameMode {
	char pad_4C0[0x118]; // 0x4c0(0x118)
};

// Class ProjectBoundary.PBGameMode_FreeForAll
// Size: 0x5f0 (Inherited: 0x5d8)
struct APBGameMode_FreeForAll : APBIndividualGameMode {
	struct TArray<struct APBPlayerState*> WinPlayerStateArray; // 0x5d8(0x10)
	char pad_5E8[0x4]; // 0x5e8(0x04)
	int32_t TopCount; // 0x5ec(0x04)
};

// Class ProjectBoundary.PBGameMode_TDM
// Size: 0x620 (Inherited: 0x618)
struct APBGameMode_TDM : APBTeamGameMode {
	char pad_618[0x8]; // 0x618(0x08)

	bool IsWinner(struct APBPlayerState* PlayerState); // Function ProjectBoundary.PBGameMode_TDM.IsWinner // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118c680
};

// Class ProjectBoundary.PBGameMode_KOHMatch
// Size: 0x640 (Inherited: 0x620)
struct APBGameMode_KOHMatch : APBGameMode_TDM {
	int32_t PerSecondScore; // 0x620(0x04)
	int32_t SwitchTime; // 0x624(0x04)
	int32_t StartShowTime; // 0x628(0x04)
	int32_t PerTimePlayerScore; // 0x62c(0x04)
	int32_t ZoneKillScore; // 0x630(0x04)
	int32_t ZoneFirstScore; // 0x634(0x04)
	int32_t ZonePlayerScoreTime; // 0x638(0x04)
	char pad_63C[0x4]; // 0x63c(0x04)
};

// Class ProjectBoundary.PBGameMode_Menu
// Size: 0x530 (Inherited: 0x4c0)
struct APBGameMode_Menu : APBGameMode {
	struct UPBUserWidget* WelcomeMenuWidgetClass; // 0x4c0(0x08)
	struct UPBPageWidget* FinalSettleClass; // 0x4c8(0x08)
	struct UPBPageWidget* MainMenuWidgetClass; // 0x4d0(0x08)
	struct UPBUserWidget* MainMenuBaseWidgetClass; // 0x4d8(0x08)
	struct UPBUserWidget* MultiplayerWidgetClass; // 0x4e0(0x08)
	struct UPBUserWidget* JoinMenuWidgetClass; // 0x4e8(0x08)
	struct UPBUserWidget* GameSettingWidgetClass; // 0x4f0(0x08)
	struct UPBUserWidget* GameModeWidgetClass; // 0x4f8(0x08)
	struct UPBUserWidget* MapSelectWidgetClass; // 0x500(0x08)
	struct ULevelStreaming* TestLevelStreaming; // 0x508(0x08)
	struct ULevelStreaming* MenuLevelStreaming; // 0x510(0x08)
	struct FName TestWeaponLevelName; // 0x518(0x08)
	struct FName MenuLevelName; // 0x520(0x08)
	enum class EPBSlotType TestSlot; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)

	void SwitchToTestWeaponLevel(); // Function ProjectBoundary.PBGameMode_Menu.SwitchToTestWeaponLevel // (Final|Native|Public) // @ game+0x1186dd0
	void SwitchToMenuLevel(); // Function ProjectBoundary.PBGameMode_Menu.SwitchToMenuLevel // (Final|Native|Public) // @ game+0x1186db0
	void OnTestWeaponLevelShown(); // Function ProjectBoundary.PBGameMode_Menu.OnTestWeaponLevelShown // (Final|Native|Protected) // @ game+0x11867e0
	void OnMenuLevelShown(); // Function ProjectBoundary.PBGameMode_Menu.OnMenuLevelShown // (Final|Native|Protected) // @ game+0x11867c0
	void LeaveTestWeapon(float DelayTime); // Function ProjectBoundary.PBGameMode_Menu.LeaveTestWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x1186740
	void K2_TestWeaponLevelShown(); // Function ProjectBoundary.PBGameMode_Menu.K2_TestWeaponLevelShown // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_MenuLevelShown(); // Function ProjectBoundary.PBGameMode_Menu.K2_MenuLevelShown // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_LeaveTestWeapon(); // Function ProjectBoundary.PBGameMode_Menu.K2_LeaveTestWeapon // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_EnterTestWeapon(); // Function ProjectBoundary.PBGameMode_Menu.K2_EnterTestWeapon // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void EnterTestWeapon(float DelayTime); // Function ProjectBoundary.PBGameMode_Menu.EnterTestWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x1186300
};

// Class ProjectBoundary.PBGameMode_RushMatch
// Size: 0x620 (Inherited: 0x620)
struct APBGameMode_RushMatch : APBGameMode_TDM {
};

// Class ProjectBoundary.PBGameMode_Skirmish
// Size: 0x748 (Inherited: 0x530)
struct APBGameMode_Skirmish : APBGameMode_Elimination {
	struct UDataTable* PBRoleFixedConfig; // 0x530(0x08)
	char pad_538[0x1]; // 0x538(0x01)
	char bIsOnlyFixRoleConfig : 1; // 0x539(0x01)
	char pad_539_1 : 7; // 0x539(0x01)
	char pad_53A[0x6]; // 0x53a(0x06)
	struct FPBRoleNetworkConfig SelectedRoleConfig; // 0x540(0x140)
	struct TMap<struct FName, struct FPBRoleCustomScope> RoleConfigMap; // 0x680(0x50)
	struct TMap<struct FName, struct FPBFixRoleConfigCache> FixRoleConfigMap; // 0x6d0(0x50)
	float NextStartRoundDelayTime; // 0x720(0x04)
	int32_t HideRoleAndCapturableZoneTimeLeft; // 0x724(0x04)
	int32_t SkirmishWarmupTime; // 0x728(0x04)
	int32_t MinStartPlayerNum; // 0x72c(0x04)
	int32_t MinStartPWaitingStartDelayTime; // 0x730(0x04)
	int32_t CloseJoinPlayerTime; // 0x734(0x04)
	int32_t FixedRoleConfigRandomPercentage; // 0x738(0x04)
	int32_t SelectRoleTime; // 0x73c(0x04)
	float WinScoreDefault; // 0x740(0x04)
	char pad_744[0x4]; // 0x744(0x04)
};

// Class ProjectBoundary.PBGameMode_SmallDomination
// Size: 0x638 (Inherited: 0x638)
struct APBGameMode_SmallDomination : APBGameMode_Domination {
};

// Class ProjectBoundary.PBGameMode_SmallTeamDeathMatch
// Size: 0x620 (Inherited: 0x620)
struct APBGameMode_SmallTeamDeathMatch : APBGameMode_TDM {
};

// Class ProjectBoundary.PBGameMode_TrainingL
// Size: 0x4c0 (Inherited: 0x4c0)
struct APBGameMode_TrainingL : APBGameMode {
};

// Class ProjectBoundary.PBGameplayAbilityBase
// Size: 0x408 (Inherited: 0x3b0)
struct UPBGameplayAbilityBase : UGameplayAbility {
	struct TMap<struct FGameplayTag, struct FPBGameplayEffectContainer> EffectContainerMap; // 0x3b0(0x50)
	bool bActivateAbilityOnGranted; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)

	struct FPBGameplayEffectContainerSpec MakeEffectContainerSpecFromContainer(struct FPBGameplayEffectContainer Container, struct FGameplayEventData EventData, int32_t OverrideGameplayLevel); // Function ProjectBoundary.PBGameplayAbilityBase.MakeEffectContainerSpecFromContainer // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118ca70
	struct FPBGameplayEffectContainerSpec MakeEffectContainerSpec(struct FGameplayTag ContainerTag, struct FGameplayEventData EventData, int32_t OverrideGameplayLevel); // Function ProjectBoundary.PBGameplayAbilityBase.MakeEffectContainerSpec // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118c830
	struct TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainerSpec(struct FPBGameplayEffectContainerSpec ContainerSpec); // Function ProjectBoundary.PBGameplayAbilityBase.ApplyEffectContainerSpec // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118b3d0
	struct TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainer(struct FGameplayTag ContainerTag, struct FGameplayEventData EventData, int32_t OverrideGameplayLevel); // Function ProjectBoundary.PBGameplayAbilityBase.ApplyEffectContainer // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118b170
};

// Class ProjectBoundary.PBGameplayEventManager
// Size: 0x1d0 (Inherited: 0x30)
struct UPBGameplayEventManager : UWorldSubsystem {
	struct FMulticastInlineDelegate UpdatePlayerScoreEvent; // 0x30(0x10)
	struct FMulticastInlineDelegate UpdatePlayerKillEvent; // 0x40(0x10)
	struct FMulticastInlineDelegate UpdatePlayerAssistEvent; // 0x50(0x10)
	struct FMulticastInlineDelegate UpdatePlayerDeathEvent; // 0x60(0x10)
	struct FMulticastInlineDelegate UpdatePlayerPingEvent; // 0x70(0x10)
	struct FMulticastInlineDelegate UpdatePlayerIsDyingEvent; // 0x80(0x10)
	struct FMulticastInlineDelegate UpdateMemberInfoEvent; // 0x90(0x10)
	struct FMulticastInlineDelegate UpdatePlayerIconEvent; // 0xa0(0x10)
	struct FMulticastInlineDelegate MutePlayerEvent; // 0xb0(0x10)
	struct FMulticastInlineDelegate PendingMutePlayerEvent; // 0xc0(0x10)
	struct FMulticastInlineDelegate MuteAllPlayersEvent; // 0xd0(0x10)
	struct FMulticastInlineDelegate UpdateGameRemainingTimeEvent; // 0xe0(0x10)
	struct FMulticastInlineDelegate AddPlayerEvent; // 0xf0(0x10)
	struct FMulticastInlineDelegate RemovePlayerEvent; // 0x100(0x10)
	struct FMulticastInlineDelegate UpdateTeamScoreEvent; // 0x110(0x10)
	struct FMulticastInlineDelegate UpdateTeamNumberEvent; // 0x120(0x10)
	struct FMulticastInlineDelegate UpdateBattleBroadPlayerListEvent; // 0x130(0x10)
	struct FMulticastInlineDelegate UpdateTopPlayerListEvent; // 0x140(0x10)
	struct FMulticastInlineDelegate UpdateTeamMemberInfoEvent; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
	struct FMulticastInlineDelegate OccupyZoneEvent; // 0x170(0x10)
	char pad_180[0x10]; // 0x180(0x10)
	struct FMulticastInlineDelegate UpdateZoneStatusEvent; // 0x190(0x10)
	struct FMulticastInlineDelegate ActiveCapturableZoneEvent; // 0x1a0(0x10)
	struct FMulticastInlineDelegate MatchIsWaitingToStartEvent; // 0x1b0(0x10)
	char pad_1C0[0x10]; // 0x1c0(0x10)
};

// Class ProjectBoundary.PBGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UPBGameplayStatics : UBlueprintFunctionLibrary {

	bool ApplyRadialDamageWithFalloff(struct UObject* WorldContextObject, struct FVector Origin, struct FPBRadialDamageParams RadialDamageParams, struct TArray<enum class ECollisionChannel> QueryChannel, struct UDamageType* DamageTypeClass, struct TArray<struct AActor*> IgnoreActors, struct UTexture2D* InstigatorTexture, struct AActor* DamageCauser, struct AController* InstigatedByController); // Function ProjectBoundary.PBGameplayStatics.ApplyRadialDamageWithFalloff // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x118b7b0
	float ApplyPointDamage(struct AActor* DamagedActor, float BaseDamage, struct FVector HitFromDirection, struct FHitResult HitInfo, struct AController* EventInstigator, struct AActor* DamageCauser, struct UDamageType* DamageTypeClass, struct UTexture2D* InstigatorTexture); // Function ProjectBoundary.PBGameplayStatics.ApplyPointDamage // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x118b500
};

// Class ProjectBoundary.PBGameState
// Size: 0x630 (Inherited: 0x290)
struct APBGameState : AGameState {
	struct UPBDataCollector* CurrentGameDataCollector; // 0x290(0x08)
	struct APBItemUnlockManager* PBItemUnlockManager; // 0x298(0x08)
	struct APBAchievementManager* PBAchievementManager; // 0x2a0(0x08)
	struct APBDataStatisticsMgr* PBDataStatisticsMgr; // 0x2a8(0x08)
	struct APBGameEventManager* PBGameEventMgr; // 0x2b0(0x08)
	char pad_2B8[0x108]; // 0x2b8(0x108)
	struct APBItemUnlockManager* PBUnlockManagerClassPtr; // 0x3c0(0x08)
	struct APBAchievementManager* PBAchievementManagerClassPtr; // 0x3c8(0x08)
	struct APBGameEventManager* PBGameEventManagerClassPtr; // 0x3d0(0x08)
	struct UPBTopScoreBoardWidget* TopScoreBoardWidgetClass; // 0x3d8(0x08)
	struct UPBUserWidget* FeedbackForkClass; // 0x3e0(0x08)
	struct UPBTopScoreBoardWidget* TopScoreBoardWidget; // 0x3e8(0x08)
	struct UPBUserWidget* FeedbackForkWidget; // 0x3f0(0x08)
	struct APBDailyChallengeCounter* DailyChallengeCounter; // 0x3f8(0x08)
	struct UPBWorldManagerV2* PBWorldManager; // 0x400(0x08)
	struct APBWeaponCapture* PBWeaponCaprure; // 0x408(0x08)
	int32_t NumTeams; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct TArray<int32_t> TeamScores; // 0x418(0x10)
	int32_t TeamZeroKills; // 0x428(0x04)
	int32_t TeamOneKills; // 0x42c(0x04)
	int32_t RemainingTime; // 0x430(0x04)
	int32_t WaitingJoinRemainingTime; // 0x434(0x04)
	int32_t WaitingToStartRemainingTime; // 0x438(0x04)
	enum class EPBGameMode CurrentGameModeEnum; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	struct FString CurrentGameModeShortName; // 0x440(0x10)
	bool bTimerPaused; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct TArray<struct APBPlayerState*> PBPlayerArray; // 0x458(0x10)
	struct FMulticastInlineDelegate OnMatchHasStarted; // 0x468(0x10)
	struct FMulticastInlineDelegate OnMatchHasEnd; // 0x478(0x10)
	char bStartTestWeapon : 1; // 0x488(0x01)
	char bDieInCSTM : 1; // 0x488(0x01)
	char bIsInShootingRange : 1; // 0x488(0x01)
	char pad_488_3 : 3; // 0x488(0x01)
	char bServerMapLoadComplete : 1; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct FString HostMapName; // 0x490(0x10)
	struct FString HostMapDisplayName; // 0x4a0(0x10)
	int32_t HostPlayerNum; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct FString WaitingToJoinMapName; // 0x4b8(0x10)
	char pad_4C8[0x8]; // 0x4c8(0x08)
	struct UPBMainMenuWidget* GameTipsWidget; // 0x4d0(0x08)
	int32_t TotalGameTime; // 0x4d8(0x04)
	char pad_4DC[0x104]; // 0x4dc(0x104)
	struct UPBMainMenuWidget* GameTipsWidgetClass; // 0x5e0(0x08)
	float DelayShowGameTipsTime; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct TArray<struct FPBTeamMemberIconInfo> MemberIconInfoList; // 0x5f0(0x10)
	char bChangeMapArray : 1; // 0x600(0x01)
	char pad_600_1 : 7; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	int32_t DefaultRescueNum; // 0x604(0x04)
	char SwitchDeathCamera : 1; // 0x608(0x01)
	char pad_608_1 : 7; // 0x608(0x01)
	char pad_609[0x3]; // 0x609(0x03)
	struct FName MusciID_MatchStart; // 0x60c(0x08)
	struct FName MusciID_MatchWon; // 0x614(0x08)
	struct FName MusciID_MatchLost; // 0x61c(0x08)
	struct FName MusciID_MatchDraw; // 0x624(0x08)
	char pad_62C[0x4]; // 0x62c(0x04)

	void UnloadMapCompleteMap(); // Function ProjectBoundary.PBGameState.UnloadMapCompleteMap // (Final|Native|Public) // @ game+0x118ce70
	struct TArray<struct APBPlayerState*> SortPlayerState(); // Function ProjectBoundary.PBGameState.SortPlayerState // (Native|Public|BlueprintCallable) // @ game+0x118cdf0
	void SetCurrentStreamLevelsVisible(bool bVisible); // Function ProjectBoundary.PBGameState.SetCurrentStreamLevelsVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x118cd60
	void OnRep_TeamScores(); // Function ProjectBoundary.PBGameState.OnRep_TeamScores // (Final|Native|Public) // @ game+0x118cd40
	void OnRep_TeamMemberInfo(); // Function ProjectBoundary.PBGameState.OnRep_TeamMemberInfo // (Final|Native|Private) // @ game+0x118cd20
	void OnRep_ServerMapLoadComplete(); // Function ProjectBoundary.PBGameState.OnRep_ServerMapLoadComplete // (Final|Native|Public) // @ game+0x118cd00
	void OnRep_RemainingTime(); // Function ProjectBoundary.PBGameState.OnRep_RemainingTime // (Final|Native|Public) // @ game+0x118cce0
	void NotifyMatchHasStarted(); // Function ProjectBoundary.PBGameState.NotifyMatchHasStarted // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void LoadMap(struct FString MapName); // Function ProjectBoundary.PBGameState.LoadMap // (Final|Native|Public|BlueprintCallable) // @ game+0x118c740
	void LoadCompleteMap(); // Function ProjectBoundary.PBGameState.LoadCompleteMap // (Final|Native|Public|BlueprintCallable) // @ game+0x118c720
	void K2_RoundEnded(enum class EPBGameResult GameResult); // Function ProjectBoundary.PBGameState.K2_RoundEnded // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_RealtimeAchievementKeyArray(struct TArray<struct FString> AchievementKeys); // Function ProjectBoundary.PBGameState.K2_RealtimeAchievementKeyArray // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void K2_KillTarget(float KillDistance, struct FText TargetName); // Function ProjectBoundary.PBGameState.K2_KillTarget // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void K2_GameStarted(); // Function ProjectBoundary.PBGameState.K2_GameStarted // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_GameEnded(enum class EPBGameResult GameResult); // Function ProjectBoundary.PBGameState.K2_GameEnded // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_CompleteRealChallenge(struct TArray<struct FName> ChallengeIDArray); // Function ProjectBoundary.PBGameState.K2_CompleteRealChallenge // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	bool IsTimerPaused(); // Function ProjectBoundary.PBGameState.IsTimerPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118c660
	bool IsLoadCompleteMap(); // Function ProjectBoundary.PBGameState.IsLoadCompleteMap // (Final|Native|Public|BlueprintCallable) // @ game+0x118c630
	int32_t GetWaitingJoinRemainingTime(); // Function ProjectBoundary.PBGameState.GetWaitingJoinRemainingTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118c600
	struct TArray<struct FUnlockItem> GetUnlockItem(); // Function ProjectBoundary.PBGameState.GetUnlockItem // (Final|Native|Public|BlueprintCallable) // @ game+0x118c510
	struct FText GetTotalGameTime(); // Function ProjectBoundary.PBGameState.GetTotalGameTime // (Final|Native|Public|BlueprintCallable) // @ game+0x118c470
	struct TArray<int32_t> GetTeamScores(); // Function ProjectBoundary.PBGameState.GetTeamScores // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x118c440
	struct FString GetSelfSelectMap(); // Function ProjectBoundary.PBGameState.GetSelfSelectMap // (Final|Native|Public|BlueprintCallable) // @ game+0x118c3c0
	struct TArray<struct FString> GetSelectMapInfo(); // Function ProjectBoundary.PBGameState.GetSelectMapInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x118c390
	int32_t GetRemainingTime(); // Function ProjectBoundary.PBGameState.GetRemainingTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118c360
	struct TArray<struct FAchievementInfo> GetRealtimeAchievementArray(); // Function ProjectBoundary.PBGameState.GetRealtimeAchievementArray // (Final|Native|Public|BlueprintCallable) // @ game+0x118c200
	struct FPlayerInfo GetPlayerInfo(); // Function ProjectBoundary.PBGameState.GetPlayerInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x118c1a0
	struct APBItemUnlockManager* GetPBItemUnlockManager(); // Function ProjectBoundary.PBGameState.GetPBItemUnlockManager // (Final|Native|Public|BlueprintCallable) // @ game+0x118c170
	struct APBGameEventManager* GetPBGameEventManager(); // Function ProjectBoundary.PBGameState.GetPBGameEventManager // (Final|Native|Public|BlueprintCallable) // @ game+0x118c150
	struct APBDataStatisticsMgr* GetPBDataStatisticsMgr(); // Function ProjectBoundary.PBGameState.GetPBDataStatisticsMgr // (Final|Native|Public|BlueprintCallable) // @ game+0x118c120
	struct APBAchievementManager* GetPBAchievementManager(); // Function ProjectBoundary.PBGameState.GetPBAchievementManager // (Final|Native|Public|BlueprintCallable) // @ game+0x118c0f0
	struct FString GetModeName(); // Function ProjectBoundary.PBGameState.GetModeName // (Final|Native|Public|BlueprintCallable) // @ game+0x118c070
	struct TArray<struct FPBTeamMemberIconInfo> GetMemberIconList(); // Function ProjectBoundary.PBGameState.GetMemberIconList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118bfe0
	int32_t GetMapVoteCount(struct FString MapName); // Function ProjectBoundary.PBGameState.GetMapVoteCount // (Final|Native|Public|BlueprintCallable) // @ game+0x118bee0
	struct UTexture2D* GetMapBGImage(struct FString MapName); // Function ProjectBoundary.PBGameState.GetMapBGImage // (Final|Native|Public|BlueprintCallable) // @ game+0x118bde0
	struct FText GetGameRamainingTimeText(bool IsWaitingJoin); // Function ProjectBoundary.PBGameState.GetGameRamainingTimeText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118bce0
	float GetElapsedTime(); // Function ProjectBoundary.PBGameState.GetElapsedTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118bca0
	struct FText GetDisplayModeName(); // Function ProjectBoundary.PBGameState.GetDisplayModeName // (Final|Native|Public|BlueprintCallable) // @ game+0x118bc00
	enum class EPBGameResult GetCurrentMyGameResult(); // Function ProjectBoundary.PBGameState.GetCurrentMyGameResult // (Native|Public|BlueprintCallable) // @ game+0x118bbd0
	enum class EPBGameMode GetCurrentGameModeEnum(); // Function ProjectBoundary.PBGameState.GetCurrentGameModeEnum // (Final|Native|Public|BlueprintCallable) // @ game+0x118bbb0
	void DestroyActorAtTheEnd(); // Function ProjectBoundary.PBGameState.DestroyActorAtTheEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x118bb90
	void ClearHostMapInfo(); // Function ProjectBoundary.PBGameState.ClearHostMapInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x118bb70
	bool CanCustomWeapon(); // Function ProjectBoundary.PBGameState.CanCustomWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x118bb40
};

// Class ProjectBoundary.PBGameState_CTV
// Size: 0x740 (Inherited: 0x630)
struct APBGameState_CTV : APBGameState {
	char pad_630[0x110]; // 0x630(0x110)

	struct TMap<enum class EPBTeam, float> GetTeamDistancePercentage(); // Function ProjectBoundary.PBGameState_CTV.GetTeamDistancePercentage // (Final|Native|Public|BlueprintCallable) // @ game+0x1190540
	struct TMap<enum class EPBTeam, float> GetTeamDistance(); // Function ProjectBoundary.PBGameState_CTV.GetTeamDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x1190410
};

// Class ProjectBoundary.PBGameState_Domination
// Size: 0x680 (Inherited: 0x630)
struct APBGameState_Domination : APBGameState {
	float OccupationCompletionPoint; // 0x630(0x04)
	char pad_634[0x4]; // 0x634(0x04)
	struct TArray<float> OccupationPointIncreaseValue; // 0x638(0x10)
	float OccupationTimeReduceValue; // 0x648(0x04)
	float DelayIncreaseScoreTime; // 0x64c(0x04)
	int32_t IncreaseScore; // 0x650(0x04)
	int32_t DominationScore; // 0x654(0x04)
	int32_t DefendScore; // 0x658(0x04)
	int32_t AttackScore; // 0x65c(0x04)
	int32_t RoundNum; // 0x660(0x04)
	int32_t CurrRoundNum; // 0x664(0x04)
	struct TArray<struct APBCapturableZone_Domination*> PBCapturableZoneArray; // 0x668(0x10)
	struct FName MusicID_Exchange; // 0x678(0x08)

	int32_t GetRoundNum(); // Function ProjectBoundary.PBGameState_Domination.GetRoundNum // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11902e0
	int32_t GetCurrentRoundCount(); // Function ProjectBoundary.PBGameState_Domination.GetCurrentRoundCount // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11900b0
	struct TArray<struct APBCapturableZone_Domination*> GetCapturableZoneArray(); // Function ProjectBoundary.PBGameState_Domination.GetCapturableZoneArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118fff0
};

// Class ProjectBoundary.PBGameState_Elimination
// Size: 0x698 (Inherited: 0x630)
struct APBGameState_Elimination : APBGameState {
	int32_t InitActiveTime; // 0x630(0x04)
	char InitReminderCountdown; // 0x634(0x01)
	char pad_635[0x3]; // 0x635(0x03)
	int32_t ActiveTime; // 0x638(0x04)
	float CaptureScore; // 0x63c(0x04)
	float CaptureScoreChangeValue; // 0x640(0x04)
	char Contested : 1; // 0x644(0x01)
	char pad_644_1 : 7; // 0x644(0x01)
	char RoundNum; // 0x645(0x01)
	char CurrentRoundCount; // 0x646(0x01)
	char pad_647[0x1]; // 0x647(0x01)
	int32_t CaptureScorePointTeamID; // 0x648(0x04)
	char pad_64C[0x14]; // 0x64c(0x14)
	struct TArray<struct APBCapturableZone_Elimination*> PBCapturableZoneArray; // 0x660(0x10)
	struct FName MusciID_RoundWon; // 0x670(0x08)
	struct FName MusciID_RoundLost; // 0x678(0x08)
	struct FName MusciID_RoundDraw; // 0x680(0x08)
	struct FName MusciID_ZoneWillActive; // 0x688(0x08)
	struct FName MusciID_ZoneActive; // 0x690(0x08)

	void OnRep_ActiveTime(); // Function ProjectBoundary.PBGameState_Elimination.OnRep_ActiveTime // (Final|Native|Public) // @ game+0x1190840
	void NotifyZoneWillActive(); // Function ProjectBoundary.PBGameState_Elimination.NotifyZoneWillActive // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyZoneActive(); // Function ProjectBoundary.PBGameState_Elimination.NotifyZoneActive // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyRegCapturalbeZone(struct APBCapturableZone_Elimination* CapturalbeZone); // Function ProjectBoundary.PBGameState_Elimination.NotifyRegCapturalbeZone // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	char GetRoundNum(); // Function ProjectBoundary.PBGameState_Elimination.GetRoundNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1190300
	char GetCurrentRoundCount(); // Function ProjectBoundary.PBGameState_Elimination.GetCurrentRoundCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11900d0
	bool GetContested(); // Function ProjectBoundary.PBGameState_Elimination.GetContested // (Final|Native|Public|BlueprintCallable) // @ game+0x1190080
	int32_t GetCapTureScorePointTeamID(); // Function ProjectBoundary.PBGameState_Elimination.GetCapTureScorePointTeamID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118ffb0
};

// Class ProjectBoundary.PBGameState_FFA
// Size: 0x630 (Inherited: 0x630)
struct APBGameState_FFA : APBGameState {
};

// Class ProjectBoundary.PBGameState_KOH
// Size: 0x660 (Inherited: 0x630)
struct APBGameState_KOH : APBGameState {
	int32_t SwitchTimeCount; // 0x630(0x04)
	int8_t Contested; // 0x634(0x01)
	char pad_635[0x3]; // 0x635(0x03)
	int32_t CaptureScorePointTeamID; // 0x638(0x04)
	char pad_63C[0x24]; // 0x63c(0x24)

	void OnRep_SwitchTimeCount(); // Function ProjectBoundary.PBGameState_KOH.OnRep_SwitchTimeCount // (Final|Native|Public) // @ game+0x9c37b0
	void OnRep_CaptureSPTeamID(); // Function ProjectBoundary.PBGameState_KOH.OnRep_CaptureSPTeamID // (Final|Native|Public) // @ game+0x9c37b0
	int32_t GetCapTureScorePointTeamID(); // Function ProjectBoundary.PBGameState_KOH.GetCapTureScorePointTeamID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118ffd0
};

// Class ProjectBoundary.PBGameState_Menu
// Size: 0x708 (Inherited: 0x630)
struct APBGameState_Menu : APBGameState {
	struct TArray<float> KDHistoryArray; // 0x630(0x10)
	struct FDisplayMatchStat DisplayMatchStat; // 0x640(0x40)
	struct FDisplayBestMatchInfo DisplayBestMatchInfo; // 0x680(0x78)
	char pad_6F8[0x10]; // 0x6f8(0x10)

	void SetInShootingRange(bool bInShootingRange); // Function ProjectBoundary.PBGameState_Menu.SetInShootingRange // (Final|Native|Public|BlueprintCallable) // @ game+0x1190a80
	int32_t PlayGameCount(); // Function ProjectBoundary.PBGameState_Menu.PlayGameCount // (Final|Native|Public|BlueprintCallable) // @ game+0x11908c0
	bool IsInShootingRange(); // Function ProjectBoundary.PBGameState_Menu.IsInShootingRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1190670
	struct FText GetPlayGameTotalTime(); // Function ProjectBoundary.PBGameState_Menu.GetPlayGameTotalTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1190240
	struct FDisplayMatchStat GetMatchStat(); // Function ProjectBoundary.PBGameState_Menu.GetMatchStat // (Final|Native|Public|BlueprintCallable) // @ game+0x11901c0
	struct TArray<float> GetKDAHistory(); // Function ProjectBoundary.PBGameState_Menu.GetKDAHistory // (Final|Native|Public|BlueprintCallable) // @ game+0x1190180
	struct FDisplayBestMatchInfo GetDisPlayBestMatchInfo(); // Function ProjectBoundary.PBGameState_Menu.GetDisPlayBestMatchInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x11900f0
};

// Class ProjectBoundary.PBGameState_Skirmish
// Size: 0x6b8 (Inherited: 0x698)
struct APBGameState_Skirmish : APBGameState_Elimination {
	int32_t DominationScore; // 0x698(0x04)
	enum class EProgressChangeMode CapturableProgressMode; // 0x69c(0x01)
	char pad_69D[0x3]; // 0x69d(0x03)
	float DecreasedSpeedWhenNoOne; // 0x6a0(0x04)
	float DecreasedSpeedWhenTakenByEnemy; // 0x6a4(0x04)
	char pad_6A8[0x10]; // 0x6a8(0x10)

	void NotifyPointWillActive(); // Function ProjectBoundary.PBGameState_Skirmish.NotifyPointWillActive // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Notify30secondsleft(); // Function ProjectBoundary.PBGameState_Skirmish.Notify30secondsleft // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBGameState_TDM
// Size: 0x630 (Inherited: 0x630)
struct APBGameState_TDM : APBGameState {
};

// Class ProjectBoundary.PBGameState_Training
// Size: 0x708 (Inherited: 0x708)
struct APBGameState_Training : APBGameState_Menu {
};

// Class ProjectBoundary.PBGrenade
// Size: 0x760 (Inherited: 0x680)
struct APBGrenade : APBProjectile {
	struct UStaticMeshComponent* GrenadeMesh; // 0x680(0x08)
	struct UPBDynamicMarkableComponent* MarkableComponent; // 0x688(0x08)
	struct UDetonatorComponent* DetonatorComponent; // 0x690(0x08)
	struct FPBGrenadeData GrenadeData; // 0x698(0xc8)
};

// Class ProjectBoundary.PBOrnamentBase
// Size: 0x228 (Inherited: 0x220)
struct APBOrnamentBase : AActor {
	char pad_220[0x8]; // 0x220(0x08)

	void BindRenderMatrixSource_Static(struct UPBStaticMeshComponent* Source); // Function ProjectBoundary.PBOrnamentBase.BindRenderMatrixSource_Static // (Final|Native|Public|BlueprintCallable) // @ game+0x11a9f10
	void BindRenderMatrixSource_Skeletal(struct UPBSkeletalMeshComponent* Source); // Function ProjectBoundary.PBOrnamentBase.BindRenderMatrixSource_Skeletal // (Final|Native|Public|BlueprintCallable) // @ game+0x11a9e80
};

// Class ProjectBoundary.PBHeadOrnamentBase
// Size: 0x238 (Inherited: 0x228)
struct APBHeadOrnamentBase : APBOrnamentBase {
	struct FName MeshSocketName; // 0x228(0x08)
	struct UStaticMeshComponent* MeshComp; // 0x230(0x08)
};

// Class ProjectBoundary.PBHeadOrnamentSkin
// Size: 0x40 (Inherited: 0x30)
struct UPBHeadOrnamentSkin : UPBCharacterSkinBase {
	struct FName MeshSocketName; // 0x30(0x08)
	struct APBHeadOrnamentBase* HeadOrnamentClass; // 0x38(0x08)
};

// Class ProjectBoundary.PBHeatComponent
// Size: 0xf8 (Inherited: 0xb0)
struct UPBHeatComponent : UActorComponent {
	struct FMulticastInlineDelegate HeatUpdateEvent; // 0xb0(0x10)
	float CurrentHeat; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	char pad_C8_0 : 1; // 0xc8(0x01)
	char bIsCoolingDown : 1; // 0xc8(0x01)
	char pad_C8_2 : 6; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FPBHeatComponentConfig Config; // 0xd0(0x20)
	struct UPBDynamicMarkableComponent* Markable; // 0xf0(0x08)

	void OnRep_IsCoolingDown(); // Function ProjectBoundary.PBHeatComponent.OnRep_IsCoolingDown // (Final|Native|Protected) // @ game+0x9c37b0
	void OnRep_CurrentHeat(); // Function ProjectBoundary.PBHeatComponent.OnRep_CurrentHeat // (Final|Native|Protected) // @ game+0x11908a0
	void AddHeat(float InAddHeat, bool bSpecialMobility); // Function ProjectBoundary.PBHeatComponent.AddHeat // (Final|Native|Public|BlueprintCallable) // @ game+0x118fd30
};

// Class ProjectBoundary.PBHiddenSkillModule
// Size: 0x5d8 (Inherited: 0x5a8)
struct APBHiddenSkillModule : APBBaseRoleSkillModule {
	float CompressedAir; // 0x5a8(0x04)
	float MaxCompressedAir; // 0x5ac(0x04)
	float MinCompressedAir; // 0x5b0(0x04)
	float CompressedAirConsumeRateScaleDoRunning; // 0x5b4(0x04)
	float CompressedAirConsumeRateScaleDoBraking; // 0x5b8(0x04)
	float CompressedAirConsumeRateScaleOnDash; // 0x5bc(0x04)
	float CompressedAirRecoveringDelay; // 0x5c0(0x04)
	float CompressedAirRecoveringPerSecond; // 0x5c4(0x04)
	char pad_5C8[0x10]; // 0x5c8(0x10)

	void OnRep_CompressedAir(); // Function ProjectBoundary.PBHiddenSkillModule.OnRep_CompressedAir // (Final|Native|Protected) // @ game+0x1190880
};

// Class ProjectBoundary.PBLauncher_Deploy
// Size: 0x638 (Inherited: 0x610)
struct APBLauncher_Deploy : APBLauncher {
	struct FPBPawnMontageGroup PawnFiringMontage; // 0x610(0x28)
};

// Class ProjectBoundary.PBHomingMissileLauncher
// Size: 0x668 (Inherited: 0x638)
struct APBHomingMissileLauncher : APBLauncher_Deploy {
	struct UPBDynamicMarkableComponent* LockOnTarget; // 0x638(0x08)
	struct TArray<struct APBLGM_TargetMissile*> BulletArray; // 0x640(0x10)
	int32_t EffectiveRadiusOnScreen; // 0x650(0x04)
	char pad_654[0x4]; // 0x654(0x04)
	struct APBLGM_TargetMissile* ProjectileClass; // 0x658(0x08)
	char pad_660[0x8]; // 0x660(0x08)

	void ServerNotifyLockOnTarget(struct UPBDynamicMarkableComponent* NewLockTarget, bool IsLocking); // Function ProjectBoundary.PBHomingMissileLauncher.ServerNotifyLockOnTarget // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1190980
	void OnRep_BulletArray(); // Function ProjectBoundary.PBHomingMissileLauncher.OnRep_BulletArray // (Final|Native|Protected) // @ game+0x1190860
};

// Class ProjectBoundary.PBHUD
// Size: 0x840 (Inherited: 0x310)
struct APBHUD : AHUD {
	char pad_310[0x20]; // 0x310(0x20)
	struct FCanvasIcon HitNotifyIcon[0x8]; // 0x330(0xc0)
	struct FCanvasIcon KillsBg; // 0x3f0(0x18)
	struct FCanvasIcon TimePlaceBg; // 0x408(0x18)
	struct FCanvasIcon PrimaryWeapBg; // 0x420(0x18)
	struct FCanvasIcon SecondaryWeapBg; // 0x438(0x18)
	struct FCanvasIcon CrossHair[0x5]; // 0x450(0x78)
	struct FCanvasIcon HitNotifyCrosshair; // 0x4c8(0x18)
	struct FCanvasIcon DeathMessagesBg; // 0x4e0(0x18)
	struct FCanvasIcon HealthBarBg; // 0x4f8(0x18)
	struct FCanvasIcon HealthBar; // 0x510(0x18)
	struct FCanvasIcon HealthIcon; // 0x528(0x18)
	struct FCanvasIcon KillsIcon; // 0x540(0x18)
	struct FCanvasIcon KilledIcon; // 0x558(0x18)
	struct FCanvasIcon TimerIcon; // 0x570(0x18)
	struct FCanvasIcon PlaceIcon; // 0x588(0x18)
	char pad_5A0[0x90]; // 0x5a0(0x90)
	struct UTexture2D* HitNotifyTexture; // 0x630(0x08)
	struct UTexture2D* HUDMainTexture; // 0x638(0x08)
	struct UTexture2D* HUDAssets02Texture; // 0x640(0x08)
	struct UTexture2D* LowHealthOverlayTexture; // 0x648(0x08)
	struct UTexture2D* ScreenSizeMarkerTexture; // 0x650(0x08)
	struct UTexture2D* PredictingAimingTexture; // 0x658(0x08)
	struct UMaterialInterface* PredictingAimingMaterial; // 0x660(0x08)
	struct UMaterialInterface* PredictingAimingLightMaterial; // 0x668(0x08)
	struct FVector2D PredictingAimingTextureSize; // 0x670(0x08)
	struct UMaterialInterface* PredictingAimingLineMaterial; // 0x678(0x08)
	float PredictingAimingLineThickness; // 0x680(0x04)
	char bEnablePredicted : 1; // 0x684(0x01)
	char pad_684_1 : 7; // 0x684(0x01)
	char pad_685[0x3]; // 0x685(0x03)
	struct UTexture2D* HotLineTexture; // 0x688(0x08)
	struct UMaterialInterface* HotLineMaterial; // 0x690(0x08)
	struct UMaterialInterface* LineMaterial; // 0x698(0x08)
	struct UMaterialInterface* GunFunnelLineMaterial; // 0x6a0(0x08)
	struct UMaterialInterface* GunFunnelLineLightMaterial; // 0x6a8(0x08)
	struct FVector2D GunFunnelSize; // 0x6b0(0x08)
	float CharacterHalfHeight; // 0x6b8(0x04)
	float GunFunnelLineThickness; // 0x6bc(0x04)
	float HotLineThickness; // 0x6c0(0x04)
	float GunFunnelStartRotationThreshold; // 0x6c4(0x04)
	float GunFunnelResetSpeed; // 0x6c8(0x04)
	float GunFunnelLerpSpeed; // 0x6cc(0x04)
	float GunFunnelLerpMinSpeed; // 0x6d0(0x04)
	char pad_6D4[0x4]; // 0x6d4(0x04)
	struct UMaterialInterface* CapturableZoneEnemyCaptureMI; // 0x6d8(0x08)
	struct UMaterialInterface* CapturableZoneDefendMI; // 0x6e0(0x08)
	struct UMaterialInterface* CapturableZoneContestedMI; // 0x6e8(0x08)
	struct UMaterialInterface* CapturableZoneUncaptureMI; // 0x6f0(0x08)
	struct UMaterialInterface* CapturableZoneArrowMI; // 0x6f8(0x08)
	char pad_700[0x28]; // 0x700(0x28)
	enum class EBlendMode TextureBlendMode; // 0x728(0x01)
	char pad_729[0x3]; // 0x729(0x03)
	int32_t DistancePrecision; // 0x72c(0x04)
	struct FVector2D NameOffset; // 0x730(0x08)
	struct FVector2D DistanceOffset; // 0x738(0x08)
	struct UFont* RadarFont; // 0x740(0x08)
	bool bDrawWithMaterial; // 0x748(0x01)
	char pad_749[0x1f]; // 0x749(0x1f)
	struct UFont* BigFont; // 0x768(0x08)
	struct UFont* NormalFont; // 0x770(0x08)
	char pad_778[0xc8]; // 0x778(0xc8)

	float RotationDegrees(struct FVector2D ScreenPosition); // Function ProjectBoundary.PBHUD.RotationDegrees // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11908f0
	void NotifyWarmUpEnd(); // Function ProjectBoundary.PBHUD.NotifyWarmUpEnd // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyPlayerEnter(struct APBPlayerState* KillerPlayerState, bool bEnter); // Function ProjectBoundary.PBHUD.NotifyPlayerEnter // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyKillEnemy(struct FPBKillResult KillResult); // Function ProjectBoundary.PBHUD.NotifyKillEnemy // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void NotifyHaveBestPickupWeapon(); // Function ProjectBoundary.PBHUD.NotifyHaveBestPickupWeapon // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyGameStart(); // Function ProjectBoundary.PBHUD.NotifyGameStart // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyCleanPickupWeapon(); // Function ProjectBoundary.PBHUD.NotifyCleanPickupWeapon // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBeKilled(struct APBPlayerState* KillerPlayerState, struct APBPlayerState* KilledPlayerState, struct UDamageType* DamageType, enum class EPBHitZone HitZone, struct UTextureRenderTarget2D* InInstigatorRenderTarget, struct UTexture* InInstigatorTexture); // Function ProjectBoundary.PBHUD.NotifyBeKilled // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyAddScore(int32_t AddedScore, struct TArray<struct FText> Medals); // Function ProjectBoundary.PBHUD.NotifyAddScore // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	bool IsOnScreen(struct FVector2D ScreenPosition, struct FVector2D InEdgeSize); // Function ProjectBoundary.PBHUD.IsOnScreen // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1190770
	bool IsOnCircle(struct FVector2D ScreenPosition, float DrawRadius); // Function ProjectBoundary.PBHUD.IsOnCircle // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11906a0
	bool GetTargeting(); // Function ProjectBoundary.PBHUD.GetTargeting // (Final|Native|Public|BlueprintCallable) // @ game+0x11903e0
	struct FVector2D GetScreenLocationinSafeZoneLocation(struct FVector2D ScreenLocation); // Function ProjectBoundary.PBHUD.GetScreenLocationinSafeZoneLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1190350
	float GetSafeZoneScale(); // Function ProjectBoundary.PBHUD.GetSafeZoneScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1190320
	struct FVector2D FindPositionOnScreenEdge(struct FVector2D PlanePosition, struct FVector2D InEdgeSize); // Function ProjectBoundary.PBHUD.FindPositionOnScreenEdge // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x118fee0
	struct FVector2D CircleScreenPosition(struct FVector2D ScreenPosition, float DrawRadius); // Function ProjectBoundary.PBHUD.CircleScreenPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x118fe10
};

// Class ProjectBoundary.PBImpactEffect
// Size: 0x500 (Inherited: 0x220)
struct APBImpactEffect : AActor {
	struct UParticleSystem* DefaultFX; // 0x220(0x08)
	struct UParticleSystem* PolymerFX; // 0x228(0x08)
	struct UParticleSystem* MetalFX; // 0x230(0x08)
	struct UParticleSystem* ConcreteFX; // 0x238(0x08)
	struct UParticleSystem* ClothFX; // 0x240(0x08)
	struct UParticleSystem* ClothMetalFX; // 0x248(0x08)
	struct UParticleSystem* WoodFX; // 0x250(0x08)
	struct UParticleSystem* GlassFX; // 0x258(0x08)
	struct UParticleSystem* PanelFX; // 0x260(0x08)
	struct UParticleSystem* FleshFX; // 0x268(0x08)
	struct UParticleSystem* ArmorFX; // 0x270(0x08)
	struct USoundCue* DefaultSound; // 0x278(0x08)
	struct USoundCue* PolymerSound; // 0x280(0x08)
	struct USoundCue* ConcreteSound; // 0x288(0x08)
	struct USoundCue* ClothSound; // 0x290(0x08)
	struct USoundCue* ClothMetalSound; // 0x298(0x08)
	struct USoundCue* MetalSound; // 0x2a0(0x08)
	struct USoundCue* WoodSound; // 0x2a8(0x08)
	struct USoundCue* GlassSound; // 0x2b0(0x08)
	struct USoundCue* PanelSound; // 0x2b8(0x08)
	struct USoundCue* FleshSound; // 0x2c0(0x08)
	struct USoundCue* ArmorSound; // 0x2c8(0x08)
	struct FDecalData DefaultDecal; // 0x2d0(0x18)
	struct FDecalData PolymerDecal; // 0x2e8(0x18)
	struct FDecalData MetalDecal; // 0x300(0x18)
	struct FDecalData ConcreteDecal; // 0x318(0x18)
	struct FDecalData ClothDecal; // 0x330(0x18)
	struct FDecalData ClothMetalDecal; // 0x348(0x18)
	struct FDecalData WoodDecal; // 0x360(0x18)
	struct FDecalData GlassDecal; // 0x378(0x18)
	struct FDecalData PanelDecal; // 0x390(0x18)
	struct FDecalData FleshDecal; // 0x3a8(0x18)
	struct FDecalData ArmorDecal; // 0x3c0(0x18)
	struct FHitResult SurfaceHit; // 0x3d8(0x8c)
	char pad_464[0xc]; // 0x464(0x0c)
	struct FTransform RelativeTM; // 0x470(0x30)
	char bAttachable : 1; // 0x4a0(0x01)
	char pad_4A0_1 : 7; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct TMap<enum class EModuleActivityMask, struct UParticleSystem*> ExplodeEffect; // 0x4a8(0x50)
	char pad_4F8[0x8]; // 0x4f8(0x08)

	void PlayImpactSound(); // Function ProjectBoundary.PBImpactEffect.PlayImpactSound // (Final|Native|Public) // @ game+0x11957c0
};

// Class ProjectBoundary.PBImpulseDamageType
// Size: 0x60 (Inherited: 0x60)
struct UPBImpulseDamageType : UPBDamageType {
};

// Class ProjectBoundary.PBIndicator
// Size: 0x320 (Inherited: 0x268)
struct UPBIndicator : UPBUserWidget {
	struct FVector CornerScale; // 0x268(0x0c)
	struct FVector2D EdgeSize; // 0x274(0x08)
	struct FVector2D CircleEdgeSize; // 0x27c(0x08)
	float DrawRadius; // 0x284(0x04)
	char bDrawCorner : 1; // 0x288(0x01)
	char pad_288_1 : 7; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UPBMarkableComponent* RelatedMarkable; // 0x290(0x08)
	enum class EPBMarkedStatus MarkedStatus; // 0x298(0x01)
	enum class EPBCamp Camp; // 0x299(0x01)
	char pad_29A[0x22]; // 0x29a(0x22)
	struct FVector WorldLocation; // 0x2bc(0x0c)
	struct FVector2D ScreenPosition; // 0x2c8(0x08)
	struct FVector2D EdgePosition; // 0x2d0(0x08)
	struct FVector2D UpLeftPosition; // 0x2d8(0x08)
	struct FVector2D UpRightPosition; // 0x2e0(0x08)
	struct FVector2D BottomLeftPosition; // 0x2e8(0x08)
	struct FVector2D BottomRightPosition; // 0x2f0(0x08)
	struct FText DistanceText; // 0x2f8(0x18)
	float Distance; // 0x310(0x04)
	float EdgeArrowRotationDegrees; // 0x314(0x04)
	float LocalPawnTargetingRatio; // 0x318(0x04)
	enum class EPBIndicatorStatus Status; // 0x31c(0x01)
	char bMarkableIsInView : 1; // 0x31d(0x01)
	char bIsDying : 1; // 0x31d(0x01)
	char pad_31D_2 : 6; // 0x31d(0x01)
	char pad_31E[0x2]; // 0x31e(0x02)

	void K2_UpdateTargetingRatio(float NewLocalPawnTargetingRatio); // Function ProjectBoundary.PBIndicator.K2_UpdateTargetingRatio // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateRelatedMarkable(struct UPBMarkableComponent* NewRelatedMarkable); // Function ProjectBoundary.PBIndicator.K2_UpdateRelatedMarkable // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateMarkStatus(enum class EPBMarkedStatus NewStatus); // Function ProjectBoundary.PBIndicator.K2_UpdateMarkStatus // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateMarkableIsInView(bool bNewMarkableIsInView); // Function ProjectBoundary.PBIndicator.K2_UpdateMarkableIsInView // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateIsDying(bool bNewIsDying); // Function ProjectBoundary.PBIndicator.K2_UpdateIsDying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateIndicatorStatus(enum class EPBIndicatorStatus NewStatus); // Function ProjectBoundary.PBIndicator.K2_UpdateIndicatorStatus // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateDistance(float NewDistance); // Function ProjectBoundary.PBIndicator.K2_UpdateDistance // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCamp(enum class EPBCamp NewCamp); // Function ProjectBoundary.PBIndicator.K2_UpdateCamp // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBIngameMenuWidget
// Size: 0x280 (Inherited: 0x268)
struct UPBIngameMenuWidget : UPBUserWidget {
	char pad_268[0x18]; // 0x268(0x18)

	void RemoveAllTheWidget(); // Function ProjectBoundary.PBIngameMenuWidget.RemoveAllTheWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x11952b0
	void OnBackToGame(); // Function ProjectBoundary.PBIngameMenuWidget.OnBackToGame // (Final|Native|Public|BlueprintCallable) // @ game+0x11952b0
};

// Class ProjectBoundary.PBInputTipsImage
// Size: 0x220 (Inherited: 0x210)
struct UPBInputTipsImage : UImage {
	struct FName InputName; // 0x210(0x08)
	bool bControllerTips; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)

	bool SetInputName(struct FName NewInputName); // Function ProjectBoundary.PBInputTipsImage.SetInputName // (Final|Native|Public|BlueprintCallable) // @ game+0x1195f60
};

// Class ProjectBoundary.PBInvitableWidget
// Size: 0x270 (Inherited: 0x268)
struct UPBInvitableWidget : UPBUserWidget {
	struct UButton* InvitableButton; // 0x268(0x08)
};

// Class ProjectBoundary.PBItemInfoInterface
// Size: 0x28 (Inherited: 0x28)
struct UPBItemInfoInterface : UInterface {

	enum class EPBItemType GetItemType(); // Function ProjectBoundary.PBItemInfoInterface.GetItemType // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1194ac0
	struct FName GetItemID(); // Function ProjectBoundary.PBItemInfoInterface.GetItemID // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1194a80
};

// Class ProjectBoundary.PBItemUnlockManager
// Size: 0x240 (Inherited: 0x220)
struct APBItemUnlockManager : AActor {
	char pad_220[0x20]; // 0x220(0x20)

	struct FName UnlockItem(struct FString Item, struct FString OccupationID, struct FString WeaponPartsListID, struct FDelegate Callback); // Function ProjectBoundary.PBItemUnlockManager.UnlockItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1196000
	void ResetUnlockItem(struct FString Item, struct FString OccupationID, struct FString WeaponPartsListID, bool ball); // Function ProjectBoundary.PBItemUnlockManager.ResetUnlockItem // (Final|Native|Public|BlueprintCallable) // @ game+0x11957e0
	void OnUnlockItemComplete__DelegateSignature(struct FName UnlockId, uint32_t ErrorCode); // DelegateFunction ProjectBoundary.PBItemUnlockManager.OnUnlockItemComplete__DelegateSignature // (Public|Delegate) // @ game+0x1556ec0
	struct FName IsUnlockItem(struct FString Item, struct FString OccupationID, struct FString WeaponPartsListID); // Function ProjectBoundary.PBItemUnlockManager.IsUnlockItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1195140
	bool IsItemUnlocked(struct FName UnlockId); // Function ProjectBoundary.PBItemUnlockManager.IsItemUnlocked // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1195010
	struct TArray<struct FString> GetUnlockItemByLevel(int32_t BeginLevel, int32_t CurrentLevel); // Function ProjectBoundary.PBItemUnlockManager.GetUnlockItemByLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x1194df0
	struct FName CanItemUnlock(struct FString Item, struct FString OccupationID, struct FString WeaponPartsListID); // Function ProjectBoundary.PBItemUnlockManager.CanItemUnlock // (Final|Native|Public|BlueprintCallable) // @ game+0x1194770
};

// Class ProjectBoundary.PBJetpackSkin_Base
// Size: 0x30 (Inherited: 0x30)
struct UPBJetpackSkin_Base : UPBCharacterSkinBase {
};

// Class ProjectBoundary.PBJetpackSkin_Material
// Size: 0x88 (Inherited: 0x30)
struct UPBJetpackSkin_Material : UPBJetpackSkin_Base {
	struct UPBJetpackSkin_Mesh* JetpackMesh; // 0x30(0x08)
	struct TMap<struct FName, struct FPBSkinMaterialDetailV1> SlotAndMaterialInfoMap; // 0x38(0x50)
};

// Class ProjectBoundary.PBJetpackSkin_Mesh
// Size: 0x38 (Inherited: 0x30)
struct UPBJetpackSkin_Mesh : UPBJetpackSkin_Base {
	struct UStaticMesh* StaticMesh; // 0x30(0x08)
};

// Class ProjectBoundary.PBLauncher_Delay
// Size: 0x610 (Inherited: 0x610)
struct APBLauncher_Delay : APBLauncher {
};

// Class ProjectBoundary.PBLauncher_Direct
// Size: 0x610 (Inherited: 0x610)
struct APBLauncher_Direct : APBLauncher {
};

// Class ProjectBoundary.PBLauncherWidget
// Size: 0x290 (Inherited: 0x268)
struct UPBLauncherWidget : UPBUserWidget {
	char pad_268[0x18]; // 0x268(0x18)
	struct APBLauncher* OwningLauncher; // 0x280(0x08)
	enum class EPBLauncherPosition LauncherPosition; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)

	void K2_UpdateMagazine(); // Function ProjectBoundary.PBLauncherWidget.K2_UpdateMagazine // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Undeploying(); // Function ProjectBoundary.PBLauncherWidget.K2_Undeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Standby(); // Function ProjectBoundary.PBLauncherWidget.K2_Standby // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimuilateFire(); // Function ProjectBoundary.PBLauncherWidget.K2_SimuilateFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Reloading(); // Function ProjectBoundary.PBLauncherWidget.K2_Reloading // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Ready(); // Function ProjectBoundary.PBLauncherWidget.K2_Ready // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InterruptReloading(); // Function ProjectBoundary.PBLauncherWidget.K2_InterruptReloading // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Equiped(); // Function ProjectBoundary.PBLauncherWidget.K2_Equiped // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deploying(); // Function ProjectBoundary.PBLauncherWidget.K2_Deploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ClipReloaded(); // Function ProjectBoundary.PBLauncherWidget.K2_ClipReloaded // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ASingleAmmoReloaded(); // Function ProjectBoundary.PBLauncherWidget.K2_ASingleAmmoReloaded // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	struct FText GetTotalAmmoText(); // Function ProjectBoundary.PBLauncherWidget.GetTotalAmmoText // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x119bf10
	float GetReloadingProgressInPercent(); // Function ProjectBoundary.PBLauncherWidget.GetReloadingProgressInPercent // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x119bcd0
	struct FText GetAmmoInMagazine(); // Function ProjectBoundary.PBLauncherWidget.GetAmmoInMagazine // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x119b6a0
	struct FText GetAmmoInClip(); // Function ProjectBoundary.PBLauncherWidget.GetAmmoInClip // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x119b600
};

// Class ProjectBoundary.PBLGM_Base
// Size: 0x440 (Inherited: 0x220)
struct APBLGM_Base : AActor {
	struct UStaticMeshComponent* MeshComp; // 0x220(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x228(0x08)
	struct UBoxComponent* CollisionComp; // 0x230(0x08)
	struct UPBDynamicMarkableComponent* MarkableComponent; // 0x238(0x08)
	struct FPBMissileSettingConfig MissileSettingConfig; // 0x240(0x1c)
	float Velocity; // 0x25c(0x04)
	float DeviationRange; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct UPBDynamicMarkableComponent* TargetMarkable; // 0x268(0x08)
	struct APBPlayerState* PlayerState; // 0x270(0x08)
	char pad_278[0x74]; // 0x278(0x74)
	char bIsLaunched : 1; // 0x2ec(0x01)
	char bIsEngineOn : 1; // 0x2ec(0x01)
	char bIsProximityTrigger : 1; // 0x2ec(0x01)
	char pad_2EC_3 : 5; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	float DetonatorRadius; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FPBRadialDamageParams RadialDamageParams; // 0x2f8(0x68)
	struct FPBRadialDamageParams OutterRadialDamageParams; // 0x360(0x68)
	SoftClassProperty DamageType; // 0x3c8(0x28)
	struct TSoftObjectPtr<struct UTexture2D> InstigatorTexture; // 0x3f0(0x28)
	float DirectHitDamge; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct USoundBase* ExplosionSound; // 0x420(0x08)
	struct UParticleSystem* ExplosionEmitter; // 0x428(0x08)
	char bCanBeIntercepted : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0xf]; // 0x431(0x0f)

	void OnRep_ProximityTrigger(); // Function ProjectBoundary.PBLGM_Base.OnRep_ProximityTrigger // (Final|Native|Protected) // @ game+0x119cba0
	void OnRep_PlayerState(); // Function ProjectBoundary.PBLGM_Base.OnRep_PlayerState // (Final|Native|Protected) // @ game+0x119cb80
	void MulticastImpact(struct FVector ImpactPoint, struct FRotator ImpactRotation); // Function ProjectBoundary.PBLGM_Base.MulticastImpact // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x119c130
};

// Class ProjectBoundary.PBLGM_SmallMissile
// Size: 0x470 (Inherited: 0x440)
struct APBLGM_SmallMissile : APBLGM_Base {
	float DelayTime; // 0x438(0x04)
	float InitVelocity; // 0x43c(0x04)
	struct UParticleSystem* Emitter_Begin; // 0x440(0x08)
	struct UParticleSystem* Emitter_Reset; // 0x448(0x08)
	struct FName AttachedSocket; // 0x450(0x08)
	struct UNiagaraComponent* NS_BeamSpawned; // 0x458(0x08)
	struct UNiagaraSystem* NS_Spawnded; // 0x460(0x08)

	void ServerLostTarget(); // Function ProjectBoundary.PBLGM_SmallMissile.ServerLostTarget // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x119d220
};

// Class ProjectBoundary.PBLGM_TargetMissile
// Size: 0x440 (Inherited: 0x440)
struct APBLGM_TargetMissile : APBLGM_Base {
};

// Class ProjectBoundary.PBLobbyBeaconClient
// Size: 0x378 (Inherited: 0x338)
struct APBLobbyBeaconClient : ALobbyBeaconClient {
	char pad_338[0x30]; // 0x338(0x30)
	struct APBLobbyPlayerState* PBLobbyPlayerState; // 0x368(0x08)
	struct APBLobbyState* PBLobbyState; // 0x370(0x08)

	void OnRep_PBLobbyState(); // Function ProjectBoundary.PBLobbyBeaconClient.OnRep_PBLobbyState // (Final|Native|Protected) // @ game+0x119cb60
	void OnRep_PBLobbyPlayerState(); // Function ProjectBoundary.PBLobbyBeaconClient.OnRep_PBLobbyPlayerState // (Final|Native|Protected) // @ game+0x119cb40
};

// Class ProjectBoundary.PBLobbyBeaconHost
// Size: 0x328 (Inherited: 0x280)
struct APBLobbyBeaconHost : ALobbyBeaconHost {
	struct APBLobbyState* PBLobbyState; // 0x280(0x08)
	char pad_288[0xa0]; // 0x288(0xa0)
};

// Class ProjectBoundary.PBLobbyBeaconListener
// Size: 0x308 (Inherited: 0x308)
struct APBLobbyBeaconListener : AOnlineBeaconHost {
};

// Class ProjectBoundary.PBLobbyPlayerState
// Size: 0x300 (Inherited: 0x2e0)
struct APBLobbyPlayerState : ALobbyBeaconPlayerState {
	int32_t Level; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FString AvatarUrl; // 0x2e8(0x10)
	int32_t TeamID; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
};

// Class ProjectBoundary.PBLobbyState
// Size: 0x440 (Inherited: 0x3c8)
struct APBLobbyState : ALobbyBeaconState {
	char pad_3C8[0x10]; // 0x3c8(0x10)
	struct TArray<struct APBLobbyPlayerState*> RepPlayers; // 0x3d8(0x10)
	struct FText MapName; // 0x3e8(0x18)
	struct FText ModeName; // 0x400(0x18)
	char pad_418[0x10]; // 0x418(0x10)
	float LobbyTimeRemaining; // 0x428(0x04)
	bool bFastStage; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	float FastStartTime; // 0x430(0x04)
	char pad_434[0xc]; // 0x434(0x0c)

	void OnRep_RepPlayers(); // Function ProjectBoundary.PBLobbyState.OnRep_RepPlayers // (Final|Native|Protected) // @ game+0x119cb00
	void OnRep_ModeName(); // Function ProjectBoundary.PBLobbyState.OnRep_ModeName // (Final|Native|Protected) // @ game+0x119cb00
	void OnRep_MapName(); // Function ProjectBoundary.PBLobbyState.OnRep_MapName // (Final|Native|Protected) // @ game+0x119cb00
	void OnRep_LobbyTimeRemaining(); // Function ProjectBoundary.PBLobbyState.OnRep_LobbyTimeRemaining // (Final|Native|Public) // @ game+0x119cb20
	void OnRep_FastStartTime(); // Function ProjectBoundary.PBLobbyState.OnRep_FastStartTime // (Final|Native|Public) // @ game+0x119cb20
	void OnRep_FastStage(); // Function ProjectBoundary.PBLobbyState.OnRep_FastStage // (Final|Native|Public) // @ game+0x119cb00
	void MulticastLobbyStateInfoUpdated(); // Function ProjectBoundary.PBLobbyState.MulticastLobbyStateInfoUpdated // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x119c220
	bool IsMember(struct FUniqueNetIdRepl UniqueID); // Function ProjectBoundary.PBLobbyState.IsMember // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x119bfd0
	int32_t GetTeamId(struct FString InUserId); // Function ProjectBoundary.PBLobbyState.GetTeamId // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x119be60
	struct APBLobbyPlayerState* GetLobbyMember(struct FUniqueNetIdRepl UniqueID); // Function ProjectBoundary.PBLobbyState.GetLobbyMember // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x119b990
	struct TArray<struct APBLobbyPlayerState*> GetAllLobbyMembers(); // Function ProjectBoundary.PBLobbyState.GetAllLobbyMembers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119b580
};

// Class ProjectBoundary.PBLocalPathWidget
// Size: 0x290 (Inherited: 0x268)
struct UPBLocalPathWidget : UPBUserWidget {
	struct FName LocalPathName; // 0x268(0x08)
	struct FText LocalPathText; // 0x270(0x18)
	bool bIsFirst; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)

	void LoadClickPage(); // Function ProjectBoundary.PBLocalPathWidget.LoadClickPage // (Final|Native|Protected|BlueprintCallable) // @ game+0x119c0d0
	void K2_SetLocalPathName(); // Function ProjectBoundary.PBLocalPathWidget.K2_SetLocalPathName // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBLocalPlayer
// Size: 0x2b0 (Inherited: 0x258)
struct UPBLocalPlayer : ULocalPlayer {
	struct UPBPersistentUser* PersistentUser; // 0x258(0x08)
	char pad_260[0x50]; // 0x260(0x50)
};

// Class ProjectBoundary.PBLogin
// Size: 0x300 (Inherited: 0x260)
struct UPBLogin : UUserWidget {
	struct UEditableText* AccountInput; // 0x260(0x08)
	struct UEditableText* PassWordInput; // 0x268(0x08)
	struct UButton* LoginOKButton; // 0x270(0x08)
	struct UTextBlock* ErrorText; // 0x278(0x08)
	struct UButton* LoginGateAgainButton; // 0x280(0x08)
	struct FMulticastInlineDelegate OnAccountLoginSuccess; // 0x288(0x10)
	struct FMulticastInlineDelegate OnAccounteUnRealNamed; // 0x298(0x10)
	char pad_2A8[0x58]; // 0x2a8(0x58)

	void LoginGate(); // Function ProjectBoundary.PBLogin.LoginGate // (Final|Native|Public) // @ game+0x119c110
	void Login(); // Function ProjectBoundary.PBLogin.Login // (Final|Native|Public|BlueprintCallable) // @ game+0x119c0f0
	void K2_SwitchLoginPanel(enum class EPBLoginState InLoginState); // Function ProjectBoundary.PBLogin.K2_SwitchLoginPanel // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartLoginCheck(); // Function ProjectBoundary.PBLogin.K2_StartLoginCheck // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndLoginCheck(); // Function ProjectBoundary.PBLogin.K2_EndLoginCheck // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void HackLogin(); // Function ProjectBoundary.PBLogin.HackLogin // (Final|Native|Public|BlueprintCallable) // @ game+0x119bfb0
};

// Class ProjectBoundary.PBMainMenuManager
// Size: 0xb0 (Inherited: 0x30)
struct UPBMainMenuManager : ULocalPlayerSubsystem {
	char pad_30[0x70]; // 0x30(0x70)
	struct UPBPageWidget* TopPage; // 0xa0(0x08)
	struct UPBUserWidget* MainMenuBase; // 0xa8(0x08)

	void OnQuitGame(bool bConfirm); // Function ProjectBoundary.PBMainMenuManager.OnQuitGame // (Final|Native|Private) // @ game+0x119ca70
};

// Class ProjectBoundary.PBMainMenuPathWidget
// Size: 0x2c8 (Inherited: 0x268)
struct UPBMainMenuPathWidget : UPBUserWidget {
	struct TArray<struct FName> PathNameArray; // 0x268(0x10)
	struct TMap<struct FName, struct FText> PathDisplayTextMap; // 0x278(0x50)

	void RefreshLocalPath(struct FText InPathDisplayName, struct FName InPathPageName); // Function ProjectBoundary.PBMainMenuPathWidget.RefreshLocalPath // (Final|Native|Protected) // @ game+0x119ce10
	void K2_RefreshLocalPath(); // Function ProjectBoundary.PBMainMenuPathWidget.K2_RefreshLocalPath // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBMainMenuWidget
// Size: 0x3c8 (Inherited: 0x268)
struct UPBMainMenuWidget : UPBUserWidget {
	struct UUserWidget* PreMenuWidgetClass; // 0x268(0x08)
	struct UUserWidget* NextMenuWidgetClass; // 0x270(0x08)
	char pad_278[0x18]; // 0x278(0x18)
	struct FMulticastInlineDelegate OnAddedToFocusPathDelegate; // 0x290(0x10)
	struct FMulticastInlineDelegate OnRemovedFromFocusPathDelegate; // 0x2a0(0x10)
	struct FString MyNewWidgetName; // 0x2b0(0x10)
	struct FString SelectMapName; // 0x2c0(0x10)
	int32_t BotNumber; // 0x2d0(0x04)
	char pad_2D4[0x24]; // 0x2d4(0x24)
	char bIsSearching : 1; // 0x2f8(0x01)
	char pad_2F8_1 : 7; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	char bOpenBackSound : 1; // 0x2fc(0x01)
	char pad_2FC_1 : 7; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	int32_t ServerIndex; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct FServerInfo CurrentServerInfo; // 0x308(0x50)
	struct TArray<struct FServerInfo> ServerInfoList; // 0x358(0x10)
	struct FString ServerStatus; // 0x368(0x10)
	struct USoundCue* FocusChangeSound; // 0x378(0x08)
	struct USoundCue* BackSound; // 0x380(0x08)
	char pad_388[0x30]; // 0x388(0x30)
	struct TArray<struct FString> MapNameArray; // 0x3b8(0x10)

	void ToShow(); // Function ProjectBoundary.PBMainMenuWidget.ToShow // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ToHide(); // Function ProjectBoundary.PBMainMenuWidget.ToHide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchToMenuWidget(struct UUserWidget* TargetMenuWidget); // Function ProjectBoundary.PBMainMenuWidget.SwitchToMenuWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x119d9e0
	void SwitchToExtraOptionWidget(struct UUserWidget* TargetMenuWidget); // Function ProjectBoundary.PBMainMenuWidget.SwitchToExtraOptionWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x119d950
	void StopSearchingMatch(); // Function ProjectBoundary.PBMainMenuWidget.StopSearchingMatch // (Final|Native|Public|BlueprintCallable) // @ game+0x119d930
	void StartQuickMatchs(struct TArray<struct FString> SelectedModes); // Function ProjectBoundary.PBMainMenuWidget.StartQuickMatchs // (Final|Native|Public|BlueprintCallable) // @ game+0x119d7c0
	void StartLastQuickMatchs(); // Function ProjectBoundary.PBMainMenuWidget.StartLastQuickMatchs // (Final|Native|Public|BlueprintCallable) // @ game+0x119d7a0
	void ShowOut(); // Function ProjectBoundary.PBMainMenuWidget.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function ProjectBoundary.PBMainMenuWidget.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Show(); // Function ProjectBoundary.PBMainMenuWidget.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTeamNum(enum class EPBTeam InTeam); // Function ProjectBoundary.PBMainMenuWidget.SetTeamNum // (Final|Native|Public|BlueprintCallable) // @ game+0x119d720
	void SetServerFlag(bool InFlag); // Function ProjectBoundary.PBMainMenuWidget.SetServerFlag // (Final|Native|Public|BlueprintCallable) // @ game+0x119d690
	void SetSelectedMapID(int32_t Index); // Function ProjectBoundary.PBMainMenuWidget.SetSelectedMapID // (Final|Native|Public|BlueprintCallable) // @ game+0x119d600
	void SetQuickStart(bool bQuick); // Function ProjectBoundary.PBMainMenuWidget.SetQuickStart // (Final|Native|Public|BlueprintCallable) // @ game+0x119d570
	void SetNumberOfRemaining(int32_t Number); // Function ProjectBoundary.PBMainMenuWidget.SetNumberOfRemaining // (Final|Native|Public|BlueprintCallable) // @ game+0x119d4e0
	void SetNotifyReadLeadboardComplete(bool bNotify); // Function ProjectBoundary.PBMainMenuWidget.SetNotifyReadLeadboardComplete // (Final|Native|Protected|BlueprintCallable) // @ game+0x119d450
	void SetGameMode(struct FString InType); // Function ProjectBoundary.PBMainMenuWidget.SetGameMode // (Final|Native|Public|BlueprintCallable) // @ game+0x119d360
	void SetCurrentWidget(struct UPBMainMenuWidget* PBMenuWidget, struct UUserWidget* PreMenuWidgeto); // Function ProjectBoundary.PBMainMenuWidget.SetCurrentWidget // (Final|Native|Protected|BlueprintCallable) // @ game+0x119d290
	void ServerSearch(); // Function ProjectBoundary.PBMainMenuWidget.ServerSearch // (Final|Native|Public|BlueprintCallable) // @ game+0x119d270
	void SavePersistentUserData(); // Function ProjectBoundary.PBMainMenuWidget.SavePersistentUserData // (Final|Native|Public|BlueprintCallable) // @ game+0x119d200
	void SaveOneMainMenuSettings(struct FString KeyName, struct FMainMenuSavedSettings NewMainMenuSettings); // Function ProjectBoundary.PBMainMenuWidget.SaveOneMainMenuSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x119d070
	void SaveMatchTypeName(struct FString MatchTypeName); // Function ProjectBoundary.PBMainMenuWidget.SaveMatchTypeName // (Final|Native|Public|BlueprintCallable) // @ game+0x119cf80
	void SaveLastFocusWidget(); // Function ProjectBoundary.PBMainMenuWidget.SaveLastFocusWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x119cf60
	void SaveCurrentFocusWidget(); // Function ProjectBoundary.PBMainMenuWidget.SaveCurrentFocusWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x119cf40
	void RemoveAllTheWidget(); // Function ProjectBoundary.PBMainMenuWidget.RemoveAllTheWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x11952b0
	void PBUnregisterInputComponent(); // Function ProjectBoundary.PBMainMenuWidget.PBUnregisterInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x119cdf0
	void PBStopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function ProjectBoundary.PBMainMenuWidget.PBStopListeningForInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x119cd20
	void PBRegisterInputComponent(); // Function ProjectBoundary.PBMainMenuWidget.PBRegisterInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x119cd00
	void OpenNotifyOnSearchStateChanged(); // Function ProjectBoundary.PBMainMenuWidget.OpenNotifyOnSearchStateChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x119cce0
	void OnUpdateDone(); // Function ProjectBoundary.PBMainMenuWidget.OnUpdateDone // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void OnStartOnlinePrivilegeTaskSuccess(); // Function ProjectBoundary.PBMainMenuWidget.OnStartOnlinePrivilegeTaskSuccess // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnStartOnlinePrivilegeTaskStart(); // Function ProjectBoundary.PBMainMenuWidget.OnStartOnlinePrivilegeTaskStart // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnStartOnlinePrivilegeTaskFailed(enum class EPrivilegeResults ErrorID); // Function ProjectBoundary.PBMainMenuWidget.OnStartOnlinePrivilegeTaskFailed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnSetRoundTime(int32_t Minute); // Function ProjectBoundary.PBMainMenuWidget.OnSetRoundTime // (Final|Native|Public|BlueprintCallable) // @ game+0x119cc50
	void OnSetRoomMaxNum(int32_t Num); // Function ProjectBoundary.PBMainMenuWidget.OnSetRoomMaxNum // (Final|Native|Public|BlueprintCallable) // @ game+0x119cbc0
	void OnSearchingDone(); // Function ProjectBoundary.PBMainMenuWidget.OnSearchingDone // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void OnNoRoom(); // Function ProjectBoundary.PBMainMenuWidget.OnNoRoom // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void OnNoCustomRooms(); // Function ProjectBoundary.PBMainMenuWidget.OnNoCustomRooms // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void OnModeSelected(); // Function ProjectBoundary.PBMainMenuWidget.OnModeSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x119c810
	void OnMinusRoundTime(int32_t Minute); // Function ProjectBoundary.PBMainMenuWidget.OnMinusRoundTime // (Final|Native|Public|BlueprintCallable) // @ game+0x119c9e0
	void OnMinusRoomMaxNum(int32_t Num); // Function ProjectBoundary.PBMainMenuWidget.OnMinusRoomMaxNum // (Final|Native|Public|BlueprintCallable) // @ game+0x119c950
	void OnMinusFriBotNum(int32_t Num); // Function ProjectBoundary.PBMainMenuWidget.OnMinusFriBotNum // (Final|Native|Public|BlueprintCallable) // @ game+0x119c8c0
	void OnMinusEneBotNum(int32_t Num); // Function ProjectBoundary.PBMainMenuWidget.OnMinusEneBotNum // (Final|Native|Public|BlueprintCallable) // @ game+0x119c830
	void OnMapSelected(); // Function ProjectBoundary.PBMainMenuWidget.OnMapSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x119c810
	int32_t OnGetRoundTime(); // Function ProjectBoundary.PBMainMenuWidget.OnGetRoundTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119c7e0
	int32_t OnGetRoomMaxNum(); // Function ProjectBoundary.PBMainMenuWidget.OnGetRoomMaxNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119c7b0
	int32_t OnGetFriBotNum(); // Function ProjectBoundary.PBMainMenuWidget.OnGetFriBotNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119c780
	int32_t OnGetEneBotNum(); // Function ProjectBoundary.PBMainMenuWidget.OnGetEneBotNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119c750
	void OnFromExtraOptionBackToPrevMenu(); // Function ProjectBoundary.PBMainMenuWidget.OnFromExtraOptionBackToPrevMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x9c37b0
	void OnClickSelectMode(); // Function ProjectBoundary.PBMainMenuWidget.OnClickSelectMode // (Final|Native|Public|BlueprintCallable) // @ game+0x119c730
	void OnClickSelectMap(); // Function ProjectBoundary.PBMainMenuWidget.OnClickSelectMap // (Final|Native|Public|BlueprintCallable) // @ game+0x119c710
	void OnClickRunVRMode(); // Function ProjectBoundary.PBMainMenuWidget.OnClickRunVRMode // (Final|Native|Public|BlueprintCallable) // @ game+0x119c6f0
	void OnClickRefresh(); // Function ProjectBoundary.PBMainMenuWidget.OnClickRefresh // (Final|Native|Public|BlueprintCallable) // @ game+0x119c6d0
	void OnClickMultiplayer(); // Function ProjectBoundary.PBMainMenuWidget.OnClickMultiplayer // (Final|Native|Public|BlueprintCallable) // @ game+0x119c6b0
	void OnClickLANplayer(); // Function ProjectBoundary.PBMainMenuWidget.OnClickLANplayer // (Final|Native|Public|BlueprintCallable) // @ game+0x119c690
	void OnClickJoinMenu(); // Function ProjectBoundary.PBMainMenuWidget.OnClickJoinMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x119c670
	void OnClickJoin(); // Function ProjectBoundary.PBMainMenuWidget.OnClickJoin // (Final|Native|Public|BlueprintCallable) // @ game+0x119c650
	void OnClickHostTDM(); // Function ProjectBoundary.PBMainMenuWidget.OnClickHostTDM // (Final|Native|Public|BlueprintCallable) // @ game+0x119c630
	void OnClickHostFFA(); // Function ProjectBoundary.PBMainMenuWidget.OnClickHostFFA // (Final|Native|Public|BlueprintCallable) // @ game+0x119c610
	void OnClickEnterTrainingLevel(struct FString LevelName); // Function ProjectBoundary.PBMainMenuWidget.OnClickEnterTrainingLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x119c520
	void OnClickEnterCSTM(); // Function ProjectBoundary.PBMainMenuWidget.OnClickEnterCSTM // (Final|Native|Public|BlueprintCallable) // @ game+0x119c500
	void OnClickCreateGameMenu(); // Function ProjectBoundary.PBMainMenuWidget.OnClickCreateGameMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x119c4e0
	void OnClickCreateGameButton(); // Function ProjectBoundary.PBMainMenuWidget.OnClickCreateGameButton // (Final|Native|Public|BlueprintCallable) // @ game+0x119c4c0
	void OnClickBackToMainMenu(); // Function ProjectBoundary.PBMainMenuWidget.OnClickBackToMainMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x119c4a0
	void OnBackToPrevMenu(); // Function ProjectBoundary.PBMainMenuWidget.OnBackToPrevMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x119c480
	void OnAddRoundTime(int32_t Minute); // Function ProjectBoundary.PBMainMenuWidget.OnAddRoundTime // (Final|Native|Public|BlueprintCallable) // @ game+0x119c3f0
	void OnAddRoomMaxNum(int32_t Num); // Function ProjectBoundary.PBMainMenuWidget.OnAddRoomMaxNum // (Final|Native|Public|BlueprintCallable) // @ game+0x119c360
	void OnAddFriBotNum(int32_t Num); // Function ProjectBoundary.PBMainMenuWidget.OnAddFriBotNum // (Final|Native|Public|BlueprintCallable) // @ game+0x119c2d0
	void OnAddEneBotNum(int32_t Num); // Function ProjectBoundary.PBMainMenuWidget.OnAddEneBotNum // (Final|Native|Public|BlueprintCallable) // @ game+0x119c240
	void NotifyReadLeadboardComplete(bool bSuccess); // Function ProjectBoundary.PBMainMenuWidget.NotifyReadLeadboardComplete // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnMatchMakingStateChanged(enum class ELogicServerTeamMatchmakingState State); // Function ProjectBoundary.PBMainMenuWidget.NotifyOnMatchMakingStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnCanSearchStateChanged(enum class EPBSearchLimitReason reason, int32_t CurTeamNum); // Function ProjectBoundary.PBMainMenuWidget.NotifyOnCanSearchStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyMatchStarted(); // Function ProjectBoundary.PBMainMenuWidget.NotifyMatchStarted // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	enum class EPBTeam GetTeam(); // Function ProjectBoundary.PBMainMenuWidget.GetTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119be30
	bool GetServerFlag(); // Function ProjectBoundary.PBMainMenuWidget.GetServerFlag // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x119be00
	struct FString GetSelectedMapName(); // Function ProjectBoundary.PBMainMenuWidget.GetSelectedMapName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119bd80
	struct FString GetSelectedGameMode(); // Function ProjectBoundary.PBMainMenuWidget.GetSelectedGameMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119bd00
	struct FString GetPreWidegetNames(); // Function ProjectBoundary.PBMainMenuWidget.GetPreWidegetNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119bc50
	struct FMainMenuSavedSettings GetOneSavedMainMenuSettings(struct FString KeyName); // Function ProjectBoundary.PBMainMenuWidget.GetOneSavedMainMenuSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x119bac0
	struct UPBMainMenuWidget* GetMainMenuWidgetInstance(); // Function ProjectBoundary.PBMainMenuWidget.GetMainMenuWidgetInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x119ba90
	bool GetIsSearching(); // Function ProjectBoundary.PBMainMenuWidget.GetIsSearching // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x119b960
	struct FKey GetGamepadBackKey(); // Function ProjectBoundary.PBMainMenuWidget.GetGamepadBackKey // (Final|Native|Public|BlueprintCallable) // @ game+0x119b8f0
	struct FKey GetGamepadAcceptKey(); // Function ProjectBoundary.PBMainMenuWidget.GetGamepadAcceptKey // (Final|Native|Public|BlueprintCallable) // @ game+0x119b880
	struct UPBMainMenuWidget* GetCurrentWidget(); // Function ProjectBoundary.PBMainMenuWidget.GetCurrentWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x119b850
	bool GetCanStopSearching(); // Function ProjectBoundary.PBMainMenuWidget.GetCanStopSearching // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x119b820
	void GetCanSearch(enum class EPBSearchLimitReason reason, int32_t CurTeamNum); // Function ProjectBoundary.PBMainMenuWidget.GetCanSearch // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x119b740
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ProjectBoundary.PBMainMenuWidget.GamepadBackKey // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadAcceptKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ProjectBoundary.PBMainMenuWidget.GamepadAcceptKey // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomServerSearch(struct FString GameMode, struct FString MapName, int32_t InNumberOfRemaining); // Function ProjectBoundary.PBMainMenuWidget.CustomServerSearch // (Final|Native|Public|BlueprintCallable) // @ game+0x119b3d0
	void CheckFocusChangeAndPlaySound(struct UWidget* InContentWidget); // Function ProjectBoundary.PBMainMenuWidget.CheckFocusChangeAndPlaySound // (Final|Native|Public|BlueprintCallable) // @ game+0x119b340
	void changeLocalization(struct FString Target); // Function ProjectBoundary.PBMainMenuWidget.changeLocalization // (Final|Native|Static|Protected|BlueprintCallable) // @ game+0x119da70
	void CancelServerSearch(); // Function ProjectBoundary.PBMainMenuWidget.CancelServerSearch // (Final|Native|Public|BlueprintCallable) // @ game+0x119b320
	void BackLastFocus(); // Function ProjectBoundary.PBMainMenuWidget.BackLastFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x119b300
	void BackCurrentFocus(); // Function ProjectBoundary.PBMainMenuWidget.BackCurrentFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x119b2e0
};

// Class ProjectBoundary.PBMarkableComponent
// Size: 0x120 (Inherited: 0xb0)
struct UPBMarkableComponent : UActorComponent {
	struct USceneComponent* LocationComponent; // 0xb0(0x08)
	struct APBPlayerState* OwnerPlayerState; // 0xb8(0x08)
	char bLocalMarked : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)
	struct TArray<struct FName> SocketNameArray; // 0xd0(0x10)
	struct FVector BoundsExtent; // 0xe0(0x0c)
	struct FName LocatorSocketName; // 0xec(0x08)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct UPBIndicator* WidgetClass; // 0xf8(0x08)
	char bShouldAutoRegisterToManager : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UTexture2D* MiniMapTexture; // 0x108(0x08)
	char pad_110[0x10]; // 0x110(0x10)

	void SetOwnerPlayerState(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBMarkableComponent.SetOwnerPlayerState // (Native|Public|BlueprintCallable) // @ game+0x11a13a0
	bool IsNotBlocked(); // Function ProjectBoundary.PBMarkableComponent.IsNotBlocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11a0f20
	struct FName GetNotBlockedSocketName(); // Function ProjectBoundary.PBMarkableComponent.GetNotBlockedSocketName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11a0d90
	struct FVector GetLocation(); // Function ProjectBoundary.PBMarkableComponent.GetLocation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11a0d30
};

// Class ProjectBoundary.PBDynamicMarkableComponent
// Size: 0x208 (Inherited: 0x120)
struct UPBDynamicMarkableComponent : UPBMarkableComponent {
	char pad_120[0x4]; // 0x120(0x04)
	char bInSmokeObscuringZone : 1; // 0x124(0x01)
	char pad_124_1 : 7; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct FMulticastInlineDelegate TrackingByAssistAimingDelegate; // 0x128(0x10)
	struct FMulticastInlineDelegate OffTrackingByAssistAimingDelegate; // 0x138(0x10)
	char bIsValidForAssistAiming : 1; // 0x148(0x01)
	char bForceMarked : 1; // 0x148(0x01)
	char bForceMarkedByWorld : 1; // 0x148(0x01)
	char bForceMarkedByMode : 1; // 0x148(0x01)
	char pad_148_4 : 4; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FMulticastInlineDelegate HasBeMarked; // 0x150(0x10)
	struct FMulticastInlineDelegate HasBeUnMarked; // 0x160(0x10)
	struct TArray<struct APBPlayerState*> MarkCounterArray; // 0x170(0x10)
	char bMarked : 1; // 0x180(0x01)
	char pad_180_1 : 7; // 0x180(0x01)
	char pad_181[0xf]; // 0x181(0x0f)
	struct TArray<struct APBPlayerState*> SharedMarkCounterArray; // 0x190(0x10)
	char bSharedMarked : 1; // 0x1a0(0x01)
	char pad_1A0_1 : 7; // 0x1a0(0x01)
	char pad_1A1[0xf]; // 0x1a1(0x0f)
	struct TArray<struct APBPlayerState*> SensorMarkCounterArray; // 0x1b0(0x10)
	char bMarkedBySensor : 1; // 0x1c0(0x01)
	char pad_1C0_1 : 7; // 0x1c0(0x01)
	char pad_1C1[0xf]; // 0x1c1(0x0f)
	struct FMulticastInlineDelegate TrackingByMissileDelegate; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OffTrackingByMissileDelegate; // 0x1e0(0x10)
	char pad_1F0[0x4]; // 0x1f0(0x04)
	char bIsTrackingByMissile : 1; // 0x1f4(0x01)
	char bWillBeTrackedByMissile : 1; // 0x1f4(0x01)
	char pad_1F4_2 : 6; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	float MarkingTimeScaler; // 0x1f8(0x04)
	float UnMarkingTimeScaler; // 0x1fc(0x04)
	char bIsValidForAssistAiming_Config : 1; // 0x200(0x01)
	char bForceAddedForAssistAiming_Config : 1; // 0x200(0x01)
	char bScoreableTarget_Config : 1; // 0x200(0x01)
	char bForceSensedByDetonator : 1; // 0x200(0x01)
	char pad_200_4 : 4; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)

	void TrackingByMissile(); // Function ProjectBoundary.PBDynamicMarkableComponent.TrackingByMissile // (Final|Native|Public|BlueprintCallable) // @ game+0x11a1560
	void OnRep_SharedMarkCounterArray(); // Function ProjectBoundary.PBDynamicMarkableComponent.OnRep_SharedMarkCounterArray // (Final|Native|Protected) // @ game+0x11a1050
	void OnRep_SensorMarkCounterArray(); // Function ProjectBoundary.PBDynamicMarkableComponent.OnRep_SensorMarkCounterArray // (Final|Native|Protected) // @ game+0x11a1030
	void OnRep_MarkCounterArray(); // Function ProjectBoundary.PBDynamicMarkableComponent.OnRep_MarkCounterArray // (Final|Native|Protected) // @ game+0x11a0fd0
	void OnRep_IsTrackingByMissile(); // Function ProjectBoundary.PBDynamicMarkableComponent.OnRep_IsTrackingByMissile // (Final|Native|Protected) // @ game+0x11a0fb0
	void OnRep_ForceMarkedByWorld(); // Function ProjectBoundary.PBDynamicMarkableComponent.OnRep_ForceMarkedByWorld // (Final|Native|Protected) // @ game+0x11a0f90
	void OnRep_ForceMarkedByMode(); // Function ProjectBoundary.PBDynamicMarkableComponent.OnRep_ForceMarkedByMode // (Final|Native|Protected) // @ game+0x11a0f90
	void OffTrackingByMissile(); // Function ProjectBoundary.PBDynamicMarkableComponent.OffTrackingByMissile // (Final|Native|Public|BlueprintCallable) // @ game+0x11a0f70
};

// Class ProjectBoundary.PBMarkableComponent_Domination
// Size: 0x210 (Inherited: 0x208)
struct UPBMarkableComponent_Domination : UPBDynamicMarkableComponent {
	char pad_208[0x8]; // 0x208(0x08)
};

// Class ProjectBoundary.PBMarker
// Size: 0x2b0 (Inherited: 0x220)
struct APBMarker : AActor {
	struct USceneComponent* RootSceneComponent; // 0x220(0x08)
	struct UStaticMeshComponent* FirstMesh; // 0x228(0x08)
	struct UStaticMeshComponent* SecondMesh; // 0x230(0x08)
	struct TArray<struct FVector> AdjacentOffsets; // 0x238(0x10)
	float fCenterMoveThreshold; // 0x248(0x04)
	float fInZoneDistance; // 0x24c(0x04)
	float fCenterMoveUnit; // 0x250(0x04)
	struct FVector vCenterOffset; // 0x254(0x0c)
	char pad_260[0x50]; // 0x260(0x50)

	void UpdateMarkerLocation(); // Function ProjectBoundary.PBMarker.UpdateMarkerLocation // (Final|Native|Public|BlueprintCallable) // @ game+0x11a1580
	void ResetDeltaLocation(); // Function ProjectBoundary.PBMarker.ResetDeltaLocation // (Final|Native|Public|BlueprintCallable) // @ game+0x11a1160
	struct FVector GetLastLocation(); // Function ProjectBoundary.PBMarker.GetLastLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11a0d00
	void AddToDelta(struct FVector Delta); // Function ProjectBoundary.PBMarker.AddToDelta // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11a0bb0
};

// Class ProjectBoundary.PBMarkerManager
// Size: 0x318 (Inherited: 0x30)
struct UPBMarkerManager : UWorldSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UPBDynamicMarkableComponent*> SensorMarkedArray; // 0x38(0x10)
	struct TArray<struct UPBDynamicMarkableComponent*> SharedMarkedArray; // 0x48(0x10)
	struct TMap<struct UPBDynamicMarkableComponent*, struct FPBMarkableData> MarkableSharedDataMap; // 0x58(0x50)
	struct TArray<struct UPBDynamicMarkableComponent*> MarkedArray; // 0xa8(0x10)
	struct TMap<struct UPBDynamicMarkableComponent*, struct FPBMarkableData> MarkableVisionDataMap; // 0xb8(0x50)
	struct TArray<struct UPBMarkableComponent*> LocalMarkedArray; // 0x108(0x10)
	struct TArray<struct UPBDynamicMarkableComponent*> ForceMarkedArray; // 0x118(0x10)
	struct TArray<struct UPBHeatComponent*> HeatComponentArray; // 0x128(0x10)
	struct TArray<struct UPBMarkableComponent*> MarkableArray; // 0x138(0x10)
	struct TArray<struct UPBDynamicMarkableComponent*> DynamicMarkableArray; // 0x148(0x10)
	struct TMap<struct APBPlayerState*, float> LastMarkedOtherTime; // 0x158(0x50)
	struct TMap<struct UPBDynamicMarkableComponent*, struct FPBMarkableHUDInfo> InfoMap; // 0x1a8(0x50)
	struct TMap<struct UPBDynamicMarkableComponent*, struct UPBIndicator*> ForceMarkedMap; // 0x1f8(0x50)
	struct TMap<struct UPBDynamicMarkableComponent*, struct UPBIndicator*> VisionMarkedMap; // 0x248(0x50)
	struct TMap<struct UPBMarkableComponent*, struct UPBIndicator*> IndicatorMap; // 0x298(0x50)
	char pad_2E8[0x8]; // 0x2e8(0x08)
	struct TArray<struct UPBDynamicMarkableComponent*> MissileTrackArray; // 0x2f0(0x10)
	struct TArray<struct UPBDynamicMarkableComponent*> MarkableArray_Async; // 0x300(0x10)
	char pad_310[0x8]; // 0x310(0x08)
};

// Class ProjectBoundary.PBMatchGoalScoreWidget
// Size: 0x270 (Inherited: 0x268)
struct UPBMatchGoalScoreWidget : UPBUserWidget {
	struct FName ModeName; // 0x268(0x08)

	void K2_SetGoalScore(); // Function ProjectBoundary.PBMatchGoalScoreWidget.K2_SetGoalScore // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBMatchmakingManager
// Size: 0xf8 (Inherited: 0x30)
struct UPBMatchmakingManager : UGameInstanceSubsystem {
	struct FMulticastInlineDelegate OnMatchmakingStateChangedDelegate; // 0x30(0x10)
	struct FMulticastInlineDelegate OnStopMatchmakingCompleteDelegate; // 0x40(0x10)
	struct FMulticastInlineDelegate OnNetworkErrorDelegate; // 0x50(0x10)
	char pad_60[0x20]; // 0x60(0x20)
	struct FMulticastInlineDelegate OnMatchFoundDeleaget; // 0x80(0x10)
	struct FMulticastInlineDelegate OnMatchNotFoundDeleaget; // 0x90(0x10)
	struct FMulticastInlineDelegate OnLobbyTimeUpdateDeleaget; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnLobbyStateUpdateDeleaget; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct FMulticastInlineDelegate OnPlayerJoinedDeleaget; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnPlayerLeftDeleaget; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnLobbyStartedDeleaget; // 0xe8(0x10)

	void StopMatchmaking(bool bIsTimeout); // Function ProjectBoundary.PBMatchmakingManager.StopMatchmaking // (Final|Native|Public|BlueprintCallable) // @ game+0x11a14d0
	void StartMatchmaking(struct FString InSelectedMode); // Function ProjectBoundary.PBMatchmakingManager.StartMatchmaking // (Final|Native|Public|BlueprintCallable) // @ game+0x11a1430
	void OnStopMatchmakingComplete__DelegateSignature(); // DelegateFunction ProjectBoundary.PBMatchmakingManager.OnStopMatchmakingComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	void OnPlayerLeft__DelegateSignature(struct FUniqueNetIdRepl UniqueID); // DelegateFunction ProjectBoundary.PBMatchmakingManager.OnPlayerLeft__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1556ec0
	void OnPlayerJoined__DelegateSignature(struct FText DisplayName, struct FUniqueNetIdRepl UniqueID); // DelegateFunction ProjectBoundary.PBMatchmakingManager.OnPlayerJoined__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1556ec0
	void OnNetworkError__DelegateSignature(); // DelegateFunction ProjectBoundary.PBMatchmakingManager.OnNetworkError__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	void OnMatchNotFound__DelegateSignature(); // DelegateFunction ProjectBoundary.PBMatchmakingManager.OnMatchNotFound__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	void OnMatchmakingStateChanged__DelegateSignature(enum class ELogicServerTeamMatchmakingState NewState); // DelegateFunction ProjectBoundary.PBMatchmakingManager.OnMatchmakingStateChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	void OnMatchFound__DelegateSignature(); // DelegateFunction ProjectBoundary.PBMatchmakingManager.OnMatchFound__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	void OnLobbyTimeUpdate__DelegateSignature(); // DelegateFunction ProjectBoundary.PBMatchmakingManager.OnLobbyTimeUpdate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	void OnLobbyStateUpdate__DelegateSignature(); // DelegateFunction ProjectBoundary.PBMatchmakingManager.OnLobbyStateUpdate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	void OnLobbyStarted__DelegateSignature(); // DelegateFunction ProjectBoundary.PBMatchmakingManager.OnLobbyStarted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	bool IsSearching(); // Function ProjectBoundary.PBMatchmakingManager.IsSearching // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11a0f50
	bool IsMatchFound(); // Function ProjectBoundary.PBMatchmakingManager.IsMatchFound // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11a0f00
	bool InFastStage(); // Function ProjectBoundary.PBMatchmakingManager.InFastStage // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a0ed0
	bool HasLobbyStarted(); // Function ProjectBoundary.PBMatchmakingManager.HasLobbyStarted // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a0ea0
	struct FString GetSelectedMode(); // Function ProjectBoundary.PBMatchmakingManager.GetSelectedMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11a0de0
	int32_t GetPlayerNum(); // Function ProjectBoundary.PBMatchmakingManager.GetPlayerNum // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a0db0
	enum class ELogicServerTeamMatchmakingState GetMatchmakingState(); // Function ProjectBoundary.PBMatchmakingManager.GetMatchmakingState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a0d70
	struct FText GetCountDown(); // Function ProjectBoundary.PBMatchmakingManager.GetCountDown // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a0c60
};

// Class ProjectBoundary.PBMedicine
// Size: 0x700 (Inherited: 0x680)
struct APBMedicine : APBProjectile {
	char bScanSwitch : 1; // 0x680(0x01)
	char pad_680_1 : 7; // 0x680(0x01)
	char pad_681[0xf]; // 0x681(0x0f)
	struct UPBDynamicMarkableComponent* MarkableComponent; // 0x690(0x08)
	float DeferredDestroyTime; // 0x698(0x04)
	float Health; // 0x69c(0x04)
	float HitDamage; // 0x6a0(0x04)
	char pad_6A4[0x4]; // 0x6a4(0x04)
	struct UDamageType* DamageType; // 0x6a8(0x08)
	float ScanDistance; // 0x6b0(0x04)
	float DelayScanTime; // 0x6b4(0x04)
	float ScanDuration; // 0x6b8(0x04)
	float MaxFlyDuration; // 0x6bc(0x04)
	float MaxSpeedDelay; // 0x6c0(0x04)
	float RecoverRate; // 0x6c4(0x04)
	float FixTime; // 0x6c8(0x04)
	float InterpSpeed; // 0x6cc(0x04)
	struct TArray<struct APBCharacter*> ScanCharacterArray; // 0x6d0(0x10)
	char pad_6E0[0x20]; // 0x6e0(0x20)

	void OnRep_ScanSwitch(); // Function ProjectBoundary.PBMedicine.OnRep_ScanSwitch // (Final|Native|Protected) // @ game+0x11a1010
	void K2_StopScan(); // Function ProjectBoundary.PBMedicine.K2_StopScan // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartScan(); // Function ProjectBoundary.PBMedicine.K2_StartScan // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DelayScan(); // Function ProjectBoundary.PBMedicine.K2_DelayScan // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void DeferredDestroy(); // Function ProjectBoundary.PBMedicine.DeferredDestroy // (Final|Native|Protected) // @ game+0x11a0c40
};

// Class ProjectBoundary.PBMedicineSkillModule
// Size: 0x5e0 (Inherited: 0x5a8)
struct APBMedicineSkillModule : APBBaseRoleSkillModule {
	float CheckRadius; // 0x5a8(0x04)
	float RescueDistance; // 0x5ac(0x04)
	struct APBCharacter* PendingRescuedCharacter; // 0x5b0(0x08)
	struct APBCharacter* PrevPendingRescuedTeammate; // 0x5b8(0x08)
	struct APBCharacter* BeingRescuedTeammate; // 0x5c0(0x08)
	struct TArray<struct APBCharacter*> TeammateOnHitDownContainer; // 0x5c8(0x10)
	char pad_5D8[0x8]; // 0x5d8(0x08)

	void ServerStartActivateSkill(struct APBCharacter* InPendingRescuedCharacter); // Function ProjectBoundary.PBMedicineSkillModule.ServerStartActivateSkill // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11a12e0
	void K2_ShowIndicator(); // Function ProjectBoundary.PBMedicineSkillModule.K2_ShowIndicator // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OwningCharacterBeHitDown(); // Function ProjectBoundary.PBMedicineSkillModule.K2_OwningCharacterBeHitDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBMedStationSkill
// Size: 0x5b8 (Inherited: 0x5a8)
struct APBMedStationSkill : APBBaseRoleSkillModule {
	struct APBMedicine* MedStationClass; // 0x5a8(0x08)
	struct FName SpawnSocketName; // 0x5b0(0x08)

	void ServerSpawnMedStation(struct FTransform InSpawnTransform, struct FVector InDirection); // Function ProjectBoundary.PBMedStationSkill.ServerSpawnMedStation // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x11a1180
};

// Class ProjectBoundary.PBMeleeWeapon
// Size: 0x588 (Inherited: 0x220)
struct APBMeleeWeapon : AActor {
	struct USceneComponent* TransformComponent; // 0x220(0x08)
	struct USkeletalMeshComponent* Mesh1P; // 0x228(0x08)
	struct USkeletalMeshComponent* Mesh3P; // 0x230(0x08)
	struct FName AttachedSocket; // 0x238(0x08)
	struct FName MeleeWeaponID; // 0x240(0x08)
	struct FPBMeleeWeaponNetworkConfig MeleeNetworkConfig; // 0x248(0x10)
	char pad_258[0x40]; // 0x258(0x40)
	struct FPBMeleeConfig StartMeleeConfig; // 0x298(0x40)
	struct FPBMeleeConfig HasTargetMeleeConfig; // 0x2d8(0x40)
	struct FPBMeleeConfig NoTargetMeleeConfig; // 0x318(0x40)
	struct FMeleeAttackData MeleeAttackData; // 0x358(0x130)
	char pad_488[0x40]; // 0x488(0x40)
	struct FPBMeleeConfig StartDoingDashMeleeConfig; // 0x4c8(0x40)
	struct FPBMeleeConfig DoingNoTargetDashMeleeConfig; // 0x508(0x40)
	struct FPBMeleeConfig DoingHasTargetDashMeleeConfig; // 0x548(0x40)

	void OnRep_MeleeNetworkConfig(); // Function ProjectBoundary.PBMeleeWeapon.OnRep_MeleeNetworkConfig // (Final|Native|Protected) // @ game+0x11a0ff0
	void K2_StartDoingMelee(); // Function ProjectBoundary.PBMeleeWeapon.K2_StartDoingMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartDoingDashMelee(); // Function ProjectBoundary.PBMeleeWeapon.K2_StartDoingDashMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoneMelee(); // Function ProjectBoundary.PBMeleeWeapon.K2_DoneMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoneDashMelee(); // Function ProjectBoundary.PBMeleeWeapon.K2_DoneDashMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoingNoTargetMelee(); // Function ProjectBoundary.PBMeleeWeapon.K2_DoingNoTargetMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoingNoTargetDashMelee(); // Function ProjectBoundary.PBMeleeWeapon.K2_DoingNoTargetDashMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoingHasTargetMelee(); // Function ProjectBoundary.PBMeleeWeapon.K2_DoingHasTargetMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DoingHasTargetDashMelee(); // Function ProjectBoundary.PBMeleeWeapon.K2_DoingHasTargetDashMelee // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBMeleeWeaponSkin_Base
// Size: 0x30 (Inherited: 0x30)
struct UPBMeleeWeaponSkin_Base : UPBEquipmentSkinBase {
};

// Class ProjectBoundary.PBMeleeWeaponSkin_Material
// Size: 0x88 (Inherited: 0x30)
struct UPBMeleeWeaponSkin_Material : UPBMeleeWeaponSkin_Base {
	struct UPBMeleeWeaponSkin_Mesh* MeleeWeaponMesh; // 0x30(0x08)
	struct TMap<struct FName, struct FPBSkinMaterialDetailV1> SlotAndMaterialInfoMap; // 0x38(0x50)
};

// Class ProjectBoundary.PBMeleeWeaponSkin_Mesh
// Size: 0x38 (Inherited: 0x30)
struct UPBMeleeWeaponSkin_Mesh : UPBMeleeWeaponSkin_Base {
	struct USkeletalMesh* SkeletalMesh; // 0x30(0x08)
};

// Class ProjectBoundary.PBMemberInfoWidget
// Size: 0x2f8 (Inherited: 0x268)
struct UPBMemberInfoWidget : UPBUserWidget {
	bool bDefualtDisplayMySelf; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FPBMemberInfo_UI MemberInfoUI; // 0x270(0x80)
	int32_t CurrentMemberIndex; // 0x2f0(0x04)
	bool bInActionTeam; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)

	void RefreshMemberInfo(struct TArray<struct APBLobbyPlayerState*> InSquadMembers); // Function ProjectBoundary.PBMemberInfoWidget.RefreshMemberInfo // (Final|Native|Protected|BlueprintCallable) // @ game+0x11a1070
	void K2_SetSelectMember(struct APBLobbyPlayerState* InPlayerState); // Function ProjectBoundary.PBMemberInfoWidget.K2_SetSelectMember // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetMemberInfo(); // Function ProjectBoundary.PBMemberInfoWidget.K2_SetMemberInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBMenuItemWidgetStyle
// Size: 0x1d0 (Inherited: 0x30)
struct UPBMenuItemWidgetStyle : USlateWidgetStyleContainerBase {
	struct FPBMenuItemStyle MenuItemStyle; // 0x30(0x1a0)
};

// Class ProjectBoundary.PBMenuSoundsWidgetStyle
// Size: 0x68 (Inherited: 0x30)
struct UPBMenuSoundsWidgetStyle : USlateWidgetStyleContainerBase {
	struct FPBMenuSoundsStyle SoundsStyle; // 0x30(0x38)
};

// Class ProjectBoundary.PBMenuWidgetStyle
// Size: 0x230 (Inherited: 0x30)
struct UPBMenuWidgetStyle : USlateWidgetStyleContainerBase {
	struct FPBMenuStyle MenuStyle; // 0x30(0x200)
};

// Class ProjectBoundary.PBMerchWidget
// Size: 0x310 (Inherited: 0x268)
struct UPBMerchWidget : UPBUserWidget {
	struct FName MerchName; // 0x268(0x08)
	struct FPBMerch_UI UI; // 0x270(0xa0)
};

// Class ProjectBoundary.PBMeshWidget
// Size: 0x760 (Inherited: 0x108)
struct UPBMeshWidget : UWidget {
	struct TArray<struct USlateVectorArtData*> TrailMeshAsset; // 0x108(0x10)
	struct UUserWidget* WidgetClass; // 0x118(0x08)
	struct UStaticMesh* SourceMesh; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)
	struct FMinimalViewInfo ViewInfo; // 0x130(0x5e0)
	enum class EAspectRatioAxisConstraint AxisConstraint; // 0x710(0x01)
	char bFillScreenBaseOnAxisConstraint : 1; // 0x711(0x01)
	char pad_711_1 : 7; // 0x711(0x01)
	char pad_712[0x6]; // 0x712(0x06)
	struct TArray<struct FVector> SavedSourceMeshPosition; // 0x718(0x10)
	struct UUserWidget* UsedUserWidget; // 0x728(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x730(0x08)
	char pad_738[0x28]; // 0x738(0x28)

	void SetRelativeTransform(struct FTransform InTransform); // Function ProjectBoundary.PBMeshWidget.SetRelativeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11a7530
	struct UUserWidget* GetUserWidget(); // Function ProjectBoundary.PBMeshWidget.GetUserWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6c30
};

// Class ProjectBoundary.PBMine
// Size: 0x770 (Inherited: 0x680)
struct APBMine : APBProjectile {
	struct UPBDynamicMarkableComponent* MarkableComponent; // 0x680(0x08)
	struct UDamageType* DamageType; // 0x688(0x08)
	float ScanDistance; // 0x690(0x04)
	float MarkedDistance; // 0x694(0x04)
	float DelayStartScanTime; // 0x698(0x04)
	float DelayExplosionTime; // 0x69c(0x04)
	float HitDamage; // 0x6a0(0x04)
	char pad_6A4[0x4]; // 0x6a4(0x04)
	struct FPBProjectileModuleConfig PBMineModuleConfig; // 0x6a8(0x80)
	struct TArray<struct APBPlayerState*> PassiveMarkArray; // 0x728(0x10)
	char pad_738[0x30]; // 0x738(0x30)
	char bScanSwitch : 1; // 0x768(0x01)
	char pad_768_1 : 1; // 0x768(0x01)
	char bMarked : 1; // 0x768(0x01)
	char pad_768_3 : 5; // 0x768(0x01)
	char pad_769[0x7]; // 0x769(0x07)

	bool ShouldBeMarked(); // Function ProjectBoundary.PBMine.ShouldBeMarked // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a7620
	void OnUnMarked(); // Function ProjectBoundary.PBMine.OnUnMarked // (Final|Native|Protected) // @ game+0x11a6e10
	void OnMarked(); // Function ProjectBoundary.PBMine.OnMarked // (Final|Native|Protected) // @ game+0x9c37b0
	void NotifyHasBeenTrigger(); // Function ProjectBoundary.PBMine.NotifyHasBeenTrigger // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyHasBeenActivated(); // Function ProjectBoundary.PBMine.NotifyHasBeenActivated // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBMiniMapNode
// Size: 0x260 (Inherited: 0x260)
struct UPBMiniMapNode : UUserWidget {

	void UpdateNode(struct FPBMiniMapIconInfo InIconInfo); // Function ProjectBoundary.PBMiniMapNode.UpdateNode // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void K2_AtFirstCapture(enum class EPBMarkReason MarkReason); // Function ProjectBoundary.PBMiniMapNode.K2_AtFirstCapture // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBMiniMapWidget
// Size: 0x398 (Inherited: 0x268)
struct UPBMiniMapWidget : UPBUserWidget {
	struct APBCharacter* Character; // 0x268(0x08)
	char pad_270[0x30]; // 0x270(0x30)
	struct TArray<struct UPBMiniMapNode*> DrewMap; // 0x2a0(0x10)
	struct TArray<struct UPBMiniMapNode*> NotUsedWidgetArray; // 0x2b0(0x10)
	struct TArray<struct UPBMiniMapNode*> WidgetArray; // 0x2c0(0x10)
	struct TMap<struct UPBMarkableComponent*, struct FPBMiniMapIconInfo> MapNodeInfo; // 0x2d0(0x50)
	struct TSet<struct UPBMarkableComponent*> LastCaptureInfoNodeSet; // 0x320(0x50)
	char pad_370[0x8]; // 0x370(0x08)
	struct UPBMiniMapNode* UPBMiniMapNodeClass; // 0x378(0x08)
	float MiniMapWorldHalfRange; // 0x380(0x04)
	bool bIsFriendAppearDistLimit; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	float FriendAppearDistLimit; // 0x388(0x04)
	float MiniMapMaxVValue; // 0x38c(0x04)
	float MiniMapMinVValue; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)

	void K2_ReEnterWorld(); // Function ProjectBoundary.PBMiniMapWidget.K2_ReEnterWorld // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ReEnterSafeZoom(); // Function ProjectBoundary.PBMiniMapWidget.K2_ReEnterSafeZoom // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ReEnterNormalRaderSignalVolume(); // Function ProjectBoundary.PBMiniMapWidget.K2_ReEnterNormalRaderSignalVolume // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OutOfSafeZoom(); // Function ProjectBoundary.PBMiniMapWidget.K2_OutOfSafeZoom // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OutOfNormalRaderSignalVolume(); // Function ProjectBoundary.PBMiniMapWidget.K2_OutOfNormalRaderSignalVolume // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Marked(); // Function ProjectBoundary.PBMiniMapWidget.K2_Marked // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_MarkCleared(); // Function ProjectBoundary.PBMiniMapWidget.K2_MarkCleared // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Init(); // Function ProjectBoundary.PBMiniMapWidget.K2_Init // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_FellOutOfWorld(); // Function ProjectBoundary.PBMiniMapWidget.K2_FellOutOfWorld // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_BeKilled(struct APawn* PawnInstigator); // Function ProjectBoundary.PBMiniMapWidget.K2_BeKilled // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_BeHit(struct APawn* PawnInstigator); // Function ProjectBoundary.PBMiniMapWidget.K2_BeHit // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_AtFirstCapture(enum class EPBMarkReason reason, struct UPBMarkableComponent* Markable); // Function ProjectBoundary.PBMiniMapWidget.K2_AtFirstCapture // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ArmorBeHit(struct APawn* PawnInstigator); // Function ProjectBoundary.PBMiniMapWidget.K2_ArmorBeHit // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ArmorBeDestroyed(struct APawn* PawnInstigator); // Function ProjectBoundary.PBMiniMapWidget.K2_ArmorBeDestroyed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_AddWidgetToCanvasPanel(struct UPBMiniMapNode* OutMiniMapNode); // Function ProjectBoundary.PBMiniMapWidget.K2_AddWidgetToCanvasPanel // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	float GetMinimapsHalfSize(); // Function ProjectBoundary.PBMiniMapWidget.GetMinimapsHalfSize // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6bf0
	bool GetIsFriendAppearDistLimit(); // Function ProjectBoundary.PBMiniMapWidget.GetIsFriendAppearDistLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x11a69c0
	float GetFriendAppearDistLimit(); // Function ProjectBoundary.PBMiniMapWidget.GetFriendAppearDistLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6790
};

// Class ProjectBoundary.PBMobilityHeatComponent
// Size: 0xf8 (Inherited: 0xf8)
struct UPBMobilityHeatComponent : UPBHeatComponent {
};

// Class ProjectBoundary.PBMotionSensor
// Size: 0x6e8 (Inherited: 0x680)
struct APBMotionSensor : APBProjectile {
	struct UPBDynamicMarkableComponent* MarkableComponent; // 0x680(0x08)
	char bScanSwitch : 1; // 0x688(0x01)
	char bHasEnemyBeScanned : 1; // 0x688(0x01)
	char pad_688_2 : 6; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	struct FMulticastInlineDelegate OnScannedEnemy; // 0x690(0x10)
	char pad_6A0[0x8]; // 0x6a0(0x08)
	struct FPBMotionSensorData MotionSensorData; // 0x6a8(0x40)

	void OnRep_ScanSwitch(); // Function ProjectBoundary.PBMotionSensor.OnRep_ScanSwitch // (Final|Native|Protected) // @ game+0x11a6df0
	void OnRep_HasEnemyBeScanned(); // Function ProjectBoundary.PBMotionSensor.OnRep_HasEnemyBeScanned // (Final|Native|Protected) // @ game+0x11a6dd0
	void K2_StopScan(); // Function ProjectBoundary.PBMotionSensor.K2_StopScan // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartScan(); // Function ProjectBoundary.PBMotionSensor.K2_StartScan // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBNormalDamageType
// Size: 0x60 (Inherited: 0x60)
struct UPBNormalDamageType : UPBDamageType {
};

// Class ProjectBoundary.PBNormalRadarSignalVolume
// Size: 0x268 (Inherited: 0x268)
struct APBNormalRadarSignalVolume : APhysicsVolume {
};

// Class ProjectBoundary.PBOnlineAchievementManager
// Size: 0xd8 (Inherited: 0x28)
struct UPBOnlineAchievementManager : UObject {
	char pad_28[0x48]; // 0x28(0x48)
	struct TMap<struct FString, struct APBChallengeState*> ChallengeMap; // 0x70(0x50)
	struct TArray<struct FString> UpdateAchievementArray; // 0xc0(0x10)
	struct UProjectBoundaryInstance* PBInstance; // 0xd0(0x08)

	struct UProjectBoundaryInstance* GetPBGameInstance(); // Function ProjectBoundary.PBOnlineAchievementManager.GetPBGameInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6c10
};

// Class ProjectBoundary.PBOnlineSessionClient
// Size: 0x1e0 (Inherited: 0x1e0)
struct UPBOnlineSessionClient : UOnlineSessionClient {
};

// Class ProjectBoundary.PBOperatorSkin_Base
// Size: 0x30 (Inherited: 0x30)
struct UPBOperatorSkin_Base : UPBCharacterSkinBase {
};

// Class ProjectBoundary.PBOperatorSkin_Material
// Size: 0x88 (Inherited: 0x30)
struct UPBOperatorSkin_Material : UPBOperatorSkin_Base {
	struct UPBOperatorSkin_MeshBase* OperatorMesh; // 0x30(0x08)
	struct TMap<struct FName, struct FPBSkinMaterialDetailV1> SlotAndMaterialInfoMap; // 0x38(0x50)
};

// Class ProjectBoundary.PBOperatorSkin_MeshBase
// Size: 0x30 (Inherited: 0x30)
struct UPBOperatorSkin_MeshBase : UPBOperatorSkin_Base {
};

// Class ProjectBoundary.PBOperatorSkin_Mesh1P
// Size: 0x40 (Inherited: 0x30)
struct UPBOperatorSkin_Mesh1P : UPBOperatorSkin_MeshBase {
	struct USkeletalMesh* HandLeftSkeletalMesh; // 0x30(0x08)
	struct USkeletalMesh* HandRightSkeletalMesh; // 0x38(0x08)
};

// Class ProjectBoundary.PBOperatorSkin_Mesh3P
// Size: 0x38 (Inherited: 0x30)
struct UPBOperatorSkin_Mesh3P : UPBOperatorSkin_MeshBase {
	struct USkeletalMesh* SkeletalMesh; // 0x30(0x08)
};

// Class ProjectBoundary.PBOptions
// Size: 0x3d0 (Inherited: 0x28)
struct UPBOptions : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct FMulticastInlineDelegate DSP_OnSwitchInputDevice; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct UProjectBoundaryInstance* GameInstance; // 0x58(0x08)
	char pad_60[0x140]; // 0x60(0x140)
	struct TMap<struct FName, bool> CurrentBoolOptions; // 0x1a0(0x50)
	struct TMap<struct FName, int32_t> CurrentIntOptions; // 0x1f0(0x50)
	struct TMap<struct FName, float> CurrentFloatOptions; // 0x240(0x50)
	struct TMap<struct FName, char> CurrentEnumOptions; // 0x290(0x50)
	char pad_2E0[0xf0]; // 0x2e0(0xf0)

	void SetIntOption(struct FName OptionName, int32_t Val); // Function ProjectBoundary.PBOptions.SetIntOption // (Final|Native|Public|BlueprintCallable) // @ game+0x11a7460
	void SetInput(enum class EInputDevice InputDevice, struct FName InInputName, struct FKey InKey, int32_t Index, bool Shift, bool Ctrl, bool Alt); // Function ProjectBoundary.PBOptions.SetInput // (Final|Native|Public|BlueprintCallable) // @ game+0x11a71e0
	void SetFloatOption(struct FName OptionName, float Val); // Function ProjectBoundary.PBOptions.SetFloatOption // (Final|Native|Public|BlueprintCallable) // @ game+0x11a7110
	void SetEnumOption(struct FName OptionName, char Val); // Function ProjectBoundary.PBOptions.SetEnumOption // (Final|Native|Public|BlueprintCallable) // @ game+0x11a7040
	void SetBoolOption(struct FName OptionName, bool Val); // Function ProjectBoundary.PBOptions.SetBoolOption // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6f70
	void SaveOptions(); // Function ProjectBoundary.PBOptions.SaveOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6f50
	void ResetUserSettings(enum class EPBOptionsPart OptionPart); // Function ProjectBoundary.PBOptions.ResetUserSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6ed0
	void ResetInputSettings(enum class EInputDevice InputDevice); // Function ProjectBoundary.PBOptions.ResetInputSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6e50
	void RefreshInputTips(); // Function ProjectBoundary.PBOptions.RefreshInputTips // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6e30
	bool IsInputKeysChanged(struct FName InputName, enum class EInputDevice InputDevice); // Function ProjectBoundary.PBOptions.IsInputKeysChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6d00
	bool HasNonAutoApplyOptionsChanged(enum class EPBOptionsPart OptionPart); // Function ProjectBoundary.PBOptions.HasNonAutoApplyOptionsChanged // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a6c70
	bool HasAnyChanged(); // Function ProjectBoundary.PBOptions.HasAnyChanged // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a6c50
	struct TArray<struct FKey> GetKeysOfInput(struct FName Input, bool bUseSpecificDevice, enum class EInputDevice SpecificInputDevice); // Function ProjectBoundary.PBOptions.GetKeysOfInput // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a69e0
	int32_t GetIntOption(struct FName OptionName); // Function ProjectBoundary.PBOptions.GetIntOption // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a6920
	struct UTexture2D* GetInputTipsImage(struct UObject* WorldContextObject, struct FName Action, bool bUseSpecificDevice, enum class EInputDevice SpecificInputDevice); // Function ProjectBoundary.PBOptions.GetInputTipsImage // (Final|Native|Public|BlueprintCallable) // @ game+0x11a67b0
	float GetFloatOption(struct FName OptionName); // Function ProjectBoundary.PBOptions.GetFloatOption // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a66f0
	char GetEnumOption(struct FName OptionName); // Function ProjectBoundary.PBOptions.GetEnumOption // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a6650
	enum class EInputDevice GetCurrentActivateInputDevice(); // Function ProjectBoundary.PBOptions.GetCurrentActivateInputDevice // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a6620
	bool GetBoolOption(struct FName OptionName); // Function ProjectBoundary.PBOptions.GetBoolOption // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a6580
	enum class EInputDevice GetAvaliableGamepad(); // Function ProjectBoundary.PBOptions.GetAvaliableGamepad // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a6550
	void DropChanges(); // Function ProjectBoundary.PBOptions.DropChanges // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6530
	void DiscardNonAutoApplyOptionsChanges(enum class EPBOptionsPart ChoosenOptionPart); // Function ProjectBoundary.PBOptions.DiscardNonAutoApplyOptionsChanges // (Final|Native|Public|BlueprintCallable) // @ game+0x11a64b0
	void BP_RegisterOptionApplyer(struct FName OptionName, struct FDelegate Delegate, bool bApplyImmediately); // Function ProjectBoundary.PBOptions.BP_RegisterOptionApplyer // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6380
	void ApplyOneOption(struct FName OptionName); // Function ProjectBoundary.PBOptions.ApplyOneOption // (Final|Native|Public|BlueprintCallable) // @ game+0x11a62f0
	void ApplyNonAutoApplyOptions(enum class EPBOptionsPart ChoosenOptionPart); // Function ProjectBoundary.PBOptions.ApplyNonAutoApplyOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6270
	void ApplyAllOptions(); // Function ProjectBoundary.PBOptions.ApplyAllOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x11a6250
};

// Class ProjectBoundary.PBOptionsWidgetStyle
// Size: 0x68 (Inherited: 0x30)
struct UPBOptionsWidgetStyle : USlateWidgetStyleContainerBase {
	struct FPBOptionsStyle OptionsStyle; // 0x30(0x38)
};

// Class ProjectBoundary.PBOverAirPressureSkillModule
// Size: 0x668 (Inherited: 0x5a8)
struct APBOverAirPressureSkillModule : APBBaseRoleSkillModule {
	float AirPressureIncrements; // 0x5a8(0x04)
	float AddAirPressureDuration; // 0x5ac(0x04)
	float AddAirPressureInterval; // 0x5b0(0x04)
	char pad_5B4[0x4]; // 0x5b4(0x04)
	struct UCurveFloat* AddAirPressureCurve; // 0x5b8(0x08)
	char pad_5C0[0xa8]; // 0x5c0(0xa8)

	void FinishAddAirPressure(); // Function ProjectBoundary.PBOverAirPressureSkillModule.FinishAddAirPressure // (Final|Native|Public) // @ game+0x11aa7b0
};

// Class ProjectBoundary.PBPageButtonWidget
// Size: 0x270 (Inherited: 0x268)
struct UPBPageButtonWidget : UPBUserWidget {
	struct UPBPageWidget* PageClass; // 0x268(0x08)

	void GotoPage(); // Function ProjectBoundary.PBPageButtonWidget.GotoPage // (Final|Native|Protected|BlueprintCallable) // @ game+0x11aa9c0
};

// Class ProjectBoundary.PBPageWidget
// Size: 0x298 (Inherited: 0x268)
struct UPBPageWidget : UPBUserWidget {
	struct FName PageName; // 0x268(0x08)
	struct FText DisplayName; // 0x270(0x18)
	char pad_288[0x10]; // 0x288(0x10)

	void ReturnPrevious(); // Function ProjectBoundary.PBPageWidget.ReturnPrevious // (Final|Native|Protected|BlueprintCallable) // @ game+0x11aac00
};

// Class ProjectBoundary.PBPawn
// Size: 0x2e0 (Inherited: 0x280)
struct APBPawn : APawn {
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x280(0x04)
	char ReplicatedMovementMode; // 0x284(0x01)
	char pad_285[0x3b]; // 0x285(0x3b)
	struct USkeletalMeshComponent* Mesh3P; // 0x2c0(0x08)
	struct UPBPawnMovement* PBPawnMovement; // 0x2c8(0x08)
	struct UShapeComponent* ShapeComponent; // 0x2d0(0x08)
	char bClientUpdating : 1; // 0x2d8(0x01)
	char pad_2D8_1 : 7; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)

	void StopAnimMontage(struct UAnimMontage* AnimMontage); // Function ProjectBoundary.PBPawn.StopAnimMontage // (Native|Public|BlueprintCallable) // @ game+0x11ab9f0
	void ServerMoveOld(float OldTimeStamp, struct FVector_NetQuantize10 OldAccel, char OldMoveFlags); // Function ProjectBoundary.PBPawn.ServerMoveOld // (Net|Native|Event|Public|NetServer|NetValidate) // @ game+0x11ab5a0
	void ServerMoveDual(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint16_t ClientRoll0, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, uint16_t ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function ProjectBoundary.PBPawn.ServerMoveDual // (Net|Native|Event|Public|NetServer|NetValidate) // @ game+0x11ab0b0
	void ServerMove(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, uint16_t ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function ProjectBoundary.PBPawn.ServerMove // (Net|Native|Event|Public|NetServer|NetValidate) // @ game+0x11aad60
	float PlayAnimMontage(struct UAnimMontage* AnimMontage, float InPlayRate, struct FName StartSectionName); // Function ProjectBoundary.PBPawn.PlayAnimMontage // (Native|Public|BlueprintCallable) // @ game+0x11aaae0
	struct UAnimMontage* GetCurrentMontage(); // Function ProjectBoundary.PBPawn.GetCurrentMontage // (Final|Native|Public|BlueprintCallable) // @ game+0x11aa870
	struct FVector GetBaseTranslationOffset(); // Function ProjectBoundary.PBPawn.GetBaseTranslationOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11aa7d0
	void CacheInitialMeshOffset(struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation); // Function ProjectBoundary.PBPawn.CacheInitialMeshOffset // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11a9fa0
};

// Class ProjectBoundary.PBPawnMovement
// Size: 0x240 (Inherited: 0x138)
struct UPBPawnMovement : UPawnMovementComponent {
	char pad_138[0x8]; // 0x138(0x08)
	struct APBPawn* PBPawnOwner; // 0x140(0x08)
	enum class EPBMovementMode MovementMode; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float MaxFlySpeed; // 0x14c(0x04)
	float MaxAcceleration; // 0x150(0x04)
	float BrakingFrictionFactor; // 0x154(0x04)
	float BrakingFriction; // 0x158(0x04)
	char bUseSeparateBrakingFriction : 1; // 0x15c(0x01)
	char pad_15C_1 : 7; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	float BrakingDecelerationFlying; // 0x160(0x04)
	struct FRotator RotationRate; // 0x164(0x0c)
	char bUseControllerDesiredRotation : 1; // 0x170(0x01)
	char bOrientRotationToMovement : 1; // 0x170(0x01)
	char bEnableScopedMovementUpdates : 1; // 0x170(0x01)
	char bRunPhysicsWithNoController : 1; // 0x170(0x01)
	char pad_170_4 : 4; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	float Mass; // 0x174(0x04)
	bool bEnablePhysicsInteraction; // 0x178(0x01)
	bool bPushForceScaledToMass; // 0x179(0x01)
	bool bScalePushForceToVelocity; // 0x17a(0x01)
	char pad_17B[0x1]; // 0x17b(0x01)
	float InitialPushForceFactor; // 0x17c(0x04)
	float PushForceFactor; // 0x180(0x04)
	struct FVector Acceleration; // 0x184(0x0c)
	struct FVector LastUpdateLocation; // 0x190(0x0c)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FQuat LastUpdateRotation; // 0x1a0(0x10)
	struct FVector LastUpdateVelocity; // 0x1b0(0x0c)
	float ServerLastTransformUpdateTimeStamp; // 0x1bc(0x04)
	struct FVector PendingImpulseToApply; // 0x1c0(0x0c)
	struct FVector PendingForceToApply; // 0x1cc(0x0c)
	float AnalogInputModifier; // 0x1d8(0x04)
	int32_t MaxSimulationIterations; // 0x1dc(0x04)
	float MaxDepenetrationWithGeometry; // 0x1e0(0x04)
	float MaxDepenetrationWithGeometryAsProxy; // 0x1e4(0x04)
	float MaxDepenetrationWithPawn; // 0x1e8(0x04)
	float MaxDepenetrationWithPawnAsProxy; // 0x1ec(0x04)
	float NetworkSimulatedSmoothLocationTime; // 0x1f0(0x04)
	float NetworkSimulatedSmoothRotationTime; // 0x1f4(0x04)
	float ListenServerNetworkSimulatedSmoothLocationTime; // 0x1f8(0x04)
	float ListenServerNetworkSimulatedSmoothRotationTime; // 0x1fc(0x04)
	float NetworkMaxSmoothUpdateDistance; // 0x200(0x04)
	float NetworkNoSmoothUpdateDistance; // 0x204(0x04)
	enum class EPBMovementMode DefaultMovementMode; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	char bJustTeleported : 1; // 0x20c(0x01)
	char bNetworkUpdateReceived : 1; // 0x20c(0x01)
	char bNetworkMovementModeChanged : 1; // 0x20c(0x01)
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x20c(0x01)
	char bRequestedMoveUseAcceleration : 1; // 0x20c(0x01)
	char bHasRequestedVelocity : 1; // 0x20c(0x01)
	char bRequestedMoveWithMaxSpeed : 1; // 0x20c(0x01)
	char pad_20D[0x3]; // 0x20d(0x03)
	struct FVector RequestedVelocity; // 0x210(0x0c)
	char pad_21C[0x14]; // 0x21c(0x14)
	float MinTimeBetweenTimeStampResets; // 0x230(0x04)
	char pad_234[0xc]; // 0x234(0x0c)

	void SetMovementMode(enum class EPBMovementMode NewMovementMode); // Function ProjectBoundary.PBPawnMovement.SetMovementMode // (Native|Public|BlueprintCallable) // @ game+0x11ab970
	struct APBPawn* GetPBPawnOwner(); // Function ProjectBoundary.PBPawnMovement.GetPBPawnOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11aa9a0
	float GetMinAnalogSpeed(); // Function ProjectBoundary.PBPawnMovement.GetMinAnalogSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11aa940
	float GetMaxBrakingDeceleration(); // Function ProjectBoundary.PBPawnMovement.GetMaxBrakingDeceleration // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11aa900
	float GetMaxAcceleration(); // Function ProjectBoundary.PBPawnMovement.GetMaxAcceleration // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11aa8c0
	struct FVector GetCurrentAcceleration(); // Function ProjectBoundary.PBPawnMovement.GetCurrentAcceleration // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11aa830
	void DisableMovement(); // Function ProjectBoundary.PBPawnMovement.DisableMovement // (Native|Public|BlueprintCallable) // @ game+0x11aa790
	void ClientVeryShortAdjustPosition(float Timestamp, struct FVector NewLoc, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function ProjectBoundary.PBPawnMovement.ClientVeryShortAdjustPosition // (Net|Native|Event|Public|HasDefaults|NetClient) // @ game+0x11aa550
	void ClientAdjustPosition(float Timestamp, struct FVector NewLoc, struct FVector NewVel, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function ProjectBoundary.PBPawnMovement.ClientAdjustPosition // (Net|Native|Event|Public|HasDefaults|NetClient) // @ game+0x11aa2b0
	void ClientAckGoodMove(float Timestamp); // Function ProjectBoundary.PBPawnMovement.ClientAckGoodMove // (Net|Native|Event|Public|NetClient) // @ game+0x11aa220
	void ClearAccumulatedForces(); // Function ProjectBoundary.PBPawnMovement.ClearAccumulatedForces // (Native|Public|BlueprintCallable) // @ game+0x11aa200
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration); // Function ProjectBoundary.PBPawnMovement.CalcVelocity // (Native|Public|BlueprintCallable) // @ game+0x11aa090
	void AddImpulse(struct FVector Impulse, bool bVelocityChange); // Function ProjectBoundary.PBPawnMovement.AddImpulse // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11a9da0
	void AddForce(struct FVector Force); // Function ProjectBoundary.PBPawnMovement.AddForce // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11a9d10
};

// Class ProjectBoundary.PBPellet
// Size: 0xa18 (Inherited: 0x220)
struct APBPellet : AActor {
	struct UParticleSystemComponent* ParticleComp; // 0x220(0x08)
	struct UDetonatorComponent* DetonatorComponent; // 0x228(0x08)
	struct UPBDynamicMarkableComponent* MarkableComponent; // 0x230(0x08)
	struct APBRayProjectile* OwnerRayProjectile; // 0x238(0x08)
	struct FPBRayProjectileConfigRow_Replace DataConfig; // 0x240(0x6a8)
	char pad_8E8[0x20]; // 0x8e8(0x20)
	struct UParticleSystemComponent* SmokeLine; // 0x908(0x08)
	char pad_910[0x90]; // 0x910(0x90)
	struct APBImpactEffect* EffectActor; // 0x9a0(0x08)
	bool bSpawnedImpactEffect; // 0x9a8(0x01)
	char pad_9A9[0x7]; // 0x9a9(0x07)
	struct TArray<struct FPBExplodedDamageSettlement> ExplodedDamageSettlementArray_Async; // 0x9b0(0x10)
	struct TArray<struct FPBHitDamageSettlement> HitDamageSettlementArray_Async; // 0x9c0(0x10)
	char pad_9D0[0x20]; // 0x9d0(0x20)
	struct AActor* LastHitActor_Async; // 0x9f0(0x08)
	char pad_9F8[0x8]; // 0x9f8(0x08)
	struct TArray<struct FName> ValidHitActorTags; // 0xa00(0x10)
	char pad_A10[0x8]; // 0xa10(0x08)
};

// Class ProjectBoundary.PBPelletManager
// Size: 0x70 (Inherited: 0x30)
struct UPBPelletManager : UWorldSubsystem {
	struct TArray<struct APBPellet*> PelletsPool; // 0x30(0x10)
	char pad_40[0x20]; // 0x40(0x20)
	struct FPBPelletObjectPoolSettings PelletObjectPoolSettings; // 0x60(0x10)
};

// Class ProjectBoundary.PBPersistentUser
// Size: 0x498 (Inherited: 0x28)
struct UPBPersistentUser : USaveGame {
	int32_t PlayerEXP; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TMap<struct FString, int32_t> MedalCountsMap; // 0x30(0x50)
	char pad_80[0x18]; // 0x80(0x18)
	struct FVector2D SavedMotionSensitivity; // 0x98(0x08)
	int32_t Kills; // 0xa0(0x04)
	int32_t Deaths; // 0xa4(0x04)
	int32_t Wins; // 0xa8(0x04)
	int32_t Losses; // 0xac(0x04)
	int32_t Draws; // 0xb0(0x04)
	int32_t BulletsFired; // 0xb4(0x04)
	int32_t RocketsFired; // 0xb8(0x04)
	int32_t BotsCount; // 0xbc(0x04)
	int32_t OverridedTeamNum; // 0xc0(0x04)
	int32_t RoundTime; // 0xc4(0x04)
	bool bIsRecordingDemos; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	int32_t MotionBlurQuality; // 0xcc(0x04)
	char ColorBlindMode; // 0xd0(0x01)
	bool HasOverridedTeamNum; // 0xd1(0x01)
	bool IsServer; // 0xd2(0x01)
	bool bVibrationOpt; // 0xd3(0x01)
	int32_t TotalPlayGameDays; // 0xd4(0x04)
	int32_t TotalPlayGameHours; // 0xd8(0x04)
	int32_t TotalPlayGameMinutes; // 0xdc(0x04)
	int32_t Assists; // 0xe0(0x04)
	int32_t PlayGameCount; // 0xe4(0x04)
	int32_t HeadshotCount; // 0xe8(0x04)
	int32_t StatFireCount; // 0xec(0x04)
	int32_t StatHitCount; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FBestGameInfo MyBestGameInfo; // 0xf8(0x48)
	struct TArray<struct FString> CloseAlphaGameInfoArray; // 0x140(0x10)
	struct TArray<struct FString> Achieventments; // 0x150(0x10)
	struct TArray<struct FString> PSNCompleteAchieventments; // 0x160(0x10)
	struct TArray<struct FCombatInfoStat> CombatInfoArray; // 0x170(0x10)
	struct TMap<struct APBWeapon*, int64_t> WeaponProjectileSequence; // 0x180(0x50)
	char pad_1D0[0x20]; // 0x1d0(0x20)
	struct FString CurVersion; // 0x1f0(0x10)
	struct FString SaveVersion; // 0x200(0x10)
	char pad_210[0x8]; // 0x210(0x08)
	struct FString DailyChallengeSaveDataMapString; // 0x218(0x10)
	struct TMap<struct FName, struct FPBInputSecondMappingDataTableRowBase> KeyBindings_Keyboard; // 0x228(0x50)
	struct TMap<struct FName, struct FPBInputSecondMappingDataTableRowBase> KeyBindings_PS4; // 0x278(0x50)
	struct TMap<struct FName, struct FPBInputSecondMappingDataTableRowBase> KeyBindings_XBOX; // 0x2c8(0x50)
	struct FString LocalCreditID; // 0x318(0x10)
	bool NeedAntiIndulge; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct TMap<struct FName, bool> SavedBoolOptions; // 0x330(0x50)
	struct TMap<struct FName, int32_t> SavedIntOptions; // 0x380(0x50)
	struct TMap<struct FName, float> SavedFloatOptions; // 0x3d0(0x50)
	struct TMap<struct FName, char> SavedEnumOptions; // 0x420(0x50)
	bool bIsFirstEnterGame; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct FPBArmorySaved ArmorySaved; // 0x478(0x20)

	void SetMotionBlurQuality(int32_t InMotionBlurQuality); // Function ProjectBoundary.PBPersistentUser.SetMotionBlurQuality // (Final|Native|Public|BlueprintCallable) // @ game+0x11ab8e0
	void SetDirty(); // Function ProjectBoundary.PBPersistentUser.SetDirty // (Final|Native|Public|BlueprintCallable) // @ game+0x11ab8c0
	void SetColorBlindMode(enum class EColorVisionDeficiency InType); // Function ProjectBoundary.PBPersistentUser.SetColorBlindMode // (Final|Native|Public|BlueprintCallable) // @ game+0x11ab840
	void SetAchievement(struct FString ACH); // Function ProjectBoundary.PBPersistentUser.SetAchievement // (Final|Native|Public|BlueprintCallable) // @ game+0x11ab710
	void SaveIfDirty(); // Function ProjectBoundary.PBPersistentUser.SaveIfDirty // (Final|Native|Public|BlueprintCallable) // @ game+0x11aad40
	void SaveFirstTimeEnterData(); // Function ProjectBoundary.PBPersistentUser.SaveFirstTimeEnterData // (Final|Native|Public|BlueprintCallable) // @ game+0x11aad20
	bool SaveCreditIDAndNeedToAvoidIndulgeLocally(struct FString ID); // Function ProjectBoundary.PBPersistentUser.SaveCreditIDAndNeedToAvoidIndulgeLocally // (Final|Native|Public|BlueprintCallable) // @ game+0x11aac20
	bool HasAchievement(struct FString ACH); // Function ProjectBoundary.PBPersistentUser.HasAchievement // (Final|Native|Public|BlueprintCallable) // @ game+0x11aa9e0
	int32_t GetWins(); // Function ProjectBoundary.PBPersistentUser.GetWins // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xec6e80
	int32_t GetMotionBlurQuality(); // Function ProjectBoundary.PBPersistentUser.GetMotionBlurQuality // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11aa980
	int32_t GetKills(); // Function ProjectBoundary.PBPersistentUser.GetKills // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11aa8a0
	enum class EColorVisionDeficiency GetColorBlindMode(); // Function ProjectBoundary.PBPersistentUser.GetColorBlindMode // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11aa800
};

// Class ProjectBoundary.PBPersonalDataWidget
// Size: 0x3c8 (Inherited: 0x268)
struct UPBPersonalDataWidget : UPBUserWidget {
	struct FPBPersonalData_UI PersonalDataUI; // 0x268(0x160)

	void K2_SetPlayerGameData(); // Function ProjectBoundary.PBPersonalDataWidget.K2_SetPlayerGameData // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBPickup
// Size: 0x260 (Inherited: 0x220)
struct APBPickup : AActor {
	struct UParticleSystemComponent* PickupPSC; // 0x220(0x08)
	struct UParticleSystem* ActiveFX; // 0x228(0x08)
	struct UParticleSystem* RespawningFX; // 0x230(0x08)
	struct USoundCue* PickupSound; // 0x238(0x08)
	struct USoundCue* RespawnSound; // 0x240(0x08)
	float RespawnTime; // 0x248(0x04)
	char bIsActive : 1; // 0x24c(0x01)
	char pad_24C_1 : 7; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct APBCharacter* PickedUpBy; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)

	void OnRespawnEvent(); // Function ProjectBoundary.PBPickup.OnRespawnEvent // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void OnRep_IsActive(); // Function ProjectBoundary.PBPickup.OnRep_IsActive // (Final|Native|Protected) // @ game+0x11b29c0
	void OnPickupCollisionOverlap(struct UPrimitiveComponent* Comp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ProjectBoundary.PBPickup.OnPickupCollisionOverlap // (Native|Protected|HasOutParms) // @ game+0x11b27c0
	void OnPickedUpEvent(); // Function ProjectBoundary.PBPickup.OnPickedUpEvent // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBPickup_Ammo
// Size: 0x270 (Inherited: 0x260)
struct APBPickup_Ammo : APBPickup {
	int32_t AmmoClips; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct APBWeapon* WeaponType; // 0x268(0x08)
};

// Class ProjectBoundary.PBPickup_Health
// Size: 0x268 (Inherited: 0x260)
struct APBPickup_Health : APBPickup {
	int32_t Health; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
};

// Class ProjectBoundary.PBPickup_Projectile
// Size: 0x268 (Inherited: 0x260)
struct APBPickup_Projectile : APBPickup {
	int32_t ProjectileCount; // 0x260(0x04)
	enum class EProjectileType ProjectileType; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
};

// Class ProjectBoundary.PBPickup_Weapon
// Size: 0x330 (Inherited: 0x260)
struct APBPickup_Weapon : APBPickup {
	struct UStaticMeshComponent* PickupStaticMesh; // 0x260(0x08)
	struct UWidgetComponent* PickupWidget; // 0x268(0x08)
	struct APBWeapon* WeaponType; // 0x270(0x08)
	char pad_278[0x40]; // 0x278(0x40)
	char bCanPickupAmmo : 1; // 0x2b8(0x01)
	char pad_2B8_1 : 7; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	int32_t AmmoClips; // 0x2bc(0x04)
	float GrabDistance; // 0x2c0(0x04)
	float HighLightDistance; // 0x2c4(0x04)
	struct APBWeapon* CurrentWeapon; // 0x2c8(0x08)
	uint64_t PackedSlotPartData; // 0x2d0(0x08)
	struct FPBWeaponPartNetworkConfig PartNetworkConfig; // 0x2d8(0x58)

	void ScanActor(); // Function ProjectBoundary.PBPickup_Weapon.ScanActor // (Final|Native|Public) // @ game+0x11b3150
	void NotifyOnRepMesh(); // Function ProjectBoundary.PBPickup_Weapon.NotifyOnRepMesh // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnRepDisplayName(); // Function ProjectBoundary.PBPickup_Weapon.NotifyOnRepDisplayName // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEnableHighLight(); // Function ProjectBoundary.PBPickup_Weapon.NotifyEnableHighLight // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyDisableHighLight(); // Function ProjectBoundary.PBPickup_Weapon.NotifyDisableHighLight // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void MultiSetPathAndTypeAndDisplayName(struct FString InPath, struct APBWeapon* InWeaponType, struct FText InDisplayName); // Function ProjectBoundary.PBPickup_Weapon.MultiSetPathAndTypeAndDisplayName // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x11b2510
	struct APBWeapon* GetWeaponType(); // Function ProjectBoundary.PBPickup_Weapon.GetWeaponType // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2470
	struct UStaticMeshComponent* GetPickupMesh(); // Function ProjectBoundary.PBPickup_Weapon.GetPickupMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b23e0
	struct FText GetPickupDisplayName(); // Function ProjectBoundary.PBPickup_Weapon.GetPickupDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x11b2330
};

// Class ProjectBoundary.PBPlayerCameraManager
// Size: 0x27d0 (Inherited: 0x27b0)
struct APBPlayerCameraManager : APlayerCameraManager {
	struct FVector CameraModifiers_CacheRelativeLocation; // 0x27b0(0x0c)
	struct FRotator CameraModifiers_CacheRelativateRotation; // 0x27bc(0x0c)
	struct APBPlayerController* PBPCOwner; // 0x27c8(0x08)
};

// Class ProjectBoundary.PBPlayerController_Menu
// Size: 0x570 (Inherited: 0x570)
struct APBPlayerController_Menu : APlayerController {
};

// Class ProjectBoundary.PBPlayerInfoWidget
// Size: 0x350 (Inherited: 0x268)
struct UPBPlayerInfoWidget : UPBUserWidget {
	int32_t PlayerInfoIndex; // 0x268(0x04)
	enum class EPBTeamSelectType TeamCamp; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct APBPlayerState* CurrentPlayerState; // 0x270(0x08)
	struct FPBPlayerInfo_UI PlayerStateUI; // 0x278(0xd0)
	char pad_348[0x8]; // 0x348(0x08)

	void SetSelectPlayer(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBPlayerInfoWidget.SetSelectPlayer // (Final|Native|Protected) // @ game+0x11b9b40
	void SelectPlayer(); // Function ProjectBoundary.PBPlayerInfoWidget.SelectPlayer // (Final|Native|Protected|BlueprintCallable) // @ game+0x11b98e0
	void RefreshPlayerSpeaking(); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshPlayerSpeaking // (Final|Native|Protected) // @ game+0x11b9830
	void RefreshPlayerScore(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshPlayerScore // (Final|Native|Protected) // @ game+0x11b97a0
	void RefreshPlayerRole(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshPlayerRole // (Final|Native|Protected) // @ game+0x11b9710
	void RefreshPlayerPing(); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshPlayerPing // (Final|Native|Protected) // @ game+0x11b96f0
	void RefreshPlayerMute(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshPlayerMute // (Final|Native|Protected) // @ game+0x11b9660
	void RefreshPlayerKill(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshPlayerKill // (Final|Native|Protected) // @ game+0x11b95b0
	void RefreshPlayerIsDying(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshPlayerIsDying // (Final|Native|Protected) // @ game+0x11b9520
	void RefreshPlayerIsBlocking(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshPlayerIsBlocking // (Final|Native|Protected) // @ game+0x11b9490
	void RefreshPlayerInfo(struct APBPlayerState* InPlayerState, int32_t InPlayerInfoIndex, enum class EPBTeamSelectType InTeamCamp); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshPlayerInfo // (Final|Native|Protected) // @ game+0x11b9380
	void RefreshPlayerDeath(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshPlayerDeath // (Final|Native|Protected) // @ game+0x11b92f0
	void RefreshPlayerAssist(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshPlayerAssist // (Final|Native|Protected) // @ game+0x11b9260
	void RefreshAllPlayerMute(); // Function ProjectBoundary.PBPlayerInfoWidget.RefreshAllPlayerMute // (Final|Native|Protected) // @ game+0x11b9240
	void K2_SetSelectPlayer(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetSelectPlayer // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetScoreText(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetScoreText // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetRoleImage(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetRoleImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetPingText(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetPingText // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetNullPlayerInfo(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetNullPlayerInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetNotNullPlayerInfo(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetNotNullPlayerInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetLocalMuteImage(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetLocalMuteImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetKillText(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetKillText // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetIsSpeakingImage(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetIsSpeakingImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetIsDyingImage(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetIsDyingImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetDeathText(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetDeathText // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetBlockingPlayerImage(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetBlockingPlayerImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetAssistText(); // Function ProjectBoundary.PBPlayerInfoWidget.K2_SetAssistText // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBPlayerListWidget
// Size: 0x280 (Inherited: 0x268)
struct UPBPlayerListWidget : UPBUserWidget {
	int32_t MaxPlayerNum; // 0x268(0x04)
	enum class EPBSortMethodType SortMethod; // 0x26c(0x01)
	enum class EPBPlayerlistSortBy SortFactor; // 0x26d(0x01)
	enum class EPBTeamSelectType TeamID; // 0x26e(0x01)
	char pad_26F[0x1]; // 0x26f(0x01)
	struct FPBPlayerList_UI PlayerListUI; // 0x270(0x10)

	void SortPlayerList(struct TArray<struct APBPlayerState*> InPlayerArray); // Function ProjectBoundary.PBPlayerListWidget.SortPlayerList // (Final|Native|Protected) // @ game+0x11b9ce0
	void RefreshPlayerList(); // Function ProjectBoundary.PBPlayerListWidget.RefreshPlayerList // (Final|Native|Protected) // @ game+0x11b9640
};

// Class ProjectBoundary.PBPlayerState
// Size: 0x8b8 (Inherited: 0x320)
struct APBPlayerState : APlayerState {
	struct TArray<struct FString> FirstName; // 0x320(0x10)
	struct TArray<struct FString> LastName; // 0x330(0x10)
	char Level; // 0x340(0x01)
	char bHasComfirmClass : 1; // 0x341(0x01)
	char pad_341_1 : 7; // 0x341(0x01)
	char pad_342[0x56]; // 0x342(0x56)
	struct TMap<struct FName, int64_t> RoleScoreMap; // 0x398(0x50)
	char pad_3E8[0x20]; // 0x3e8(0x20)
	struct TMap<struct APBPlayerState*, float> AssistKillMap; // 0x408(0x50)
	struct TMap<struct APBPlayerState*, struct FHitTag> AttackerMap; // 0x458(0x50)
	struct APBPlayerState* TheFirstToMarkMyself; // 0x4a8(0x08)
	int32_t TeamID; // 0x4b0(0x04)
	int32_t NumKills; // 0x4b4(0x04)
	int32_t NumAssist; // 0x4b8(0x04)
	int32_t NumDeaths; // 0x4bc(0x04)
	int32_t NumBulletsFired; // 0x4c0(0x04)
	int32_t NumRocketsFired; // 0x4c4(0x04)
	char bQuitter : 1; // 0x4c8(0x01)
	char bIsDying : 1; // 0x4c8(0x01)
	char bIsHitDown : 1; // 0x4c8(0x01)
	char bBeingRescued : 1; // 0x4c8(0x01)
	char bMarked : 1; // 0x4c8(0x01)
	char bHasBeenRecognized : 1; // 0x4c8(0x01)
	char pad_4C8_6 : 2; // 0x4c8(0x01)
	char pad_4C9[0xf]; // 0x4c9(0x0f)
	struct APBPlayerState* LastKiller; // 0x4d8(0x08)
	struct TArray<struct APBTeamStart*> LastSpawnPointArray; // 0x4e0(0x10)
	char pad_4F0[0x28]; // 0x4f0(0x28)
	struct UTextureRenderTarget2D* BestWeaponTRT2D; // 0x518(0x08)
	struct TArray<struct FBestWeaponInfo> StatWeaponKillArray; // 0x520(0x10)
	char pad_530[0x50]; // 0x530(0x50)
	bool IsVisitor; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	struct FName RoleId; // 0x584(0x08)
	struct FName SelectRoleID; // 0x58c(0x08)
	bool bHasEverPlayAsCharacterInMatch; // 0x594(0x01)
	enum class EPBRole PBRole; // 0x595(0x01)
	char pad_596[0x1]; // 0x596(0x01)
	char PlayerIndex; // 0x597(0x01)
	int32_t PlayingGameTime; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct TMap<enum class EProjectileTypes, struct FPBProjectileArray> ProjectileMap; // 0x5a0(0x50)
	struct FPBDataStatisticsInfoJsonStruct DataStatisticsInfo; // 0x5f0(0xa0)
	struct FString DataStatisticsInfoJsonString; // 0x690(0x10)
	struct FNormalChallengeDataMap NormalChallengeDataMap; // 0x6a0(0x50)
	struct FChallengeDataMap RandChallengeDataMap; // 0x6f0(0x50)
	struct FString NormalChallengeDataJsonString; // 0x740(0x10)
	struct FString RandChallengeDataJsonString; // 0x750(0x10)
	struct TMap<char, struct FName> RealChallengeMap; // 0x760(0x50)
	struct TArray<struct FPBChallengeCount> DailyChallengeCountList; // 0x7b0(0x10)
	char pad_7C0[0x8]; // 0x7c0(0x08)
	uint64_t LogicServerUserId; // 0x7c8(0x08)
	char pad_7D0[0xe8]; // 0x7d0(0xe8)

	void UpdateChallengeString(bool bForceUpdate); // Function ProjectBoundary.PBPlayerState.UpdateChallengeString // (Final|Native|Public|BlueprintCallable) // @ game+0x11b9ea0
	void StatProjectileHit(struct APBPlayerState* InPlayerState, struct AActor* InOwner); // Function ProjectBoundary.PBPlayerState.StatProjectileHit // (Final|Native|Public) // @ game+0x11b9dd0
	void SetTeamNum(int32_t NewTeamNumber); // Function ProjectBoundary.PBPlayerState.SetTeamNum // (Final|Native|Public|BlueprintCallable) // @ game+0x11b9c50
	void SetTeamMemberState(enum class EPBTeamMemberState NewState); // Function ProjectBoundary.PBPlayerState.SetTeamMemberState // (Final|Native|Public|BlueprintCallable) // @ game+0x11b9bd0
	void SetIsWinner(bool NewGameMode); // Function ProjectBoundary.PBPlayerState.SetIsWinner // (Final|Native|Public|BlueprintCallable) // @ game+0x11b9ab0
	void ServerUnComfirmClass(); // Function ProjectBoundary.PBPlayerState.ServerUnComfirmClass // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x11b9a60
	void ServerSetTeamNum(int32_t NewTeamNumber); // Function ProjectBoundary.PBPlayerState.ServerSetTeamNum // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b99a0
	void ServerLoginComplete(); // Function ProjectBoundary.PBPlayerState.ServerLoginComplete // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11b9950
	void ServerComfirmClass(); // Function ProjectBoundary.PBPlayerState.ServerComfirmClass // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x11b9900
	void ScorePoints(int32_t Points); // Function ProjectBoundary.PBPlayerState.ScorePoints // (Native|Public|BlueprintCallable) // @ game+0x11b9850
	void OnRep_TeamNumber(); // Function ProjectBoundary.PBPlayerState.OnRep_TeamNumber // (Final|Native|Public) // @ game+0x11b9220
	void OnRep_RandChallengeDataJsonString(struct FString LastChallengeString); // Function ProjectBoundary.PBPlayerState.OnRep_RandChallengeDataJsonString // (Final|Native|Public) // @ game+0x11b9130
	void OnRep_NumKills(); // Function ProjectBoundary.PBPlayerState.OnRep_NumKills // (Final|Native|Protected) // @ game+0x11b9110
	void OnRep_NumDeaths(); // Function ProjectBoundary.PBPlayerState.OnRep_NumDeaths // (Final|Native|Protected) // @ game+0x11b90f0
	void OnRep_NumAssist(); // Function ProjectBoundary.PBPlayerState.OnRep_NumAssist // (Final|Native|Protected) // @ game+0x11b90d0
	void OnRep_NormalChallengeDataJsonString(struct FString LastChallengeString); // Function ProjectBoundary.PBPlayerState.OnRep_NormalChallengeDataJsonString // (Final|Native|Public) // @ game+0x11b8fe0
	void OnRep_MemberIconInfo(); // Function ProjectBoundary.PBPlayerState.OnRep_MemberIconInfo // (Final|Native|Private) // @ game+0x11b8fc0
	void OnRep_Dying(); // Function ProjectBoundary.PBPlayerState.OnRep_Dying // (Final|Native|Public) // @ game+0x11b8fa0
	void OnRep_DataStatisticsInfoJsonString(struct FString LastString); // Function ProjectBoundary.PBPlayerState.OnRep_DataStatisticsInfoJsonString // (Final|Native|Public) // @ game+0x11b8eb0
	void OnRep_DailyChallengeCountList(); // Function ProjectBoundary.PBPlayerState.OnRep_DailyChallengeCountList // (Final|Native|Private) // @ game+0x11b8e90
	void NotifyBPAddScore(int32_t AddScore, int32_t InKillingStreakCount, float KillDistance, enum class EPBHitZone HitZone, struct FString VictimPlayerName); // Function ProjectBoundary.PBPlayerState.NotifyBPAddScore // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	bool IsSpeaking(); // Function ProjectBoundary.PBPlayerState.IsSpeaking // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11b8e60
	bool IsQuitter(); // Function ProjectBoundary.PBPlayerState.IsQuitter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b8e30
	bool IsInVoiceChannel(); // Function ProjectBoundary.PBPlayerState.IsInVoiceChannel // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11b8e00
	bool IsAttackTeammate(struct APBPlayerState* AttackerPlayerState); // Function ProjectBoundary.PBPlayerState.IsAttackTeammate // (Final|Native|Public|BlueprintCallable) // @ game+0x11b8d60
	bool IsAttackFirst(struct APBPlayerState* AttackerPlayerState); // Function ProjectBoundary.PBPlayerState.IsAttackFirst // (Final|Native|Public|BlueprintCallable) // @ game+0x11b8cc0
	void InformAboutKill(struct APBPlayerState* KillerPlayerState, struct FPBKillResult KillResult); // Function ProjectBoundary.PBPlayerState.InformAboutKill // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b8b80
	struct FString GetUserIdstr(); // Function ProjectBoundary.PBPlayerState.GetUserIdstr // (Final|Native|Public|BlueprintCallable) // @ game+0x11b8b00
	int32_t GetTeamNum(); // Function ProjectBoundary.PBPlayerState.GetTeamNum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b8ad0
	enum class EPBTeamMemberState GetTeamMemberState(); // Function ProjectBoundary.PBPlayerState.GetTeamMemberState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b8ab0
	enum class EPBTeam GetTeamEnum(); // Function ProjectBoundary.PBPlayerState.GetTeamEnum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b8a80
	int32_t GetSPM(); // Function ProjectBoundary.PBPlayerState.GetSPM // (Final|Native|Public|BlueprintCallable) // @ game+0x11b89b0
	struct FString GetShortPlayerName(); // Function ProjectBoundary.PBPlayerState.GetShortPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b8a00
	int32_t GetSameTimeKillCount(); // Function ProjectBoundary.PBPlayerState.GetSameTimeKillCount // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11b89e0
	float GetPlayerScore(); // Function ProjectBoundary.PBPlayerState.GetPlayerScore // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b8980
	int32_t GetPlayerPingInt(); // Function ProjectBoundary.PBPlayerState.GetPlayerPingInt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b8930
	struct FText GetPlayerPing(); // Function ProjectBoundary.PBPlayerState.GetPlayerPing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b8820
	int32_t GetNumRocketsFired(); // Function ProjectBoundary.PBPlayerState.GetNumRocketsFired // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b87f0
	int32_t GetNumBulletsFired(); // Function ProjectBoundary.PBPlayerState.GetNumBulletsFired // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b87c0
	int32_t GetNoKillDeathNum(); // Function ProjectBoundary.PBPlayerState.GetNoKillDeathNum // (Final|Native|Public|BlueprintCallable) // @ game+0x11b87a0
	int32_t GetMaxKillStreakCount(); // Function ProjectBoundary.PBPlayerState.GetMaxKillStreakCount // (Final|Native|Public|BlueprintCallable) // @ game+0x11b8770
	int32_t GetMaxKillDistance(); // Function ProjectBoundary.PBPlayerState.GetMaxKillDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x11b8740
	struct APBPlayerState* GetMaxDmgPlayerState(); // Function ProjectBoundary.PBPlayerState.GetMaxDmgPlayerState // (Final|Native|Public|BlueprintCallable) // @ game+0x11b8710
	int32_t GetLastkKillNums(); // Function ProjectBoundary.PBPlayerState.GetLastkKillNums // (Final|Native|Public|BlueprintCallable) // @ game+0x11b86f0
	struct APBPlayerState* GetLastKiller(); // Function ProjectBoundary.PBPlayerState.GetLastKiller // (Final|Native|Public|BlueprintCallable) // @ game+0x1163060
	int32_t GetKills(); // Function ProjectBoundary.PBPlayerState.GetKills // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b86c0
	int32_t GetKillingStreakCount(); // Function ProjectBoundary.PBPlayerState.GetKillingStreakCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b86a0
	float GetKDRatio(); // Function ProjectBoundary.PBPlayerState.GetKDRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x11b8670
	bool GetIsHitDown(); // Function ProjectBoundary.PBPlayerState.GetIsHitDown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b8640
	bool GetIsDying(); // Function ProjectBoundary.PBPlayerState.GetIsDying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b8610
	int32_t GetHeadShotCount(); // Function ProjectBoundary.PBPlayerState.GetHeadShotCount // (Final|Native|Public|BlueprintCallable) // @ game+0x11b85e0
	enum class EPBGameResult GetGameResult(); // Function ProjectBoundary.PBPlayerState.GetGameResult // (Final|Native|Public|BlueprintCallable) // @ game+0x11b85c0
	struct APBPlayerState* GetFirstToMarkMySelf(); // Function ProjectBoundary.PBPlayerState.GetFirstToMarkMySelf // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11b85a0
	struct TMap<struct FString, int32_t> GetEXPMap(); // Function ProjectBoundary.PBPlayerState.GetEXPMap // (Final|Native|Public|BlueprintCallable) // @ game+0x11b8570
	int32_t GetDeaths(); // Function ProjectBoundary.PBPlayerState.GetDeaths // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b8540
	struct UTextureRenderTarget2D* GetBestWeaponInfo(); // Function ProjectBoundary.PBPlayerState.GetBestWeaponInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x11b8510
	struct UTexture2D* GetBestAttach(); // Function ProjectBoundary.PBPlayerState.GetBestAttach // (Final|Native|Public|BlueprintCallable) // @ game+0x11b84e0
	int32_t GetBeginningPlayerLevel(); // Function ProjectBoundary.PBPlayerState.GetBeginningPlayerLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x11b84b0
	int32_t GetAvgKillDistance(); // Function ProjectBoundary.PBPlayerState.GetAvgKillDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x11b8480
	float GetAttackTime(struct APBPlayerState* AttackerPlayerState); // Function ProjectBoundary.PBPlayerState.GetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x11b83e0
	int32_t GetAssist(); // Function ProjectBoundary.PBPlayerState.GetAssist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b83b0
	float GetAccuracy(); // Function ProjectBoundary.PBPlayerState.GetAccuracy // (Final|Native|Public|BlueprintCallable) // @ game+0x11b8380
	void CompleteRealChallenge(struct FRealChallengeData FromRealChallengeIDArray); // Function ProjectBoundary.PBPlayerState.CompleteRealChallenge // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b82e0
	void ClientSetTeamNumFailed(); // Function ProjectBoundary.PBPlayerState.ClientSetTeamNumFailed // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x11b8130
	void ClientSetTeamNum(char NewTeamNumber); // Function ProjectBoundary.PBPlayerState.ClientSetTeamNum // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x11b8080
	void ClientLoginVoice(struct FString LoginToken); // Function ProjectBoundary.PBPlayerState.ClientLoginVoice // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b7fe0
	void ClientJoinVoice(struct FString OnlineSessionId, struct FString JoinToken, int32_t TeamNum); // Function ProjectBoundary.PBPlayerState.ClientJoinVoice // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11b7ea0
	void Client_RecordRoleUsageTime(struct FString InLogicServerUserID, struct FName InRoleID, float InStartUsageTime, float InEndtUsageTime); // Function ProjectBoundary.PBPlayerState.Client_RecordRoleUsageTime // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x11b8180
	void BroadcastDeath(struct APBPlayerState* KillerPlayerState, struct UPBDamageType* DeathDamageType, struct APBPlayerState* DeadPlayerState, struct AActor* DamageCauser, enum class EPBHitZone HitZone, struct UTexture* InInstigatorTexture); // Function ProjectBoundary.PBPlayerState.BroadcastDeath // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x11b7cc0
};

// Class ProjectBoundary.PBPlayerState_Domination
// Size: 0x8b8 (Inherited: 0x8b8)
struct APBPlayerState_Domination : APBPlayerState {

	void NotifyDyingUpdate(bool NewIsDying); // Function ProjectBoundary.PBPlayerState_Domination.NotifyDyingUpdate // (Native|Public) // @ game+0x11bf000
};

// Class ProjectBoundary.PBPlayerState_Elimination
// Size: 0x8c0 (Inherited: 0x8b8)
struct APBPlayerState_Elimination : APBPlayerState {
	char pad_8B8[0x8]; // 0x8b8(0x08)

	void NotifyDyingUpdate(bool NewIsDying); // Function ProjectBoundary.PBPlayerState_Elimination.NotifyDyingUpdate // (Native|Public) // @ game+0x11bf000
	bool IsShowRoleIcon(); // Function ProjectBoundary.PBPlayerState_Elimination.IsShowRoleIcon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11bedc0
};

// Class ProjectBoundary.PBPlayerState_FFA
// Size: 0x8b8 (Inherited: 0x8b8)
struct APBPlayerState_FFA : APBPlayerState {
};

// Class ProjectBoundary.PBPlayerState_KOH
// Size: 0x8c0 (Inherited: 0x8b8)
struct APBPlayerState_KOH : APBPlayerState {
	int32_t ZoneStayTimeCount; // 0x8b8(0x04)
	char pad_8BC[0x4]; // 0x8bc(0x04)

	void PawnPendingDestroy(); // Function ProjectBoundary.PBPlayerState_KOH.PawnPendingDestroy // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x11bf550
	void InformKOH(struct FPBKOHResult KillResult); // Function ProjectBoundary.PBPlayerState_KOH.InformKOH // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x11bed30
};

// Class ProjectBoundary.PBPlayerState_Skirmish
// Size: 0x8c0 (Inherited: 0x8c0)
struct APBPlayerState_Skirmish : APBPlayerState_Elimination {
};

// Class ProjectBoundary.PBPodSkin_Base
// Size: 0x30 (Inherited: 0x30)
struct UPBPodSkin_Base : UPBEquipmentSkinBase {
};

// Class ProjectBoundary.PBPodSkin_Material
// Size: 0x88 (Inherited: 0x30)
struct UPBPodSkin_Material : UPBPodSkin_Base {
	struct UPBPodSkin_Mesh* PodMesh; // 0x30(0x08)
	struct TMap<struct FName, struct FPBSkinMaterialDetailV1> SlotAndMaterialInfoMap; // 0x38(0x50)
};

// Class ProjectBoundary.PBPodSkin_Mesh
// Size: 0x38 (Inherited: 0x30)
struct UPBPodSkin_Mesh : UPBPodSkin_Base {
	struct UStaticMesh* StaticMesh; // 0x30(0x08)
};

// Class ProjectBoundary.PBProcPlane
// Size: 0x358 (Inherited: 0x220)
struct APBProcPlane : AActor {
	struct UStaticMesh* MeshForCopy; // 0x220(0x08)
	struct UParticleSystem* FractureFX; // 0x228(0x08)
	struct UProceduralMeshComponent* ProcMesh; // 0x230(0x08)
	float MaxHealth; // 0x238(0x04)
	bool NoVertexColorMode; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct TMap<struct FColor, float> ColorHealth; // 0x240(0x50)
	struct TMap<int32_t, float> HitedFaceAndHealthArray; // 0x290(0x50)
	struct TMap<int32_t, struct FVertexColorFaceMap> PreMap; // 0x2e0(0x50)
	struct TArray<struct FColor> RemovedColorArray; // 0x330(0x10)
	struct TArray<int32_t> RemovedFaceIndexArray; // 0x340(0x10)
	char pad_350[0x8]; // 0x350(0x08)

	void PBSpawanEmitterAtLocation_VertexColorMulticast(struct FColor InVertexColor); // Function ProjectBoundary.PBProcPlane.PBSpawanEmitterAtLocation_VertexColorMulticast // (Net|Native|Event|NetMulticast|Protected|HasDefaults) // @ game+0x11bf4d0
	void PBSpawanEmitterAtLocation_NoVertexColorMulticast(int32_t InFaceIndex, int32_t InSectionIndex); // Function ProjectBoundary.PBProcPlane.PBSpawanEmitterAtLocation_NoVertexColorMulticast // (Net|Native|Event|NetMulticast|Protected) // @ game+0x11bf400
	void OnRep_RemovedFaceIndexArray(struct TArray<int32_t> PreReplicatedFaceIDArray); // Function ProjectBoundary.PBProcPlane.OnRep_RemovedFaceIndexArray // (Final|Native|Protected|HasOutParms) // @ game+0x11bf350
	void OnRep_RemovedColorArray(struct TArray<struct FColor> PreReplicatedArray); // Function ProjectBoundary.PBProcPlane.OnRep_RemovedColorArray // (Final|Native|Protected|HasOutParms) // @ game+0x11bf2a0
	void K2_NotifyOnDestroy(struct FTransform Transform); // Function ProjectBoundary.PBProcPlane.K2_NotifyOnDestroy // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBProps
// Size: 0x238 (Inherited: 0x220)
struct APBProps : AActor {
	struct UStaticMeshComponent* PropsMesh; // 0x220(0x08)
	struct TArray<struct USceneComponent*> ChildComponentArray; // 0x228(0x10)

	void OnRep_ChildComponentArray(); // Function ProjectBoundary.PBProps.OnRep_ChildComponentArray // (Final|Native|Protected) // @ game+0x11bf260
	void MultiDestroyComponent(struct USceneComponent* InComponent); // Function ProjectBoundary.PBProps.MultiDestroyComponent // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x11beec0
};

// Class ProjectBoundary.PBProximityFuseGrenade
// Size: 0x6f0 (Inherited: 0x680)
struct APBProximityFuseGrenade : APBProjectile {
	struct UStaticMeshComponent* PFGMesh; // 0x680(0x08)
	struct UDetonatorComponent* Detonator; // 0x688(0x08)
	char pad_690[0x28]; // 0x690(0x28)
	struct FPBProximityFuseGrenadeData PFGConfig; // 0x6b8(0x30)
	char bGetDataFromXML : 1; // 0x6e8(0x01)
	char pad_6E8_1 : 7; // 0x6e8(0x01)
	char pad_6E9[0x7]; // 0x6e9(0x07)

	void ExplodeAndDestroy(); // Function ProjectBoundary.PBProximityFuseGrenade.ExplodeAndDestroy // (Final|Native|Protected|BlueprintCallable) // @ game+0x11bec00
};

// Class ProjectBoundary.PBRadar
// Size: 0x3c0 (Inherited: 0x258)
struct APBRadar : APBAttachables {
	struct UStaticMeshComponent* Mesh; // 0x258(0x08)
	struct TArray<struct UPBHeatComponent*> RadarScanThreatResult; // 0x260(0x10)
	struct TArray<struct UPBHeatComponent*> PendingAdd; // 0x270(0x10)
	struct TArray<struct UPBHeatComponent*> PendingRemove; // 0x280(0x10)
	struct TMap<struct UPhysicalMaterial*, float> TraceThickness; // 0x290(0x50)
	struct TMap<enum class EPBHeatComponentType, struct FPBHeatThreshold> Threshold; // 0x2e0(0x50)
	struct UCurveFloat* HeatDistanceDecayCurve; // 0x330(0x08)
	struct TArray<struct UPBHeatComponent*> PendingScanWeaponThreats; // 0x338(0x10)
	struct TMap<struct UPBHeatComponent*, struct UAudioComponent*> ThreatSoundMap; // 0x348(0x50)
	char pad_398[0x8]; // 0x398(0x08)
	struct TArray<struct UPBHeatComponent*> PendingScanWeaponThreats_Async; // 0x3a0(0x10)
	struct TArray<struct UPBHeatComponent*> MobilityHeatComponentArray_Async; // 0x3b0(0x10)

	void DetectWeaponFire(struct APBWeapon* Source); // Function ProjectBoundary.PBRadar.DetectWeaponFire // (Final|Native|Protected) // @ game+0x11c2d70
};

// Class ProjectBoundary.PBRadioButtonOptionInterface
// Size: 0x28 (Inherited: 0x28)
struct UPBRadioButtonOptionInterface : UInterface {

	void UnselectOption(); // Function ProjectBoundary.PBRadioButtonOptionInterface.UnselectOption // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1164e30
	void SetRadioButtonPanel(struct UPBRadioButtonPanelWidget* InRadioButtonPanelWidget); // Function ProjectBoundary.PBRadioButtonOptionInterface.SetRadioButtonPanel // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x11c3860
	void SelectOption(); // Function ProjectBoundary.PBRadioButtonOptionInterface.SelectOption // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x11c35b0
	void Reset(); // Function ProjectBoundary.PBRadioButtonOptionInterface.Reset // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1164ef0
};

// Class ProjectBoundary.PBRadioButtonPanelWidget
// Size: 0x160 (Inherited: 0x130)
struct UPBRadioButtonPanelWidget : UCanvasPanel {
	char pad_130[0x8]; // 0x130(0x08)
	struct TArray<struct UWidget*> OptionWidgetArr; // 0x138(0x10)
	struct UWidget* SelectedOptionWidget; // 0x148(0x08)
	bool bIsControlledByParent; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct UPBRadioButtonPanelWidget* ParentRadioButtonPanel; // 0x158(0x08)

	bool Select(struct UWidget* CurrentButton); // Function ProjectBoundary.PBRadioButtonPanelWidget.Select // (Final|Native|Public|BlueprintCallable) // @ game+0x11c3510
	void ResetWidget(); // Function ProjectBoundary.PBRadioButtonPanelWidget.ResetWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x11c34d0
	struct UWidget* GetSelectedOptionWidget(); // Function ProjectBoundary.PBRadioButtonPanelWidget.GetSelectedOptionWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x11c3090
	bool GetIsControlledByParent(); // Function ProjectBoundary.PBRadioButtonPanelWidget.GetIsControlledByParent // (Final|Native|Public|BlueprintCallable) // @ game+0x11c3040
};

// Class ProjectBoundary.PBRayProjectile
// Size: 0x9c8 (Inherited: 0x260)
struct APBRayProjectile : APBProjectileBase {
	char pad_260[0x20]; // 0x260(0x20)
	struct UAudioComponent* AudioCmp; // 0x280(0x08)
	char pad_288[0x8]; // 0x288(0x08)
	struct TMap<struct AActor*, struct FPBHitDamageSum> HitDamageSettlementSumMap_Async; // 0x290(0x50)
	struct TArray<struct FPBHitDamageData> HitDamageDataArray_Async; // 0x2e0(0x10)
	struct TArray<struct FPBExplodedDamageData> ExplodedDamageDataArray_Async; // 0x2f0(0x10)
	char pad_300[0x6a8]; // 0x300(0x6a8)
	struct APlayerState* PlayerState; // 0x9a8(0x08)
	struct TArray<struct APBPellet*> PBPelletArray; // 0x9b0(0x10)
	char pad_9C0[0x8]; // 0x9c0(0x08)
};

// Class ProjectBoundary.PBRealName
// Size: 0x2b0 (Inherited: 0x260)
struct UPBRealName : UUserWidget {
	struct UEditableText* RealNameInput; // 0x260(0x08)
	struct UEditableText* CreditIDInput; // 0x268(0x08)
	struct UButton* CreditIDOKButton; // 0x270(0x08)
	struct UTextBlock* ErrorText; // 0x278(0x08)
	char pad_280[0x30]; // 0x280(0x30)

	void K2_SwitchRealNamePanel(enum class EPBRealNameState InRealNameState); // Function ProjectBoundary.PBRealName.K2_SwitchRealNamePanel // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartRealNameCheck(); // Function ProjectBoundary.PBRealName.K2_StartRealNameCheck // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndRealNameCheck(); // Function ProjectBoundary.PBRealName.K2_EndRealNameCheck // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void CheckRealNameOnline(); // Function ProjectBoundary.PBRealName.CheckRealNameOnline // (Final|Native|Private) // @ game+0x11c2d50
};

// Class ProjectBoundary.PBRecentPlayerListWidget
// Size: 0x278 (Inherited: 0x268)
struct UPBRecentPlayerListWidget : UPBUserWidget {
	struct UPanelWidget* UserList; // 0x268(0x08)
	struct UPBSinglePlayerWidget* ItemClass; // 0x270(0x08)

	void RefreshRecentPlayerList(struct TArray<struct FPBOnlineUserInfo> InOnlineUsersInfo); // Function ProjectBoundary.PBRecentPlayerListWidget.RefreshRecentPlayerList // (Final|Native|Protected|HasOutParms) // @ game+0x11c3430
};

// Class ProjectBoundary.PBRecoilComponent
// Size: 0x130 (Inherited: 0xb0)
struct UPBRecoilComponent : UActorComponent {
	struct FRotator AngularImpulse; // 0xb0(0x0c)
	struct FRotator AngularFriction; // 0xbc(0x0c)
	struct FRotator AngularInputScaler; // 0xc8(0x0c)
	struct FVector Impulse; // 0xd4(0x0c)
	float FixedDeltaTime; // 0xe0(0x04)
	float CenteringMinTolerance; // 0xe4(0x04)
	struct APawn* OwningPawn; // 0xe8(0x08)
	struct UPBCharacterMovement* PBMovement; // 0xf0(0x08)
	struct APBWeapon* OwningWeapon; // 0xf8(0x08)
	char pad_100[0x30]; // 0x100(0x30)

	void Init(struct APawn* InOwningPawn, float InMass); // Function ProjectBoundary.PBRecoilComponent.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x11c30c0
	void AddForce(struct FRotator InDeltaAngularVelocity); // Function ProjectBoundary.PBRecoilComponent.AddForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11c2c30
};

// Class ProjectBoundary.PBReplicationGraph
// Size: 0x5c0 (Inherited: 0x4a0)
struct UPBReplicationGraph : UReplicationGraph {
	struct TArray<struct UObject*> SpatializedClasses; // 0x498(0x10)
	struct TArray<struct UObject*> NonSpatializedChildClasses; // 0x4a8(0x10)
	struct TArray<struct UObject*> AlwaysRelevantClasses; // 0x4b8(0x10)
	struct UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x4c8(0x08)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4d0(0x08)
	char pad_4E0[0xe0]; // 0x4e0(0xe0)
};

// Class ProjectBoundary.PBReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0x288 (Inherited: 0x50)
struct UPBReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode {
	char pad_50[0x228]; // 0x50(0x228)
	struct AActor* LastPawn; // 0x278(0x08)
	char pad_280[0x8]; // 0x280(0x08)
};

// Class ProjectBoundary.PBReplicationGraphNode_PlayerStateFrequencyLimiter
// Size: 0x80 (Inherited: 0x50)
struct UPBReplicationGraphNode_PlayerStateFrequencyLimiter : UReplicationGraphNode {
	char pad_50[0x30]; // 0x50(0x30)
};

// Class ProjectBoundary.PBRoleCustomizeWidget
// Size: 0x2a8 (Inherited: 0x268)
struct UPBRoleCustomizeWidget : UPBUserWidget {
	struct FName RoleId; // 0x268(0x08)
	bool bCanModifyBack; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	struct FPBRoleCustomize_UI RoleCustomizeUI; // 0x274(0x20)
	char pad_294[0x14]; // 0x294(0x14)

	void PendingModify(enum class EPBSlotType InSlotType, enum class EPBPartSlotType InPartSlotType, enum class EPBSkinClass InSkinType, enum class EPBCharacterSlotType InCharacterSlotType, enum class EPBItemGradeType InItemType, struct FName InComponentId, struct FName InComponentPartId); // Function ProjectBoundary.PBRoleCustomizeWidget.PendingModify // (Final|Native|Protected) // @ game+0x11c31f0
	void K2_SetRoleInfo(); // Function ProjectBoundary.PBRoleCustomizeWidget.K2_SetRoleInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetEnterComponent(bool bShowAnim); // Function ProjectBoundary.PBRoleCustomizeWidget.K2_SetEnterComponent // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InitComponentList(); // Function ProjectBoundary.PBRoleCustomizeWidget.K2_InitComponentList // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void EnterSightModify(); // Function ProjectBoundary.PBRoleCustomizeWidget.EnterSightModify // (Final|Native|Protected) // @ game+0x11c2e40
	void EnterModify(); // Function ProjectBoundary.PBRoleCustomizeWidget.EnterModify // (Final|Native|Protected) // @ game+0x11c2e20
	void BackModify(bool bSaveModify); // Function ProjectBoundary.PBRoleCustomizeWidget.BackModify // (Final|Native|Protected|BlueprintCallable) // @ game+0x11c2cc0
};

// Class ProjectBoundary.PBRoleSettleEXPWidget
// Size: 0x2b8 (Inherited: 0x268)
struct UPBRoleSettleEXPWidget : UPBUserWidget {
	enum class EPBRoleName CurrentRoleName; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FPBRoleSettleEXP_UI RoleSettleEXPUI; // 0x270(0x48)

	void K2_SetRoleEXP(); // Function ProjectBoundary.PBRoleSettleEXPWidget.K2_SetRoleEXP // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBRoleSkillModule
// Size: 0x880 (Inherited: 0x5a8)
struct APBRoleSkillModule : APBBaseRoleSkillModule {
	struct USkeletalMeshComponent* Launcher; // 0x5a8(0x08)
	struct USkeletalMeshComponent* ProjectileMesh; // 0x5b0(0x08)
	char pad_5B8[0x9]; // 0x5b8(0x09)
	enum class EPBRoleSkillState PendingState; // 0x5c1(0x01)
	char pad_5C2[0xe]; // 0x5c2(0x0e)
	struct FPBPawnAndTwoPropsMontageGroup Anim_DeployingAnimation; // 0x5d0(0x58)
	struct FPBPawnAndTwoPropsMontageGroup Anim_UndeployingAnimation; // 0x628(0x58)
	struct FPBPawnAndTwoPropsMontageGroup Anim_OneHandUndeploying; // 0x680(0x58)
	struct FPBPawnAndTwoPropsMontageGroup Anim_OneHandThroughtOut; // 0x6d8(0x58)
	struct FPBPawnAndTwoPropsMontageGroup Anim_Loading; // 0x730(0x58)
	struct FPBPawnAndTwoPropsMontageGroup Anim_UnLoading; // 0x788(0x58)
	struct FPBPawnAndTwoPropsMontageGroup Anim_Fire; // 0x7e0(0x58)
	struct UAnimSequenceBase* Anim_ADS_Pawn; // 0x838(0x08)
	struct UAnimSequenceBase* PendingLauncherIdlePose; // 0x840(0x08)
	struct UAnimSequenceBase* LauncherIdlePose; // 0x848(0x08)
	char pad_850[0x8]; // 0x850(0x08)
	struct FName LauncherAttachSocket; // 0x858(0x08)
	struct APBProjectile* ProjectileClass; // 0x860(0x08)
	float PreOneHandThroughtTime; // 0x868(0x04)
	float PreFireTime; // 0x86c(0x04)
	float ThrowingVelocityScaler; // 0x870(0x04)
	float FiringVelocityScaler; // 0x874(0x04)
	int32_t MaxProjectile; // 0x878(0x04)
	char bCanUnload : 1; // 0x87c(0x01)
	char bUseCharacterVelocity : 1; // 0x87c(0x01)
	char pad_87C_2 : 6; // 0x87c(0x01)
	char pad_87D[0x3]; // 0x87d(0x03)

	void ServerSpawnProjectile(struct FVector InitTargetLocation, struct FTransform InitTransform, float VelocityScaler, bool UseCharacterVelocity); // Function ProjectBoundary.PBRoleSkillModule.ServerSpawnProjectile // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x11c3680
	void ServerChangePendingState(enum class EPBRoleSkillState NewPendingState); // Function ProjectBoundary.PBRoleSkillModule.ServerChangePendingState // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11c35d0
	void OnRep_PendingState(); // Function ProjectBoundary.PBRoleSkillModule.OnRep_PendingState // (Final|Native|Protected) // @ game+0x11c31b0
	void OneHandHeld(); // Function ProjectBoundary.PBRoleSkillModule.OneHandHeld // (Final|Native|Protected) // @ game+0x11c31d0
	void Loaded(); // Function ProjectBoundary.PBRoleSkillModule.Loaded // (Final|Native|Protected) // @ game+0x11c3190
	void K2_FiringSkill(); // Function ProjectBoundary.PBRoleSkillModule.K2_FiringSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	struct UAnimSequenceBase* GetLauncherIdlePose(); // Function ProjectBoundary.PBRoleSkillModule.GetLauncherIdlePose // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11c3070
	void ForceUnDeploy(); // Function ProjectBoundary.PBRoleSkillModule.ForceUnDeploy // (Final|Native|Protected) // @ game+0x11c2e60
};

// Class ProjectBoundary.PBRoleSkillModule_Energy
// Size: 0x890 (Inherited: 0x880)
struct APBRoleSkillModule_Energy : APBRoleSkillModule {
	struct UPBEnergyComponent* EnergyComponent; // 0x880(0x08)
	float EnergyConsumePreUse; // 0x888(0x04)
	char pad_88C[0x4]; // 0x88c(0x04)
};

// Class ProjectBoundary.PBRoleSkillWidget
// Size: 0x268 (Inherited: 0x260)
struct UPBRoleSkillWidget : UUserWidget {
	struct APBBaseRoleSkillModule* OwningSkill; // 0x260(0x08)

	void K2_UseFailed(); // Function ProjectBoundary.PBRoleSkillWidget.K2_UseFailed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateDuration(float DeltaTime); // Function ProjectBoundary.PBRoleSkillWidget.K2_UpdateDuration // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCoolDownTime(float DeltaTime); // Function ProjectBoundary.PBRoleSkillWidget.K2_UpdateCoolDownTime // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Undeploying(); // Function ProjectBoundary.PBRoleSkillWidget.K2_Undeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Undeployed(); // Function ProjectBoundary.PBRoleSkillWidget.K2_Undeployed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartDeactivate(); // Function ProjectBoundary.PBRoleSkillWidget.K2_StartDeactivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartCoolDown(); // Function ProjectBoundary.PBRoleSkillWidget.K2_StartCoolDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartActivate(); // Function ProjectBoundary.PBRoleSkillWidget.K2_StartActivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_MinusUseTimes(); // Function ProjectBoundary.PBRoleSkillWidget.K2_MinusUseTimes // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Firing(); // Function ProjectBoundary.PBRoleSkillWidget.K2_Firing // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndDeactivate(); // Function ProjectBoundary.PBRoleSkillWidget.K2_EndDeactivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndCoolDown(); // Function ProjectBoundary.PBRoleSkillWidget.K2_EndCoolDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EndActivate(); // Function ProjectBoundary.PBRoleSkillWidget.K2_EndActivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deploying(); // Function ProjectBoundary.PBRoleSkillWidget.K2_Deploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deployed(); // Function ProjectBoundary.PBRoleSkillWidget.K2_Deployed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_AutoDeactivate(); // Function ProjectBoundary.PBRoleSkillWidget.K2_AutoDeactivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ActualDeactivate(); // Function ProjectBoundary.PBRoleSkillWidget.K2_ActualDeactivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ActualActivate(); // Function ProjectBoundary.PBRoleSkillWidget.K2_ActualActivate // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBRoundInfoWidget
// Size: 0x270 (Inherited: 0x268)
struct UPBRoundInfoWidget : UPBUserWidget {
	struct FPBRoundInfo_UI RoundInfoUI; // 0x268(0x08)

	void RefreshRound(); // Function ProjectBoundary.PBRoundInfoWidget.RefreshRound // (Final|Native|Protected) // @ game+0x11c99a0
	void K2_SetRound(); // Function ProjectBoundary.PBRoundInfoWidget.K2_SetRound // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBRuleBase
// Size: 0x28 (Inherited: 0x28)
struct UPBRuleBase : UObject {

	bool CheckConditions(struct AActor* InActor); // Function ProjectBoundary.PBRuleBase.CheckConditions // (Native|Event|Protected|BlueprintEvent|Const) // @ game+0x11c8fd0
	void ActiveActions(struct AActor* InActor); // Function ProjectBoundary.PBRuleBase.ActiveActions // (Native|Event|Protected|BlueprintEvent|Const) // @ game+0x11c8e20
	void ActivateRule(struct AActor* InActor); // Function ProjectBoundary.PBRuleBase.ActivateRule // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x11c8d90
};

// Class ProjectBoundary.PBRuleSetsHelperFunctions
// Size: 0x28 (Inherited: 0x28)
struct UPBRuleSetsHelperFunctions : UBlueprintFunctionLibrary {

	void TryActivateRule(struct UPBRuleBase* InRuleBase, struct AActor* InActor); // Function ProjectBoundary.PBRuleSetsHelperFunctions.TryActivateRule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11c9b70
	void SendAndCreateGamePlayEventFromTarget(struct AActor* InActor, struct AActor* InTarget, struct FGameplayTag EventTag); // Function ProjectBoundary.PBRuleSetsHelperFunctions.SendAndCreateGamePlayEventFromTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11c9a70
	bool IsInCapturableZone(struct AActor* InActor); // Function ProjectBoundary.PBRuleSetsHelperFunctions.IsInCapturableZone // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11c93d0
	float GetOccupationPoint(struct AActor* InActor); // Function ProjectBoundary.PBRuleSetsHelperFunctions.GetOccupationPoint // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11c92f0
	struct APBCapturableZone* GetCapturableZone(struct AActor* InActor); // Function ProjectBoundary.PBRuleSetsHelperFunctions.GetCapturableZone // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11c91c0
};

// Class ProjectBoundary.PBScoreboardWidgetStyle
// Size: 0x150 (Inherited: 0x30)
struct UPBScoreboardWidgetStyle : USlateWidgetStyleContainerBase {
	struct FPBScoreboardStyle ScoreboardStyle; // 0x30(0x120)
};

// Class ProjectBoundary.PBScrollBox
// Size: 0x888 (Inherited: 0x880)
struct UPBScrollBox : UScrollBox {
	enum class EPBDragScrollType DragScrollType; // 0x880(0x01)
	char pad_881[0x7]; // 0x881(0x07)
};

// Class ProjectBoundary.PBSensor
// Size: 0x6f0 (Inherited: 0x680)
struct APBSensor : APBProjectile {
	struct UPBDynamicMarkableComponent* MarkableComponent; // 0x680(0x08)
	struct UDamageType* DamageType; // 0x688(0x08)
	float HitDamage; // 0x690(0x04)
	float ScanDistance; // 0x694(0x04)
	float DelayStartScanTime; // 0x698(0x04)
	float MarkedDistance; // 0x69c(0x04)
	float LifeTime; // 0x6a0(0x04)
	char bScanSwitch : 1; // 0x6a4(0x01)
	char pad_6A4_1 : 7; // 0x6a4(0x01)
	char pad_6A5[0x3]; // 0x6a5(0x03)
	struct TArray<struct UPBDynamicMarkableComponent*> PeopleMarkedArray; // 0x6a8(0x10)
	struct TArray<struct APBPlayerState*> PassiveMarkArray; // 0x6b8(0x10)
	char pad_6C8[0x28]; // 0x6c8(0x28)

	bool ShouldBeMarked(); // Function ProjectBoundary.PBSensor.ShouldBeMarked // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11a7620
	void OnUnMarked(); // Function ProjectBoundary.PBSensor.OnUnMarked // (Final|Native|Protected) // @ game+0x9c37b0
	void OnRep_ScanSwitch(); // Function ProjectBoundary.PBSensor.OnRep_ScanSwitch // (Final|Native|Protected) // @ game+0x11c9460
	void OnMarked(); // Function ProjectBoundary.PBSensor.OnMarked // (Final|Native|Protected) // @ game+0x9c37b0
	void K2_StopScan(); // Function ProjectBoundary.PBSensor.K2_StopScan // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartScan(); // Function ProjectBoundary.PBSensor.K2_StartScan // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBShieldModule
// Size: 0x6d0 (Inherited: 0x5a8)
struct APBShieldModule : APBBaseRoleSkillModule {
	struct USceneComponent* TransformComponent; // 0x5a8(0x08)
	struct USkeletalMeshComponent* Mesh3P; // 0x5b0(0x08)
	struct USkeletalMeshComponent* Mesh1P; // 0x5b8(0x08)
	struct FPBPawnAndPropsMontageGroup Anim_DeployingAnimation; // 0x5c0(0x40)
	struct FPBPawnAndPropsMontageGroup Anim_UndeployingAnimation; // 0x600(0x40)
	struct FPBPawnAndPropsMontageGroup Anim_FirstDeployingStepOne; // 0x640(0x40)
	struct FPBPawnAndPropsMontageGroup Anim_FirstDeployingStepTwo; // 0x680(0x40)
	char bIsFirstDeploy : 1; // 0x6c0(0x01)
	char pad_6C0_1 : 7; // 0x6c0(0x01)
	char pad_6C1[0xf]; // 0x6c1(0x0f)

	void K2_OnHandsFirstDeploying(); // Function ProjectBoundary.PBShieldModule.K2_OnHandsFirstDeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_HitInfo(float DamageTaken, struct FDamageEvent DamageEvent, struct APawn* PawnInstigator, struct AActor* DamageCauser); // Function ProjectBoundary.PBShieldModule.K2_HitInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void ClientBeHit(float DamageTaken, struct FDamageEvent DamageEvent, struct APawn* PawnInstigator); // Function ProjectBoundary.PBShieldModule.ClientBeHit // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x11c9070
};

// Class ProjectBoundary.PBShortChallengeWidget
// Size: 0x278 (Inherited: 0x268)
struct UPBShortChallengeWidget : UPBUserWidget {
	struct FName CurrenShortChallengeName; // 0x268(0x08)
	bool bDefaultDisplay; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)

	void SelectShortChallenge(); // Function ProjectBoundary.PBShortChallengeWidget.SelectShortChallenge // (Final|Native|Protected|BlueprintCallable) // @ game+0x11c9a30
	void K2_SetShortChallenge(); // Function ProjectBoundary.PBShortChallengeWidget.K2_SetShortChallenge // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBShortRoleWidget
// Size: 0x288 (Inherited: 0x270)
struct UPBShortRoleWidget : UPBPageButtonWidget {
	enum class EPBRoleName CurrentRoleName; // 0x270(0x01)
	bool bDefaultDisplay; // 0x271(0x01)
	char pad_272[0x2]; // 0x272(0x02)
	struct FPBShortRole_UI ShortRoleUI; // 0x274(0x10)
	char pad_284[0x4]; // 0x284(0x04)

	void SelectShortRole(); // Function ProjectBoundary.PBShortRoleWidget.SelectShortRole // (Final|Native|Protected|BlueprintCallable) // @ game+0x11c9a50
	void K2_SetRoleInfo(); // Function ProjectBoundary.PBShortRoleWidget.K2_SetRoleInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SelectRole(); // Function ProjectBoundary.PBShortRoleWidget.K2_SelectRole // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_DisableSelectRole(); // Function ProjectBoundary.PBShortRoleWidget.K2_DisableSelectRole // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void InitDisplayActor(); // Function ProjectBoundary.PBShortRoleWidget.InitDisplayActor // (Final|Native|Protected|BlueprintCallable) // @ game+0x11c93b0
	void DisableSelectRole(); // Function ProjectBoundary.PBShortRoleWidget.DisableSelectRole // (Final|Native|Protected|BlueprintCallable) // @ game+0x11c91a0
};

// Class ProjectBoundary.PBSimpleAnimProps
// Size: 0x260 (Inherited: 0x230)
struct APBSimpleAnimProps : AStaticMeshActor {
	struct UArrowComponent* RotatingDirectionArrowComp; // 0x230(0x08)
	float AngularSpeed; // 0x238(0x04)
	float ComponentTickInterval; // 0x23c(0x04)
	char pad_240[0x20]; // 0x240(0x20)
};

// Class ProjectBoundary.PBSimplePhysicsProp
// Size: 0x270 (Inherited: 0x230)
struct APBSimplePhysicsProp : AStaticMeshActor {
	struct UArrowComponent* AngularVelocityArrowComp; // 0x230(0x08)
	struct UArrowComponent* LinearVelocityArrowComp; // 0x238(0x08)
	struct UParticleSystem* DestructionParticle; // 0x240(0x08)
	float Radius; // 0x248(0x04)
	char RandomAngularVelocity : 1; // 0x24c(0x01)
	char pad_24C_1 : 7; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	float MinAngularVelocity; // 0x250(0x04)
	float MaxAngularVelocity; // 0x254(0x04)
	char RandomLinearVelocity : 1; // 0x258(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float MinLinearVelocity; // 0x25c(0x04)
	float MaxLinearVelocity; // 0x260(0x04)
	float ComponentTickInterval; // 0x264(0x04)
	char pad_268[0x8]; // 0x268(0x08)

	void SpawnDestroyEffect(); // Function ProjectBoundary.PBSimplePhysicsProp.SpawnDestroyEffect // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x9d2f20
	void Relocating(); // Function ProjectBoundary.PBSimplePhysicsProp.Relocating // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11c99e0
};

// Class ProjectBoundary.PBSinglePlayerWidget
// Size: 0x268 (Inherited: 0x268)
struct UPBSinglePlayerWidget : UPBUserWidget {

	void RefreshAvatarImage(struct UTexture2D* InAvatarImage); // Function ProjectBoundary.PBSinglePlayerWidget.RefreshAvatarImage // (Final|Native|Protected) // @ game+0x11c9480
	void K2_RefreshTextInfo(struct FPBSinglePlayerInfo InPlayerInfo); // Function ProjectBoundary.PBSinglePlayerWidget.K2_RefreshTextInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void K2_RefreshAvatarImage(struct UTexture2D* InAvatarImage); // Function ProjectBoundary.PBSinglePlayerWidget.K2_RefreshAvatarImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBSingleRoleInfoWidget
// Size: 0x280 (Inherited: 0x268)
struct UPBSingleRoleInfoWidget : UPBUserWidget {
	struct FPBSingleRole_UI SingleRoleUI; // 0x268(0x0c)
	char pad_274[0xc]; // 0x274(0x0c)

	void RefreshSingleRoleInfo(); // Function ProjectBoundary.PBSingleRoleInfoWidget.RefreshSingleRoleInfo // (Final|Native|Protected) // @ game+0x11c99c0
	void K2_SetRoleInfo(); // Function ProjectBoundary.PBSingleRoleInfoWidget.K2_SetRoleInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBSkinManager
// Size: 0x28 (Inherited: 0x28)
struct UPBSkinManager : UObject {

	void RefreshPodSkinByConfig(struct UStaticMeshComponent* InStaticMesh, struct FPBLauncherNetworkConfig SaveData); // Function ProjectBoundary.PBSkinManager.RefreshPodSkinByConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x11c98c0
	void RefreshMeleeSkinBySkinID(struct USkeletalMeshComponent* InSkeletalMeshComp, struct FName SkinID); // Function ProjectBoundary.PBSkinManager.RefreshMeleeSkinBySkinID // (Final|Native|Public|BlueprintCallable) // @ game+0x11c97f0
	void RefreshJetpackSkinByConfig(struct UStaticMeshComponent* InStaticComponent, struct FPBVehicleNetworkConfig SaveData); // Function ProjectBoundary.PBSkinManager.RefreshJetpackSkinByConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x11c9710
	void RefreshDisplayActorSkin(struct USkeletalMeshComponent* InCharacterMesh, struct FPBCharacterNetworkConfig GameSaved); // Function ProjectBoundary.PBSkinManager.RefreshDisplayActorSkin // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11c9610
	void RefreshCharacterSkin(struct APBCharacter* InCharacter, struct FPBCharacterNetworkConfig GameSaved); // Function ProjectBoundary.PBSkinManager.RefreshCharacterSkin // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11c9510
	struct UPBSkinManager* GetPBSkinManager(); // Function ProjectBoundary.PBSkinManager.GetPBSkinManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11c9380
};

// Class ProjectBoundary.PBSkinModifyWidget
// Size: 0x2f8 (Inherited: 0x2b8)
struct UPBSkinModifyWidget : UPBRoleComponentBaseWidget {
	struct FPBSkinModify_UI SkinModifyUI; // 0x2b8(0x3c)
	char pad_2F4[0x4]; // 0x2f4(0x04)

	void K2_SaveModifyComplete(int32_t InErrorCode); // Function ProjectBoundary.PBSkinModifyWidget.K2_SaveModifyComplete // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InitSkinModify(); // Function ProjectBoundary.PBSkinModifyWidget.K2_InitSkinModify // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBSmokeGrenade
// Size: 0x6b8 (Inherited: 0x680)
struct APBSmokeGrenade : APBProjectile {
	struct UStaticMeshComponent* SmokeGrenadeMesh; // 0x680(0x08)
	struct FPBSmokeGrenadeData SmokeGrenadeData; // 0x688(0x28)
	char pad_6B0[0x8]; // 0x6b0(0x08)
};

// Class ProjectBoundary.PBSmokeObscuringVolume
// Size: 0x280 (Inherited: 0x220)
struct APBSmokeObscuringVolume : AActor {
	struct UStaticMeshComponent* VolumeMesh; // 0x220(0x08)
	struct FSmokeObscuringData ObscuringData; // 0x228(0x28)
	struct UParticleSystemComponent* ParticleComp; // 0x250(0x08)
	float Radius; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct TArray<struct UPBDynamicMarkableComponent*> InVolumeMarkables; // 0x260(0x10)
	char pad_270[0x10]; // 0x270(0x10)
};

// Class ProjectBoundary.PBSnapshotGrenade
// Size: 0x6c0 (Inherited: 0x680)
struct APBSnapshotGrenade : APBProjectile {
	struct UPBDynamicMarkableComponent* MarkableComponent; // 0x680(0x08)
	struct FPBSnapshotGrenadeData SnapshotGrenadeData; // 0x688(0x38)
};

// Class ProjectBoundary.PBSoundManager
// Size: 0x4c0 (Inherited: 0x30)
struct UPBSoundManager : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct USoundBase*> AllSounds; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
	struct TMap<bool, struct UAudioComponent*> MusicACMap; // 0x98(0x50)
	char pad_E8[0xc]; // 0xe8(0x0c)
	float FadeOutVolume; // 0xf4(0x04)
	float FadeOutSpeed; // 0xf8(0x04)
	float FadeInVolume; // 0xfc(0x04)
	float FadeInSpeed; // 0x100(0x04)
	char pad_104[0xc]; // 0x104(0x0c)
	struct TMap<struct FName, struct UAudioComponent*> InGameSoundEffectMap; // 0x110(0x50)
	char pad_160[0x50]; // 0x160(0x50)
	struct TMap<enum class EPBCharacterSoundEffectType, struct UAudioComponent*> CharacterSoundEffectMap; // 0x1b0(0x50)
	char pad_200[0x58]; // 0x200(0x58)
	struct FMulticastInlineDelegate OnSelfVoiceStarted; // 0x258(0x10)
	struct FMulticastInlineDelegate OnAllSelfVoiceFinished; // 0x268(0x10)
	struct USoundAttenuation* TeammateSoundAttenuation; // 0x278(0x08)
	struct USoundBase* CommanderIntercomOpenSound; // 0x280(0x08)
	struct USoundBase* CommanderIntercomCommunicationSound; // 0x288(0x08)
	struct USoundBase* CommanderIntercomCloseSound; // 0x290(0x08)
	struct UAudioComponent* CommanderIntercomAC; // 0x298(0x08)
	struct USoundBase* TeammateIntercomOpenSound; // 0x2a0(0x08)
	struct USoundBase* TeammateIntercomCommunicationSound; // 0x2a8(0x08)
	struct USoundBase* TeammateIntercomCloseSound; // 0x2b0(0x08)
	struct UAudioComponent* TeammateIntercomAC; // 0x2b8(0x08)
	struct FPBSoundEventPoolData SelfData; // 0x2c0(0x80)
	struct FPBSoundEventPoolData TeammateData; // 0x340(0x80)
	struct FPBSoundEventPoolData CommanderData; // 0x3c0(0x80)
	struct FPBSoundEventPoolData SuitData; // 0x440(0x80)

	void TriggerRoleSoundEvent(struct FName InSoundEventID, enum class EPBRole InRoleType, struct APBCharacter* InSpeaker); // Function ProjectBoundary.PBSoundManager.TriggerRoleSoundEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x11ce330
	void TriggerOtherSoundEvent(struct FName InSoundEventID); // Function ProjectBoundary.PBSoundManager.TriggerOtherSoundEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x11ce2a0
	void TriggerEvent_UISound(struct FName InSoundEventID); // Function ProjectBoundary.PBSoundManager.TriggerEvent_UISound // (Final|Native|Public|BlueprintCallable) // @ game+0x11ce210
	void TriggerEvent_InGameSoundAttached(struct FName InSoundEventID, struct FName InEventGroup, struct USceneComponent* AttachComponent, enum class EAttachLocation LocationType); // Function ProjectBoundary.PBSoundManager.TriggerEvent_InGameSoundAttached // (Final|Native|Public|BlueprintCallable) // @ game+0x11ce0b0
	void TriggerEvent_InGameSoundAtLocation(struct FName InSoundEventID, struct FName InEventGroup, struct FVector InLocation); // Function ProjectBoundary.PBSoundManager.TriggerEvent_InGameSoundAtLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11cdf90
	void TriggerEvent_GameMusic(struct FName InMusicID); // Function ProjectBoundary.PBSoundManager.TriggerEvent_GameMusic // (Final|Native|Public|BlueprintCallable) // @ game+0x11cdf00
	void TriggerEvent_CharacterSoundAttached(struct FName InSoundEventID, struct USceneComponent* AttachComponent, float VolumeMultiplier, float PitchMultiplier); // Function ProjectBoundary.PBSoundManager.TriggerEvent_CharacterSoundAttached // (Final|Native|Public|BlueprintCallable) // @ game+0x11cdda0
	void TriggerEvent_CharacterSound2D(struct FName InSoundEventID); // Function ProjectBoundary.PBSoundManager.TriggerEvent_CharacterSound2D // (Final|Native|Public|BlueprintCallable) // @ game+0x11cdd10
	void StopSoundOfType(enum class EPBCharacterSoundEffectType InType); // Function ProjectBoundary.PBSoundManager.StopSoundOfType // (Final|Native|Public|BlueprintCallable) // @ game+0x11cdc90
	void StopInGameSoundByEventGroup(struct FName InEventGroup); // Function ProjectBoundary.PBSoundManager.StopInGameSoundByEventGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x11cdc00
	void StopCurrentBGMusic(); // Function ProjectBoundary.PBSoundManager.StopCurrentBGMusic // (Final|Native|Public|BlueprintCallable) // @ game+0x11cdbe0
	void PauseCurrentBGMusic(); // Function ProjectBoundary.PBSoundManager.PauseCurrentBGMusic // (Final|Native|Public|BlueprintCallable) // @ game+0x11cd950
	void EnableToListenSelfVoice(); // Function ProjectBoundary.PBSoundManager.EnableToListenSelfVoice // (Final|Native|Public|BlueprintCallable) // @ game+0x11cd690
	void DisableToListenSelfVoice(); // Function ProjectBoundary.PBSoundManager.DisableToListenSelfVoice // (Final|Native|Public|BlueprintCallable) // @ game+0x11cd670
	void ContinueToPlayCurrentBGMusic(); // Function ProjectBoundary.PBSoundManager.ContinueToPlayCurrentBGMusic // (Final|Native|Public|BlueprintCallable) // @ game+0x11cd650
	void ClearAllSoundsAndVoices(); // Function ProjectBoundary.PBSoundManager.ClearAllSoundsAndVoices // (Final|Native|Public|BlueprintCallable) // @ game+0x11cd630
};

// Class ProjectBoundary.PBSoundNodeVoice
// Size: 0x48 (Inherited: 0x48)
struct UPBSoundNodeVoice : USoundNode {
};

// Class ProjectBoundary.PBSoundTester
// Size: 0x228 (Inherited: 0x220)
struct APBSoundTester : AActor {
	struct USoundCue* TestSound; // 0x220(0x08)

	void PlaySound(struct USoundCue* Sound); // Function ProjectBoundary.PBSoundTester.PlaySound // (Final|Native|Public|BlueprintCallable) // @ game+0x11cd970
};

// Class ProjectBoundary.PBSpectatorPawn
// Size: 0x320 (Inherited: 0x2a8)
struct APBSpectatorPawn : ASpectatorPawn {
	struct UCameraComponent* SpectatingCameraComponent; // 0x2a8(0x08)
	float RotationInterpSpeed; // 0x2b0(0x04)
	float LocationInterpSpeed; // 0x2b4(0x04)
	float SpectatingDistanceMin; // 0x2b8(0x04)
	float SpectatingDistanceMax; // 0x2bc(0x04)
	float NormalFOV; // 0x2c0(0x04)
	float FOVDecrementAmount; // 0x2c4(0x04)
	float MinFOV; // 0x2c8(0x04)
	float VictimViewDuration; // 0x2cc(0x04)
	float SpectatingHalfAngle; // 0x2d0(0x04)
	char pad_2D4[0x4c]; // 0x2d4(0x4c)
};

// Class ProjectBoundary.PBSpectatorPawn_Elimination
// Size: 0x2b0 (Inherited: 0x2a8)
struct APBSpectatorPawn_Elimination : ASpectatorPawn {
	struct UCameraComponent* SpectatingCameraComponent; // 0x2a8(0x08)
};

// Class ProjectBoundary.PBSpringComponent
// Size: 0x190 (Inherited: 0xb0)
struct UPBSpringComponent : UActorComponent {
	struct FMulticastInlineDelegate OnSpringUpdatedDelegate; // 0xb0(0x10)
	struct FPBStaticSpringConfig StaticSpringConfig; // 0xc0(0x38)
	bool DebugSwitch; // 0xf8(0x01)
	bool LockSpringPivot; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	float MoveFriction; // 0xfc(0x04)
	float PivotMass; // 0x100(0x04)
	float PivotVelocityZeroTolerance; // 0x104(0x04)
	float FixedDeltaTime; // 0x108(0x04)
	char pad_10C[0x84]; // 0x10c(0x84)

	void SetStaticSpringConfig(struct FPBStaticSpringConfig InConfig); // Function ProjectBoundary.PBSpringComponent.SetStaticSpringConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x11cdad0
	void SetPivotLocation(struct FVector InLocation); // Function ProjectBoundary.PBSpringComponent.SetPivotLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11cda40
	void ResetPivotLocation(); // Function ProjectBoundary.PBSpringComponent.ResetPivotLocation // (Final|Native|Public|BlueprintCallable) // @ game+0x11cda20
	struct FVector GetPivotLocation(); // Function ProjectBoundary.PBSpringComponent.GetPivotLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11cd750
	void AddForce(struct FVector InputForce); // Function ProjectBoundary.PBSpringComponent.AddForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x11cd3a0
};

// Class ProjectBoundary.PBSquadWidget
// Size: 0x2a0 (Inherited: 0x268)
struct UPBSquadWidget : UPBUserWidget {
	enum class EPBSquadType SquadType; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FPBSquad_UI SquadUI; // 0x270(0x30)

	void RefreshSquadMember(); // Function ProjectBoundary.PBSquadWidget.RefreshSquadMember // (Final|Native|Protected) // @ game+0x11cda00
	void K2_SetSquadMember(); // Function ProjectBoundary.PBSquadWidget.K2_SetSquadMember // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBStabilizerSkillModule
// Size: 0x5b0 (Inherited: 0x5a8)
struct APBStabilizerSkillModule : APBBaseRoleSkillModule {
	char pad_5A8[0x8]; // 0x5a8(0x08)

	float GetRemainingTimeInUsing(); // Function ProjectBoundary.PBStabilizerSkillModule.GetRemainingTimeInUsing // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x11cd780
};

// Class ProjectBoundary.PBStaticMeshComponent
// Size: 0x530 (Inherited: 0x4d0)
struct UPBStaticMeshComponent : UStaticMeshComponent {
	char pad_4D0[0x50]; // 0x4d0(0x50)
	float FOVAngle; // 0x520(0x04)
	char bEnableCustomFOV : 1; // 0x524(0x01)
	char pad_524_1 : 7; // 0x524(0x01)
	char pad_525[0xb]; // 0x525(0x0b)

	void UnbindRenderMatrixSource(struct UActorComponent* Source); // Function ProjectBoundary.PBStaticMeshComponent.UnbindRenderMatrixSource // (Final|Native|Public|BlueprintCallable) // @ game+0x11ce440
	struct FMatrix GetCustomRenderTransformMatrixConst(); // Function ProjectBoundary.PBStaticMeshComponent.GetCustomRenderTransformMatrixConst // (Final|Native|Public|HasDefaults|Const) // @ game+0x11cd700
	struct FMatrix GetCustomRenderTransformMatrix(); // Function ProjectBoundary.PBStaticMeshComponent.GetCustomRenderTransformMatrix // (Final|Native|Public|HasDefaults) // @ game+0x11cd6b0
	struct FMatrix GetCustomRenderMatrix__DelegateSignature(); // DelegateFunction ProjectBoundary.PBStaticMeshComponent.GetCustomRenderMatrix__DelegateSignature // (Public|Delegate|HasDefaults) // @ game+0x1556ec0
	void BindRenderMatrixSource_Static(struct UPBStaticMeshComponent* Source); // Function ProjectBoundary.PBStaticMeshComponent.BindRenderMatrixSource_Static // (Final|Native|Public|BlueprintCallable) // @ game+0x11cd4c0
	void BindRenderMatrixSource_Skeletal(struct UPBSkeletalMeshComponent* Source); // Function ProjectBoundary.PBStaticMeshComponent.BindRenderMatrixSource_Skeletal // (Final|Native|Public|BlueprintCallable) // @ game+0x11cd430
};

// Class ProjectBoundary.PBStoreManager
// Size: 0x108 (Inherited: 0x30)
struct UPBStoreManager : UGameInstanceSubsystem {
	struct FMulticastInlineDelegate BuyCompleteEvent; // 0x30(0x10)
	struct FMulticastInlineDelegate IndependentWidgetOpenedEvent; // 0x40(0x10)
	struct FMulticastInlineDelegate IndependentWidgetClosedEvent; // 0x50(0x10)
	struct FMulticastInlineDelegate InitMerchListFinishEvent; // 0x60(0x10)
	struct TSoftObjectPtr<struct UCompositeDataTable> MerchDataTableSoftPtr; // 0x70(0x28)
	struct UCompositeDataTable* MerchDataTable; // 0x98(0x08)
	char pad_A0[0x68]; // 0xa0(0x68)

	bool IsMerchOnSale(struct FName MerchName); // Function ProjectBoundary.PBStoreManager.IsMerchOnSale // (Final|Native|Public|BlueprintCallable) // @ game+0x11cd8b0
	bool IsMerchListInitialized(); // Function ProjectBoundary.PBStoreManager.IsMerchListInitialized // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11cd890
	bool IsBought(struct FName MerchName); // Function ProjectBoundary.PBStoreManager.IsBought // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11cd7f0
	void IndependentWidgetOpened(); // Function ProjectBoundary.PBStoreManager.IndependentWidgetOpened // (Final|Native|Public|BlueprintCallable) // @ game+0x11cd7d0
	void IndependentWidgetClosed(); // Function ProjectBoundary.PBStoreManager.IndependentWidgetClosed // (Final|Native|Public|BlueprintCallable) // @ game+0x11cd7b0
	void Buy(struct FName MerchName, enum class EPBCashType UsingCashType); // Function ProjectBoundary.PBStoreManager.Buy // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11cd550
};

// Class ProjectBoundary.PBStoreWidget
// Size: 0x298 (Inherited: 0x298)
struct UPBStoreWidget : UPBPageWidget {

	void OnLoadMerchComplete(); // Function ProjectBoundary.PBStoreWidget.OnLoadMerchComplete // (Final|Native|Protected) // @ game+0x11d2c40
	void OnBuyComplete(bool bWasSuccessful, struct FName MerchName); // Function ProjectBoundary.PBStoreWidget.OnBuyComplete // (Final|Native|Protected|HasOutParms) // @ game+0x11d2b60
	void K2_RefreshMerchList(struct TArray<struct FName> MerchList); // Function ProjectBoundary.PBStoreWidget.K2_RefreshMerchList // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	struct TArray<struct FName> GetMerchList(); // Function ProjectBoundary.PBStoreWidget.GetMerchList // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x11d21f0
};

// Class ProjectBoundary.PBStunDamageType
// Size: 0x60 (Inherited: 0x60)
struct UPBStunDamageType : UPBDamageType {
};

// Class ProjectBoundary.PBStunExplosiveComponent
// Size: 0x190 (Inherited: 0x168)
struct UPBStunExplosiveComponent : UAttachModuleComponent {
	char pad_168[0x28]; // 0x168(0x28)
};

// Class ProjectBoundary.PBSupplyPoint
// Size: 0x230 (Inherited: 0x220)
struct APBSupplyPoint : AActor {
	struct UStaticMeshComponent* SupplyPointStaticMeshComponent; // 0x220(0x08)
	float InteractDistance; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
};

// Class ProjectBoundary.PBSurviveVolume
// Size: 0x278 (Inherited: 0x268)
struct APBSurviveVolume : APhysicsVolume {
	struct UDamageType* OutOfWorldDmgType; // 0x268(0x08)
	float OutOfWorldSurviveTime; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
};

// Class ProjectBoundary.PBTargetType
// Size: 0x28 (Inherited: 0x28)
struct UPBTargetType : UObject {

	void GetTargets(struct APBCharacter* TargetingCharacter, struct AActor* TargetingActor, struct FGameplayEventData EventData, struct TArray<struct FHitResult> OutHitResults, struct TArray<struct AActor*> OutActors); // Function ProjectBoundary.PBTargetType.GetTargets // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x11d2230
};

// Class ProjectBoundary.PBTargetType_UseOwner
// Size: 0x28 (Inherited: 0x28)
struct UPBTargetType_UseOwner : UPBTargetType {
};

// Class ProjectBoundary.PBTargetType_UseEventData
// Size: 0x28 (Inherited: 0x28)
struct UPBTargetType_UseEventData : UPBTargetType {
};

// Class ProjectBoundary.PBTeamInfoWidget
// Size: 0x2b8 (Inherited: 0x268)
struct UPBTeamInfoWidget : UPBUserWidget {
	enum class EPBTeamSelectType TeamSelectType; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	int32_t TeamID; // 0x26c(0x04)
	struct FPBTeamInfo_UI TeamInfoUI; // 0x270(0x48)

	void RefreshTeamInfo(); // Function ProjectBoundary.PBTeamInfoWidget.RefreshTeamInfo // (Final|Native|Protected) // @ game+0x11d2f90
	void K2_SetTeamScore(); // Function ProjectBoundary.PBTeamInfoWidget.K2_SetTeamScore // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBTeamListWidget
// Size: 0x280 (Inherited: 0x268)
struct UPBTeamListWidget : UPBUserWidget {
	struct UPanelWidget* TeamList; // 0x268(0x08)
	struct UPBSinglePlayerWidget* ItemClass; // 0x270(0x08)
	struct UPBInvitableWidget* InvitableClass; // 0x278(0x08)

	void TeamMemberRefreshed(struct TArray<struct FTeamMemberInfo> TeamMember, struct TArray<struct FPBOnlineUserInfo> InviteList); // Function ProjectBoundary.PBTeamListWidget.TeamMemberRefreshed // (Final|Native|Protected|HasOutParms) // @ game+0x11d3260
	void LocalPlayerInfoRefreshed(struct FPBOnlineUserInfo OnlineUserInfo); // Function ProjectBoundary.PBTeamListWidget.LocalPlayerInfoRefreshed // (Final|Native|Protected|HasOutParms) // @ game+0x11d2a50
	void K2_SetTeamListTitleInfo(bool bInHasCountBox, int32_t InTeamMembersNum, int32_t InTeamMaxNum); // Function ProjectBoundary.PBTeamListWidget.K2_SetTeamListTitleInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBTeamManager
// Size: 0x138 (Inherited: 0x30)
struct UPBTeamManager : UGameInstanceSubsystem {
	struct UProjectBoundaryInstance* PBGameInstance; // 0x30(0x08)
	struct FMulticastInlineDelegate BPOnTeamMemberRefreshed; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)
	struct FMulticastInlineDelegate OnInvitationComeUp; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
	struct FMulticastInlineDelegate DSP_OnReplyOnInvitation; // 0x80(0x10)
	char pad_90[0x98]; // 0x90(0x98)
	struct FMulticastInlineDelegate OnTeamMessagePublished; // 0x128(0x10)

	void ReplyInvite(struct FPBInvitation invitation, bool bJoin); // Function ProjectBoundary.PBTeamManager.ReplyInvite // (Final|Native|Public|BlueprintCallable) // @ game+0x11d2fd0
	void QuerySimpleInfoOnPBServerComplete(struct FUserSimpleInfoMapWrapper UsersInfoMap, int32_t ErrorCode); // Function ProjectBoundary.PBTeamManager.QuerySimpleInfoOnPBServerComplete // (Final|Native|Private|HasOutParms) // @ game+0x11d2c80
	void LeaveTeam(); // Function ProjectBoundary.PBTeamManager.LeaveTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x11d2a30
	void KickTeamMember(struct FTeamMemberInfo TeamMember); // Function ProjectBoundary.PBTeamManager.KickTeamMember // (Final|Native|Public|BlueprintCallable) // @ game+0x11d2940
	bool IsMeTeamLeader(); // Function ProjectBoundary.PBTeamManager.IsMeTeamLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11d28e0
	bool IsMeInTeam(); // Function ProjectBoundary.PBTeamManager.IsMeInTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11d28b0
	bool IsInTeam(struct FBPUniqueID ID); // Function ProjectBoundary.PBTeamManager.IsInTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11d27d0
	void Invite(struct FBPUniqueID Target, struct FString InTeamName, struct FDelegate Callback); // Function ProjectBoundary.PBTeamManager.Invite // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11d2640
	struct TArray<struct FTeamMemberInfo> GetTeamMembers(); // Function ProjectBoundary.PBTeamManager.GetTeamMembers // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11d2540
	struct TArray<struct FPBOnlineUserInfo> GetInviteList(); // Function ProjectBoundary.PBTeamManager.GetInviteList // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11d20e0
	void CheckCanInviteFromServer(struct FBPUniqueID Invitee, struct FDelegate Callback); // Function ProjectBoundary.PBTeamManager.CheckCanInviteFromServer // (Final|Native|Public|BlueprintCallable) // @ game+0x11d1fb0
	void ChangeLeaderTo(struct FBPUniqueID ID); // Function ProjectBoundary.PBTeamManager.ChangeLeaderTo // (Final|Native|Public|BlueprintCallable) // @ game+0x11d1ee0
	bool CanKick(struct FBPUniqueID ID); // Function ProjectBoundary.PBTeamManager.CanKick // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11d1e00
	bool CanChangeLeaderTo(struct FBPUniqueID ID); // Function ProjectBoundary.PBTeamManager.CanChangeLeaderTo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11d1e00
};

// Class ProjectBoundary.PBTeamStart
// Size: 0x2b0 (Inherited: 0x250)
struct APBTeamStart : APlayerStart {
	struct USplineComponent* Spline; // 0x250(0x08)
	struct UCurveFloat* VelocityCurve; // 0x258(0x08)
	float DefaultVelocity; // 0x260(0x04)
	char pad_264[0x8]; // 0x264(0x08)
	int32_t SpawnTeam; // 0x26c(0x04)
	char ReSpawnTeam : 1; // 0x270(0x01)
	char CheckSpawnTeam : 1; // 0x270(0x01)
	char bCheckingCamp : 1; // 0x270(0x01)
	char bNotForPlayers : 1; // 0x270(0x01)
	char bNotForBots : 1; // 0x270(0x01)
	char pad_270_5 : 3; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float Radius; // 0x274(0x04)
	float PBCapsuleHalfHeight; // 0x278(0x04)
	float PBCapsuleRadius; // 0x27c(0x04)
	float ZoneGroupRadius; // 0x280(0x04)
	int32_t Serialnumber; // 0x284(0x04)
	char pad_288[0x28]; // 0x288(0x28)
};

// Class ProjectBoundary.PBTeamStart_KOH
// Size: 0x2c0 (Inherited: 0x2b0)
struct APBTeamStart_KOH : APBTeamStart {
	struct TArray<char> CapturableZoneID; // 0x2b0(0x10)
};

// Class ProjectBoundary.PBTeamStartZone
// Size: 0x328 (Inherited: 0x230)
struct APBTeamStartZone : AStaticMeshActor {
	int32_t Serialnumber; // 0x230(0x04)
	int32_t PreNumber; // 0x234(0x04)
	int32_t NextNumber; // 0x238(0x04)
	int32_t InvalidInvaderNumber; // 0x23c(0x04)
	int32_t SpawnTeam; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	float EnemyMinDis; // 0x248(0x04)
	float DeadRadius; // 0x24c(0x04)
	float InvalidTime; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<struct APBTeamStart*> TeamStartArray; // 0x258(0x10)
	char pad_268[0xa0]; // 0x268(0xa0)
	struct APBTeamStartZone* PreZone; // 0x308(0x08)
	struct APBTeamStartZone* NextZone; // 0x310(0x08)
	char pad_318[0x10]; // 0x318(0x10)
};

// Class ProjectBoundary.PBThreatSystem
// Size: 0xf0 (Inherited: 0x30)
struct UPBThreatSystem : UWorldSubsystem {
	struct FMulticastInlineDelegate MobilityHeatThreatEvent; // 0x30(0x10)
	struct FMulticastInlineDelegate MobilityHeatThreatClearEvent; // 0x40(0x10)
	struct FMulticastInlineDelegate DefenseHeatThreatEvent; // 0x50(0x10)
	struct FMulticastInlineDelegate DefenseHeatThreatClearEvent; // 0x60(0x10)
	struct FMulticastInlineDelegate WeaponFireThreatEvent; // 0x70(0x10)
	struct FMulticastInlineDelegate WeaponFireThreatClearEvent; // 0x80(0x10)
	struct TArray<struct UPBHeatComponent*> HeatThreats; // 0x90(0x10)
	struct TMap<struct UPBHeatComponent*, struct FVector> WeaponThreats; // 0xa0(0x50)
};

// Class ProjectBoundary.PBTopPlayerinfoWidget
// Size: 0x298 (Inherited: 0x268)
struct UPBTopPlayerinfoWidget : UPBUserWidget {
	int32_t PlayerInfoIndex; // 0x268(0x04)
	enum class EPBTeamSelectType TeamCamp; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct FPBTopPlayerInfo_UI TopPlayerInfoUI; // 0x270(0x18)
	struct APBPlayerState* CurrentPlayerState; // 0x288(0x08)
	char pad_290[0x8]; // 0x290(0x08)

	void RefreshPlayerInfo(struct APBPlayerState* InPlayerState, int32_t InPlayerInfoIndex, enum class EPBTeamSelectType InTeamCamp); // Function ProjectBoundary.PBTopPlayerinfoWidget.RefreshPlayerInfo // (Final|Native|Protected) // @ game+0x11d2e80
	void RefreshFightingState(struct APBPlayerState* InPlayerState); // Function ProjectBoundary.PBTopPlayerinfoWidget.RefreshFightingState // (Final|Native|Protected) // @ game+0x11d2df0
	void K2_SetNullPlayerInfo(); // Function ProjectBoundary.PBTopPlayerinfoWidget.K2_SetNullPlayerInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetFightingStateImage(); // Function ProjectBoundary.PBTopPlayerinfoWidget.K2_SetFightingStateImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBTopPlayerListWidget
// Size: 0x288 (Inherited: 0x268)
struct UPBTopPlayerListWidget : UPBUserWidget {
	int32_t MaxPlayerNum; // 0x268(0x04)
	enum class EPBTeamSelectType TeamSelectType; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	int32_t TeamID; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct FPBTopPlayerList_UI TopPlayerListUI; // 0x278(0x10)

	void RefreshTopPlayerList(); // Function ProjectBoundary.PBTopPlayerListWidget.RefreshTopPlayerList // (Final|Native|Protected) // @ game+0x11d2fb0
	void K2_SetTopPlayerList(); // Function ProjectBoundary.PBTopPlayerListWidget.K2_SetTopPlayerList // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBWidget
// Size: 0x270 (Inherited: 0x268)
struct UPBWidget : UPBUserWidget {
	struct APBCharacter* PBCharacter; // 0x268(0x08)

	void SetSubWidgetShow(bool bShow); // Function ProjectBoundary.PBWidget.SetSubWidgetShow // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetPBCharacter(struct APBCharacter* Character); // Function ProjectBoundary.PBWidget.SetPBCharacter // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4970
	void OnFuelCellUsed(int32_t FuelCellIndex); // Function ProjectBoundary.PBWidget.OnFuelCellUsed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnFuelCellRecovered(int32_t FuelCellIndex); // Function ProjectBoundary.PBWidget.OnFuelCellRecovered // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateMemberIcons(); // Function ProjectBoundary.PBWidget.K2_UpdateMemberIcons // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	struct FText GetGameRamainingTime(); // Function ProjectBoundary.PBWidget.GetGameRamainingTime // (Final|BlueprintCosmetic|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x11f29e0
};

// Class ProjectBoundary.PBTopScoreBoardWidget
// Size: 0x270 (Inherited: 0x270)
struct UPBTopScoreBoardWidget : UPBWidget {

	void K2_OnTeamKillChanges(int32_t FriendTeamKills, int32_t EnemyTeamKills); // Function ProjectBoundary.PBTopScoreBoardWidget.K2_OnTeamKillChanges // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBTopUpWidget
// Size: 0x268 (Inherited: 0x268)
struct UPBTopUpWidget : UPBUserWidget {
};

// Class ProjectBoundary.PBTransformComponent
// Size: 0x5b0 (Inherited: 0x540)
struct UPBTransformComponent : USplineComponent {
	struct USceneComponent* TransformTarget; // 0x538(0x08)
	struct FMulticastInlineDelegate OnArriveToEnd; // 0x540(0x10)
	struct FMulticastInlineDelegate OnBackToStart; // 0x550(0x10)
	enum class EPBTransformState CurrentTransformState; // 0x560(0x01)
	enum class EPBTransformState PendingTransformState; // 0x561(0x01)
	struct FMulticastInlineDelegate OnStoppedByHit; // 0x568(0x10)
	struct FMulticastInlineDelegate OnReversedByHit; // 0x578(0x10)
	struct UCurveFloat* TransformSpeedCurve; // 0x588(0x08)
	float IntervalTime; // 0x590(0x04)
	enum class EPBTransformCompType TransformCompType; // 0x594(0x01)
	char bIsCheckHit : 1; // 0x595(0x01)
	enum class EPBHitFeedbackType HitFeedbackType; // 0x596(0x01)
	char pad_598_1 : 7; // 0x598(0x01)
	char pad_599[0x17]; // 0x599(0x17)

	void TransformReverse(); // Function ProjectBoundary.PBTransformComponent.TransformReverse // (Final|Native|Public|BlueprintCallable) // @ game+0x11d33b0
	void TransformForward(); // Function ProjectBoundary.PBTransformComponent.TransformForward // (Final|Native|Public|BlueprintCallable) // @ game+0x11d3390
	void SetTransformTarget(struct USceneComponent* InTransformTarget); // Function ProjectBoundary.PBTransformComponent.SetTransformTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x11d31d0
	void OnRep_PendingTransformState(); // Function ProjectBoundary.PBTransformComponent.OnRep_PendingTransformState // (Final|Native|Protected) // @ game+0x11d2c60
	bool IsTransforming(); // Function ProjectBoundary.PBTransformComponent.IsTransforming // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11d2910
	void HandleHitEvent(); // Function ProjectBoundary.PBTransformComponent.HandleHitEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x11d2620
};

// Class ProjectBoundary.PBVehicle
// Size: 0x2f8 (Inherited: 0x220)
struct APBVehicle : AActor {
	struct USceneComponent* VehicleRootComponent; // 0x220(0x08)
	struct UPBEnergyComponent* DefenseEnergyComponent; // 0x228(0x08)
	struct UPBHeatComponent* DefenseHeatComponent; // 0x230(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x238(0x08)
	struct UPBEnergySupplyComponent* EnergySupplyComponent; // 0x240(0x08)
	struct UPBHeatComponent* MobilityHeatComponent; // 0x248(0x08)
	struct UPBArmorManagerComponent* CachedArmorMgr; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)
	struct APBExplosionEffect* ExplosionTemplate; // 0x260(0x08)
	struct FPBVehicleConfig VehicleConfig; // 0x268(0x40)
	struct UCurveFloat* ImpulseCurve; // 0x2a8(0x08)
	int32_t TeamNum; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct APawn* OwningPawn; // 0x2b8(0x08)
	struct APBCharacter* OwningCharacter; // 0x2c0(0x08)
	struct APBRadar* TopPassiveSlotItem; // 0x2c8(0x08)
	struct APBLauncher* LeftLauncher; // 0x2d0(0x08)
	struct APBLauncher* RightLauncher; // 0x2d8(0x08)
	struct FPBVehicleNetworkConfig SavedData; // 0x2e0(0x10)
	char bIsVehicleDown : 1; // 0x2f0(0x01)
	char pad_2F0_1 : 7; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)

	void VehicleRestart(); // Function ProjectBoundary.PBVehicle.VehicleRestart // (Final|Native|Protected) // @ game+0x11ecb10
	void VehicleDown(); // Function ProjectBoundary.PBVehicle.VehicleDown // (Final|Native|Protected) // @ game+0x11ecaf0
	void SetExplosionTemplateNull(); // Function ProjectBoundary.PBVehicle.SetExplosionTemplateNull // (Final|Native|Protected|BlueprintCallable) // @ game+0x11ec060
	void OnRep_TopPassiveSlotItem(); // Function ProjectBoundary.PBVehicle.OnRep_TopPassiveSlotItem // (Final|Native|Protected) // @ game+0x11eabf0
	void OnRep_TeamNum(); // Function ProjectBoundary.PBVehicle.OnRep_TeamNum // (Final|Native|Protected) // @ game+0x11eabb0
	void OnRep_SavedData(); // Function ProjectBoundary.PBVehicle.OnRep_SavedData // (Final|Native|Protected) // @ game+0x11eab90
	void OnRep_RightActiveSlotItem(); // Function ProjectBoundary.PBVehicle.OnRep_RightActiveSlotItem // (Final|Native|Protected) // @ game+0x11eab70
	void OnRep_LeftActiveSlotItem(); // Function ProjectBoundary.PBVehicle.OnRep_LeftActiveSlotItem // (Final|Native|Protected) // @ game+0x11eab10
	void OnRep_IsVehicleDown(); // Function ProjectBoundary.PBVehicle.OnRep_IsVehicleDown // (Final|Native|Protected) // @ game+0x11eaaf0
	void K2_UpdateTeamNum(); // Function ProjectBoundary.PBVehicle.K2_UpdateTeamNum // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_TurnOnVehicle(); // Function ProjectBoundary.PBVehicle.K2_TurnOnVehicle // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_TurnOffVehicle(); // Function ProjectBoundary.PBVehicle.K2_TurnOffVehicle // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimulateVehicleRestart(); // Function ProjectBoundary.PBVehicle.K2_SimulateVehicleRestart // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimulateVehicleDown(); // Function ProjectBoundary.PBVehicle.K2_SimulateVehicleDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnEquip(); // Function ProjectBoundary.PBVehicle.K2_OnEquip // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EquippedRightSlot(); // Function ProjectBoundary.PBVehicle.K2_EquippedRightSlot // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_EquippedLeftSlot(); // Function ProjectBoundary.PBVehicle.K2_EquippedLeftSlot // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	struct APBPlayerState* GetPlayerState(); // Function ProjectBoundary.PBVehicle.GetPlayerState // (Final|Native|Public) // @ game+0x11ea270
	struct APawn* GetPawn(); // Function ProjectBoundary.PBVehicle.GetPawn // (Final|Native|Public) // @ game+0x11ea220
	struct APBCharacter* GetCharacter(); // Function ProjectBoundary.PBVehicle.GetCharacter // (Final|Native|Public) // @ game+0x11e9ed0
};

// Class ProjectBoundary.PBVisionMarkingComponent
// Size: 0x128 (Inherited: 0xb0)
struct UPBVisionMarkingComponent : UActorComponent {
	struct TArray<struct UPBDynamicMarkableComponent*> InVisionArray; // 0xb0(0x10)
	struct TArray<struct UPBDynamicMarkableComponent*> LocalForceMarkArray; // 0xc0(0x10)
	struct TArray<struct UPBDynamicMarkableComponent*> InSharedArray; // 0xd0(0x10)
	char bInSharedMode : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct UCurveFloat* MarkingTimeCurve; // 0xe8(0x08)
	float CylinderStartHeight; // 0xf0(0x04)
	float CylinderHeight; // 0xf4(0x04)
	float CylinderRadius; // 0xf8(0x04)
	float ConeStartHeight; // 0xfc(0x04)
	float ConeHeight; // 0x100(0x04)
	float ConeDegrees; // 0x104(0x04)
	float VisionMarkingTime; // 0x108(0x04)
	float VisionUnMarkingTime; // 0x10c(0x04)
	float ShowIndicatorRadius; // 0x110(0x04)
	char bSharedMode_Config : 1; // 0x114(0x01)
	char bAutoActivateVisionMarking : 1; // 0x114(0x01)
	char bSkipSharedTime : 1; // 0x114(0x01)
	char bDrawDebug : 1; // 0x114(0x01)
	char pad_114_4 : 4; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct APBPlayerState* PlayerState; // 0x118(0x08)
	char pad_120[0x8]; // 0x120(0x08)

	void VisionMarkingSwitch(bool bEnable); // Function ProjectBoundary.PBVisionMarkingComponent.VisionMarkingSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x11ecb60
	bool VisionMarkingEnable(); // Function ProjectBoundary.PBVisionMarkingComponent.VisionMarkingEnable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ecb30
	void StopVisionMarking(); // Function ProjectBoundary.PBVisionMarkingComponent.StopVisionMarking // (Final|Native|Public|BlueprintCallable) // @ game+0x11eca10
	void StartVisionMarking(); // Function ProjectBoundary.PBVisionMarkingComponent.StartVisionMarking // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec9f0
	void ServerVisionUnMark(struct UPBDynamicMarkableComponent* Markable); // Function ProjectBoundary.PBVisionMarkingComponent.ServerVisionUnMark // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11ebd40
	void ServerVisionMark(struct UPBDynamicMarkableComponent* Markable); // Function ProjectBoundary.PBVisionMarkingComponent.ServerVisionMark // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11ebc80
	void ServerSharedUnMark(struct UPBDynamicMarkableComponent* Markable); // Function ProjectBoundary.PBVisionMarkingComponent.ServerSharedUnMark // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11eba10
	void ServerSharedMark(struct UPBDynamicMarkableComponent* Markable); // Function ProjectBoundary.PBVisionMarkingComponent.ServerSharedMark // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11eb950
	bool IsVisionStarting(); // Function ProjectBoundary.PBVisionMarkingComponent.IsVisionStarting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea9c0
};

// Class ProjectBoundary.PBVivoxClientManager
// Size: 0x288 (Inherited: 0x28)
struct UPBVivoxClientManager : UObject {
	struct UPBUserWidget* VoiceWidgetClass; // 0x28(0x08)
	struct TWeakObjectPtr<struct UPBUserWidget> VoiceWidget; // 0x30(0x08)
	char pad_38[0x250]; // 0x38(0x250)

	void SetTeammatesMuteAll(struct UObject* WorldContextObject, bool bClose); // Function ProjectBoundary.PBVivoxClientManager.SetTeammatesMuteAll // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec750
	void SetMutingPlayer(struct APlayerState* InPlayerState, bool bIsSetMute); // Function ProjectBoundary.PBVivoxClientManager.SetMutingPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec420
	void SetLocalInputDevices(bool bClose); // Function ProjectBoundary.PBVivoxClientManager.SetLocalInputDevices // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec370
	bool IsTeammatesMuteAll(struct UObject* WorldContextObject); // Function ProjectBoundary.PBVivoxClientManager.IsTeammatesMuteAll // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea8f0
	bool IsLocalMute(struct APlayerState* InPlayerState); // Function ProjectBoundary.PBVivoxClientManager.IsLocalMute // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea820
	bool IsBlockingPlayer(struct APlayerState* InPlayerState); // Function ProjectBoundary.PBVivoxClientManager.IsBlockingPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea750
	void HandleMultiChanToggleChat(enum class PTTKey Key); // Function ProjectBoundary.PBVivoxClientManager.HandleMultiChanToggleChat // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea560
	struct UPBVivoxClientManager* GetPBVivoxClientManager(struct UObject* WorldContextObject); // Function ProjectBoundary.PBVivoxClientManager.GetPBVivoxClientManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11ea150
};

// Class ProjectBoundary.PBVivoxServerManager
// Size: 0x30 (Inherited: 0x28)
struct UPBVivoxServerManager : UObject {
	char bIsSandBox : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class ProjectBoundary.PBVRCharacter
// Size: 0x320 (Inherited: 0x2e0)
struct APBVRCharacter : APBPawn {
	struct UCameraComponent* VRCameraComponent; // 0x2e0(0x08)
	struct UMotionControllerComponent* RightMotionController; // 0x2e8(0x08)
	struct UMotionControllerComponent* LeftMotionController; // 0x2f0(0x08)
	struct USkeletalMeshComponent* RightHandMeshComponent; // 0x2f8(0x08)
	struct USkeletalMeshComponent* LeftHandMeshComponent; // 0x300(0x08)
	bool bCanEquip; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct APBWeapon* CurrentWeapon; // 0x310(0x08)
	struct FName WeaponAttachPoint; // 0x318(0x08)

	void TossCurrentWeapon(); // Function ProjectBoundary.PBVRCharacter.TossCurrentWeapon // (Final|Native|Protected|BlueprintCallable) // @ game+0x11eca50
	void ToggleCanEquip(); // Function ProjectBoundary.PBVRCharacter.ToggleCanEquip // (Final|Native|Public|BlueprintCallable) // @ game+0x11eca30
	void SetCurrentWeapon(struct APBWeapon* NewWeapon); // Function ProjectBoundary.PBVRCharacter.SetCurrentWeapon // (Final|Native|Protected|BlueprintCallable) // @ game+0x11ebfb0
	struct UMotionControllerComponent* GetRightMotionController(); // Function ProjectBoundary.PBVRCharacter.GetRightMotionController // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea350
	struct USkeletalMeshComponent* GetRightHandMesh(); // Function ProjectBoundary.PBVRCharacter.GetRightHandMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea330
};

// Class ProjectBoundary.PBWarningWidget
// Size: 0x270 (Inherited: 0x268)
struct UPBWarningWidget : UPBUserWidget {
	struct APBCharacter* Character; // 0x268(0x08)

	void K2_VehicleRestart(); // Function ProjectBoundary.PBWarningWidget.K2_VehicleRestart // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_VehicleDown(); // Function ProjectBoundary.PBWarningWidget.K2_VehicleDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ReEnterWorld(); // Function ProjectBoundary.PBWarningWidget.K2_ReEnterWorld // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ReEnterSafeZoom(); // Function ProjectBoundary.PBWarningWidget.K2_ReEnterSafeZoom // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_ReEnterNormalRaderSignalVolume(); // Function ProjectBoundary.PBWarningWidget.K2_ReEnterNormalRaderSignalVolume // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OutOfSafeZoom(); // Function ProjectBoundary.PBWarningWidget.K2_OutOfSafeZoom // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OutOfNormalRaderSignalVolume(); // Function ProjectBoundary.PBWarningWidget.K2_OutOfNormalRaderSignalVolume // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Marked(); // Function ProjectBoundary.PBWarningWidget.K2_Marked // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_MarkCleared(); // Function ProjectBoundary.PBWarningWidget.K2_MarkCleared // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Init(); // Function ProjectBoundary.PBWarningWidget.K2_Init // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_FellOutOfWorld(); // Function ProjectBoundary.PBWarningWidget.K2_FellOutOfWorld // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBWeapon
// Size: 0x1a10 (Inherited: 0x220)
struct APBWeapon : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct UAudioComponent* OverheatAudio; // 0x228(0x08)
	struct APBCharacter* MyPBCharacter; // 0x230(0x08)
	struct USceneComponent* TransformComponent; // 0x238(0x08)
	struct USkeletalMeshComponent* Mesh3P; // 0x240(0x08)
	struct UPBWeaponSkeletalMeshComponent* Mesh1P; // 0x248(0x08)
	struct UPBHeatComponent* HeatComponent; // 0x250(0x08)
	char pad_258[0x10]; // 0x258(0x10)
	struct UAudioComponent* FireAC; // 0x268(0x08)
	struct UAudioComponent* FireAmbientAC; // 0x270(0x08)
	struct UAudioComponent* MeleeAC; // 0x278(0x08)
	struct UAudioComponent* EmptyClipAC; // 0x280(0x08)
	struct UParticleSystemComponent* MuzzlePSC; // 0x288(0x08)
	struct UParticleSystemComponent* MuzzlePSCSecondary; // 0x290(0x08)
	char pad_298[0x18]; // 0x298(0x18)
	int32_t CurrentAmmo; // 0x2b0(0x04)
	int32_t CurrentAmmoInClip; // 0x2b4(0x04)
	char pad_2B8[0x58]; // 0x2b8(0x58)
	char bOverheated : 1; // 0x310(0x01)
	char pad_310_1 : 7; // 0x310(0x01)
	char pad_311[0x27]; // 0x311(0x27)
	struct UPBRecoilComponent* RecoilComponent; // 0x338(0x08)
	char pad_340[0x10]; // 0x340(0x10)
	struct FVector AimToSightSocketOffset; // 0x350(0x0c)
	struct FName SightAimPointSocketName; // 0x35c(0x08)
	struct FName SightAlignSocketName; // 0x364(0x08)
	struct FName AimPointSocketName; // 0x36c(0x08)
	struct FName AttachPointSocketName; // 0x374(0x08)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FPBWeaponPartNetworkConfig PartNetworkConfig; // 0x380(0x58)
	char pad_3D8[0x68]; // 0x3d8(0x68)
	struct TMap<enum class EPBWeaponState, struct FWeaponState> WeaponStatesMap; // 0x440(0x50)
	char pad_490[0x11]; // 0x490(0x11)
	enum class EPBWeaponState CurrentState; // 0x4a1(0x01)
	char pad_4A2[0x6]; // 0x4a2(0x06)
	struct FHandlingConfig WeaponHandlingConfig; // 0x4a8(0x3c8)
	struct FWeaponHUDConfig HUD_Config; // 0x870(0x20)
	struct FAnimationData AnimationData; // 0x890(0x120)
	struct FDebugConfig DebugConfig; // 0x9b0(0x01)
	char pad_9B1[0x57]; // 0x9b1(0x57)
	struct UTextureRenderTarget2D* SmallRenderTarget; // 0xa08(0x08)
	char pad_A10[0x8]; // 0xa10(0x08)
	struct FPBOriginDataBase OriginData; // 0xa18(0x08)
	struct FPBModifyDataBase ModifyData; // 0xa20(0x08)
	struct FPBWeaponConfigRow WeaponConfigFromCSV; // 0xa28(0xf10)
	char pad_1938[0xa8]; // 0x1938(0xa8)
	struct AController* TopOwner; // 0x19e0(0x08)
	char pad_19E8[0x28]; // 0x19e8(0x28)

	void UpdateHeat(float CurrentHeat); // Function ProjectBoundary.PBWeapon.UpdateHeat // (Final|Native|Protected) // @ game+0x11eca70
	void StartMelee(); // Function ProjectBoundary.PBWeapon.StartMelee // (Native|Public|BlueprintCallable) // @ game+0x11ec9d0
	void StartFire(); // Function ProjectBoundary.PBWeapon.StartFire // (Native|Public|BlueprintCallable) // @ game+0x11643c0
	void SetTacReloadIsSkippable(); // Function ProjectBoundary.PBWeapon.SetTacReloadIsSkippable // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec730
	void SetReloadIsSkippable(); // Function ProjectBoundary.PBWeapon.SetReloadIsSkippable // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec710
	void SetReloadIsAllowOtherAction(); // Function ProjectBoundary.PBWeapon.SetReloadIsAllowOtherAction // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec6f0
	void SetPreReloadIsSkippable(); // Function ProjectBoundary.PBWeapon.SetPreReloadIsSkippable // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec6d0
	void SetPostReloadIsSkippable(); // Function ProjectBoundary.PBWeapon.SetPostReloadIsSkippable // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec6b0
	void SetPostFireIsSkippable(); // Function ProjectBoundary.PBWeapon.SetPostFireIsSkippable // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec690
	void SetPartsHidden(bool NewHidden, bool Is1P); // Function ProjectBoundary.PBWeapon.SetPartsHidden // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec5c0
	void SetMuzzleFX(struct UParticleSystem* NewMuzzleFX, bool Is1P); // Function ProjectBoundary.PBWeapon.SetMuzzleFX // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec4f0
	void SetMeleeIsAllowOtherAction(); // Function ProjectBoundary.PBWeapon.SetMeleeIsAllowOtherAction // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec400
	void SetLightingChannels(struct FLightingChannels InChannel); // Function ProjectBoundary.PBWeapon.SetLightingChannels // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec2e0
	void SetIsDropped(bool InNewState); // Function ProjectBoundary.PBWeapon.SetIsDropped // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec250
	void SetFireSound(struct USoundCue* InFireSound); // Function ProjectBoundary.PBWeapon.SetFireSound // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec1c0
	void SetFireCameraShake(struct UCameraShakeBase* NewFireCameraShake); // Function ProjectBoundary.PBWeapon.SetFireCameraShake // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec130
	void SetFireAnimArray(struct TArray<struct FWeaponAnim> NewFireAnimArray); // Function ProjectBoundary.PBWeapon.SetFireAnimArray // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11ec080
	void SetEquipSkippable(); // Function ProjectBoundary.PBWeapon.SetEquipSkippable // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec040
	void SetCurrentAmmoInClip(int32_t Ammo); // Function ProjectBoundary.PBWeapon.SetCurrentAmmoInClip // (Final|Native|Public|BlueprintCallable) // @ game+0x11ebf20
	void SetCurrentAmmo(int32_t Ammo); // Function ProjectBoundary.PBWeapon.SetCurrentAmmo // (Final|Native|Public|BlueprintCallable) // @ game+0x11ebe90
	void SetbInfiniteClip(bool InbInfiniteClip); // Function ProjectBoundary.PBWeapon.SetbInfiniteClip // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec940
	void SetbInfiniteAmmo(bool InbInfiniteAmmo); // Function ProjectBoundary.PBWeapon.SetbInfiniteAmmo // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec8b0
	void SetbAutoFireSwitch(bool InbAutoFireSwitch); // Function ProjectBoundary.PBWeapon.SetbAutoFireSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x11ec820
	void SetAmmoPerClip(int32_t InAmmoPerClip); // Function ProjectBoundary.PBWeapon.SetAmmoPerClip // (Final|Native|Public|BlueprintCallable) // @ game+0x11ebe00
	void ServerTacticalReloadFinished(); // Function ProjectBoundary.PBWeapon.ServerTacticalReloadFinished // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11ebc30
	void ServerStartReload(); // Function ProjectBoundary.PBWeapon.ServerStartReload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11ebbe0
	void ServerStartRefilling(float InRefillDuration); // Function ProjectBoundary.PBWeapon.ServerStartRefilling // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x11ebb20
	void ServerStartFire(); // Function ProjectBoundary.PBWeapon.ServerStartFire // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11ebad0
	void ServerReloadWeapon(); // Function ProjectBoundary.PBWeapon.ServerReloadWeapon // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11eb8b0
	void ServerReloadOneBullet(); // Function ProjectBoundary.PBWeapon.ServerReloadOneBullet // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11eb860
	void ServerReloadingFinished(); // Function ProjectBoundary.PBWeapon.ServerReloadingFinished // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb900
	void ServerRefillAmmo(); // Function ProjectBoundary.PBWeapon.ServerRefillAmmo // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb810
	void ServerPreReloadFinished(); // Function ProjectBoundary.PBWeapon.ServerPreReloadFinished // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb770
	void ServerPrefireFinished(); // Function ProjectBoundary.PBWeapon.ServerPrefireFinished // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb7c0
	void ServerPreEmptyReloadFinished(); // Function ProjectBoundary.PBWeapon.ServerPreEmptyReloadFinished // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb720
	void ServerPostReloadFinished(); // Function ProjectBoundary.PBWeapon.ServerPostReloadFinished // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb680
	void ServerPostfireFinished(); // Function ProjectBoundary.PBWeapon.ServerPostfireFinished // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb6d0
	void ServerPostEmptyReloadFinished(); // Function ProjectBoundary.PBWeapon.ServerPostEmptyReloadFinished // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb630
	void ServerFireBullet(); // Function ProjectBoundary.PBWeapon.ServerFireBullet // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb5e0
	void ServerExitTacticalReload(); // Function ProjectBoundary.PBWeapon.ServerExitTacticalReload // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb590
	void ServerExitReloading(); // Function ProjectBoundary.PBWeapon.ServerExitReloading // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb540
	void ServerExitPreReload(); // Function ProjectBoundary.PBWeapon.ServerExitPreReload // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb4f0
	void ServerExitPreEmptyReload(); // Function ProjectBoundary.PBWeapon.ServerExitPreEmptyReload // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb4a0
	void ServerExitPostReload(); // Function ProjectBoundary.PBWeapon.ServerExitPostReload // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb450
	void ServerExitPostEmptyReload(); // Function ProjectBoundary.PBWeapon.ServerExitPostEmptyReload // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb400
	void ServerEquippingFinished(); // Function ProjectBoundary.PBWeapon.ServerEquippingFinished // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb3b0
	void ServerEnterTacticalReload(); // Function ProjectBoundary.PBWeapon.ServerEnterTacticalReload // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb360
	void ServerEnterReloading(); // Function ProjectBoundary.PBWeapon.ServerEnterReloading // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb310
	void ServerEnterPreReload(); // Function ProjectBoundary.PBWeapon.ServerEnterPreReload // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb270
	void ServerEnterPrefire(); // Function ProjectBoundary.PBWeapon.ServerEnterPrefire // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb2c0
	void ServerEnterPreEmptyReload(); // Function ProjectBoundary.PBWeapon.ServerEnterPreEmptyReload // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb220
	void ServerEnterPostReload(); // Function ProjectBoundary.PBWeapon.ServerEnterPostReload // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb1d0
	void ServerEnterPostFire(); // Function ProjectBoundary.PBWeapon.ServerEnterPostFire // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb180
	void ServerEnterPostEmptyReload(); // Function ProjectBoundary.PBWeapon.ServerEnterPostEmptyReload // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb130
	void ServerEnterIdle(); // Function ProjectBoundary.PBWeapon.ServerEnterIdle // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb0e0
	void ServerEnterFire(); // Function ProjectBoundary.PBWeapon.ServerEnterFire // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb090
	void ServerEnterEquipping(); // Function ProjectBoundary.PBWeapon.ServerEnterEquipping // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eb040
	void ServerEnterEmptyReload(); // Function ProjectBoundary.PBWeapon.ServerEnterEmptyReload // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eaff0
	void ServerEmptyReloadFinished(); // Function ProjectBoundary.PBWeapon.ServerEmptyReloadFinished // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x11eafa0
	void ServerCheckReload(); // Function ProjectBoundary.PBWeapon.ServerCheckReload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11eaf50
	void RefreshMuzzleLocationAndDirection(); // Function ProjectBoundary.PBWeapon.RefreshMuzzleLocationAndDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x11eaf30
	float PlayWeaponAnimationInDuration(struct FWeaponAnim Animation, float InDuration, float StartTime, bool ReversePlay); // Function ProjectBoundary.PBWeapon.PlayWeaponAnimationInDuration // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x11eada0
	void Overheated(); // Function ProjectBoundary.PBWeapon.Overheated // (Final|Native|Protected) // @ game+0x11eacb0
	void OnTacReloadFinished(); // Function ProjectBoundary.PBWeapon.OnTacReloadFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x11eac90
	void OnRep_WeaponState(enum class EPBWeaponState LastState); // Function ProjectBoundary.PBWeapon.OnRep_WeaponState // (Final|Native|Protected) // @ game+0x11eac10
	void OnRep_TopOwner(); // Function ProjectBoundary.PBWeapon.OnRep_TopOwner // (Final|Native|Private) // @ game+0x11eabd0
	void OnRep_PartNetworkConfig(); // Function ProjectBoundary.PBWeapon.OnRep_PartNetworkConfig // (Final|Native|Protected) // @ game+0x11eab50
	void OnRep_MyPBCharacter(); // Function ProjectBoundary.PBWeapon.OnRep_MyPBCharacter // (Final|Native|Protected) // @ game+0x11eab30
	void OnRep_CurrentAmmoInClip(); // Function ProjectBoundary.PBWeapon.OnRep_CurrentAmmoInClip // (Final|Native|Protected) // @ game+0x11eaad0
	void OnRep_CurrentAmmo(); // Function ProjectBoundary.PBWeapon.OnRep_CurrentAmmo // (Final|Native|Protected) // @ game+0x11eaab0
	void OnReloadOneBullet(); // Function ProjectBoundary.PBWeapon.OnReloadOneBullet // (Final|Native|Public|BlueprintCallable) // @ game+0x11eaa90
	void OnReloadInterrupted(); // Function ProjectBoundary.PBWeapon.OnReloadInterrupted // (Final|Native|Public|BlueprintCallable) // @ game+0x11eaa70
	void OnReloadFinished(); // Function ProjectBoundary.PBWeapon.OnReloadFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x11eaa50
	void OnFireTriggered(); // Function ProjectBoundary.PBWeapon.OnFireTriggered // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnFinishedFire(); // Function ProjectBoundary.PBWeapon.OnFinishedFire // (Final|Native|Private) // @ game+0x11eaa30
	void OnEnterFire(); // Function ProjectBoundary.PBWeapon.OnEnterFire // (Final|Native|Private) // @ game+0x11eaa10
	void NotifyUnequipFinished(); // Function ProjectBoundary.PBWeapon.NotifyUnequipFinished // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyUnequip(); // Function ProjectBoundary.PBWeapon.NotifyUnequip // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyRecalculateSpecialPartOffset(); // Function ProjectBoundary.PBWeapon.NotifyRecalculateSpecialPartOffset // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEquipFinished(); // Function ProjectBoundary.PBWeapon.NotifyEquipFinished // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void LoopReloadOneBullet(); // Function ProjectBoundary.PBWeapon.LoopReloadOneBullet // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea9f0
	void K2_UpdateHeat(float CurrentHeat); // Function ProjectBoundary.PBWeapon.K2_UpdateHeat // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCurrentAmmoInClip(int32_t InCurrentAmmoInClip); // Function ProjectBoundary.PBWeapon.K2_UpdateCurrentAmmoInClip // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCurrentAmmo(int32_t InCurrentAmmo); // Function ProjectBoundary.PBWeapon.K2_UpdateCurrentAmmo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StopADS(); // Function ProjectBoundary.PBWeapon.K2_StopADS // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_StartADS(); // Function ProjectBoundary.PBWeapon.K2_StartADS // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Overheated(); // Function ProjectBoundary.PBWeapon.K2_Overheated // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsUndeploying(); // Function ProjectBoundary.PBWeapon.K2_OnHandsUndeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsUndeployed(); // Function ProjectBoundary.PBWeapon.K2_OnHandsUndeployed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsGrabing(); // Function ProjectBoundary.PBWeapon.K2_OnHandsGrabing // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsDeploying(); // Function ProjectBoundary.PBWeapon.K2_OnHandsDeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsDeployed(); // Function ProjectBoundary.PBWeapon.K2_OnHandsDeployed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_InitSimulatedPartsComplete(); // Function ProjectBoundary.PBWeapon.K2_InitSimulatedPartsComplete // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_CoolingDown(); // Function ProjectBoundary.PBWeapon.K2_CoolingDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	bool IsTouchWallMode(); // Function ProjectBoundary.PBWeapon.IsTouchWallMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea990
	bool IsStartADS(); // Function ProjectBoundary.PBWeapon.IsStartADS // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea8c0
	bool IsInReloadState(); // Function ProjectBoundary.PBWeapon.IsInReloadState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea7f0
	void InterruptReload(); // Function ProjectBoundary.PBWeapon.InterruptReload // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea730
	void InitWeapon(struct FPBWeaponPartNetworkConfig InPartSaved, bool bIsOnlyModel); // Function ProjectBoundary.PBWeapon.InitWeapon // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11ea5e0
	void GoFree(); // Function ProjectBoundary.PBWeapon.GoFree // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea540
	struct UPBWeaponPartManager* GetWeaponPartMgr(); // Function ProjectBoundary.PBWeapon.GetWeaponPartMgr // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea520
	float GetWeaponMass(); // Function ProjectBoundary.PBWeapon.GetWeaponMass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea4f0
	int32_t GetWarningAmmo(); // Function ProjectBoundary.PBWeapon.GetWarningAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea4c0
	float GetTimeBetweenShots(); // Function ProjectBoundary.PBWeapon.GetTimeBetweenShots // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea490
	bool GetStateIsSkippable(enum class EPBWeaponState InStateEnum); // Function ProjectBoundary.PBWeapon.GetStateIsSkippable // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea400
	bool GetStateIsAllowOtherAction(enum class EPBWeaponState InStateEnum); // Function ProjectBoundary.PBWeapon.GetStateIsAllowOtherAction // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea370
	bool GetReloadSkippable(); // Function ProjectBoundary.PBWeapon.GetReloadSkippable // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea300
	struct FPBWeaponPartNetworkConfig GetPBWeaponPartSaveConfig(); // Function ProjectBoundary.PBWeapon.GetPBWeaponPartSaveConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11ea1e0
	struct APBCharacter* GetPawnOwner(); // Function ProjectBoundary.PBWeapon.GetPawnOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea240
	struct UMotionControllerComponent* GetMotionController(); // Function ProjectBoundary.PBWeapon.GetMotionController // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea120
	float GetMinSpread(); // Function ProjectBoundary.PBWeapon.GetMinSpread // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea0f0
	struct USkeletalMeshComponent* GetMesh3P(); // Function ProjectBoundary.PBWeapon.GetMesh3P // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea0d0
	struct UPBWeaponSkeletalMeshComponent* GetMesh1P(); // Function ProjectBoundary.PBWeapon.GetMesh1P // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea0b0
	bool GetEquipSkippable(); // Function ProjectBoundary.PBWeapon.GetEquipSkippable // (Final|Native|Public|BlueprintCallable) // @ game+0x11ea080
	struct FString GetCurrentStateString(); // Function ProjectBoundary.PBWeapon.GetCurrentStateString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11ea000
	enum class EPBWeaponState GetCurrentState(); // Function ProjectBoundary.PBWeapon.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11e9fd0
	float GetCurrentSpread(); // Function ProjectBoundary.PBWeapon.GetCurrentSpread // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11e9fa0
	float GetCurrentFatigue(); // Function ProjectBoundary.PBWeapon.GetCurrentFatigue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11e9f80
	int32_t GetCurrentAmmoInClip(); // Function ProjectBoundary.PBWeapon.GetCurrentAmmoInClip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11e9f50
	int32_t GetCurrentAmmo(); // Function ProjectBoundary.PBWeapon.GetCurrentAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11e9f20
	int32_t GetCriticalWarningAmmo(); // Function ProjectBoundary.PBWeapon.GetCriticalWarningAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11e9ef0
	struct FVector GetAimToAlignSocketOffset(); // Function ProjectBoundary.PBWeapon.GetAimToAlignSocketOffset // (Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x11e9ea0
	void FinishState(enum class EPBWeaponState InState); // Function ProjectBoundary.PBWeapon.FinishState // (Final|Native|Public) // @ game+0x11e9e20
	bool ExitCurrentAndSwitchToState(enum class EPBWeaponState NewState); // Function ProjectBoundary.PBWeapon.ExitCurrentAndSwitchToState // (Final|Native|Public|BlueprintCallable) // @ game+0x11e9d90
	void CoolingDown(); // Function ProjectBoundary.PBWeapon.CoolingDown // (Final|Native|Protected) // @ game+0x11e9d70
	void ClientStartReload(); // Function ProjectBoundary.PBWeapon.ClientStartReload // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1195430
	void CalculateAimPointToSightSocketOffset(); // Function ProjectBoundary.PBWeapon.CalculateAimPointToSightSocketOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x11e9d50
	void BoardcastGoFree(struct FTransform FreeTransform); // Function ProjectBoundary.PBWeapon.BoardcastGoFree // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0x11e9c60
	void BindEvent_ADSForward(float ProgressPoint, struct FDelegate Event); // Function ProjectBoundary.PBWeapon.BindEvent_ADSForward // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11e9b60
	void BindEvent_ADSBackward(float ProgressPoint, struct FDelegate Event); // Function ProjectBoundary.PBWeapon.BindEvent_ADSBackward // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11e9a60
	void AttachToMotionController(struct UMotionControllerComponent* mcc); // Function ProjectBoundary.PBWeapon.AttachToMotionController // (Final|Native|Public|BlueprintCallable) // @ game+0x11e99d0
	void ApplyPartModification(); // Function ProjectBoundary.PBWeapon.ApplyPartModification // (Native|Protected|BlueprintCallable) // @ game+0x11e99b0
	bool AddAmmoInClip(); // Function ProjectBoundary.PBWeapon.AddAmmoInClip // (Native|Public|BlueprintCallable) // @ game+0x11e9980
	void AccumulateHeat(float InHeat); // Function ProjectBoundary.PBWeapon.AccumulateHeat // (Final|Native|Protected) // @ game+0x11e9900
};

// Class ProjectBoundary.PBWeapon_Instant
// Size: 0x1a60 (Inherited: 0x1a10)
struct APBWeapon_Instant : APBWeapon {
	bool DebugDrawEnable; // 0x1a08(0x01)
	struct FInstantWeaponData InstantConfig; // 0x1a10(0x20)
	struct APBImpactEffect* ImpactTemplate; // 0x1a30(0x08)
	struct UParticleSystem* TrailFX; // 0x1a38(0x08)
	struct FName TrailTargetParam; // 0x1a40(0x08)
	struct FInstantHitInfo HitNotify; // 0x1a48(0x14)
	char pad_1A5D[0x3]; // 0x1a5d(0x03)

	void ServerNotifyMiss(struct FVector_NetQuantizeNormal ShootDir, int32_t RandomSeed, float ReticleSpread); // Function ProjectBoundary.PBWeapon_Instant.ServerNotifyMiss // (Net|Native|Event|Protected|NetServer|NetValidate) // @ game+0x11f42e0
	void ServerNotifyHit(struct FHitResult Impact, struct FVector_NetQuantizeNormal ShootDir, int32_t RandomSeed, float ReticleSpread); // Function ProjectBoundary.PBWeapon_Instant.ServerNotifyHit // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x11f4110
	void OnRep_HitNotify(); // Function ProjectBoundary.PBWeapon_Instant.OnRep_HitNotify // (Final|Native|Protected) // @ game+0x11f3a90
};

// Class ProjectBoundary.PBWeapon_Projectile
// Size: 0x1a30 (Inherited: 0x1a10)
struct APBWeapon_Projectile : APBWeapon {
	bool DebugDrawEnable; // 0x1a08(0x01)
	struct FProjectileWeaponData ProjectileConfig; // 0x1a10(0x20)

	void ServerFireProjectile(struct FVector Origin, struct FVector_NetQuantizeNormal ShootDir); // Function ProjectBoundary.PBWeapon_Projectile.ServerFireProjectile // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x11f3fd0
};

// Class ProjectBoundary.PBWeapon_RayProjectile
// Size: 0x1a40 (Inherited: 0x1a10)
struct APBWeapon_RayProjectile : APBWeapon {
	struct TArray<struct FPBRayProjectileConfigRow_Replace> RayProjectileConfigArray; // 0x1a10(0x10)
	struct TArray<int32_t> ProjectileSequence; // 0x1a20(0x10)
	char pad_1A30[0x10]; // 0x1a30(0x10)

	void ServerFireMultiProjectile(int32_t InRandomSeed, struct FVector Dir, struct FVector Origin, int32_t ProjectileIndex); // Function ProjectBoundary.PBWeapon_RayProjectile.ServerFireMultiProjectile // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x11f3e10
	void K2_FireMultiProjectile(); // Function ProjectBoundary.PBWeapon_RayProjectile.K2_FireMultiProjectile // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	struct TArray<int32_t> GetCustomizedProjectileSequence(); // Function ProjectBoundary.PBWeapon_RayProjectile.GetCustomizedProjectileSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11f27f0
	void BroadcastFireMultiProjectile(int32_t InRandomSeed, struct FVector Dir, struct FVector Origin, int32_t ProjectileIndex); // Function ProjectBoundary.PBWeapon_RayProjectile.BroadcastFireMultiProjectile // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0x11f1e80
};

// Class ProjectBoundary.PBWeapon_Shotgun
// Size: 0x1a40 (Inherited: 0x1a30)
struct APBWeapon_Shotgun : APBWeapon_Projectile {
	struct FShotgunData ShotgunConfig; // 0x1a30(0x0c)
	char pad_1A3C[0x4]; // 0x1a3c(0x04)
};

// Class ProjectBoundary.PBWeaponCapture
// Size: 0x248 (Inherited: 0x220)
struct APBWeaponCapture : AActor {
	struct TArray<struct APBWeapon*> WeaponArray; // 0x220(0x10)
	struct TArray<struct FWeaponCaptureTask> PendingCaptureTaskArray; // 0x230(0x10)
	bool bIsProcessingTask; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	int32_t StepIndex; // 0x244(0x04)

	void StartTask(); // Function ProjectBoundary.PBWeaponCapture.StartTask // (Final|Native|Protected|BlueprintCallable) // @ game+0x11f4d90
	void K2_StartCaptureTask(); // Function ProjectBoundary.PBWeaponCapture.K2_StartCaptureTask // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	struct TArray<struct FWeaponCaptureTask> GetWeaponTaskArray(); // Function ProjectBoundary.PBWeaponCapture.GetWeaponTaskArray // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11f3740
	void EndTask(); // Function ProjectBoundary.PBWeaponCapture.EndTask // (Final|Native|Protected|BlueprintCallable) // @ game+0x11f2450
	void EgoismCaptureWeapon(struct UObject* WeaponClass, struct FPBWeaponPartNetworkConfig PartConfig, struct UTextureRenderTarget2D* NormalRT, struct UTextureRenderTarget2D* NormalDepthRT, struct UTextureRenderTarget2D* SmallRT, struct UTextureRenderTarget2D* SmallDepthRT); // Function ProjectBoundary.PBWeaponCapture.EgoismCaptureWeapon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11f2200
};

// Class ProjectBoundary.PBWeaponComponentWidget
// Size: 0x2b8 (Inherited: 0x2b8)
struct UPBWeaponComponentWidget : UPBRoleComponentBaseWidget {
};

// Class ProjectBoundary.PBWeaponSkinBase
// Size: 0x30 (Inherited: 0x30)
struct UPBWeaponSkinBase : UPBEquipmentSkinBase {
};

// Class ProjectBoundary.PBWeaponCrosshairSkin
// Size: 0x80 (Inherited: 0x30)
struct UPBWeaponCrosshairSkin : UPBWeaponSkinBase {
	struct TMap<struct FName, struct FPBSkinMaterialDetailV1> SlotAndMaterialMap; // 0x30(0x50)
};

// Class ProjectBoundary.PBWeaponCrossHairWidget
// Size: 0x268 (Inherited: 0x268)
struct UPBWeaponCrossHairWidget : UPBUserWidget {
};

// Class ProjectBoundary.PBWeaponInfoWidget
// Size: 0x2a8 (Inherited: 0x268)
struct UPBWeaponInfoWidget : UPBUserWidget {
	struct FPBWeaponInfo_UI WeaponInfoUI; // 0x268(0x30)
	struct TArray<float> SavedWeaponInfo; // 0x298(0x10)

	void RefreshTestWeaponInfo(struct FName InWeaponId, enum class EPBSlotType InSlotType); // Function ProjectBoundary.PBWeaponInfoWidget.RefreshTestWeaponInfo // (Final|Native|Protected) // @ game+0x11f3bc0
	void K2_SetWeaponInfo(); // Function ProjectBoundary.PBWeaponInfoWidget.K2_SetWeaponInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
};

// Class ProjectBoundary.PBWeaponOrnamentSkin
// Size: 0x40 (Inherited: 0x30)
struct UPBWeaponOrnamentSkin : UPBWeaponSkinBase {
	struct FName MeshSocketName; // 0x30(0x08)
	struct APBOrnamentBase* WeaponOrnamentClass; // 0x38(0x08)
};

// Class ProjectBoundary.PBWeaponPartManager
// Size: 0xd0 (Inherited: 0x30)
struct UPBWeaponPartManager : UGameInstanceSubsystem {
	struct TMap<struct APBWeapon*, struct FWeaponSlotPartInfo> WeaponSlotMap; // 0x30(0x50)
	char pad_80[0x50]; // 0x80(0x50)

	struct TMap<enum class EPBPartSlotType, struct UPartDataHolderComponent*> GetWeaponSlotPartMap(struct APBWeapon* InWeapon); // Function ProjectBoundary.PBWeaponPartManager.GetWeaponSlotPartMap // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11f35e0
	struct UPartDataHolderComponent* GetPartClassByID(struct FName InPartId); // Function ProjectBoundary.PBWeaponPartManager.GetPartClassByID // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x11f3430
};

// Class ProjectBoundary.PBWeaponPartSkin_Base
// Size: 0x30 (Inherited: 0x30)
struct UPBWeaponPartSkin_Base : UPBWeaponSkinBase {
};

// Class ProjectBoundary.PBWeaponPartSkin_Mesh
// Size: 0x30 (Inherited: 0x30)
struct UPBWeaponPartSkin_Mesh : UPBWeaponPartSkin_Base {
};

// Class ProjectBoundary.PBWeaponPartSkin_MasterMesh
// Size: 0x38 (Inherited: 0x30)
struct UPBWeaponPartSkin_MasterMesh : UPBWeaponPartSkin_Mesh {
	struct UStreamableRenderAsset* MeshAsset; // 0x30(0x08)
};

// Class ProjectBoundary.PBWeaponPartSkin_Material
// Size: 0x88 (Inherited: 0x30)
struct UPBWeaponPartSkin_Material : UPBWeaponPartSkin_Base {
	struct UPBWeaponPartSkin_Mesh* WeaponPartMesh; // 0x30(0x08)
	struct TMap<struct FName, struct FPBSkinMaterialDetailV1> SlotAndMaterialInfoMap; // 0x38(0x50)
};

// Class ProjectBoundary.PBWeaponPartSkin_OriginalMesh
// Size: 0x30 (Inherited: 0x30)
struct UPBWeaponPartSkin_OriginalMesh : UPBWeaponPartSkin_Mesh {
};

// Class ProjectBoundary.PBWeaponSkeletalMeshComponent
// Size: 0xf40 (Inherited: 0xf30)
struct UPBWeaponSkeletalMeshComponent : UPBSkeletalMeshComponent {
	struct FPBWeaponSkeletalFOVConfig Config; // 0xf28(0x08)
	float CurrentFOVAngle; // 0xf30(0x04)
	char pad_F3C[0x4]; // 0xf3c(0x04)
};

// Class ProjectBoundary.PBWelcomeMenuWidget
// Size: 0x298 (Inherited: 0x268)
struct UPBWelcomeMenuWidget : UPBUserWidget {
	struct UPBLogin* LoginPanel; // 0x268(0x08)
	struct UPBRealName* RealNamePanel; // 0x270(0x08)
	struct UPBAntiIndulge* AntiIndulgePanel; // 0x278(0x08)
	struct UPBEULABorad* EULAPanel; // 0x280(0x08)
	struct UPBEnterGame* EnterGamePanel; // 0x288(0x08)
	char pad_290[0x8]; // 0x290(0x08)

	void TryEnterMainMenu(); // Function ProjectBoundary.PBWelcomeMenuWidget.TryEnterMainMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4db0
	void ShowSpray(); // Function ProjectBoundary.PBWelcomeMenuWidget.ShowSpray // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4ce0
	void ShowRealNamePanel(); // Function ProjectBoundary.PBWelcomeMenuWidget.ShowRealNamePanel // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4cc0
	void ShowLoginPanel(); // Function ProjectBoundary.PBWelcomeMenuWidget.ShowLoginPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4ca0
	void ShowEULAPanel(); // Function ProjectBoundary.PBWelcomeMenuWidget.ShowEULAPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4c60
	void ShowEnterGamePanel(); // Function ProjectBoundary.PBWelcomeMenuWidget.ShowEnterGamePanel // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4c80
	void ShowAntiIndulgePanel(); // Function ProjectBoundary.PBWelcomeMenuWidget.ShowAntiIndulgePanel // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4c40
	bool ShouldShowPlayLocallyButton(); // Function ProjectBoundary.PBWelcomeMenuWidget.ShouldShowPlayLocallyButton // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11f4c10
	void OnStartOnlinePrivilegeTaskSuccess(); // Function ProjectBoundary.PBWelcomeMenuWidget.OnStartOnlinePrivilegeTaskSuccess // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnStartOnlinePrivilegeTaskStart(); // Function ProjectBoundary.PBWelcomeMenuWidget.OnStartOnlinePrivilegeTaskStart // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnStartOnlinePrivilegeTaskFailed(enum class EPrivilegeResults ErrorID); // Function ProjectBoundary.PBWelcomeMenuWidget.OnStartOnlinePrivilegeTaskFailed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnConnectToPBServerTaskStart(); // Function ProjectBoundary.PBWelcomeMenuWidget.OnConnectToPBServerTaskStart // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnConnectToPBServerTaskCompleted(int32_t ErrorCode); // Function ProjectBoundary.PBWelcomeMenuWidget.OnConnectToPBServerTaskCompleted // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnUnderageLimittedInGame(); // Function ProjectBoundary.PBWelcomeMenuWidget.NotifyOnUnderageLimittedInGame // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void LoginRandomAccount(); // Function ProjectBoundary.PBWelcomeMenuWidget.LoginRandomAccount // (Final|Native|Public|BlueprintCallable) // @ game+0x11f39e0
	void K2_ShowSpray(); // Function ProjectBoundary.PBWelcomeMenuWidget.K2_ShowSpray // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void CheckCanPlay(); // Function ProjectBoundary.PBWelcomeMenuWidget.CheckCanPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x11f2010
};

// Class ProjectBoundary.PBWidgetSwitcher
// Size: 0x140 (Inherited: 0x138)
struct UPBWidgetSwitcher : UWidgetSwitcher {
	float Speed; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// Class ProjectBoundary.PBWorldManager
// Size: 0x250 (Inherited: 0x220)
struct APBWorldManager : AActor {
	float ServerElapsedTime; // 0x220(0x04)
	char pad_224[0xc]; // 0x224(0x0c)
	struct APBAchievementManager* PBAchievementManager; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)
	struct TArray<struct AActor*> ProcPlanePool; // 0x240(0x10)

	void OnRep_ServerElapsedTime(); // Function ProjectBoundary.PBWorldManager.OnRep_ServerElapsedTime // (Final|Native|Public) // @ game+0x11f3ab0
};

// Class ProjectBoundary.PBWorldManagerV2
// Size: 0x68 (Inherited: 0x30)
struct UPBWorldManagerV2 : UWorldSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
	struct TArray<struct APBProcPlane*> ProcPlanePool; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)

	bool CheckIsAllZonesCapturedByEnemy(); // Function ProjectBoundary.PBWorldManagerV2.CheckIsAllZonesCapturedByEnemy // (Final|Native|Public|BlueprintCallable) // @ game+0x11f2060
	bool CheckIsAllZonesCapturedByAlly(); // Function ProjectBoundary.PBWorldManagerV2.CheckIsAllZonesCapturedByAlly // (Final|Native|Public|BlueprintCallable) // @ game+0x11f2030
};

// Class ProjectBoundary.PredictingAimingComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPredictingAimingComponent : UActorComponent {
};

// Class ProjectBoundary.ProjectBoundaryInstance
// Size: 0x948 (Inherited: 0x1a8)
struct UProjectBoundaryInstance : UGameInstance {
	char pad_1A8[0x10]; // 0x1a8(0x10)
	struct FString WelcomeScreenMap; // 0x1b8(0x10)
	struct FString MainMenuMap; // 0x1c8(0x10)
	struct FString VRMap; // 0x1d8(0x10)
	char SendGameInfoToServer : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct FString DataServerUrl; // 0x1f0(0x10)
	char bNeedToConnectToPSN : 1; // 0x200(0x01)
	char pad_200_1 : 7; // 0x200(0x01)
	char pad_201[0x2eb]; // 0x201(0x2eb)
	struct FVector2D CameraAcceleration; // 0x4ec(0x08)
	struct FVector2D AimingSpeedModifier; // 0x4f4(0x08)
	char pad_4FC[0x3c]; // 0x4fc(0x3c)
	struct FString DefaultStartMapName; // 0x538(0x10)
	struct FString WaitingToJoinMapName; // 0x548(0x10)
	char pad_558[0x2c]; // 0x558(0x2c)
	int32_t MinStartPlayerNum; // 0x584(0x04)
	int32_t WaitingStartDelayTime; // 0x588(0x04)
	int32_t WarmUpStartMinTime; // 0x58c(0x04)
	char pad_590[0x10]; // 0x590(0x10)
	struct TArray<struct FPBShowItemInfo> itemInfo; // 0x5a0(0x10)
	float KillCoefficient; // 0x5b0(0x04)
	float DeathCoefficient; // 0x5b4(0x04)
	float AssistCoefficient; // 0x5b8(0x04)
	float SafeAirPressurePercentage; // 0x5bc(0x04)
	float HitTagInvalidTime; // 0x5c0(0x04)
	float AssistTagInvalidTime; // 0x5c4(0x04)
	float MaxDmgPlayerTagInvalidTime; // 0x5c8(0x04)
	float AttackDuration; // 0x5cc(0x04)
	float BackstabMinAngle; // 0x5d0(0x04)
	int32_t DelayStartVoteMapTime; // 0x5d4(0x04)
	int32_t VoteMapTime; // 0x5d8(0x04)
	float DeathShowTime; // 0x5dc(0x04)
	struct UPBUserWidget* ControlReconnectWidgetClass; // 0x5e0(0x08)
	char pad_5E8[0x8]; // 0x5e8(0x08)
	struct UPBConfirmationWidget* ShowMessageWidgetClass; // 0x5f0(0x08)
	struct UPBUserWidget* LocalGameMenu; // 0x5f8(0x08)
	struct UPBOnlineAchievementManager* PBOnlineAchievementManagerClass; // 0x600(0x08)
	bool IsReloadMap; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)
	struct UPBUserWidget* LoadingScreenWidgetTemplate; // 0x610(0x08)
	enum class EOnlineMode CurrentOnlineMode; // 0x618(0x01)
	char pad_619[0x7]; // 0x619(0x07)
	struct UPBOnlineAchievementManager* PBOnlineAchievementManager; // 0x620(0x08)
	struct FMatchResultInfo LocalMatchResultInfo; // 0x628(0x130)
	int32_t BeginExp; // 0x758(0x04)
	char pad_75C[0x4]; // 0x75c(0x04)
	struct FMatchDataTest MatchDataTest; // 0x760(0x48)
	char pad_7A8[0x18]; // 0x7a8(0x18)
	struct FString DefaultServerGameType; // 0x7c0(0x10)
	struct FString LogicServerURLCN; // 0x7d0(0x10)
	struct FString LogicServerURLOS; // 0x7e0(0x10)
	struct FString LogicServerURLLocal; // 0x7f0(0x10)
	bool bLogicServerUseMock; // 0x800(0x01)
	char pad_801[0x7]; // 0x801(0x07)
	struct FString MockLogicServerURL; // 0x808(0x10)
	int64_t LogicServerTimeout; // 0x818(0x08)
	char pad_820[0x20]; // 0x820(0x20)
	struct ULogicServerCache* LogicServerCacheInstance; // 0x840(0x08)
	struct UMatchmakingService* MatchmakingService; // 0x848(0x08)
	char pad_850[0x18]; // 0x850(0x18)
	struct FMulticastInlineDelegate OnLogicServerStateChangedDelegate; // 0x868(0x10)
	char pad_878[0x20]; // 0x878(0x20)
	char IsSetTestSlotName : 1; // 0x898(0x01)
	char EnableDeathHotDotRecording : 1; // 0x898(0x01)
	char pad_898_2 : 6; // 0x898(0x01)
	char pad_899[0x7]; // 0x899(0x07)
	struct FString UserSetNickName; // 0x8a0(0x10)
	char LTRTtoRefreshPlayerInfo : 1; // 0x8b0(0x01)
	char pad_8B0_1 : 7; // 0x8b0(0x01)
	enum class EPBClientCurrentVerifyingState CurrentVerifyingState; // 0x8b1(0x01)
	char bOutOfHealthyGameTime : 1; // 0x8b2(0x01)
	char pad_8B2_1 : 7; // 0x8b2(0x01)
	char pad_8B3[0x5]; // 0x8b3(0x05)
	struct FMulticastInlineDelegate OnCheckAvailabilityResult; // 0x8b8(0x10)
	char pad_8C8[0x8]; // 0x8c8(0x08)
	struct UPBVivoxClientManager* PBVivoxClientManager; // 0x8d0(0x08)
	struct UPBVivoxServerManager* PBVivoxServerManager; // 0x8d8(0x08)
	char pad_8E0[0x8]; // 0x8e0(0x08)
	struct FText VersionInfo; // 0x8e8(0x18)
	struct UPBOptions* PBOptions; // 0x900(0x08)
	char pad_908[0x18]; // 0x908(0x18)
	struct APBLobbyBeaconClient* LobbyBeaconClient; // 0x920(0x08)
	char pad_928[0x20]; // 0x928(0x20)

	void ShowUserProfileDialog(struct APBPlayerState* PBPlayerState); // Function ProjectBoundary.ProjectBoundaryInstance.ShowUserProfileDialog // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4d00
	void SetWinKillNum(int32_t InNum); // Function ProjectBoundary.ProjectBoundaryInstance.SetWinKillNum // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4b80
	void SetUserNickName(struct FString InNickName); // Function ProjectBoundary.ProjectBoundaryInstance.SetUserNickName // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4a90
	void SetShowSummaryFlag(bool NewShow); // Function ProjectBoundary.ProjectBoundaryInstance.SetShowSummaryFlag // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4a00
	void SetOpenChangeTeamNum(bool bOpen); // Function ProjectBoundary.ProjectBoundaryInstance.SetOpenChangeTeamNum // (Final|Native|Public|BlueprintCallable) // @ game+0x11f48e0
	void SetOpenCareerDevelopment(bool bOpen); // Function ProjectBoundary.ProjectBoundaryInstance.SetOpenCareerDevelopment // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4850
	void SetOnlineMode(enum class EOnlineMode InOnlineMode); // Function ProjectBoundary.ProjectBoundaryInstance.SetOnlineMode // (Final|Native|Public|BlueprintCallable) // @ game+0x11f47d0
	void SetHackFireSwitch(bool InState); // Function ProjectBoundary.ProjectBoundaryInstance.SetHackFireSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4740
	void SetEndgameCompensation(bool bSet); // Function ProjectBoundary.ProjectBoundaryInstance.SetEndgameCompensation // (Final|Native|Public|BlueprintCallable) // @ game+0x11f46b0
	void SetEliminationRound(int32_t InRoundNum); // Function ProjectBoundary.ProjectBoundaryInstance.SetEliminationRound // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4620
	void SetChangeMapArray(bool bSet); // Function ProjectBoundary.ProjectBoundaryInstance.SetChangeMapArray // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4590
	void SetCDKey(struct FString InCDKey); // Function ProjectBoundary.ProjectBoundaryInstance.SetCDKey // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4460
	void SetCanDamageAlly(bool bCan); // Function ProjectBoundary.ProjectBoundaryInstance.SetCanDamageAlly // (Final|Native|Public|BlueprintCallable) // @ game+0x11f4500
	void SaveMatchResultInfo(struct FMatchResultInfo InInfo); // Function ProjectBoundary.ProjectBoundaryInstance.SaveMatchResultInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11f3c90
	void ReadUserAndPlayersScoreFromBoard(int32_t InRangStart, int32_t InRangNum); // Function ProjectBoundary.ProjectBoundaryInstance.ReadUserAndPlayersScoreFromBoard // (Final|Native|Public|BlueprintCallable) // @ game+0x11f3af0
	void PlatformHandleSplashScreen(bool ShowSplashScreen); // Function ProjectBoundary.ProjectBoundaryInstance.PlatformHandleSplashScreen // (Final|Native|Public|BlueprintCallable) // @ game+0x11b9ab0
	void PBLobbyInfoUpdate__DelegateSignature(); // DelegateFunction ProjectBoundary.ProjectBoundaryInstance.PBLobbyInfoUpdate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1556ec0
	void OnUnderagePlayTimeLimitReachDelegate(); // Function ProjectBoundary.ProjectBoundaryInstance.OnUnderagePlayTimeLimitReachDelegate // (Final|Native|Private) // @ game+0x11f3ad0
	void OnLogicServerDisconnect(bool bConfirm); // Function ProjectBoundary.ProjectBoundaryInstance.OnLogicServerDisconnect // (Final|Native|Public) // @ game+0x11f3a00
	void NotifyBPOnStartSetting(); // Function ProjectBoundary.ProjectBoundaryInstance.NotifyBPOnStartSetting // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBPOnStartInputSetting(); // Function ProjectBoundary.ProjectBoundaryInstance.NotifyBPOnStartInputSetting // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	bool IsServerSearch(); // Function ProjectBoundary.ProjectBoundaryInstance.IsServerSearch // (Final|Native|Public|BlueprintCallable) // @ game+0x11f39b0
	bool IsOverseasEdition(); // Function ProjectBoundary.ProjectBoundaryInstance.IsOverseasEdition // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11f3980
	bool IsOpenCareerDevelopment(); // Function ProjectBoundary.ProjectBoundaryInstance.IsOpenCareerDevelopment // (Final|Native|Public|BlueprintCallable) // @ game+0x11f3950
	bool IsNeedCDKey(); // Function ProjectBoundary.ProjectBoundaryInstance.IsNeedCDKey // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11f3930
	void GotoState(struct FName NewState); // Function ProjectBoundary.ProjectBoundaryInstance.GotoState // (Final|Native|Public|BlueprintCallable) // @ game+0x11f38a0
	int32_t GetWinKillNum(); // Function ProjectBoundary.ProjectBoundaryInstance.GetWinKillNum // (Final|Native|Public|BlueprintCallable) // @ game+0x11f3880
	bool GetShowSummaryFlag(); // Function ProjectBoundary.ProjectBoundaryInstance.GetShowSummaryFlag // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11f35c0
	struct UPBPersistentUser* GetPersistentUser(); // Function ProjectBoundary.ProjectBoundaryInstance.GetPersistentUser // (Final|Native|Public|BlueprintCallable) // @ game+0x11f3590
	struct FString GetPendingConnectIpAddr(); // Function ProjectBoundary.ProjectBoundaryInstance.GetPendingConnectIpAddr // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x11f34d0
	bool GetOpenChangeTeamNum(); // Function ProjectBoundary.ProjectBoundaryInstance.GetOpenChangeTeamNum // (Final|Native|Public|BlueprintCallable) // @ game+0x11f3400
	enum class EOnlineMode GetOnlineMode(); // Function ProjectBoundary.ProjectBoundaryInstance.GetOnlineMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11f33d0
	struct UPBOnlineAchievementManager* GetOnlineAchievementManager(); // Function ProjectBoundary.ProjectBoundaryInstance.GetOnlineAchievementManager // (Final|Native|Public|BlueprintCallable) // @ game+0x11f33b0
	struct FText GetModeDisplayName(struct FString ModeName); // Function ProjectBoundary.ProjectBoundaryInstance.GetModeDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x11f3250
	struct UTexture2D* GetMapSmallImage(struct FString MapName); // Function ProjectBoundary.ProjectBoundaryInstance.GetMapSmallImage // (Final|Native|Public|BlueprintCallable) // @ game+0x11f3150
	struct UTexture2D* GetMapSelectImage(struct FString MapName); // Function ProjectBoundary.ProjectBoundaryInstance.GetMapSelectImage // (Final|Native|Public|BlueprintCallable) // @ game+0x11f3050
	struct FText GetMapDisplayName(struct FString MapName); // Function ProjectBoundary.ProjectBoundaryInstance.GetMapDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x11f2ef0
	struct FPBLobbyInfo_UI GetLobbyInfo(); // Function ProjectBoundary.ProjectBoundaryInstance.GetLobbyInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11f2dc0
	void GetLevelInfoByEXP(int32_t InBeginEXP, int32_t InExp, struct FExpLevelInfo OutInfo); // Function ProjectBoundary.ProjectBoundaryInstance.GetLevelInfoByEXP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11f2c50
	struct UTexture2D* GetLevelImage(int32_t Level); // Function ProjectBoundary.ProjectBoundaryInstance.GetLevelImage // (Final|Native|Public|BlueprintCallable) // @ game+0x11f2bb0
	struct TArray<struct FPBShowItemInfo> GetItemInfo(struct FString ItemTag); // Function ProjectBoundary.ProjectBoundaryInstance.GetItemInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x11f2ab0
	bool GetHackFireSwitch(); // Function ProjectBoundary.ProjectBoundaryInstance.GetHackFireSwitch // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11f2a80
	struct TArray<struct FGameModeMap> GetGameModeMap(struct FString ModeName); // Function ProjectBoundary.ProjectBoundaryInstance.GetGameModeMap // (Final|Native|Public|BlueprintCallable) // @ game+0x11f28e0
	bool GetEndgameCompensation(); // Function ProjectBoundary.ProjectBoundaryInstance.GetEndgameCompensation // (Final|Native|Public|BlueprintCallable) // @ game+0x11f28b0
	struct UPBMainMenuWidget* GetCurrentMenuWidget(); // Function ProjectBoundary.ProjectBoundaryInstance.GetCurrentMenuWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11f27c0
	bool GetChangeMapArray(); // Function ProjectBoundary.ProjectBoundaryInstance.GetChangeMapArray // (Final|Native|Public|BlueprintCallable) // @ game+0x11f2790
	struct FString GetCDKey(); // Function ProjectBoundary.ProjectBoundaryInstance.GetCDKey // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x11f2730
	bool GetCanDamageAlly(); // Function ProjectBoundary.ProjectBoundaryInstance.GetCanDamageAlly // (Final|Native|Public|BlueprintCallable) // @ game+0x11f2760
	struct FText GetArea(); // Function ProjectBoundary.ProjectBoundaryInstance.GetArea // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x11f2690
	void GetAllPlayerScoreInfo(struct TMap<struct FName, struct FPBPlayerScore> PlayerScoreInfo); // Function ProjectBoundary.ProjectBoundaryInstance.GetAllPlayerScoreInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11f2590
	void GetAllPlayerRankInfo(struct TMap<struct FName, struct FPBRankList> RankInfo); // Function ProjectBoundary.ProjectBoundaryInstance.GetAllPlayerRankInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11f2470
	void DisplayFriendRequestDialog(struct APBPlayerState* PBPlayerState); // Function ProjectBoundary.ProjectBoundaryInstance.DisplayFriendRequestDialog // (Final|Native|Public|BlueprintCallable) // @ game+0x11f2170
	void ConnectToGameServerDirectly(struct FString InIpAddr); // Function ProjectBoundary.ProjectBoundaryInstance.ConnectToGameServerDirectly // (Final|Exec|Native|Public) // @ game+0x11f20d0
	void ClearSameNameGameSession(); // Function ProjectBoundary.ProjectBoundaryInstance.ClearSameNameGameSession // (Final|Native|Public|BlueprintCallable) // @ game+0x11f20b0
	void CleanupSessionOnReturnToMenu(); // Function ProjectBoundary.ProjectBoundaryInstance.CleanupSessionOnReturnToMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x11f2090
	void CheckAvailability(); // Function ProjectBoundary.ProjectBoundaryInstance.CheckAvailability // (Final|Native|Public|BlueprintCallable) // @ game+0x11f1ff0
};

// Class ProjectBoundary.ProjectBoundarySession
// Size: 0x350 (Inherited: 0x238)
struct AProjectBoundarySession : AGameSession {
	struct APBLobbyBeaconListener* BeaconHostListener; // 0x238(0x08)
	struct APBLobbyBeaconHost* LobbyBeaconHost; // 0x240(0x08)
	char pad_248[0x108]; // 0x248(0x108)
};

// Class ProjectBoundary.ProjectBoundaryUserSettings
// Size: 0x128 (Inherited: 0x120)
struct UProjectBoundaryUserSettings : UGameUserSettings {
	int32_t GraphicsQuality; // 0x120(0x04)
	bool bIsLanMatch; // 0x124(0x01)
	bool bIsDedicatedServer; // 0x125(0x01)
	char pad_126[0x2]; // 0x126(0x02)
};

// Class ProjectBoundary.ProjectBoundaryViewportClient
// Size: 0x3e0 (Inherited: 0x360)
struct UProjectBoundaryViewportClient : UGameViewportClient {
	struct TMap<struct ULocalPlayer*, struct FPlayerOverlays> PlayerOverlaysMap; // 0x360(0x50)
	char pad_3B0[0x20]; // 0x3b0(0x20)
	struct UPBUserWidget* LoadingScreenWidget; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)

	void SetLayerVisibility(struct UObject* WorldContextObject, struct APlayerController* Player, enum class EWidgetContainerType Type, enum class ESlateVisibility InVisibility); // Function ProjectBoundary.ProjectBoundaryViewportClient.SetLayerVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11f84c0
};

// Class ProjectBoundary.RayProjectileManager
// Size: 0x80 (Inherited: 0x30)
struct URayProjectileManager : UWorldSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct FRayObjectPoolSettings RayObjectPollSettingConfig; // 0x38(0x10)
	struct TArray<struct APBRayProjectile*> BulletsPool; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)
};

// Class ProjectBoundary.ServerStartGameMode
// Size: 0x308 (Inherited: 0x308)
struct AServerStartGameMode : AGameMode {
};

// Class ProjectBoundary.SoundNodeLocalPlayer
// Size: 0x48 (Inherited: 0x48)
struct USoundNodeLocalPlayer : USoundNode {
};

// Class ProjectBoundary.UnityMultiplayQoSCollector
// Size: 0x40 (Inherited: 0x40)
struct UUnityMultiplayQoSCollector : UMatchmakingQoSCollector {
};

// Class ProjectBoundary.UnityMultiplayService
// Size: 0x1d8 (Inherited: 0x40)
struct UUnityMultiplayService : UMatchmakingService {
	char pad_40[0x198]; // 0x40(0x198)
};

