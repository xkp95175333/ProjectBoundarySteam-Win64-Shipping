// WidgetBlueprintGeneratedClass UMG_Card_Friend_PlayerCard_Large.UMG_Card_Friend_PlayerCard_Large_C
// Size: 0x5e0 (Inherited: 0x460)
struct UUMG_Card_Friend_PlayerCard_Large_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UOverlay* BackGroundBoard; // 0x468(0x08)
	struct UImage* blackBG; // 0x470(0x08)
	struct UImage* BlackShadow; // 0x478(0x08)
	struct UImage* Color; // 0x480(0x08)
	struct UImage* frame; // 0x488(0x08)
	struct UImage* GoldenFinger; // 0x490(0x08)
	struct UImage* GoldenFinger_2; // 0x498(0x08)
	struct UImage* Image_120; // 0x4a0(0x08)
	struct UImage* Image_151; // 0x4a8(0x08)
	struct UHorizontalBox* InfoBoard; // 0x4b0(0x08)
	struct UVerticalBox* InfoText; // 0x4b8(0x08)
	struct UOverlay* InvitableBoard; // 0x4c0(0x08)
	struct UOverlay* Level; // 0x4c8(0x08)
	struct UImage* LevelIcon; // 0x4d0(0x08)
	struct UTextBlock* PlayerName; // 0x4d8(0x08)
	struct UScrollText_C* ScrollText; // 0x4e0(0x08)
	struct UImage* Shading; // 0x4e8(0x08)
	struct UTextBlock* TextBlock_level; // 0x4f0(0x08)
	enum class EPBPlayerStatus CardStatus; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	struct UMaterialInstanceDynamic* DynamicBG; // 0x500(0x08)
	struct FSlateColor OfflineColor; // 0x508(0x28)
	struct FSlateColor OnlineColor; // 0x530(0x28)
	struct TMap<int32_t, struct FSlateColor> PlayerColor; // 0x558(0x50)
	struct FText RecentlyPlayedTime; // 0x5a8(0x18)
	bool IsRecentlyPlayer; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	struct FText LastPlayTime; // 0x5c8(0x18)

	void Set Info(struct FPBSinglePlayerInfo InPlayerInfo, enum class EPBPlayerStatus InPlayerStatus); // Function UMG_Card_Friend_PlayerCard_Large.UMG_Card_Friend_PlayerCard_Large_C.Set Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetStatus(enum class EPBPlayerStatus InPlayerStatus); // Function UMG_Card_Friend_PlayerCard_Large.UMG_Card_Friend_PlayerCard_Large_C.Designer_SetStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetStateText(struct FText StateText); // Function UMG_Card_Friend_PlayerCard_Large.UMG_Card_Friend_PlayerCard_Large_C.Designer_SetStateText // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetName(struct FText InText); // Function UMG_Card_Friend_PlayerCard_Large.UMG_Card_Friend_PlayerCard_Large_C.Designer_SetName // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetLevel(int32_t Level); // Function UMG_Card_Friend_PlayerCard_Large.UMG_Card_Friend_PlayerCard_Large_C.Designer_SetLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Card_Friend_PlayerCard_Large(int32_t EntryPoint); // Function UMG_Card_Friend_PlayerCard_Large.UMG_Card_Friend_PlayerCard_Large_C.ExecuteUbergraph_UMG_Card_Friend_PlayerCard_Large // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

