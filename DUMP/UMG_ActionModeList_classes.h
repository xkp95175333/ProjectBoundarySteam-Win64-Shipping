// WidgetBlueprintGeneratedClass UMG_ActionModeList.UMG_ActionModeList_C
// Size: 0x298 (Inherited: 0x260)
struct UUMG_ActionModeList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* SpacerCollapse; // 0x268(0x08)
	struct UUMG_DisplayMode_C* Mode_01; // 0x270(0x08)
	struct UUMG_DisplayMode_C* Mode_02; // 0x278(0x08)
	struct UPBRadioButtonPanelWidget* PBRadioButtonPanelWidget_135; // 0x280(0x08)
	struct FMulticastInlineDelegate StartSearching; // 0x288(0x10)

	void ReverseAnim(); // Function UMG_ActionModeList.UMG_ActionModeList_C.ReverseAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnMatchmakingStateChanged(enum class ELogicServerTeamMatchmakingState NewState); // Function UMG_ActionModeList.UMG_ActionModeList_C.OnMatchmakingStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayAnimSetVisability(struct UUMG_DisplayMode_C* UMG_DisplayMode, bool Selected); // Function UMG_ActionModeList.UMG_ActionModeList_C.PlayAnimSetVisability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PickButton(bool Btn1_Selected, bool Btn2_Selected); // Function UMG_ActionModeList.UMG_ActionModeList_C.PickButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_ActionModeList.UMG_ActionModeList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ActionModeList_Mode_01_K2Node_ComponentBoundEvent_0_Btn_Clicked__DelegateSignature(); // Function UMG_ActionModeList.UMG_ActionModeList_C.BndEvt__UMG_ActionModeList_Mode_01_K2Node_ComponentBoundEvent_0_Btn_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ActionModeList_Mode_02_K2Node_ComponentBoundEvent_1_Btn_Clicked__DelegateSignature(); // Function UMG_ActionModeList.UMG_ActionModeList_C.BndEvt__UMG_ActionModeList_Mode_02_K2Node_ComponentBoundEvent_1_Btn_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_ActionModeList.UMG_ActionModeList_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnMatchmakingStateChangedDelegate(enum class ELogicServerTeamMatchmakingState NewState); // Function UMG_ActionModeList.UMG_ActionModeList_C.OnMatchmakingStateChangedDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ActionModeList(int32_t EntryPoint); // Function UMG_ActionModeList.UMG_ActionModeList_C.ExecuteUbergraph_UMG_ActionModeList // (Final|UbergraphFunction) // @ game+0x1556ec0
	void StartSearching__DelegateSignature(); // Function UMG_ActionModeList.UMG_ActionModeList_C.StartSearching__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

