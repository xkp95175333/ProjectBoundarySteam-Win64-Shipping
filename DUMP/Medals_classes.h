// WidgetBlueprintGeneratedClass Medals.Medals_C
// Size: 0x31c (Inherited: 0x268)
struct UMedals_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UScrollBox* ChallengeHolder; // 0x270(0x08)
	struct UTextBlock* Description; // 0x278(0x08)
	struct UImage* Image_Item; // 0x280(0x08)
	struct UTextBlock* Name; // 0x288(0x08)
	struct UScrollBox* ScrollBox_MedalGroup; // 0x290(0x08)
	struct FMulticastInlineDelegate NoDefaultFocus; // 0x298(0x10)
	struct FMulticastInlineDelegate Skip; // 0x2a8(0x10)
	struct TMap<struct FString, float> CompletetChallengeArray; // 0x2b8(0x50)
	struct FString MaxProcessName; // 0x308(0x10)
	float MaxProcessData; // 0x318(0x04)

	void ScrollItemFocus(struct UWidget* Item); // Function Medals.Medals_C.ScrollItemFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function Medals.Medals_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Medals.Medals_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(); // Function Medals.Medals_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_2(struct UWidget* Item); // Function Medals.Medals_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent(); // Function Medals.Medals_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_3(struct UWidget* Item); // Function Medals.Medals_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Medals(int32_t EntryPoint); // Function Medals.Medals_C.ExecuteUbergraph_Medals // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void Skip__DelegateSignature(); // Function Medals.Medals_C.Skip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NoDefaultFocus__DelegateSignature(); // Function Medals.Medals_C.NoDefaultFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

