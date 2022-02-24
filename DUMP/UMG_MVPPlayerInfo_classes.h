// WidgetBlueprintGeneratedClass UMG_MVPPlayerInfo.UMG_MVPPlayerInfo_C
// Size: 0x2c9 (Inherited: 0x268)
struct UUMG_MVPPlayerInfo_C : UPBUserWidget {
	struct UButton* btn; // 0x268(0x08)
	struct UProgressBar* EXP_Progress; // 0x270(0x08)
	struct UImage* Image_3; // 0x278(0x08)
	struct UImage* Image_110; // 0x280(0x08)
	struct UTextBlock* KillNumber; // 0x288(0x08)
	struct UImage* MemberBGImage; // 0x290(0x08)
	struct UTextBlock* MVPTitle; // 0x298(0x08)
	struct UTextBlock* Num; // 0x2a0(0x08)
	struct UTextBlock* PlayerName; // 0x2a8(0x08)
	struct FText InPlayerName; // 0x2b0(0x18)
	bool IsMVP; // 0x2c8(0x01)

	void SetPlayerInfo(struct FPlayerMatchResultInfo InPlayerMatchInfo, bool IsMVP); // Function UMG_MVPPlayerInfo.UMG_MVPPlayerInfo_C.SetPlayerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

