// WidgetBlueprintGeneratedClass S_PlayerState_V2.S_PlayerState_V2_C
// Size: 0x2f8 (Inherited: 0x268)
struct US_PlayerState_V2_C : UPBUserWidget {
	struct UTextBlock* Death; // 0x268(0x08)
	struct UImage* isDeath; // 0x270(0x08)
	struct UTextBlock* Kill; // 0x278(0x08)
	struct UTextBlock* Score; // 0x280(0x08)
	struct UTextBlock* Text_Assist; // 0x288(0x08)
	struct UTextBlock* TextBlock_name; // 0x290(0x08)
	int32_t Index; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct APBPlayerState* CurrentPlayerState; // 0x2a0(0x08)
	struct APBCharacter* CurrentPlayer; // 0x2a8(0x08)
	bool isDying; // 0x2b0(0x01)
	bool IsFocus; // 0x2b1(0x01)
	char pad_2B2[0x6]; // 0x2b2(0x06)
	struct FString PlayerName; // 0x2b8(0x10)
	float PlayerScore; // 0x2c8(0x04)
	int32_t PlayerKills; // 0x2cc(0x04)
	int32_t PlayerDeath; // 0x2d0(0x04)
	bool IsSelf; // 0x2d4(0x01)
	bool IsMyTeam; // 0x2d5(0x01)
	char pad_2D6[0x2]; // 0x2d6(0x02)
	struct FLinearColor AllyColor; // 0x2d8(0x10)
	struct FLinearColor EnemyColor; // 0x2e8(0x10)

	void SetInfo(struct FString InPlayerName, int32_t InScore, int32_t InKill, int32_t InDeath, int32_t InAssist, bool bAlly); // Function S_PlayerState_V2.S_PlayerState_V2_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EmptyInfo(); // Function S_PlayerState_V2.S_PlayerState_V2_C.EmptyInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshInfo(); // Function S_PlayerState_V2.S_PlayerState_V2_C.RefreshInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetEmpty(); // Function S_PlayerState_V2.S_PlayerState_V2_C.SetEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DieLogo(); // Function S_PlayerState_V2.S_PlayerState_V2_C.DieLogo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FText Get_Text_Assist_Text_1(); // Function S_PlayerState_V2.S_PlayerState_V2_C.Get_Text_Assist_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void isMyState(bool isMyState); // Function S_PlayerState_V2.S_PlayerState_V2_C.isMyState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FText GetKills(); // Function S_PlayerState_V2.S_PlayerState_V2_C.GetKills // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetColorAndOpacity_1(); // Function S_PlayerState_V2.S_PlayerState_V2_C.GetColorAndOpacity_1 // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	struct FText Get_Score(); // Function S_PlayerState_V2.S_PlayerState_V2_C.Get_Score // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	struct FText Get_Death(); // Function S_PlayerState_V2.S_PlayerState_V2_C.Get_Death // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	struct FText Get_PlayerName(); // Function S_PlayerState_V2.S_PlayerState_V2_C.Get_PlayerName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
};

