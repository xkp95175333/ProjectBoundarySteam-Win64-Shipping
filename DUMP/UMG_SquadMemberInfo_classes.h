// WidgetBlueprintGeneratedClass UMG_SquadMemberInfo.UMG_SquadMemberInfo_C
// Size: 0x280 (Inherited: 0x268)
struct UUMG_SquadMemberInfo_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUMG_MemberInfo_C* PlayerInfo_1; // 0x270(0x08)
	bool ForceIsMe; // 0x278(0x01)
	bool ForceIsSearching; // 0x279(0x01)
	char pad_27A[0x2]; // 0x27a(0x02)
	int32_t PlayerIndex; // 0x27c(0x04)

	void Construct(); // Function UMG_SquadMemberInfo.UMG_SquadMemberInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_SquadMemberInfo.UMG_SquadMemberInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_SquadMemberInfo.UMG_SquadMemberInfo_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_SquadMemberInfo(int32_t EntryPoint); // Function UMG_SquadMemberInfo.UMG_SquadMemberInfo_C.ExecuteUbergraph_UMG_SquadMemberInfo // (Final|UbergraphFunction) // @ game+0x1556ec0
};

