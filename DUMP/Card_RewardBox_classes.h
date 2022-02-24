// WidgetBlueprintGeneratedClass Card_RewardBox.Card_RewardBox_C
// Size: 0x2c4 (Inherited: 0x268)
struct UCard_RewardBox_C : UPBUserWidget {
	struct USizeBox* IconBox; // 0x268(0x08)
	struct UImage* LightBG; // 0x270(0x08)
	struct UImage* LightFrame; // 0x278(0x08)
	struct UImage* RewardIcon; // 0x280(0x08)
	struct UTextBlock* RewardName; // 0x288(0x08)
	struct USizeBox* TextBox; // 0x290(0x08)
	struct UTexture2D* Texture_Reward; // 0x298(0x08)
	struct FText Text_RewardName; // 0x2a0(0x18)
	int32_t ItemLevel; // 0x2b8(0x04)
	bool IsHaveText; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	float IconSize; // 0x2c0(0x04)

	void ShowInfo(struct FName RewardId, enum class Enum_RewardType RewardType); // Function Card_RewardBox.Card_RewardBox_C.ShowInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshIcon(struct UTexture2D* TextureReward, struct FText TexRewardName, float IconSize); // Function Card_RewardBox.Card_RewardBox_C.RefreshIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

