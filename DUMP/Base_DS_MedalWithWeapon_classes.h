// BlueprintGeneratedClass Base_DS_MedalWithWeapon.Base_DS_MedalWithWeapon_C
// Size: 0x2b8 (Inherited: 0x240)
struct ABase_DS_MedalWithWeapon_C : APBDataStatistics {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct FName MedalName; // 0x250(0x08)
	struct TArray<struct FName> ItemIDArray; // 0x258(0x10)
	struct TMap<struct APBPlayerState*, struct FFPBRealChallgentInfoCache_BP> RecordRealtimeChallengeInfoMap; // 0x268(0x50)

	void Base_DS_MedalWithWeapon_CacheRealtimeChallenge(struct APBPlayerState* InPlayerState, struct FName RealTimeChallegeID, struct FName ItemId); // Function Base_DS_MedalWithWeapon.Base_DS_MedalWithWeapon_C.Base_DS_MedalWithWeapon_CacheRealtimeChallenge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Base_DS_MedalWithWeapon_Handle(struct APBPlayerState* InPlayerSate, struct TArray<struct FName> RealtimeChallengeArray); // Function Base_DS_MedalWithWeapon.Base_DS_MedalWithWeapon_C.Base_DS_MedalWithWeapon_Handle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function Base_DS_MedalWithWeapon.Base_DS_MedalWithWeapon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_MedalsInfo(struct APBPlayerState* InPlayerState, struct TArray<struct FMedalsInfoStat> MedalsInfoArray); // Function Base_DS_MedalWithWeapon.Base_DS_MedalWithWeapon_C.K2_MedalsInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Base_DS_MedalWithWeapon(int32_t EntryPoint); // Function Base_DS_MedalWithWeapon.Base_DS_MedalWithWeapon_C.ExecuteUbergraph_Base_DS_MedalWithWeapon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

