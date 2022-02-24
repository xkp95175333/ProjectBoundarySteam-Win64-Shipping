// WidgetBlueprintGeneratedClass TeamFFA_V2.TeamFFA_V2_C
// Size: 0x418 (Inherited: 0x3c8)
struct UTeamFFA_V2_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UVerticalBox* VerticalBox_Player; // 0x3d0(0x08)
	struct TArray<struct APBCharacter*> Team0 Players; // 0x3d8(0x10)
	struct TArray<struct APBPlayerState*> AllTeam0 State; // 0x3e8(0x10)
	struct TArray<struct US_PlayerState_V2_C*> AllTeam0 MatchStateWidget; // 0x3f8(0x10)
	bool IsMyTeam; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	int32_t MyPlace; // 0x40c(0x04)
	struct US_PlayerState_V2_C* TempStateWidget; // 0x410(0x08)

	void CreatSubList(); // Function TeamFFA_V2.TeamFFA_V2_C.CreatSubList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetWidgetVisible(); // Function TeamFFA_V2.TeamFFA_V2_C.SetWidgetVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetAllState(); // Function TeamFFA_V2.TeamFFA_V2_C.SetAllState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function TeamFFA_V2.TeamFFA_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TeamFFA_V2.TeamFFA_V2_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void RefreshCurrentMatchStatesTeam0(); // Function TeamFFA_V2.TeamFFA_V2_C.RefreshCurrentMatchStatesTeam0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TeamFFA_V2(int32_t EntryPoint); // Function TeamFFA_V2.TeamFFA_V2_C.ExecuteUbergraph_TeamFFA_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

