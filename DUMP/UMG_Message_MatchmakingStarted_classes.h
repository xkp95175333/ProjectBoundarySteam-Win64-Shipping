// WidgetBlueprintGeneratedClass UMG_Message_MatchmakingStarted.UMG_Message_MatchmakingStarted_C
// Size: 0x2b8 (Inherited: 0x27c)
struct UUMG_Message_MatchmakingStarted_C : UUMG_Message_C {
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FocusOn; // 0x288(0x08)
	struct UWidgetAnimation* Flash; // 0x290(0x08)
	struct UBorder* Border; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image_235; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_76; // 0x2b0(0x08)

	struct FEventReply OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_Message_MatchmakingStarted.UMG_Message_MatchmakingStarted_C.OnMouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_Message_MatchmakingStarted.UMG_Message_MatchmakingStarted_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(); // Function UMG_Message_MatchmakingStarted.UMG_Message_MatchmakingStarted_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_2(); // Function UMG_Message_MatchmakingStarted.UMG_Message_MatchmakingStarted_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_Message_MatchmakingStarted.UMG_Message_MatchmakingStarted_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Message_MatchmakingStarted(int32_t EntryPoint); // Function UMG_Message_MatchmakingStarted.UMG_Message_MatchmakingStarted_C.ExecuteUbergraph_UMG_Message_MatchmakingStarted // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

