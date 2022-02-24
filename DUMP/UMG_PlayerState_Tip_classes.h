// WidgetBlueprintGeneratedClass UMG_PlayerState_Tip.UMG_PlayerState_Tip_C
// Size: 0x2a1 (Inherited: 0x268)
struct UUMG_PlayerState_Tip_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Image_Icon; // 0x270(0x08)
	struct UTextBlock* Text_Name; // 0x278(0x08)
	struct FText Name; // 0x280(0x18)
	struct UTexture2D* RoleIcon; // 0x298(0x08)
	bool bIsImage; // 0x2a0(0x01)

	void SetImageInfo(struct TSoftObjectPtr<struct UTexture2D> InImage); // Function UMG_PlayerState_Tip.UMG_PlayerState_Tip_C.SetImageInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTextInfo(struct FText InName); // Function UMG_PlayerState_Tip.UMG_PlayerState_Tip_C.SetTextInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_PlayerState_Tip.UMG_PlayerState_Tip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_PlayerState_Tip.UMG_PlayerState_Tip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_PlayerState_Tip(int32_t EntryPoint); // Function UMG_PlayerState_Tip.UMG_PlayerState_Tip_C.ExecuteUbergraph_UMG_PlayerState_Tip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

