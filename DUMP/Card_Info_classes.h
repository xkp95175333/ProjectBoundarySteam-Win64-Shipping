// WidgetBlueprintGeneratedClass Card_Info.Card_Info_C
// Size: 0x48c (Inherited: 0x3d8)
struct UCard_Info_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x3e0(0x08)
	struct UButton* Button_2; // 0x3e8(0x08)
	struct UButton* Button_3; // 0x3f0(0x08)
	struct UButton* Button_4; // 0x3f8(0x08)
	struct UButton* Button_5; // 0x400(0x08)
	struct UImage* Image_357; // 0x408(0x08)
	struct UVerticalBox* InfoBoard_2; // 0x410(0x08)
	struct UTextBlock* Intro; // 0x418(0x08)
	struct UTextBlock* Notify; // 0x420(0x08)
	struct UPBWidgetSwitcher* PBWidgetSwitcher_1; // 0x428(0x08)
	struct UTextBlock* Title; // 0x430(0x08)
	struct UTexture2D* MainImage; // 0x438(0x08)
	struct FText MainTitle; // 0x440(0x18)
	struct FText Introduce; // 0x458(0x18)
	struct FText MainText; // 0x470(0x18)
	int32_t PageIndex; // 0x488(0x04)

	void UpdateText_FromVar(struct FText MainText); // Function Card_Info.Card_Info_C.UpdateText_FromVar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateText_DirectInput(struct FText InText); // Function Card_Info.Card_Info_C.UpdateText_DirectInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_Info.Card_Info_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Info_Button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature(); // Function Card_Info.Card_Info_C.BndEvt__Card_Info_Button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Info_Button_2_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(); // Function Card_Info.Card_Info_C.BndEvt__Card_Info_Button_2_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Info_Button_3_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function Card_Info.Card_Info_C.BndEvt__Card_Info_Button_3_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Info_Button_4_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function Card_Info.Card_Info_C.BndEvt__Card_Info_Button_4_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Info_Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function Card_Info.Card_Info_C.BndEvt__Card_Info_Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Info_Button_2_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function Card_Info.Card_Info_C.BndEvt__Card_Info_Button_2_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Info_Button_3_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function Card_Info.Card_Info_C.BndEvt__Card_Info_Button_3_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Card_Info_Button_4_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function Card_Info.Card_Info_C.BndEvt__Card_Info_Button_4_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_Info.Card_Info_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SteamCheckID(); // Function Card_Info.Card_Info_C.SteamCheckID // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Info(int32_t EntryPoint); // Function Card_Info.Card_Info_C.ExecuteUbergraph_Card_Info // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

