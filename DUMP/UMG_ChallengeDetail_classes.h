// WidgetBlueprintGeneratedClass UMG_ChallengeDetail.UMG_ChallengeDetail_C
// Size: 0x2e8 (Inherited: 0x2c0)
struct UUMG_ChallengeDetail_C : UPBChallengeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* FocusOn; // 0x2c8(0x08)
	struct UVerticalBox* ChallengeBox; // 0x2d0(0x08)
	struct UImage* ITEM_ICON; // 0x2d8(0x08)
	struct UTextBlock* PRIZE_NAME; // 0x2e0(0x08)

	void GetWeaponKillCount(struct FName Key, int64_t WeaponNum); // Function UMG_ChallengeDetail.UMG_ChallengeDetail_C.GetWeaponKillCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh(); // Function UMG_ChallengeDetail.UMG_ChallengeDetail_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdatePrizeInfo(struct FText PrizeName, struct UTexture2D* Texture); // Function UMG_ChallengeDetail.UMG_ChallengeDetail_C.UpdatePrizeInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_RefreshChallenge(); // Function UMG_ChallengeDetail.UMG_ChallengeDetail_C.K2_RefreshChallenge // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_ChallengeDetail.UMG_ChallengeDetail_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ChallengeDetail(int32_t EntryPoint); // Function UMG_ChallengeDetail.UMG_ChallengeDetail_C.ExecuteUbergraph_UMG_ChallengeDetail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

