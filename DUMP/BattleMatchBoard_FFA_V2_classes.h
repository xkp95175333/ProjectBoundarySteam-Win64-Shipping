// WidgetBlueprintGeneratedClass BattleMatchBoard_FFA_V2.BattleMatchBoard_FFA_V2_C
// Size: 0x438 (Inherited: 0x3c8)
struct UBattleMatchBoard_FFA_V2_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UImage* Image_1; // 0x3d0(0x08)
	struct UImage* Image_107; // 0x3d8(0x08)
	struct UImage* Image_TeamLogo; // 0x3e0(0x08)
	struct UTextBlock* MyKills; // 0x3e8(0x08)
	struct USafeZone* SafeZone_96; // 0x3f0(0x08)
	struct UTeamFFA_V2_C* TeamFFA_V2; // 0x3f8(0x08)
	struct UTextBlock* TeamNameT; // 0x400(0x08)
	struct UVerticalBox* VerticalBox_2; // 0x408(0x08)
	struct APBPlayerState* FirstPlayer; // 0x410(0x08)
	bool TickRefresh; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct FMulticastInlineDelegate NoDefaultFocus; // 0x420(0x10)
	struct UImage* Image_TeamLogo_1; // 0x430(0x08)

	void SetDefaultFocus(); // Function BattleMatchBoard_FFA_V2.BattleMatchBoard_FFA_V2_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshInfo(); // Function BattleMatchBoard_FFA_V2.BattleMatchBoard_FFA_V2_C.RefreshInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function BattleMatchBoard_FFA_V2.BattleMatchBoard_FFA_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BattleMatchBoard_FFA_V2.BattleMatchBoard_FFA_V2_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function BattleMatchBoard_FFA_V2.BattleMatchBoard_FFA_V2_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function BattleMatchBoard_FFA_V2.BattleMatchBoard_FFA_V2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_BattleMatchBoard_FFA_V2(int32_t EntryPoint); // Function BattleMatchBoard_FFA_V2.BattleMatchBoard_FFA_V2_C.ExecuteUbergraph_BattleMatchBoard_FFA_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void NoDefaultFocus__DelegateSignature(); // Function BattleMatchBoard_FFA_V2.BattleMatchBoard_FFA_V2_C.NoDefaultFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

