// WidgetBlueprintGeneratedClass UMG_SinglePlayerSettle.UMG_SinglePlayerSettle_C
// Size: 0x290 (Inherited: 0x268)
struct UUMG_SinglePlayerSettle_C : UPBUserWidget {
	struct UTextBlock* Assist; // 0x268(0x08)
	struct UTextBlock* Death; // 0x270(0x08)
	struct UTextBlock* Kill; // 0x278(0x08)
	struct UTextBlock* PlayerName; // 0x280(0x08)
	struct UTextBlock* Score; // 0x288(0x08)

	void SetPlayerInfo(struct FString InPlayerName, int32_t InScore, int32_t InKill, int32_t InDeath, int32_t InAssist); // Function UMG_SinglePlayerSettle.UMG_SinglePlayerSettle_C.SetPlayerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

