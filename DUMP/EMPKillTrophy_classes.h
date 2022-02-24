// BlueprintGeneratedClass EMPKillTrophy.EMPKillTrophy_C
// Size: 0x268 (Inherited: 0x248)
struct AEMPKillTrophy_C : AOnlineAchievemenetBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct FText NewVar_0_1; // 0x250(0x18)

	void ReceiveBeginPlay(); // Function EMPKillTrophy.EMPKillTrophy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyKillInfoEx(struct APBPlayerState* InPlayerState, struct FName ItemId, enum class EPBHitZone HitZone, struct FName GameModeName, float KillDistance); // Function EMPKillTrophy.EMPKillTrophy_C.NotifyKillInfoEx // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_EMPKillTrophy(int32_t EntryPoint); // Function EMPKillTrophy.EMPKillTrophy_C.ExecuteUbergraph_EMPKillTrophy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

