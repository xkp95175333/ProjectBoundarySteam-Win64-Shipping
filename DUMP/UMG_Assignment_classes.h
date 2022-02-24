// WidgetBlueprintGeneratedClass UMG_Assignment.UMG_Assignment_C
// Size: 0x2f0 (Inherited: 0x2a8)
struct UUMG_Assignment_C : UUMG_PageBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UImage* BGImage1; // 0x2b0(0x08)
	struct UImage* BGImage2; // 0x2b8(0x08)
	struct UImage* Image_671; // 0x2c0(0x08)
	struct UWidgetSwitcher* SquadSwitcher_2; // 0x2c8(0x08)
	struct UUMG_ActionTeamList_C* UMG_ActionTeamList_2; // 0x2d0(0x08)
	struct UUMG_ConfirmMode_C* UMG_ConfirmMode_175; // 0x2d8(0x08)
	struct UUMG_MyJointSquad_C* UMG_MyJointSquad_2; // 0x2e0(0x08)
	struct UUMG_SquadSearchList_C* UMG_SquadSearchList_2; // 0x2e8(0x08)

	void BndEvt__UMG_Assignment_UMG_ConfirmMode_174_K2Node_ComponentBoundEvent_0_StartSearching__DelegateSignature(); // Function UMG_Assignment.UMG_Assignment_C.BndEvt__UMG_Assignment_UMG_ConfirmMode_174_K2Node_ComponentBoundEvent_0_StartSearching__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Assignment.UMG_Assignment_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Assignment.UMG_Assignment_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnLobbyStartedDelegate(); // Function UMG_Assignment.UMG_Assignment_C.OnLobbyStartedDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnMatchmakingStateChangedDelegate_Event_1(enum class ELogicServerTeamMatchmakingState NewState); // Function UMG_Assignment.UMG_Assignment_C.OnMatchmakingStateChangedDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Assignment(int32_t EntryPoint); // Function UMG_Assignment.UMG_Assignment_C.ExecuteUbergraph_UMG_Assignment // (Final|UbergraphFunction) // @ game+0x1556ec0
};

