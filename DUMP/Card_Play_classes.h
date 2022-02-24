// WidgetBlueprintGeneratedClass Card_Play.Card_Play_C
// Size: 0x492 (Inherited: 0x3d8)
struct UCard_Play_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x3e0(0x08)
	struct UButton* btn; // 0x3e8(0x08)
	struct UImage* Image_357; // 0x3f0(0x08)
	struct UImage* Image_Main; // 0x3f8(0x08)
	struct UVerticalBox* InfoBoard; // 0x400(0x08)
	struct UTextBlock* Intro; // 0x408(0x08)
	struct UTextBlock* Title; // 0x410(0x08)
	struct UTexture2D* MainImage; // 0x418(0x08)
	struct FText MainTitle; // 0x420(0x18)
	struct FText Introduce; // 0x438(0x18)
	struct FText Number; // 0x450(0x18)
	bool IsValid; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	int32_t TeamNumLimit; // 0x46c(0x04)
	struct FString MatchName; // 0x470(0x10)
	struct FString GameModeShortNames; // 0x480(0x10)
	bool IsNeedMatch; // 0x490(0x01)
	bool AnimPlayed; // 0x491(0x01)

	void BndEvt__Card_Play_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Card_Play.Card_Play_C.BndEvt__Card_Play_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Play_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Card_Play.Card_Play_C.BndEvt__Card_Play_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_Play.Card_Play_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Play(int32_t EntryPoint); // Function Card_Play.Card_Play_C.ExecuteUbergraph_Card_Play // (Final|UbergraphFunction) // @ game+0x1556ec0
};

