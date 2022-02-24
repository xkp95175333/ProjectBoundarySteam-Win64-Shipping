// WidgetBlueprintGeneratedClass Card_PlayMode.Card_PlayMode_C
// Size: 0x579 (Inherited: 0x460)
struct UCard_PlayMode_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* FocusOn; // 0x468(0x08)
	struct UButton* btn; // 0x470(0x08)
	struct UCanvasPanel* Focus_Filter_Board; // 0x478(0x08)
	struct UOverlay* Focus_LightingMask; // 0x480(0x08)
	struct UImage* FocusLine; // 0x488(0x08)
	struct UImage* FocusMask; // 0x490(0x08)
	struct UImage* Image; // 0x498(0x08)
	struct UImage* Image_125; // 0x4a0(0x08)
	struct UImage* Image_267; // 0x4a8(0x08)
	struct UImage* Image_356; // 0x4b0(0x08)
	struct UImage* Image_357; // 0x4b8(0x08)
	struct UImage* Image_Main; // 0x4c0(0x08)
	struct UVerticalBox* InfoBoard; // 0x4c8(0x08)
	struct UTextBlock* Intro; // 0x4d0(0x08)
	struct UOverlay* LockBoard; // 0x4d8(0x08)
	struct UTextBlock* LockText; // 0x4e0(0x08)
	struct UCanvasPanel* MainBoard; // 0x4e8(0x08)
	struct UTextBlock* Num; // 0x4f0(0x08)
	struct UTextBlock* Title; // 0x4f8(0x08)
	struct UTexture2D* MainImage; // 0x500(0x08)
	struct FText MainTitle; // 0x508(0x18)
	struct FText Introduce; // 0x520(0x18)
	struct FText Number; // 0x538(0x18)
	bool IsValid; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	int32_t TeamNumLimit; // 0x554(0x04)
	struct FString MatchName; // 0x558(0x10)
	struct FString GameModeShortNames; // 0x568(0x10)
	bool IsNeedMatch; // 0x578(0x01)

	void HandleOnCanSearchStateChanged(enum class EPBSearchLimitReason InReason, int32_t InCurTeamNum); // Function Card_PlayMode.Card_PlayMode_C.HandleOnCanSearchStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_PlayMode.Card_PlayMode_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnDisable(); // Function Card_PlayMode.Card_PlayMode_C.OnDisable // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Card_PlayMode.Card_PlayMode_C.BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Card_PlayMode.Card_PlayMode_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnEnable(); // Function Card_PlayMode.Card_PlayMode_C.OnEnable // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_PlayMode.Card_PlayMode_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_PlayMode.Card_PlayMode_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function Card_PlayMode.Card_PlayMode_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyOnCanSearchStateChanged(enum class EPBSearchLimitReason reason, int32_t CurTeamNum); // Function Card_PlayMode.Card_PlayMode_C.NotifyOnCanSearchStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_PlayMode.Card_PlayMode_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_PlayMode.Card_PlayMode_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_PlayMode(int32_t EntryPoint); // Function Card_PlayMode.Card_PlayMode_C.ExecuteUbergraph_Card_PlayMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

