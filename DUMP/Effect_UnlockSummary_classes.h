// WidgetBlueprintGeneratedClass Effect_UnlockSummary.Effect_UnlockSummary_C
// Size: 0x410 (Inherited: 0x3d8)
struct UEffect_UnlockSummary_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* ItemOut; // 0x3e0(0x08)
	struct UWidgetAnimation* ItemIn; // 0x3e8(0x08)
	struct UImage* Icon_Summary; // 0x3f0(0x08)
	struct UTextBlock* IconName; // 0x3f8(0x08)
	struct FMulticastInlineDelegate SummaryFinishedDispatcher; // 0x400(0x10)

	void Refresh Icon Info(struct UTexture2D* Texture, struct FText ItemName); // Function Effect_UnlockSummary.Effect_UnlockSummary_C.Refresh Icon Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Effect_UnlockSummary.Effect_UnlockSummary_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Effect_UnlockSummary.Effect_UnlockSummary_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Effect_UnlockSummary.Effect_UnlockSummary_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Effect_UnlockSummary(int32_t EntryPoint); // Function Effect_UnlockSummary.Effect_UnlockSummary_C.ExecuteUbergraph_Effect_UnlockSummary // (Final|UbergraphFunction) // @ game+0x1556ec0
	void SummaryFinishedDispatcher__DelegateSignature(); // Function Effect_UnlockSummary.Effect_UnlockSummary_C.SummaryFinishedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

