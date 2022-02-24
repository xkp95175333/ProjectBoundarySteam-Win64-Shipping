// WidgetBlueprintGeneratedClass UMG_MessagePanel.UMG_MessagePanel_C
// Size: 0x270 (Inherited: 0x260)
struct UUMG_MessagePanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x268(0x08)

	void AddMessage(struct UUMG_Message_C* MessageClass, struct FText InMessage, bool bUnique); // Function UMG_MessagePanel.UMG_MessagePanel_C.AddMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_MessagePanel.UMG_MessagePanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_MessagePanel(int32_t EntryPoint); // Function UMG_MessagePanel.UMG_MessagePanel_C.ExecuteUbergraph_UMG_MessagePanel // (Final|UbergraphFunction) // @ game+0x1556ec0
};

