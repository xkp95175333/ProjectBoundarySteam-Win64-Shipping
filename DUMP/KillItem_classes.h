// WidgetBlueprintGeneratedClass KillItem.KillItem_C
// Size: 0x3dc (Inherited: 0x270)
struct UKillItem_C : UPBWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* FadeOutAnim; // 0x278(0x08)
	struct UWidgetAnimation* AnimOpacity; // 0x280(0x08)
	struct UImage* Image_58; // 0x288(0x08)
	struct UImage* Image_Causer; // 0x290(0x08)
	struct UImage* Image_Instigator; // 0x298(0x08)
	struct UImage* Image_Skeleton; // 0x2a0(0x08)
	struct USizeBox* SizeBox_1; // 0x2a8(0x08)
	struct UTextBlock* Text_Deceased; // 0x2b0(0x08)
	struct UTextBlock* Text_Killer; // 0x2b8(0x08)
	float NowPositionY; // 0x2c0(0x04)
	int32_t Position; // 0x2c4(0x04)
	bool bFade; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FSlateColor MyColor; // 0x2d0(0x28)
	struct FSlateColor EnemyColor; // 0x2f8(0x28)
	struct FSlateColor FriendColor; // 0x320(0x28)
	struct UKillList_C* father; // 0x348(0x08)
	struct FTimerHandle WaitForFadeTimer; // 0x350(0x08)
	struct FTimerHandle WaitingForReset; // 0x358(0x08)
	struct FSlateColor DefalutColor; // 0x360(0x28)
	struct FSlateColor ED; // 0x388(0x28)
	struct FSlateColor FD; // 0x3b0(0x28)
	float Hight; // 0x3d8(0x04)

	void UpdateColor(); // Function KillItem.KillItem_C.UpdateColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitPlayerEnterInfo(struct APBPlayerState* PBPlayerState, bool Enter); // Function KillItem.KillItem_C.InitPlayerEnterInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ConfigColor(struct APBPlayerState* InKillerPlayerState, struct APBPlayerState* InDeceasedPlayerState); // Function KillItem.KillItem_C.ConfigColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ConfigName(struct APBPlayerState* KillerPlayerState, struct APBPlayerState* DeceasedPlayerState); // Function KillItem.KillItem_C.ConfigName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitKillItem(struct APBPlayerState* Killer, struct APBPlayerState* Deceased, struct UDamageType* DamageType, enum class EPBHitZone HitZone, struct UTexture* Icon, struct UTextureRenderTarget2D* RenderTarget); // Function KillItem.KillItem_C.InitKillItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ConfigIcon(struct UDamageType* DamageType, struct UTexture* Icon, struct UTextureRenderTarget2D* RenderTarget); // Function KillItem.KillItem_C.ConfigIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ConfigKillType(enum class EPBHitZone HitZone); // Function KillItem.KillItem_C.ConfigKillType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function KillItem.KillItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Fade(); // Function KillItem.KillItem_C.Fade // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function KillItem.KillItem_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void FadeOut(); // Function KillItem.KillItem_C.FadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Reset(); // Function KillItem.KillItem_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void WidgetAnimationEvt_FadeOutAnim_K2Node_WidgetAnimationEvent_1(); // Function KillItem.KillItem_C.WidgetAnimationEvt_FadeOutAnim_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function KillItem.KillItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(); // Function KillItem.KillItem_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_KillItem(int32_t EntryPoint); // Function KillItem.KillItem_C.ExecuteUbergraph_KillItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

