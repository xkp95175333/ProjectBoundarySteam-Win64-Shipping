// WidgetBlueprintGeneratedClass UMG_RoleLevel.UMG_RoleLevel_C
// Size: 0x2c8 (Inherited: 0x280)
struct UUMG_RoleLevel_C : UPBSingleRoleInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UButton* CareerBtn; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image_2; // 0x298(0x08)
	struct UImage* Image_6; // 0x2a0(0x08)
	struct UImage* Image_7; // 0x2a8(0x08)
	struct UImage* Image_8; // 0x2b0(0x08)
	struct UImage* Image_357; // 0x2b8(0x08)
	struct UTextBlock* LevelNum; // 0x2c0(0x08)

	void Get User Profile Data(struct FName RoleId, struct FName DataKey, float Value); // Function UMG_RoleLevel.UMG_RoleLevel_C.Get User Profile Data // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Get Role Id By Name(enum class EPBRoleName RoleName, struct FName RoleId); // Function UMG_RoleLevel.UMG_RoleLevel_C.Get Role Id By Name // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshLevelByID(struct FName RoleId); // Function UMG_RoleLevel.UMG_RoleLevel_C.RefreshLevelByID // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetRoleInfo(); // Function UMG_RoleLevel.UMG_RoleLevel_C.K2_SetRoleInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_RoleLevel(int32_t EntryPoint); // Function UMG_RoleLevel.UMG_RoleLevel_C.ExecuteUbergraph_UMG_RoleLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

