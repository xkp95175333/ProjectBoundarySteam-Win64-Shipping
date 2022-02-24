// WidgetBlueprintGeneratedClass GameEffect_PlayerIcon.GameEffect_PlayerIcon_C
// Size: 0x310 (Inherited: 0x298)
struct UGameEffect_PlayerIcon_C : UPBTopPlayerinfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UImage* Icon_BG; // 0x2a0(0x08)
	struct UOverlay* Icon_Box; // 0x2a8(0x08)
	struct UImage* NormalIcon; // 0x2b0(0x08)
	struct UImage* UnableIcon; // 0x2b8(0x08)
	bool IsLeader; // 0x2c0(0x01)
	bool IsTeamate; // 0x2c1(0x01)
	bool IsFriend; // 0x2c2(0x01)
	bool IsCountTimePause; // 0x2c3(0x01)
	struct FLinearColor Yellow_Linear; // 0x2c4(0x10)
	struct FLinearColor Grey_Linear; // 0x2d4(0x10)
	float CountTime; // 0x2e4(0x04)
	float CountTimeAnim; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UMaterialInstanceDynamic* NormalIconDynamic; // 0x2f0(0x08)
	struct UMaterialInstanceDynamic* UnableIconDynamic; // 0x2f8(0x08)
	int32_t Index; // 0x300(0x04)
	enum class EPBAllyIconState AllyStatus; // 0x304(0x01)
	enum class EPBHostileIconState EnemyStatus; // 0x305(0x01)
	char pad_306[0x2]; // 0x306(0x02)
	struct UTexture2D* Icon_Texture; // 0x308(0x08)

	void Get Icon Texture(struct FName RoleId, struct UTexture2D* Image); // Function GameEffect_PlayerIcon.GameEffect_PlayerIcon_C.Get Icon Texture // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void Construct(); // Function GameEffect_PlayerIcon.GameEffect_PlayerIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetNullPlayerInfo(); // Function GameEffect_PlayerIcon.GameEffect_PlayerIcon_C.K2_SetNullPlayerInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetFightingStateImage(); // Function GameEffect_PlayerIcon.GameEffect_PlayerIcon_C.K2_SetFightingStateImage // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GameEffect_PlayerIcon(int32_t EntryPoint); // Function GameEffect_PlayerIcon.GameEffect_PlayerIcon_C.ExecuteUbergraph_GameEffect_PlayerIcon // (Final|UbergraphFunction) // @ game+0x1556ec0
};

