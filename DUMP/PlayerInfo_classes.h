// WidgetBlueprintGeneratedClass PlayerInfo.PlayerInfo_C
// Size: 0x310 (Inherited: 0x268)
struct UPlayerInfo_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* ClassIcon; // 0x270(0x08)
	struct UImage* ClassIconBG; // 0x278(0x08)
	struct UImage* InactiveCoverMain; // 0x280(0x08)
	struct UImage* InactiveCoverSec; // 0x288(0x08)
	struct UImage* LevelIcon; // 0x290(0x08)
	struct UBorder* MainAlpha; // 0x298(0x08)
	struct UImage* MainLable; // 0x2a0(0x08)
	struct UTextBlock* PlayerLevel; // 0x2a8(0x08)
	struct UTextBlock* PlayerName; // 0x2b0(0x08)
	struct UImage* ReadyColor; // 0x2b8(0x08)
	struct UImage* ThrobbeClassIcon; // 0x2c0(0x08)
	struct APBPlayerState* PlayerState; // 0x2c8(0x08)
	struct FLinearColor DarkBlue; // 0x2d0(0x10)
	struct FLinearColor LightBlue; // 0x2e0(0x10)
	struct FLinearColor DarkRed; // 0x2f0(0x10)
	struct FLinearColor LightRed; // 0x300(0x10)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function PlayerInfo.PlayerInfo_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Init(struct APBPlayerState* InitWithPlayerState); // Function PlayerInfo.PlayerInfo_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetValues(bool PlayerExsist, bool PlayerIsMe, bool ChangeTeamColor, bool blueteam, bool ChangePlayerName, struct FText PlayerName, bool ChangeClass, struct TSoftObjectPtr<struct UTexture2D> ClassIcon, bool ChangeLevel, struct UTexture2D* LevelIcon, struct FText PlayerLevel, bool ChangeReady, bool Ready); // Function PlayerInfo.PlayerInfo_C.SetValues // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function PlayerInfo.PlayerInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PlayerInfo(int32_t EntryPoint); // Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo // (Final|UbergraphFunction) // @ game+0x1556ec0
};

