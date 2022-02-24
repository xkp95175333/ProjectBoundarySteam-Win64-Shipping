// BlueprintGeneratedClass RingMenuComponent.RingMenuComponent_C
// Size: 0xe8 (Inherited: 0xb0)
struct URingMenuComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UWB_RingMenu_C* RingMenu; // 0xb8(0x08)
	struct UUMG_Indicator_Character_C* IndicatorWillingToJoin; // 0xc0(0x08)
	struct AGAC_BP_C* GacWillingToJoin; // 0xc8(0x08)
	enum class Enum_EmojiIconType EmojiType; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct AActor* Speaker; // 0xd8(0x08)
	struct UWBP_InGame_IndicatorEmojiChild_C* EmojiChild; // 0xe0(0x08)

	void DisableRingMenu(); // Function RingMenuComponent.RingMenuComponent_C.DisableRingMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Speaking(struct FString Word, bool All?, bool SendEmojiToTeammates?, enum class Enum_EmojiIconType EmojiToSend); // Function RingMenuComponent.RingMenuComponent_C.Speaking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FString GetSelfSpeakingText(struct FString C, bool All?); // Function RingMenuComponent.RingMenuComponent_C.GetSelfSpeakingText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FunctionIndicatorIsDyingOrHitDown(struct UPBIndicator* InIndicator, bool DownOrDying); // Function RingMenuComponent.RingMenuComponent_C.FunctionIndicatorIsDyingOrHitDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsJoinTargetDyingOrHitDown(bool DownOrDying); // Function RingMenuComponent.RingMenuComponent_C.IsJoinTargetDyingOrHitDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ToggleShowRingMenu(); // Function RingMenuComponent.RingMenuComponent_C.ToggleShowRingMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CreateRingMenu(); // Function RingMenuComponent.RingMenuComponent_C.CreateRingMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_RingMenuButtonPressed(); // Function RingMenuComponent.RingMenuComponent_C.Event_RingMenuButtonPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_RingMenuButtonReleased(); // Function RingMenuComponent.RingMenuComponent_C.Event_RingMenuButtonReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_PlayMontage(struct UAnimMontage* FPMontage, struct UAnimMontage* TPMontage); // Function RingMenuComponent.RingMenuComponent_C.Event_PlayMontage // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayMontage(Multicast)(struct UAnimMontage* TPMontage); // Function RingMenuComponent.RingMenuComponent_C.PlayMontage(Multicast) // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SendChatInfo(struct AActor* Speaker, struct FText Word, bool All?, bool SendEmojiToTeammates?, enum class Enum_EmojiIconType EmojiToSend); // Function RingMenuComponent.RingMenuComponent_C.SendChatInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SendChatInfo_SERVER(struct AActor* Speaker, struct FText Word, bool All?, bool SendEmojiToTeammates?, enum class Enum_EmojiIconType EmojiToSend); // Function RingMenuComponent.RingMenuComponent_C.SendChatInfo_SERVER // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SendChatInfo_MULTICAST(struct AActor* Speaker, struct FText Word, bool All?, bool SendEmojiToTeammates?, enum class Enum_EmojiIconType EmojiToSend); // Function RingMenuComponent.RingMenuComponent_C.SendChatInfo_MULTICAST // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_RightButtonSelected(); // Function RingMenuComponent.RingMenuComponent_C.Event_RightButtonSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Event_SwitchFromationFollowMode(); // Function RingMenuComponent.RingMenuComponent_C.Event_SwitchFromationFollowMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayMontage(SERVER)(struct UAnimMontage* TPMontage); // Function RingMenuComponent.RingMenuComponent_C.PlayMontage(SERVER) // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HideRingMenu(); // Function RingMenuComponent.RingMenuComponent_C.HideRingMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RingButton1(); // Function RingMenuComponent.RingMenuComponent_C.RingButton1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RingButton2(); // Function RingMenuComponent.RingMenuComponent_C.RingButton2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RingButton3(); // Function RingMenuComponent.RingMenuComponent_C.RingButton3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RingButton4(); // Function RingMenuComponent.RingMenuComponent_C.RingButton4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RingButton5(); // Function RingMenuComponent.RingMenuComponent_C.RingButton5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RingButton6(); // Function RingMenuComponent.RingMenuComponent_C.RingButton6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RingButton7(); // Function RingMenuComponent.RingMenuComponent_C.RingButton7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RingButton8(); // Function RingMenuComponent.RingMenuComponent_C.RingButton8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_RingMenuComponent(int32_t EntryPoint); // Function RingMenuComponent.RingMenuComponent_C.ExecuteUbergraph_RingMenuComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

