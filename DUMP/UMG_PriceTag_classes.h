// WidgetBlueprintGeneratedClass UMG_PriceTag.UMG_PriceTag_C
// Size: 0x2a4 (Inherited: 0x268)
struct UUMG_PriceTag_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Flash; // 0x270(0x08)
	struct UTextBlock* Condition; // 0x278(0x08)
	struct UTextBlock* CostNumber; // 0x280(0x08)
	struct UHorizontalBox* Level; // 0x288(0x08)
	struct UHorizontalBox* Price; // 0x290(0x08)
	struct UWidgetSwitcher* UnlockTitle; // 0x298(0x08)
	float PriceValue; // 0x2a0(0x04)

	void SetUnlockTag(int32_t UnlockPoint, bool IsShowPrice); // Function UMG_PriceTag.UMG_PriceTag_C.SetUnlockTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_PriceTag.UMG_PriceTag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_PriceTag(int32_t EntryPoint); // Function UMG_PriceTag.UMG_PriceTag_C.ExecuteUbergraph_UMG_PriceTag // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

