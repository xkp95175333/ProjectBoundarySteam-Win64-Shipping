// WidgetBlueprintGeneratedClass LeaveMatch.LeaveMatch_C
// Size: 0x430 (Inherited: 0x3c8)
struct ULeaveMatch_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UButton* Button_LeavePage; // 0x3d0(0x08)
	struct UImage* Image_1; // 0x3d8(0x08)
	struct UImage* Image_2; // 0x3e0(0x08)
	struct UImage* Image_3; // 0x3e8(0x08)
	struct UImage* Image_4; // 0x3f0(0x08)
	struct UTextBlock* TextBlock_1; // 0x3f8(0x08)
	struct FMulticastInlineDelegate CloseWidget; // 0x400(0x10)
	struct FMulticastInlineDelegate LookUp; // 0x410(0x10)
	struct FMulticastInlineDelegate LookLeft; // 0x420(0x10)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function LeaveMatch.LeaveMatch_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function LeaveMatch.LeaveMatch_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_LeavePage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function LeaveMatch.LeaveMatch_C.BndEvt__Button_LeavePage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function LeaveMatch.LeaveMatch_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_LeaveMatch(int32_t EntryPoint); // Function LeaveMatch.LeaveMatch_C.ExecuteUbergraph_LeaveMatch // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void LookLeft__DelegateSignature(); // Function LeaveMatch.LeaveMatch_C.LookLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void LookUp__DelegateSignature(); // Function LeaveMatch.LeaveMatch_C.LookUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CloseWidget__DelegateSignature(); // Function LeaveMatch.LeaveMatch_C.CloseWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

