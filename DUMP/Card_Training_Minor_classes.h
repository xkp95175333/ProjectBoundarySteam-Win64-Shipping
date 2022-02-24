// WidgetBlueprintGeneratedClass Card_Training_Minor.Card_Training_Minor_C
// Size: 0x4c4 (Inherited: 0x460)
struct UCard_Training_Minor_C : UPB_BaseCard_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* FocusOn; // 0x468(0x08)
	struct UImage* blackBG; // 0x470(0x08)
	struct UImage* BlackShadow; // 0x478(0x08)
	struct UOverlay* Finished; // 0x480(0x08)
	struct UImage* Image_356; // 0x488(0x08)
	struct UTextBlock* Lock_Num; // 0x490(0x08)
	struct UOverlay* Locked; // 0x498(0x08)
	struct UButton* MainBtn; // 0x4a0(0x08)
	struct UOverlay* Normal; // 0x4a8(0x08)
	struct UTextBlock* UnLock_Num; // 0x4b0(0x08)
	struct UFileMediaSource* VideoOrder; // 0x4b8(0x08)
	int32_t Order; // 0x4c0(0x04)

	void SetIsFinish(); // Function Card_Training_Minor.Card_Training_Minor_C.SetIsFinish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetNum(int32_t Order, bool IsRoleVideo); // Function Card_Training_Minor.Card_Training_Minor_C.SetNum // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EventPlayVideo(struct UFileMediaSource* VideOrder); // Function Card_Training_Minor.Card_Training_Minor_C.EventPlayVideo // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Card_Training_Minor.Card_Training_Minor_C.BndEvt__MainBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_Training_Minor.Card_Training_Minor_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Card_Training_Minor.Card_Training_Minor_C.BndEvt__MainBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Training_Minor.Card_Training_Minor_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_Training_Minor.Card_Training_Minor_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Training_Minor(int32_t EntryPoint); // Function Card_Training_Minor.Card_Training_Minor_C.ExecuteUbergraph_Card_Training_Minor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

