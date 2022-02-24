// WidgetBlueprintGeneratedClass TutorialSubtitles.TutorialSubtitles_C
// Size: 0x408 (Inherited: 0x3da)
struct UTutorialSubtitles_C : UPBTutorialWidget_C {
	char pad_3DA[0x6]; // 0x3da(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Flash; // 0x3e8(0x08)
	struct UImage* Black_BG; // 0x3f0(0x08)
	struct UImage* Image_Icon; // 0x3f8(0x08)
	struct UTextBlock* Subtitle; // 0x400(0x08)

	void SetIcon(struct UTexture2D* NewParam); // Function TutorialSubtitles.TutorialSubtitles_C.SetIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetSubtitle(struct FText SubtitleText); // Function TutorialSubtitles.TutorialSubtitles_C.SetSubtitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function TutorialSubtitles.TutorialSubtitles_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void UpdateSubtitles(struct FText SubtitlesText1); // Function TutorialSubtitles.TutorialSubtitles_C.UpdateSubtitles // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TutorialSubtitles(int32_t EntryPoint); // Function TutorialSubtitles.TutorialSubtitles_C.ExecuteUbergraph_TutorialSubtitles // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

