// WidgetBlueprintGeneratedClass UMG_ActionMapInfo.UMG_ActionMapInfo_C
// Size: 0x2d0 (Inherited: 0x260)
struct UUMG_ActionMapInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* MapInfo; // 0x268(0x08)
	struct UTextBlock* MapTitle; // 0x270(0x08)
	bool NewVar_1; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct TMap<struct FString, struct FText> ClassOffsetMap_Floating; // 0x280(0x50)

	void OnInitialized(); // Function UMG_ActionMapInfo.UMG_ActionMapInfo_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void UpdateInfo(); // Function UMG_ActionMapInfo.UMG_ActionMapInfo_C.UpdateInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ActionMapInfo(int32_t EntryPoint); // Function UMG_ActionMapInfo.UMG_ActionMapInfo_C.ExecuteUbergraph_UMG_ActionMapInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

