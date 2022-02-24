// WidgetBlueprintGeneratedClass UMG_MessageTips.UMG_MessageTips_C
// Size: 0x4c1 (Inherited: 0x460)
struct UUMG_MessageTips_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x468(0x08)
	struct UImage* blackBG; // 0x470(0x08)
	struct UImage* BlackShadow; // 0x478(0x08)
	struct UCard_Friend_SelectedDetail_C* Card_Friend_SelectedDetail; // 0x480(0x08)
	struct UImage* ColorBG; // 0x488(0x08)
	struct UImage* Image_Avatar; // 0x490(0x08)
	struct UPBButton* MainButton; // 0x498(0x08)
	struct UTextBlock* PlayerName; // 0x4a0(0x08)
	struct UTextBlock* TextBlock_Message; // 0x4a8(0x08)
	struct FMulticastInlineDelegate Timeout; // 0x4b0(0x10)
	enum class ETeamMessageType MessageType; // 0x4c0(0x01)

	void OnTimeOut(); // Function UMG_MessageTips.UMG_MessageTips_C.OnTimeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Info(struct FText Name, float ExpireTime, enum class ETeamMessageType MessageType); // Function UMG_MessageTips.UMG_MessageTips_C.Set Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function UMG_MessageTips.UMG_MessageTips_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function UMG_MessageTips.UMG_MessageTips_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_MessageTips(int32_t EntryPoint); // Function UMG_MessageTips.UMG_MessageTips_C.ExecuteUbergraph_UMG_MessageTips // (Final|UbergraphFunction) // @ game+0x1556ec0
	void TimeOut__DelegateSignature(struct UUMG_MessageTips_C* TimeOutWidget); // Function UMG_MessageTips.UMG_MessageTips_C.TimeOut__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

