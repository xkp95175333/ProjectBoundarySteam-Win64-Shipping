// WidgetBlueprintGeneratedClass Effect_UnlockSingle.Effect_UnlockSingle_C
// Size: 0x420 (Inherited: 0x3d8)
struct UEffect_UnlockSingle_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* ItemOut; // 0x3e0(0x08)
	struct UWidgetAnimation* ItemIn; // 0x3e8(0x08)
	struct UImage* Image_93; // 0x3f0(0x08)
	struct UTextBlock* ItemName; // 0x3f8(0x08)
	struct FMulticastInlineDelegate Single_FinishedDispatcher; // 0x400(0x10)
	struct FMulticastInlineDelegate Single_ShowIconDIspatcher; // 0x410(0x10)

	void SequenceEvent__ENTRYPOINTEffect_UnlockSingle_1(); // Function Effect_UnlockSingle.Effect_UnlockSingle_C.SequenceEvent__ENTRYPOINTEffect_UnlockSingle_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshIconInfo(struct UTexture2D* Texture, struct FText ItemName); // Function Effect_UnlockSingle.Effect_UnlockSingle_C.RefreshIconInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Effect_UnlockSingle.Effect_UnlockSingle_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Effect_UnlockSingle.Effect_UnlockSingle_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Effect_UnlockSingle.Effect_UnlockSingle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void AnimFinish(); // Function Effect_UnlockSingle.Effect_UnlockSingle_C.AnimFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIcon(); // Function Effect_UnlockSingle.Effect_UnlockSingle_C.ShowIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Effect_UnlockSingle(int32_t EntryPoint); // Function Effect_UnlockSingle.Effect_UnlockSingle_C.ExecuteUbergraph_Effect_UnlockSingle // (Final|UbergraphFunction) // @ game+0x1556ec0
	void Single_ShowIconDIspatcher__DelegateSignature(); // Function Effect_UnlockSingle.Effect_UnlockSingle_C.Single_ShowIconDIspatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Single_FinishedDispatcher__DelegateSignature(); // Function Effect_UnlockSingle.Effect_UnlockSingle_C.Single_FinishedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

