// WidgetBlueprintGeneratedClass UMG_Profile_Button.UMG_Profile_Button_C
// Size: 0x308 (Inherited: 0x270)
struct UUMG_Profile_Button_C : UPBPageButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* FocusOn; // 0x278(0x08)
	struct UButton* btn; // 0x280(0x08)
	struct UTextBlock* Desc; // 0x288(0x08)
	struct UTextBlock* Name; // 0x290(0x08)
	struct UImage* RoleIconImage; // 0x298(0x08)
	struct UTexture2D* IconTexture; // 0x2a0(0x08)
	struct FText DescText; // 0x2a8(0x18)
	struct FText NameText; // 0x2c0(0x18)
	struct FMulticastInlineDelegate Btn_Clicked; // 0x2d8(0x10)
	struct FMulticastInlineDelegate Btn_Hovered; // 0x2e8(0x10)
	struct FMulticastInlineDelegate Btn_Unhovered; // 0x2f8(0x10)

	void PreConstruct(bool IsDesignTime); // Function UMG_Profile_Button.UMG_Profile_Button_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Profile_Button_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Profile_Button.UMG_Profile_Button_C.BndEvt__UMG_Profile_Button_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Profile_Button_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Profile_Button.UMG_Profile_Button_C.BndEvt__UMG_Profile_Button_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Profile_Button_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Profile_Button.UMG_Profile_Button_C.BndEvt__UMG_Profile_Button_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Profile_Button(int32_t EntryPoint); // Function UMG_Profile_Button.UMG_Profile_Button_C.ExecuteUbergraph_UMG_Profile_Button // (Final|UbergraphFunction) // @ game+0x1556ec0
	void Btn_Unhovered__DelegateSignature(); // Function UMG_Profile_Button.UMG_Profile_Button_C.Btn_Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Btn_Hovered__DelegateSignature(); // Function UMG_Profile_Button.UMG_Profile_Button_C.Btn_Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Btn_Clicked__DelegateSignature(); // Function UMG_Profile_Button.UMG_Profile_Button_C.Btn_Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

