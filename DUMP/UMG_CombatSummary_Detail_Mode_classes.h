// WidgetBlueprintGeneratedClass UMG_CombatSummary_Detail_Mode.UMG_CombatSummary_Detail_Mode_C
// Size: 0x2b8 (Inherited: 0x268)
struct UUMG_CombatSummary_Detail_Mode_C : UPBUserWidget {
	struct UImage* HorizontalLine; // 0x268(0x08)
	struct UImage* Image; // 0x270(0x08)
	struct UImage* Image_55; // 0x278(0x08)
	struct UImage* Image_426; // 0x280(0x08)
	struct UUMG_Mode_MainDetail_C* UMG_Mode_MainDetail; // 0x288(0x08)
	struct UUMG_Mode_SecondaryDetail_Fight_C* UMG_Mode_SecondaryDetail_Fight; // 0x290(0x08)
	struct UUMG_Mode_SecondaryDetail_Match_C* UMG_Mode_SecondaryDetail_Match; // 0x298(0x08)
	struct UUMG_Mode_SecondaryDetail_Performance_C* UMG_Mode_SecondaryDetail_Performance; // 0x2a0(0x08)
	struct UUMG_Mode_SecondaryDetail_Special_C* UMG_Mode_SecondaryDetail_Special; // 0x2a8(0x08)
	struct UImage* VerticalLine; // 0x2b0(0x08)

	void ShowSecondaryDetails(struct FName ModeID); // Function UMG_CombatSummary_Detail_Mode.UMG_CombatSummary_Detail_Mode_C.ShowSecondaryDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowMainDetails(struct FName ModeID); // Function UMG_CombatSummary_Detail_Mode.UMG_CombatSummary_Detail_Mode_C.ShowMainDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowDetails(struct FName InModeID); // Function UMG_CombatSummary_Detail_Mode.UMG_CombatSummary_Detail_Mode_C.ShowDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

