// WidgetBlueprintGeneratedClass UMG_Message_General.UMG_Message_General_C
// Size: 0x2a0 (Inherited: 0x27c)
struct UUMG_Message_General_C : UUMG_Message_C {
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FocusOn; // 0x288(0x08)
	struct UWidgetAnimation* Flash; // 0x290(0x08)
	struct UTextBlock* TextBlock_59; // 0x298(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Message_General.UMG_Message_General_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Message_General.UMG_Message_General_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Message_General.UMG_Message_General_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Message_General(int32_t EntryPoint); // Function UMG_Message_General.UMG_Message_General_C.ExecuteUbergraph_UMG_Message_General // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

