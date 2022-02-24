// WidgetBlueprintGeneratedClass GameScoreBoard_V2.GameScoreBoard_V2_C
// Size: 0x608 (Inherited: 0x3d8)
struct UGameScoreBoard_V2_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct US_PlayerState_V2_C* S_PlayerState_V2_A1; // 0x3e0(0x08)
	struct US_PlayerState_V2_C* S_PlayerState_V2_A2; // 0x3e8(0x08)
	struct US_PlayerState_V2_C* S_PlayerState_V2_A3; // 0x3f0(0x08)
	struct US_PlayerState_V2_C* S_PlayerState_V2_A4; // 0x3f8(0x08)
	struct US_PlayerState_V2_C* S_PlayerState_V2_A5; // 0x400(0x08)
	struct US_PlayerState_V2_C* S_PlayerState_V2_B1; // 0x408(0x08)
	struct US_PlayerState_V2_C* S_PlayerState_V2_B2; // 0x410(0x08)
	struct US_PlayerState_V2_C* S_PlayerState_V2_B3; // 0x418(0x08)
	struct US_PlayerState_V2_C* S_PlayerState_V2_B4; // 0x420(0x08)
	struct US_PlayerState_V2_C* S_PlayerState_V2_B5; // 0x428(0x08)
	struct UVerticalBox* TeamAList; // 0x430(0x08)
	struct UTextBlock* TeamAScore; // 0x438(0x08)
	struct UVerticalBox* TeamBList; // 0x440(0x08)
	struct UTextBlock* TeamBScore; // 0x448(0x08)
	struct UTextBlock* TeamNameB; // 0x450(0x08)
	struct UTextBlock* TeamNameT; // 0x458(0x08)
	struct FSlateBrush Nomal; // 0x460(0x88)
	struct FSlateBrush Highlight; // 0x4e8(0x88)
	struct FSlateBrush Pressed; // 0x570(0x88)
	struct FMulticastInlineDelegate NoDefaultFocus; // 0x5f8(0x10)

	void Init(); // Function GameScoreBoard_V2.GameScoreBoard_V2_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DefaultVariables(); // Function GameScoreBoard_V2.GameScoreBoard_V2_C.DefaultVariables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function GameScoreBoard_V2.GameScoreBoard_V2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GameScoreBoard_V2(int32_t EntryPoint); // Function GameScoreBoard_V2.GameScoreBoard_V2_C.ExecuteUbergraph_GameScoreBoard_V2 // (Final|UbergraphFunction) // @ game+0x1556ec0
	void NoDefaultFocus__DelegateSignature(); // Function GameScoreBoard_V2.GameScoreBoard_V2_C.NoDefaultFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

