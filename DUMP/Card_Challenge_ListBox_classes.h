// WidgetBlueprintGeneratedClass Card_Challenge_ListBox.Card_Challenge_ListBox_C
// Size: 0x46c (Inherited: 0x3d8)
struct UCard_Challenge_ListBox_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UCard_IconBox_C* Card_IconBox; // 0x3e0(0x08)
	struct UCard_IconBox_C* Card_IconBox_121; // 0x3e8(0x08)
	struct UCard_IconBox_C* Card_IconBox_343; // 0x3f0(0x08)
	struct UHorizontalBox* HBox_ChallengeContainer; // 0x3f8(0x08)
	struct UImage* Image_93; // 0x400(0x08)
	struct UImage* Image_111; // 0x408(0x08)
	struct UImage* Image_496; // 0x410(0x08)
	struct UWidgetSwitcher* Switcher_Completion; // 0x418(0x08)
	struct UTextBlock* Text_CompleteCount; // 0x420(0x08)
	struct UTextBlock* Text_NeedCompleteNum; // 0x428(0x08)
	struct UTextBlock* Title; // 0x430(0x08)
	struct UImage* TitleBG; // 0x438(0x08)
	struct FText TitleText; // 0x440(0x18)
	struct UMaterialInstanceDynamic* TitleBGDynamic; // 0x458(0x08)
	enum class Enum_IconBox Status; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	int32_t CompleteCount; // 0x464(0x04)
	int32_t NeedCompleteNum; // 0x468(0x04)

	void ShowInfo(struct FName ChallengeGroupID); // Function Card_Challenge_ListBox.Card_Challenge_ListBox_C.ShowInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_Challenge_ListBox.Card_Challenge_ListBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_Challenge_ListBox.Card_Challenge_ListBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Card_Challenge_ListBox.Card_Challenge_ListBox_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Challenge_ListBox(int32_t EntryPoint); // Function Card_Challenge_ListBox.Card_Challenge_ListBox_C.ExecuteUbergraph_Card_Challenge_ListBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

