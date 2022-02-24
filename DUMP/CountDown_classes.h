// WidgetBlueprintGeneratedClass CountDown.CountDown_C
// Size: 0x2d6 (Inherited: 0x268)
struct UCountDown_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Anim_VS; // 0x270(0x08)
	struct UWidgetAnimation* TextOpacity; // 0x278(0x08)
	struct UTextBlock* Text_CountDown; // 0x280(0x08)
	struct UTextBlock* TextBlock_RoundNum; // 0x288(0x08)
	struct UTextBlock* TextBlock_VS; // 0x290(0x08)
	int32_t WaitTime; // 0x298(0x04)
	float Timeline; // 0x29c(0x04)
	int32_t MaxFontSize; // 0x2a0(0x04)
	int32_t ScaleRate; // 0x2a4(0x04)
	int32_t MinFontSize; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UFont* Font; // 0x2b0(0x08)
	int32_t MyTeamNum; // 0x2b8(0x04)
	int32_t OtherTeamNum; // 0x2bc(0x04)
	int32_t TempMyTeamNum; // 0x2c0(0x04)
	int32_t TempOtherTeamNum; // 0x2c4(0x04)
	int32_t MaxMyTeamAlive; // 0x2c8(0x04)
	bool CommanderYouAreLastOneDoOnce; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	int32_t MaxOtherTeamAlive; // 0x2d0(0x04)
	bool CommanderOtherTeamLastOneDoOnce; // 0x2d4(0x01)
	bool CommanderOtherTeamMoreThanOurTeamDoOnce; // 0x2d5(0x01)

	void CommanderSoundEvent(); // Function CountDown.CountDown_C.CommanderSoundEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowVS(); // Function CountDown.CountDown_C.ShowVS // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CountDown.CountDown_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void EventVSUpdate(); // Function CountDown.CountDown_C.EventVSUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_CountDown(int32_t EntryPoint); // Function CountDown.CountDown_C.ExecuteUbergraph_CountDown // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

