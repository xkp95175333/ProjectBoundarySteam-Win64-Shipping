// WidgetBlueprintGeneratedClass UMG_PropertyLevel.UMG_PropertyLevel_C
// Size: 0x2a0 (Inherited: 0x268)
struct UUMG_PropertyLevel_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Image_Level; // 0x270(0x08)
	struct UTextBlock* Text_Level; // 0x278(0x08)
	struct UTextBlock* Text_TypeName; // 0x280(0x08)
	struct FText TypeName; // 0x288(0x18)

	void SetLevelInfo(enum class EPBCharacterPropertyLevel InLevel); // Function UMG_PropertyLevel.UMG_PropertyLevel_C.SetLevelInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_PropertyLevel.UMG_PropertyLevel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_PropertyLevel(int32_t EntryPoint); // Function UMG_PropertyLevel.UMG_PropertyLevel_C.ExecuteUbergraph_UMG_PropertyLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

