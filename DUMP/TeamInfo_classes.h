// WidgetBlueprintGeneratedClass TeamInfo.TeamInfo_C
// Size: 0x298 (Inherited: 0x268)
struct UTeamInfo_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UTextBlock* TeamCurrent; // 0x270(0x08)
	struct UImage* TeamIcon; // 0x278(0x08)
	struct UTextBlock* TeamMax; // 0x280(0x08)
	struct UTextBlock* TeamName; // 0x288(0x08)
	struct APBPlayerState* MyPlayerState; // 0x290(0x08)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function TeamInfo.TeamInfo_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetValues(bool ChangeTeamMateCountMax, struct FText TeamMateMax, bool ChangeTeamMateCount, struct FText TeamMateCurrent, bool ChangeTeam, enum class EPBTeam IsBlueTeam); // Function TeamInfo.TeamInfo_C.SetValues // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TeamInfo.TeamInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function TeamInfo.TeamInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function TeamInfo.TeamInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TeamInfo.TeamInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TeamInfo(int32_t EntryPoint); // Function TeamInfo.TeamInfo_C.ExecuteUbergraph_TeamInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

