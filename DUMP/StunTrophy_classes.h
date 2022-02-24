// BlueprintGeneratedClass StunTrophy.StunTrophy_C
// Size: 0x258 (Inherited: 0x248)
struct AStunTrophy_C : AOnlineAchievemenetBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct FTimerHandle TimeHandle; // 0x250(0x08)

	void ReceiveBeginPlay(); // Function StunTrophy.StunTrophy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function StunTrophy.StunTrophy_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_StunTrophy(int32_t EntryPoint); // Function StunTrophy.StunTrophy_C.ExecuteUbergraph_StunTrophy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

