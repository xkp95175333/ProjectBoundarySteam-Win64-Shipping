// WidgetBlueprintGeneratedClass Missions.Missions_C
// Size: 0x390 (Inherited: 0x268)
struct UMissions_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UScrollBox* ChallengeHolder; // 0x270(0x08)
	struct UCard_DailyMission_C* DailyMission; // 0x278(0x08)
	struct UCard_DailyMission_C* DailyMission_C_2; // 0x280(0x08)
	struct UCard_DailyMission_C* DailyMission_C_3; // 0x288(0x08)
	struct UTextBlock* Description_2; // 0x290(0x08)
	struct UTextBlock* Description_3; // 0x298(0x08)
	struct UImage* Image_143; // 0x2a0(0x08)
	struct UImage* Image_204; // 0x2a8(0x08)
	struct UImage* Image_284; // 0x2b0(0x08)
	struct UImage* Image_Item; // 0x2b8(0x08)
	struct UUI_MenuTitle_Small_C* TitleBoard_Sub; // 0x2c0(0x08)
	struct FMulticastInlineDelegate NoDefaultFocus; // 0x2c8(0x10)
	struct FMulticastInlineDelegate Skip; // 0x2d8(0x10)
	struct TMap<struct FString, float> CompletetChallengeArray; // 0x2e8(0x50)
	struct FString MaxProcessName; // 0x338(0x10)
	float MaxProcessData; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct TArray<struct FString> TempGameRoundChallengeAchievement; // 0x350(0x10)
	struct FText Description1; // 0x360(0x18)
	struct FText Description2; // 0x378(0x18)

	void ScrollItemFocus(struct UWidget* Item); // Function Missions.Missions_C.ScrollItemFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function Missions.Missions_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Missions.Missions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent(); // Function Missions.Missions_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_3(struct UWidget* Item); // Function Missions.Missions_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Missions(int32_t EntryPoint); // Function Missions.Missions_C.ExecuteUbergraph_Missions // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Skip__DelegateSignature(); // Function Missions.Missions_C.Skip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NoDefaultFocus__DelegateSignature(); // Function Missions.Missions_C.NoDefaultFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

