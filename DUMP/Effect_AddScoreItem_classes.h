// WidgetBlueprintGeneratedClass Effect_AddScoreItem.Effect_AddScoreItem_C
// Size: 0x430 (Inherited: 0x3d8)
struct UEffect_AddScoreItem_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* AddScoreAnim; // 0x3e0(0x08)
	struct UImage* Image_92; // 0x3e8(0x08)
	struct UTextBlock* ScoreIncrease; // 0x3f0(0x08)
	struct UTextBlock* ScoreType; // 0x3f8(0x08)
	struct FText ScoreTypeText; // 0x400(0x18)
	int32_t ScoreIncreaseValue; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct FMulticastInlineDelegate AddScoreItemAnimIsFinished; // 0x420(0x10)

	void SequenceEvent__ENTRYPOINTEffect_AddScoreItem_1(); // Function Effect_AddScoreItem.Effect_AddScoreItem_C.SequenceEvent__ENTRYPOINTEffect_AddScoreItem_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayAddScoreAnim(); // Function Effect_AddScoreItem.Effect_AddScoreItem_C.PlayAddScoreAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(struct FText ScoreTypeText, int32_t ScoreIncreaseValue); // Function Effect_AddScoreItem.Effect_AddScoreItem_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Effect_AddScoreItem.Effect_AddScoreItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SkipAnimationShow(); // Function Effect_AddScoreItem.Effect_AddScoreItem_C.SkipAnimationShow // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function Effect_AddScoreItem.Effect_AddScoreItem_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void AddScoreAnimFinished(); // Function Effect_AddScoreItem.Effect_AddScoreItem_C.AddScoreAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Effect_AddScoreItem(int32_t EntryPoint); // Function Effect_AddScoreItem.Effect_AddScoreItem_C.ExecuteUbergraph_Effect_AddScoreItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void AddScoreItemAnimIsFinished__DelegateSignature(); // Function Effect_AddScoreItem.Effect_AddScoreItem_C.AddScoreItemAnimIsFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

