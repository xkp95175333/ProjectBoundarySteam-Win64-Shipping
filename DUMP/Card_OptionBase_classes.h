// WidgetBlueprintGeneratedClass Card_OptionBase.Card_OptionBase_C
// Size: 0x409 (Inherited: 0x3d8)
struct UCard_OptionBase_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct FMulticastInlineDelegate OnAccessExtra; // 0x3e0(0x10)
	bool bAutoGenByOptionName; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	struct FName OptionName; // 0x3f4(0x08)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct UCard_ExtraOption_C* ExtraWidget; // 0x400(0x08)
	bool bMiniVersion; // 0x408(0x01)

	void RefreshInfo(); // Function Card_OptionBase.Card_OptionBase_C.RefreshInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Card_OptionBase.Card_OptionBase_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_OptionBase.Card_OptionBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_OptionBase.Card_OptionBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Designer_SetMiniVersion(bool bMiniVersion); // Function Card_OptionBase.Card_OptionBase_C.Designer_SetMiniVersion // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_OptionBase(int32_t EntryPoint); // Function Card_OptionBase.Card_OptionBase_C.ExecuteUbergraph_Card_OptionBase // (Final|UbergraphFunction) // @ game+0x1556ec0
	void OnAccessExtra__DelegateSignature(); // Function Card_OptionBase.Card_OptionBase_C.OnAccessExtra__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

