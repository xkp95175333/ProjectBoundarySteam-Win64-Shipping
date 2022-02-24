// WidgetBlueprintGeneratedClass Card_Challenge_Detail.Card_Challenge_Detail_C
// Size: 0x5d8 (Inherited: 0x3d8)
struct UCard_Challenge_Detail_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UCard_RewardBox_C* Card_RewardBox; // 0x3e0(0x08)
	struct UVerticalBox* ChallengeDescContainer; // 0x3e8(0x08)
	struct UTextBlock* ChallengeName; // 0x3f0(0x08)
	struct UTextBlock* ChallengeReward; // 0x3f8(0x08)
	struct UScrollBox* ChallengeRewardContainer; // 0x400(0x08)
	struct UTextBlock* FinalRewardName; // 0x408(0x08)
	struct UImage* Image_34; // 0x410(0x08)
	struct UCard_RewardBox_C* Reward_2; // 0x418(0x08)
	struct UCard_RewardBox_C* Reward_3; // 0x420(0x08)
	struct UCard_RewardBox_C* Reward_4; // 0x428(0x08)
	struct UCard_RewardBox_C* Reward_5; // 0x430(0x08)
	struct FText 1_Text_ChallengeTitle_1; // 0x438(0x18)
	struct FText 2_Text_ChallengeDscp_1; // 0x450(0x18)
	float 3_Percent_Challenge_1; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FText 4_Text_ChallengeGoal_1; // 0x470(0x18)
	struct FText 5_Text_Compeletion_1; // 0x488(0x18)
	struct FText Text_ChallengeReward; // 0x4a0(0x18)
	int32_t Amount_of_Reward; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct UTexture2D* Texture_Reward1; // 0x4c0(0x08)
	struct FText Name_Reward1; // 0x4c8(0x18)
	int32_t Level_Reward1; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct UTexture2D* Texture_Reward2; // 0x4e8(0x08)
	struct FText Name_Reward2; // 0x4f0(0x18)
	int32_t Level_Reward2; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct UTexture2D* Texture_Reward3; // 0x510(0x08)
	struct FText Name_Reward3; // 0x518(0x18)
	int32_t Level_Reward3; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct UTexture2D* Texture_Reward4; // 0x538(0x08)
	struct FText Name_Reward4; // 0x540(0x18)
	int32_t Level_Reward4; // 0x558(0x04)
	bool 6_IsCompelete_1; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct UTexture2D* Texture_FinalReward; // 0x560(0x08)
	struct FText Text_FinalRewardName; // 0x568(0x18)
	int32_t Level_FinalReward; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct TMap<struct FName, struct FItemId> ChallengeItemContainer; // 0x588(0x50)

	void ShowInfo(struct FName ChallengeId, struct FName ChallengeGroupID); // Function Card_Challenge_Detail.Card_Challenge_Detail_C.ShowInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_Challenge_Detail.Card_Challenge_Detail_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Card_Challenge_Detail.Card_Challenge_Detail_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function Card_Challenge_Detail.Card_Challenge_Detail_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Challenge_Detail(int32_t EntryPoint); // Function Card_Challenge_Detail.Card_Challenge_Detail_C.ExecuteUbergraph_Card_Challenge_Detail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

