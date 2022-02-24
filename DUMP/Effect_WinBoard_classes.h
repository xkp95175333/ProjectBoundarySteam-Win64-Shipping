// WidgetBlueprintGeneratedClass Effect_WinBoard.Effect_WinBoard_C
// Size: 0x370 (Inherited: 0x268)
struct UEffect_WinBoard_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Draw; // 0x270(0x08)
	struct UWidgetAnimation* Lose; // 0x278(0x08)
	struct UWidgetAnimation* Win; // 0x280(0x08)
	struct UWidgetAnimation* Summary; // 0x288(0x08)
	struct UImage* AllyBG; // 0x290(0x08)
	struct UImage* AllyLittice; // 0x298(0x08)
	struct UImage* AllyLogo; // 0x2a0(0x08)
	struct UTextBlock* AllyScore; // 0x2a8(0x08)
	struct UTextBlock* AllyTeamName; // 0x2b0(0x08)
	struct UImage* Draw_BG; // 0x2b8(0x08)
	struct UTextBlock* DrawText; // 0x2c0(0x08)
	struct UImage* EnemyBG; // 0x2c8(0x08)
	struct UImage* EnemyLattice; // 0x2d0(0x08)
	struct UImage* EnemyLogo; // 0x2d8(0x08)
	struct UTextBlock* EnemyScore; // 0x2e0(0x08)
	struct UTextBlock* EnemyTeamName; // 0x2e8(0x08)
	struct UImage* Image_112; // 0x2f0(0x08)
	struct UImage* Image_127; // 0x2f8(0x08)
	struct UTextBlock* LoseText; // 0x300(0x08)
	struct UTextBlock* WinText; // 0x308(0x08)
	enum class EPBGameResult IsSelfWin; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	int32_t AllyScore_Value; // 0x314(0x04)
	int32_t EnemyScore_Value; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FText AllyTeamName_Text; // 0x320(0x18)
	struct FText EnemyTeamName_Text; // 0x338(0x18)
	struct FText GameResult_Text; // 0x350(0x18)
	struct FName ResultSoundName; // 0x368(0x08)

	void WinOrLost(); // Function Effect_WinBoard.Effect_WinBoard_C.WinOrLost // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Effect_WinBoard.Effect_WinBoard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PlayResultSound(); // Function Effect_WinBoard.Effect_WinBoard_C.PlayResultSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Effect_WinBoard(int32_t EntryPoint); // Function Effect_WinBoard.Effect_WinBoard_C.ExecuteUbergraph_Effect_WinBoard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

