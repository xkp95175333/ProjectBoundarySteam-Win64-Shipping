// WidgetBlueprintGeneratedClass BlackFader.BlackFader_C
// Size: 0x298 (Inherited: 0x268)
struct UBlackFader_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FadeIn; // 0x270(0x08)
	struct UWidgetAnimation* FadeOut; // 0x278(0x08)
	struct UBorder* Border_bg; // 0x280(0x08)
	struct FMulticastInlineDelegate FadeOutShowDispatcher; // 0x288(0x10)

	void SequenceEvent__ENTRYPOINTBlackFader_1(); // Function BlackFader.BlackFader_C.SequenceEvent__ENTRYPOINTBlackFader_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Fade Out(); // Function BlackFader.BlackFader_C.Fade Out // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Fade In(); // Function BlackFader.BlackFader_C.Fade In // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Fade Out Show Func(); // Function BlackFader.BlackFader_C.Fade Out Show Func // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Fade(float PlaybackSpeed); // Function BlackFader.BlackFader_C.Fade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function BlackFader.BlackFader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function BlackFader.BlackFader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BlackFader.BlackFader_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(); // Function BlackFader.BlackFader_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_BlackFader(int32_t EntryPoint); // Function BlackFader.BlackFader_C.ExecuteUbergraph_BlackFader // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void FadeOutShowDispatcher__DelegateSignature(); // Function BlackFader.BlackFader_C.FadeOutShowDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

