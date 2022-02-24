// WidgetBlueprintGeneratedClass Card_Player.Card_Player_C
// Size: 0x469 (Inherited: 0x3d8)
struct UCard_Player_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UOverlay* AvatarBoard; // 0x3e0(0x08)
	struct UImage* blackBG; // 0x3e8(0x08)
	struct UImage* BlackShadow; // 0x3f0(0x08)
	struct UImage* Color; // 0x3f8(0x08)
	struct UProgressBar* EXP_Progress; // 0x400(0x08)
	struct UImage* ExpProgressBar; // 0x408(0x08)
	struct UImage* Image_Avatar; // 0x410(0x08)
	struct UHorizontalBox* InfoBoard; // 0x418(0x08)
	struct UOverlay* Level; // 0x420(0x08)
	struct UImage* LevelIcon; // 0x428(0x08)
	struct USizeBox* LevelIcon_2; // 0x430(0x08)
	struct UOverlay* LoadingBoard; // 0x438(0x08)
	struct UButton* MainButton; // 0x440(0x08)
	struct UScrollText_C* ScrollText; // 0x448(0x08)
	struct UTextBlock* Text_PlayerID; // 0x450(0x08)
	struct UTextBlock* TextBlock_level; // 0x458(0x08)
	struct UUMG_UnlockPoints_C* UMG_UnlockPoints; // 0x460(0x08)
	bool IsGetDataFromLogicServer; // 0x468(0x01)

	void AfterGetAvatar(struct UTexture2D* AvatarImage); // Function Card_Player.Card_Player_C.AfterGetAvatar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AfterQueryMyInfo(struct FPBOnlineUserInfo OnlineUserInfo); // Function Card_Player.Card_Player_C.AfterQueryMyInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(struct FPlayerInfo PlayerInfo); // Function Card_Player.Card_Player_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh Info(); // Function Card_Player.Card_Player_C.Refresh Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_Player.Card_Player_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function Card_Player.Card_Player_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Card_Player.Card_Player_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Card_Player.Card_Player_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnExpChange(int32_t Exp); // Function Card_Player.Card_Player_C.OnExpChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnUnlockPointChange(int32_t UnlockPoint); // Function Card_Player.Card_Player_C.OnUnlockPointChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Player(int32_t EntryPoint); // Function Card_Player.Card_Player_C.ExecuteUbergraph_Card_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

