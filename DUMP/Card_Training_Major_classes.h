// WidgetBlueprintGeneratedClass Card_Training_Major.Card_Training_Major_C
// Size: 0x4d0 (Inherited: 0x460)
struct UCard_Training_Major_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* FocusOn; // 0x468(0x08)
	struct UImage* blackBG; // 0x470(0x08)
	struct UImage* BlackShadow; // 0x478(0x08)
	struct UOverlay* Finished; // 0x480(0x08)
	struct UImage* Image_356; // 0x488(0x08)
	struct UImage* Image_373; // 0x490(0x08)
	struct UTextBlock* Lock_Num; // 0x498(0x08)
	struct UOverlay* Locked; // 0x4a0(0x08)
	struct UCanvasPanel* MainBoard; // 0x4a8(0x08)
	struct UButton* MainBtn; // 0x4b0(0x08)
	struct UOverlay* Normal; // 0x4b8(0x08)
	struct UTextBlock* UnLock_Num; // 0x4c0(0x08)
	bool IsLock; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	int32_t LevelOrder; // 0x4cc(0x04)

	void SetNum(struct FText Num); // Function Card_Training_Major.Card_Training_Major_C.SetNum // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Card_Training_Major.Card_Training_Major_C.BndEvt__MainBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Card_Training_Major.Card_Training_Major_C.BndEvt__MainBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_Training_Major.Card_Training_Major_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Training_Major.Card_Training_Major_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Training_Major.Card_Training_Major_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Training_Major(int32_t EntryPoint); // Function Card_Training_Major.Card_Training_Major_C.ExecuteUbergraph_Card_Training_Major // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

