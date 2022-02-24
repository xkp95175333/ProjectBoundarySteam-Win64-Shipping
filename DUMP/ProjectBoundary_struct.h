// Enum ProjectBoundary.EPBNavigationQueryStatus
enum class EPBNavigationQueryStatus : uint8 {
	Unscheduled,
	InProgress,
	Success,
	Failure,
	EPBNavigationQueryStatus_MAX,
};

// Enum ProjectBoundary.EPBAdultVerifyStatus
enum class EPBAdultVerifyStatus : uint8 {
	NotNeedVerify,
	NeedVerify,
	AdultVerify,
	UnderageVerify,
	Max,
};

// Enum ProjectBoundary.EPBSkinClass
enum class EPBSkinClass : uint8 {
	Paint,
	Ornaments,
	SpecialSlot,
	Max,
};

// Enum ProjectBoundary.EPBCharacterSlotType
enum class EPBCharacterSlotType : uint8 {
	CharacterArmBadge,
	HeadAccessory,
	Spacesuit,
	PBCharacterSlotType_MAX,
	EPBCharacterSlotType_MAX,
};

// Enum ProjectBoundary.EPBPartSlotType
enum class EPBPartSlotType : uint8 {
	UnexistedSlot,
	Muzzle,
	Barrel,
	HandGuard,
	Receiver_Upper,
	Grip,
	Sight_Optical,
	Pointer,
	Sight_Iron,
	AmmoStorageDevice,
	Stock,
	SlotTypeMax,
	ReceiverMain,
	Max,
};

// Enum ProjectBoundary.EPBGameResult
enum class EPBGameResult : uint8 {
	Won,
	Lost,
	Draw,
	Suspend,
	None,
	EPBGameResult_MAX,
};

// Enum ProjectBoundary.EPBHitZone
enum class EPBHitZone : uint8 {
	Pelvis,
	Head,
	Face,
	Body,
	Chest,
	Tripe,
	Hip,
	UpperArm,
	ForeArm,
	Hand,
	Thigh,
	Shank,
	Foot,
	Other,
	MAX,
};

// Enum ProjectBoundary.EPBItemGradeType
enum class EPBItemGradeType : uint8 {
	White,
	Green,
	Blue,
	Purple,
	Pink,
	Gold,
	Max,
};

// Enum ProjectBoundary.EPBSlotType
enum class EPBSlotType : uint8 {
	None,
	FirstWeapon,
	SecondWeapon,
	MobilityModule,
	CharacterSkin,
	Vehicle,
	Radar,
	LeftLauncher,
	RightLauncher,
	MeleeWeapon,
	SkillModule,
	Max,
};

// Enum ProjectBoundary.EOnlineMode
enum class EOnlineMode : uint8 {
	Offline,
	LAN,
	Online,
	EOnlineMode_MAX,
};

// Enum ProjectBoundary.EPBGameMode
enum class EPBGameMode : uint8 {
	Base,
	TeamDeathMatch,
	FreeForAll,
	RushMatch,
	CaptureTheVehicle,
	KOHMatch,
	Elimination,
	Domination,
	Skirmish,
	CSTM,
	Menu,
	TrainingLevel,
	MaxGameModeNum,
	EPBGameMode_MAX,
};

// Enum ProjectBoundary.EPBClientCurrentVerifyingState
enum class EPBClientCurrentVerifyingState : uint8 {
	None,
	CheckingCanPlay,
	CDKeyVerifying,
	LogicServer,
	CreditIDVerify,
	AntiIndulgenceVerify,
	Done,
	Max,
};

// Enum ProjectBoundary.EUserOnlineState
enum class EUserOnlineState : uint8 {
	Offline,
	Online,
	InGame,
	Searching,
	InTeam,
	InMenu,
	EUserOnlineState_MAX,
};

// Enum ProjectBoundary.ELogicServerTeamMatchmakingState
enum class ELogicServerTeamMatchmakingState : uint8 {
	None,
	Start,
	WaitForAssignment,
	Finish,
	StopByLeader,
	StopForTimeout,
	StopForCollect,
	StopForException,
	NeedUpdateClient,
	ELogicServerTeamMatchmakingState_MAX,
};

// Enum ProjectBoundary.EPBArmorState
enum class EPBArmorState : uint8 {
	Normal,
	Reboot,
	BreakDowm,
	EPBArmorState_MAX,
};

// Enum ProjectBoundary.EPBTeamSelectType
enum class EPBTeamSelectType : uint8 {
	AllPlayers,
	MyTeam,
	EnemyTeam,
	SpecifyTeam,
	EPBTeamSelectType_MAX,
};

// Enum ProjectBoundary.EInputDevice
enum class EInputDevice : uint8 {
	Keyboard,
	PS4Controller,
	PCController,
	Max,
};

// Enum ProjectBoundary.EPBTeamAuthority
enum class EPBTeamAuthority : uint8 {
	Leader,
	CanInvite,
	Nothing,
	EPBTeamAuthority_MAX,
};

// Enum ProjectBoundary.ECanInviteState
enum class ECanInviteState : uint8 {
	OK,
	Offline,
	NotPlayingThisGame,
	Searching,
	InTeam,
	InGame,
	NowInviting,
	Unknow,
	ECanInviteState_MAX,
};

// Enum ProjectBoundary.EInviteResult
enum class EInviteResult : uint8 {
	InviteSuccess,
	FailToCreateTeam,
	UnknownError,
	EInviteResult_MAX,
};

// Enum ProjectBoundary.ETeamMessageType
enum class ETeamMessageType : uint8 {
	None,
	BeKicked,
	InviteSuccess,
	FailToSendInvite,
	Refuseinvite,
	NewTeamMember,
	JoinTeam,
	LeaveTeam,
	ChangeLeader,
	SomeoneLeave,
	InviteTimeout,
	Disband,
	ETeamMessageType_MAX,
};

// Enum ProjectBoundary.EPBChatType
enum class EPBChatType : uint8 {
	None,
	Lobby,
	Friend,
	EPBChatType_MAX,
};

// Enum ProjectBoundary.EMatchmakingServiceType
enum class EMatchmakingServiceType : uint8 {
	Null,
	Local,
	AwsGamelift,
	UnityMultiplay,
	EMatchmakingServiceType_MAX,
};

// Enum ProjectBoundary.DominatingSense
enum class DominatingSense : uint8 {
	Sight,
	Health,
	DominatingSense_MAX,
};

// Enum ProjectBoundary.EPBArmorBreakMode
enum class EPBArmorBreakMode : uint8 {
	BreakDown,
	Continuous,
	Reboot,
	EPBArmorBreakMode_MAX,
};

// Enum ProjectBoundary.EPBNewItemType
enum class EPBNewItemType : uint8 {
	Character,
	CharacterSkin,
	VehicleSkin,
	Weapon,
	WeaponSuitSkin,
	WeaponPart,
	EPBNewItemType_MAX,
};

// Enum ProjectBoundary.EAttachableTypes
enum class EAttachableTypes : uint8 {
	Base,
	Radar,
	GrenadeLauncher,
	EMPLauncher,
	MissileLauncher,
	DecoyLauncher,
	CraftLauncher,
	RemoteRocketLauncher,
	SmokeGrenadeLauncher,
	SensorLauncher,
	MineLauncher,
	Types_MAX,
	EAttachableTypes_MAX,
};

// Enum ProjectBoundary.EPBRoleSkillHandsState
enum class EPBRoleSkillHandsState : uint8 {
	EmptyHands,
	Deploying,
	Undeploying,
	Deployed,
	EPBRoleSkillHandsState_MAX,
};

// Enum ProjectBoundary.EPBAIShootingStatus
enum class EPBAIShootingStatus : uint8 {
	Idling,
	SwitchingWeapon,
	Shooting,
	Reloading,
	Meleeing,
	EPBAIShootingStatus_MAX,
};

// Enum ProjectBoundary.EPBAIMotionStatus
enum class EPBAIMotionStatus : uint8 {
	Idling,
	Waiting,
	FollowingPath,
	Patrolling,
	Hunting,
	Escaping,
	EPBAIMotionStatus_MAX,
};

// Enum ProjectBoundary.EPBHookStatus
enum class EPBHookStatus : uint8 {
	Ready,
	Launching,
	Locked,
	Recycling,
	EPBHookStatus_MAX,
};

// Enum ProjectBoundary.EPBAnimLinkSlot
enum class EPBAnimLinkSlot : uint8 {
	Lefthand,
	Righthand,
	Bothhand,
	EPBAnimLinkSlot_MAX,
};

// Enum ProjectBoundary.EPBGamePlayEventType
enum class EPBGamePlayEventType : uint8 {
	None,
	CanPatchSuit,
	PatchingSuit,
	CanSupply,
	Supplying,
	CanPickUpWeapon,
	PickingUpWeapon,
	CanRescueTeammate,
	RescuingTeammate,
	BeingRescued,
	CanRespawnSelf,
	CanConnectOther,
	ConnectingOther,
	CanDisconnectOther,
	DisconnectingOther,
	EPBGamePlayEventType_MAX,
};

// Enum ProjectBoundary.EPBStateInHookUsing
enum class EPBStateInHookUsing : uint8 {
	Normal,
	PrepareToRaiseHand,
	RaiseHandAndStraight,
	RaiseHandAndBeSnapped,
	RaiseHandAndBend,
	EPBStateInHookUsing_MAX,
};

// Enum ProjectBoundary.ECatchedObjectType
enum class ECatchedObjectType : uint8 {
	None,
	Static,
	AnimProp,
	PhysicsProp,
	Character,
	DestructibleMesh,
	ECatchedObjectType_MAX,
};

// Enum ProjectBoundary.ESurfaceCatchingMode
enum class ESurfaceCatchingMode : uint8 {
	Disabled,
	VisibleObject,
	ESurfaceCatchingMode_MAX,
};

// Enum ProjectBoundary.ESurfaceCatchingStatus
enum class ESurfaceCatchingStatus : uint8 {
	Detached,
	SnappingToTarget,
	Catched,
	ESurfaceCatchingStatus_MAX,
};

// Enum ProjectBoundary.EAccelerationDir
enum class EAccelerationDir : uint8 {
	None,
	Forward,
	Backward,
	Upward,
	Downward,
	Leftward,
	Rightward,
	MaxDirNum,
	EAccelerationDir_MAX,
};

// Enum ProjectBoundary.EPBHandsState
enum class EPBHandsState : uint8 {
	EmptyHand,
	HoldShield,
	Unarmed,
	EnteringHoldShield,
	ExitingHoldShield,
	UndeployingWeapon,
	DeployedWeapon,
	DeployingWeapon,
	UndeployingLauncherController,
	DeployedLauncherController,
	DeployingLauncherController,
	UndeployingRoleSkill,
	DeployedRoleSkill,
	DeployingRoleSkill,
	DroppingWeapon,
	DroppedWeapon,
	GrabbingWeapon,
	StartingReplenish,
	Replenishing,
	StoppingReplenish,
	StartDoingMelee,
	DoingHasTargetMelee,
	DoingNoTargetMelee,
	StartDoingDashMelee,
	DoingHasTargetDashMelee,
	DoingNoTargetDashMelee,
	FixingAirTightness,
	RescuingOther,
	EPBHandsState_MAX,
};

// Enum ProjectBoundary.EPBDashState
enum class EPBDashState : uint8 {
	DashAcceleration,
	DashConstant,
	DashDeceleration,
	DashFinish,
	MaxNum,
	EPBDashState_MAX,
};

// Enum ProjectBoundary.EChallengeClassEnum
enum class EChallengeClassEnum : uint8 {
	Combat,
	Operation,
	Class,
	Weapon,
	Cover_ops,
	EChallengeClassEnum_MAX,
};

// Enum ProjectBoundary.ESpectatingMode
enum class ESpectatingMode : uint8 {
	LongShot,
	Normal,
	Indoor,
	Max,
};

// Enum ProjectBoundary.EPBModifyDataMethod_General
enum class EPBModifyDataMethod_General : uint8 {
	None,
	Replace,
	EPBModifyDataMethod_MAX,
};

// Enum ProjectBoundary.EPBModifyDataMethod_Float
enum class EPBModifyDataMethod_Float : uint8 {
	None,
	Replace,
	Add,
	Multiply,
	EPBModifyDataMethod_MAX,
};

// Enum ProjectBoundary.EPBModifyDataMethod_Map
enum class EPBModifyDataMethod_Map : uint8 {
	None,
	Replace,
	Append,
	EPBModifyDataMethod_MAX,
};

// Enum ProjectBoundary.EEMPStatus
enum class EEMPStatus : uint8 {
	Standby,
	SafeFlying,
	ExplodableFlying,
	OutOfRange,
	Destroyed,
	EMPStatusMAX,
	EEMPStatus_MAX,
};

// Enum ProjectBoundary.EPBEnergyRecoveryMode
enum class EPBEnergyRecoveryMode : uint8 {
	NeverRecover,
	RecoverAlways,
	RecoverWithDelay,
	EPBEnergyRecoveryMode_MAX,
};

// Enum ProjectBoundary.EPBEnergySupplyType
enum class EPBEnergySupplyType : uint8 {
	Fuel,
	Air,
	EPBEnergySupplyType_MAX,
};

// Enum ProjectBoundary.EEndGameMode
enum class EEndGameMode : uint8 {
	BackMainMenu,
	AutoRestart,
	EEndGameMode_MAX,
};

// Enum ProjectBoundary.EProgressChangeMode
enum class EProgressChangeMode : uint8 {
	ClearToZeroIfNoOne,
	GraduallyDecreased,
	EProgressChangeMode_MAX,
};

// Enum ProjectBoundary.EPBHeatComponentType
enum class EPBHeatComponentType : uint8 {
	None,
	Weapon,
	Mobility,
	Defense,
	Projectile,
	MechanicalArm,
	EPBHeatComponentType_MAX,
};

// Enum ProjectBoundary.EPBIndicatorStatus
enum class EPBIndicatorStatus : uint8 {
	None,
	InCircle,
	OnScreenAndOutOfCircle,
	OutOfScreen,
	EPBIndicatorStatus_MAX,
};

// Enum ProjectBoundary.EPBItemType
enum class EPBItemType : uint8 {
	None,
	Weapon,
	MobilityModule,
	Vehicle,
	Radar,
	Launcher,
	Ammo,
	Role,
	EPBItemType_MAX,
};

// Enum ProjectBoundary.EPBLauncherState
enum class EPBLauncherState : uint8 {
	Standby,
	Deploying,
	Undeploying,
	Ready,
	Reloading,
	Handup,
	EPBLauncherState_MAX,
};

// Enum ProjectBoundary.EPBLoginState
enum class EPBLoginState : uint8 {
	HackLogin,
	LoginInput,
	LoginFail,
	LoginGateFail,
	LoginSteamOffline,
	LoginSteamTicketInvalid,
	LoginGate,
	WaitingInLine,
	WaitingRequestUserInfo,
	EPBLoginState_MAX,
};

// Enum ProjectBoundary.EPBSearchLimitReason
enum class EPBSearchLimitReason : uint8 {
	CanSearchButCheckTeamNum,
	OnlyTeamLeaderCanSearch,
	NowIsSearching,
	EPBSearchLimitReason_MAX,
};

// Enum ProjectBoundary.EPBMemberStatus
enum class EPBMemberStatus : uint8 {
	InSquad,
	Unmanned,
	EPBMemberStatus_MAX,
};

// Enum ProjectBoundary.EPBMarkReason
enum class EPBMarkReason : uint8 {
	MarkedByLocal,
	MarkedBySight,
	MarkedByWeaponFire,
	MarkedByHeat,
	EPBMarkReason_MAX,
};

// Enum ProjectBoundary.EPBPlayerlistSortBy
enum class EPBPlayerlistSortBy : uint8 {
	Score,
	Kill,
	Death,
	Assist,
	Ping,
	EPBPlayerlistSortBy_MAX,
};

// Enum ProjectBoundary.EPBSortMethodType
enum class EPBSortMethodType : uint8 {
	MySelfFirstAndIncreasing,
	MySelfFirstAndDescending,
	OnlyIncreasing,
	OnlyDescending,
	NotSorted,
	EPBSortMethodType_MAX,
};

// Enum ProjectBoundary.EPBStickLayout
enum class EPBStickLayout : uint8 {
	Default,
	Southpaw,
	Legacy,
	LegacySouthpaw,
	EPBStickLayout_MAX,
};

// Enum ProjectBoundary.EPBOptionsPart
enum class EPBOptionsPart : uint8 {
	SettingPart_KeyboardAndMouse,
	SettingPart_Controller,
	SettingPart_Audio,
	SettingPart_Gameplay,
	SettingPart_Graphic,
	SettingPart_MAX,
};

// Enum ProjectBoundary.EPBOptionsTypes
enum class EPBOptionsTypes : uint8 {
	BoolType,
	IntType,
	FloatType,
	EnumType,
	EPBOptionsTypes_MAX,
};

// Enum ProjectBoundary.EProjectileType
enum class EProjectileType : uint8 {
	EMP,
	PFG,
	Other,
	EProjectileType_MAX,
};

// Enum ProjectBoundary.EPBBodyPenetrationType
enum class EPBBodyPenetrationType : uint8 {
	F_Penetration,
	H_Penetration,
	No_Penetration,
	EPBBodyPenetrationType_MAX,
};

// Enum ProjectBoundary.EGrenadeStatus
enum class EGrenadeStatus : uint8 {
	Standby,
	SafeFlying,
	ExplodableFlying,
	OutOfRange,
	Destroyed,
	Status_MAX,
	EGrenadeStatus_MAX,
};

// Enum ProjectBoundary.EPBRealNameState
enum class EPBRealNameState : uint8 {
	RealNameInput,
	RealNameFail,
	RealNameSuccess,
	EPBRealNameState_MAX,
};

// Enum ProjectBoundary.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8 {
	NotRouted,
	RelevantAllConnections,
	Spatialize_Static,
	Spatialize_Dynamic,
	Spatialize_Dormancy,
	EClassRepNodeMapping_MAX,
};

// Enum ProjectBoundary.EPBRoleSkillState
enum class EPBRoleSkillState : uint8 {
	ForceUnDeploying,
	Loaded,
	Firing,
	Unloading,
	Loading,
	OneHandHeld,
	OneHandThrowing,
	EPBRoleSkillState_MAX,
};

// Enum ProjectBoundary.EPBPlayerStatus
enum class EPBPlayerStatus : uint8 {
	None,
	Offline,
	Online,
	InGame,
	Waiting,
	Invitable,
	RecentPlayer,
	EPBPlayerStatus_MAX,
};

// Enum ProjectBoundary.EPBSkinMeshRule
enum class EPBSkinMeshRule : uint8 {
	None,
	Replace,
	Add,
	EPBSkinMeshRule_MAX,
};

// Enum ProjectBoundary.ESmokeObscuringState
enum class ESmokeObscuringState : uint8 {
	Shaping,
	Obscuring,
	Fading,
	Max,
};

// Enum ProjectBoundary.EPBSoundEventType
enum class EPBSoundEventType : uint8 {
	None,
	Commander,
	Suit,
	Self,
	Teammate,
	EPBSoundEventType_MAX,
};

// Enum ProjectBoundary.EPBCharacterSoundEffectType
enum class EPBCharacterSoundEffectType : uint8 {
	None,
	HalfHealth_Breath,
	HalfHealth_HeartBeat,
	AirLeaking,
	Death,
	BeHit,
	Move_Normal,
	Move_Fast,
	IdleBreath,
	Dash,
	EMPWarning,
	SystemRebooting,
	EPBCharacterSoundEffectType_MAX,
};

// Enum ProjectBoundary.EPBCashType
enum class EPBCashType : uint8 {
	UnlockPoint,
	Coin,
	EPBCashType_MAX,
};

// Enum ProjectBoundary.EPBMerchType
enum class EPBMerchType : uint8 {
	Skin,
	Weapon,
	WeaponPart,
	Ornament,
	EPBMerchType_MAX,
};

// Enum ProjectBoundary.EZoneType
enum class EZoneType : uint8 {
	NONE,
	PRE,
	NEXT,
	EZoneType_MAX,
};

// Enum ProjectBoundary.EPBHitFeedbackType
enum class EPBHitFeedbackType : uint8 {
	None,
	Stop,
	Reverse,
	EPBHitFeedbackType_MAX,
};

// Enum ProjectBoundary.EPBTransformState
enum class EPBTransformState : uint8 {
	AtStart,
	AtEnd,
	Forward,
	Reverse,
	EPBTransformState_MAX,
};

// Enum ProjectBoundary.EPBTransformCompType
enum class EPBTransformCompType : uint8 {
	Location,
	Rotation,
	LocationAndRotation,
	EPBTransformCompType_MAX,
};

// Enum ProjectBoundary.EPBZoneStatus
enum class EPBZoneStatus : uint8 {
	CAPTURE,
	CAPTURING,
	LOSING,
	DEFFEND,
	CONTESTED,
	CAPTURED,
	BEINGCAPTURED,
	INVALID,
	EPBZoneStatus_MAX,
};

// Enum ProjectBoundary.EWidgetContainerType
enum class EWidgetContainerType : uint8 {
	HUD,
	Menu,
	InGameMenu,
	Notify,
	Dialog,
	Loading,
	MAX,
};

// Enum ProjectBoundary.EPBDataStatisticsType
enum class EPBDataStatisticsType : uint8 {
	None,
	WeaponKill,
	ModeWin,
	Medal,
	MedalWithWeapon,
	Max,
};

// Enum ProjectBoundary.EPBBrakingMethod
enum class EPBBrakingMethod : uint8 {
	Toggle,
	Hold,
	EPBBrakingMethod_MAX,
};

// Enum ProjectBoundary.EPBRunMethod
enum class EPBRunMethod : uint8 {
	Toggle,
	Hold,
	EPBRunMethod_MAX,
};

// Enum ProjectBoundary.EPBAimMethod
enum class EPBAimMethod : uint8 {
	Toggle,
	Hold,
	Auto,
	EPBAimMethod_MAX,
};

// Enum ProjectBoundary.EPBChallengeType
enum class EPBChallengeType : uint8 {
	WeaponChallenge,
	ModeChallenge,
	MedalChallenge,
	DailyChallenge,
	RandChallenge,
	EPBChallengeType_MAX,
};

// Enum ProjectBoundary.EPBFocusCause
enum class EPBFocusCause : uint8 {
	Mouse,
	Navigation,
	SetDirectly,
	Cleared,
	OtherWidgetLostFocus,
	WindowActivate,
	MAX,
};

// Enum ProjectBoundary.EGameEndState
enum class EGameEndState : uint8 {
	None,
	RoundEnd,
	GameEnd,
	Max,
};

// Enum ProjectBoundary.EPrivilegeResults
enum class EPrivilegeResults : uint8 {
	Local,
	RequiredPatchAvailable,
	RequiredSystemUpdate,
	AgeRestrictionFailure,
	UserNotFound,
	UserNotLoggedIn,
	GenericFailure,
	AccountTypeFailure,
	NetworkError,
	UnknowError,
	EPrivilegeResults_MAX,
};

// Enum ProjectBoundary.EPBMarkedStatus
enum class EPBMarkedStatus : uint8 {
	SensorMark,
	ReconMark,
	VisionMark,
	RadarMark,
	EPBMarkedStatus_MAX,
};

// Enum ProjectBoundary.EPBOnlineAchievementState
enum class EPBOnlineAchievementState : uint8 {
	NONE,
	QUERYING,
	QUERYFAIL,
	QUERYSUCCESS,
	EPBOnlineAchievementState_MAX,
};

// Enum ProjectBoundary.EPBZoneStrategyStatus
enum class EPBZoneStrategyStatus : uint8 {
	NONE,
	DEFEND,
	ATTACK,
	EPBZoneStrategyStatus_MAX,
};

// Enum ProjectBoundary.EPBCharacterPropertyLevel
enum class EPBCharacterPropertyLevel : uint8 {
	Basic,
	Medium,
	High,
	EPBCharacterPropertyLevel_MAX,
};

// Enum ProjectBoundary.EStatDmgTypes
enum class EStatDmgTypes : uint8 {
	None,
	ArmorDmg,
	CharacterDmg,
	CharacterGetDmg,
	EStatDmgTypes_MAX,
};

// Enum ProjectBoundary.EPBRoleName
enum class EPBRoleName : uint8 {
	None,
	Vodka,
	Probe,
	Leeway,
	Shielder,
	Spiker,
	Fixer,
	EPBRoleName_MAX,
};

// Enum ProjectBoundary.EPBHostileIconState
enum class EPBHostileIconState : uint8 {
	Marked,
	ConstantlyRecognized,
	Unrecognized,
	Immobilized,
	BeingRescued,
	Death,
	MAX,
};

// Enum ProjectBoundary.EPBAllyIconState
enum class EPBAllyIconState : uint8 {
	Self,
	Default,
	Marked,
	Immobilized,
	BeingRescued,
	Death,
	MAX,
};

// Enum ProjectBoundary.EPBRole
enum class EPBRole : uint8 {
	Assualt,
	Recon,
	Medic,
	Assassin,
	Tank,
	Sniper,
	MAX,
};

// Enum ProjectBoundary.EPBTeamMemberState
enum class EPBTeamMemberState : uint8 {
	Default,
	Marked,
	ConstantlyRecognized,
	Immobilized,
	BeingRescued,
	Death,
	MAX,
};

// Enum ProjectBoundary.AAttachablesSolt
enum class AAttachablesSolt : uint8 {
	None,
	Top,
	Left,
	Right,
	AAttachablesSolt_MAX,
};

// Enum ProjectBoundary.EEquipmentDamageTypes
enum class EEquipmentDamageTypes : uint8 {
	None,
	CharacterShot,
	CharacterMelee,
	Attach,
	CraftShot,
	CraftMelee,
	EEquipmentDamageTypes_MAX,
};

// Enum ProjectBoundary.EPBWeaponState
enum class EPBWeaponState : uint8 {
	Idle,
	Prefire,
	Firing,
	PostFire,
	Equipping,
	Unequipping,
	TacticalReload,
	PreReload,
	PreEmptyReload,
	Reloading,
	EmptyReload,
	PostReload,
	PostEmptyReload,
	Melee,
	HoldOpen,
	Refilling,
	WeaponStateMax,
	EPBWeaponState_MAX,
};

// Enum ProjectBoundary.EPBPiercingZone
enum class EPBPiercingZone : uint8 {
	None,
	Face,
	Head,
	Chest,
	Tripe,
	Hip,
	UpperArm,
	UpperArmAndChest,
	ForeArm,
	ForeArmAndChest,
	ForeArmAndTripe,
	ForeArmAndHead,
	ForeArmAndFace,
	Hand,
	HandAndChest,
	HandAndTripe,
	HandAndHead,
	HandAndFace,
	Thigh,
	Shank,
	ShankAndThigh,
	Foot,
	FootAndShank,
	FootAndThigh,
	EPBPiercingZone_MAX,
};

// Enum ProjectBoundary.EPBPhysMaterialType
enum class EPBPhysMaterialType : uint8 {
	Unknown,
	Concrete,
	Dirt,
	Water,
	Metal,
	Wood,
	Grass,
	Glass,
	Flesh,
	Armor,
	EPBPhysMaterialType_MAX,
};

// Enum ProjectBoundary.EEMPEffectStatus
enum class EEMPEffectStatus : uint8 {
	Normal,
	HUDDisabled,
	HalfStagger,
	FullStagger,
	EMPStateMax,
	EEMPEffectStatus_MAX,
};

// Enum ProjectBoundary.ECharacterStatus
enum class ECharacterStatus : uint8 {
	Idle,
	SlowlyMoving,
	Running,
	Dash,
	Braking,
	Caught,
	StatusMax,
	ECharacterStatus_MAX,
};

// Enum ProjectBoundary.EPBTeam
enum class EPBTeam : uint8 {
	SolarSysDefences,
	StarExiles,
	TeamNumber,
	Invalid,
	EPBTeam_MAX,
};

// Enum ProjectBoundary.EModuleActivityMask
enum class EModuleActivityMask : uint8 {
	None,
	EMPActive,
	ExplosiveActive,
	ExplosiveAndEMP,
	StunActive,
	StunAndEMP,
	StunAndExplosive,
	AllActive,
	EModuleActivityMask_MAX,
};

// Enum ProjectBoundary.EPBSquadType
enum class EPBSquadType : uint8 {
	MyJointSquad,
	OtherJointSquad,
	NotJointSquad,
	EPBSquadType_MAX,
};

// Enum ProjectBoundary.EPBCamp
enum class EPBCamp : uint8 {
	Friend,
	Enemy,
	Neutral,
	EPBCamp_MAX,
};

// Enum ProjectBoundary.EPBEMPType
enum class EPBEMPType : uint8 {
	WeaknessEMP,
	PowerfulEMP,
	EPBEMPType_MAX,
};

// Enum ProjectBoundary.EWaveType
enum class EWaveType : uint8 {
	Random,
	SimpleHarmonicVibration,
	MAX,
};

// Enum ProjectBoundary.EPBMovementMode
enum class EPBMovementMode : uint8 {
	PB_MOVE_None,
	PB_MOVE_Flying,
	PB_MOVE_Climbing,
	PB_MOVE_Custom,
	PB_MOVE_MAX,
};

// Enum ProjectBoundary.EPBMeleeCheckResult
enum class EPBMeleeCheckResult : uint8 {
	NoTarget,
	CloseRange,
	BackExecute,
	NeedToDash,
	MAX,
};

// Enum ProjectBoundary.EPBLauncherSwitchResult
enum class EPBLauncherSwitchResult : uint8 {
	Fail,
	UndeployTheOtherSide,
	DeployThis,
	UndeployThis,
	MAX,
};

// Enum ProjectBoundary.EPBFireModeDisplayType
enum class EPBFireModeDisplayType : uint8 {
	Manual,
	Auto,
	Burst,
	Auto_Burst,
	Metal_Storm,
	Semi,
	EPBFireModeDisplayType_MAX,
};

// Enum ProjectBoundary.EModifyConfigMethod
enum class EModifyConfigMethod : uint8 {
	Replace,
	Add,
	Multiply,
	EModifyConfigMethod_MAX,
};

// Enum ProjectBoundary.EPBSpecialist
enum class EPBSpecialist : uint8 {
	Assault,
	Medic,
	Recon,
	Sniper,
	Tank,
	Assassin,
	Hacker,
	Fishman,
	Agent,
	Sapper,
	Bombardier,
	MAX,
};

// Enum ProjectBoundary.EPBLauncherPosition
enum class EPBLauncherPosition : uint8 {
	None,
	Left,
	Right,
	EPBLauncherPosition_MAX,
};

// Enum ProjectBoundary.EPBRayProjectileTypes
enum class EPBRayProjectileTypes : uint8 {
	Tracer,
	Ball,
	AP,
	HE,
	EPBRayProjectileTypes_MAX,
};

// Enum ProjectBoundary.EProjectileTypes
enum class EProjectileTypes : uint8 {
	Base,
	Bullet,
	Grenade,
	EMP,
	Missile,
	RemoteRocket,
	SmokeGrenade,
	Sensor,
	Mine,
	SnapshotGrenade,
	Types_MAX,
	EProjectileTypes_MAX,
};

// Enum ProjectBoundary.PTTKey
enum class PTTKey : uint8 {
	PTTNoChannel,
	PTTAreaChannel,
	PTTTeamChannel,
	PTTKey_MAX,
};

// Enum ProjectBoundary.EPBChannelType
enum class EPBChannelType : uint8 {
	NonPositional,
	Positional,
	Echo,
	EPBChannelType_MAX,
};

// Enum ProjectBoundary.ETouchWallState
enum class ETouchWallState : uint8 {
	HighReady,
	CloseQuarter,
	CloseQuarterAiming,
	ETouchWallState_MAX,
};

// Enum ProjectBoundary.EReloadType
enum class EReloadType : uint8 {
	OneMagazing,
	OneBullet,
	EReloadType_MAX,
};

// Enum ProjectBoundary.EPBDragScrollType
enum class EPBDragScrollType : uint8 {
	CantClickDrag,
	LeftClickDrag,
	RightClickDrag,
	EPBDragScrollType_MAX,
};

// ScriptStruct ProjectBoundary.PBNavigationQueryData
// Size: 0x128 (Inherited: 0x00)
struct FPBNavigationQueryData {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> CollisionComponent; // 0x08(0x08)
	struct FVector Origin; // 0x10(0x0c)
	struct FVector Destination; // 0x1c(0x0c)
	char pad_28[0xe0]; // 0x28(0xe0)
	struct TArray<struct FVector> PathSolution; // 0x108(0x10)
	enum class EPBNavigationQueryStatus QueryStatus; // 0x118(0x01)
	char pad_119[0xf]; // 0x119(0x0f)
};

// ScriptStruct ProjectBoundary.PBChallengeData
// Size: 0x68 (Inherited: 0x00)
struct FPBChallengeData {
	struct FName ChallengeId; // 0x00(0x08)
	int32_t SlotId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, int64_t> Conditions; // 0x10(0x50)
	bool bCompleted; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct ProjectBoundary.ChallengeDataBase
// Size: 0x01 (Inherited: 0x00)
struct FChallengeDataBase {
	char bFinish : 1; // 0x00(0x01)
	char IsDirty : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
};

// ScriptStruct ProjectBoundary.ChallengeData
// Size: 0x08 (Inherited: 0x01)
struct FChallengeData : FChallengeDataBase {
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct ProjectBoundary.RecentPlayUsersMapWrapper
// Size: 0x50 (Inherited: 0x00)
struct FRecentPlayUsersMapWrapper {
	struct TMap<struct FUniqueNetIdRepl, struct FDateTime> RecentPlayUsers; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.PBRole_GameSaved
// Size: 0x1f8 (Inherited: 0x00)
struct FPBRole_GameSaved {
	struct FPBWeaponSlot_GameSaved FirstWeaponSaved; // 0x00(0x58)
	struct FPBWeaponSlot_GameSaved SecondWeaponSaved; // 0x58(0x58)
	struct FPBCharacterSkinSlot_GameSaved CharacterSkinSlotSaved; // 0xb0(0x50)
	struct FPBVehicleSlot_GameSaved VehicleSaved; // 0x100(0x58)
	struct FPBMeleeWeaponSlot_GameSaved MeleeWeaponSaved; // 0x158(0x58)
	struct FPBLauncherSlot_GameSaved LeftLauncherSaved; // 0x1b0(0x10)
	struct FPBLauncherSlot_GameSaved RightLauncherSaved; // 0x1c0(0x10)
	struct FName CharacterID; // 0x1d0(0x08)
	struct FName PawnClassID; // 0x1d8(0x08)
	struct FName MobilityModuleSaved; // 0x1e0(0x08)
	struct FName RadarSaved; // 0x1e8(0x08)
	struct FName SkillModuleSaved; // 0x1f0(0x08)
};

// ScriptStruct ProjectBoundary.PBLauncherSlot_GameSaved
// Size: 0x10 (Inherited: 0x00)
struct FPBLauncherSlot_GameSaved {
	struct FName EquippedID; // 0x00(0x08)
	struct FName SkinSavedID; // 0x08(0x08)
};

// ScriptStruct ProjectBoundary.PBMeleeWeaponSlot_GameSaved
// Size: 0x58 (Inherited: 0x00)
struct FPBMeleeWeaponSlot_GameSaved {
	struct TMap<struct FName, struct FPBSkin_GameSaved> MeleeWeaponIDSkinIDMap; // 0x00(0x50)
	struct FName EquippedID; // 0x50(0x08)
};

// ScriptStruct ProjectBoundary.PBSkin_GameSaved
// Size: 0x50 (Inherited: 0x00)
struct FPBSkin_GameSaved {
	struct TMap<enum class EPBSkinClass, struct FName> SkinClassMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.PBVehicleSlot_GameSaved
// Size: 0x58 (Inherited: 0x00)
struct FPBVehicleSlot_GameSaved {
	struct FName EquippedID; // 0x00(0x08)
	struct FPBSkin_GameSaved SkinSaved; // 0x08(0x50)
};

// ScriptStruct ProjectBoundary.PBCharacterSkinSlot_GameSaved
// Size: 0x50 (Inherited: 0x00)
struct FPBCharacterSkinSlot_GameSaved {
	struct TMap<enum class EPBCharacterSlotType, struct FName> CharacterSlotEquippedIDMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.PBWeaponSlot_GameSaved
// Size: 0x58 (Inherited: 0x00)
struct FPBWeaponSlot_GameSaved {
	struct TMap<struct FName, struct FPBWeapon_GameSaved> WeaponDefineData; // 0x00(0x50)
	struct FName EquippedID; // 0x50(0x08)
};

// ScriptStruct ProjectBoundary.PBWeapon_GameSaved
// Size: 0xa8 (Inherited: 0x00)
struct FPBWeapon_GameSaved {
	struct TMap<struct FName, struct FPBSkin_GameSaved> WeaponPartSkinMap; // 0x00(0x50)
	struct TMap<enum class EPBPartSlotType, struct FName> EquippedPartIDMap; // 0x50(0x50)
	struct FName BlueprintID; // 0xa0(0x08)
};

// ScriptStruct ProjectBoundary.PBRankList
// Size: 0x10 (Inherited: 0x00)
struct FPBRankList {
	struct TArray<struct FPBBoardRank> RankListArray; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PBBoardRank
// Size: 0x18 (Inherited: 0x00)
struct FPBBoardRank {
	struct FString NickName; // 0x00(0x10)
	int32_t Rank; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ProjectBoundary.PBPlayerScore
// Size: 0x28 (Inherited: 0x00)
struct FPBPlayerScore {
	struct FString NickName; // 0x00(0x10)
	int32_t Kills; // 0x10(0x04)
	float KDRate; // 0x14(0x04)
	int32_t HeadshotCount; // 0x18(0x04)
	float HitRate; // 0x1c(0x04)
	int32_t Win; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ProjectBoundary.GameModeMap
// Size: 0x78 (Inherited: 0x00)
struct FGameModeMap {
	struct FString ModeShotName; // 0x00(0x10)
	struct FText ModeFullName; // 0x10(0x18)
	struct TMap<struct FString, struct FCreateGameMapInfo> MapName; // 0x28(0x50)
};

// ScriptStruct ProjectBoundary.CreateGameMapInfo
// Size: 0x20 (Inherited: 0x00)
struct FCreateGameMapInfo {
	struct UTexture2D* BGImage; // 0x00(0x08)
	struct FText NickName; // 0x08(0x18)
};

// ScriptStruct ProjectBoundary.PBShowItemInfo
// Size: 0x80 (Inherited: 0x00)
struct FPBShowItemInfo {
	struct FString ID; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	struct FString ItemName; // 0x20(0x10)
	struct UObject* ActorClass; // 0x30(0x08)
	struct TArray<struct UStaticMesh*> StaticMesh; // 0x38(0x10)
	struct USkeletalMesh* SkeltalMesh; // 0x48(0x08)
	char Weight; // 0x50(0x01)
	char MaxWeight; // 0x51(0x01)
	char SlotPoint; // 0x52(0x01)
	char SocketPosition; // 0x53(0x01)
	char bUnlock : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FText UnLockDescription; // 0x58(0x18)
	struct UTexture2D* Image; // 0x70(0x08)
	enum class EPBItemGradeType Grade; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct ProjectBoundary.ExpLevelInfo
// Size: 0x68 (Inherited: 0x00)
struct FExpLevelInfo {
	int32_t BeginLevel; // 0x00(0x04)
	int32_t CurrentLevel; // 0x04(0x04)
	int32_t CurLevelEXP; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture2D* CurrentLevelImage; // 0x10(0x08)
	struct TMap<int32_t, int32_t> LevelMap; // 0x18(0x50)
};

// ScriptStruct ProjectBoundary.PBLobbyInfo_UI
// Size: 0x78 (Inherited: 0x00)
struct FPBLobbyInfo_UI {
	struct FText MapName; // 0x00(0x18)
	struct FText ModeName; // 0x18(0x18)
	struct FText CountDown; // 0x30(0x18)
	struct FText FastStageCountDown; // 0x48(0x18)
	bool bFastStage; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct APBLobbyPlayerState*> Players; // 0x68(0x10)
};

// ScriptStruct ProjectBoundary.MatchResultInfo
// Size: 0x130 (Inherited: 0x00)
struct FMatchResultInfo {
	struct TArray<struct FPlayerMatchResultInfo> PlayersInfo; // 0x00(0x10)
	struct FString MapName; // 0x10(0x10)
	enum class EPBGameMode GameMode; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t MatchTime; // 0x24(0x04)
	struct TArray<int32_t> TeamScore; // 0x28(0x10)
	struct FMatchResultPersonalInfo PersonalMatchResultInfo; // 0x38(0xf8)
};

// ScriptStruct ProjectBoundary.MatchResultPersonalInfo
// Size: 0xf8 (Inherited: 0x00)
struct FMatchResultPersonalInfo {
	bool bIsSpectator; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t BeginExp; // 0x04(0x04)
	struct TMap<struct FString, int32_t> EXPMap; // 0x08(0x50)
	int32_t ExpMulti; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TMap<struct FString, int32_t> UnlockItem; // 0x60(0x50)
	int32_t HeadshotCount; // 0xb0(0x04)
	float Accuracy; // 0xb4(0x04)
	int32_t MaxKillDistance; // 0xb8(0x04)
	int32_t AvgKillDistance; // 0xbc(0x04)
	int32_t SPM; // 0xc0(0x04)
	int32_t MaxKillStreakCount; // 0xc4(0x04)
	int32_t Score; // 0xc8(0x04)
	int32_t Kill; // 0xcc(0x04)
	int32_t Death; // 0xd0(0x04)
	int32_t Assist; // 0xd4(0x04)
	float KDA; // 0xd8(0x04)
	int32_t TeamID; // 0xdc(0x04)
	int32_t PlayerArraySelfIndex; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FPBAchievementStatInfo> CombatAchievementStat; // 0xe8(0x10)
};

// ScriptStruct ProjectBoundary.PBAchievementStatInfo
// Size: 0x28 (Inherited: 0x00)
struct FPBAchievementStatInfo {
	struct FText Name; // 0x00(0x18)
	struct UTexture2D* ImageInfo; // 0x18(0x08)
	char pad_20[0x4]; // 0x20(0x04)
	int32_t Count; // 0x24(0x04)
};

// ScriptStruct ProjectBoundary.PlayerMatchResultInfo
// Size: 0x28 (Inherited: 0x00)
struct FPlayerMatchResultInfo {
	struct FString PlayerName; // 0x00(0x10)
	int32_t Kill; // 0x10(0x04)
	int32_t Death; // 0x14(0x04)
	int32_t Assist; // 0x18(0x04)
	int32_t Score; // 0x1c(0x04)
	int32_t TeamID; // 0x20(0x04)
	bool IsSpectator; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ProjectBoundary.MatchDataTest
// Size: 0x48 (Inherited: 0x00)
struct FMatchDataTest {
	int32_t DisRating; // 0x00(0x04)
	int32_t Rating; // 0x04(0x04)
	int32_t TeamAvgRating; // 0x08(0x04)
	int32_t EnemyAvgRating; // 0x0c(0x04)
	int32_t WinRating; // 0x10(0x04)
	int32_t LoseRating; // 0x14(0x04)
	int32_t DrawRating; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> TeammateRatings; // 0x20(0x10)
	struct TArray<int32_t> EnemyRatings; // 0x30(0x10)
	int32_t PlayNum; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ProjectBoundary.PBOnlineUserInfo
// Size: 0x60 (Inherited: 0x00)
struct FPBOnlineUserInfo {
	struct FBPUniqueID UniqueID; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	enum class EUserOnlineState State; // 0x20(0x01)
	bool bInThisGame; // 0x21(0x01)
	enum class EPBGameMode PlayingGameMode; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	struct FName PlayingGameMap; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString StatusStr; // 0x30(0x10)
	struct FString AvatarUrl; // 0x40(0x10)
	struct FDateTime LastPlayWithTime; // 0x50(0x08)
	int32_t Exp; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ProjectBoundary.BPUniqueID
// Size: 0x10 (Inherited: 0x00)
struct FBPUniqueID {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.TeamMemberInfo
// Size: 0x68 (Inherited: 0x00)
struct FTeamMemberInfo {
	struct FPBOnlineUserInfo OnlineUserInfo; // 0x00(0x60)
	enum class EPBTeamAuthority TeamAuthority; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct ProjectBoundary.PBInvitation
// Size: 0xf8 (Inherited: 0x00)
struct FPBInvitation {
	struct FPBOnlineUserInfo InviterInfo; // 0x00(0x60)
	struct FPBOnlineUserInfo LeaderInfo; // 0x60(0x60)
	struct TArray<struct FPBOnlineUserInfo> TeamMemberInfo; // 0xc0(0x10)
	struct FString TeamID; // 0xd0(0x10)
	struct FString TeamName; // 0xe0(0x10)
	struct FDateTime InviteEndTime; // 0xf0(0x08)
};

// ScriptStruct ProjectBoundary.AwsMatchmakerData
// Size: 0x40 (Inherited: 0x00)
struct FAwsMatchmakerData {
	struct FString MatchID; // 0x00(0x10)
	struct FString MatchmakingConfigurationArn; // 0x10(0x10)
	struct TArray<struct FAwsMatchmakerTeam> Teams; // 0x20(0x10)
	struct FString AutoBackfillTicketId; // 0x30(0x10)
};

// ScriptStruct ProjectBoundary.AwsMatchmakerTeam
// Size: 0x20 (Inherited: 0x00)
struct FAwsMatchmakerTeam {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FAwsMatchmakerPlayer> Players; // 0x10(0x10)
};

// ScriptStruct ProjectBoundary.AwsMatchmakerPlayer
// Size: 0x80 (Inherited: 0x00)
struct FAwsMatchmakerPlayer {
	struct FString PlayerId; // 0x00(0x10)
	struct FAwsMatchmakerAttribute Attributes; // 0x10(0x70)
};

// ScriptStruct ProjectBoundary.AwsMatchmakerAttribute
// Size: 0x70 (Inherited: 0x00)
struct FAwsMatchmakerAttribute {
	struct FAwsMatchmakerAttributeNumber Expect; // 0x00(0x18)
	struct FAwsMatchmakerAttributeNumber Rating; // 0x18(0x18)
	struct FAwsMatchmakerAttributeStringList SelectedGameModes; // 0x30(0x20)
	struct FAwsMatchmakerAttributeString QoSData; // 0x50(0x20)
};

// ScriptStruct ProjectBoundary.AwsMatchmakerAttributeString
// Size: 0x20 (Inherited: 0x00)
struct FAwsMatchmakerAttributeString {
	struct FString AttributeType; // 0x00(0x10)
	struct FString ValueAttribute; // 0x10(0x10)
};

// ScriptStruct ProjectBoundary.AwsMatchmakerAttributeStringList
// Size: 0x20 (Inherited: 0x00)
struct FAwsMatchmakerAttributeStringList {
	struct FString AttributeType; // 0x00(0x10)
	struct TArray<struct FString> ValueAttribute; // 0x10(0x10)
};

// ScriptStruct ProjectBoundary.AwsMatchmakerAttributeNumber
// Size: 0x18 (Inherited: 0x00)
struct FAwsMatchmakerAttributeNumber {
	struct FString AttributeType; // 0x00(0x10)
	double ValueAttribute; // 0x10(0x08)
};

// ScriptStruct ProjectBoundary.PBAssetInfo
// Size: 0x20 (Inherited: 0x00)
struct FPBAssetInfo {
	struct FString ItemId; // 0x00(0x10)
	bool IsNew; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Count; // 0x14(0x04)
	int64_t Expire; // 0x18(0x08)
};

// ScriptStruct ProjectBoundary.PBMerchInfo
// Size: 0x20 (Inherited: 0x00)
struct FPBMerchInfo {
	struct FString MerchId; // 0x00(0x10)
	int32_t CurrencyType; // 0x10(0x04)
	int32_t Count; // 0x14(0x04)
	int64_t Expire; // 0x18(0x08)
};

// ScriptStruct ProjectBoundary.PBUserProfileData
// Size: 0x230 (Inherited: 0x00)
struct FPBUserProfileData {
	struct TMap<struct FName, float> TotalData; // 0x00(0x50)
	struct TMap<struct FName, struct FPBSingleItemData> RoleData; // 0x50(0x50)
	struct TMap<struct FName, struct FPBSingleItemData> WeaponData; // 0xa0(0x50)
	struct TMap<struct FName, struct FPBSingleItemData> PodData; // 0xf0(0x50)
	struct TMap<struct FName, struct FPBSingleItemData> MeleeWeaponData; // 0x140(0x50)
	struct TMap<struct FName, struct FPBSingleItemData> SkillData; // 0x190(0x50)
	struct TMap<struct FName, struct FPBSingleItemData> ModeData; // 0x1e0(0x50)
};

// ScriptStruct ProjectBoundary.PBSingleItemData
// Size: 0x50 (Inherited: 0x00)
struct FPBSingleItemData {
	struct TMap<struct FName, float> Data; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.PBReceivedMessageData
// Size: 0x58 (Inherited: 0x00)
struct FPBReceivedMessageData {
	struct FPBUserInfo Sender; // 0x00(0x20)
	struct FPBUserInfo Receiver; // 0x20(0x20)
	struct FString Message; // 0x40(0x10)
	enum class EPBChatType ChatType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct ProjectBoundary.PBUserInfo
// Size: 0x20 (Inherited: 0x00)
struct FPBUserInfo {
	struct FString UserID; // 0x00(0x10)
	struct FString NickName; // 0x10(0x10)
};

// ScriptStruct ProjectBoundary.PBUserDataStatisticsInfo
// Size: 0x60 (Inherited: 0x00)
struct FPBUserDataStatisticsInfo {
	struct FString UserID; // 0x00(0x10)
	struct TMap<struct FName, int64_t> RoleScoreMap; // 0x10(0x50)
};

// ScriptStruct ProjectBoundary.LogicServerAssetItem
// Size: 0x18 (Inherited: 0x00)
struct FLogicServerAssetItem {
	int32_t ID; // 0x00(0x04)
	bool IsNew; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t ExpireTime; // 0x10(0x08)
};

// ScriptStruct ProjectBoundary.LogicServerError
// Size: 0x04 (Inherited: 0x00)
struct FLogicServerError {
	int32_t ErrorCode; // 0x00(0x04)
};

// ScriptStruct ProjectBoundary.PBModifyDataBase
// Size: 0x08 (Inherited: 0x08)
struct FPBModifyDataBase : FPBTableRowBase {
};

// ScriptStruct ProjectBoundary.PBWeaponConfigModifyData
// Size: 0x2108 (Inherited: 0x08)
struct FPBWeaponConfigModifyData : FPBModifyDataBase {
	struct FString HeatOfSingleShot; // 0x08(0x10)
	struct FString Recoil; // 0x18(0x10)
	struct FString BulletInstantImpulseScale; // 0x28(0x10)
	struct FString SubRoundSpreadZY; // 0x38(0x10)
	struct FString SubRoundSmallSpreadZY; // 0x48(0x10)
	struct FString SubRoundNum; // 0x58(0x10)
	struct FString UseSmallSpreadNum; // 0x68(0x10)
	struct FString BulletSpreadMapCurve; // 0x78(0x10)
	struct FString UseSpreadOnSubRound; // 0x88(0x10)
	struct FString BulletTrailFX; // 0x98(0x10)
	struct FString ProjectileAttachableImpactFX; // 0xa8(0x10)
	struct FString ProjectileImpactTemplate; // 0xb8(0x10)
	struct FString EMPBlastSound; // 0xc8(0x10)
	struct FString ExplosiveBlastSound; // 0xd8(0x10)
	struct FString StunExplosiveBlastSound; // 0xe8(0x10)
	struct FString ShouldAttachToImpactPoint; // 0xf8(0x10)
	struct FString AmmoPerClip; // 0x108(0x10)
	struct FString InitialClips; // 0x118(0x10)
	struct FString WarningAmmo; // 0x128(0x10)
	struct FString CriticalWarningAmmo; // 0x138(0x10)
	struct FString MaxAmmo; // 0x148(0x10)
	struct FString BurstFireNum; // 0x158(0x10)
	struct FString AutoFireSwitch; // 0x168(0x10)
	struct FString BurstFireSwitch; // 0x178(0x10)
	struct FString FireModeDisplayType; // 0x188(0x10)
	struct FString InputThreshold; // 0x198(0x10)
	struct FString InputFireSpace; // 0x1a8(0x10)
	struct FString InputResetSpace; // 0x1b8(0x10)
	struct FString ApplyPreFireToContinuousShot; // 0x1c8(0x10)
	struct FString ApplyPostFireToContinuousShot; // 0x1d8(0x10)
	struct FString SkipLastShotPostFire; // 0x1e8(0x10)
	struct FString CanPreFireInterruptPostFire; // 0x1f8(0x10)
	struct FString PreFireDuration; // 0x208(0x10)
	struct FString FireDuration; // 0x218(0x10)
	struct FString BurstPerFireDuration; // 0x228(0x10)
	struct FString PerBurstInterval; // 0x238(0x10)
	struct FString PostFireDuration; // 0x248(0x10)
	struct FString CanBeSkippable; // 0x258(0x10)
	struct FString FiringSkippableTime; // 0x268(0x10)
	struct FString BulletConsumePerShot; // 0x278(0x10)
	struct FString TouchWallState; // 0x288(0x10)
	struct FString FatiguePerShot; // 0x298(0x10)
	struct FString FatigueDecayDelay; // 0x2a8(0x10)
	struct FString FatigueDecayInterval; // 0x2b8(0x10)
	struct FString FatigueDecayCurve; // 0x2c8(0x10)
	struct FString RecoilPatternCurve; // 0x2d8(0x10)
	struct FString RecoilPatternScaler; // 0x2e8(0x10)
	struct FString CenteringSpeedCurve; // 0x2f8(0x10)
	struct FString CenteringSpeedScaler; // 0x308(0x10)
	struct FString SpringUpdateInterval; // 0x318(0x10)
	struct FString MeshRotationStiffness; // 0x328(0x10)
	struct FString MeshRotationDamping; // 0x338(0x10)
	struct FString MeshRotationMass; // 0x348(0x10)
	struct FString MeshRotationMaxDeltaLength; // 0x358(0x10)
	struct FString WeaponRotationStiffness; // 0x368(0x10)
	struct FString WeaponRotationDamping; // 0x378(0x10)
	struct FString WeaponRotationMass; // 0x388(0x10)
	struct FString WeaponRotationMaxDeltaLength; // 0x398(0x10)
	struct FString MeshTranslationStiffness; // 0x3a8(0x10)
	struct FString MeshTranslationDamping; // 0x3b8(0x10)
	struct FString MeshTranslationMass; // 0x3c8(0x10)
	struct FString MeshTranslationMaxDeltaLength; // 0x3d8(0x10)
	struct FString WeaponTranslationStiffness; // 0x3e8(0x10)
	struct FString WeaponTranslationDamping; // 0x3f8(0x10)
	struct FString WeaponTranslationMass; // 0x408(0x10)
	struct FString WeaponTranslationMaxDeltaLength; // 0x418(0x10)
	struct FString ShotPointDecayCurve; // 0x428(0x10)
	struct FString HandPitchForceCurve; // 0x438(0x10)
	struct FString HandYawForceCurve; // 0x448(0x10)
	struct FString HandRollForceCurve; // 0x458(0x10)
	struct FString HandPitchDirectionWeightCurve; // 0x468(0x10)
	struct FString HandYawDirectionWeightCurve; // 0x478(0x10)
	struct FString HandRollDirectionWeightCurve; // 0x488(0x10)
	struct FString HandXForceCurve; // 0x498(0x10)
	struct FString HandYForceCurve; // 0x4a8(0x10)
	struct FString HandZForceCurve; // 0x4b8(0x10)
	struct FString HandXDirectionWeightCurve; // 0x4c8(0x10)
	struct FString HandYDirectionWeightCurve; // 0x4d8(0x10)
	struct FString HandZDirectionWeightCurve; // 0x4e8(0x10)
	struct FString CameraRotationStiffness; // 0x4f8(0x10)
	struct FString CameraRotationDamping; // 0x508(0x10)
	struct FString CameraRotationMass; // 0x518(0x10)
	struct FString CameraRotationMaxDeltaLength; // 0x528(0x10)
	struct FString CameraTranslationStiffness; // 0x538(0x10)
	struct FString CameraTranslationDamping; // 0x548(0x10)
	struct FString CameraTranslationMass; // 0x558(0x10)
	struct FString CameraTranslationMaxDeltaLength; // 0x568(0x10)
	struct FString CameraShakeFOVStiffness; // 0x578(0x10)
	struct FString CameraShakeFOVDamping; // 0x588(0x10)
	struct FString CameraShakeFOVMass; // 0x598(0x10)
	struct FString CameraShakeFOVMaxDeltaLength; // 0x5a8(0x10)
	struct FString CameraShakeFOVCurve; // 0x5b8(0x10)
	struct FString CameraPitchForceCurve; // 0x5c8(0x10)
	struct FString CameraYawForceCurve; // 0x5d8(0x10)
	struct FString CameraRollForceCurve; // 0x5e8(0x10)
	struct FString CameraPitchDirectionWeightCurve; // 0x5f8(0x10)
	struct FString CameraYawDirectionWeightCurve; // 0x608(0x10)
	struct FString CameraRollDirectionWeightCurve; // 0x618(0x10)
	struct FString CameraXForceCurve; // 0x628(0x10)
	struct FString CameraYForceCurve; // 0x638(0x10)
	struct FString CameraZForceCurve; // 0x648(0x10)
	struct FString CameraXDirectionWeightCurve; // 0x658(0x10)
	struct FString CameraYDirectionWeightCurve; // 0x668(0x10)
	struct FString CameraZDirectionWeightCurve; // 0x678(0x10)
	struct FString PivotNormalRotationTotalBounceScaler; // 0x688(0x10)
	struct FString WeaponNormalRotationTotalBounceScaler; // 0x698(0x10)
	struct FString PivotNormalTranslationTotalBounceScaler; // 0x6a8(0x10)
	struct FString WeaponNormalTranslationTotalBounceScaler; // 0x6b8(0x10)
	struct FString PivotTargetingRotationTotalBounceScaler; // 0x6c8(0x10)
	struct FString WeaponTargetingRotationTotalBounceScaler; // 0x6d8(0x10)
	struct FString PivotTargetingTranslationTotalBounceScaler; // 0x6e8(0x10)
	struct FString WeaponTargetingTranslationTotalBounceScaler; // 0x6f8(0x10)
	struct FString CameraNormalRotationTotalBounceScaler; // 0x708(0x10)
	struct FString CameraTargetingRotationTotalBounceScaler; // 0x718(0x10)
	struct FString CameraNormalTranslationTotalBounceScaler; // 0x728(0x10)
	struct FString CameraTargetingTranslationTotalBounceScaler; // 0x738(0x10)
	struct FString CameraNormalShakeFOVScaler; // 0x748(0x10)
	struct FString CameraTargetingShakeFOVScaler; // 0x758(0x10)
	struct FString HandRotationForceScaler; // 0x768(0x10)
	struct FString HandTranslationForceScaler; // 0x778(0x10)
	struct FString CameraRotationForceScaler; // 0x788(0x10)
	struct FString CameraTranslationForceScaler; // 0x798(0x10)
	struct FString Bounce_NormalIdleScaler; // 0x7a8(0x10)
	struct FString Bounce_NormalSlowlyMovingScaler; // 0x7b8(0x10)
	struct FString Bounce_NormalRunningScaler; // 0x7c8(0x10)
	struct FString Bounce_NormalDashScaler; // 0x7d8(0x10)
	struct FString Bounce_NormalCaughtScaler; // 0x7e8(0x10)
	struct FString Bounce_NormalBrakingScaler; // 0x7f8(0x10)
	struct FString Bounce_TargettingIdleScaler; // 0x808(0x10)
	struct FString Bounce_TargettingSlowlyMovingScaler; // 0x818(0x10)
	struct FString Bounce_TargettingRunningScaler; // 0x828(0x10)
	struct FString Bounce_TargettingDashScaler; // 0x838(0x10)
	struct FString Bounce_TargettingCaughtScaler; // 0x848(0x10)
	struct FString Bounce_TargettingBrakingScaler; // 0x858(0x10)
	struct FString Bounce_NormalCharStatusScaler; // 0x868(0x10)
	struct FString Bounce_TargettingCharStatusScaler; // 0x878(0x10)
	struct FString Spread_NormalIdleCurve; // 0x888(0x10)
	struct FString Spread_NormalSlowlyMovingCurve; // 0x898(0x10)
	struct FString Spread_NormalRunningCurve; // 0x8a8(0x10)
	struct FString Spread_NormalDashCurve; // 0x8b8(0x10)
	struct FString Spread_NormalCaughtCurve; // 0x8c8(0x10)
	struct FString Spread_NormalBrakingCurve; // 0x8d8(0x10)
	struct FString Spread_NormalIdleScaler; // 0x8e8(0x10)
	struct FString Spread_NormalSlowlyMovingScaler; // 0x8f8(0x10)
	struct FString Spread_NormalRunningScaler; // 0x908(0x10)
	struct FString Spread_NormalDashScaler; // 0x918(0x10)
	struct FString Spread_NormalCaughtScaler; // 0x928(0x10)
	struct FString Spread_NormalBrakingScaler; // 0x938(0x10)
	struct FString Spread_TargettingIdleCurve; // 0x948(0x10)
	struct FString Spread_TargettingSlowlyMovingCurve; // 0x958(0x10)
	struct FString Spread_TargettingRunningCurve; // 0x968(0x10)
	struct FString Spread_TargettingDashCurve; // 0x978(0x10)
	struct FString Spread_TargettingCaughtCurve; // 0x988(0x10)
	struct FString Spread_TargettingBrakingCurve; // 0x998(0x10)
	struct FString Spread_TargettingIdleScaler; // 0x9a8(0x10)
	struct FString Spread_TargettingSlowlyMovingScaler; // 0x9b8(0x10)
	struct FString Spread_TargettingRunningScaler; // 0x9c8(0x10)
	struct FString Spread_TargettingDashScaler; // 0x9d8(0x10)
	struct FString Spread_TargettingCaughtScaler; // 0x9e8(0x10)
	struct FString Spread_TargettingBrakingScaler; // 0x9f8(0x10)
	struct FString Spread_NormalCharStatusScaler; // 0xa08(0x10)
	struct FString Spread_TargettingCharStatusScaler; // 0xa18(0x10)
	struct FString TacticalReloadDuration; // 0xa28(0x10)
	struct FString PreReloadDuration; // 0xa38(0x10)
	struct FString ReloadDuration; // 0xa48(0x10)
	struct FString PostReloadDuration; // 0xa58(0x10)
	struct FString PreEmptyReloadDuration; // 0xa68(0x10)
	struct FString EmptyReloadDuration; // 0xa78(0x10)
	struct FString PostEmptyReloadDuration; // 0xa88(0x10)
	struct FString PerBulletReloadDuration; // 0xa98(0x10)
	struct FString ReloadType; // 0xaa8(0x10)
	struct FString EmptyClipReloadDelay; // 0xab8(0x10)
	struct FString RoundNumInChamber; // 0xac8(0x10)
	struct FString ReloadBulletInPreEmptyReload; // 0xad8(0x10)
	struct FString UseTacReload; // 0xae8(0x10)
	struct FString TacReloadResetPostFire; // 0xaf8(0x10)
	struct FString PreReloadResetPostFire; // 0xb08(0x10)
	struct FString PostReloadResetPostFire; // 0xb18(0x10)
	struct FString PreReloadInterruptPostFire; // 0xb28(0x10)
	struct FString CanLoopReload; // 0xb38(0x10)
	struct FString Mass; // 0xb48(0x10)
	struct FString MassScaler; // 0xb58(0x10)
	struct FString StandardMinMass; // 0xb68(0x10)
	struct FString StandardMaxMass; // 0xb78(0x10)
	struct FString PickUpDuration; // 0xb88(0x10)
	struct FString EquipDuration; // 0xb98(0x10)
	struct FString UnequipDuration; // 0xba8(0x10)
	struct FString EquipUnskippableDuration; // 0xbb8(0x10)
	struct FString UnequipSkippableDuration; // 0xbc8(0x10)
	struct FString DragVelocityScale; // 0xbd8(0x10)
	struct FString DragVelocityScalePhase2; // 0xbe8(0x10)
	struct FString AutoTargettingRadius; // 0xbf8(0x10)
	struct FString PreciseZoneRadius; // 0xc08(0x10)
	struct FString SweetSpotRadius; // 0xc18(0x10)
	struct FString SweetSpotInputScalerFStringCurve; // 0xc28(0x10)
	struct FString DragVelocityModifyFStringCurve; // 0xc38(0x10)
	struct FString ApplyDragInBodyBox; // 0xc48(0x10)
	struct FString OverrideAimingConfig; // 0xc58(0x10)
	struct FString EnableGunFunnelDistance; // 0xc68(0x10)
	struct FString GunFunnelNearestDistance; // 0xc78(0x10)
	struct FString GunFunnelFurthestDistance; // 0xc88(0x10)
	struct FString GunFunnelSwitch; // 0xc98(0x10)
	struct FString Mesh1PCustomFOVAngle_Normal; // 0xca8(0x10)
	struct FString Mesh1PCustomFOVAngle_ADS; // 0xcb8(0x10)
	struct FString ScopeADSFOV; // 0xcc8(0x10)
	struct FString ADS_TargetingDuration; // 0xcd8(0x10)
	struct FString ADS_UnTargetingDuration; // 0xce8(0x10)
	struct FString ADSFOV_InterpSpeed; // 0xcf8(0x10)
	struct FString ApplyCharStatusChangePercentage; // 0xd08(0x10)
	struct FString ApplyADSFOVChangePercentage; // 0xd18(0x10)
	struct FString PlayStartADSSoundPercentage; // 0xd28(0x10)
	struct FString PlayStopADSSoundPercentage; // 0xd38(0x10)
	struct FString bCanReloadWhenAiming; // 0xd48(0x10)
	struct FString AimTraceLength; // 0xd58(0x10)
	struct FString StraightRange; // 0xd68(0x10)
	struct FString BlendRange; // 0xd78(0x10)
	struct FString SelfDestroyTime; // 0xd88(0x10)
	struct FString PickUpClass; // 0xd98(0x10)
	struct FString MuzzleFX; // 0xda8(0x10)
	struct FString MuzzleFX1P; // 0xdb8(0x10)
	struct FString MuzzleFX3P; // 0xdc8(0x10)
	struct FString MeleeCameraShake; // 0xdd8(0x10)
	struct FString FireCameraShake; // 0xde8(0x10)
	struct FString FireInADSCameraShake; // 0xdf8(0x10)
	struct FString FireForceFeedback; // 0xe08(0x10)
	struct FString RefillingSound; // 0xe18(0x10)
	struct FString MeleeSound; // 0xe28(0x10)
	struct FString MeleeLoopSound; // 0xe38(0x10)
	struct FString MeleeFinishSound; // 0xe48(0x10)
	struct FString OutOfAmmoSound; // 0xe58(0x10)
	struct FString ReloadSound; // 0xe68(0x10)
	struct FString FireSound1P; // 0xe78(0x10)
	struct FString FireSound3P; // 0xe88(0x10)
	struct FString FireLoopSound1P; // 0xe98(0x10)
	struct FString FireLoopSound3P; // 0xea8(0x10)
	struct FString FireFinishSound; // 0xeb8(0x10)
	struct FString EmptyClipClickSound; // 0xec8(0x10)
	struct FString EquipSound; // 0xed8(0x10)
	struct FString UnEquipSound; // 0xee8(0x10)
	struct FString FireAmbientSound; // 0xef8(0x10)
	struct FString StartADSSound; // 0xf08(0x10)
	struct FString StopADSSound; // 0xf18(0x10)
	struct FString LoopedFireSound; // 0xf28(0x10)
	struct FString AimingPose; // 0xf38(0x10)
	struct FString IdlePose; // 0xf48(0x10)
	struct FString ReloadingAimingPose; // 0xf58(0x10)
	struct FString CQBAimingPose; // 0xf68(0x10)
	struct FString CQBIdlePose; // 0xf78(0x10)
	struct FString PreEmptyReloadPawn1PAnim; // 0xf88(0x10)
	struct FString PreEmptyReloadPawn3PAnim; // 0xf98(0x10)
	struct FString PreEmptyReloadWeapon1PAnim; // 0xfa8(0x10)
	struct FString PreEmptyReloadWeapon3PAnim; // 0xfb8(0x10)
	struct FString RefillingPawn1PAnim; // 0xfc8(0x10)
	struct FString RefillingPawn3PAnim; // 0xfd8(0x10)
	struct FString RefillingWeapon1PAnim; // 0xfe8(0x10)
	struct FString RefillingWeapon3PAnim; // 0xff8(0x10)
	struct FString EmptyReloadPawn1PAnim0; // 0x1008(0x10)
	struct FString EmptyReloadPawn3PAnim0; // 0x1018(0x10)
	struct FString EmptyReloadWeapon1PAnim0; // 0x1028(0x10)
	struct FString EmptyReloadWeapon3PAnim0; // 0x1038(0x10)
	struct FString EmptyReloadPawn1PAnim1; // 0x1048(0x10)
	struct FString EmptyReloadPawn3PAnim1; // 0x1058(0x10)
	struct FString EmptyReloadWeapon1PAnim1; // 0x1068(0x10)
	struct FString EmptyReloadWeapon3PAnim1; // 0x1078(0x10)
	struct FString EmptyReloadPawn1PAnim2; // 0x1088(0x10)
	struct FString EmptyReloadPawn3PAnim2; // 0x1098(0x10)
	struct FString EmptyReloadWeapon1PAnim2; // 0x10a8(0x10)
	struct FString EmptyReloadWeapon3PAnim2; // 0x10b8(0x10)
	struct FString EmptyReloadPawn1PAnim3; // 0x10c8(0x10)
	struct FString EmptyReloadPawn3PAnim3; // 0x10d8(0x10)
	struct FString EmptyReloadWeapon1PAnim3; // 0x10e8(0x10)
	struct FString EmptyReloadWeapon3PAnim3; // 0x10f8(0x10)
	struct FString EmptyReloadPawn1PAnim4; // 0x1108(0x10)
	struct FString EmptyReloadPawn3PAnim4; // 0x1118(0x10)
	struct FString EmptyReloadWeapon1PAnim4; // 0x1128(0x10)
	struct FString EmptyReloadWeapon3PAnim4; // 0x1138(0x10)
	struct FString PostEmptyReloadPawn1PAnim; // 0x1148(0x10)
	struct FString PostEmptyReloadPawn3PAnim; // 0x1158(0x10)
	struct FString PostEmptyReloadWeapon1PAnim; // 0x1168(0x10)
	struct FString PostEmptyReloadWeapon3PAnim; // 0x1178(0x10)
	struct FString MeleePawn1PAnim; // 0x1188(0x10)
	struct FString MeleePawn3PAnim; // 0x1198(0x10)
	struct FString MeleeWeapon1PAnim; // 0x11a8(0x10)
	struct FString MeleeWeapon3PAnim; // 0x11b8(0x10)
	struct FString FirePawn1PAnim0; // 0x11c8(0x10)
	struct FString FirePawn3PAnim0; // 0x11d8(0x10)
	struct FString FireWeapon1PAnim0; // 0x11e8(0x10)
	struct FString FireWeapon3PAnim0; // 0x11f8(0x10)
	struct FString FirePawn1PAnim1; // 0x1208(0x10)
	struct FString FirePawn3PAnim1; // 0x1218(0x10)
	struct FString FireWeapon1PAnim1; // 0x1228(0x10)
	struct FString FireWeapon3PAnim1; // 0x1238(0x10)
	struct FString FirePawn1PAnim2; // 0x1248(0x10)
	struct FString FirePawn3PAnim2; // 0x1258(0x10)
	struct FString FireWeapon1PAnim2; // 0x1268(0x10)
	struct FString FireWeapon3PAnim2; // 0x1278(0x10)
	struct FString FirePawn1PAnim3; // 0x1288(0x10)
	struct FString FirePawn3PAnim3; // 0x1298(0x10)
	struct FString FireWeapon1PAnim3; // 0x12a8(0x10)
	struct FString FireWeapon3PAnim3; // 0x12b8(0x10)
	struct FString FirePawn1PAnim4; // 0x12c8(0x10)
	struct FString FirePawn3PAnim4; // 0x12d8(0x10)
	struct FString FireWeapon1PAnim4; // 0x12e8(0x10)
	struct FString FireWeapon3PAnim4; // 0x12f8(0x10)
	struct FString TacticalReloadPawn1PAnim0; // 0x1308(0x10)
	struct FString TacticalReloadPawn3PAnim0; // 0x1318(0x10)
	struct FString TacticalReloadWeapon1PAnim0; // 0x1328(0x10)
	struct FString TacticalReloadWeapon3PAnim0; // 0x1338(0x10)
	struct FString TacticalReloadPawn1PAnim1; // 0x1348(0x10)
	struct FString TacticalReloadPawn3PAnim1; // 0x1358(0x10)
	struct FString TacticalReloadWeapon1PAnim1; // 0x1368(0x10)
	struct FString TacticalReloadWeapon3PAnim1; // 0x1378(0x10)
	struct FString TacticalReloadPawn1PAnim2; // 0x1388(0x10)
	struct FString TacticalReloadPawn3PAnim2; // 0x1398(0x10)
	struct FString TacticalReloadWeapon1PAnim2; // 0x13a8(0x10)
	struct FString TacticalReloadWeapon3PAnim2; // 0x13b8(0x10)
	struct FString TacticalReloadPawn1PAnim3; // 0x13c8(0x10)
	struct FString TacticalReloadPawn3PAnim3; // 0x13d8(0x10)
	struct FString TacticalReloadWeapon1PAnim3; // 0x13e8(0x10)
	struct FString TacticalReloadWeapon3PAnim3; // 0x13f8(0x10)
	struct FString TacticalReloadPawn1PAnim4; // 0x1408(0x10)
	struct FString TacticalReloadPawn3PAnim4; // 0x1418(0x10)
	struct FString TacticalReloadWeapon1PAnim4; // 0x1428(0x10)
	struct FString TacticalReloadWeapon3PAnim4; // 0x1438(0x10)
	struct FString PreReloadPawn1PAnim0; // 0x1448(0x10)
	struct FString PreReloadPawn3PAnim0; // 0x1458(0x10)
	struct FString PreReloadWeapon1PAnim0; // 0x1468(0x10)
	struct FString PreReloadWeapon3PAnim0; // 0x1478(0x10)
	struct FString PreReloadPawn1PAnim1; // 0x1488(0x10)
	struct FString PreReloadPawn3PAnim1; // 0x1498(0x10)
	struct FString PreReloadWeapon1PAnim1; // 0x14a8(0x10)
	struct FString PreReloadWeapon3PAnim1; // 0x14b8(0x10)
	struct FString PreReloadPawn1PAnim2; // 0x14c8(0x10)
	struct FString PreReloadPawn3PAnim2; // 0x14d8(0x10)
	struct FString PreReloadWeapon1PAnim2; // 0x14e8(0x10)
	struct FString PreReloadWeapon3PAnim2; // 0x14f8(0x10)
	struct FString PreReloadPawn1PAnim3; // 0x1508(0x10)
	struct FString PreReloadPawn3PAnim3; // 0x1518(0x10)
	struct FString PreReloadWeapon1PAnim3; // 0x1528(0x10)
	struct FString PreReloadWeapon3PAnim3; // 0x1538(0x10)
	struct FString PreReloadPawn1PAnim4; // 0x1548(0x10)
	struct FString PreReloadPawn3PAnim4; // 0x1558(0x10)
	struct FString PreReloadWeapon1PAnim4; // 0x1568(0x10)
	struct FString PreReloadWeapon3PAnim4; // 0x1578(0x10)
	struct FString ReloadPawn1PAnim0; // 0x1588(0x10)
	struct FString ReloadPawn3PAnim0; // 0x1598(0x10)
	struct FString ReloadWeapon1PAnim0; // 0x15a8(0x10)
	struct FString ReloadWeapon3PAnim0; // 0x15b8(0x10)
	struct FString ReloadPawn1PAnim1; // 0x15c8(0x10)
	struct FString ReloadPawn3PAnim1; // 0x15d8(0x10)
	struct FString ReloadWeapon1PAnim1; // 0x15e8(0x10)
	struct FString ReloadWeapon3PAnim1; // 0x15f8(0x10)
	struct FString ReloadPawn1PAnim2; // 0x1608(0x10)
	struct FString ReloadPawn3PAnim2; // 0x1618(0x10)
	struct FString ReloadWeapon1PAnim2; // 0x1628(0x10)
	struct FString ReloadWeapon3PAnim2; // 0x1638(0x10)
	struct FString ReloadPawn1PAnim3; // 0x1648(0x10)
	struct FString ReloadPawn3PAnim3; // 0x1658(0x10)
	struct FString ReloadWeapon1PAnim3; // 0x1668(0x10)
	struct FString ReloadWeapon3PAnim3; // 0x1678(0x10)
	struct FString ReloadPawn1PAnim4; // 0x1688(0x10)
	struct FString ReloadPawn3PAnim4; // 0x1698(0x10)
	struct FString ReloadWeapon1PAnim4; // 0x16a8(0x10)
	struct FString ReloadWeapon3PAnim4; // 0x16b8(0x10)
	struct FString ReloadOneBulletPawn1PAnim0; // 0x16c8(0x10)
	struct FString ReloadOneBulletPawn3PAnim0; // 0x16d8(0x10)
	struct FString ReloadOneBulletWeapon1PAnim0; // 0x16e8(0x10)
	struct FString ReloadOneBulletWeapon3PAnim0; // 0x16f8(0x10)
	struct FString ReloadOneBulletPawn1PAnim1; // 0x1708(0x10)
	struct FString ReloadOneBulletPawn3PAnim1; // 0x1718(0x10)
	struct FString ReloadOneBulletWeapon1PAnim1; // 0x1728(0x10)
	struct FString ReloadOneBulletWeapon3PAnim1; // 0x1738(0x10)
	struct FString ReloadOneBulletPawn1PAnim2; // 0x1748(0x10)
	struct FString ReloadOneBulletPawn3PAnim2; // 0x1758(0x10)
	struct FString ReloadOneBulletWeapon1PAnim2; // 0x1768(0x10)
	struct FString ReloadOneBulletWeapon3PAnim2; // 0x1778(0x10)
	struct FString ReloadOneBulletPawn1PAnim3; // 0x1788(0x10)
	struct FString ReloadOneBulletPawn3PAnim3; // 0x1798(0x10)
	struct FString ReloadOneBulletWeapon1PAnim3; // 0x17a8(0x10)
	struct FString ReloadOneBulletWeapon3PAnim3; // 0x17b8(0x10)
	struct FString ReloadOneBulletPawn1PAnim4; // 0x17c8(0x10)
	struct FString ReloadOneBulletPawn3PAnim4; // 0x17d8(0x10)
	struct FString ReloadOneBulletWeapon1PAnim4; // 0x17e8(0x10)
	struct FString ReloadOneBulletWeapon3PAnim4; // 0x17f8(0x10)
	struct FString PostReloadPawn1PAnim0; // 0x1808(0x10)
	struct FString PostReloadPawn3PAnim0; // 0x1818(0x10)
	struct FString PostReloadWeapon1PAnim0; // 0x1828(0x10)
	struct FString PostReloadWeapon3PAnim0; // 0x1838(0x10)
	struct FString PostReloadPawn1PAnim1; // 0x1848(0x10)
	struct FString PostReloadPawn3PAnim1; // 0x1858(0x10)
	struct FString PostReloadWeapon1PAnim1; // 0x1868(0x10)
	struct FString PostReloadWeapon3PAnim1; // 0x1878(0x10)
	struct FString PostReloadPawn1PAnim2; // 0x1888(0x10)
	struct FString PostReloadPawn3PAnim2; // 0x1898(0x10)
	struct FString PostReloadWeapon1PAnim2; // 0x18a8(0x10)
	struct FString PostReloadWeapon3PAnim2; // 0x18b8(0x10)
	struct FString PostReloadPawn1PAnim3; // 0x18c8(0x10)
	struct FString PostReloadPawn3PAnim3; // 0x18d8(0x10)
	struct FString PostReloadWeapon1PAnim3; // 0x18e8(0x10)
	struct FString PostReloadWeapon3PAnim3; // 0x18f8(0x10)
	struct FString PostReloadPawn1PAnim4; // 0x1908(0x10)
	struct FString PostReloadPawn3PAnim4; // 0x1918(0x10)
	struct FString PostReloadWeapon1PAnim4; // 0x1928(0x10)
	struct FString PostReloadWeapon3PAnim4; // 0x1938(0x10)
	struct FString PreFirePawn1PAnim0; // 0x1948(0x10)
	struct FString PreFirePawn3PAnim0; // 0x1958(0x10)
	struct FString PreFireWeapon1PAnim0; // 0x1968(0x10)
	struct FString PreFireWeapon3PAnim0; // 0x1978(0x10)
	struct FString PreFirePawn1PAnim1; // 0x1988(0x10)
	struct FString PreFirePawn3PAnim1; // 0x1998(0x10)
	struct FString PreFireWeapon1PAnim1; // 0x19a8(0x10)
	struct FString PreFireWeapon3PAnim1; // 0x19b8(0x10)
	struct FString PreFirePawn1PAnim2; // 0x19c8(0x10)
	struct FString PreFirePawn3PAnim2; // 0x19d8(0x10)
	struct FString PreFireWeapon1PAnim2; // 0x19e8(0x10)
	struct FString PreFireWeapon3PAnim2; // 0x19f8(0x10)
	struct FString PreFirePawn1PAnim3; // 0x1a08(0x10)
	struct FString PreFirePawn3PAnim3; // 0x1a18(0x10)
	struct FString PreFireWeapon1PAnim3; // 0x1a28(0x10)
	struct FString PreFireWeapon3PAnim3; // 0x1a38(0x10)
	struct FString PreFirePawn1PAnim4; // 0x1a48(0x10)
	struct FString PreFirePawn3PAnim4; // 0x1a58(0x10)
	struct FString PreFireWeapon1PAnim4; // 0x1a68(0x10)
	struct FString PreFireWeapon3PAnim4; // 0x1a78(0x10)
	struct FString PostFirePawn1PAnim0; // 0x1a88(0x10)
	struct FString PostFirePawn3PAnim0; // 0x1a98(0x10)
	struct FString PostFireWeapon1PAnim0; // 0x1aa8(0x10)
	struct FString PostFireWeapon3PAnim0; // 0x1ab8(0x10)
	struct FString PostFirePawn1PAnim1; // 0x1ac8(0x10)
	struct FString PostFirePawn3PAnim1; // 0x1ad8(0x10)
	struct FString PostFireWeapon1PAnim1; // 0x1ae8(0x10)
	struct FString PostFireWeapon3PAnim1; // 0x1af8(0x10)
	struct FString PostFirePawn1PAnim2; // 0x1b08(0x10)
	struct FString PostFirePawn3PAnim2; // 0x1b18(0x10)
	struct FString PostFireWeapon1PAnim2; // 0x1b28(0x10)
	struct FString PostFireWeapon3PAnim2; // 0x1b38(0x10)
	struct FString PostFirePawn1PAnim3; // 0x1b48(0x10)
	struct FString PostFirePawn3PAnim3; // 0x1b58(0x10)
	struct FString PostFireWeapon1PAnim3; // 0x1b68(0x10)
	struct FString PostFireWeapon3PAnim3; // 0x1b78(0x10)
	struct FString PostFirePawn1PAnim4; // 0x1b88(0x10)
	struct FString PostFirePawn3PAnim4; // 0x1b98(0x10)
	struct FString PostFireWeapon1PAnim4; // 0x1ba8(0x10)
	struct FString PostFireWeapon3PAnim4; // 0x1bb8(0x10)
	struct FString OpeningEquipPawn1PAnim; // 0x1bc8(0x10)
	struct FString OpeningEquipPawn3PAnim; // 0x1bd8(0x10)
	struct FString OpeningEquipWeapon1PAnim; // 0x1be8(0x10)
	struct FString OpeningEquipWeapon3PAnim; // 0x1bf8(0x10)
	struct FString EquipPawn1PAnim; // 0x1c08(0x10)
	struct FString EquipPawn3PAnim; // 0x1c18(0x10)
	struct FString EquipWeapon1PAnim; // 0x1c28(0x10)
	struct FString EquipWeapon3PAnim; // 0x1c38(0x10)
	struct FString UnequipPawn1PAnim; // 0x1c48(0x10)
	struct FString UnequipPawn3PAnim; // 0x1c58(0x10)
	struct FString UnequipWeapon1PAnim; // 0x1c68(0x10)
	struct FString UnequipWeapon3PAnim; // 0x1c78(0x10)
	struct FString EquipSequence; // 0x1c88(0x10)
	struct FString LoopedFireAnim; // 0x1c98(0x10)
	struct FString InfiniteAmmo; // 0x1ca8(0x10)
	struct FString InfiniteClip; // 0x1cb8(0x10)
	struct FString ShowHitMessage; // 0x1cc8(0x10)
	struct FString ShowDebugWeaponState; // 0x1cd8(0x10)
	struct FString DebugSwitch; // 0x1ce8(0x10)
	struct FString BPPreview; // 0x1cf8(0x10)
	struct FPBRayProejctileModifyData RayProjectileModifyData; // 0x1d08(0x3f0)
	struct TArray<FieldPathProperty> ValidProperties; // 0x20f8(0x10)
};

// ScriptStruct ProjectBoundary.PBRayProejctileModifyData
// Size: 0x3f0 (Inherited: 0x00)
struct FPBRayProejctileModifyData {
	struct FPBRayProejctileModifyData_BaseConfig BaseConfigModifyData; // 0x00(0xd8)
	struct FPBRayProejctileModifyData_NormalDamage NormalDamageModifyData; // 0xd8(0x98)
	struct FPBRayProejctileModifyData_EMPConfig EMPConfigModifyData; // 0x170(0xa8)
	struct FPBRayProejctileModifyData_ExplosionConfig ExplosionConfigModifyData; // 0x218(0x118)
	struct FPBRayProejctileModifyData_StunConfig StunConfigModifyData; // 0x330(0xb0)
	struct FPBRayProejctileModifyData_DetonatorConfig DetonatorConfigModifyData; // 0x3e0(0x0c)
	char pad_3EC[0x4]; // 0x3ec(0x04)
};

// ScriptStruct ProjectBoundary.PBRayProejctileModifyData_DetonatorConfig
// Size: 0x0c (Inherited: 0x00)
struct FPBRayProejctileModifyData_DetonatorConfig {
	struct FPBValueModifyData_Float Radius; // 0x00(0x08)
	struct FPBValueModifyData_Bool Enable; // 0x08(0x02)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct ProjectBoundary.PBValueModifyData_General
// Size: 0x01 (Inherited: 0x00)
struct FPBValueModifyData_General {
	enum class EPBModifyDataMethod_General Method; // 0x00(0x01)
};

// ScriptStruct ProjectBoundary.PBValueModifyData_Bool
// Size: 0x02 (Inherited: 0x01)
struct FPBValueModifyData_Bool : FPBValueModifyData_General {
	bool NewValue; // 0x01(0x01)
};

// ScriptStruct ProjectBoundary.PBValueModifyData_Float
// Size: 0x08 (Inherited: 0x00)
struct FPBValueModifyData_Float {
	float NewValue; // 0x00(0x04)
	enum class EPBModifyDataMethod_Float Method; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ProjectBoundary.PBRayProejctileModifyData_StunConfig
// Size: 0xb0 (Inherited: 0x00)
struct FPBRayProejctileModifyData_StunConfig {
	struct FPBValueModifyData_PBRadialDamageParams BaseRadialDamage; // 0x00(0x70)
	struct FPBValueModifyData_Class DamageType; // 0x70(0x30)
	struct FPBValueModifyData_Float HitDamage; // 0xa0(0x08)
	struct FPBValueModifyData_Bool Enable; // 0xa8(0x02)
	char pad_AA[0x6]; // 0xaa(0x06)
};

// ScriptStruct ProjectBoundary.PBValueModifyData_Class
// Size: 0x30 (Inherited: 0x00)
struct FPBValueModifyData_Class {
	SoftClassProperty NewValue; // 0x00(0x28)
	enum class EPBModifyDataMethod_General Method; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ProjectBoundary.PBValueModifyData_PBRadialDamageParams
// Size: 0x70 (Inherited: 0x01)
struct FPBValueModifyData_PBRadialDamageParams : FPBValueModifyData_General {
	char pad_1[0x7]; // 0x01(0x07)
	struct FPBRadialDamageParams NewValue; // 0x08(0x68)
};

// ScriptStruct ProjectBoundary.PBRadialDamageParams
// Size: 0x68 (Inherited: 0x00)
struct FPBRadialDamageParams {
	struct FRadialDamageParams RadialConfig; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FName, float> PenetrationLevelMap; // 0x18(0x50)
};

// ScriptStruct ProjectBoundary.PBRayProejctileModifyData_ExplosionConfig
// Size: 0x118 (Inherited: 0x00)
struct FPBRayProejctileModifyData_ExplosionConfig {
	struct FPBValueModifyData_PBRadialDamageParams BaseRadialDamage; // 0x00(0x70)
	struct FPBValueModifyData_PBRadialDamageParams ArmorRadialDamage; // 0x70(0x70)
	struct FPBValueModifyData_Class DamageType; // 0xe0(0x30)
	struct FPBValueModifyData_Bool Enable; // 0x110(0x02)
	char pad_112[0x6]; // 0x112(0x06)
};

// ScriptStruct ProjectBoundary.PBRayProejctileModifyData_EMPConfig
// Size: 0xa8 (Inherited: 0x00)
struct FPBRayProejctileModifyData_EMPConfig {
	struct FPBValueModifyData_PBRadialDamageParams BaseRadialDamage; // 0x00(0x70)
	struct FPBValueModifyData_Class DamageType; // 0x70(0x30)
	struct FPBValueModifyData_Bool Enable; // 0xa0(0x02)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// ScriptStruct ProjectBoundary.PBRayProejctileModifyData_NormalDamage
// Size: 0x98 (Inherited: 0x00)
struct FPBRayProejctileModifyData_NormalDamage {
	struct FPBValueModifyData_Map_HitZoneDamageModifier HitZoneDamageModifierMap; // 0x00(0x58)
	struct FPBValueModifyData_Class DamageType; // 0x58(0x30)
	struct FPBValueModifyData_Float HitDamage; // 0x88(0x08)
	struct FPBValueModifyData_Float ArmorDamage; // 0x90(0x08)
};

// ScriptStruct ProjectBoundary.PBValueModifyData_Map
// Size: 0x01 (Inherited: 0x00)
struct FPBValueModifyData_Map {
	enum class EPBModifyDataMethod_Map Method; // 0x00(0x01)
};

// ScriptStruct ProjectBoundary.PBValueModifyData_Map_HitZoneDamageModifier
// Size: 0x58 (Inherited: 0x01)
struct FPBValueModifyData_Map_HitZoneDamageModifier : FPBValueModifyData_Map {
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<enum class EPBHitZone, float> NewValue; // 0x08(0x50)
};

// ScriptStruct ProjectBoundary.PBRayProejctileModifyData_BaseConfig
// Size: 0xd8 (Inherited: 0x00)
struct FPBRayProejctileModifyData_BaseConfig {
	struct FPBValueModifyData_Class ProjectileImpactTemplate; // 0x00(0x30)
	struct FPBValueModifyData_Object ProjectileAttachableImpactFX; // 0x30(0x30)
	struct FPBValueModifyData_Object BulletTrailFX; // 0x60(0x30)
	struct FPBValueModifyData_Object BulletSmokeLineFX; // 0x90(0x30)
	struct FPBValueModifyData_Float BulletSpeed; // 0xc0(0x08)
	struct FPBValueModifyData_Float BulletLifeSpan; // 0xc8(0x08)
	struct FPBValueModifyData_Bool ShouldExploedeBeforeTheEndOfLife; // 0xd0(0x02)
	char pad_D2[0x6]; // 0xd2(0x06)
};

// ScriptStruct ProjectBoundary.PBValueModifyData_Object
// Size: 0x30 (Inherited: 0x00)
struct FPBValueModifyData_Object {
	struct TSoftObjectPtr<struct UObject> NewValue; // 0x00(0x28)
	enum class EPBModifyDataMethod_General Method; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ProjectBoundary.PBPartConfigRow
// Size: 0x21d8 (Inherited: 0x2108)
struct FPBPartConfigRow : FPBWeaponConfigModifyData {
	struct UPartDataHolderComponent* PartClass; // 0x2108(0x08)
	struct FText M1P_DisplayName; // 0x2110(0x18)
	struct UStaticMesh* M1P_StaticMesh; // 0x2128(0x08)
	struct UStaticMesh* M1P_StaticMesh_Aiming; // 0x2130(0x08)
	struct USkeletalMesh* M1P_SkeletalMesh; // 0x2138(0x08)
	bool M1P_UsingSkeletalMesh; // 0x2140(0x01)
	bool M1P_DuplicateMesh; // 0x2141(0x01)
	char pad_2142[0x2]; // 0x2142(0x02)
	struct FVector M1P_RelativeLocation; // 0x2144(0x0c)
	struct FText M3P_DisplayName; // 0x2150(0x18)
	struct UStaticMesh* M3P_StaticMesh; // 0x2168(0x08)
	struct USkeletalMesh* M3P_SkeletalMesh; // 0x2170(0x08)
	bool M3P_UsingSkeletalMesh; // 0x2178(0x01)
	bool M3P_DuplicateMesh; // 0x2179(0x01)
	char pad_217A[0x2]; // 0x217a(0x02)
	struct FVector M3P_RelativeLocation; // 0x217c(0x0c)
	struct FText Part_DisplayName; // 0x2188(0x18)
	struct FText Part_Discription; // 0x21a0(0x18)
	struct UTexture2D* Part_Image; // 0x21b8(0x08)
	struct FName PartGroupName; // 0x21c0(0x08)
	struct FName AttachSocketName; // 0x21c8(0x08)
	float PairInstallOffset; // 0x21d0(0x04)
	bool OverrideAttachSocket; // 0x21d4(0x01)
	char pad_21D5[0x3]; // 0x21d5(0x03)
};

// ScriptStruct ProjectBoundary.PartDisplayInfo
// Size: 0x38 (Inherited: 0x00)
struct FPartDisplayInfo {
	struct FText DisplayName; // 0x00(0x18)
	struct FText Discription; // 0x18(0x18)
	struct UTexture2D* Image; // 0x30(0x08)
};

// ScriptStruct ProjectBoundary.PartMeshData
// Size: 0x38 (Inherited: 0x00)
struct FPartMeshData {
	struct FText DisplayName; // 0x00(0x18)
	struct UStaticMesh* StaticMesh; // 0x18(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x20(0x08)
	bool UsingSkeletalMesh; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FVector RelativeLocation; // 0x2c(0x0c)
};

// ScriptStruct ProjectBoundary.PBGameplayEffectContainerSpec
// Size: 0x38 (Inherited: 0x00)
struct FPBGameplayEffectContainerSpec {
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x00(0x28)
	struct TArray<struct FGameplayEffectSpecHandle> TargetGameplayEffectSpecs; // 0x28(0x10)
};

// ScriptStruct ProjectBoundary.PBGameplayEffectContainer
// Size: 0x18 (Inherited: 0x00)
struct FPBGameplayEffectContainer {
	struct UPBTargetType* TargetType; // 0x00(0x08)
	struct TArray<struct UGameplayEffect*> TargetGameplayEffectClasses; // 0x08(0x10)
};

// ScriptStruct ProjectBoundary.PBActionTeam_UI
// Size: 0x30 (Inherited: 0x00)
struct FPBActionTeam_UI {
	int32_t CurrentPlayersCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText CurrentPlayersCountText; // 0x08(0x18)
	struct TArray<struct APBLobbyPlayerState*> Players; // 0x20(0x10)
};

// ScriptStruct ProjectBoundary.PBAimingTarget
// Size: 0x10 (Inherited: 0x00)
struct FPBAimingTarget {
	struct UPBDynamicMarkableComponent* Target; // 0x00(0x08)
	struct FName TargetSocket; // 0x08(0x08)
};

// ScriptStruct ProjectBoundary.PBNavigationQueryTask
// Size: 0x138 (Inherited: 0x00)
struct FPBNavigationQueryTask {
	struct FPBNavigationQueryData Data; // 0x00(0x128)
	struct FDelegate ResultHandler; // 0x128(0x10)
};

// ScriptStruct ProjectBoundary.PriorityQueue
// Size: 0x10 (Inherited: 0x00)
struct FPriorityQueue {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PriorityPredicate
// Size: 0x01 (Inherited: 0x00)
struct FPriorityPredicate {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ProjectBoundary.VolumeNode
// Size: 0x10 (Inherited: 0x00)
struct FVolumeNode {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PBNavVoxelXYZ
// Size: 0x10 (Inherited: 0x00)
struct FPBNavVoxelXYZ {
	struct TArray<struct FPBNavVoxelX> X; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PBNavVoxelX
// Size: 0x10 (Inherited: 0x00)
struct FPBNavVoxelX {
	struct TArray<struct FPBNavVoxelY> Y; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PBNavVoxelY
// Size: 0x10 (Inherited: 0x00)
struct FPBNavVoxelY {
	struct TArray<struct FPBNavigationVoxel> Z; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PBNavigationVoxel
// Size: 0x1c (Inherited: 0x00)
struct FPBNavigationVoxel {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct ProjectBoundary.PBTeamSettleInfo_UI
// Size: 0x20 (Inherited: 0x00)
struct FPBTeamSettleInfo_UI {
	struct TArray<struct FPlayerMatchResultInfo> TeamInfo; // 0x00(0x10)
	int32_t TeamScore; // 0x10(0x04)
	int32_t TeamID; // 0x14(0x04)
	int32_t TeamNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ProjectBoundary.PBBeDisabledInfo
// Size: 0x30 (Inherited: 0x00)
struct FPBBeDisabledInfo {
	float DamageTaken; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDamageEvent DamageEvent; // 0x08(0x10)
	struct TWeakObjectPtr<struct APawn> PawnInstigator; // 0x18(0x08)
	struct TWeakObjectPtr<struct AActor> DamageCauser; // 0x20(0x08)
	char bIsBeDisabled : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ProjectBoundary.PBNewItemInfo
// Size: 0x28 (Inherited: 0x00)
struct FPBNewItemInfo {
	struct UTexture2D* ItemTexture; // 0x00(0x08)
	struct FText ItemName; // 0x08(0x18)
	enum class EPBNewItemType NewItemType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ProjectBoundary.PBBattleBoard_UI
// Size: 0x50 (Inherited: 0x00)
struct FPBBattleBoard_UI {
	struct FName MapName; // 0x00(0x08)
	struct FText ModeName; // 0x08(0x18)
	struct FText RemainTime; // 0x20(0x18)
	bool bMuteAll; // 0x38(0x01)
	bool bMute; // 0x39(0x01)
	bool bPendingMySelf; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct APBPlayerState* PendingSetMutePlayer; // 0x40(0x08)
	int32_t TeamNum; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ProjectBoundary.PBBrakingModuleConfig
// Size: 0x10 (Inherited: 0x00)
struct FPBBrakingModuleConfig {
	float Force; // 0x00(0x04)
	float Friction; // 0x04(0x04)
	float UsingEnginePerSecond; // 0x08(0x04)
	float EnergyConsumeMultiplier_OffsetRecoil; // 0x0c(0x04)
};

// ScriptStruct ProjectBoundary.PBCatchingConfig
// Size: 0x2c (Inherited: 0x00)
struct FPBCatchingConfig {
	float SnapForce; // 0x00(0x04)
	float MaxSnappingSpeed; // 0x04(0x04)
	float SnapAngle; // 0x08(0x04)
	float HookSpeed; // 0x0c(0x04)
	float HookRecyclingSpeed; // 0x10(0x04)
	float HookCoolDown; // 0x14(0x04)
	float ForcedStopAngle; // 0x18(0x04)
	float ForceStopSnapDistance; // 0x1c(0x04)
	float SnappingStopperDistance; // 0x20(0x04)
	float HookLaunchMaxDistance; // 0x24(0x04)
	float HookSphereTraceRadius; // 0x28(0x04)
};

// ScriptStruct ProjectBoundary.PBChallengeCount
// Size: 0x38 (Inherited: 0x00)
struct FPBChallengeCount {
	struct FName ChallengeId; // 0x00(0x08)
	int32_t SlotId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> ConditionKeys; // 0x10(0x10)
	struct TArray<int64_t> ConditionValues; // 0x20(0x10)
	bool bCompleted; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ProjectBoundary.PBChallenge_UI
// Size: 0x58 (Inherited: 0x00)
struct FPBChallenge_UI {
	struct FName ChallengeName; // 0x00(0x08)
	struct TMap<struct FName, int64_t> ChallengeMap; // 0x08(0x50)
};

// ScriptStruct ProjectBoundary.PBZeroHealthInfo
// Size: 0x20 (Inherited: 0x00)
struct FPBZeroHealthInfo {
	struct TWeakObjectPtr<struct APawn> PawnInstigator; // 0x00(0x08)
	struct FDamageEvent DamageEvent; // 0x08(0x10)
	float BeKilledImpulseFromAmmo; // 0x18(0x04)
	char bIsZeroHealth : 1; // 0x1c(0x01)
	char bIsDead : 1; // 0x1c(0x01)
	char bIsDisabled : 1; // 0x1c(0x01)
	char pad_1C_3 : 5; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct ProjectBoundary.PBJetConfig
// Size: 0x10 (Inherited: 0x00)
struct FPBJetConfig {
	struct UCameraShakeBase* CameraShake; // 0x00(0x08)
	float FOV; // 0x08(0x04)
	float FOVInterpSpeed; // 0x0c(0x04)
};

// ScriptStruct ProjectBoundary.PBCharacterConfig
// Size: 0x04 (Inherited: 0x00)
struct FPBCharacterConfig {
	float Mass; // 0x00(0x04)
};

// ScriptStruct ProjectBoundary.PBMovementConfig
// Size: 0x44 (Inherited: 0x00)
struct FPBMovementConfig {
	float TotalMass; // 0x00(0x04)
	float MaxFlySpeed; // 0x04(0x04)
	float MaxJetSpeed; // 0x08(0x04)
	float MaxDashSpeed; // 0x0c(0x04)
	float MaxSnappingSpeed; // 0x10(0x04)
	float MaxFlySpeedInVehicleDown; // 0x14(0x04)
	float MaxFlyAcceleration; // 0x18(0x04)
	float MaxFlyAccelerationInEMP; // 0x1c(0x04)
	float MaxJetAcceleration; // 0x20(0x04)
	float MaxDashAcceleration; // 0x24(0x04)
	float MaxClimbAccleration; // 0x28(0x04)
	float MaxSnappingAcceleration; // 0x2c(0x04)
	float MaxActiveBrakingDeceleration; // 0x30(0x04)
	float ClampMaxSpeedDeceleration; // 0x34(0x04)
	float ExcludeBrakingDeceleration; // 0x38(0x04)
	float ActiveBrakingFriction; // 0x3c(0x04)
	float DashInterruptSpeed; // 0x40(0x04)
};

// ScriptStruct ProjectBoundary.PBControlCapability
// Size: 0x68 (Inherited: 0x00)
struct FPBControlCapability {
	float PostFireDurationScaler; // 0x00(0x04)
	float RecoilScaler; // 0x04(0x04)
	struct FVector PivotNormalRotationTotalBounceScaler; // 0x08(0x0c)
	struct FVector WeaponNormalRotationTotalBounceScaler; // 0x14(0x0c)
	struct FVector PivotNormalTranslationTotalBounceScaler; // 0x20(0x0c)
	struct FVector WeaponNormalTranslationTotalBounceScaler; // 0x2c(0x0c)
	struct FVector PivotTargetingRotationTotalBounceScaler; // 0x38(0x0c)
	struct FVector WeaponTargetingRotationTotalBounceScaler; // 0x44(0x0c)
	struct FVector PivotTargetingTranslationTotalBounceScaler; // 0x50(0x0c)
	struct FVector WeaponTargetingTranslationTotalBounceScaler; // 0x5c(0x0c)
};

// ScriptStruct ProjectBoundary.PBCaughtData
// Size: 0x30 (Inherited: 0x00)
struct FPBCaughtData {
	struct AActor* CaughtObject; // 0x00(0x08)
	struct UActorComponent* CaughtComponent; // 0x08(0x08)
	struct FVector CaughtLocation; // 0x10(0x0c)
	struct FVector SurfaceNormal; // 0x1c(0x0c)
	enum class ECatchedObjectType CaughtObjectType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ProjectBoundary.SurfaceCatching
// Size: 0x68 (Inherited: 0x00)
struct FSurfaceCatching {
	struct UCameraShakeBase* OnCatchCameraShake; // 0x00(0x08)
	struct UCameraShakeBase* OnDetachCameraShake; // 0x08(0x08)
	struct UCurveFloat* DetachInputScale; // 0x10(0x08)
	struct UCurveFloat* FeetInputScale; // 0x18(0x08)
	struct UCurveFloat* CrouchInputScale; // 0x20(0x08)
	struct UCurveFloat* CatchedInputScale; // 0x28(0x08)
	enum class ESurfaceCatchingMode SurfaceCatchingMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MoveableDistance; // 0x34(0x04)
	float FeetDistance; // 0x38(0x04)
	float FeetCatchingAngle; // 0x3c(0x04)
	float AutoCatchDistance; // 0x40(0x04)
	float AutoCatchVelocity; // 0x44(0x04)
	float UpdateSurfaceAngle; // 0x48(0x04)
	float CatchingDistance; // 0x4c(0x04)
	float CatchingTraceSphereRadius; // 0x50(0x04)
	float CatchingCoolDown; // 0x54(0x04)
	float CatchableHintSizeMin; // 0x58(0x04)
	float CatchableHintSizeMax; // 0x5c(0x04)
	char bFollowAnimPropRotation : 1; // 0x60(0x01)
	char bEnableCharacterCatching : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct ProjectBoundary.PBCameraMoveSlideConfig
// Size: 0x18 (Inherited: 0x00)
struct FPBCameraMoveSlideConfig {
	struct FVector RotationScaler; // 0x00(0x0c)
	struct FVector LocationScaler; // 0x0c(0x0c)
};

// ScriptStruct ProjectBoundary.PBCameraShakeConfig
// Size: 0xa0 (Inherited: 0x00)
struct FPBCameraShakeConfig {
	struct FPBCameraShakeItemConfig IdleConfig; // 0x00(0x20)
	struct FPBCameraShakeItemConfig RunningConfig; // 0x20(0x20)
	struct FPBCameraShakeItemConfig DashConfig; // 0x40(0x20)
	struct FPBCameraShakeItemConfig CatchedConfig; // 0x60(0x20)
	struct FPBCameraShakeItemConfig BrakingConfig; // 0x80(0x20)
};

// ScriptStruct ProjectBoundary.PBCameraShakeItemConfig
// Size: 0x20 (Inherited: 0x00)
struct FPBCameraShakeItemConfig {
	struct FVector ShakeRotationScaler; // 0x00(0x0c)
	struct FVector ShakeLocationScaler; // 0x0c(0x0c)
	float ShakeRate; // 0x18(0x04)
	char bUseDecay : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct ProjectBoundary.PBHitZoneDefenseData
// Size: 0x08 (Inherited: 0x00)
struct FPBHitZoneDefenseData {
	float DamageModifier; // 0x00(0x04)
	float HitZoneThickness; // 0x04(0x04)
};

// ScriptStruct ProjectBoundary.SightAimOffset
// Size: 0x100 (Inherited: 0x08)
struct FSightAimOffset : FTableRowBase {
	struct FString SightID; // 0x08(0x10)
	struct FString SightName; // 0x18(0x10)
	struct FVector AR; // 0x28(0x0c)
	struct FVector DMR; // 0x34(0x0c)
	struct FVector IDW; // 0x40(0x0c)
	struct FVector SMG; // 0x4c(0x0c)
	struct FVector SG; // 0x58(0x0c)
	struct FVector MG; // 0x64(0x0c)
	struct FVector PSR; // 0x70(0x0c)
	struct FVector AMR; // 0x7c(0x0c)
	struct FVector MSP; // 0x88(0x0c)
	struct FVector PCC; // 0x94(0x0c)
	struct FVector AK; // 0xa0(0x0c)
	struct FVector LP; // 0xac(0x0c)
	struct FVector PSRF; // 0xb8(0x0c)
	struct FVector RPK; // 0xc4(0x0c)
	struct FVector KP9; // 0xd0(0x0c)
	struct FVector MosinNagant; // 0xdc(0x0c)
	struct FVector IAR; // 0xe8(0x0c)
	struct FVector Test; // 0xf4(0x0c)
};

// ScriptStruct ProjectBoundary.DefaultPoseOffset
// Size: 0x78 (Inherited: 0x08)
struct FDefaultPoseOffset : FTableRowBase {
	struct FString SightID; // 0x08(0x10)
	struct FString SightName; // 0x18(0x10)
	struct TMap<struct FName, struct FDefaultPoseOffsetTransform> OffsetMap; // 0x28(0x50)
};

// ScriptStruct ProjectBoundary.DefaultPoseOffsetTransform
// Size: 0x20 (Inherited: 0x08)
struct FDefaultPoseOffsetTransform : FTableRowBase {
	struct FVector LocationOffset; // 0x08(0x0c)
	struct FRotator RotationOffset; // 0x14(0x0c)
};

// ScriptStruct ProjectBoundary.PBTPAnimationIKVariable
// Size: 0x10 (Inherited: 0x00)
struct FPBTPAnimationIKVariable {
	float FootTestIsHit; // 0x00(0x04)
	struct FVector FootIKOffet_AfterInterp; // 0x04(0x0c)
};

// ScriptStruct ProjectBoundary.PBTPAnimationVariable
// Size: 0x58 (Inherited: 0x00)
struct FPBTPAnimationVariable {
	bool bUseingLauncher; // 0x00(0x01)
	bool bIsFootOnWall; // 0x01(0x01)
	bool bShouldAttach; // 0x02(0x01)
	bool bIsCharacterADS; // 0x03(0x01)
	float ZUpValue; // 0x04(0x04)
	float ZMovementAlpha; // 0x08(0x04)
	float YForwardValue; // 0x0c(0x04)
	float FBMoveValue; // 0x10(0x04)
	float CurrentAcc; // 0x14(0x04)
	float CurrentAccZ; // 0x18(0x04)
	float WalkDirection_FB; // 0x1c(0x04)
	float WalkSpeed_Interped; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UAnimSequenceBase* PawnIdlePose; // 0x28(0x08)
	struct UAnimSequenceBase* PawnADSPose; // 0x30(0x08)
	struct UAnimSequenceBase* CQBAiming; // 0x38(0x08)
	struct UAnimSequenceBase* CQBIdle; // 0x40(0x08)
	struct FVector RotatedRotator; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ProjectBoundary.PBFriendChatMessageSaved
// Size: 0x20 (Inherited: 0x00)
struct FPBFriendChatMessageSaved {
	struct FString FrinedID; // 0x00(0x10)
	struct TArray<struct FPBSingleMessageData> SavedMessages; // 0x10(0x10)
};

// ScriptStruct ProjectBoundary.PBSingleMessageData
// Size: 0x20 (Inherited: 0x00)
struct FPBSingleMessageData {
	struct FString SenderID; // 0x00(0x10)
	struct FString Message; // 0x10(0x10)
};

// ScriptStruct ProjectBoundary.PBChatStyle
// Size: 0x908 (Inherited: 0x08)
struct FPBChatStyle : FSlateWidgetStyle {
	struct FEditableTextBoxStyle TextEntryStyle; // 0x08(0x7f8)
	struct FSlateBrush BackingBrush; // 0x800(0x88)
	struct FSlateColor BoxBorderColor; // 0x888(0x28)
	struct FSlateColor TextColor; // 0x8b0(0x28)
	struct FSlateSound RxMessgeSound; // 0x8d8(0x18)
	struct FSlateSound TxMessgeSound; // 0x8f0(0x18)
};

// ScriptStruct ProjectBoundary.PBCollisionSoundMap
// Size: 0x50 (Inherited: 0x00)
struct FPBCollisionSoundMap {
	struct TMap<enum class EPhysicalSurface, struct FPBDifferentSoundBySpeed> PsymatCollisionSoundMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.PBDifferentSoundBySpeed
// Size: 0x10 (Inherited: 0x00)
struct FPBDifferentSoundBySpeed {
	struct USoundBase* HighSoundToPlay; // 0x00(0x08)
	struct USoundBase* LowSoundToPlay; // 0x08(0x08)
};

// ScriptStruct ProjectBoundary.PBComponentList_UI
// Size: 0x20 (Inherited: 0x00)
struct FPBComponentList_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName ComponentId; // 0x08(0x08)
	struct FName ComponentPartId; // 0x10(0x08)
	enum class EPBSlotType SlotType; // 0x18(0x01)
	enum class EPBPartSlotType PartSlotType; // 0x19(0x01)
	enum class EPBSkinClass SkinType; // 0x1a(0x01)
	enum class EPBCharacterSlotType CharacterSlotType; // 0x1b(0x01)
	bool bIsPendingShowItems; // 0x1c(0x01)
	bool bIsPendingShowWeaponPart; // 0x1d(0x01)
	bool bIsPendingShowPartSkin; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct ProjectBoundary.PBComponentModify_UI
// Size: 0x2c (Inherited: 0x00)
struct FPBComponentModify_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName ComponentId; // 0x08(0x08)
	struct FName ComponentPartId; // 0x10(0x08)
	enum class EPBSlotType SlotType; // 0x18(0x01)
	enum class EPBPartSlotType PartSlotType; // 0x19(0x01)
	enum class EPBSkinClass SkinType; // 0x1a(0x01)
	enum class EPBCharacterSlotType CharacterSlotType; // 0x1b(0x01)
	enum class EPBItemGradeType GradeType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t Price; // 0x20(0x04)
	bool bIsLock; // 0x24(0x01)
	bool bIsEquip; // 0x25(0x01)
	bool bShowSight; // 0x26(0x01)
	bool bIsPendingShowWeapons; // 0x27(0x01)
	bool bShowIsEquipWeaponParts; // 0x28(0x01)
	bool bIsPendingShowWeaponPartModels; // 0x29(0x01)
	bool bShowModifyButton; // 0x2a(0x01)
	bool bIsLockByPrice; // 0x2b(0x01)
};

// ScriptStruct ProjectBoundary.PBActionMap_UI
// Size: 0x60 (Inherited: 0x00)
struct FPBActionMap_UI {
	struct FName ModeName; // 0x00(0x08)
	struct FText ModeText; // 0x08(0x18)
	struct FName DelegateName; // 0x20(0x08)
	struct FText DelegateText; // 0x28(0x18)
	struct FName MapName; // 0x40(0x08)
	struct FText MapText; // 0x48(0x18)
};

// ScriptStruct ProjectBoundary.PBDailyChallengeRandRuleDataTableRowBase
// Size: 0x20 (Inherited: 0x08)
struct FPBDailyChallengeRandRuleDataTableRowBase : FTableRowBase {
	int32_t ChallengeSlot; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> SlotDiffcultyLevels; // 0x10(0x10)
};

// ScriptStruct ProjectBoundary.PBDailyChallengeUnlockDataTableRowBase
// Size: 0x38 (Inherited: 0x08)
struct FPBDailyChallengeUnlockDataTableRowBase : FTableRowBase {
	int32_t Level; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> DiffcultyLevels; // 0x10(0x10)
	struct TArray<int32_t> ChallengeSlots; // 0x20(0x10)
	int32_t RefreshNum; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ProjectBoundary.PBDailyChallengeDataTableRowBase
// Size: 0x98 (Inherited: 0x08)
struct FPBDailyChallengeDataTableRowBase : FTableRowBase {
	struct FText ChallengeName; // 0x08(0x18)
	int32_t Weight; // 0x20(0x04)
	int32_t DiffcultyLevel; // 0x24(0x04)
	struct TMap<struct FName, int64_t> Conditions; // 0x28(0x50)
	int32_t UnlockPoint; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FText Description; // 0x80(0x18)
};

// ScriptStruct ProjectBoundary.PBDataStatisticsDataTableRowBase
// Size: 0x28 (Inherited: 0x08)
struct FPBDataStatisticsDataTableRowBase : FTableRowBase {
	enum class EPBDataStatisticsType StatisticsType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString StatisticsName; // 0x10(0x10)
	struct UObject* ActorClass; // 0x20(0x08)
};

// ScriptStruct ProjectBoundary.PBRoleCustomScope
// Size: 0x110 (Inherited: 0x08)
struct FPBRoleCustomScope : FPBTableRowBase {
	struct FName CharacterID; // 0x08(0x08)
	struct FName PawnClassID; // 0x10(0x08)
	struct FName VisionModuleClassID; // 0x18(0x08)
	struct FName SkillModuleClassID; // 0x20(0x08)
	struct FName RadarClassID; // 0x28(0x08)
	struct TSoftObjectPtr<struct UTexture2D> RoleIcon; // 0x30(0x28)
	struct FText CareerName; // 0x58(0x18)
	struct TArray<struct FName> CharacterSkinArray; // 0x70(0x10)
	struct TArray<struct FName> ArmBadgeArray; // 0x80(0x10)
	struct TArray<struct FName> HeadAccessoryArray; // 0x90(0x10)
	struct TArray<struct FName> MeleeWeaponClassIDArray; // 0xa0(0x10)
	struct TArray<struct FName> VechicleClassIDArray; // 0xb0(0x10)
	struct TArray<struct FName> FirstWeaponClassIDArray; // 0xc0(0x10)
	struct TArray<struct FName> SecondWeaponClassIDArray; // 0xd0(0x10)
	struct TArray<struct FName> LeftLauncherClassIDArray; // 0xe0(0x10)
	struct TArray<struct FName> RightLauncherClassIDArray; // 0xf0(0x10)
	struct TArray<struct FName> MobilityModuleClassIDArray; // 0x100(0x10)
};

// ScriptStruct ProjectBoundary.PBBeginnerRoleConfigScope
// Size: 0x118 (Inherited: 0x110)
struct FPBBeginnerRoleConfigScope : FPBRoleCustomScope {
	struct FName RoleId; // 0x110(0x08)
};

// ScriptStruct ProjectBoundary.PBFixedRoleConfigScope
// Size: 0x118 (Inherited: 0x110)
struct FPBFixedRoleConfigScope : FPBRoleCustomScope {
	struct FName RoleId; // 0x110(0x08)
};

// ScriptStruct ProjectBoundary.GameModeSettingDataTableRowBase
// Size: 0x48 (Inherited: 0x08)
struct FGameModeSettingDataTableRowBase : FTableRowBase {
	bool bAllyDamage; // 0x08(0x01)
	bool bTeamChange; // 0x09(0x01)
	bool bAloneCompensate; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	int32_t GameTime; // 0x0c(0x04)
	int32_t PlayerNum; // 0x10(0x04)
	int32_t WinScore; // 0x14(0x04)
	int32_t RoundNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct UPBMainMenuWidget*> ModeButton; // 0x20(0x10)
	struct FText GameStartTip; // 0x30(0x18)
};

// ScriptStruct ProjectBoundary.PBWeaponBlueprintScope
// Size: 0x18 (Inherited: 0x08)
struct FPBWeaponBlueprintScope : FTableRowBase {
	struct TArray<struct FName> BlueprintIDArray; // 0x08(0x10)
};

// ScriptStruct ProjectBoundary.PBWeaponBlueprint
// Size: 0xf8 (Inherited: 0x08)
struct FPBWeaponBlueprint : FTableRowBase {
	struct FPBSkinInfoForUI SkinInformationForUI; // 0x08(0x48)
	struct TMap<enum class EPBPartSlotType, struct FName> EquippedPartIDMap; // 0x50(0x50)
	struct TMap<enum class EPBPartSlotType, struct FName> WeaponPartSkinMap; // 0xa0(0x50)
	struct FName Ornament; // 0xf0(0x08)
};

// ScriptStruct ProjectBoundary.PBSkinInfoForUI
// Size: 0x48 (Inherited: 0x00)
struct FPBSkinInfoForUI {
	struct FText Name; // 0x00(0x18)
	enum class EPBItemGradeType Grade; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x20(0x28)
};

// ScriptStruct ProjectBoundary.PBOnlineAchieveDataTableRowBase
// Size: 0x10 (Inherited: 0x08)
struct FPBOnlineAchieveDataTableRowBase : FTableRowBase {
	struct UObject* ActorClass; // 0x08(0x08)
};

// ScriptStruct ProjectBoundary.PBBaseChallengeDataTableRowBase
// Size: 0x58 (Inherited: 0x08)
struct FPBBaseChallengeDataTableRowBase : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct UObject* ActorClass; // 0x20(0x08)
	int32_t Weight; // 0x28(0x04)
	int32_t Level; // 0x2c(0x04)
	struct FText Description; // 0x30(0x18)
	struct TArray<int32_t> ConditionCounts; // 0x48(0x10)
};

// ScriptStruct ProjectBoundary.PBRandChallengeDataTableRowBase
// Size: 0x60 (Inherited: 0x58)
struct FPBRandChallengeDataTableRowBase : FPBBaseChallengeDataTableRowBase {
	int32_t Rewardmultiple; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ProjectBoundary.PBChallengeGroupDataTableRowBase
// Size: 0x40 (Inherited: 0x08)
struct FPBChallengeGroupDataTableRowBase : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	int32_t ChallengeWeight; // 0x20(0x04)
	enum class EChallengeClassEnum ChallengeClass; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TArray<struct FName> LevelIDContainer; // 0x28(0x10)
	struct FName RewardId; // 0x38(0x08)
};

// ScriptStruct ProjectBoundary.PBChallengeDataTableRowBase
// Size: 0xb8 (Inherited: 0x08)
struct FPBChallengeDataTableRowBase : FTableRowBase {
	struct FText ChallengeName; // 0x08(0x18)
	struct UObject* ActorClass; // 0x20(0x08)
	int32_t Exp; // 0x28(0x04)
	int32_t UnlockPoint; // 0x2c(0x04)
	int32_t ChallengeLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText ChallengeGroup; // 0x38(0x18)
	enum class EChallengeClassEnum ChallengeClass; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FText> DescriptionContainer; // 0x58(0x10)
	struct TMap<struct FName, int32_t> DataStatisticsCounts; // 0x68(0x50)
};

// ScriptStruct ProjectBoundary.PBMapNameDataTableRowBase
// Size: 0x40 (Inherited: 0x08)
struct FPBMapNameDataTableRowBase : FTableRowBase {
	struct FText MapNickName; // 0x08(0x18)
	struct UTexture2D* Image; // 0x20(0x08)
	struct UTexture2D* BackgroundImage; // 0x28(0x08)
	struct UTexture2D* SelectImage; // 0x30(0x08)
	int32_t ID; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ProjectBoundary.PBRealtimeAchieveDataTableRowBase
// Size: 0x58 (Inherited: 0x08)
struct FPBRealtimeAchieveDataTableRowBase : FTableRowBase {
	struct UObject* ActorClass; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	int32_t Exp; // 0x40(0x04)
	char Priority; // 0x44(0x01)
	char Contradiction; // 0x45(0x01)
	char Type; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	struct UTexture2D* Image; // 0x48(0x08)
	char bIsShowMedals : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct ProjectBoundary.PBGameModeEXPDataTableRowBase
// Size: 0x68 (Inherited: 0x08)
struct FPBGameModeEXPDataTableRowBase : FTableRowBase {
	float GameTime; // 0x08(0x04)
	int32_t Kill; // 0x0c(0x04)
	int32_t Victory; // 0x10(0x04)
	int32_t Defeat; // 0x14(0x04)
	int32_t Draw; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FString> Map; // 0x20(0x10)
	struct TArray<struct FString> TempMap; // 0x30(0x10)
	float RevaluationCoefficient; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FText DisplayName; // 0x48(0x18)
	int32_t ID; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct ProjectBoundary.PBUnlockDataTableRowBase
// Size: 0x58 (Inherited: 0x08)
struct FPBUnlockDataTableRowBase : FTableRowBase {
	struct TArray<struct FString> ItemIDArray; // 0x08(0x10)
	struct FString OccupationID; // 0x18(0x10)
	struct FString WeaponPartsListID; // 0x28(0x10)
	struct FString ChallengeId; // 0x38(0x10)
	int32_t RandChallengeLevel; // 0x48(0x04)
	int32_t Level; // 0x4c(0x04)
	int32_t CostUnlockPoint; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ProjectBoundary.PBLevelDataTableRowBase
// Size: 0x20 (Inherited: 0x08)
struct FPBLevelDataTableRowBase : FTableRowBase {
	int32_t Exp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture2D* Image; // 0x10(0x08)
	int32_t UnlockPoint; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ProjectBoundary.AchievementInfo
// Size: 0x40 (Inherited: 0x00)
struct FAchievementInfo {
	struct FText Name; // 0x00(0x18)
	char pad_18[0x10]; // 0x18(0x10)
	struct UTexture2D* ImageInfo; // 0x28(0x08)
	char pad_30[0x4]; // 0x30(0x04)
	char bLevelUp : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char Level; // 0x35(0x01)
	char pad_36[0xa]; // 0x36(0x0a)
};

// ScriptStruct ProjectBoundary.PBDisplayActor_Pawn
// Size: 0x150 (Inherited: 0x00)
struct FPBDisplayActor_Pawn {
	struct FPBDisplayActor_Weapon FirstWeapon; // 0x00(0x70)
	struct FPBDisplayActor_Weapon SecondWeapon; // 0x70(0x70)
	struct FPBCharacterNetworkConfig Character; // 0xe0(0x20)
	struct FPBDisplayActor_MeleeWeapon MeleeWeapon; // 0x100(0x18)
	struct FPBDisplayActor_Vehicle Vehicle; // 0x118(0x18)
	struct UStaticMesh* Radar; // 0x130(0x08)
	struct UStaticMesh* LeftLauncher; // 0x138(0x08)
	struct UStaticMesh* RightLauncher; // 0x140(0x08)
	struct UStaticMesh* MobilityModule; // 0x148(0x08)
};

// ScriptStruct ProjectBoundary.PBDisplayActor_Vehicle
// Size: 0x18 (Inherited: 0x00)
struct FPBDisplayActor_Vehicle {
	struct FPBVehicleNetworkConfig VehicleSaved; // 0x00(0x10)
	struct APBVehicle* VehicleClass; // 0x10(0x08)
};

// ScriptStruct ProjectBoundary.PBVehicleNetworkConfig
// Size: 0x10 (Inherited: 0x00)
struct FPBVehicleNetworkConfig {
	struct FName ID; // 0x00(0x08)
	struct FName SkinID; // 0x08(0x08)
};

// ScriptStruct ProjectBoundary.PBDisplayActor_MeleeWeapon
// Size: 0x18 (Inherited: 0x00)
struct FPBDisplayActor_MeleeWeapon {
	struct FPBMeleeWeaponNetworkConfig MeleeWeaponSaved; // 0x00(0x10)
	struct UStaticMesh* MeleeWeapon; // 0x10(0x08)
};

// ScriptStruct ProjectBoundary.PBMeleeWeaponNetworkConfig
// Size: 0x10 (Inherited: 0x00)
struct FPBMeleeWeaponNetworkConfig {
	struct FName ID; // 0x00(0x08)
	struct FName SkinID; // 0x08(0x08)
};

// ScriptStruct ProjectBoundary.PBCharacterNetworkConfig
// Size: 0x20 (Inherited: 0x00)
struct FPBCharacterNetworkConfig {
	struct TArray<enum class EPBCharacterSlotType> SlotArray; // 0x00(0x10)
	struct TArray<struct FName> SkinIDArray; // 0x10(0x10)
};

// ScriptStruct ProjectBoundary.PBDisplayActor_Weapon
// Size: 0x70 (Inherited: 0x00)
struct FPBDisplayActor_Weapon {
	struct APBWeapon* WeaponClass; // 0x00(0x08)
	struct FPBWeaponPartNetworkConfig WeaponSaved; // 0x08(0x58)
	struct FName WeaponID; // 0x60(0x08)
	struct FName WeaponClassID; // 0x68(0x08)
};

// ScriptStruct ProjectBoundary.PBWeaponPartNetworkConfig
// Size: 0x58 (Inherited: 0x00)
struct FPBWeaponPartNetworkConfig {
	struct TArray<enum class EPBPartSlotType> WeaponPartSlotTypeArray; // 0x00(0x10)
	struct TArray<struct FName> WeaponPartIDArray; // 0x10(0x10)
	struct TArray<struct FName> WeaponPartSkinIDArray; // 0x20(0x10)
	struct TArray<struct FName> WeaponPartSpecialSkinIDArray; // 0x30(0x10)
	struct FName OrnamentID; // 0x40(0x08)
	struct FName WeaponID; // 0x48(0x08)
	struct FName WeaponClassID; // 0x50(0x08)
};

// ScriptStruct ProjectBoundary.PBVehicleSkin_UI
// Size: 0x40 (Inherited: 0x00)
struct FPBVehicleSkin_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName VehicleID; // 0x08(0x08)
	struct FName SkinID; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct UTexture2D* Texture; // 0x30(0x08)
	enum class EPBItemGradeType GradeType; // 0x38(0x01)
	char bIsEquipped : 1; // 0x39(0x01)
	char bIsLocked : 1; // 0x39(0x01)
	char pad_39_2 : 6; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct ProjectBoundary.PBMeleeWeaponSkin_UI
// Size: 0x40 (Inherited: 0x00)
struct FPBMeleeWeaponSkin_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName MeleeWeaponID; // 0x08(0x08)
	struct FName SkinID; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct UTexture2D* Texture; // 0x30(0x08)
	enum class EPBItemGradeType GradeType; // 0x38(0x01)
	char bIsEquipped : 1; // 0x39(0x01)
	char bIsLocked : 1; // 0x39(0x01)
	char pad_39_2 : 6; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct ProjectBoundary.PBWeaponPartSkin_UI
// Size: 0x48 (Inherited: 0x00)
struct FPBWeaponPartSkin_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName WeaponID; // 0x08(0x08)
	struct FName PartID; // 0x10(0x08)
	struct FName SkinID; // 0x18(0x08)
	struct FText Name; // 0x20(0x18)
	struct UTexture2D* Texture; // 0x38(0x08)
	enum class EPBSlotType SlotType; // 0x40(0x01)
	enum class EPBPartSlotType PartSlotType; // 0x41(0x01)
	enum class EPBItemGradeType GradeType; // 0x42(0x01)
	enum class EPBSkinClass SkinClass; // 0x43(0x01)
	char bIsEquipped : 1; // 0x44(0x01)
	char bIsLocked : 1; // 0x44(0x01)
	char pad_44_2 : 6; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct ProjectBoundary.PBWeaponOrnament_UI
// Size: 0x60 (Inherited: 0x00)
struct FPBWeaponOrnament_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName WeaponID; // 0x08(0x08)
	struct FName PartID; // 0x10(0x08)
	struct FName OrnamentID; // 0x18(0x08)
	struct FText Name; // 0x20(0x18)
	struct UTexture2D* Texture; // 0x38(0x08)
	struct FText Desciption; // 0x40(0x18)
	enum class EPBSlotType SlotType; // 0x58(0x01)
	enum class EPBItemGradeType GradeType; // 0x59(0x01)
	char bIsEquipped : 1; // 0x5a(0x01)
	char bIsLocked : 1; // 0x5a(0x01)
	char pad_5A_2 : 6; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
};

// ScriptStruct ProjectBoundary.PBWeaponBlueprint_UI
// Size: 0x40 (Inherited: 0x00)
struct FPBWeaponBlueprint_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName WeaponID; // 0x08(0x08)
	struct FName BlueprintID; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct UTexture2D* Texture; // 0x30(0x08)
	enum class EPBSlotType SlotType; // 0x38(0x01)
	enum class EPBItemGradeType GradeType; // 0x39(0x01)
	char bIsEquipped : 1; // 0x3a(0x01)
	char bIsLocked : 1; // 0x3a(0x01)
	char pad_3A_2 : 6; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct ProjectBoundary.PBCharacterSkin_UI
// Size: 0x38 (Inherited: 0x00)
struct FPBCharacterSkin_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName SkinID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct UTexture2D* Texture; // 0x28(0x08)
	enum class EPBCharacterSlotType CharacterSlot; // 0x30(0x01)
	enum class EPBItemGradeType GradeType; // 0x31(0x01)
	char bIsEquipped : 1; // 0x32(0x01)
	char bIsLocked : 1; // 0x32(0x01)
	char pad_32_2 : 6; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// ScriptStruct ProjectBoundary.PBWeaponPart_DisplayInfo
// Size: 0x80 (Inherited: 0x08)
struct FPBWeaponPart_DisplayInfo : FPBTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Discription; // 0x20(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x38(0x28)
	struct TArray<struct FPBWeaponPartEffect> PositiveEffectArray; // 0x60(0x10)
	struct TArray<struct FPBWeaponPartEffect> NegativeEffectArray; // 0x70(0x10)
};

// ScriptStruct ProjectBoundary.PBWeaponPartEffect
// Size: 0x20 (Inherited: 0x00)
struct FPBWeaponPartEffect {
	struct FText EffectDescription; // 0x00(0x18)
	int32_t EffectLevel; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ProjectBoundary.PBWeaponPart_UI
// Size: 0x48 (Inherited: 0x00)
struct FPBWeaponPart_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName WeaponID; // 0x08(0x08)
	struct FName ItemId; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	enum class EPBSlotType SlotType; // 0x30(0x01)
	enum class EPBPartSlotType PartType; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UTexture2D* Texture; // 0x38(0x08)
	char bCanEdit : 1; // 0x40(0x01)
	char bIsLocked : 1; // 0x40(0x01)
	char bHasSkin : 1; // 0x40(0x01)
	char bHasSpecialSkin : 1; // 0x40(0x01)
	char bIsEquipped : 1; // 0x40(0x01)
	char pad_40_5 : 3; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ProjectBoundary.PBItem_UI
// Size: 0x48 (Inherited: 0x00)
struct FPBItem_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName ItemId; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct UTexture2D* Texture; // 0x28(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x30(0x08)
	struct UTextureRenderTarget2D* DepthRenderTarget; // 0x38(0x08)
	enum class EPBSlotType SlotType; // 0x40(0x01)
	char bCanEdit : 1; // 0x41(0x01)
	char bIsLocked : 1; // 0x41(0x01)
	char bHasSkin : 1; // 0x41(0x01)
	char bIsEquipped : 1; // 0x41(0x01)
	char pad_41_4 : 4; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct ProjectBoundary.PBVehicleSlot_UI
// Size: 0x20 (Inherited: 0x00)
struct FPBVehicleSlot_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName VehicleID; // 0x08(0x08)
	struct FName SkinID; // 0x10(0x08)
	struct UTexture2D* Texture; // 0x18(0x08)
};

// ScriptStruct ProjectBoundary.PBWeaponPartSlot_UI
// Size: 0x28 (Inherited: 0x00)
struct FPBWeaponPartSlot_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName WeaponID; // 0x08(0x08)
	struct FName WeaponPartID; // 0x10(0x08)
	struct UTexture2D* Texture; // 0x18(0x08)
	enum class EPBSlotType SlotType; // 0x20(0x01)
	enum class EPBPartSlotType PartSlotType; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct ProjectBoundary.PBRoleSlot_UI
// Size: 0x50 (Inherited: 0x00)
struct FPBRoleSlot_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName CharacterID; // 0x08(0x08)
	struct FText CareerName; // 0x10(0x18)
	struct TSoftObjectPtr<struct UTexture2D> RoleIcon; // 0x28(0x28)
};

// ScriptStruct ProjectBoundary.PBCharacterSlot_UI
// Size: 0x20 (Inherited: 0x00)
struct FPBCharacterSlot_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName ItemId; // 0x08(0x08)
	struct UTexture2D* Texture; // 0x10(0x08)
	enum class EPBCharacterSlotType SlotType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ProjectBoundary.PBSkinGradeSlot_UI
// Size: 0x28 (Inherited: 0x00)
struct FPBSkinGradeSlot_UI {
	struct FText Name; // 0x00(0x18)
	enum class EPBItemGradeType GradeType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UTexture2D* Texture; // 0x20(0x08)
};

// ScriptStruct ProjectBoundary.PBCharacterSkinGradeSlot_UI
// Size: 0x38 (Inherited: 0x28)
struct FPBCharacterSkinGradeSlot_UI : FPBSkinGradeSlot_UI {
	struct FName RoleId; // 0x28(0x08)
	enum class EPBCharacterSlotType SlotType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ProjectBoundary.PBItemSkinGradeSlot_UI
// Size: 0x40 (Inherited: 0x28)
struct FPBItemSkinGradeSlot_UI : FPBSkinGradeSlot_UI {
	struct FName RoleId; // 0x28(0x08)
	struct FName ItemId; // 0x30(0x08)
	enum class EPBSlotType SlotType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ProjectBoundary.PBWeaponPartSkinGradeSlot_UI
// Size: 0x48 (Inherited: 0x28)
struct FPBWeaponPartSkinGradeSlot_UI : FPBSkinGradeSlot_UI {
	struct FName RoleId; // 0x28(0x08)
	struct FName WeaponID; // 0x30(0x08)
	struct FName PartID; // 0x38(0x08)
	enum class EPBSlotType SlotType; // 0x40(0x01)
	enum class EPBPartSlotType PartSlotType; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct ProjectBoundary.PBSlot_UI
// Size: 0x48 (Inherited: 0x00)
struct FPBSlot_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName ItemId; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	enum class EPBSlotType SlotType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UTexture2D* Texture; // 0x30(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x38(0x08)
	struct UTextureRenderTarget2D* DepthRenderTarget; // 0x40(0x08)
};

// ScriptStruct ProjectBoundary.EMPToleranceConfig
// Size: 0x28 (Inherited: 0x00)
struct FEMPToleranceConfig {
	float EMPToleranceMax; // 0x00(0x04)
	float WeakEMPToleranceRatio; // 0x04(0x04)
	float HUDDisableRatio; // 0x08(0x04)
	float HalfStaggerRatio; // 0x0c(0x04)
	float FullStaggerRatio; // 0x10(0x04)
	float EMPToleranceRecoverRatioPerSecond; // 0x14(0x04)
	float EMPRecoverDelay; // 0x18(0x04)
	float EMPInvulnerableRatioDuringRecover; // 0x1c(0x04)
	struct UCurveFloat* EMPEffectCurve; // 0x20(0x08)
};

// ScriptStruct ProjectBoundary.AirPressureConfig
// Size: 0x1c (Inherited: 0x00)
struct FAirPressureConfig {
	float MaxAirPressure; // 0x00(0x04)
	float AirPressureRecoveringPerSecond; // 0x04(0x04)
	float AirPressureLeakingPerSecond; // 0x08(0x04)
	float AirPressureBackingPerSecond; // 0x0c(0x04)
	float MinAirPressureWhileChanging; // 0x10(0x04)
	float AirPressureRecoveryRateScale; // 0x14(0x04)
	float AirPressureLeakingRateScale; // 0x18(0x04)
};

// ScriptStruct ProjectBoundary.AirTightnessConfig
// Size: 0x14 (Inherited: 0x00)
struct FAirTightnessConfig {
	float MaxAirTightness; // 0x00(0x04)
	float AirTightnessRecoverPerSecond; // 0x04(0x04)
	float AirTightnessRecoveryRateScale; // 0x08(0x04)
	float AirTightnessLeakingRateScale; // 0x0c(0x04)
	float AirTightnessRecoveryDelay; // 0x10(0x04)
};

// ScriptStruct ProjectBoundary.PBDashConfig
// Size: 0x1c (Inherited: 0x00)
struct FPBDashConfig {
	float DashAccelerationTime; // 0x00(0x04)
	float DashConstantTime; // 0x04(0x04)
	float DashDecelerationTime; // 0x08(0x04)
	float DashCoolDownTime; // 0x0c(0x04)
	float EngineHeatDeltaPerDash; // 0x10(0x04)
	float DashRestoreTime; // 0x14(0x04)
	int32_t UseTimes; // 0x18(0x04)
};

// ScriptStruct ProjectBoundary.PBDashMovementConfig
// Size: 0x0c (Inherited: 0x00)
struct FPBDashMovementConfig {
	float MaxDashSpeed; // 0x00(0x04)
	float DashForce; // 0x04(0x04)
	float DashInterruptSpeed; // 0x08(0x04)
};

// ScriptStruct ProjectBoundary.PBEventString
// Size: 0x10 (Inherited: 0x00)
struct FPBEventString {
	struct TArray<struct FString> EventStrings; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PBValueModifyCache_Float
// Size: 0x28 (Inherited: 0x00)
struct FPBValueModifyCache_Float {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ProjectBoundary.MeshPool
// Size: 0x10 (Inherited: 0x00)
struct FMeshPool {
	struct TArray<struct UStaticMesh*> DestructibleMeshPool; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.SunAndEarth
// Size: 0x28 (Inherited: 0x00)
struct FSunAndEarth {
	float SunIntensity; // 0x00(0x04)
	float GlobalLightIntensity; // 0x04(0x04)
	struct UCurveFloat* SunIntensityCurve; // 0x08(0x08)
	struct UCurveLinearColor* SunColorCurve; // 0x10(0x08)
	struct UCurveFloat* EarthIntensityCurve; // 0x18(0x08)
	struct UCurveLinearColor* EarthColorCurve; // 0x20(0x08)
};

// ScriptStruct ProjectBoundary.TimeBasedRotation
// Size: 0x18 (Inherited: 0x00)
struct FTimeBasedRotation {
	struct FVector RotationAxis; // 0x00(0x0c)
	float OriginAngle; // 0x0c(0x04)
	float RotationRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ProjectBoundary.PBEMPData
// Size: 0x48 (Inherited: 0x00)
struct FPBEMPData {
	struct UDamageType* DamageType; // 0x00(0x08)
	float PierceDamage; // 0x08(0x04)
	float ExplosionDamage; // 0x0c(0x04)
	float SafeDistance; // 0x10(0x04)
	float MaximumDistance; // 0x14(0x04)
	float DeadlyRadius; // 0x18(0x04)
	float DamageRadius; // 0x1c(0x04)
	float Speed; // 0x20(0x04)
	float ExplosionCountDown; // 0x24(0x04)
	float ExplosionCountDownAfterBounce; // 0x28(0x04)
	float NearEffectRadius; // 0x2c(0x04)
	float NearRadiusEffectTime; // 0x30(0x04)
	float MediusEffectRadius; // 0x34(0x04)
	float MediusRadiusEffectTime; // 0x38(0x04)
	float MaxEffectRadius; // 0x3c(0x04)
	float MaxRadiusEffectTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ProjectBoundary.PBEMPGrenadeData
// Size: 0xc8 (Inherited: 0x00)
struct FPBEMPGrenadeData {
	struct FPBRadialDamageParams RadialDamageParams; // 0x00(0x68)
	SoftClassProperty DamageType; // 0x68(0x28)
	float HitDamage; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	SoftClassProperty ImpactTemplate; // 0x98(0x28)
	float DetonatorRadius; // 0xc0(0x04)
	float LifeTime; // 0xc4(0x04)
};

// ScriptStruct ProjectBoundary.PBEnergyConfig
// Size: 0x1c (Inherited: 0x00)
struct FPBEnergyConfig {
	float MaxEnergy; // 0x00(0x04)
	float EnergyConsumptionPerSecond; // 0x04(0x04)
	float MinimumNumAllowedToUseContinuously; // 0x08(0x04)
	float EnergyRecoveryPerSecond; // 0x0c(0x04)
	float EnergyRecoveryDelay; // 0x10(0x04)
	float MinimumNumAllowedToRestart; // 0x14(0x04)
	bool bExhaustProtection; // 0x18(0x01)
	bool bInfinite; // 0x19(0x01)
	enum class EPBEnergyRecoveryMode RecoveryMode; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct ProjectBoundary.PBFireComponentConfig
// Size: 0x10 (Inherited: 0x00)
struct FPBFireComponentConfig {
	float MinSpread; // 0x00(0x04)
	float MaxSpread; // 0x04(0x04)
	float RecoverSpreadRate; // 0x08(0x04)
	float SpreadDeltePreFiring; // 0x0c(0x04)
};

// ScriptStruct ProjectBoundary.AvatarSingleQuery
// Size: 0x18 (Inherited: 0x00)
struct FAvatarSingleQuery {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct TArray<struct FDelegate> AvatarDelegates; // 0x08(0x10)
};

// ScriptStruct ProjectBoundary.PBTeamStartInfo
// Size: 0x18 (Inherited: 0x00)
struct FPBTeamStartInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ProjectBoundary.GameEndItem
// Size: 0x40 (Inherited: 0x00)
struct FGameEndItem {
	struct TArray<struct FRoleData> RoleData; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
	struct FString UserID; // 0x18(0x10)
	int32_t CampID; // 0x28(0x04)
	int32_t Duration; // 0x2c(0x04)
	int32_t Win; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct ProjectBoundary.RoleData
// Size: 0x08 (Inherited: 0x00)
struct FRoleData {
	struct FName RoleId; // 0x00(0x08)
};

// ScriptStruct ProjectBoundary.PBFixRoleConfigCache
// Size: 0x200 (Inherited: 0x00)
struct FPBFixRoleConfigCache {
	char pad_0[0x200]; // 0x00(0x200)
};

// ScriptStruct ProjectBoundary.PBRoleNetworkConfig
// Size: 0x140 (Inherited: 0x00)
struct FPBRoleNetworkConfig {
	struct FName RoleId; // 0x00(0x08)
	struct FName PanwClassID; // 0x08(0x08)
	struct FPBCharacterNetworkConfig CharacterData; // 0x10(0x20)
	struct FPBWeaponPartNetworkConfig FirstWeaponPartData; // 0x30(0x58)
	struct FPBWeaponPartNetworkConfig SecondWeaponPartData; // 0x88(0x58)
	struct FPBVehicleNetworkConfig VehicleData; // 0xe0(0x10)
	struct FPBMeleeWeaponNetworkConfig MeleeWeaponData; // 0xf0(0x10)
	struct FPBLauncherNetworkConfig LeftLauncherData; // 0x100(0x10)
	struct FPBLauncherNetworkConfig RightLauncherData; // 0x110(0x10)
	struct TArray<enum class EPBSlotType> SlotItemType; // 0x120(0x10)
	struct TArray<struct FName> SlotItemInfo; // 0x130(0x10)
};

// ScriptStruct ProjectBoundary.PBLauncherNetworkConfig
// Size: 0x10 (Inherited: 0x00)
struct FPBLauncherNetworkConfig {
	struct FName ID; // 0x00(0x08)
	struct FName SkinID; // 0x08(0x08)
};

// ScriptStruct ProjectBoundary.PlayerInfo
// Size: 0x28 (Inherited: 0x00)
struct FPlayerInfo {
	struct FString PlayerName; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	int32_t CurLevelEXP; // 0x14(0x04)
	int32_t NextLevelEXP; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UTexture2D* LevelImage; // 0x20(0x08)
};

// ScriptStruct ProjectBoundary.ForceMarkedState
// Size: 0x02 (Inherited: 0x00)
struct FForceMarkedState {
	char bStartCheckTime : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char WaitStartActiveTime; // 0x01(0x01)
};

// ScriptStruct ProjectBoundary.PBGrenadeData
// Size: 0xc8 (Inherited: 0x00)
struct FPBGrenadeData {
	struct FPBRadialDamageParams RadialDamageParams; // 0x00(0x68)
	SoftClassProperty DamageType; // 0x68(0x28)
	float HitDamage; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	SoftClassProperty ImpactTemplate; // 0x98(0x28)
	float DetonatorRadius; // 0xc0(0x04)
	float LifeTime; // 0xc4(0x04)
};

// ScriptStruct ProjectBoundary.PBHeatComponentConfig
// Size: 0x20 (Inherited: 0x00)
struct FPBHeatComponentConfig {
	struct USoundBase* ThreatSound; // 0x00(0x08)
	float MinHeat; // 0x08(0x04)
	float MaxHeat; // 0x0c(0x04)
	float MaxHeat_SpecialMobility; // 0x10(0x04)
	float CoolDownValuePerSecond; // 0x14(0x04)
	float CoolDownDelay; // 0x18(0x04)
	enum class EPBHeatComponentType Type; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct ProjectBoundary.PBMagazine
// Size: 0x20 (Inherited: 0x00)
struct FPBMagazine {
	struct FPBMagazineConfig Config; // 0x00(0x0c)
	int32_t AmmoInClip; // 0x0c(0x04)
	int32_t TotalAmmo; // 0x10(0x04)
	int32_t AmmoInMagazine; // 0x14(0x04)
	int32_t MagazineCapacity; // 0x18(0x04)
	int32_t StoreAmmoInClip; // 0x1c(0x04)
};

// ScriptStruct ProjectBoundary.PBMagazineConfig
// Size: 0x0c (Inherited: 0x00)
struct FPBMagazineConfig {
	int32_t InitAmmoPerClip; // 0x00(0x04)
	int32_t InitClips; // 0x04(0x04)
	char bInfiniteAmmo : 1; // 0x08(0x01)
	char bInfiniteClips : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ProjectBoundary.PBFiringConfig
// Size: 0x18 (Inherited: 0x00)
struct FPBFiringConfig {
	float TimeBetweenFire; // 0x00(0x04)
	float TimeBetweenBurst; // 0x04(0x04)
	float TimeCanRetirggerFire; // 0x08(0x04)
	float PostFireDuration; // 0x0c(0x04)
	int32_t BurstCount; // 0x10(0x04)
	char bEnableBurst : 1; // 0x14(0x01)
	char bEnableAutoFire : 1; // 0x14(0x01)
	char pad_14_2 : 6; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ProjectBoundary.PBLauncherMontageGroup
// Size: 0x28 (Inherited: 0x00)
struct FPBLauncherMontageGroup {
	struct UAnimMontage* LeftProps1P; // 0x00(0x08)
	struct UAnimMontage* LeftProps3P; // 0x08(0x08)
	struct UAnimMontage* RightProps1P; // 0x10(0x08)
	struct UAnimMontage* RightProps3P; // 0x18(0x08)
	float Duration; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ProjectBoundary.PBMissileSettingConfig
// Size: 0x1c (Inherited: 0x00)
struct FPBMissileSettingConfig {
	float EngineOnTime; // 0x00(0x04)
	float TriggerRadius; // 0x04(0x04)
	float Velocity; // 0x08(0x04)
	float DeviationRange; // 0x0c(0x04)
	float EngineOnVelocity; // 0x10(0x04)
	float EngineOnDeviationRange; // 0x14(0x04)
	float EngineOnLifeTime; // 0x18(0x04)
};

// ScriptStruct ProjectBoundary.ServerInfo
// Size: 0x50 (Inherited: 0x00)
struct FServerInfo {
	struct FString ServerName; // 0x00(0x10)
	int32_t ServerIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MapName; // 0x18(0x10)
	struct FString GameMode; // 0x28(0x10)
	int32_t CurrentPlayerNum; // 0x38(0x04)
	int32_t MaxPlayerNum; // 0x3c(0x04)
	int32_t ping; // 0x40(0x04)
	int32_t MatchTime; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct ProjectBoundary.PBMarkableData
// Size: 0x50 (Inherited: 0x00)
struct FPBMarkableData {
	struct TMap<struct UPBVisionMarkingComponent*, struct FPBVisionData> MarkerDataMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.PBVisionData
// Size: 0x18 (Inherited: 0x00)
struct FPBVisionData {
	struct UCurveFloat* MarkingTimeCurve; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct ProjectBoundary.PBMarkableHUDInfo
// Size: 0x0c (Inherited: 0x00)
struct FPBMarkableHUDInfo {
	struct FVector WorldLocation; // 0x00(0x0c)
};

// ScriptStruct ProjectBoundary.PBMemberInfo_UI
// Size: 0x80 (Inherited: 0x00)
struct FPBMemberInfo_UI {
	struct APBLobbyPlayerState* CurrentPlayerState; // 0x00(0x08)
	enum class EPBMemberStatus MemberStatus; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString MemberName; // 0x10(0x10)
	struct FText MemberNameText; // 0x20(0x18)
	int32_t MemberIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FText MemberIndexText; // 0x40(0x18)
	bool bIsMySelf; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t PlayerLevel; // 0x5c(0x04)
	struct FText PlayerLevelText; // 0x60(0x18)
	enum class EPBSquadType SquadType; // 0x78(0x01)
	bool bIsSearching; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// ScriptStruct ProjectBoundary.PBMenuItemStyle
// Size: 0x1a0 (Inherited: 0x08)
struct FPBMenuItemStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x88)
	struct FSlateBrush LeftArrowImage; // 0x90(0x88)
	struct FSlateBrush RightArrowImage; // 0x118(0x88)
};

// ScriptStruct ProjectBoundary.PBMenuSoundsStyle
// Size: 0x38 (Inherited: 0x08)
struct FPBMenuSoundsStyle : FSlateWidgetStyle {
	struct FSlateSound StartGameSound; // 0x08(0x18)
	struct FSlateSound ExitGameSound; // 0x20(0x18)
};

// ScriptStruct ProjectBoundary.PBMenuStyle
// Size: 0x200 (Inherited: 0x08)
struct FPBMenuStyle : FSlateWidgetStyle {
	struct FSlateBrush HeaderBackgroundBrush; // 0x08(0x88)
	struct FSlateBrush LeftBackgroundBrush; // 0x90(0x88)
	struct FSlateBrush RightBackgroundBrush; // 0x118(0x88)
	struct FSlateSound MenuEnterSound; // 0x1a0(0x18)
	struct FSlateSound MenuBackSound; // 0x1b8(0x18)
	struct FSlateSound OptionChangeSound; // 0x1d0(0x18)
	struct FSlateSound MenuItemChangeSound; // 0x1e8(0x18)
};

// ScriptStruct ProjectBoundary.PBMerch_UI
// Size: 0xa0 (Inherited: 0x00)
struct FPBMerch_UI {
	struct FName MerchName; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FText UnlockPointCostText; // 0x38(0x18)
	struct FText CoinCostText; // 0x50(0x18)
	int32_t UnlockPointCost; // 0x68(0x04)
	int32_t CoinCost; // 0x6c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> Thumbnail; // 0x70(0x28)
	enum class EPBMerchType Type; // 0x98(0x01)
	bool bIsBought; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// ScriptStruct ProjectBoundary.PBTeamMessage
// Size: 0x18 (Inherited: 0x00)
struct FPBTeamMessage {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ProjectBoundary.PBMiniMapIconInfo
// Size: 0x30 (Inherited: 0x00)
struct FPBMiniMapIconInfo {
	struct FVector WorldLocation; // 0x00(0x0c)
	struct FVector2D Size; // 0x0c(0x08)
	struct FVector2D Posiction; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UTexture2D* Texture; // 0x20(0x08)
	enum class EPBCamp Camp; // 0x28(0x01)
	bool bMarked; // 0x29(0x01)
	bool bWeaponFired; // 0x2a(0x01)
	bool bMobilityHeat; // 0x2b(0x01)
	bool bIsLocal; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct ProjectBoundary.PBMotionSensorData
// Size: 0x40 (Inherited: 0x00)
struct FPBMotionSensorData {
	SoftClassProperty DamageType; // 0x00(0x28)
	float MaxFlyDuration; // 0x28(0x04)
	float HitDamage; // 0x2c(0x04)
	float DelayScanTime; // 0x30(0x04)
	float ScanRadius; // 0x34(0x04)
	float ScanDuration; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ProjectBoundary.PBInputSecondMappingDataTableRowBase
// Size: 0x68 (Inherited: 0x08)
struct FPBInputSecondMappingDataTableRowBase : FTableRowBase {
	struct FText InputDes; // 0x08(0x18)
	struct TArray<struct FName> MappingInputActionName; // 0x20(0x10)
	struct TArray<struct FInputActionKeyMapping> ActionKeys; // 0x30(0x10)
	struct TArray<struct FName> MappingInputAxisName; // 0x40(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisKeys; // 0x50(0x10)
	int32_t NonConflictGroup; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct ProjectBoundary.PBOptionTableRowBase
// Size: 0x40 (Inherited: 0x08)
struct FPBOptionTableRowBase : FPBTableRowBase {
	struct FText Title; // 0x08(0x18)
	struct FText Des; // 0x20(0x18)
	enum class EPBOptionsPart SettingPart; // 0x38(0x01)
	bool bAutoApply; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct ProjectBoundary.PBEnumOption
// Size: 0x58 (Inherited: 0x40)
struct FPBEnumOption : FPBOptionTableRowBase {
	struct TArray<struct FText> OptionTitles; // 0x40(0x10)
	char DefaultValue; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct ProjectBoundary.PBFloatOption
// Size: 0x48 (Inherited: 0x40)
struct FPBFloatOption : FPBOptionTableRowBase {
	float DefaultValue; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ProjectBoundary.PBIntOption
// Size: 0x48 (Inherited: 0x40)
struct FPBIntOption : FPBOptionTableRowBase {
	int32_t DefaultValue; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ProjectBoundary.PBBoolOption
// Size: 0x48 (Inherited: 0x40)
struct FPBBoolOption : FPBOptionTableRowBase {
	bool DefaultValue; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ProjectBoundary.PBOptionsStyle
// Size: 0x38 (Inherited: 0x08)
struct FPBOptionsStyle : FSlateWidgetStyle {
	struct FSlateSound AcceptChangesSound; // 0x08(0x18)
	struct FSlateSound DiscardChangesSound; // 0x20(0x18)
};

// ScriptStruct ProjectBoundary.PBHitDamageSettlement
// Size: 0x94 (Inherited: 0x00)
struct FPBHitDamageSettlement {
	struct FHitResult HitResult; // 0x00(0x8c)
	float Damage; // 0x8c(0x04)
	float DamageScaler; // 0x90(0x04)
};

// ScriptStruct ProjectBoundary.PBExplodedDamageSettlement
// Size: 0x0c (Inherited: 0x00)
struct FPBExplodedDamageSettlement {
	struct FVector ExplodedLocation; // 0x00(0x0c)
};

// ScriptStruct ProjectBoundary.PBPelletObjectPoolSettings
// Size: 0x10 (Inherited: 0x00)
struct FPBPelletObjectPoolSettings {
	struct APBPellet* Pellet; // 0x00(0x08)
	int32_t PoolSize; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ProjectBoundary.PBArmorySaved
// Size: 0x20 (Inherited: 0x00)
struct FPBArmorySaved {
	struct TArray<struct FName> OwnedItems; // 0x00(0x10)
	int32_t UnlockPoint; // 0x10(0x04)
	int32_t UsedUnlockPoint; // 0x14(0x04)
	int32_t Coin; // 0x18(0x04)
	int32_t UsedCoin; // 0x1c(0x04)
};

// ScriptStruct ProjectBoundary.DisplayBestMatchInfo
// Size: 0x78 (Inherited: 0x00)
struct FDisplayBestMatchInfo {
	struct FText ModeName; // 0x00(0x18)
	struct FText MapName; // 0x18(0x18)
	struct UTexture2D* MapImageInfo; // 0x30(0x08)
	struct FString KDA; // 0x38(0x10)
	int32_t Kills; // 0x48(0x04)
	int32_t Deaths; // 0x4c(0x04)
	int32_t Assists; // 0x50(0x04)
	int32_t Score; // 0x54(0x04)
	struct UTexture2D* BestAchievementImageInfo; // 0x58(0x08)
	struct FText BestAchievementName; // 0x60(0x18)
};

// ScriptStruct ProjectBoundary.DisplayMatchStat
// Size: 0x40 (Inherited: 0x00)
struct FDisplayMatchStat {
	struct FString KDA; // 0x00(0x10)
	int32_t Kills; // 0x10(0x04)
	int32_t Deaths; // 0x14(0x04)
	int32_t Assists; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString WinningRate; // 0x20(0x10)
	int32_t Wins; // 0x30(0x04)
	int32_t Defeats; // 0x34(0x04)
	int32_t Draws; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ProjectBoundary.BestGameInfo
// Size: 0x48 (Inherited: 0x00)
struct FBestGameInfo {
	struct FString GameMode; // 0x00(0x10)
	struct FString MapName; // 0x10(0x10)
	struct FCombatInfoStat CombatInfo; // 0x20(0x0c)
	int32_t Score; // 0x2c(0x04)
	struct FString BestRealtimeAchievement; // 0x30(0x10)
	float ScoreCoefficient; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ProjectBoundary.CombatInfoStat
// Size: 0x0c (Inherited: 0x00)
struct FCombatInfoStat {
	int32_t Kills; // 0x00(0x04)
	int32_t Deaths; // 0x04(0x04)
	int32_t Assists; // 0x08(0x04)
};

// ScriptStruct ProjectBoundary.PBPersonalData_UI
// Size: 0x160 (Inherited: 0x00)
struct FPBPersonalData_UI {
	int32_t ScoreNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText ScoreText; // 0x08(0x18)
	int32_t KillNumber; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText KillText; // 0x28(0x18)
	int32_t DeathNumber; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FText DeathText; // 0x48(0x18)
	int32_t AssistNumber; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText AssistText; // 0x68(0x18)
	float KDNumber; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FText KDText; // 0x88(0x18)
	int32_t HeadShotNumber; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FText HeadShotText; // 0xa8(0x18)
	float LongestKillNumber; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FText LongestKillText; // 0xc8(0x18)
	float AccuracyNumber; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FText AccuracyText; // 0xe8(0x18)
	float AVGKillDistanceNumber; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FText AVGKillDistanceText; // 0x108(0x18)
	float ScorePerMinNumber; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FText ScorePerMinText; // 0x128(0x18)
	int32_t KillStreakNumber; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FText KillStreakText; // 0x148(0x18)
};

// ScriptStruct ProjectBoundary.PBPlayerInfo_UI
// Size: 0xd0 (Inherited: 0x00)
struct FPBPlayerInfo_UI {
	struct APBPlayerState* PlayerState; // 0x00(0x08)
	struct FText PlayerName; // 0x08(0x18)
	int32_t Score; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText ScoreText; // 0x28(0x18)
	int32_t Kill; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FText KillText; // 0x48(0x18)
	int32_t Death; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText DeathText; // 0x68(0x18)
	int32_t Assist; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FText AssistText; // 0x88(0x18)
	struct FText ping; // 0xa0(0x18)
	struct FName RoleId; // 0xb8(0x08)
	bool bMute; // 0xc0(0x01)
	bool bBlockingPlayer; // 0xc1(0x01)
	bool bIsSelf; // 0xc2(0x01)
	bool bIsSpeaking; // 0xc3(0x01)
	bool bIsDying; // 0xc4(0x01)
	bool bIsFocus; // 0xc5(0x01)
	enum class EPBCamp CampFlag; // 0xc6(0x01)
	enum class EPBTeamMemberState TeamMemberState; // 0xc7(0x01)
	enum class EPBAllyIconState AllyState; // 0xc8(0x01)
	enum class EPBHostileIconState HostileState; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
};

// ScriptStruct ProjectBoundary.PBPlayerList_UI
// Size: 0x10 (Inherited: 0x00)
struct FPBPlayerList_UI {
	struct TArray<struct APBPlayerState*> PlayersArray; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.BestWeaponInfo
// Size: 0x70 (Inherited: 0x00)
struct FBestWeaponInfo {
	struct FPBWeaponPartNetworkConfig PartIDInfo; // 0x00(0x58)
	struct UObject* WeaponClass; // 0x58(0x08)
	uint64_t PartInfo; // 0x60(0x08)
	int32_t Count; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct ProjectBoundary.HitTag
// Size: 0x0c (Inherited: 0x00)
struct FHitTag {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct ProjectBoundary.PBKillResult
// Size: 0x38 (Inherited: 0x00)
struct FPBKillResult {
	int32_t AddScore; // 0x00(0x04)
	int32_t KillingStreakCount; // 0x04(0x04)
	float KillDistance; // 0x08(0x04)
	enum class EPBHitZone HitZone; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString VictimPlayerName; // 0x10(0x10)
	struct TArray<struct FString> Medal; // 0x20(0x10)
	struct FName ItemId; // 0x30(0x08)
};

// ScriptStruct ProjectBoundary.PBProjectileArray
// Size: 0x10 (Inherited: 0x00)
struct FPBProjectileArray {
	struct TArray<struct APBProjectileBase*> Array; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.VertexColorFaceMap
// Size: 0x50 (Inherited: 0x00)
struct FVertexColorFaceMap {
	struct TMap<struct FColor, struct FPBFaceIndexArray> VertexColorFaceMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.PBFaceIndexArray
// Size: 0x10 (Inherited: 0x00)
struct FPBFaceIndexArray {
	struct TArray<int32_t> FaceIndexArray; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PBRayProjectileConfigRow_Replace
// Size: 0x6a8 (Inherited: 0x08)
struct FPBRayProjectileConfigRow_Replace : FPBTableRowBase {
	struct FPBRayProjectileBaseConfig_Replace BaseConfig; // 0x08(0x1d0)
	struct FPBNormalDamageConfig_Replace DamageConfig; // 0x1d8(0xd8)
	struct FPBEMPConfig_Replace EMPConfig; // 0x2b0(0xe8)
	struct FPBExplosionConfig_Replace ExplosionConfig; // 0x398(0x150)
	struct FPBStunConfig_Replace StunConfig; // 0x4e8(0xf0)
	struct FPBDetonatorConfig_Replace DetonatorConfig; // 0x5d8(0x30)
	struct FPBImpulseConfig_Replace ImpulseConfig; // 0x608(0xa0)
};

// ScriptStruct ProjectBoundary.PBImpulseConfig_Replace
// Size: 0xa0 (Inherited: 0x00)
struct FPBImpulseConfig_Replace {
	float HitImpulse; // 0x00(0x04)
	float KillImpulse; // 0x04(0x04)
	bool bEnableExplosion; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FPBRadialDamageParams BaseRadialDamage; // 0x10(0x68)
	SoftClassProperty DamageType; // 0x78(0x28)
};

// ScriptStruct ProjectBoundary.PBDetonatorConfig_Replace
// Size: 0x30 (Inherited: 0x00)
struct FPBDetonatorConfig_Replace {
	float Radius; // 0x00(0x04)
	bool bEnable; // 0x04(0x01)
	char pad_5[0x2b]; // 0x05(0x2b)
};

// ScriptStruct ProjectBoundary.PBStunConfig_Replace
// Size: 0xf0 (Inherited: 0x00)
struct FPBStunConfig_Replace {
	struct FPBRadialDamageParams BaseRadialDamage; // 0x00(0x68)
	SoftClassProperty DamageType; // 0x68(0x28)
	float HitDamage; // 0x90(0x04)
	char pad_94[0x2c]; // 0x94(0x2c)
	struct TSoftObjectPtr<struct USoundCue> StunExplosionSound; // 0xc0(0x28)
	bool bEnable; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// ScriptStruct ProjectBoundary.PBExplosionConfig_Replace
// Size: 0x150 (Inherited: 0x00)
struct FPBExplosionConfig_Replace {
	struct FPBRadialDamageParams BaseRadialDamage; // 0x00(0x68)
	struct FPBRadialDamageParams ArmorRadialDamage; // 0x68(0x68)
	SoftClassProperty DamageType; // 0xd0(0x28)
	struct TSoftObjectPtr<struct UParticleSystem> Effect; // 0xf8(0x28)
	struct TSoftObjectPtr<struct USoundCue> ExplosionSound; // 0x120(0x28)
	int32_t ExplosionNumber; // 0x148(0x04)
	bool bEnable; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
};

// ScriptStruct ProjectBoundary.PBEMPConfig_Replace
// Size: 0xe8 (Inherited: 0x00)
struct FPBEMPConfig_Replace {
	struct FPBRadialDamageParams BaseRadialDamage; // 0x00(0x68)
	SoftClassProperty DamageType; // 0x68(0x28)
	struct TSoftObjectPtr<struct UParticleSystem> Effect; // 0x90(0x28)
	struct TSoftObjectPtr<struct USoundCue> EMPBlastSound; // 0xb8(0x28)
	bool bEnable; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// ScriptStruct ProjectBoundary.PBNormalDamageConfig_Replace
// Size: 0xd8 (Inherited: 0x00)
struct FPBNormalDamageConfig_Replace {
	struct TMap<enum class EPBHitZone, float> HitZoneDamageModifierMap; // 0x00(0x50)
	SoftClassProperty DamageType; // 0x50(0x28)
	float HitDamage; // 0x78(0x04)
	float ArmorDamage; // 0x7c(0x04)
	enum class EPBBodyPenetrationType BodyPenetrationType; // 0x80(0x01)
	char pad_81[0x57]; // 0x81(0x57)
};

// ScriptStruct ProjectBoundary.PBRayProjectileBaseConfig_Replace
// Size: 0x1d0 (Inherited: 0x00)
struct FPBRayProjectileBaseConfig_Replace {
	struct TMap<struct FName, float> PenetrationLevelMap; // 0x00(0x50)
	SoftClassProperty WidgetClass; // 0x50(0x28)
	SoftClassProperty ProjectileImpactTemplate; // 0x78(0x28)
	struct TSoftObjectPtr<struct UParticleSystem> ProjectileAttachableImpactFX; // 0xa0(0x28)
	struct TSoftObjectPtr<struct UParticleSystem> BulletTrailFX; // 0xc8(0x28)
	struct TSoftObjectPtr<struct UParticleSystem> BulletSmokeLineFX; // 0xf0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> MiniMapIcon; // 0x118(0x28)
	struct TSoftObjectPtr<struct USoundBase> Sound; // 0x140(0x28)
	float SoundSpeed; // 0x168(0x04)
	float SoundRange; // 0x16c(0x04)
	float BulletSpeed; // 0x170(0x04)
	float BulletLifeSpan; // 0x174(0x04)
	bool bShouldExploedeBeforeTheEndOfLife; // 0x178(0x01)
	enum class EPBRayProjectileTypes ProjectileType; // 0x179(0x01)
	char pad_17A[0x56]; // 0x17a(0x56)
};

// ScriptStruct ProjectBoundary.PBProximityFuseGrenadeData
// Size: 0x30 (Inherited: 0x00)
struct FPBProximityFuseGrenadeData {
	struct UDamageType* PierceDamageType; // 0x00(0x08)
	struct UDamageType* ExplosionDamageType; // 0x08(0x08)
	float PierceDamage; // 0x10(0x04)
	float ExplosionDamage; // 0x14(0x04)
	float SafeDistance; // 0x18(0x04)
	float MaximumDistance; // 0x1c(0x04)
	float DeadlyRadius; // 0x20(0x04)
	float DamageRadius; // 0x24(0x04)
	float Speed; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ProjectBoundary.PBHeatThreshold
// Size: 0x08 (Inherited: 0x00)
struct FPBHeatThreshold {
	float MarkThreshold; // 0x00(0x04)
	float LostThreshold; // 0x04(0x04)
};

// ScriptStruct ProjectBoundary.PBExplodedDamageData
// Size: 0x0c (Inherited: 0x00)
struct FPBExplodedDamageData {
	struct FVector ExplodedLocation; // 0x00(0x0c)
};

// ScriptStruct ProjectBoundary.PBHitDamageData
// Size: 0xa8 (Inherited: 0x00)
struct FPBHitDamageData {
	struct AActor* BeHitActor; // 0x00(0x08)
	struct FHitResult HitResult; // 0x08(0x8c)
	float HitImpulse; // 0x94(0x04)
	float KillImpulse; // 0x98(0x04)
	float NormalDamage; // 0x9c(0x04)
	float StunDamage; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct ProjectBoundary.PBHitDamageSum
// Size: 0x10 (Inherited: 0x00)
struct FPBHitDamageSum {
	struct TArray<struct FPBHitDamageSettlement> DamageSettlements; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PBRoleCustomize_UI
// Size: 0x20 (Inherited: 0x00)
struct FPBRoleCustomize_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName ComponentId; // 0x08(0x08)
	struct FName ComponentPartId; // 0x10(0x08)
	bool bShowWeaponInfo; // 0x18(0x01)
	enum class EPBSlotType SlotType; // 0x19(0x01)
	enum class EPBPartSlotType PartSlotType; // 0x1a(0x01)
	enum class EPBSkinClass SkinType; // 0x1b(0x01)
	enum class EPBCharacterSlotType CharacterSlotType; // 0x1c(0x01)
	enum class EPBItemGradeType GradeType; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct ProjectBoundary.PBRoleSettleEXP_UI
// Size: 0x48 (Inherited: 0x00)
struct FPBRoleSettleEXP_UI {
	enum class EPBRoleName RoleName; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName RoleId; // 0x04(0x08)
	int32_t RoleLevelNumber; // 0x0c(0x04)
	struct FText RoleLevelText; // 0x10(0x18)
	int32_t RoleEXPNumber; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText RoleEXPText; // 0x30(0x18)
};

// ScriptStruct ProjectBoundary.PBRoundInfo_UI
// Size: 0x08 (Inherited: 0x00)
struct FPBRoundInfo_UI {
	int32_t CurrentRound; // 0x00(0x04)
	int32_t TotalRound; // 0x04(0x04)
};

// ScriptStruct ProjectBoundary.PBScoreboardStyle
// Size: 0x120 (Inherited: 0x08)
struct FPBScoreboardStyle : FSlateWidgetStyle {
	struct FSlateBrush ItemBorderBrush; // 0x08(0x88)
	struct FSlateColor KillStatColor; // 0x90(0x28)
	struct FSlateColor DeathStatColor; // 0xb8(0x28)
	struct FSlateColor ScoreStatColor; // 0xe0(0x28)
	struct FSlateSound PlayerChangeSound; // 0x108(0x18)
};

// ScriptStruct ProjectBoundary.PBShortRole_UI
// Size: 0x10 (Inherited: 0x00)
struct FPBShortRole_UI {
	enum class EPBRoleName RoleName; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName RoleId; // 0x04(0x08)
	bool bSelect; // 0x0c(0x01)
	bool bIsLocking; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct ProjectBoundary.PBSinglePlayerInfo
// Size: 0x48 (Inherited: 0x00)
struct FPBSinglePlayerInfo {
	struct FString UserIDStr; // 0x00(0x10)
	struct FText PlayerNameText; // 0x10(0x18)
	struct FText PlayerOnlineStatusText; // 0x28(0x18)
	int32_t CurrentLevel; // 0x40(0x04)
	enum class EPBPlayerStatus PlayerStatus; // 0x44(0x01)
	enum class EPBTeamAuthority TeamAuthority; // 0x45(0x01)
	char bIsInTeamList : 1; // 0x46(0x01)
	char pad_46_1 : 7; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
};

// ScriptStruct ProjectBoundary.PBSingleRole_UI
// Size: 0x0c (Inherited: 0x00)
struct FPBSingleRole_UI {
	struct FName RoleId; // 0x00(0x08)
	bool bIsLock; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ProjectBoundary.PBSkinModify_UI
// Size: 0x3c (Inherited: 0x00)
struct FPBSkinModify_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName ComponentId; // 0x08(0x08)
	struct FName SkinID; // 0x10(0x08)
	struct FName ComponentPartId; // 0x18(0x08)
	struct FName BlueprintID; // 0x20(0x08)
	enum class EPBCharacterSlotType CharacterSlotType; // 0x28(0x01)
	enum class EPBSlotType SlotType; // 0x29(0x01)
	enum class EPBPartSlotType PartSlotType; // 0x2a(0x01)
	enum class EPBSkinClass SkinType; // 0x2b(0x01)
	enum class EPBItemGradeType GradeType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t Price; // 0x30(0x04)
	bool bIsLock; // 0x34(0x01)
	bool bIsEquip; // 0x35(0x01)
	bool bIsCharacter; // 0x36(0x01)
	bool bIsVehcile; // 0x37(0x01)
	bool bIsWeaponPart; // 0x38(0x01)
	bool bIsWeaponBlueprint; // 0x39(0x01)
	bool bIsLockByPrice; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
};

// ScriptStruct ProjectBoundary.PBSkinRowV1
// Size: 0x68 (Inherited: 0x08)
struct FPBSkinRowV1 : FTableRowBase {
	struct FPBSkinInfoForUI SkinInformationForUI; // 0x08(0x48)
	struct FText Description; // 0x50(0x18)
};

// ScriptStruct ProjectBoundary.PBMeleeSkinRow
// Size: 0x90 (Inherited: 0x68)
struct FPBMeleeSkinRow : FPBSkinRowV1 {
	struct TSoftObjectPtr<struct UPBMeleeWeaponSkin_Base> SkinInfo; // 0x68(0x28)
};

// ScriptStruct ProjectBoundary.PBPodSkinRow
// Size: 0x90 (Inherited: 0x68)
struct FPBPodSkinRow : FPBSkinRowV1 {
	struct TSoftObjectPtr<struct UPBPodSkin_Base> SkinInfo; // 0x68(0x28)
};

// ScriptStruct ProjectBoundary.PBWeaponSkinRow
// Size: 0xd8 (Inherited: 0x68)
struct FPBWeaponSkinRow : FPBSkinRowV1 {
	struct FText PartID; // 0x68(0x18)
	enum class EPBSkinClass SkinClass; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TSoftObjectPtr<struct UPBWeaponSkinBase> Mesh1PSkinInfo; // 0x88(0x28)
	struct TSoftObjectPtr<struct UPBWeaponSkinBase> Mesh3PSkinInfo; // 0xb0(0x28)
};

// ScriptStruct ProjectBoundary.PBJetpackSkinRow
// Size: 0x90 (Inherited: 0x68)
struct FPBJetpackSkinRow : FPBSkinRowV1 {
	struct TSoftObjectPtr<struct UPBJetpackSkin_Base> SkinInfo; // 0x68(0x28)
};

// ScriptStruct ProjectBoundary.PBHeadOrnamentSkinRow
// Size: 0x90 (Inherited: 0x68)
struct FPBHeadOrnamentSkinRow : FPBSkinRowV1 {
	struct TSoftObjectPtr<struct UPBHeadOrnamentSkin> SkinInfo; // 0x68(0x28)
};

// ScriptStruct ProjectBoundary.PBArmBadgeSkinRow
// Size: 0x90 (Inherited: 0x68)
struct FPBArmBadgeSkinRow : FPBSkinRowV1 {
	struct TSoftObjectPtr<struct UPBArmBadgeSkin> SkinInfo; // 0x68(0x28)
};

// ScriptStruct ProjectBoundary.PBOperatorSkinRow
// Size: 0xb8 (Inherited: 0x68)
struct FPBOperatorSkinRow : FPBSkinRowV1 {
	struct TSoftObjectPtr<struct UPBOperatorSkin_Base> Mesh1PSkinInfo; // 0x68(0x28)
	struct TSoftObjectPtr<struct UPBOperatorSkin_Base> Mesh3PSkinInfo; // 0x90(0x28)
};

// ScriptStruct ProjectBoundary.PBItemSkinScope
// Size: 0x18 (Inherited: 0x08)
struct FPBItemSkinScope : FTableRowBase {
	struct TArray<struct FName> SkinID; // 0x08(0x10)
};

// ScriptStruct ProjectBoundary.PBSkinRow
// Size: 0x80 (Inherited: 0x08)
struct FPBSkinRow : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FName GroupTag; // 0x38(0x08)
	struct FName Mesh1PSkinInfo; // 0x40(0x08)
	struct FName Mesh3PSkinInfo; // 0x48(0x08)
	enum class EPBSkinClass SkinClass; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TSoftObjectPtr<struct UTexture2D> Thumbnail; // 0x58(0x28)
};

// ScriptStruct ProjectBoundary.PBSkinDetailRow
// Size: 0x108 (Inherited: 0x08)
struct FPBSkinDetailRow : FTableRowBase {
	enum class EPBSkinMeshRule SkinMeshRule; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<struct UStaticMesh> StaticMesh; // 0x10(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> SkeletalMesh; // 0x38(0x28)
	struct FName MasterPoseSocket; // 0x60(0x08)
	struct TMap<struct FName, struct FPBSkinMaterialDetail> SlotAndMaterialInfoMap; // 0x68(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UParticleSystem>> SocketAndEffectInfoMap; // 0xb8(0x50)
};

// ScriptStruct ProjectBoundary.PBSkinMaterialDetail
// Size: 0xc8 (Inherited: 0x00)
struct FPBSkinMaterialDetail {
	struct TSoftObjectPtr<struct UMaterialInstance> MaterialAsset; // 0x00(0x28)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UTexture2D>> TextureParam; // 0x28(0x50)
	struct TMap<struct FName, float> FloatParam; // 0x78(0x50)
};

// ScriptStruct ProjectBoundary.PBSkinMaterialDetailV1
// Size: 0xa8 (Inherited: 0x00)
struct FPBSkinMaterialDetailV1 {
	struct UMaterialInstance* MaterialAsset; // 0x00(0x08)
	struct TMap<struct FName, struct UTexture2D*> TextureParam; // 0x08(0x50)
	struct TMap<struct FName, float> FloatParam; // 0x58(0x50)
};

// ScriptStruct ProjectBoundary.PBSmokeGrenadeData
// Size: 0x28 (Inherited: 0x00)
struct FPBSmokeGrenadeData {
	float Speed; // 0x00(0x04)
	float ExplosionCountDown; // 0x04(0x04)
	float ExplosionCountDownAfterBounce; // 0x08(0x04)
	float EffectRadius; // 0x0c(0x04)
	float EffectDelay; // 0x10(0x04)
	float EffectDuration; // 0x14(0x04)
	float EffectFadeOutDuration; // 0x18(0x04)
	int32_t MaxBoundCount; // 0x1c(0x04)
	struct APBSmokeObscuringVolume* SmokeVolumeClass; // 0x20(0x08)
};

// ScriptStruct ProjectBoundary.SmokeObscuringData
// Size: 0x28 (Inherited: 0x00)
struct FSmokeObscuringData {
	float EffectDelay; // 0x00(0x04)
	float EffectDuration; // 0x04(0x04)
	float FadeOutDuration; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UParticleSystem* ShapingFX; // 0x10(0x08)
	struct UParticleSystem* EffectFX; // 0x18(0x08)
	struct UParticleSystem* FadingFX; // 0x20(0x08)
};

// ScriptStruct ProjectBoundary.PBSnapshotGrenadeData
// Size: 0x38 (Inherited: 0x00)
struct FPBSnapshotGrenadeData {
	SoftClassProperty DamageType; // 0x00(0x28)
	float HitDamage; // 0x28(0x04)
	float EffectRadius; // 0x2c(0x04)
	float MarkedDuration; // 0x30(0x04)
	float LifeTime; // 0x34(0x04)
};

// ScriptStruct ProjectBoundary.PBSoundEventPoolData
// Size: 0x80 (Inherited: 0x00)
struct FPBSoundEventPoolData {
	struct TArray<struct FPBSoundEvent> WaitingPool; // 0x00(0x10)
	struct TArray<struct FPBSoundEvent> FinishedPool; // 0x10(0x10)
	char pad_20[0x58]; // 0x20(0x58)
	struct UAudioComponent* SoundAC; // 0x78(0x08)
};

// ScriptStruct ProjectBoundary.PBSoundEvent
// Size: 0x50 (Inherited: 0x00)
struct FPBSoundEvent {
	char pad_0[0x18]; // 0x00(0x18)
	struct TSoftObjectPtr<struct USoundBase> Sound; // 0x18(0x28)
	struct APBCharacter* Speaker; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct ProjectBoundary.PBSoundEventBase
// Size: 0x38 (Inherited: 0x08)
struct FPBSoundEventBase : FPBTableRowBase {
	struct FText Description; // 0x08(0x18)
	int32_t GameModePriority_Quick; // 0x20(0x04)
	int32_t GameModePriority_Slow; // 0x24(0x04)
	float EventInterval_Quick; // 0x28(0x04)
	float EventInterval_Slow; // 0x2c(0x04)
	float RemainingTime; // 0x30(0x04)
	enum class EPBSoundEventType SoundType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct ProjectBoundary.PBSoundEventRole
// Size: 0x88 (Inherited: 0x38)
struct FPBSoundEventRole : FPBSoundEventBase {
	struct TMap<enum class EPBRole, struct TSoftObjectPtr<struct USoundBase>> SoundMap; // 0x38(0x50)
};

// ScriptStruct ProjectBoundary.PBSoundEventOther
// Size: 0x60 (Inherited: 0x38)
struct FPBSoundEventOther : FPBSoundEventBase {
	struct TSoftObjectPtr<struct USoundBase> Sound; // 0x38(0x28)
};

// ScriptStruct ProjectBoundary.PBSoundEffect_Character
// Size: 0x50 (Inherited: 0x08)
struct FPBSoundEffect_Character : FPBTableRowBase {
	struct FText Description; // 0x08(0x18)
	struct TSoftObjectPtr<struct USoundBase> Sound; // 0x20(0x28)
	enum class EPBCharacterSoundEffectType Type; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct ProjectBoundary.PBSoundEffect_InGame
// Size: 0x48 (Inherited: 0x08)
struct FPBSoundEffect_InGame : FPBTableRowBase {
	struct FText Description; // 0x08(0x18)
	struct TSoftObjectPtr<struct USoundBase> Sound; // 0x20(0x28)
};

// ScriptStruct ProjectBoundary.PBSoundEffectConfig
// Size: 0x48 (Inherited: 0x08)
struct FPBSoundEffectConfig : FPBTableRowBase {
	struct FText Description; // 0x08(0x18)
	struct TSoftObjectPtr<struct USoundBase> Sound; // 0x20(0x28)
};

// ScriptStruct ProjectBoundary.PBGameMusicConfig
// Size: 0x50 (Inherited: 0x08)
struct FPBGameMusicConfig : FPBTableRowBase {
	struct FText Description; // 0x08(0x18)
	struct TSoftObjectPtr<struct USoundBase> Music; // 0x20(0x28)
	float FadeOutDuration; // 0x48(0x04)
	enum class EAudioFaderCurve FadeOutCurve; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct ProjectBoundary.PBSquad_UI
// Size: 0x30 (Inherited: 0x00)
struct FPBSquad_UI {
	struct TArray<struct APBLobbyPlayerState*> Members; // 0x00(0x10)
	int32_t CurrentMemberCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText CurrentMemberCountText; // 0x18(0x18)
};

// ScriptStruct ProjectBoundary.PBMerchRow
// Size: 0x30 (Inherited: 0x08)
struct FPBMerchRow : FTableRowBase {
	struct FText Description; // 0x08(0x18)
	int32_t UnlockPointCost; // 0x20(0x04)
	int32_t CoinCost; // 0x24(0x04)
	enum class EPBMerchType Type; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ProjectBoundary.PBTeamInfo_UI
// Size: 0x48 (Inherited: 0x00)
struct FPBTeamInfo_UI {
	enum class EPBTeamSelectType TeamSelectType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TeamScore; // 0x04(0x04)
	int32_t TeamID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText TeamScoreText; // 0x10(0x18)
	struct FText TeamIdText; // 0x28(0x18)
	bool bIsMyTeam; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ProjectBoundary.PBTopPlayerInfo_UI
// Size: 0x18 (Inherited: 0x00)
struct FPBTopPlayerInfo_UI {
	struct APBPlayerState* PlayerState; // 0x00(0x08)
	struct FName RoleId; // 0x08(0x08)
	bool bIsSelf; // 0x10(0x01)
	bool bIsDying; // 0x11(0x01)
	enum class EPBCamp CampFlag; // 0x12(0x01)
	enum class EPBTeamMemberState TeamMemberState; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ProjectBoundary.PBTopPlayerList_UI
// Size: 0x10 (Inherited: 0x00)
struct FPBTopPlayerList_UI {
	struct TArray<struct APBPlayerState*> PlayersArray; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.ConfirmInfo
// Size: 0x78 (Inherited: 0x00)
struct FConfirmInfo {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FText ConfirmButtonText; // 0x30(0x18)
	struct FText CancleButtonText; // 0x48(0x18)
	bool bOnlyYesButton; // 0x60(0x01)
	bool bBackgroundToNo; // 0x61(0x01)
	bool bShouldHanleFocus; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	struct FDelegate Callback; // 0x64(0x10)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ProjectBoundary.PBDataStatisticsInfoJsonStruct
// Size: 0xa0 (Inherited: 0x00)
struct FPBDataStatisticsInfoJsonStruct {
	struct TMap<struct FName, int64_t> DataStatisticsInfo; // 0x00(0x50)
	struct TMap<struct FName, bool> CompletedChallenges; // 0x50(0x50)
};

// ScriptStruct ProjectBoundary.MatchEndUserData
// Size: 0x10 (Inherited: 0x00)
struct FMatchEndUserData {
	int32_t ResultExp; // 0x00(0x04)
	int32_t TimeExp; // 0x04(0x04)
	int32_t CombatExp; // 0x08(0x04)
	int32_t ExpMulti; // 0x0c(0x04)
};

// ScriptStruct ProjectBoundary.PBKeyDes
// Size: 0x20 (Inherited: 0x08)
struct FPBKeyDes : FTableRowBase {
	struct FText KeyName; // 0x08(0x18)
};

// ScriptStruct ProjectBoundary.BPFocusEvent
// Size: 0x08 (Inherited: 0x00)
struct FBPFocusEvent {
	enum class EPBFocusCause Cause; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t UserIndex; // 0x04(0x04)
};

// ScriptStruct ProjectBoundary.RealChallengeData
// Size: 0x10 (Inherited: 0x00)
struct FRealChallengeData {
	struct TArray<struct FName> IDArray; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.ChallengeDataMap
// Size: 0x50 (Inherited: 0x00)
struct FChallengeDataMap {
	struct TMap<struct FString, struct FChallengeData> DataMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.NormalChallengeDataMap
// Size: 0x50 (Inherited: 0x00)
struct FNormalChallengeDataMap {
	struct TMap<struct FString, struct FChallengeDataBase> DataMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.PBMeleeConfig
// Size: 0x40 (Inherited: 0x00)
struct FPBMeleeConfig {
	struct FPBPawnAndPropsMontageGroup Animation; // 0x00(0x40)
};

// ScriptStruct ProjectBoundary.PBPawnMontageGroup
// Size: 0x28 (Inherited: 0x00)
struct FPBPawnMontageGroup {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAnimMontage* Pawn1P; // 0x08(0x08)
	struct UAnimMontage* Pawn3P; // 0x10(0x08)
	struct UAnimSequenceBase* IdlePose; // 0x18(0x08)
	float Duration; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ProjectBoundary.PBPawnAndPropsMontageGroup
// Size: 0x40 (Inherited: 0x28)
struct FPBPawnAndPropsMontageGroup : FPBPawnMontageGroup {
	struct UAnimMontage* Props1P; // 0x28(0x08)
	struct UAnimMontage* Props3P; // 0x30(0x08)
	struct UAnimSequenceBase* PropsIdlePose; // 0x38(0x08)
};

// ScriptStruct ProjectBoundary.MedalsInfoStat
// Size: 0x10 (Inherited: 0x00)
struct FMedalsInfoStat {
	struct FName Name; // 0x00(0x08)
	struct FName ItemId; // 0x08(0x08)
};

// ScriptStruct ProjectBoundary.MainMenuSavedSettings
// Size: 0x10 (Inherited: 0x00)
struct FMainMenuSavedSettings {
	struct TArray<struct FString> QuickMatchSelectedGameMode; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.InputTipsImage
// Size: 0x28 (Inherited: 0x08)
struct FInputTipsImage : FTableRowBase {
	struct FKey Key; // 0x08(0x18)
	struct UTexture2D* ButtonImage; // 0x20(0x08)
};

// ScriptStruct ProjectBoundary.PBCapturableZoneResult
// Size: 0x04 (Inherited: 0x00)
struct FPBCapturableZoneResult {
	int32_t DominationZoneScore; // 0x00(0x04)
};

// ScriptStruct ProjectBoundary.PBKOHResult
// Size: 0x08 (Inherited: 0x00)
struct FPBKOHResult {
	int32_t FirstZoneScore; // 0x00(0x04)
	int32_t PerTimeScore; // 0x04(0x04)
};

// ScriptStruct ProjectBoundary.CachePointCheckData
// Size: 0x10 (Inherited: 0x00)
struct FCachePointCheckData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PBCharacterDescrption
// Size: 0xa0 (Inherited: 0x08)
struct FPBCharacterDescrption : FTableRowBase {
	struct FText CharacterName; // 0x08(0x18)
	struct FText CareerName; // 0x20(0x18)
	struct FText ArmorDes; // 0x38(0x18)
	struct FText HealthDes; // 0x50(0x18)
	struct FText MobilityDes; // 0x68(0x18)
	struct TArray<struct FText> TalentNamesDes; // 0x80(0x10)
	struct TArray<struct FText> TalentDetailDes; // 0x90(0x10)
};

// ScriptStruct ProjectBoundary.PBCharacterDisplayInfo
// Size: 0xa0 (Inherited: 0x08)
struct FPBCharacterDisplayInfo : FTableRowBase {
	enum class EPBCharacterPropertyLevel HealthLevel; // 0x08(0x01)
	enum class EPBCharacterPropertyLevel ArmorLevel; // 0x09(0x01)
	enum class EPBCharacterPropertyLevel MobilityLevel; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct FText CharacterName; // 0x10(0x18)
	struct FText CharacterDes; // 0x28(0x18)
	struct TMap<struct FName, struct FPBAbilityDetail> AbilityDetailMap; // 0x40(0x50)
	struct TArray<struct FPBAbilityDetail> AbilityDetailArray; // 0x90(0x10)
};

// ScriptStruct ProjectBoundary.PBAbilityDetail
// Size: 0x58 (Inherited: 0x00)
struct FPBAbilityDetail {
	struct FText AbilityName; // 0x00(0x18)
	struct TSoftObjectPtr<struct UTexture2D> AbilityTexture; // 0x18(0x28)
	struct FText AbilityDescription; // 0x40(0x18)
};

// ScriptStruct ProjectBoundary.PBItemDataTableRowBase
// Size: 0x98 (Inherited: 0x08)
struct FPBItemDataTableRowBase : FTableRowBase {
	struct FText ItemName; // 0x08(0x18)
	enum class EPBItemGradeType Grade; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FText UnLockDescription; // 0x28(0x18)
	struct FString Type; // 0x40(0x10)
	struct FString SubType; // 0x50(0x10)
	struct UObject* ActorClass; // 0x60(0x08)
	struct USkeletalMesh* SkeltalMesh; // 0x68(0x08)
	struct UTexture2D* Image; // 0x70(0x08)
	struct UTexture2D* MiniIconImage; // 0x78(0x08)
	struct TArray<struct UStaticMesh*> StaticMesh; // 0x80(0x10)
	char Weight; // 0x90(0x01)
	char MaxWeight; // 0x91(0x01)
	char SlotPoint; // 0x92(0x01)
	char SocketPosition; // 0x93(0x01)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct ProjectBoundary.PBGameStatInfo
// Size: 0x90 (Inherited: 0x00)
struct FPBGameStatInfo {
	struct FString Name; // 0x00(0x10)
	struct FString StatDate; // 0x10(0x10)
	struct FString GameMode; // 0x20(0x10)
	struct FString MapName; // 0x30(0x10)
	int32_t SetRoomPlayerNum; // 0x40(0x04)
	int32_t GamePoint; // 0x44(0x04)
	bool Server; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t PlayTime; // 0x4c(0x04)
	int32_t RoomPlayerNum; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString Status; // 0x58(0x10)
	struct FString GameResult; // 0x68(0x10)
	int32_t AssistCount; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FPBStatMercenaryInfo> MercenaryInfos; // 0x80(0x10)
};

// ScriptStruct ProjectBoundary.PBStatMercenaryInfo
// Size: 0x78 (Inherited: 0x00)
struct FPBStatMercenaryInfo {
	struct TArray<struct FPBStatWeaponUseInfo> WeaponInfo; // 0x00(0x10)
	struct FString Pawn; // 0x10(0x10)
	struct FString EMU; // 0x20(0x10)
	struct FString FunctionModule; // 0x30(0x10)
	struct FString Radar; // 0x40(0x10)
	struct FString LeftSlot; // 0x50(0x10)
	struct FString RightSlot; // 0x60(0x10)
	int32_t MeleeKillCount; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ProjectBoundary.PBStatWeaponUseInfo
// Size: 0x40 (Inherited: 0x00)
struct FPBStatWeaponUseInfo {
	struct FString ID; // 0x00(0x10)
	int32_t Death; // 0x10(0x04)
	int32_t FireNum; // 0x14(0x04)
	float CharacterTotalGetDmg; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FPBStatWeaponKillInfo> KillInfo; // 0x20(0x10)
	float ArmorDmg; // 0x30(0x04)
	float CharacterDmg; // 0x34(0x04)
	bool IsDefault; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ProjectBoundary.PBStatWeaponKillInfo
// Size: 0x10 (Inherited: 0x00)
struct FPBStatWeaponKillInfo {
	struct FString HitZone; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PBPiercePointInfo
// Size: 0x10 (Inherited: 0x00)
struct FPBPiercePointInfo {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.WidgetCache
// Size: 0x10 (Inherited: 0x00)
struct FWidgetCache {
	struct TWeakObjectPtr<struct UPBMainMenuWidget> CacheWidget; // 0x00(0x08)
	struct UUserWidget* PreWidgetClass; // 0x08(0x08)
};

// ScriptStruct ProjectBoundary.WeaponState
// Size: 0xd0 (Inherited: 0x00)
struct FWeaponState {
	char pad_0[0xd0]; // 0x00(0xd0)
};

// ScriptStruct ProjectBoundary.TransitionsArray
// Size: 0x10 (Inherited: 0x00)
struct FTransitionsArray {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.StateTransition
// Size: 0x38 (Inherited: 0x00)
struct FStateTransition {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct ProjectBoundary.VoteMap
// Size: 0x20 (Inherited: 0x00)
struct FVoteMap {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ProjectBoundary.PBRayProjectileConfigRow
// Size: 0x318 (Inherited: 0x08)
struct FPBRayProjectileConfigRow : FTableRowBase {
	float PiercingPolymerCapacity; // 0x08(0x04)
	float PiercingMetalCapacity; // 0x0c(0x04)
	float PiercingConcreteCapacity; // 0x10(0x04)
	float PiercingClothCapacity; // 0x14(0x04)
	float PiercingCloth_MetalCapacity; // 0x18(0x04)
	float PiercingWoodCapacity; // 0x1c(0x04)
	float PiercingPanelCapacity; // 0x20(0x04)
	float PiercingGlassCapacity; // 0x24(0x04)
	float PiercingFleshCapacity; // 0x28(0x04)
	float PiercingArmorCapacity; // 0x2c(0x04)
	float PiercingShieldCapacity; // 0x30(0x04)
	float PiercingGlassShieldCapacity; // 0x34(0x04)
	float PiercingDefaultCapacity; // 0x38(0x04)
	float BulletSpeed; // 0x3c(0x04)
	float BulletLifeSpan; // 0x40(0x04)
	float BulletHitDamage; // 0x44(0x04)
	float BulletArmorDamage; // 0x48(0x04)
	float BulletStunDamage; // 0x4c(0x04)
	float BulletInstantImpulseScale; // 0x50(0x04)
	float DetonatorSensorRadius; // 0x54(0x04)
	enum class EModuleActivityMask ModuleActivityTag; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UParticleSystem* ProjectileAttachableImpactFX; // 0x60(0x08)
	struct UParticleSystem* BulletTrailFX; // 0x68(0x08)
	struct APBImpactEffect* ProjectileImpactTemplate; // 0x70(0x08)
	struct UDamageType* ProjectileDamageType; // 0x78(0x08)
	struct UDamageType* ProjectileStunDamageType; // 0x80(0x08)
	char bActiveModuleBeforeReset : 1; // 0x88(0x01)
	char ShouldAttachToImpactPoint : 1; // 0x88(0x01)
	char bEnableDetonator : 1; // 0x88(0x01)
	char bEnableIndicator : 1; // 0x88(0x01)
	char pad_88_4 : 4; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float FaceDamageModifier; // 0x8c(0x04)
	float HeadDamageModifier; // 0x90(0x04)
	float ChestDamageModifier; // 0x94(0x04)
	float TripeDamageModifier; // 0x98(0x04)
	float HipDamageModifier; // 0x9c(0x04)
	float UpperArmDamageModifier; // 0xa0(0x04)
	float UpperArmAndChestDamageModifier; // 0xa4(0x04)
	float ForeArmDamageModifier; // 0xa8(0x04)
	float ForeArmAndChestDamageModifier; // 0xac(0x04)
	float ForeArmAndTripeDamageModifier; // 0xb0(0x04)
	float ForeArmAndHeadDamageModifier; // 0xb4(0x04)
	float ForeArmAndFaceDamageModifier; // 0xb8(0x04)
	float HandDamageModifier; // 0xbc(0x04)
	float HandAndChestDamageModifier; // 0xc0(0x04)
	float HandAndTripeDamageModifier; // 0xc4(0x04)
	float HandAndHeadDamageModifier; // 0xc8(0x04)
	float HandAndFaceDamageModifier; // 0xcc(0x04)
	float ThighDamageModifier; // 0xd0(0x04)
	float ShankDamageModifier; // 0xd4(0x04)
	float ShankAndThighDamageModifier; // 0xd8(0x04)
	float FootDamageModifier; // 0xdc(0x04)
	float FootAndShankDamageModifier; // 0xe0(0x04)
	float FootAndThighDamageModifier; // 0xe4(0x04)
	float FacePiercedThickness; // 0xe8(0x04)
	float HeadPiercedThickness; // 0xec(0x04)
	float ChestPiercedThickness; // 0xf0(0x04)
	float TripePiercedThickness; // 0xf4(0x04)
	float HipPiercedThickness; // 0xf8(0x04)
	float UpperArmPiercedThickness; // 0xfc(0x04)
	float UpperArmAndChestPiercedThickness; // 0x100(0x04)
	float ForeArmPiercedThickness; // 0x104(0x04)
	float ForeArmAndChestPiercedThickness; // 0x108(0x04)
	float ForeArmAndTripePiercedThickness; // 0x10c(0x04)
	float ForeArmAndHeadPiercedThickness; // 0x110(0x04)
	float ForeArmAndFacePiercedThickness; // 0x114(0x04)
	float HandPiercedThickness; // 0x118(0x04)
	float HandAndChestPiercedThickness; // 0x11c(0x04)
	float HandAndTripePiercedThickness; // 0x120(0x04)
	float HandAndHeadPiercedThickness; // 0x124(0x04)
	float HandAndFacePiercedThickness; // 0x128(0x04)
	float ThighPiercedThickness; // 0x12c(0x04)
	float ShankPiercedThickness; // 0x130(0x04)
	float ShankAndThighPiercedThickness; // 0x134(0x04)
	float FootPiercedThickness; // 0x138(0x04)
	float FootAndShankPiercedThickness; // 0x13c(0x04)
	float FootAndThighPiercedThickness; // 0x140(0x04)
	float HitDamageModifier; // 0x144(0x04)
	float ArmorDamageModifier; // 0x148(0x04)
	float StunDamageModifier; // 0x14c(0x04)
	float SpeedModifier; // 0x150(0x04)
	float PiercingModifier; // 0x154(0x04)
	float RecoilModifier; // 0x158(0x04)
	float EMPBaseDamage; // 0x15c(0x04)
	float EMPMinDamage; // 0x160(0x04)
	float EMPInnerRadius; // 0x164(0x04)
	float EMPOuterRadius; // 0x168(0x04)
	float EMPDamageFalloff; // 0x16c(0x04)
	enum class EPBEMPType EMPEffectType; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct USoundCue* EMPBlastSound; // 0x178(0x08)
	struct UDamageType* ExplosionDamageType; // 0x180(0x08)
	float EPLBaseDamage; // 0x188(0x04)
	float EPLMinDamage; // 0x18c(0x04)
	float EPLInnerRadius; // 0x190(0x04)
	float EPLOuterRadius; // 0x194(0x04)
	float EPLDamageFalloff; // 0x198(0x04)
	float EPLABaseDamage; // 0x19c(0x04)
	float EPLAMinDamage; // 0x1a0(0x04)
	float EPLAInnerRadius; // 0x1a4(0x04)
	float EPLAOuterRadius; // 0x1a8(0x04)
	float EPLADamageFalloff; // 0x1ac(0x04)
	struct USoundCue* ExplosionSound; // 0x1b0(0x08)
	struct UDamageType* StunExplosionDamageType; // 0x1b8(0x08)
	float StunEPLBaseDamage; // 0x1c0(0x04)
	float StunEPLMinDamage; // 0x1c4(0x04)
	float StunEPLInnerRadius; // 0x1c8(0x04)
	float StunEPLOuterRadius; // 0x1cc(0x04)
	float StunEPLDamageFalloff; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct USoundCue* StunExplosionSound; // 0x1d8(0x08)
	struct FPBProjectileConfig ProjectileConfig; // 0x1e0(0x138)
};

// ScriptStruct ProjectBoundary.PBProjectileConfig
// Size: 0x138 (Inherited: 0x00)
struct FPBProjectileConfig {
	struct FPBProjectileBaseData BaseData; // 0x00(0xa0)
	struct FPBProjectileModifierData ModifierData; // 0xa0(0x18)
	struct FPBProjectileModuleConfig ModuleConfig; // 0xb8(0x80)
};

// ScriptStruct ProjectBoundary.PBProjectileModuleConfig
// Size: 0x80 (Inherited: 0x00)
struct FPBProjectileModuleConfig {
	struct FPBEMPConfig EMPConfig; // 0x00(0x20)
	struct FPBExplosionConfig ExplosionConfig; // 0x20(0x38)
	struct FPBStunExplosionConfig StunExplosionConfig; // 0x58(0x28)
};

// ScriptStruct ProjectBoundary.PBStunExplosionConfig
// Size: 0x28 (Inherited: 0x00)
struct FPBStunExplosionConfig {
	struct UDamageType* StunExplosionDamageType; // 0x00(0x08)
	struct FRadialDamageParams RadialDamage; // 0x08(0x14)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct USoundCue* ExplosionSound; // 0x20(0x08)
};

// ScriptStruct ProjectBoundary.PBExplosionConfig
// Size: 0x38 (Inherited: 0x00)
struct FPBExplosionConfig {
	struct UDamageType* ExplosionDamageType; // 0x00(0x08)
	struct FRadialDamageParams BaseRadialDamage; // 0x08(0x14)
	struct FRadialDamageParams ArmorRadialDamage; // 0x1c(0x14)
	struct USoundCue* ExplosionSound; // 0x30(0x08)
};

// ScriptStruct ProjectBoundary.PBEMPConfig
// Size: 0x20 (Inherited: 0x00)
struct FPBEMPConfig {
	float BaseDamage; // 0x00(0x04)
	float MinDamage; // 0x04(0x04)
	float StartFalloffRadius; // 0x08(0x04)
	float MaxRadius; // 0x0c(0x04)
	float Falloff; // 0x10(0x04)
	enum class EPBEMPType EMPType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct USoundCue* ExplosionSound; // 0x18(0x08)
};

// ScriptStruct ProjectBoundary.PBProjectileModifierData
// Size: 0x18 (Inherited: 0x00)
struct FPBProjectileModifierData {
	float HitDamageModifier; // 0x00(0x04)
	float ArmorDamageModifier; // 0x04(0x04)
	float StunDamageModifier; // 0x08(0x04)
	float SpeedModifier; // 0x0c(0x04)
	float PiercingModifier; // 0x10(0x04)
	float RecoilModifier; // 0x14(0x04)
};

// ScriptStruct ProjectBoundary.PBProjectileBaseData
// Size: 0xa0 (Inherited: 0x00)
struct FPBProjectileBaseData {
	struct TMap<enum class EPhysicalSurface, float> PiercingThicknessCapacityMap; // 0x00(0x50)
	float BulletSpeed; // 0x50(0x04)
	float BulletLifeSpan; // 0x54(0x04)
	float BulletHitDamage; // 0x58(0x04)
	float BulletArmorDamage; // 0x5c(0x04)
	float BulletStunDamage; // 0x60(0x04)
	float BulletInstantImpulseScale; // 0x64(0x04)
	float DetonatorSensorRadius; // 0x68(0x04)
	enum class EModuleActivityMask ModuleActivityTag; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct UParticleSystem* ProjectileAttachableImpactFX; // 0x70(0x08)
	struct UParticleSystem* BulletTrailFX; // 0x78(0x08)
	struct APBImpactEffect* ProjectileImpactTemplate; // 0x80(0x08)
	struct UDamageType* ProjectileDamageType; // 0x88(0x08)
	struct UDamageType* ProjectileStunDamageType; // 0x90(0x08)
	char bActiveModuleBeforeReset : 1; // 0x98(0x01)
	char ShouldAttachToImpactPoint : 1; // 0x98(0x01)
	char bEnableDetonator : 1; // 0x98(0x01)
	char bEnableIndicator : 1; // 0x98(0x01)
	char pad_98_4 : 4; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct ProjectBoundary.PBRadialDamageEvent
// Size: 0x88 (Inherited: 0x40)
struct FPBRadialDamageEvent : FRadialDamageEvent {
	struct UTexture2D* InstigatorTexture; // 0x40(0x08)
	char pad_48[0x40]; // 0x48(0x40)
};

// ScriptStruct ProjectBoundary.PBStaticSpring
// Size: 0x188 (Inherited: 0x00)
struct FPBStaticSpring {
	struct FPBStaticSpringConfig MeshSpringRotation; // 0x00(0x38)
	struct FPBStaticSpringConfig WeaponSpringRotation; // 0x38(0x38)
	struct FPBStaticSpringConfig MeshSpringRTranslation; // 0x70(0x38)
	struct FPBStaticSpringConfig WeaponSpringRTranslation; // 0xa8(0x38)
	struct FPBStaticSpringConfig CameraSpringRotation; // 0xe0(0x38)
	struct FPBStaticSpringConfig CameraSpringTranslation; // 0x118(0x38)
	struct FPBStaticSpringConfig CameraSpringShakeFOV; // 0x150(0x38)
};

// ScriptStruct ProjectBoundary.PBStaticSpringConfig
// Size: 0x38 (Inherited: 0x00)
struct FPBStaticSpringConfig {
	struct FVector Stiffness; // 0x00(0x0c)
	struct FVector Damping; // 0x0c(0x0c)
	struct FVector Mass; // 0x18(0x0c)
	struct FVector MaxDeltaLength; // 0x24(0x0c)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct ProjectBoundary.PBPointImpulseDamageEvent
// Size: 0xb8 (Inherited: 0xb0)
struct FPBPointImpulseDamageEvent : FPointDamageEvent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct ProjectBoundary.PBPointDamageEvent
// Size: 0xb8 (Inherited: 0xb0)
struct FPBPointDamageEvent : FPointDamageEvent {
	struct UTexture2D* InstigatorTexture; // 0xb0(0x08)
};

// ScriptStruct ProjectBoundary.UnlockItem
// Size: 0x20 (Inherited: 0x00)
struct FUnlockItem {
	struct UTexture2D* Image; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	struct UObject* WeaponClass; // 0x18(0x08)
};

// ScriptStruct ProjectBoundary.CombatInfo
// Size: 0x30 (Inherited: 0x00)
struct FCombatInfo {
	struct FName ItemId; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	int32_t KillingStreakCount; // 0x18(0x04)
	float Distance; // 0x1c(0x04)
	int32_t KillPlayerKillStreak; // 0x20(0x04)
	int32_t DeathPlayerKillStreak; // 0x24(0x04)
	int32_t NoKillDeathNum; // 0x28(0x04)
	char bIsPlayerDeathKill : 1; // 0x2c(0x01)
	char bKillMaxScorePlayer : 1; // 0x2c(0x01)
	char bIsLaskKillerDie : 1; // 0x2c(0x01)
	char bIsKillBack : 1; // 0x2c(0x01)
	char bIsEMPState : 1; // 0x2c(0x01)
	char bIsMeleeDmage : 1; // 0x2c(0x01)
	char bSafeKill : 1; // 0x2c(0x01)
	char bCircle; // 0x2d(0x01)
	char bSaviour : 1; // 0x2e(0x01)
	char bBackstab : 1; // 0x2e(0x01)
	char bSlay : 1; // 0x2e(0x01)
	char bGoodbye : 1; // 0x2e(0x01)
	char bDoubledown : 1; // 0x2e(0x01)
	char pad_2E_5 : 3; // 0x2e(0x01)
	enum class EPBHitZone HitZone; // 0x2f(0x01)
};

// ScriptStruct ProjectBoundary.AssistAimingConfig
// Size: 0x30 (Inherited: 0x00)
struct FAssistAimingConfig {
	float DragVelocityScale; // 0x00(0x04)
	float DragVelocityScalePhase2; // 0x04(0x04)
	float AutoTargetingRadius; // 0x08(0x04)
	float PreciseZoneRadius; // 0x0c(0x04)
	float SweetSpotRadius; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCurveFloat* SweetSpotInputScalerFloatCurve; // 0x18(0x08)
	struct UCurveFloat* DragVelocityModifyFloatCurve; // 0x20(0x08)
	char ApplyDragInBodyBox : 1; // 0x28(0x01)
	char OverrideAimingConfig : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ProjectBoundary.TakeHitInfo
// Size: 0x148 (Inherited: 0x00)
struct FTakeHitInfo {
	struct FString KilledPlayerName; // 0x00(0x10)
	float ActualDamage; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UObject* DamageTypeClass; // 0x18(0x08)
	struct TWeakObjectPtr<struct APawn> PawnInstigator; // 0x20(0x08)
	struct TWeakObjectPtr<struct AActor> DamageCauser; // 0x28(0x08)
	struct TWeakObjectPtr<struct APlayerState> PlayerStateInstigator; // 0x30(0x08)
	int32_t DamageEventClassID; // 0x38(0x04)
	char bIsOneShotOneKill : 1; // 0x3c(0x01)
	char bKilled : 1; // 0x3c(0x01)
	char bHitDown : 1; // 0x3c(0x01)
	char bCanRescue : 1; // 0x3c(0x01)
	char bIsKillerDie : 1; // 0x3c(0x01)
	char pad_3C_5 : 3; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float KillImpulseFromAmmo; // 0x40(0x04)
	char EnsureReplicationByte; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FDamageEvent GeneralDamageEvent; // 0x48(0x10)
	struct FPointDamageEvent PointDamageEvent; // 0x58(0xb0)
	struct FRadialDamageEvent RadialDamageEvent; // 0x108(0x40)
};

// ScriptStruct ProjectBoundary.DecalData
// Size: 0x18 (Inherited: 0x00)
struct FDecalData {
	struct UMaterialInterface* DecalMaterial; // 0x00(0x08)
	float DecalSizeMin; // 0x08(0x04)
	float DecalSizeMax; // 0x0c(0x04)
	float LifeSpan; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ProjectBoundary.PBOriginDataBase
// Size: 0x08 (Inherited: 0x08)
struct FPBOriginDataBase : FTableRowBase {
};

// ScriptStruct ProjectBoundary.SpreadCurveAndScaler
// Size: 0x10 (Inherited: 0x00)
struct FSpreadCurveAndScaler {
	struct UCurveFloat* Curve; // 0x00(0x08)
	float Scaler; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ProjectBoundary.MeleeAttackData
// Size: 0x130 (Inherited: 0x00)
struct FMeleeAttackData {
	struct FVector OnDashBoxExtent; // 0x00(0x0c)
	struct FVector DoingMeleeBoxExtent; // 0x0c(0x0c)
	float OnDashSphereRadius; // 0x18(0x04)
	float DoingMeleeSphereRadius; // 0x1c(0x04)
	float MeleeRange; // 0x20(0x04)
	float DoingMeleeSweepRange; // 0x24(0x04)
	float HitDamage; // 0x28(0x04)
	float OnDashSweepRange; // 0x2c(0x04)
	float OnDashMeleeDuration; // 0x30(0x04)
	float PrepareCheckMeleeHitTime; // 0x34(0x04)
	float DashMeleeHitTickCheckDuration; // 0x38(0x04)
	float DashMeleeDamage; // 0x3c(0x04)
	struct UPBDamageType* DamageType; // 0x40(0x08)
	float StunDamage; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UPBDamageType* StunDamageType; // 0x50(0x08)
	float DefaultPiercingThicknessCapacity; // 0x58(0x04)
	float HeadMeleeModifier; // 0x5c(0x04)
	float BodyMeleeModifier; // 0x60(0x04)
	float PierceFleshThickness; // 0x64(0x04)
	float MaxMeleeRotateAnglePerSecond; // 0x68(0x04)
	float MeleeRotateDuration; // 0x6c(0x04)
	float MeleeRotateZeroTolerance; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct APBImpactEffect* ImpactTemplate; // 0x78(0x08)
	struct FName EventID_HitPawn; // 0x80(0x08)
	char bUseBoxOrSphereForTrace : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TMap<enum class EPhysicalSurface, float> PiercingThicknessCapacity; // 0x90(0x50)
	struct TMap<enum class EPhysicalSurface, struct FName> MeleeHitMeshSoundCapacity; // 0xe0(0x50)
};

// ScriptStruct ProjectBoundary.PBHitZoneDamageModifierData
// Size: 0x10 (Inherited: 0x00)
struct FPBHitZoneDamageModifierData {
	struct TArray<struct FPBPierceCharacterData> PierceCharacterDataArray; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.PBPierceCharacterData
// Size: 0x0c (Inherited: 0x00)
struct FPBPierceCharacterData {
	enum class EPBHitZone HitZone; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DamageModifier; // 0x04(0x04)
	float PiercedThickness; // 0x08(0x04)
};

// ScriptStruct ProjectBoundary.PBTeamMemberIconInfo
// Size: 0x10 (Inherited: 0x00)
struct FPBTeamMemberIconInfo {
	enum class EPBAllyIconState AllyState; // 0x00(0x01)
	enum class EPBHostileIconState HostileState; // 0x01(0x01)
	enum class EPBRole PBRole; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FName PBRoleID; // 0x04(0x08)
	char PlayerIndex; // 0x0c(0x01)
	char IsAlly : 1; // 0x0d(0x01)
	char IsSelf : 1; // 0x0d(0x01)
	char pad_D_2 : 6; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct ProjectBoundary.PBStaticMeshCamouflageAccessoryConfig
// Size: 0xa0 (Inherited: 0x00)
struct FPBStaticMeshCamouflageAccessoryConfig {
	struct FPBStaticMeshAndCamouflageConfig MeshAndCamouflageConfig; // 0x00(0x70)
	struct FPBAccessoryConfig AccessoryConfig; // 0x70(0x30)
};

// ScriptStruct ProjectBoundary.PBAccessoryConfig
// Size: 0x30 (Inherited: 0x00)
struct FPBAccessoryConfig {
	struct FName SocketToAttach; // 0x00(0x08)
	struct TSoftObjectPtr<struct UStaticMesh> StaticMesh; // 0x08(0x28)
};

// ScriptStruct ProjectBoundary.PBStaticMeshAndCamouflageConfig
// Size: 0x70 (Inherited: 0x00)
struct FPBStaticMeshAndCamouflageConfig {
	struct TSoftObjectPtr<struct UStaticMesh> StaticMesh; // 0x00(0x28)
	struct FPBMaterialReplaceConfig MaterialConfig; // 0x28(0x30)
	struct FPBSkinCamouflageModifyConfig CamouflageConfig; // 0x58(0x14)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct ProjectBoundary.PBSkinCamouflageModifyConfig
// Size: 0x14 (Inherited: 0x00)
struct FPBSkinCamouflageModifyConfig {
	struct FName ParameterName; // 0x00(0x08)
	float CamouflageScaler; // 0x08(0x04)
	struct FName OptionalMaterialSlotName; // 0x0c(0x08)
};

// ScriptStruct ProjectBoundary.PBMaterialReplaceConfig
// Size: 0x30 (Inherited: 0x00)
struct FPBMaterialReplaceConfig {
	struct FName SlotNameOnMesh; // 0x00(0x08)
	struct TSoftObjectPtr<struct UMaterialInstance> MaterialInstance; // 0x08(0x28)
};

// ScriptStruct ProjectBoundary.PBSkeletalMeshCamouflageAccessoryConfig
// Size: 0xa0 (Inherited: 0x00)
struct FPBSkeletalMeshCamouflageAccessoryConfig {
	struct FPBSkeletalMeshAndCamouflageConfig MeshAndCamouflageConfig; // 0x00(0x70)
	struct FPBAccessoryConfig AccessoryConfig; // 0x70(0x30)
};

// ScriptStruct ProjectBoundary.PBSkeletalMeshAndCamouflageConfig
// Size: 0x70 (Inherited: 0x00)
struct FPBSkeletalMeshAndCamouflageConfig {
	struct TSoftObjectPtr<struct USkeletalMesh> SkeletalMesh; // 0x00(0x28)
	struct FPBMaterialReplaceConfig MaterialConfig; // 0x28(0x30)
	struct FPBSkinCamouflageModifyConfig CamouflageConfig; // 0x58(0x14)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct ProjectBoundary.PBCharacterSkinConfig
// Size: 0xd0 (Inherited: 0x00)
struct FPBCharacterSkinConfig {
	struct FPBSkeletalMeshAndCamouflageConfig OperationEnsembleSkinConfig; // 0x00(0x70)
	struct FPBMaterialReplaceConfig ArmBadgeSkinConfig; // 0x70(0x30)
	struct FPBAccessoryConfig AccessoryConfig; // 0xa0(0x30)
};

// ScriptStruct ProjectBoundary.FireTriggerConfig
// Size: 0x0c (Inherited: 0x00)
struct FFireTriggerConfig {
	float InputThreshold; // 0x00(0x04)
	float InputFireSpace; // 0x04(0x04)
	float InputResetSpace; // 0x08(0x04)
};

// ScriptStruct ProjectBoundary.PBPawnAndTwoPropsMontageGroup
// Size: 0x58 (Inherited: 0x40)
struct FPBPawnAndTwoPropsMontageGroup : FPBPawnAndPropsMontageGroup {
	struct UAnimMontage* SecondProps1P; // 0x40(0x08)
	struct UAnimMontage* SecondProps3P; // 0x48(0x08)
	struct UAnimSequenceBase* SecondPropsIdlePose; // 0x50(0x08)
};

// ScriptStruct ProjectBoundary.PBWeaponOrnaments
// Size: 0xb8 (Inherited: 0x08)
struct FPBWeaponOrnaments : FTableRowBase {
	struct FText Title; // 0x08(0x18)
	enum class EPBItemGradeType Grade; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x28(0x28)
	struct FText Description; // 0x50(0x18)
	SoftClassProperty OrnamentActor1P; // 0x68(0x28)
	SoftClassProperty OrnamentActor3P; // 0x90(0x28)
};

// ScriptStruct ProjectBoundary.PBWeaponOrnamentsScope
// Size: 0x18 (Inherited: 0x08)
struct FPBWeaponOrnamentsScope : FTableRowBase {
	struct TArray<struct FName> OrnamentsIDArray; // 0x08(0x10)
};

// ScriptStruct ProjectBoundary.PBWeaponCustomScope
// Size: 0x130 (Inherited: 0x08)
struct FPBWeaponCustomScope : FTableRowBase {
	struct FName ReceiverMain; // 0x08(0x08)
	struct TArray<struct FName> MuzzleScope; // 0x10(0x10)
	struct TArray<struct FName> BarrelScope; // 0x20(0x10)
	struct TArray<struct FName> HandGuardScope; // 0x30(0x10)
	struct TArray<struct FName> ReceiverUpperScope; // 0x40(0x10)
	struct TArray<struct FName> GripScope; // 0x50(0x10)
	struct TArray<struct FName> SightOpticalScope; // 0x60(0x10)
	struct TArray<struct FName> PointerScope; // 0x70(0x10)
	struct TArray<struct FName> SightIronScope; // 0x80(0x10)
	struct TArray<struct FName> AmmoStorageDeviceScope; // 0x90(0x10)
	struct TArray<struct FName> StockScope; // 0xa0(0x10)
	struct TArray<struct FName> OrnamentScope; // 0xb0(0x10)
	struct TArray<struct FName> ProjectileScope; // 0xc0(0x10)
	struct TArray<int32_t> CustomizedProjectileSequence; // 0xd0(0x10)
	struct FPBPartScope PartScope; // 0xe0(0x50)
};

// ScriptStruct ProjectBoundary.PBPartScope
// Size: 0x50 (Inherited: 0x00)
struct FPBPartScope {
	struct TMap<enum class EPBPartSlotType, struct FPBItemArray> SlotPartMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.PBItemArray
// Size: 0x10 (Inherited: 0x00)
struct FPBItemArray {
	struct TArray<struct FName> IDArray; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.UserSimpleInfoMapWrapper
// Size: 0x50 (Inherited: 0x00)
struct FUserSimpleInfoMapWrapper {
	struct TMap<struct FUniqueNetIdRepl, struct FUserSimpleInfo> UsersSimpleInfo; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.UserSimpleInfo
// Size: 0x04 (Inherited: 0x00)
struct FUserSimpleInfo {
	int32_t TotalExp; // 0x00(0x04)
};

// ScriptStruct ProjectBoundary.PBVehicleConfig
// Size: 0x40 (Inherited: 0x00)
struct FPBVehicleConfig {
	struct FPBAttachableConfig AttachableConfig; // 0x00(0x18)
	struct FPBVehicleMobilityConfig MobilityConfig; // 0x18(0x24)
	float Mass; // 0x3c(0x04)
};

// ScriptStruct ProjectBoundary.PBVehicleMobilityConfig
// Size: 0x24 (Inherited: 0x00)
struct FPBVehicleMobilityConfig {
	float FlyForce; // 0x00(0x04)
	float JetForce; // 0x04(0x04)
	float DashForce; // 0x08(0x04)
	float ClimbForce; // 0x0c(0x04)
	float FlyForceInEMPEffect; // 0x10(0x04)
	float MaxFlySpeed; // 0x14(0x04)
	float MaxJetSpeed; // 0x18(0x04)
	float ExcludeBrakingDeceleration; // 0x1c(0x04)
	float ClampMaxSpeedDeceleration; // 0x20(0x04)
};

// ScriptStruct ProjectBoundary.PBAttachableConfig
// Size: 0x18 (Inherited: 0x00)
struct FPBAttachableConfig {
	struct FName TopSlotSocketName; // 0x00(0x08)
	struct FName LeftSlotSocketName; // 0x08(0x08)
	struct FName RightSlotSocketName; // 0x10(0x08)
};

// ScriptStruct ProjectBoundary.PBVisionMarkingConfig
// Size: 0x30 (Inherited: 0x00)
struct FPBVisionMarkingConfig {
	struct UCurveFloat* MarkingTimeCurve; // 0x00(0x08)
	float CylinderStartHeight; // 0x08(0x04)
	float CylinderHeight; // 0x0c(0x04)
	float CylinderRadius; // 0x10(0x04)
	float ConeStartHeight; // 0x14(0x04)
	float ConeHeight; // 0x18(0x04)
	float ConeDegrees; // 0x1c(0x04)
	float VisionMarkingTime; // 0x20(0x04)
	float VisionUnMarkingTime; // 0x24(0x04)
	char bSharedMode : 1; // 0x28(0x01)
	char bAutoActivateVisionMarking : 1; // 0x28(0x01)
	char bDrawDebug : 1; // 0x28(0x01)
	char pad_28_3 : 5; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ProjectBoundary.PBWeaponConfigRow
// Size: 0xf10 (Inherited: 0x08)
struct FPBWeaponConfigRow : FPBOriginDataBase {
	float Recoil; // 0x08(0x04)
	float BulletInstantImpulseScale; // 0x0c(0x04)
	struct FVector2D SubRoundSpreadZY; // 0x10(0x08)
	struct FVector2D SubRoundSmallSpreadZY; // 0x18(0x08)
	int32_t SubRoundNum; // 0x20(0x04)
	int32_t UseSmallSpreadNum; // 0x24(0x04)
	struct UCurveFloat* BulletSpreadMapCurve; // 0x28(0x08)
	char UseSpreadOnSubRound : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UParticleSystem* BulletTrailFX; // 0x38(0x08)
	struct UParticleSystem* ProjectileAttachableImpactFX; // 0x40(0x08)
	struct APBImpactEffect* ProjectileImpactTemplate; // 0x48(0x08)
	struct USoundCue* EMPBlastSound; // 0x50(0x08)
	struct USoundCue* ExplosiveBlastSound; // 0x58(0x08)
	struct USoundCue* StunExplosiveBlastSound; // 0x60(0x08)
	char ShouldAttachToImpactPoint : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t AmmoPerClip; // 0x6c(0x04)
	int32_t InitialClips; // 0x70(0x04)
	int32_t WarningAmmo; // 0x74(0x04)
	int32_t CriticalWarningAmmo; // 0x78(0x04)
	int32_t MaxAmmo; // 0x7c(0x04)
	int32_t BurstFireNum; // 0x80(0x04)
	char AutoFireSwitch : 1; // 0x84(0x01)
	char BurstFireSwitch : 1; // 0x84(0x01)
	char pad_84_2 : 6; // 0x84(0x01)
	enum class EPBFireModeDisplayType FireModeDisplayType; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	float InputThreshold; // 0x88(0x04)
	float InputFireSpace; // 0x8c(0x04)
	float InputResetSpace; // 0x90(0x04)
	char ApplyPreFireToContinuousShot : 1; // 0x94(0x01)
	char ApplyPostFireToContinuousShot : 1; // 0x94(0x01)
	char SkipLastShotPostFire : 1; // 0x94(0x01)
	char CanPreFireInterruptPostFire : 1; // 0x94(0x01)
	char pad_94_4 : 4; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float PreFireDuration; // 0x98(0x04)
	float FireDuration; // 0x9c(0x04)
	float BurstPerFireDuration; // 0xa0(0x04)
	float PerBurstInterval; // 0xa4(0x04)
	float PostFireDuration; // 0xa8(0x04)
	char CanBeSkippable : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float FiringSkippableTime; // 0xb0(0x04)
	int32_t BulletConsumePerShot; // 0xb4(0x04)
	enum class ETouchWallState TouchWallState; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float FatiguePerShot; // 0xbc(0x04)
	float FatigueDecayDelay; // 0xc0(0x04)
	float FatigueDecayInterval; // 0xc4(0x04)
	struct UCurveFloat* FatigueDecayCurve; // 0xc8(0x08)
	struct UCurveVector* RecoilPatternCurve; // 0xd0(0x08)
	struct FVector RecoilPatternScaler; // 0xd8(0x0c)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UCurveFloat* CenteringSpeedCurve; // 0xe8(0x08)
	float CenteringSpeedScaler; // 0xf0(0x04)
	float CenterModify; // 0xf4(0x04)
	float SpringUpdateInterval; // 0xf8(0x04)
	struct FVector MeshRotationStiffness; // 0xfc(0x0c)
	struct FVector MeshRotationDamping; // 0x108(0x0c)
	struct FVector MeshRotationMass; // 0x114(0x0c)
	struct FVector MeshRotationMaxDeltaLength; // 0x120(0x0c)
	struct FVector WeaponRotationStiffness; // 0x12c(0x0c)
	struct FVector WeaponRotationDamping; // 0x138(0x0c)
	struct FVector WeaponRotationMass; // 0x144(0x0c)
	struct FVector WeaponRotationMaxDeltaLength; // 0x150(0x0c)
	struct FVector MeshTranslationStiffness; // 0x15c(0x0c)
	struct FVector MeshTranslationDamping; // 0x168(0x0c)
	struct FVector MeshTranslationMass; // 0x174(0x0c)
	struct FVector MeshTranslationMaxDeltaLength; // 0x180(0x0c)
	struct FVector WeaponTranslationStiffness; // 0x18c(0x0c)
	struct FVector WeaponTranslationDamping; // 0x198(0x0c)
	struct FVector WeaponTranslationMass; // 0x1a4(0x0c)
	struct FVector WeaponTranslationMaxDeltaLength; // 0x1b0(0x0c)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct UCurveFloat* ShotPointDecayCurve; // 0x1c0(0x08)
	struct UCurveFloat* HandPitchForceCurve; // 0x1c8(0x08)
	struct UCurveFloat* HandYawForceCurve; // 0x1d0(0x08)
	struct UCurveFloat* HandRollForceCurve; // 0x1d8(0x08)
	struct UCurveFloat* HandPitchDirectionWeightCurve; // 0x1e0(0x08)
	struct UCurveFloat* HandYawDirectionWeightCurve; // 0x1e8(0x08)
	struct UCurveFloat* HandRollDirectionWeightCurve; // 0x1f0(0x08)
	struct UCurveFloat* HandXForceCurve; // 0x1f8(0x08)
	struct UCurveFloat* HandYForceCurve; // 0x200(0x08)
	struct UCurveFloat* HandZForceCurve; // 0x208(0x08)
	struct UCurveFloat* HandXDirectionWeightCurve; // 0x210(0x08)
	struct UCurveFloat* HandYDirectionWeightCurve; // 0x218(0x08)
	struct UCurveFloat* HandZDirectionWeightCurve; // 0x220(0x08)
	struct FVector CameraRotationStiffness; // 0x228(0x0c)
	struct FVector CameraRotationDamping; // 0x234(0x0c)
	struct FVector CameraRotationMass; // 0x240(0x0c)
	struct FVector CameraRotationMaxDeltaLength; // 0x24c(0x0c)
	struct FVector CameraTranslationStiffness; // 0x258(0x0c)
	struct FVector CameraTranslationDamping; // 0x264(0x0c)
	struct FVector CameraTranslationMass; // 0x270(0x0c)
	struct FVector CameraTranslationMaxDeltaLength; // 0x27c(0x0c)
	struct FVector CameraShakeFOVStiffness; // 0x288(0x0c)
	struct FVector CameraShakeFOVDamping; // 0x294(0x0c)
	struct FVector CameraShakeFOVMass; // 0x2a0(0x0c)
	struct FVector CameraShakeFOVMaxDeltaLength; // 0x2ac(0x0c)
	struct UCurveFloat* CameraShakeFOVCurve; // 0x2b8(0x08)
	struct UCurveFloat* CameraPitchForceCurve; // 0x2c0(0x08)
	struct UCurveFloat* CameraYawForceCurve; // 0x2c8(0x08)
	struct UCurveFloat* CameraRollForceCurve; // 0x2d0(0x08)
	struct UCurveFloat* CameraPitchDirectionWeightCurve; // 0x2d8(0x08)
	struct UCurveFloat* CameraYawDirectionWeightCurve; // 0x2e0(0x08)
	struct UCurveFloat* CameraRollDirectionWeightCurve; // 0x2e8(0x08)
	struct UCurveFloat* CameraXForceCurve; // 0x2f0(0x08)
	struct UCurveFloat* CameraYForceCurve; // 0x2f8(0x08)
	struct UCurveFloat* CameraZForceCurve; // 0x300(0x08)
	struct UCurveFloat* CameraXDirectionWeightCurve; // 0x308(0x08)
	struct UCurveFloat* CameraYDirectionWeightCurve; // 0x310(0x08)
	struct UCurveFloat* CameraZDirectionWeightCurve; // 0x318(0x08)
	struct FVector PivotNormalRotationTotalBounceScaler; // 0x320(0x0c)
	struct FVector WeaponNormalRotationTotalBounceScaler; // 0x32c(0x0c)
	struct FVector PivotNormalTranslationTotalBounceScaler; // 0x338(0x0c)
	struct FVector WeaponNormalTranslationTotalBounceScaler; // 0x344(0x0c)
	struct FVector PivotTargetingRotationTotalBounceScaler; // 0x350(0x0c)
	struct FVector WeaponTargetingRotationTotalBounceScaler; // 0x35c(0x0c)
	struct FVector PivotTargetingTranslationTotalBounceScaler; // 0x368(0x0c)
	struct FVector WeaponTargetingTranslationTotalBounceScaler; // 0x374(0x0c)
	struct FVector CameraNormalRotationTotalBounceScaler; // 0x380(0x0c)
	struct FVector CameraTargetingRotationTotalBounceScaler; // 0x38c(0x0c)
	struct FVector CameraNormalTranslationTotalBounceScaler; // 0x398(0x0c)
	struct FVector CameraTargetingTranslationTotalBounceScaler; // 0x3a4(0x0c)
	float CameraNormalShakeFOVScaler; // 0x3b0(0x04)
	float CameraTargetingShakeFOVScaler; // 0x3b4(0x04)
	struct FVector HandRotationForceScaler; // 0x3b8(0x0c)
	struct FVector HandTranslationForceScaler; // 0x3c4(0x0c)
	struct FVector CameraRotationForceScaler; // 0x3d0(0x0c)
	struct FVector CameraTranslationForceScaler; // 0x3dc(0x0c)
	float Bounce_NormalIdleScaler; // 0x3e8(0x04)
	float Bounce_NormalSlowlyMovingScaler; // 0x3ec(0x04)
	float Bounce_NormalRunningScaler; // 0x3f0(0x04)
	float Bounce_NormalDashScaler; // 0x3f4(0x04)
	float Bounce_NormalCaughtScaler; // 0x3f8(0x04)
	float Bounce_NormalBrakingScaler; // 0x3fc(0x04)
	float Bounce_TargettingIdleScaler; // 0x400(0x04)
	float Bounce_TargettingSlowlyMovingScaler; // 0x404(0x04)
	float Bounce_TargettingRunningScaler; // 0x408(0x04)
	float Bounce_TargettingDashScaler; // 0x40c(0x04)
	float Bounce_TargettingCaughtScaler; // 0x410(0x04)
	float Bounce_TargettingBrakingScaler; // 0x414(0x04)
	float Bounce_NormalCharStatusScaler; // 0x418(0x04)
	float Bounce_TargettingCharStatusScaler; // 0x41c(0x04)
	struct UCurveFloat* Spread_NormalIdleCurve; // 0x420(0x08)
	struct UCurveFloat* Spread_NormalSlowlyMovingCurve; // 0x428(0x08)
	struct UCurveFloat* Spread_NormalRunningCurve; // 0x430(0x08)
	struct UCurveFloat* Spread_NormalDashCurve; // 0x438(0x08)
	struct UCurveFloat* Spread_NormalCaughtCurve; // 0x440(0x08)
	struct UCurveFloat* Spread_NormalBrakingCurve; // 0x448(0x08)
	float Spread_NormalIdleScaler; // 0x450(0x04)
	float Spread_NormalSlowlyMovingScaler; // 0x454(0x04)
	float Spread_NormalRunningScaler; // 0x458(0x04)
	float Spread_NormalDashScaler; // 0x45c(0x04)
	float Spread_NormalCaughtScaler; // 0x460(0x04)
	float Spread_NormalBrakingScaler; // 0x464(0x04)
	struct UCurveFloat* Spread_TargettingIdleCurve; // 0x468(0x08)
	struct UCurveFloat* Spread_TargettingSlowlyMovingCurve; // 0x470(0x08)
	struct UCurveFloat* Spread_TargettingRunningCurve; // 0x478(0x08)
	struct UCurveFloat* Spread_TargettingDashCurve; // 0x480(0x08)
	struct UCurveFloat* Spread_TargettingCaughtCurve; // 0x488(0x08)
	struct UCurveFloat* Spread_TargettingBrakingCurve; // 0x490(0x08)
	float Spread_TargettingIdleScaler; // 0x498(0x04)
	float Spread_TargettingSlowlyMovingScaler; // 0x49c(0x04)
	float Spread_TargettingRunningScaler; // 0x4a0(0x04)
	float Spread_TargettingDashScaler; // 0x4a4(0x04)
	float Spread_TargettingCaughtScaler; // 0x4a8(0x04)
	float Spread_TargettingBrakingScaler; // 0x4ac(0x04)
	float Spread_NormalCharStatusScaler; // 0x4b0(0x04)
	float Spread_TargettingCharStatusScaler; // 0x4b4(0x04)
	float TacticalReloadDuration; // 0x4b8(0x04)
	float PreReloadDuration; // 0x4bc(0x04)
	float ReloadDuration; // 0x4c0(0x04)
	float PostReloadDuration; // 0x4c4(0x04)
	float PreEmptyReloadDuration; // 0x4c8(0x04)
	float EmptyReloadDuration; // 0x4cc(0x04)
	float PostEmptyReloadDuration; // 0x4d0(0x04)
	float PerBulletReloadDuration; // 0x4d4(0x04)
	enum class EReloadType ReloadType; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	float EmptyClipReloadDelay; // 0x4dc(0x04)
	int32_t RoundNumInChamber; // 0x4e0(0x04)
	char ReloadBulletInPreEmptyReload : 1; // 0x4e4(0x01)
	char UseTacReload : 1; // 0x4e4(0x01)
	char TacReloadResetPostFire : 1; // 0x4e4(0x01)
	char PreReloadResetPostFire : 1; // 0x4e4(0x01)
	char PostReloadResetPostFire : 1; // 0x4e4(0x01)
	char PreReloadInterruptPostFire : 1; // 0x4e4(0x01)
	char CanLoopReload : 1; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	float Mass; // 0x4e8(0x04)
	float MassScaler; // 0x4ec(0x04)
	float StandardMinMass; // 0x4f0(0x04)
	float StandardMaxMass; // 0x4f4(0x04)
	float PickUpDuration; // 0x4f8(0x04)
	float OpeningEquipDuration; // 0x4fc(0x04)
	float EquipDuration; // 0x500(0x04)
	float UnequipDuration; // 0x504(0x04)
	float EquipUnskippableDuration; // 0x508(0x04)
	float UnequipSkippableDuration; // 0x50c(0x04)
	float DragVelocityScale; // 0x510(0x04)
	float DragVelocityScalePhase2; // 0x514(0x04)
	float AutoTargettingRadius; // 0x518(0x04)
	float PreciseZoneRadius; // 0x51c(0x04)
	float SweetSpotRadius; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct UCurveFloat* SweetSpotInputScalerFloatCurve; // 0x528(0x08)
	struct UCurveFloat* DragVelocityModifyFloatCurve; // 0x530(0x08)
	char ApplyDragInBodyBox : 1; // 0x538(0x01)
	char OverrideAimingConfig : 1; // 0x538(0x01)
	char pad_538_2 : 6; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	float EnableGunFunnelDistance; // 0x53c(0x04)
	float GunFunnelNearestDistance; // 0x540(0x04)
	float GunFunnelFurthestDistance; // 0x544(0x04)
	char GunFunnelSwitch : 1; // 0x548(0x01)
	char pad_548_1 : 7; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	float Mesh1PCustomFOVAngle_Normal; // 0x54c(0x04)
	float Mesh1PCustomFOVAngle_ADS; // 0x550(0x04)
	float ScopeADSFOV; // 0x554(0x04)
	float ADS_TargetingDuration; // 0x558(0x04)
	float ADS_UnTargetingDuration; // 0x55c(0x04)
	float ADSFOV_InterpSpeed; // 0x560(0x04)
	float ApplyCharStatusChangePercentage; // 0x564(0x04)
	float ApplyADSFOVChangePercentage; // 0x568(0x04)
	float PlayStartADSSoundPercentage; // 0x56c(0x04)
	float PlayStopADSSoundPercentage; // 0x570(0x04)
	char bCanReloadWhenAiming : 1; // 0x574(0x01)
	char pad_574_1 : 7; // 0x574(0x01)
	char pad_575[0x3]; // 0x575(0x03)
	float AimTraceLength; // 0x578(0x04)
	float StraightRange; // 0x57c(0x04)
	float BlendRange; // 0x580(0x04)
	float SelfDestroyTime; // 0x584(0x04)
	struct UParticleSystem* MuzzleFX; // 0x588(0x08)
	struct UParticleSystem* MuzzleFX1P; // 0x590(0x08)
	struct UParticleSystem* MuzzleFX3P; // 0x598(0x08)
	struct UCameraShakeBase* MeleeCameraShake; // 0x5a0(0x08)
	struct UCameraShakeBase* FireCameraShake; // 0x5a8(0x08)
	struct UCameraShakeBase* FireInADSCameraShake; // 0x5b0(0x08)
	struct UForceFeedbackEffect* FireForceFeedback; // 0x5b8(0x08)
	struct USoundCue* RefillingSound; // 0x5c0(0x08)
	struct USoundCue* OutOfAmmoSound; // 0x5c8(0x08)
	struct USoundCue* ReloadSound; // 0x5d0(0x08)
	struct USoundCue* FireSound1P; // 0x5d8(0x08)
	struct USoundCue* FireSound3P; // 0x5e0(0x08)
	struct USoundCue* FireLoopSound1P; // 0x5e8(0x08)
	struct USoundCue* FireLoopSound3P; // 0x5f0(0x08)
	struct USoundCue* FireFinishSound; // 0x5f8(0x08)
	struct USoundCue* EmptyClipClickSound; // 0x600(0x08)
	struct USoundCue* EquipSound; // 0x608(0x08)
	struct USoundCue* UnEquipSound; // 0x610(0x08)
	struct USoundCue* FireAmbientSound; // 0x618(0x08)
	struct USoundCue* StartADSSound; // 0x620(0x08)
	struct USoundCue* StopADSSound; // 0x628(0x08)
	char LoopedFireSound : 1; // 0x630(0x01)
	char pad_630_1 : 7; // 0x630(0x01)
	char pad_631[0x7]; // 0x631(0x07)
	struct UAnimSequenceBase* AimingPose; // 0x638(0x08)
	struct UAnimSequenceBase* IdlePose; // 0x640(0x08)
	struct UAnimSequenceBase* ReloadingAimingPose; // 0x648(0x08)
	struct UAnimSequenceBase* CQBAimingPose; // 0x650(0x08)
	struct UAnimSequenceBase* CQBIdlePose; // 0x658(0x08)
	struct UAnimMontage* PreEmptyReloadPawn1PAnim; // 0x660(0x08)
	struct UAnimMontage* PreEmptyReloadPawn3PAnim; // 0x668(0x08)
	struct UAnimMontage* PreEmptyReloadWeapon1PAnim; // 0x670(0x08)
	struct UAnimMontage* PreEmptyReloadWeapon3PAnim; // 0x678(0x08)
	struct UAnimMontage* EmptyReloadPawn1PAnim0; // 0x680(0x08)
	struct UAnimMontage* EmptyReloadPawn3PAnim0; // 0x688(0x08)
	struct UAnimMontage* EmptyReloadWeapon1PAnim0; // 0x690(0x08)
	struct UAnimMontage* EmptyReloadWeapon3PAnim0; // 0x698(0x08)
	struct UAnimMontage* EmptyReloadPawn1PAnim1; // 0x6a0(0x08)
	struct UAnimMontage* EmptyReloadPawn3PAnim1; // 0x6a8(0x08)
	struct UAnimMontage* EmptyReloadWeapon1PAnim1; // 0x6b0(0x08)
	struct UAnimMontage* EmptyReloadWeapon3PAnim1; // 0x6b8(0x08)
	struct UAnimMontage* EmptyReloadPawn1PAnim2; // 0x6c0(0x08)
	struct UAnimMontage* EmptyReloadPawn3PAnim2; // 0x6c8(0x08)
	struct UAnimMontage* EmptyReloadWeapon1PAnim2; // 0x6d0(0x08)
	struct UAnimMontage* EmptyReloadWeapon3PAnim2; // 0x6d8(0x08)
	struct UAnimMontage* EmptyReloadPawn1PAnim3; // 0x6e0(0x08)
	struct UAnimMontage* EmptyReloadPawn3PAnim3; // 0x6e8(0x08)
	struct UAnimMontage* EmptyReloadWeapon1PAnim3; // 0x6f0(0x08)
	struct UAnimMontage* EmptyReloadWeapon3PAnim3; // 0x6f8(0x08)
	struct UAnimMontage* EmptyReloadPawn1PAnim4; // 0x700(0x08)
	struct UAnimMontage* EmptyReloadPawn3PAnim4; // 0x708(0x08)
	struct UAnimMontage* EmptyReloadWeapon1PAnim4; // 0x710(0x08)
	struct UAnimMontage* EmptyReloadWeapon3PAnim4; // 0x718(0x08)
	struct UAnimMontage* RefillingPawn1PAnim; // 0x720(0x08)
	struct UAnimMontage* RefillingPawn3PAnim; // 0x728(0x08)
	struct UAnimMontage* RefillingWeapon1PAnim; // 0x730(0x08)
	struct UAnimMontage* RefillingWeapon3PAnim; // 0x738(0x08)
	struct UAnimMontage* PostEmptyReloadPawn1PAnim; // 0x740(0x08)
	struct UAnimMontage* PostEmptyReloadPawn3PAnim; // 0x748(0x08)
	struct UAnimMontage* PostEmptyReloadWeapon1PAnim; // 0x750(0x08)
	struct UAnimMontage* PostEmptyReloadWeapon3PAnim; // 0x758(0x08)
	struct UAnimMontage* MeleePawn1PAnim; // 0x760(0x08)
	struct UAnimMontage* MeleePawn3PAnim; // 0x768(0x08)
	struct UAnimMontage* MeleeWeapon1PAnim; // 0x770(0x08)
	struct UAnimMontage* MeleeWeapon3PAnim; // 0x778(0x08)
	struct UAnimMontage* FirePawn1PAnim0; // 0x780(0x08)
	struct UAnimMontage* FirePawn3PAnim0; // 0x788(0x08)
	struct UAnimMontage* FireWeapon1PAnim0; // 0x790(0x08)
	struct UAnimMontage* FireWeapon3PAnim0; // 0x798(0x08)
	struct UAnimMontage* FirePawn1PAnim1; // 0x7a0(0x08)
	struct UAnimMontage* FirePawn3PAnim1; // 0x7a8(0x08)
	struct UAnimMontage* FireWeapon1PAnim1; // 0x7b0(0x08)
	struct UAnimMontage* FireWeapon3PAnim1; // 0x7b8(0x08)
	struct UAnimMontage* FirePawn1PAnim2; // 0x7c0(0x08)
	struct UAnimMontage* FirePawn3PAnim2; // 0x7c8(0x08)
	struct UAnimMontage* FireWeapon1PAnim2; // 0x7d0(0x08)
	struct UAnimMontage* FireWeapon3PAnim2; // 0x7d8(0x08)
	struct UAnimMontage* FirePawn1PAnim3; // 0x7e0(0x08)
	struct UAnimMontage* FirePawn3PAnim3; // 0x7e8(0x08)
	struct UAnimMontage* FireWeapon1PAnim3; // 0x7f0(0x08)
	struct UAnimMontage* FireWeapon3PAnim3; // 0x7f8(0x08)
	struct UAnimMontage* FirePawn1PAnim4; // 0x800(0x08)
	struct UAnimMontage* FirePawn3PAnim4; // 0x808(0x08)
	struct UAnimMontage* FireWeapon1PAnim4; // 0x810(0x08)
	struct UAnimMontage* FireWeapon3PAnim4; // 0x818(0x08)
	struct UAnimMontage* TacticalReloadPawn1PAnim0; // 0x820(0x08)
	struct UAnimMontage* TacticalReloadPawn3PAnim0; // 0x828(0x08)
	struct UAnimMontage* TacticalReloadWeapon1PAnim0; // 0x830(0x08)
	struct UAnimMontage* TacticalReloadWeapon3PAnim0; // 0x838(0x08)
	struct UAnimMontage* TacticalReloadPawn1PAnim1; // 0x840(0x08)
	struct UAnimMontage* TacticalReloadPawn3PAnim1; // 0x848(0x08)
	struct UAnimMontage* TacticalReloadWeapon1PAnim1; // 0x850(0x08)
	struct UAnimMontage* TacticalReloadWeapon3PAnim1; // 0x858(0x08)
	struct UAnimMontage* TacticalReloadPawn1PAnim2; // 0x860(0x08)
	struct UAnimMontage* TacticalReloadPawn3PAnim2; // 0x868(0x08)
	struct UAnimMontage* TacticalReloadWeapon1PAnim2; // 0x870(0x08)
	struct UAnimMontage* TacticalReloadWeapon3PAnim2; // 0x878(0x08)
	struct UAnimMontage* TacticalReloadPawn1PAnim3; // 0x880(0x08)
	struct UAnimMontage* TacticalReloadPawn3PAnim3; // 0x888(0x08)
	struct UAnimMontage* TacticalReloadWeapon1PAnim3; // 0x890(0x08)
	struct UAnimMontage* TacticalReloadWeapon3PAnim3; // 0x898(0x08)
	struct UAnimMontage* TacticalReloadPawn1PAnim4; // 0x8a0(0x08)
	struct UAnimMontage* TacticalReloadPawn3PAnim4; // 0x8a8(0x08)
	struct UAnimMontage* TacticalReloadWeapon1PAnim4; // 0x8b0(0x08)
	struct UAnimMontage* TacticalReloadWeapon3PAnim4; // 0x8b8(0x08)
	struct UAnimMontage* PreReloadPawn1PAnim0; // 0x8c0(0x08)
	struct UAnimMontage* PreReloadPawn3PAnim0; // 0x8c8(0x08)
	struct UAnimMontage* PreReloadWeapon1PAnim0; // 0x8d0(0x08)
	struct UAnimMontage* PreReloadWeapon3PAnim0; // 0x8d8(0x08)
	struct UAnimMontage* PreReloadPawn1PAnim1; // 0x8e0(0x08)
	struct UAnimMontage* PreReloadPawn3PAnim1; // 0x8e8(0x08)
	struct UAnimMontage* PreReloadWeapon1PAnim1; // 0x8f0(0x08)
	struct UAnimMontage* PreReloadWeapon3PAnim1; // 0x8f8(0x08)
	struct UAnimMontage* PreReloadPawn1PAnim2; // 0x900(0x08)
	struct UAnimMontage* PreReloadPawn3PAnim2; // 0x908(0x08)
	struct UAnimMontage* PreReloadWeapon1PAnim2; // 0x910(0x08)
	struct UAnimMontage* PreReloadWeapon3PAnim2; // 0x918(0x08)
	struct UAnimMontage* PreReloadPawn1PAnim3; // 0x920(0x08)
	struct UAnimMontage* PreReloadPawn3PAnim3; // 0x928(0x08)
	struct UAnimMontage* PreReloadWeapon1PAnim3; // 0x930(0x08)
	struct UAnimMontage* PreReloadWeapon3PAnim3; // 0x938(0x08)
	struct UAnimMontage* PreReloadPawn1PAnim4; // 0x940(0x08)
	struct UAnimMontage* PreReloadPawn3PAnim4; // 0x948(0x08)
	struct UAnimMontage* PreReloadWeapon1PAnim4; // 0x950(0x08)
	struct UAnimMontage* PreReloadWeapon3PAnim4; // 0x958(0x08)
	struct UAnimMontage* ReloadPawn1PAnim0; // 0x960(0x08)
	struct UAnimMontage* ReloadPawn3PAnim0; // 0x968(0x08)
	struct UAnimMontage* ReloadWeapon1PAnim0; // 0x970(0x08)
	struct UAnimMontage* ReloadWeapon3PAnim0; // 0x978(0x08)
	struct UAnimMontage* ReloadPawn1PAnim1; // 0x980(0x08)
	struct UAnimMontage* ReloadPawn3PAnim1; // 0x988(0x08)
	struct UAnimMontage* ReloadWeapon1PAnim1; // 0x990(0x08)
	struct UAnimMontage* ReloadWeapon3PAnim1; // 0x998(0x08)
	struct UAnimMontage* ReloadPawn1PAnim2; // 0x9a0(0x08)
	struct UAnimMontage* ReloadPawn3PAnim2; // 0x9a8(0x08)
	struct UAnimMontage* ReloadWeapon1PAnim2; // 0x9b0(0x08)
	struct UAnimMontage* ReloadWeapon3PAnim2; // 0x9b8(0x08)
	struct UAnimMontage* ReloadPawn1PAnim3; // 0x9c0(0x08)
	struct UAnimMontage* ReloadPawn3PAnim3; // 0x9c8(0x08)
	struct UAnimMontage* ReloadWeapon1PAnim3; // 0x9d0(0x08)
	struct UAnimMontage* ReloadWeapon3PAnim3; // 0x9d8(0x08)
	struct UAnimMontage* ReloadPawn1PAnim4; // 0x9e0(0x08)
	struct UAnimMontage* ReloadPawn3PAnim4; // 0x9e8(0x08)
	struct UAnimMontage* ReloadWeapon1PAnim4; // 0x9f0(0x08)
	struct UAnimMontage* ReloadWeapon3PAnim4; // 0x9f8(0x08)
	struct UAnimMontage* ReloadOneBulletPawn1PAnim0; // 0xa00(0x08)
	struct UAnimMontage* ReloadOneBulletPawn3PAnim0; // 0xa08(0x08)
	struct UAnimMontage* ReloadOneBulletWeapon1PAnim0; // 0xa10(0x08)
	struct UAnimMontage* ReloadOneBulletWeapon3PAnim0; // 0xa18(0x08)
	struct UAnimMontage* ReloadOneBulletPawn1PAnim1; // 0xa20(0x08)
	struct UAnimMontage* ReloadOneBulletPawn3PAnim1; // 0xa28(0x08)
	struct UAnimMontage* ReloadOneBulletWeapon1PAnim1; // 0xa30(0x08)
	struct UAnimMontage* ReloadOneBulletWeapon3PAnim1; // 0xa38(0x08)
	struct UAnimMontage* ReloadOneBulletPawn1PAnim2; // 0xa40(0x08)
	struct UAnimMontage* ReloadOneBulletPawn3PAnim2; // 0xa48(0x08)
	struct UAnimMontage* ReloadOneBulletWeapon1PAnim2; // 0xa50(0x08)
	struct UAnimMontage* ReloadOneBulletWeapon3PAnim2; // 0xa58(0x08)
	struct UAnimMontage* ReloadOneBulletPawn1PAnim3; // 0xa60(0x08)
	struct UAnimMontage* ReloadOneBulletPawn3PAnim3; // 0xa68(0x08)
	struct UAnimMontage* ReloadOneBulletWeapon1PAnim3; // 0xa70(0x08)
	struct UAnimMontage* ReloadOneBulletWeapon3PAnim3; // 0xa78(0x08)
	struct UAnimMontage* ReloadOneBulletPawn1PAnim4; // 0xa80(0x08)
	struct UAnimMontage* ReloadOneBulletPawn3PAnim4; // 0xa88(0x08)
	struct UAnimMontage* ReloadOneBulletWeapon1PAnim4; // 0xa90(0x08)
	struct UAnimMontage* ReloadOneBulletWeapon3PAnim4; // 0xa98(0x08)
	struct UAnimMontage* PostReloadPawn1PAnim0; // 0xaa0(0x08)
	struct UAnimMontage* PostReloadPawn3PAnim0; // 0xaa8(0x08)
	struct UAnimMontage* PostReloadWeapon1PAnim0; // 0xab0(0x08)
	struct UAnimMontage* PostReloadWeapon3PAnim0; // 0xab8(0x08)
	struct UAnimMontage* PostReloadPawn1PAnim1; // 0xac0(0x08)
	struct UAnimMontage* PostReloadPawn3PAnim1; // 0xac8(0x08)
	struct UAnimMontage* PostReloadWeapon1PAnim1; // 0xad0(0x08)
	struct UAnimMontage* PostReloadWeapon3PAnim1; // 0xad8(0x08)
	struct UAnimMontage* PostReloadPawn1PAnim2; // 0xae0(0x08)
	struct UAnimMontage* PostReloadPawn3PAnim2; // 0xae8(0x08)
	struct UAnimMontage* PostReloadWeapon1PAnim2; // 0xaf0(0x08)
	struct UAnimMontage* PostReloadWeapon3PAnim2; // 0xaf8(0x08)
	struct UAnimMontage* PostReloadPawn1PAnim3; // 0xb00(0x08)
	struct UAnimMontage* PostReloadPawn3PAnim3; // 0xb08(0x08)
	struct UAnimMontage* PostReloadWeapon1PAnim3; // 0xb10(0x08)
	struct UAnimMontage* PostReloadWeapon3PAnim3; // 0xb18(0x08)
	struct UAnimMontage* PostReloadPawn1PAnim4; // 0xb20(0x08)
	struct UAnimMontage* PostReloadPawn3PAnim4; // 0xb28(0x08)
	struct UAnimMontage* PostReloadWeapon1PAnim4; // 0xb30(0x08)
	struct UAnimMontage* PostReloadWeapon3PAnim4; // 0xb38(0x08)
	struct UAnimMontage* PreFirePawn1PAnim0; // 0xb40(0x08)
	struct UAnimMontage* PreFirePawn3PAnim0; // 0xb48(0x08)
	struct UAnimMontage* PreFireWeapon1PAnim0; // 0xb50(0x08)
	struct UAnimMontage* PreFireWeapon3PAnim0; // 0xb58(0x08)
	struct UAnimMontage* PreFirePawn1PAnim1; // 0xb60(0x08)
	struct UAnimMontage* PreFirePawn3PAnim1; // 0xb68(0x08)
	struct UAnimMontage* PreFireWeapon1PAnim1; // 0xb70(0x08)
	struct UAnimMontage* PreFireWeapon3PAnim1; // 0xb78(0x08)
	struct UAnimMontage* PreFirePawn1PAnim2; // 0xb80(0x08)
	struct UAnimMontage* PreFirePawn3PAnim2; // 0xb88(0x08)
	struct UAnimMontage* PreFireWeapon1PAnim2; // 0xb90(0x08)
	struct UAnimMontage* PreFireWeapon3PAnim2; // 0xb98(0x08)
	struct UAnimMontage* PreFirePawn1PAnim3; // 0xba0(0x08)
	struct UAnimMontage* PreFirePawn3PAnim3; // 0xba8(0x08)
	struct UAnimMontage* PreFireWeapon1PAnim3; // 0xbb0(0x08)
	struct UAnimMontage* PreFireWeapon3PAnim3; // 0xbb8(0x08)
	struct UAnimMontage* PreFirePawn1PAnim4; // 0xbc0(0x08)
	struct UAnimMontage* PreFirePawn3PAnim4; // 0xbc8(0x08)
	struct UAnimMontage* PreFireWeapon1PAnim4; // 0xbd0(0x08)
	struct UAnimMontage* PreFireWeapon3PAnim4; // 0xbd8(0x08)
	struct UAnimMontage* PostFirePawn1PAnim0; // 0xbe0(0x08)
	struct UAnimMontage* PostFirePawn3PAnim0; // 0xbe8(0x08)
	struct UAnimMontage* PostFireWeapon1PAnim0; // 0xbf0(0x08)
	struct UAnimMontage* PostFireWeapon3PAnim0; // 0xbf8(0x08)
	struct UAnimMontage* PostFirePawn1PAnim1; // 0xc00(0x08)
	struct UAnimMontage* PostFirePawn3PAnim1; // 0xc08(0x08)
	struct UAnimMontage* PostFireWeapon1PAnim1; // 0xc10(0x08)
	struct UAnimMontage* PostFireWeapon3PAnim1; // 0xc18(0x08)
	struct UAnimMontage* PostFirePawn1PAnim2; // 0xc20(0x08)
	struct UAnimMontage* PostFirePawn3PAnim2; // 0xc28(0x08)
	struct UAnimMontage* PostFireWeapon1PAnim2; // 0xc30(0x08)
	struct UAnimMontage* PostFireWeapon3PAnim2; // 0xc38(0x08)
	struct UAnimMontage* PostFirePawn1PAnim3; // 0xc40(0x08)
	struct UAnimMontage* PostFirePawn3PAnim3; // 0xc48(0x08)
	struct UAnimMontage* PostFireWeapon1PAnim3; // 0xc50(0x08)
	struct UAnimMontage* PostFireWeapon3PAnim3; // 0xc58(0x08)
	struct UAnimMontage* PostFirePawn1PAnim4; // 0xc60(0x08)
	struct UAnimMontage* PostFirePawn3PAnim4; // 0xc68(0x08)
	struct UAnimMontage* PostFireWeapon1PAnim4; // 0xc70(0x08)
	struct UAnimMontage* PostFireWeapon3PAnim4; // 0xc78(0x08)
	struct UAnimMontage* OpeningEquipPawn1PAnim; // 0xc80(0x08)
	struct UAnimMontage* OpeningEquipPawn3PAnim; // 0xc88(0x08)
	struct UAnimMontage* OpeningEquipWeapon1PAnim; // 0xc90(0x08)
	struct UAnimMontage* OpeningEquipWeapon3PAnim; // 0xc98(0x08)
	struct UAnimMontage* EquipPawn1PAnim; // 0xca0(0x08)
	struct UAnimMontage* EquipPawn3PAnim; // 0xca8(0x08)
	struct UAnimMontage* EquipWeapon1PAnim; // 0xcb0(0x08)
	struct UAnimMontage* EquipWeapon3PAnim; // 0xcb8(0x08)
	struct UAnimMontage* UnequipPawn1PAnim; // 0xcc0(0x08)
	struct UAnimMontage* UnequipPawn3PAnim; // 0xcc8(0x08)
	struct UAnimMontage* UnequipWeapon1PAnim; // 0xcd0(0x08)
	struct UAnimMontage* UnequipWeapon3PAnim; // 0xcd8(0x08)
	struct UAnimSequence* EquipSequence; // 0xce0(0x08)
	char LoopedFireAnim : 1; // 0xce8(0x01)
	char InfiniteAmmo : 1; // 0xce8(0x01)
	char InfiniteClip : 1; // 0xce8(0x01)
	char ShowHitMessage : 1; // 0xce8(0x01)
	char ShowDebugWeaponState : 1; // 0xce8(0x01)
	char DebugSwitch : 1; // 0xce8(0x01)
	char BPPreview : 1; // 0xce8(0x01)
	char pad_CE9[0x3]; // 0xce9(0x03)
	float HeatOfSingleShot; // 0xcec(0x04)
	float WeaponCoolDownPerSecond; // 0xcf0(0x04)
	float WeaponMinHeat; // 0xcf4(0x04)
	float WeaponMaxHeat; // 0xcf8(0x04)
	float OverheatValue; // 0xcfc(0x04)
	float CoolingDownValue; // 0xd00(0x04)
	char pad_D04[0x4]; // 0xd04(0x04)
	struct USoundBase* OverheatLoopingSound; // 0xd08(0x08)
	struct USoundBase* OverheatLoopingSoundWhileUndeployed; // 0xd10(0x08)
	struct FPBHeatComponentConfig HeatConfig; // 0xd18(0x20)
	struct USkeletalMesh* Mesh1P; // 0xd38(0x08)
	struct USkeletalMesh* Mesh3P; // 0xd40(0x08)
	char pad_D48[0x1c8]; // 0xd48(0x1c8)
};

// ScriptStruct ProjectBoundary.MeleeConfig
// Size: 0x138 (Inherited: 0x00)
struct FMeleeConfig {
	struct FMeleeAttackData MeleeAttackData; // 0x00(0x130)
	char OverrideCharacterConfig : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
};

// ScriptStruct ProjectBoundary.DebugConfig
// Size: 0x01 (Inherited: 0x00)
struct FDebugConfig {
	char InfiniteAmmo : 1; // 0x00(0x01)
	char InfiniteClip : 1; // 0x00(0x01)
	char ShowHitMessage : 1; // 0x00(0x01)
	char ShowDebugWeaponState : 1; // 0x00(0x01)
	char DebugSwitch : 1; // 0x00(0x01)
	char BPPreview : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
};

// ScriptStruct ProjectBoundary.AnimationData
// Size: 0x120 (Inherited: 0x00)
struct FAnimationData {
	struct FWeaponAnim PostFireAnimInADS; // 0x00(0x20)
	struct FWeaponAnim OpeningEquipAnim; // 0x20(0x20)
	struct FWeaponAnim EquipAnim; // 0x40(0x20)
	struct FWeaponAnim UnequipAnim; // 0x60(0x20)
	struct TArray<struct FWeaponAnim> FireAnimArray; // 0x80(0x10)
	struct TArray<struct FWeaponAnim> TacticalReloadAnimArray; // 0x90(0x10)
	struct TArray<struct FWeaponAnim> PreReloadAnimArray; // 0xa0(0x10)
	struct TArray<struct FWeaponAnim> EmptyReloadAnimArray; // 0xb0(0x10)
	struct TArray<struct FWeaponAnim> ReloadAnimArray; // 0xc0(0x10)
	struct TArray<struct FWeaponAnim> ReloadOneBulletAnimArray; // 0xd0(0x10)
	struct TArray<struct FWeaponAnim> PostReloadAnimArray; // 0xe0(0x10)
	struct TArray<struct FWeaponAnim> PreFireAnimArray; // 0xf0(0x10)
	struct TArray<struct FWeaponAnim> PostFireAnimArray; // 0x100(0x10)
	struct UAnimSequence* EquipSequence; // 0x110(0x08)
	char LoopedFireAnim : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// ScriptStruct ProjectBoundary.WeaponAnim
// Size: 0x20 (Inherited: 0x00)
struct FWeaponAnim {
	struct UAnimMontage* Pawn1P; // 0x00(0x08)
	struct UAnimMontage* Pawn3P; // 0x08(0x08)
	struct UAnimMontage* Weapon1P; // 0x10(0x08)
	struct UAnimMontage* Weapon3P; // 0x18(0x08)
};

// ScriptStruct ProjectBoundary.WeaponHUDConfig
// Size: 0x20 (Inherited: 0x00)
struct FWeaponHUDConfig {
	struct FText DisplayName; // 0x00(0x18)
	struct UTexture2D* Thumbnail; // 0x18(0x08)
};

// ScriptStruct ProjectBoundary.HandlingConfig
// Size: 0x3c8 (Inherited: 0x00)
struct FHandlingConfig {
	struct FWeaponHandling WeaponConfig; // 0x00(0x218)
	struct FCameraHandling CameraConfig; // 0x218(0x1b0)
};

// ScriptStruct ProjectBoundary.CameraHandling
// Size: 0x1b0 (Inherited: 0x00)
struct FCameraHandling {
	struct FTransformLimit TransformLimit; // 0x00(0x20)
	struct FOffsetConfig Offset; // 0x20(0x50)
	struct FLookSway LookSway; // 0x70(0x30)
	struct FMoveSlide MoveSlide; // 0xa0(0x50)
	struct FShakeConfig Shake; // 0xf0(0x50)
	struct FMoveWaveConfig MoveWave; // 0x140(0x50)
	struct FHitConfig Hit; // 0x190(0x20)
};

// ScriptStruct ProjectBoundary.HitConfig
// Size: 0x20 (Inherited: 0x00)
struct FHitConfig {
	struct FLocationAndRotation LocationAndRotation; // 0x00(0x18)
	float DamageScaler; // 0x18(0x04)
	char TowardsHitPoint : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct ProjectBoundary.LocationAndRotation
// Size: 0x18 (Inherited: 0x00)
struct FLocationAndRotation {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct ProjectBoundary.MoveWaveConfig
// Size: 0x50 (Inherited: 0x00)
struct FMoveWaveConfig {
	struct TMap<enum class ECharacterStatus, struct FWaveConfig> CharStatusMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.WaveConfig
// Size: 0x28 (Inherited: 0x00)
struct FWaveConfig {
	enum class EWaveType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLocationAndRotation LocationAndRotation; // 0x04(0x18)
	struct FVector Rate; // 0x1c(0x0c)
};

// ScriptStruct ProjectBoundary.ShakeConfig
// Size: 0x50 (Inherited: 0x00)
struct FShakeConfig {
	struct TMap<enum class ECharacterStatus, struct FWaveConfig> CharStatusMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.MoveSlide
// Size: 0x50 (Inherited: 0x00)
struct FMoveSlide {
	struct TMap<enum class ECharacterStatus, struct FLocationAndRotation> CharStatusMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.LookSway
// Size: 0x30 (Inherited: 0x00)
struct FLookSway {
	struct FLocationAndRotation Ordinary; // 0x00(0x18)
	struct FLocationAndRotation ADS; // 0x18(0x18)
};

// ScriptStruct ProjectBoundary.OffsetConfig
// Size: 0x50 (Inherited: 0x00)
struct FOffsetConfig {
	struct TMap<enum class ECharacterStatus, struct FLocationAndRotation> CharStatusMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.TransformLimit
// Size: 0x20 (Inherited: 0x00)
struct FTransformLimit {
	struct FLocationAndRotation Max; // 0x00(0x18)
	float ArmLength; // 0x18(0x04)
	float ArmDamping; // 0x1c(0x04)
};

// ScriptStruct ProjectBoundary.WeaponHandling
// Size: 0x218 (Inherited: 0x00)
struct FWeaponHandling {
	struct FTransformLimit TransformLimit; // 0x00(0x20)
	struct FOffsetConfig Offset; // 0x20(0x50)
	struct FLookSway LookSway; // 0x70(0x30)
	struct FMoveSlide MoveSlide; // 0xa0(0x50)
	struct FShakeConfig Shake; // 0xf0(0x50)
	struct FMoveWaveConfig MoveWave; // 0x140(0x50)
	struct FHitConfig Hit; // 0x190(0x20)
	struct FFiringHandling Firing; // 0x1b0(0x58)
	struct FWeaponRotateHandling RotateHandling; // 0x208(0x10)
};

// ScriptStruct ProjectBoundary.WeaponRotateHandling
// Size: 0x10 (Inherited: 0x00)
struct FWeaponRotateHandling {
	struct UCurveFloat* InputMappingCurve; // 0x00(0x08)
	float InputScaler; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ProjectBoundary.FiringHandling
// Size: 0x58 (Inherited: 0x00)
struct FFiringHandling {
	float ArmLength; // 0x00(0x04)
	float ArmDamping; // 0x04(0x04)
	struct TMap<enum class ECharacterStatus, struct FForceCurve> CharStatusMap; // 0x08(0x50)
};

// ScriptStruct ProjectBoundary.ForceCurve
// Size: 0x30 (Inherited: 0x00)
struct FForceCurve {
	struct UCurveFloat* X; // 0x00(0x08)
	struct UCurveFloat* XWeight; // 0x08(0x08)
	struct UCurveFloat* Y; // 0x10(0x08)
	struct UCurveFloat* YWeight; // 0x18(0x08)
	struct UCurveFloat* Z; // 0x20(0x08)
	struct UCurveFloat* ZWeight; // 0x28(0x08)
};

// ScriptStruct ProjectBoundary.WeaponPickUpConfig
// Size: 0x04 (Inherited: 0x00)
struct FWeaponPickUpConfig {
	float SelfDestroyTime; // 0x00(0x04)
};

// ScriptStruct ProjectBoundary.BulletTrackConfig
// Size: 0x0c (Inherited: 0x00)
struct FBulletTrackConfig {
	float AimTraceLength; // 0x00(0x04)
	float StraightRange; // 0x04(0x04)
	float BlendRange; // 0x08(0x04)
};

// ScriptStruct ProjectBoundary.ADSConfig
// Size: 0x18 (Inherited: 0x00)
struct FADSConfig {
	float ScopeADSFOV; // 0x00(0x04)
	float ADS_Duration; // 0x04(0x04)
	float ADSFOV_InterpSpeed; // 0x08(0x04)
	float ApplyCharStatusChangePercentage; // 0x0c(0x04)
	float ApplyADSFOVChangePercentage; // 0x10(0x04)
	bool bCanReloadWhenAiming; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ProjectBoundary.GunFunnelConfig
// Size: 0x10 (Inherited: 0x00)
struct FGunFunnelConfig {
	float EnableGunFunnelDistance; // 0x00(0x04)
	float GunFunnelNearestDistance; // 0x04(0x04)
	float GunFunnelFurthestDistance; // 0x08(0x04)
	char GunFunnelSwitch : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ProjectBoundary.ReloadConfig
// Size: 0x30 (Inherited: 0x00)
struct FReloadConfig {
	struct FReloadDurationConfig ReloadDurationConfig; // 0x00(0x20)
	enum class EReloadType ReloadType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float EmptyClipReloadDelay; // 0x24(0x04)
	int32_t RoundNumInChamber; // 0x28(0x04)
	char ReloadBulletInPreEmptyReload : 1; // 0x2c(0x01)
	char UseTacReload : 1; // 0x2c(0x01)
	char TacReloadResetPostFire : 1; // 0x2c(0x01)
	char PreReloadResetPostFire : 1; // 0x2c(0x01)
	char PostReloadResetPostFire : 1; // 0x2c(0x01)
	char PreReloadInterruptPostFire : 1; // 0x2c(0x01)
	char pad_2C_6 : 2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct ProjectBoundary.ReloadDurationConfig
// Size: 0x20 (Inherited: 0x00)
struct FReloadDurationConfig {
	float TacticalReloadDuration; // 0x00(0x04)
	float PreReloadDuration; // 0x04(0x04)
	float ReloadDuration; // 0x08(0x04)
	float PostReloadDuration; // 0x0c(0x04)
	float PreEmptyReloadDuration; // 0x10(0x04)
	float EmptyReloadDuration; // 0x14(0x04)
	float PostEmptyReloadDuration; // 0x18(0x04)
	float PerBulletReloadDuration; // 0x1c(0x04)
};

// ScriptStruct ProjectBoundary.SpreadData
// Size: 0xa8 (Inherited: 0x00)
struct FSpreadData {
	struct TMap<enum class ECharacterStatus, struct FSpreadCurveAndScaler> NormalCharStatusMap; // 0x00(0x50)
	struct TMap<enum class ECharacterStatus, struct FSpreadCurveAndScaler> TargetingCharStatusMap; // 0x50(0x50)
	float NormalCharStatusScaler; // 0xa0(0x04)
	float TargetingCharStatusScaler; // 0xa4(0x04)
};

// ScriptStruct ProjectBoundary.BounceConfig
// Size: 0x120 (Inherited: 0x00)
struct FBounceConfig {
	struct FBounceSpringConfig BounceSpringConfig; // 0x00(0x30)
	struct FBounceForceConfig BounceForceConfig; // 0x30(0xf0)
};

// ScriptStruct ProjectBoundary.BounceForceConfig
// Size: 0xf0 (Inherited: 0x00)
struct FBounceForceConfig {
	struct FBounceForceCurves BounceForceCurves; // 0x00(0x38)
	struct FVector AxisForceScaler; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct TMap<enum class ECharacterStatus, float> NormalCharStatusScalerMap; // 0x48(0x50)
	struct TMap<enum class ECharacterStatus, float> TargetingCharStatusScalerMap; // 0x98(0x50)
	float NormalCharStatusScaler; // 0xe8(0x04)
	float TargetingCharStatusScaler; // 0xec(0x04)
};

// ScriptStruct ProjectBoundary.BounceForceCurves
// Size: 0x38 (Inherited: 0x00)
struct FBounceForceCurves {
	struct UCurveFloat* PitchForceCurve; // 0x00(0x08)
	struct UCurveFloat* YawForceCurve; // 0x08(0x08)
	struct UCurveFloat* RollForceCurve; // 0x10(0x08)
	struct UCurveFloat* ShotPointDecayCurve; // 0x18(0x08)
	struct UCurveFloat* PitchDirectionWeightCurve; // 0x20(0x08)
	struct UCurveFloat* YawDirectionWeightCurve; // 0x28(0x08)
	struct UCurveFloat* RollDirectionWeightCurve; // 0x30(0x08)
};

// ScriptStruct ProjectBoundary.BounceSpringConfig
// Size: 0x30 (Inherited: 0x00)
struct FBounceSpringConfig {
	struct FVector2D SpringDeltaLengthMax; // 0x00(0x08)
	struct FVector2D SpringDeltaLengthMaxWhileCatching; // 0x08(0x08)
	struct FVector2D SpringDeltaLengthZeroTolerance; // 0x10(0x08)
	struct FVector2D AcclerationZeroTolerance; // 0x18(0x08)
	float MassInKg; // 0x20(0x04)
	float SpringFactor; // 0x24(0x04)
	float SpringDamping; // 0x28(0x04)
	float SpringUpdateInterval; // 0x2c(0x04)
};

// ScriptStruct ProjectBoundary.FatigueConfig
// Size: 0x18 (Inherited: 0x00)
struct FFatigueConfig {
	float FatiguePerShot; // 0x00(0x04)
	float FatigueDecayDelay; // 0x04(0x04)
	float FatigueDecayInterval; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* FatigueDecayCurve; // 0x10(0x08)
};

// ScriptStruct ProjectBoundary.FireConfig
// Size: 0x34 (Inherited: 0x00)
struct FFireConfig {
	struct FFireModeConfig FireModeConfig; // 0x00(0x08)
	struct FFireTriggerConfig FireTriggerConfig; // 0x08(0x0c)
	struct FFireStateConfig FireStateConfig; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FFireDurationConfig FireDurationConfig; // 0x18(0x14)
	int32_t BulletConsumePerShot; // 0x2c(0x04)
	float FireMarkDistance; // 0x30(0x04)
};

// ScriptStruct ProjectBoundary.FireDurationConfig
// Size: 0x14 (Inherited: 0x00)
struct FFireDurationConfig {
	float PreFireDuration; // 0x00(0x04)
	float FireDuration; // 0x04(0x04)
	float BurstPerFireDuration; // 0x08(0x04)
	float PerBurstInterval; // 0x0c(0x04)
	float PostFireDuration; // 0x10(0x04)
};

// ScriptStruct ProjectBoundary.FireStateConfig
// Size: 0x01 (Inherited: 0x00)
struct FFireStateConfig {
	char ApplyPreFireToContinuousShot : 1; // 0x00(0x01)
	char ApplyPostFireToContinuousShot : 1; // 0x00(0x01)
	char SkipLastShotPostFire : 1; // 0x00(0x01)
	char CanPreFireInterruptPostFire : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
};

// ScriptStruct ProjectBoundary.FireModeConfig
// Size: 0x08 (Inherited: 0x00)
struct FFireModeConfig {
	int32_t BurstFireNum; // 0x00(0x04)
	char AutoFireSwitch : 1; // 0x04(0x01)
	char BurstFireSwitch : 1; // 0x04(0x01)
	char pad_4_2 : 6; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ProjectBoundary.AmmoAndClipData
// Size: 0x14 (Inherited: 0x00)
struct FAmmoAndClipData {
	struct FClipConfig ClipConfig; // 0x00(0x10)
	int32_t MaxAmmo; // 0x10(0x04)
};

// ScriptStruct ProjectBoundary.ClipConfig
// Size: 0x10 (Inherited: 0x00)
struct FClipConfig {
	int32_t AmmoPerClip; // 0x00(0x04)
	int32_t InitialClips; // 0x04(0x04)
	int32_t WarningAmmo; // 0x08(0x04)
	int32_t CriticalWarningAmmo; // 0x0c(0x04)
};

// ScriptStruct ProjectBoundary.PBWeaponProjectileConfig
// Size: 0x28 (Inherited: 0x00)
struct FPBWeaponProjectileConfig {
	struct FPBProjectileModifierData ProjectileModifier; // 0x00(0x18)
	struct TArray<int32_t> CustomizedProjectileSequence; // 0x18(0x10)
};

// ScriptStruct ProjectBoundary.WeaponPartData
// Size: 0x28 (Inherited: 0x00)
struct FWeaponPartData {
	struct FString ComponentName; // 0x00(0x10)
	struct FString ParentComponentName; // 0x10(0x10)
	struct UMeshComponent* ComponentClass; // 0x20(0x08)
};

// ScriptStruct ProjectBoundary.WeaponSightData
// Size: 0x34 (Inherited: 0x00)
struct FWeaponSightData {
	float EDP_FringOffset; // 0x00(0x04)
	float EDP_ADSFiringOffset; // 0x04(0x04)
	float EDP_ADS_Idle; // 0x08(0x04)
	float FireAnimIntensity; // 0x0c(0x04)
	float ADS_FireAnimIntensity; // 0x10(0x04)
	float ADS_PostFireAnimIntensity; // 0x14(0x04)
	float ADS_IdleAnimIntesity; // 0x18(0x04)
	float ADS_IdleAnimPlayRate; // 0x1c(0x04)
	float IdleAnimIntensity; // 0x20(0x04)
	float IdleAnimPlayRate; // 0x24(0x04)
	float OffsetX; // 0x28(0x04)
	float OffsetY; // 0x2c(0x04)
	float OffsetZ; // 0x30(0x04)
};

// ScriptStruct ProjectBoundary.InstantWeaponData
// Size: 0x20 (Inherited: 0x00)
struct FInstantWeaponData {
	float WeaponRange; // 0x00(0x04)
	int32_t HitDamage; // 0x04(0x04)
	struct UDamageType* DamageType; // 0x08(0x08)
	float InstantImpulseScale; // 0x10(0x04)
	float ClientSideHitLeeway; // 0x14(0x04)
	float AllowedViewDotHitDir; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ProjectBoundary.InstantHitInfo
// Size: 0x14 (Inherited: 0x00)
struct FInstantHitInfo {
	struct FVector Origin; // 0x00(0x0c)
	float ReticleSpread; // 0x0c(0x04)
	int32_t RandomSeed; // 0x10(0x04)
};

// ScriptStruct ProjectBoundary.ProjectileWeaponData
// Size: 0x20 (Inherited: 0x00)
struct FProjectileWeaponData {
	struct APBProjectile* ProjectileClass; // 0x00(0x08)
	float ProjectileLife; // 0x08(0x04)
	int32_t ExplosionDamage; // 0x0c(0x04)
	float ExplosionRadius; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UDamageType* DamageType; // 0x18(0x08)
};

// ScriptStruct ProjectBoundary.ShotgunData
// Size: 0x0c (Inherited: 0x00)
struct FShotgunData {
	int32_t BulletNum; // 0x00(0x04)
	float ShotgunRange; // 0x04(0x04)
	float SubSpread; // 0x08(0x04)
};

// ScriptStruct ProjectBoundary.WeaponCaptureTask
// Size: 0x80 (Inherited: 0x00)
struct FWeaponCaptureTask {
	struct APBWeapon* PendingWeapon; // 0x00(0x08)
	struct FPBWeaponPartNetworkConfig WeaponPartConfig; // 0x08(0x58)
	struct UTextureRenderTarget2D* NormalRT; // 0x60(0x08)
	struct UTextureRenderTarget2D* NormalDepthRT; // 0x68(0x08)
	struct UTextureRenderTarget2D* SmallRT; // 0x70(0x08)
	struct UTextureRenderTarget2D* SmallDepthRT; // 0x78(0x08)
};

// ScriptStruct ProjectBoundary.PBWeaponInfo_UI
// Size: 0x30 (Inherited: 0x00)
struct FPBWeaponInfo_UI {
	struct FName RoleId; // 0x00(0x08)
	struct FName WeaponID; // 0x08(0x08)
	struct FText WeaponText; // 0x10(0x18)
	enum class EPBSlotType SlotType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ProjectBoundary.WeaponSlotPartInfo
// Size: 0x50 (Inherited: 0x00)
struct FWeaponSlotPartInfo {
	struct TMap<enum class EPBPartSlotType, struct UPartDataHolderComponent*> TypePartMap; // 0x00(0x50)
};

// ScriptStruct ProjectBoundary.PBWeaponSkeletalFOVConfig
// Size: 0x08 (Inherited: 0x00)
struct FPBWeaponSkeletalFOVConfig {
	float FOVAngle_Normal; // 0x00(0x04)
	float FOVAngle_ADS; // 0x04(0x04)
};

// ScriptStruct ProjectBoundary.PBLobbyUserInfo_UI
// Size: 0x18 (Inherited: 0x00)
struct FPBLobbyUserInfo_UI {
	struct FText DisplayName; // 0x00(0x18)
};

// ScriptStruct ProjectBoundary.PlayerOverlays
// Size: 0x60 (Inherited: 0x00)
struct FPlayerOverlays {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct ProjectBoundary.RayObjectPoolSettings
// Size: 0x10 (Inherited: 0x00)
struct FRayObjectPoolSettings {
	struct APBRayProjectile* Projectile; // 0x00(0x08)
	int32_t PoolSize; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ProjectBoundary.UnityMultiplayQoSResultWrapper
// Size: 0x10 (Inherited: 0x00)
struct FUnityMultiplayQoSResultWrapper {
	struct TArray<struct FUnityMultiplayQoSResult> QoSResults; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.UnityMultiplayQoSResult
// Size: 0x30 (Inherited: 0x00)
struct FUnityMultiplayQoSResult {
	struct FString Region; // 0x00(0x10)
	int32_t Latency; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	double PacketLoss; // 0x18(0x08)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct ProjectBoundary.UnityMultiplayQoSServerWrapper
// Size: 0x10 (Inherited: 0x00)
struct FUnityMultiplayQoSServerWrapper {
	struct TArray<struct FUnityMultiplayQoSServer> Servers; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.UnityMultiplayQoSServer
// Size: 0x40 (Inherited: 0x00)
struct FUnityMultiplayQoSServer {
	int32_t locationid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString RegionId; // 0x08(0x10)
	struct FString ipv4; // 0x18(0x10)
	struct FString ipv6; // 0x28(0x10)
	uint16_t Port; // 0x38(0x02)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct ProjectBoundary.BackfillTicketProps
// Size: 0xa0 (Inherited: 0x00)
struct FBackfillTicketProps {
	struct FString GameMode; // 0x00(0x10)
	struct FString GameMap; // 0x10(0x10)
	struct TMap<struct FString, struct FBackfillTeamData> CurrentTeamsMap; // 0x20(0x50)
	struct FString Version; // 0x70(0x10)
	struct FString Region; // 0x80(0x10)
	struct FString GameSessionId; // 0x90(0x10)
};

// ScriptStruct ProjectBoundary.BackfillTeamData
// Size: 0x20 (Inherited: 0x00)
struct FBackfillTeamData {
	struct FString TeamID; // 0x00(0x10)
	struct TArray<struct FBackfillPlayerData> Players; // 0x10(0x10)
};

// ScriptStruct ProjectBoundary.BackfillPlayerData
// Size: 0x40 (Inherited: 0x00)
struct FBackfillPlayerData {
	struct FString PlayerId; // 0x00(0x10)
	struct FString PlayerSessionId; // 0x10(0x10)
	double Rating; // 0x20(0x08)
	double Expect; // 0x28(0x08)
	struct FString QoSData; // 0x30(0x10)
};

// ScriptStruct ProjectBoundary.UMPFuntionConfig
// Size: 0x04 (Inherited: 0x00)
struct FUMPFuntionConfig {
	int32_t GameModeSet; // 0x00(0x04)
};

// ScriptStruct ProjectBoundary.UMPBackfillTicket
// Size: 0xc8 (Inherited: 0x00)
struct FUMPBackfillTicket {
	struct FString ID; // 0x00(0x10)
	int64_t Created; // 0x10(0x08)
	struct FString Connection; // 0x18(0x10)
	struct TMap<struct FString, double> Attributes; // 0x28(0x50)
	struct TMap<struct FString, struct FString> Properties; // 0x78(0x50)
};

// ScriptStruct ProjectBoundary.UMPCreateBackfillTicketResponse
// Size: 0x10 (Inherited: 0x00)
struct FUMPCreateBackfillTicketResponse {
	struct FString ID; // 0x00(0x10)
};

// ScriptStruct ProjectBoundary.UMPCreateBackfillTicketRequest
// Size: 0xb0 (Inherited: 0x00)
struct FUMPCreateBackfillTicketRequest {
	struct FString Connection; // 0x00(0x10)
	struct TMap<struct FString, double> Attributes; // 0x10(0x50)
	struct TMap<struct FString, struct FString> Properties; // 0x60(0x50)
};

// ScriptStruct ProjectBoundary.UMPMatchProperties
// Size: 0xa0 (Inherited: 0x00)
struct FUMPMatchProperties {
	struct FUMPBackendExpansion Expansion; // 0x00(0x20)
	struct TArray<struct FUMPTicket> Tickets; // 0x20(0x10)
	struct FJsonObjectWrapper AssignmentProperties; // 0x30(0x20)
	struct FJsonObjectWrapper MatchProperties; // 0x50(0x20)
	struct FString GeneratorName; // 0x70(0x10)
	struct FString FunctionName; // 0x80(0x10)
	struct FString BackfillTicketId; // 0x90(0x10)
};

// ScriptStruct ProjectBoundary.UMPTicket
// Size: 0xf8 (Inherited: 0x00)
struct FUMPTicket {
	struct FString ID; // 0x00(0x10)
	struct FUMPAssignment Assignment; // 0x10(0x40)
	struct TMap<struct FString, double> Attributes; // 0x50(0x50)
	int64_t Created; // 0xa0(0x08)
	struct TMap<struct FString, struct FString> Properties; // 0xa8(0x50)
};

// ScriptStruct ProjectBoundary.UMPAssignment
// Size: 0x40 (Inherited: 0x00)
struct FUMPAssignment {
	struct FString Connection; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FJsonObjectWrapper Properties; // 0x20(0x20)
};

// ScriptStruct ProjectBoundary.UMPBackendExpansion
// Size: 0x20 (Inherited: 0x00)
struct FUMPBackendExpansion {
	struct FJsonObjectWrapper Config; // 0x00(0x20)
};

// ScriptStruct ProjectBoundary.UnityMultiplayConfig
// Size: 0x40 (Inherited: 0x00)
struct FUnityMultiplayConfig {
	struct FString SessionId; // 0x00(0x10)
	struct FString SessionAuth; // 0x10(0x10)
	struct FString ConnectionIP; // 0x20(0x10)
	struct FString ConnectionPort; // 0x30(0x10)
};

