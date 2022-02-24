// WidgetBlueprintGeneratedClass UMG_ComponentTickBox.UMG_ComponentTickBox_C
// Size: 0x2f0 (Inherited: 0x268)
struct UUMG_ComponentTickBox_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* HideInstantly; // 0x270(0x08)
	struct UWidgetAnimation* Show; // 0x278(0x08)
	struct UWidgetAnimation* FocusOn; // 0x280(0x08)
	struct UBorder* ComponentBorder; // 0x288(0x08)
	struct UTextBlock* Desc; // 0x290(0x08)
	struct UTextBlock* Name; // 0x298(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x2a0(0x10)
	struct FText NameText; // 0x2b0(0x18)
	struct FText DescText; // 0x2c8(0x18)
	struct FMulticastInlineDelegate Hovered; // 0x2e0(0x10)

	void PlayFocusAnim(enum class EUMGSequencePlayMode PlayMode); // Function UMG_ComponentTickBox.UMG_ComponentTickBox_C.PlayFocusAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetState(enum class ECheckBoxState NewParam); // Function UMG_ComponentTickBox.UMG_ComponentTickBox_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_ComponentTickBox.UMG_ComponentTickBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowWithDelay(float Duration); // Function UMG_ComponentTickBox.UMG_ComponentTickBox_C.ShowWithDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_ComponentTickBox(int32_t EntryPoint); // Function UMG_ComponentTickBox.UMG_ComponentTickBox_C.ExecuteUbergraph_UMG_ComponentTickBox // (Final|UbergraphFunction) // @ game+0x1556ec0
	void Hovered__DelegateSignature(); // Function UMG_ComponentTickBox.UMG_ComponentTickBox_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Clicked__DelegateSignature(); // Function UMG_ComponentTickBox.UMG_ComponentTickBox_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

