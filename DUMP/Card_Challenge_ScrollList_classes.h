// WidgetBlueprintGeneratedClass Card_Challenge_ScrollList.Card_Challenge_ScrollList_C
// Size: 0x578 (Inherited: 0x3d8)
struct UCard_Challenge_ScrollList_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UScrollBox* ChallengeGroupList; // 0x3e0(0x08)
	struct TMap<struct FName, int32_t> CombatContainer; // 0x3e8(0x50)
	struct TMap<struct FName, int32_t> OperationContainer; // 0x438(0x50)
	struct TMap<struct FName, int32_t> ClassContainer; // 0x488(0x50)
	struct TMap<struct FName, int32_t> WeaponContainer; // 0x4d8(0x50)
	struct TMap<struct FName, int32_t> Cover_opsContainer; // 0x528(0x50)

	void List Box Show Info(struct TArray<struct FName> NameArray); // Function Card_Challenge_ScrollList.Card_Challenge_ScrollList_C.List Box Show Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function Card_Challenge_ScrollList.Card_Challenge_ScrollList_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void RefreshInfo(int32_t InTab); // Function Card_Challenge_ScrollList.Card_Challenge_ScrollList_C.RefreshInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Challenge_ScrollList(int32_t EntryPoint); // Function Card_Challenge_ScrollList.Card_Challenge_ScrollList_C.ExecuteUbergraph_Card_Challenge_ScrollList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

