// WidgetBlueprintGeneratedClass Card_InGameOption.Card_InGameOption_C
// Size: 0x2b9 (Inherited: 0x268)
struct UCard_InGameOption_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Image_3; // 0x270(0x08)
	struct UImage* Image_127; // 0x278(0x08)
	struct UImage* Image_192; // 0x280(0x08)
	struct UImage* Image_296; // 0x288(0x08)
	struct UImage* ItemImage; // 0x290(0x08)
	struct UTextBlock* ItemName; // 0x298(0x08)
	struct UScaleBox* ItemScale; // 0x2a0(0x08)
	struct UOverlay* NoneItemBoard; // 0x2a8(0x08)
	struct FName RoleId; // 0x2b0(0x08)
	enum class EPBSlotType TheSlot; // 0x2b8(0x01)

	void SpeciallyRefreshInfo(enum class EPBSlotType InKey, struct UMaterialInstanceDynamic* DynamicMat); // Function Card_InGameOption.Card_InGameOption_C.SpeciallyRefreshInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(struct FName RoleId); // Function Card_InGameOption.Card_InGameOption_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_InGameOption.Card_InGameOption_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_InGameOption(int32_t EntryPoint); // Function Card_InGameOption.Card_InGameOption_C.ExecuteUbergraph_Card_InGameOption // (Final|UbergraphFunction) // @ game+0x1556ec0
};

