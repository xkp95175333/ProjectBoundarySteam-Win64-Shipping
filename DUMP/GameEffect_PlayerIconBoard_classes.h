// WidgetBlueprintGeneratedClass GameEffect_PlayerIconBoard.GameEffect_PlayerIconBoard_C
// Size: 0x298 (Inherited: 0x268)
struct UGameEffect_PlayerIconBoard_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUMG_TopAllyPlayerIcon_C* AllyPlayerIcon; // 0x270(0x08)
	struct UUMG_TopEnemyPlayerIcon_C* EnemyPlayerIcon; // 0x278(0x08)
	struct UMaterialInstanceDynamic* AllyDynamic; // 0x280(0x08)
	struct UMaterialInstanceDynamic* EnemyDynamic; // 0x288(0x08)
	int32_t IconIndex; // 0x290(0x04)
	int32_t HostPlayerNum; // 0x294(0x04)

	void ExecuteUbergraph_GameEffect_PlayerIconBoard(int32_t EntryPoint); // Function GameEffect_PlayerIconBoard.GameEffect_PlayerIconBoard_C.ExecuteUbergraph_GameEffect_PlayerIconBoard // (Final|UbergraphFunction) // @ game+0x1556ec0
};

