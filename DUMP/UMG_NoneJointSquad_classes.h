// WidgetBlueprintGeneratedClass UMG_NoneJointSquad.UMG_NoneJointSquad_C
// Size: 0x300 (Inherited: 0x2a0)
struct UUMG_NoneJointSquad_C : UPBSquadWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* StartSearching; // 0x2a8(0x08)
	struct UUMG_SquadMemberInfo_C* UMG_SquadLongInfo_2; // 0x2b0(0x08)
	struct UUMG_SquadMemberInfo_C* UMG_SquadLongInfo_3; // 0x2b8(0x08)
	struct UUMG_SquadMemberInfo_C* UMG_SquadLongInfo_4; // 0x2c0(0x08)
	struct UUMG_SquadMemberInfo_C* UMG_SquadLongInfo_5; // 0x2c8(0x08)
	struct UUMG_SquadMemberInfo_C* UMG_SquadLongInfo_6; // 0x2d0(0x08)
	struct UUMG_SquadMemberInfo_C* UMG_SquadLongInfo_7; // 0x2d8(0x08)
	struct UUMG_SquadMemberInfo_C* UMG_SquadLongInfo_8; // 0x2e0(0x08)
	struct UUMG_SquadMemberInfo_C* UMG_SquadLongInfo_9; // 0x2e8(0x08)
	struct UUMG_SquadMemberInfo_C* UMG_SquadLongInfo_10; // 0x2f0(0x08)
	struct UVerticalBox* VerticalBox_35; // 0x2f8(0x08)

	void OnMatchmakingStateChanged(enum class ELogicServerTeamMatchmakingState NewState); // Function UMG_NoneJointSquad.UMG_NoneJointSquad_C.OnMatchmakingStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlaySearchingAnim(); // Function UMG_NoneJointSquad.UMG_NoneJointSquad_C.PlaySearchingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnMatchmakingStateChangedDelegate(enum class ELogicServerTeamMatchmakingState NewState); // Function UMG_NoneJointSquad.UMG_NoneJointSquad_C.OnMatchmakingStateChangedDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_NoneJointSquad.UMG_NoneJointSquad_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_NoneJointSquad.UMG_NoneJointSquad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_NoneJointSquad(int32_t EntryPoint); // Function UMG_NoneJointSquad.UMG_NoneJointSquad_C.ExecuteUbergraph_UMG_NoneJointSquad // (Final|UbergraphFunction) // @ game+0x1556ec0
};

