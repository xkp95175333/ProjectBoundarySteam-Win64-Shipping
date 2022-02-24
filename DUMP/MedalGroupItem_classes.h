// WidgetBlueprintGeneratedClass MedalGroupItem.MedalGroupItem_C
// Size: 0x310 (Inherited: 0x268)
struct UMedalGroupItem_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* NumberFlash_1; // 0x270(0x08)
	struct UWidgetAnimation* NumberFlash; // 0x278(0x08)
	struct UButton* Button_Item; // 0x280(0x08)
	struct UHorizontalBox* CountBox; // 0x288(0x08)
	struct UImage* Image_btbg; // 0x290(0x08)
	struct UImage* Image_Item; // 0x298(0x08)
	struct UTextBlock* ItemCount; // 0x2a0(0x08)
	struct FMulticastInlineDelegate FocusButton; // 0x2a8(0x10)
	struct FMulticastInlineDelegate ButtonClick; // 0x2b8(0x10)
	bool HasFocus; // 0x2c8(0x01)
	bool NewHasFocus; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	struct FVector2D BtnRenderTransform; // 0x2cc(0x08)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UMedals_C* FatherMedalPage; // 0x2d8(0x08)
	struct FText Description; // 0x2e0(0x18)
	struct FText Name; // 0x2f8(0x18)

	void OnFocus(); // Function MedalGroupItem.MedalGroupItem_C.OnFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ButtonFocus(); // Function MedalGroupItem.MedalGroupItem_C.ButtonFocus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetItemInfo(struct UTexture2D* Img, int32_t Count); // Function MedalGroupItem.MedalGroupItem_C.SetItemInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MedalGroupItem.MedalGroupItem_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__Button_Item_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function MedalGroupItem.MedalGroupItem_C.BndEvt__Button_Item_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function MedalGroupItem.MedalGroupItem_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_MedalGroupItem(int32_t EntryPoint); // Function MedalGroupItem.MedalGroupItem_C.ExecuteUbergraph_MedalGroupItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void ButtonClick__DelegateSignature(); // Function MedalGroupItem.MedalGroupItem_C.ButtonClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FocusButton__DelegateSignature(struct UWidget* Item); // Function MedalGroupItem.MedalGroupItem_C.FocusButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

