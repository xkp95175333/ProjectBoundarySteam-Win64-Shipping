// WidgetBlueprintGeneratedClass UMG_ConfirmMode.UMG_ConfirmMode_C
// Size: 0x318 (Inherited: 0x2c8)
struct UUMG_ConfirmMode_C : UPBConfirmModeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UTextBlock* DelegateName; // 0x2d0(0x08)
	struct UTextBlock* DelegateTitle; // 0x2d8(0x08)
	struct UTextBlock* GameModeName; // 0x2e0(0x08)
	struct UTextBlock* GameModeTitle; // 0x2e8(0x08)
	struct UTextBlock* MapName; // 0x2f0(0x08)
	struct UUMG_ActionMapInfo_C* UMG_ActionMapInfo; // 0x2f8(0x08)
	struct UUMG_ActionModeList_C* UMG_ActionModeList_140; // 0x300(0x08)
	struct FMulticastInlineDelegate StartSearching; // 0x308(0x10)

	void PreConstruct(bool IsDesignTime); // Function UMG_ConfirmMode.UMG_ConfirmMode_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetActionMapInfo(); // Function UMG_ConfirmMode.UMG_ConfirmMode_C.K2_SetActionMapInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function UMG_ConfirmMode.UMG_ConfirmMode_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void HackShowGameMapEvent(struct FName InModeName); // Function UMG_ConfirmMode.UMG_ConfirmMode_C.HackShowGameMapEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_ConfirmMode_UMG_ActionModeList_139_K2Node_ComponentBoundEvent_0_StartSearching__DelegateSignature(); // Function UMG_ConfirmMode.UMG_ConfirmMode_C.BndEvt__UMG_ConfirmMode_UMG_ActionModeList_139_K2Node_ComponentBoundEvent_0_StartSearching__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ConfirmMode(int32_t EntryPoint); // Function UMG_ConfirmMode.UMG_ConfirmMode_C.ExecuteUbergraph_UMG_ConfirmMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void StartSearching__DelegateSignature(); // Function UMG_ConfirmMode.UMG_ConfirmMode_C.StartSearching__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

