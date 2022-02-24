// BlueprintGeneratedClass SMMeleeTrophy.SMMeleeTrophy_C
// Size: 0x271 (Inherited: 0x248)
struct ASMMeleeTrophy_C : AOnlineAchievemenetBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	int32_t MeleeKill; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct FText WeaponName; // 0x258(0x18)
	bool DifftrentWeapon; // 0x270(0x01)

	void ReceiveBeginPlay(); // Function SMMeleeTrophy.SMMeleeTrophy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyRoundEndResult(struct FName GameModeName, enum class EPBGameResult GameResult); // Function SMMeleeTrophy.SMMeleeTrophy_C.NotifyRoundEndResult // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyKillInfoEx(struct APBPlayerState* InPlayerState, struct FName ItemId, enum class EPBHitZone HitZone, struct FName GameModeName, float KillDistance); // Function SMMeleeTrophy.SMMeleeTrophy_C.NotifyKillInfoEx // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_SMMeleeTrophy(int32_t EntryPoint); // Function SMMeleeTrophy.SMMeleeTrophy_C.ExecuteUbergraph_SMMeleeTrophy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

