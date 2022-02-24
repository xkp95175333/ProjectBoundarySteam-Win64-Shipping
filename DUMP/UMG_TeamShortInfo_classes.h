// WidgetBlueprintGeneratedClass UMG_TeamShortInfo.UMG_TeamShortInfo_C
// Size: 0x3b0 (Inherited: 0x2a0)
struct UUMG_TeamShortInfo_C : UPBActionTeamWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* GI_Ally; // 0x2a8(0x08)
	struct UWidgetAnimation* GI_Foe; // 0x2b0(0x08)
	struct UWidgetAnimation* Foe; // 0x2b8(0x08)
	struct UTextBlock* CurrentMemberNumber; // 0x2c0(0x08)
	struct UImage* FactionIcon; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image_3; // 0x2d8(0x08)
	struct UImage* Image_4; // 0x2e0(0x08)
	struct UTextBlock* TeamFlag; // 0x2e8(0x08)
	struct UTextBlock* TeamName2; // 0x2f0(0x08)
	struct UTextBlock* TotalMemberNumber; // 0x2f8(0x08)
	struct FUI_ColorPalettes UI_ColorPalettes; // 0x300(0xa0)
	bool IsFoe; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UMaterialInterface* FactionIconMat; // 0x3a8(0x08)

	void K2_SetActionTeamInfo(); // Function UMG_TeamShortInfo.UMG_TeamShortInfo_C.K2_SetActionTeamInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_TeamShortInfo.UMG_TeamShortInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void GI_Lit(bool Lit); // Function UMG_TeamShortInfo.UMG_TeamShortInfo_C.GI_Lit // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_TeamShortInfo(int32_t EntryPoint); // Function UMG_TeamShortInfo.UMG_TeamShortInfo_C.ExecuteUbergraph_UMG_TeamShortInfo // (Final|UbergraphFunction) // @ game+0x1556ec0
};

