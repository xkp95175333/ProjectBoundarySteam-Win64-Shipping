// WidgetBlueprintGeneratedClass TutorialMainWidget.TutorialMainWidget_C
// Size: 0x45d (Inherited: 0x3da)
struct UTutorialMainWidget_C : UPBTutorialWidget_C {
	char pad_3DA[0x6]; // 0x3da(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* RefreshHint; // 0x3e8(0x08)
	struct UHorizontalBox* HorizontalBox_Finish; // 0x3f0(0x08)
	struct UHorizontalBox* HorizontalBox_Timer; // 0x3f8(0x08)
	struct UHorizontalBox* HorizontalBox_UnFinish; // 0x400(0x08)
	struct UPBInputTipsImage* Image_QuitHint; // 0x408(0x08)
	struct UOverlay* Overlay_TargetHint; // 0x410(0x08)
	struct UTextBlock* Subtitle_2; // 0x418(0x08)
	struct UTextBlock* TextBlock_timer; // 0x420(0x08)
	struct UTutorialBannerWidget_C* TutorialBannerWidget; // 0x428(0x08)
	struct UTutorialSubtitles_C* TutorialSubtitles; // 0x430(0x08)
	struct UTutorialTimerWidget_C* TutorialTimerWidget; // 0x438(0x08)
	struct UVerticalBox* VerticalBox_Hint; // 0x440(0x08)
	struct UVerticalBox* VerticalBox_TargetHint; // 0x448(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_LeaveHint; // 0x450(0x08)
	int32_t CurrentBannerIndex; // 0x458(0x04)
	enum class EInputDevice CurrentInputDevice; // 0x45c(0x01)

	void BackToMenu(); // Function TutorialMainWidget.TutorialMainWidget_C.BackToMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTargetHintCotent(struct FText HintText, struct FName InputName, int32_t TargetNum); // Function TutorialMainWidget.TutorialMainWidget_C.SetTargetHintCotent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayTargetHintAnimation(); // Function TutorialMainWidget.TutorialMainWidget_C.PlayTargetHintAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayBannerAnimation(); // Function TutorialMainWidget.TutorialMainWidget_C.PlayBannerAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ClearBannerButtonImage(); // Function TutorialMainWidget.TutorialMainWidget_C.ClearBannerButtonImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshBannerContent(struct FText BannerText, struct FName NewInputName); // Function TutorialMainWidget.TutorialMainWidget_C.RefreshBannerContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetBannerText(struct FText BannerText); // Function TutorialMainWidget.TutorialMainWidget_C.SetBannerText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddBannerButtonImage(struct FName NewInputName); // Function TutorialMainWidget.TutorialMainWidget_C.AddBannerButtonImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshSubtitles(struct FText SubtitlesText); // Function TutorialMainWidget.TutorialMainWidget_C.RefreshSubtitles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitTargetHint(); // Function TutorialMainWidget.TutorialMainWidget_C.InitTargetHint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshTimer(int32_t CountDown); // Function TutorialMainWidget.TutorialMainWidget_C.RefreshTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TargetFinish(int32_t FinishTargetNumber); // Function TutorialMainWidget.TutorialMainWidget_C.TargetFinish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddTargetHints(); // Function TutorialMainWidget.TutorialMainWidget_C.AddTargetHints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function TutorialMainWidget.TutorialMainWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function TutorialMainWidget.TutorialMainWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Test(); // Function TutorialMainWidget.TutorialMainWidget_C.Test // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TutorialMainWidget(int32_t EntryPoint); // Function TutorialMainWidget.TutorialMainWidget_C.ExecuteUbergraph_TutorialMainWidget // (Final|UbergraphFunction) // @ game+0x1556ec0
};

