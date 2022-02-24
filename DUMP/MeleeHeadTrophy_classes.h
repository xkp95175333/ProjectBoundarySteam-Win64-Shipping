// BlueprintGeneratedClass MeleeHeadTrophy.MeleeHeadTrophy_C
// Size: 0x250 (Inherited: 0x248)
struct AMeleeHeadTrophy_C : AOnlineAchievemenetBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)

	void ReceiveBeginPlay(); // Function MeleeHeadTrophy.MeleeHeadTrophy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyKillInfoEx(struct APBPlayerState* InPlayerState, struct FName ItemId, enum class EPBHitZone HitZone, struct FName GameModeName, float KillDistance); // Function MeleeHeadTrophy.MeleeHeadTrophy_C.NotifyKillInfoEx // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_MeleeHeadTrophy(int32_t EntryPoint); // Function MeleeHeadTrophy.MeleeHeadTrophy_C.ExecuteUbergraph_MeleeHeadTrophy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

