// WidgetBlueprintGeneratedClass UMG_Indicator_Character.UMG_Indicator_Character_C
// Size: 0x61c (Inherited: 0x320)
struct UUMG_Indicator_Character_C : UPBIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* IconFlash; // 0x328(0x08)
	struct UImage* AllyMark; // 0x330(0x08)
	struct UCanvasPanel* Arrow_E; // 0x338(0x08)
	struct UImage* ConnectLine; // 0x340(0x08)
	struct UImage* ConnectLineForMissileHud; // 0x348(0x08)
	struct UCanvasPanel* Death_E; // 0x350(0x08)
	struct UCanvasPanel* Death_V; // 0x358(0x08)
	struct UCanvasPanel* EdgeBoard; // 0x360(0x08)
	struct UCanvasPanel* HitDown_E; // 0x368(0x08)
	struct UImage* HitDown_E_On; // 0x370(0x08)
	struct UCanvasPanel* HitDown_Out; // 0x378(0x08)
	struct UImage* HitDown_Out_Arrow; // 0x380(0x08)
	struct UImage* HitDown_Out_Icon; // 0x388(0x08)
	struct UCanvasPanel* HitDown_V; // 0x390(0x08)
	struct UHorizontalBox* HorizontalBox_Name; // 0x398(0x08)
	struct UImage* Image_Death1; // 0x3a0(0x08)
	struct UImage* Image_Death2; // 0x3a8(0x08)
	struct UImage* Image_Edge_Indicator_ArrowSolid; // 0x3b0(0x08)
	struct UPBInputTipsImage* Image_FormationKey; // 0x3b8(0x08)
	struct UImage* Image_Health; // 0x3c0(0x08)
	struct UImage* Image_Hitdown; // 0x3c8(0x08)
	struct UImage* Image_MedicLock; // 0x3d0(0x08)
	struct UImage* Image_TeamProgressBar; // 0x3d8(0x08)
	struct UCanvasPanel* LinesBoard; // 0x3e0(0x08)
	struct UImage* Locked; // 0x3e8(0x08)
	struct UImage* LockShakeImage; // 0x3f0(0x08)
	struct UCanvasPanel* Mark_Out; // 0x3f8(0x08)
	struct UImage* Mark_Out_Arrow; // 0x400(0x08)
	struct UImage* Mark_Out_Icon; // 0x408(0x08)
	struct UImage* Mark_Vision_Icon; // 0x410(0x08)
	struct UCanvasPanel* MarkInfo_V; // 0x418(0x08)
	struct UCanvasPanel* MissleLock; // 0x420(0x08)
	struct UCanvasPanel* OutOfScreenBoard; // 0x428(0x08)
	struct URetainerBox* Re_RoleInfoText; // 0x430(0x08)
	struct UPBInputTipsImage* RescueTip_Key; // 0x438(0x08)
	struct UTextBlock* RescueTip_Text; // 0x440(0x08)
	struct UOverlay* ReviveTip_Board; // 0x448(0x08)
	struct UOverlay* RoleIcon; // 0x450(0x08)
	struct UOverlay* RoleInfo; // 0x458(0x08)
	struct UCanvasPanel* RoleInfoTextBox; // 0x460(0x08)
	struct USizeBox* SizeBox_Health; // 0x468(0x08)
	struct UOverlay* T_Box; // 0x470(0x08)
	struct UOverlay* TeamTipBOx; // 0x478(0x08)
	struct UTextBlock* Text_FromationInfo; // 0x480(0x08)
	struct UTextBlock* Text_PlayerName; // 0x488(0x08)
	struct UTextBlock* TextBlock_Distance; // 0x490(0x08)
	struct UTextBlock* TextBlock_Metre; // 0x498(0x08)
	struct UCanvasPanel* VisionBoard; // 0x4a0(0x08)
	struct UWBP_InGame_IndicatorEmojiChild_C* WBP_InGame_IndicatorEmojiChild; // 0x4a8(0x08)
	struct APBCharacter* Character; // 0x4b0(0x08)
	bool bIsHitDown; // 0x4b8(0x01)
	bool bIsAlive; // 0x4b9(0x01)
	bool bIsDeath; // 0x4ba(0x01)
	bool bIsFriend; // 0x4bb(0x01)
	bool CouldBeRescue; // 0x4bc(0x01)
	bool IsInRescueRange; // 0x4bd(0x01)
	char pad_4BE[0x2]; // 0x4be(0x02)
	struct FGeometry Geometry; // 0x4c0(0x38)
	struct FVector2D UVPosiction; // 0x4f8(0x08)
	float UI_UV_Length; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct UMaterialInstanceDynamic* TeamProgressBarMID; // 0x508(0x08)
	struct FSlateBrush TeamProgressImageBrush; // 0x510(0x88)
	enum class IndicatorStateEnum TeamProgressState; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	float Progress; // 0x59c(0x04)
	struct UObject* TeamFunctionCom; // 0x5a0(0x08)
	struct FVector2D AngleImageSize; // 0x5a8(0x08)
	struct UMaterialInstanceDynamic* ConnectLineDynamic; // 0x5b0(0x08)
	bool MarkedByRecon; // 0x5b8(0x01)
	char pad_5B9[0x7]; // 0x5b9(0x07)
	struct UCanvasPanel* VisionBoard_1; // 0x5c0(0x08)
	struct FSlateColor Grey_Slate; // 0x5c8(0x28)
	struct FSlateColor White_Slate; // 0x5f0(0x28)
	bool bShouldDrawCharTrackerLineForMissileHud; // 0x618(0x01)
	bool bHaveTrackedByMissile; // 0x619(0x01)
	bool AreWeUsingMissile; // 0x61a(0x01)
	bool bCanPlayEmoji; // 0x61b(0x01)

	void RescueTarget_RemoveOld(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.RescueTarget_RemoveOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RescueTarget_TooFar(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.RescueTarget_TooFar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RescueTarget_InDistance(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.RescueTarget_InDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FriendVisilibity(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.FriendVisilibity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NoneVisilibity(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.NoneVisilibity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnemyVisilibity(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.EnemyVisilibity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayEmoji(enum class Enum_EmojiIconType EmojiType); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.PlayEmoji // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnableCanPlayEmoji(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.EnableCanPlayEmoji // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetCanPlayEmojiTimer(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.SetCanPlayEmojiTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTeamProgressProgressing(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.SetTeamProgressProgressing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetUpTeamProgressBar(float Alpha, struct FLinearColor Color); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.SetUpTeamProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IntTeamProgressMID(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.IntTeamProgressMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FSlateBrush Get_Image_TeamProgressBar_Brush_1(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.Get_Image_TeamProgressBar_Brush_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetTeamProgressBarProgress(float Progress, float SuccessTime); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.SetTeamProgressBarProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateTeamDisable(struct TArray<struct UImage*> InstArray); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UpdateTeamDisable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateHealthAndArmor(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UpdateHealthAndArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SwitchInfoPad(bool bShowMarkBox, bool bShowText); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.SwitchInfoPad // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdatePosition_Corner(struct UImage* Image, struct FVector2D TargetPosition, float DelteTime, float InterpSpeed); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UpdatePosition_Corner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UdpateRole(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UdpateRole // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdatePosition_Line(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UpdatePosition_Line // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdatePosition_Edge(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UpdatePosition_Edge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdatePosition_Main(float DeltaTime); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UpdatePosition_Main // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdatePlayerName(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UpdatePlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateDistance(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UpdateDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateStatus(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UpdateStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateDisable(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UpdateDisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdatePosition(float DeltaTime); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.UpdatePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateCamp(enum class EPBCamp NewCamp); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.K2_UpdateCamp // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateRelatedMarkable(struct UPBMarkableComponent* NewRelatedMarkable); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.K2_UpdateRelatedMarkable // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_UpdateIndicatorStatus(enum class EPBIndicatorStatus NewStatus); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.K2_UpdateIndicatorStatus // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Indicator_Character(int32_t EntryPoint); // Function UMG_Indicator_Character.UMG_Indicator_Character_C.ExecuteUbergraph_UMG_Indicator_Character // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

