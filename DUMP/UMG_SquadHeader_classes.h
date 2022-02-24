// WidgetBlueprintGeneratedClass UMG_SquadHeader.UMG_SquadHeader_C
// Size: 0x2d8 (Inherited: 0x2a0)
struct UUMG_SquadHeader_C : UPBSquadWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UTextBlock* CurrentMemberNumber; // 0x2a8(0x08)
	struct UImage* Image_2; // 0x2b0(0x08)
	struct UImage* Image_110; // 0x2b8(0x08)
	struct UTextBlock* SquadName1; // 0x2c0(0x08)
	struct UTextBlock* SquadName2; // 0x2c8(0x08)
	struct UTextBlock* TotalMemberNumber; // 0x2d0(0x08)

	void UpdateCurrentCoPlayerNum(struct FText InText); // Function UMG_SquadHeader.UMG_SquadHeader_C.UpdateCurrentCoPlayerNum // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_SquadHeader.UMG_SquadHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_SquadHeader(int32_t EntryPoint); // Function UMG_SquadHeader.UMG_SquadHeader_C.ExecuteUbergraph_UMG_SquadHeader // (Final|UbergraphFunction) // @ game+0x1556ec0
};

