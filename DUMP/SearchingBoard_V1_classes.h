// WidgetBlueprintGeneratedClass SearchingBoard_V1.SearchingBoard_V1_C
// Size: 0x530 (Inherited: 0x3d8)
struct USearchingBoard_V1_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* SearchingComplete; // 0x3e0(0x08)
	struct UWidgetAnimation* StartSearching; // 0x3e8(0x08)
	struct UCanvasPanel* Background_Box; // 0x3f0(0x08)
	struct UImage* blackBG; // 0x3f8(0x08)
	struct UImage* BlackShadow; // 0x400(0x08)
	struct UImage* CancelProgress; // 0x408(0x08)
	struct UImage* GradualMask; // 0x410(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x418(0x08)
	struct UTextBlock* MainText; // 0x420(0x08)
	struct UButton* PC_CancelButton; // 0x428(0x08)
	struct UCanvasPanel* SearchingBoard; // 0x430(0x08)
	struct UCanvasPanel* SearchingBoardAll; // 0x438(0x08)
	struct UImage* Shader_Failed; // 0x440(0x08)
	struct UImage* Shader_Normal; // 0x448(0x08)
	struct UWidgetSwitcher* Shader_Switcher; // 0x450(0x08)
	struct UTextBlock* TextBlock_2; // 0x458(0x08)
	struct UTextBlock* TimeText_Minute; // 0x460(0x08)
	float CountStartTime; // 0x468(0x04)
	float CancelStartTime; // 0x46c(0x04)
	bool IsCanceling; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	struct FLinearColor GradualMaskColor; // 0x474(0x10)
	struct FLinearColor Red_Linear; // 0x484(0x10)
	struct FLinearColor Blue_Linear; // 0x494(0x10)
	struct FLinearColor Green_Linear; // 0x4a4(0x10)
	float SearchingBoardOpacity; // 0x4b4(0x04)
	struct FLinearColor TargetLinear; // 0x4b8(0x10)
	float Designer_DurationToCancel; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct FTimerHandle CancelTimer; // 0x4d0(0x08)
	float LastCheckGameTime; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct TArray<struct FName> InputTipsIcon; // 0x4e0(0x10)
	int32_t Is_RG; // 0x4f0(0x04)
	int32_t Is_RB; // 0x4f4(0x04)
	int32_t Is_GB; // 0x4f8(0x04)
	float CancelProgressValue; // 0x4fc(0x04)
	struct FTimerHandle SearchingBoardFadeTimer; // 0x500(0x08)
	struct FText TitleText; // 0x508(0x18)
	struct FTimerHandle StopSearchingTimer; // 0x520(0x08)
	struct FTimerHandle FailDelayTimer; // 0x528(0x08)

	void CancelingProgress(); // Function SearchingBoard_V1.SearchingBoard_V1_C.CancelingProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function SearchingBoard_V1.SearchingBoard_V1_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Important_SetVisibility(bool NewShow, int32_t DEBUG PLACE); // Function SearchingBoard_V1.SearchingBoard_V1_C.Important_SetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SearchingBoard_Disappaer(); // Function SearchingBoard_V1.SearchingBoard_V1_C.SearchingBoard_Disappaer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent_4(); // Function SearchingBoard_V1.SearchingBoard_V1_C.SequenceEvent_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent_3(); // Function SearchingBoard_V1.SearchingBoard_V1_C.SequenceEvent_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent_2(); // Function SearchingBoard_V1.SearchingBoard_V1_C.SequenceEvent_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent_1(); // Function SearchingBoard_V1.SearchingBoard_V1_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAnimNotifySearchingBoardHideAfterCancel(); // Function SearchingBoard_V1.SearchingBoard_V1_C.OnAnimNotifySearchingBoardHideAfterCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAnimNotifySearchingCancel(); // Function SearchingBoard_V1.SearchingBoard_V1_C.OnAnimNotifySearchingCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SearchingTextPoint(float NewParam); // Function SearchingBoard_V1.SearchingBoard_V1_C.SearchingTextPoint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnPressCancelButton(bool bRelease); // Function SearchingBoard_V1.SearchingBoard_V1_C.OnPressCancelButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SearchingBoard_V1.SearchingBoard_V1_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CheckCancelTimer(); // Function SearchingBoard_V1.SearchingBoard_V1_C.CheckCancelTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function SearchingBoard_V1.SearchingBoard_V1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function SearchingBoard_V1.SearchingBoard_V1_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function SearchingBoard_V1.SearchingBoard_V1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnMatchMakingStateChanged(enum class ELogicServerTeamMatchmakingState State); // Function SearchingBoard_V1.SearchingBoard_V1_C.NotifyOnMatchMakingStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__PC_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SearchingBoard_V1.SearchingBoard_V1_C.BndEvt__PC_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnStartSearching(); // Function SearchingBoard_V1.SearchingBoard_V1_C.Designer_OnStartSearching // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnMatchFoundSuccess(); // Function SearchingBoard_V1.SearchingBoard_V1_C.Designer_OnMatchFoundSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnSearchingFail(struct FText InText); // Function SearchingBoard_V1.SearchingBoard_V1_C.Designer_OnSearchingFail // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnCancelSuccess(); // Function SearchingBoard_V1.SearchingBoard_V1_C.Designer_OnCancelSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnStartCanceling(); // Function SearchingBoard_V1.SearchingBoard_V1_C.Designer_OnStartCanceling // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnStopCanceling(); // Function SearchingBoard_V1.SearchingBoard_V1_C.Designer_OnStopCanceling // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetTimer(float Time); // Function SearchingBoard_V1.SearchingBoard_V1_C.Designer_SetTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_OnStopSearching(); // Function SearchingBoard_V1.SearchingBoard_V1_C.Designer_OnStopSearching // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SearchingBoardFade(); // Function SearchingBoard_V1.SearchingBoard_V1_C.SearchingBoardFade // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__PC_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function SearchingBoard_V1.SearchingBoard_V1_C.BndEvt__PC_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void StopSearching(); // Function SearchingBoard_V1.SearchingBoard_V1_C.StopSearching // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FailDelayer(); // Function SearchingBoard_V1.SearchingBoard_V1_C.FailDelayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_SearchingBoard_V1(int32_t EntryPoint); // Function SearchingBoard_V1.SearchingBoard_V1_C.ExecuteUbergraph_SearchingBoard_V1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

