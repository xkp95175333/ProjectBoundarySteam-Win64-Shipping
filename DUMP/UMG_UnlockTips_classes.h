// WidgetBlueprintGeneratedClass UMG_UnlockTips.UMG_UnlockTips_C
// Size: 0x2b0 (Inherited: 0x268)
struct UUMG_UnlockTips_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UButton* Button_LeavePage; // 0x270(0x08)
	struct UCanvasPanel* CanvasPanel_FaildUnlock; // 0x278(0x08)
	struct UCanvasPanel* CanvasPanel_TipS; // 0x280(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Notify; // 0x288(0x08)
	struct FMulticastInlineDelegate LeavePageDelegate; // 0x290(0x10)
	struct FMulticastInlineDelegate ConfirmPageCallBack; // 0x2a0(0x10)

	void ShowAskWetherUnlockItem(struct FDelegate Event); // Function UMG_UnlockTips.UMG_UnlockTips_C.ShowAskWetherUnlockItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowTipsAboutCantUnlockDueToChallenge(struct FName InUnlockID, struct FDelegate Event); // Function UMG_UnlockTips.UMG_UnlockTips_C.ShowTipsAboutCantUnlockDueToChallenge // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_UnlockTips.UMG_UnlockTips_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_LeavePage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_UnlockTips.UMG_UnlockTips_C.BndEvt__Button_LeavePage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ComfirmPageCallBack(bool bYes); // Function UMG_UnlockTips.UMG_UnlockTips_C.ComfirmPageCallBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_UnlockTips(int32_t EntryPoint); // Function UMG_UnlockTips.UMG_UnlockTips_C.ExecuteUbergraph_UMG_UnlockTips // (Final|UbergraphFunction) // @ game+0x1556ec0
	void ConfirmPageCallBack__DelegateSignature(bool bYes); // Function UMG_UnlockTips.UMG_UnlockTips_C.ConfirmPageCallBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void LeavePageDelegate__DelegateSignature(); // Function UMG_UnlockTips.UMG_UnlockTips_C.LeavePageDelegate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

