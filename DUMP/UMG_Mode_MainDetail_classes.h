// WidgetBlueprintGeneratedClass UMG_Mode_MainDetail.UMG_Mode_MainDetail_C
// Size: 0x290 (Inherited: 0x268)
struct UUMG_Mode_MainDetail_C : UPBUserWidget {
	struct UImage* MapImage; // 0x268(0x08)
	struct UTextBlock* MapName; // 0x270(0x08)
	struct UUMG_Mode_LineCharts_Panel_C* UMG_Mode_LineCharts_Panel_KDA; // 0x278(0x08)
	struct UUMG_Mode_LineCharts_Panel_C* UMG_Mode_LineCharts_Panel_SPM; // 0x280(0x08)
	struct UTextBlock* WinRatio; // 0x288(0x08)

	void ShowSPMLineCharts(struct FName ModeID); // Function UMG_Mode_MainDetail.UMG_Mode_MainDetail_C.ShowSPMLineCharts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowKDALineCharts(struct FName ModeID); // Function UMG_Mode_MainDetail.UMG_Mode_MainDetail_C.ShowKDALineCharts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowHomeCourtAdvantageInfo(struct FName ModeID); // Function UMG_Mode_MainDetail.UMG_Mode_MainDetail_C.ShowHomeCourtAdvantageInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowDetails(struct FName InModeID); // Function UMG_Mode_MainDetail.UMG_Mode_MainDetail_C.ShowDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

