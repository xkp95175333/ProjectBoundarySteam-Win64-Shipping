// WidgetBlueprintGeneratedClass Card_Setting.Card_Setting_C
// Size: 0x410 (Inherited: 0x3d8)
struct UCard_Setting_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x3e0(0x08)
	struct UButton* Button_Setting; // 0x3e8(0x08)
	struct UImage* Image_67; // 0x3f0(0x08)
	struct UImage* Image_357; // 0x3f8(0x08)
	struct FMulticastInlineDelegate OnShowSettingMenu; // 0x400(0x10)

	void BndEvt__Card_Setting_Button_Setting_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Card_Setting.Card_Setting_C.BndEvt__Card_Setting_Button_Setting_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Setting_Button_Setting_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Card_Setting.Card_Setting_C.BndEvt__Card_Setting_Button_Setting_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Setting(int32_t EntryPoint); // Function Card_Setting.Card_Setting_C.ExecuteUbergraph_Card_Setting // (Final|UbergraphFunction) // @ game+0x1556ec0
	void OnShowSettingMenu__DelegateSignature(); // Function Card_Setting.Card_Setting_C.OnShowSettingMenu__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

