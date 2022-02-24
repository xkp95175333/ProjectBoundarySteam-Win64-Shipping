// WidgetBlueprintGeneratedClass WBP_MainMenu_MediaPlayer.WBP_MainMenu_MediaPlayer_C
// Size: 0x418 (Inherited: 0x3d8)
struct UWBP_MainMenu_MediaPlayer_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UButton* Button_Leave; // 0x3e0(0x08)
	struct UButton* Button_PlayOrPause; // 0x3e8(0x08)
	struct UImage* Image_392; // 0x3f0(0x08)
	struct UImage* Image_847; // 0x3f8(0x08)
	struct UImage* Image_MediaPlayer; // 0x400(0x08)
	struct UMediaPlayer* MP_MediaPlayer; // 0x408(0x08)
	struct UFileMediaSource* FMS_FileMediaSource; // 0x410(0x08)

	void SetPlayButtonIcon(struct UMaterialInterface* Material); // Function WBP_MainMenu_MediaPlayer.WBP_MainMenu_MediaPlayer_C.SetPlayButtonIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_ActiveMediaPlayer(struct UMediaSource* MediaSource); // Function WBP_MainMenu_MediaPlayer.WBP_MainMenu_MediaPlayer_C.Event_ActiveMediaPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_CallBack_OnMediaOpened(struct FString OpenedUrl); // Function WBP_MainMenu_MediaPlayer.WBP_MainMenu_MediaPlayer_C.Event_CallBack_OnMediaOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_PlayOrPause_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_MainMenu_MediaPlayer.WBP_MainMenu_MediaPlayer_C.BndEvt__Button_PlayOrPause_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Event_CallBack_OnEndReached(); // Function WBP_MainMenu_MediaPlayer.WBP_MainMenu_MediaPlayer_C.Event_CallBack_OnEndReached // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_Leave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_MainMenu_MediaPlayer.WBP_MainMenu_MediaPlayer_C.BndEvt__Button_Leave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function WBP_MainMenu_MediaPlayer.WBP_MainMenu_MediaPlayer_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_WBP_MainMenu_MediaPlayer(int32_t EntryPoint); // Function WBP_MainMenu_MediaPlayer.WBP_MainMenu_MediaPlayer_C.ExecuteUbergraph_WBP_MainMenu_MediaPlayer // (Final|UbergraphFunction) // @ game+0x1556ec0
};

