// WidgetBlueprintGeneratedClass InGameOption_MissionCard.InGameOption_MissionCard_C
// Size: 0x460 (Inherited: 0x3c8)
struct UInGameOption_MissionCard_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UOverlay* COMPELETED; // 0x3d0(0x08)
	struct UOverlay* IconAndProgress; // 0x3d8(0x08)
	struct UImage* Image_3; // 0x3e0(0x08)
	struct UImage* Image_4; // 0x3e8(0x08)
	struct UImage* Image_87; // 0x3f0(0x08)
	struct UImage* Image_89; // 0x3f8(0x08)
	struct UImage* Image_341; // 0x400(0x08)
	struct UImage* Image_342; // 0x408(0x08)
	struct UImage* Image_486; // 0x410(0x08)
	struct UOverlay* Locked; // 0x418(0x08)
	struct UHorizontalBox* MainBoard; // 0x420(0x08)
	struct UTextBlock* Progress; // 0x428(0x08)
	struct UTextBlock* Reward; // 0x430(0x08)
	struct UTextBlock* Text_MissionName; // 0x438(0x08)
	struct UTextBlock* TextBlock_2; // 0x440(0x08)
	struct UTextBlock* TextBlock_3; // 0x448(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Icon; // 0x450(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Text; // 0x458(0x08)

	void GetPercent(struct TMap<struct FName, int64_t> CurConditions, struct TMap<struct FName, int64_t> CfgConditions, int32_t Percent); // Function InGameOption_MissionCard.InGameOption_MissionCard_C.GetPercent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetCountText(struct TMap<struct FName, int64_t> CurConditions, struct TMap<struct FName, int64_t> CfgConditions, struct FText CountText); // Function InGameOption_MissionCard.InGameOption_MissionCard_C.GetCountText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshInfo(int32_t InSlotId); // Function InGameOption_MissionCard.InGameOption_MissionCard_C.RefreshInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function InGameOption_MissionCard.InGameOption_MissionCard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_InGameOption_MissionCard(int32_t EntryPoint); // Function InGameOption_MissionCard.InGameOption_MissionCard_C.ExecuteUbergraph_InGameOption_MissionCard // (Final|UbergraphFunction) // @ game+0x1556ec0
};

