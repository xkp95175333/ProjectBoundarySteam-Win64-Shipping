// WidgetBlueprintGeneratedClass Card_IconBox.Card_IconBox_C
// Size: 0x480 (Inherited: 0x3d8)
struct UCard_IconBox_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* FocusOn; // 0x3e0(0x08)
	struct UImage* FocusLight; // 0x3e8(0x08)
	struct USizeBox* IconSize; // 0x3f0(0x08)
	struct UImage* Image_77; // 0x3f8(0x08)
	struct UButton* MainButton; // 0x400(0x08)
	struct UProgressBar* ProgressBar; // 0x408(0x08)
	struct UTextBlock* ProgressValue; // 0x410(0x08)
	struct UImage* Status_Compelete; // 0x418(0x08)
	struct UCanvasPanel* Status_InProgress; // 0x420(0x08)
	struct UCanvasPanel* Status_Locked; // 0x428(0x08)
	enum class Enum_IconBox IconStatus; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct UTexture2D* IconTexture; // 0x438(0x08)
	float Icon_Height; // 0x440(0x04)
	float Icon_Width; // 0x444(0x04)
	float ProgressPercent; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UMaterialInstanceDynamic* IconDynamic; // 0x450(0x08)
	struct FMulticastInlineDelegate ButtonClicked; // 0x458(0x10)
	struct UMaterialInstanceDynamic* FocusLightDynamic; // 0x468(0x08)
	struct FName ChallengeId; // 0x470(0x08)
	struct FName ChallengeGroupID; // 0x478(0x08)

	void GetStatisticsValue(struct FName Key, float Value); // Function Card_IconBox.Card_IconBox_C.GetStatisticsValue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetWeaponKillCount(struct FName Key, float WeaponKillCount); // Function Card_IconBox.Card_IconBox_C.GetWeaponKillCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetChallengeStatue(struct FName InChallengeID, struct FName InChallengeGroupID, enum class Enum_IconBox State, float OutPercentage); // Function Card_IconBox.Card_IconBox_C.GetChallengeStatue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void ShowChallengeInfo(); // Function Card_IconBox.Card_IconBox_C.ShowChallengeInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowStatusInfo(); // Function Card_IconBox.Card_IconBox_C.ShowStatusInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct TMap<struct FName, int64_t> GetStatisticsInfo(); // Function Card_IconBox.Card_IconBox_C.GetStatisticsInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetProcess(struct FName ChallengeId, float Percent); // Function Card_IconBox.Card_IconBox_C.GetProcess // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Card_IconBox.Card_IconBox_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function Card_IconBox.Card_IconBox_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function Card_IconBox.Card_IconBox_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function Card_IconBox.Card_IconBox_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Set Info(struct FName ChallengeId, struct FName ChallengeGroupID); // Function Card_IconBox.Card_IconBox_C.Set Info // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_IconBox.Card_IconBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_IconBox(int32_t EntryPoint); // Function Card_IconBox.Card_IconBox_C.ExecuteUbergraph_Card_IconBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void ButtonClicked__DelegateSignature(struct FName ID); // Function Card_IconBox.Card_IconBox_C.ButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

