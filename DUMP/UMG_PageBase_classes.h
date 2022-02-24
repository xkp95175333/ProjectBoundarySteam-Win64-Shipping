// WidgetBlueprintGeneratedClass UMG_PageBase.UMG_PageBase_C
// Size: 0x2a8 (Inherited: 0x298)
struct UUMG_PageBase_C : UPBPageWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* Fade; // 0x2a0(0x08)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_PageBase.UMG_PageBase_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_PageBase.UMG_PageBase_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_PageBase.UMG_PageBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_PageBase(int32_t EntryPoint); // Function UMG_PageBase.UMG_PageBase_C.ExecuteUbergraph_UMG_PageBase // (Final|UbergraphFunction) // @ game+0x1556ec0
};

