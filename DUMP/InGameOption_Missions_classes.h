// WidgetBlueprintGeneratedClass InGameOption_Missions.InGameOption_Missions_C
// Size: 0x4e0 (Inherited: 0x3d8)
struct UInGameOption_Missions_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UScrollBox* ChallengeHolder; // 0x3e0(0x08)
	struct UTextBlock* Description; // 0x3e8(0x08)
	struct UImage* Image_143; // 0x3f0(0x08)
	struct UImage* Image_204; // 0x3f8(0x08)
	struct UImage* Image_284; // 0x400(0x08)
	struct UImage* Image_Item; // 0x408(0x08)
	struct UInGameOption_MissionCard_C* InGameOption_MissionCard; // 0x410(0x08)
	struct UInGameOption_MissionCard_C* InGameOption_MissionCard_2; // 0x418(0x08)
	struct UInGameOption_MissionCard_C* InGameOption_MissionCard_3; // 0x420(0x08)
	struct UInGameOption_MissionCard_C* InGameOption_MissionCard_4; // 0x428(0x08)
	struct UTextBlock* Name; // 0x430(0x08)
	struct FMulticastInlineDelegate NoDefaultFocus; // 0x438(0x10)
	struct FMulticastInlineDelegate Skip; // 0x448(0x10)
	struct TMap<struct FString, float> CompletetChallengeArray; // 0x458(0x50)
	struct FString MaxProcessName; // 0x4a8(0x10)
	float MaxProcessData; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct TArray<struct FString> TempGameRoundChallengeAchievement; // 0x4c0(0x10)
	struct FString NewVar_1; // 0x4d0(0x10)

	void ScrollItemFocus(struct UWidget* Item); // Function InGameOption_Missions.InGameOption_Missions_C.ScrollItemFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function InGameOption_Missions.InGameOption_Missions_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function InGameOption_Missions.InGameOption_Missions_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function InGameOption_Missions.InGameOption_Missions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent(); // Function InGameOption_Missions.InGameOption_Missions_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_3(struct UWidget* Item); // Function InGameOption_Missions.InGameOption_Missions_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_InGameOption_Missions(int32_t EntryPoint); // Function InGameOption_Missions.InGameOption_Missions_C.ExecuteUbergraph_InGameOption_Missions // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Skip__DelegateSignature(); // Function InGameOption_Missions.InGameOption_Missions_C.Skip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NoDefaultFocus__DelegateSignature(); // Function InGameOption_Missions.InGameOption_Missions_C.NoDefaultFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

