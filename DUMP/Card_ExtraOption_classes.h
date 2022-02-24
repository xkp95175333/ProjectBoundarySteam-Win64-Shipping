// WidgetBlueprintGeneratedClass Card_ExtraOption.Card_ExtraOption_C
// Size: 0x43c (Inherited: 0x3d8)
struct UCard_ExtraOption_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* IsSelected; // 0x3e0(0x08)
	struct UWidgetAnimation* IsFocus; // 0x3e8(0x08)
	struct UImage* blackBG; // 0x3f0(0x08)
	struct UImage* BlackShadow; // 0x3f8(0x08)
	struct UImage* divideLine; // 0x400(0x08)
	struct UImage* FocusMask; // 0x408(0x08)
	struct UImage* Image_469; // 0x410(0x08)
	struct UButton* MainButton; // 0x418(0x08)
	struct UScrollBox* Expandable; // 0x420(0x08)
	float ExpandablePadding; // 0x428(0x04)
	float ExpandableOriginalPadding; // 0x42c(0x04)
	bool bIsSelected_Sub; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float ExpandableChildPadding; // 0x434(0x04)
	float ExpandableChildrenDesiredSize; // 0x438(0x04)

	void GetChildrenDesiredSize(); // Function Card_ExtraOption.Card_ExtraOption_C.GetChildrenDesiredSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddExtraOptions(struct UScrollBox* ScrollBox); // Function Card_ExtraOption.Card_ExtraOption_C.AddExtraOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function Card_ExtraOption.Card_ExtraOption_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function Card_ExtraOption.Card_ExtraOption_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Card_ExtraOption.Card_ExtraOption_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Card_ExtraOption.Card_ExtraOption_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_ExtraOption.Card_ExtraOption_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Card_ExtraOption.Card_ExtraOption_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_ExtraOption(int32_t EntryPoint); // Function Card_ExtraOption.Card_ExtraOption_C.ExecuteUbergraph_Card_ExtraOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

