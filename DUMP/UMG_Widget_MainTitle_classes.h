// WidgetBlueprintGeneratedClass UMG_Widget_MainTitle.UMG_Widget_MainTitle_C
// Size: 0x2a8 (Inherited: 0x268)
struct UUMG_Widget_MainTitle_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UTextBlock* FrameTitle; // 0x270(0x08)
	struct UTextBlock* MainTitle; // 0x278(0x08)
	struct UImage* TitleImage; // 0x280(0x08)
	struct FText MainTitleText; // 0x288(0x18)
	struct UTexture2D* TitleImageTexture; // 0x2a0(0x08)

	void SetInfo(struct FText TitleText); // Function UMG_Widget_MainTitle.UMG_Widget_MainTitle_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Widget_MainTitle.UMG_Widget_MainTitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Widget_MainTitle(int32_t EntryPoint); // Function UMG_Widget_MainTitle.UMG_Widget_MainTitle_C.ExecuteUbergraph_UMG_Widget_MainTitle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

