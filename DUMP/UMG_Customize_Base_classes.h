// WidgetBlueprintGeneratedClass UMG_Customize_Base.UMG_Customize_Base_C
// Size: 0x2a8 (Inherited: 0x268)
struct UUMG_Customize_Base_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCustomize_C* father; // 0x270(0x08)
	struct FText Title; // 0x278(0x18)
	int32_t MenuLevel; // 0x290(0x04)
	bool bIsHightLight; // 0x294(0x01)
	bool bIsFade; // 0x295(0x01)
	char pad_296[0x2]; // 0x296(0x02)
	struct UUMG_Widget_Customize_PanelBase_C* Panel; // 0x298(0x08)
	struct UPBCustomManager_BP_C* PBCustomManagerBP; // 0x2a0(0x08)

	void NotifyClear(); // Function UMG_Customize_Base.UMG_Customize_Base_C.NotifyClear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh(); // Function UMG_Customize_Base.UMG_Customize_Base_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreEnterNextLevel(); // Function UMG_Customize_Base.UMG_Customize_Base_C.PreEnterNextLevel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CanEnterTestField(bool bReturnValue); // Function UMG_Customize_Base.UMG_Customize_Base_C.CanEnterTestField // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_Customize_Base.UMG_Customize_Base_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetPBCustomManager_BP(struct UPBCustomManager_BP_C* PBCustomManagerBP); // Function UMG_Customize_Base.UMG_Customize_Base_C.GetPBCustomManager_BP // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetNextLevelPanelWidget(struct UUMG_Widget_Customize_PanelBase_C* OutPanel); // Function UMG_Customize_Base.UMG_Customize_Base_C.GetNextLevelPanelWidget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void ReverseFade_Internal(); // Function UMG_Customize_Base.UMG_Customize_Base_C.ReverseFade_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReverseFade(); // Function UMG_Customize_Base.UMG_Customize_Base_C.ReverseFade // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReverseHightLight_Internal(); // Function UMG_Customize_Base.UMG_Customize_Base_C.ReverseHightLight_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReverseHightLight(); // Function UMG_Customize_Base.UMG_Customize_Base_C.ReverseHightLight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Fade_Internal(); // Function UMG_Customize_Base.UMG_Customize_Base_C.Fade_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Fade(); // Function UMG_Customize_Base.UMG_Customize_Base_C.Fade // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HightLight_Internal(); // Function UMG_Customize_Base.UMG_Customize_Base_C.HightLight_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HightLight(); // Function UMG_Customize_Base.UMG_Customize_Base_C.HightLight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyEnter(); // Function UMG_Customize_Base.UMG_Customize_Base_C.NotifyEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyFade(); // Function UMG_Customize_Base.UMG_Customize_Base_C.NotifyFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyHightLight(); // Function UMG_Customize_Base.UMG_Customize_Base_C.NotifyHightLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function UMG_Customize_Base.UMG_Customize_Base_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	int32_t GetNextMenuLevel(); // Function UMG_Customize_Base.UMG_Customize_Base_C.GetNextMenuLevel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetNextLevelWidgets(struct TArray<struct UUMG_Customize_Base_C*> OutWidget); // Function UMG_Customize_Base.UMG_Customize_Base_C.GetNextLevelWidgets // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void SetCustomFocus(bool bHandled); // Function UMG_Customize_Base.UMG_Customize_Base_C.SetCustomFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterNextLevel(); // Function UMG_Customize_Base.UMG_Customize_Base_C.EnterNextLevel // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG_Customize_Base.UMG_Customize_Base_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Customize_Base(int32_t EntryPoint); // Function UMG_Customize_Base.UMG_Customize_Base_C.ExecuteUbergraph_UMG_Customize_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

