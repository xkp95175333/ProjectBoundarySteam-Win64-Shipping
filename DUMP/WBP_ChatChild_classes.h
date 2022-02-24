// WidgetBlueprintGeneratedClass WBP_ChatChild.WBP_ChatChild_C
// Size: 0x290 (Inherited: 0x268)
struct UWBP_ChatChild_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UMultiLineEditableTextBox* MultiLineEditableTextBox_160; // 0x270(0x08)
	struct FText ChatText; // 0x278(0x18)

	void RemoveSelfFromWindow(); // Function WBP_ChatChild.WBP_ChatChild_C.RemoveSelfFromWindow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FText GetHintText_1(); // Function WBP_ChatChild.WBP_ChatChild_C.GetHintText_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function WBP_ChatChild.WBP_ChatChild_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_WBP_ChatChild(int32_t EntryPoint); // Function WBP_ChatChild.WBP_ChatChild_C.ExecuteUbergraph_WBP_ChatChild // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

