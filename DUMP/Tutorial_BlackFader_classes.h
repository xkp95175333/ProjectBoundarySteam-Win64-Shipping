// WidgetBlueprintGeneratedClass Tutorial_BlackFader.Tutorial_BlackFader_C
// Size: 0x2a8 (Inherited: 0x268)
struct UTutorial_BlackFader_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FadeQuit; // 0x270(0x08)
	struct UWidgetAnimation* FadeEnter; // 0x278(0x08)
	struct UBorder* Border_bg; // 0x280(0x08)
	struct UTextBlock* TextBlock_40; // 0x288(0x08)
	struct UTextBlock* TextBlock_193; // 0x290(0x08)
	struct FMulticastInlineDelegate FadeOutShowDispatcher; // 0x298(0x10)

	void SequenceEvent__ENTRYPOINTTutorial_BlackFader_3(); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.SequenceEvent__ENTRYPOINTTutorial_BlackFader_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent__ENTRYPOINTTutorial_BlackFader_2(); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.SequenceEvent__ENTRYPOINTTutorial_BlackFader_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SequenceEvent__ENTRYPOINTTutorial_BlackFader_1(); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.SequenceEvent__ENTRYPOINTTutorial_BlackFader_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIntroEnd(); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.ShowIntroEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FadeQuitFunc(float PlaybackSpeed); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.FadeQuitFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIntro(); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.ShowIntro // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AnimationEnd(); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.AnimationEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FadeEnterFunc(float PlaybackSpeed); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.FadeEnterFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Tutorial_BlackFader(int32_t EntryPoint); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.ExecuteUbergraph_Tutorial_BlackFader // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void FadeOutShowDispatcher__DelegateSignature(); // Function Tutorial_BlackFader.Tutorial_BlackFader_C.FadeOutShowDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

