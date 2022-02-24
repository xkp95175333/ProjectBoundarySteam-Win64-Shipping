// WidgetBlueprintGeneratedClass UMG_TeamInfo.UMG_TeamInfo_C
// Size: 0x2c0 (Inherited: 0x268)
struct UUMG_TeamInfo_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUMG_MemberInfo_C* PlayerInfo_1; // 0x270(0x08)
	struct UUMG_MemberInfo_C* PlayerInfo_2; // 0x278(0x08)
	struct UUMG_MemberInfo_C* PlayerInfo_3; // 0x280(0x08)
	struct UUMG_MemberInfo_C* PlayerInfo_4; // 0x288(0x08)
	struct UUMG_MemberInfo_C* PlayerInfo_5; // 0x290(0x08)
	bool IsFoe; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FMulticastInlineDelegate Lit; // 0x2a0(0x10)
	struct FMulticastInlineDelegate Unlit; // 0x2b0(0x10)

	void Refresh(struct TArray<struct APBLobbyPlayerState*> InMemberInfo); // Function UMG_TeamInfo.UMG_TeamInfo_C.Refresh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_TeamInfo.UMG_TeamInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_TeamInfo_PlayerInfo_0_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(); // Function UMG_TeamInfo.UMG_TeamInfo_C.BndEvt__UMG_TeamInfo_PlayerInfo_0_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_TeamInfo_PlayerInfo_0_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature(); // Function UMG_TeamInfo.UMG_TeamInfo_C.BndEvt__UMG_TeamInfo_PlayerInfo_0_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_TeamInfo(int32_t EntryPoint); // Function UMG_TeamInfo.UMG_TeamInfo_C.ExecuteUbergraph_UMG_TeamInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Unlit__DelegateSignature(); // Function UMG_TeamInfo.UMG_TeamInfo_C.Unlit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Lit__DelegateSignature(); // Function UMG_TeamInfo.UMG_TeamInfo_C.Lit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

