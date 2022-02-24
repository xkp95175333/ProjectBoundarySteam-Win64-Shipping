// WidgetBlueprintGeneratedClass Card_Profile_InfoBox.Card_Profile_InfoBox_C
// Size: 0x2fd (Inherited: 0x268)
struct UCard_Profile_InfoBox_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Image_BG; // 0x270(0x08)
	struct UTextBlock* Info; // 0x278(0x08)
	struct UWidgetSwitcher* InfoSwitcher; // 0x280(0x08)
	struct UTextBlock* Title; // 0x288(0x08)
	struct FText TitleText; // 0x290(0x18)
	struct FText InfoText; // 0x2a8(0x18)
	bool IsHaveInfo; // 0x2c0(0x01)
	bool IsHaveBG; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
	struct FSlateColor InfoColor; // 0x2c8(0x28)
	struct FName DataStatKey; // 0x2f0(0x08)
	int32_t DecimalPlaces; // 0x2f8(0x04)
	bool bIsPercentage; // 0x2fc(0x01)

	void RefreshRoleProfileInfo(struct FName InRoleID); // Function Card_Profile_InfoBox.Card_Profile_InfoBox_C.RefreshRoleProfileInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshUserProfileInfo(); // Function Card_Profile_InfoBox.Card_Profile_InfoBox_C.RefreshUserProfileInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Card_Profile_InfoBox.Card_Profile_InfoBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Card_Profile_InfoBox(int32_t EntryPoint); // Function Card_Profile_InfoBox.Card_Profile_InfoBox_C.ExecuteUbergraph_Card_Profile_InfoBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

