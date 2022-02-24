// WidgetBlueprintGeneratedClass GameEffect_GoalBoard_AreaPoint.GameEffect_GoalBoard_AreaPoint_C
// Size: 0x2c0 (Inherited: 0x268)
struct UGameEffect_GoalBoard_AreaPoint_C : UPBAreaPointWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UGameEffect_AreaPointTips_C* GameEffect_AreaPointTips; // 0x270(0x08)
	struct UGameEffect_AreaPointTips_C* GameEffect_AreaPointTips_2; // 0x278(0x08)
	struct UGameEffect_AreaPointTips_C* GameEffect_AreaPointTips_3; // 0x280(0x08)
	struct UImage* Image_69; // 0x288(0x08)
	struct UHorizontalBox* Point_Board; // 0x290(0x08)
	struct UHorizontalBox* Preview; // 0x298(0x08)
	struct UImage* PointImage; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* PointDynamic; // 0x2a8(0x08)
	struct UTextBlock* PointText; // 0x2b0(0x08)
	struct UGameEffect_AreaPointTips_C* AreaPointTipsWidget; // 0x2b8(0x08)

	void AddChildAreaPointTips(struct UGameEffect_AreaPointTips_C* CaturableZoneWidget); // Function GameEffect_GoalBoard_AreaPoint.GameEffect_GoalBoard_AreaPoint_C.AddChildAreaPointTips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function GameEffect_GoalBoard_AreaPoint.GameEffect_GoalBoard_AreaPoint_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function GameEffect_GoalBoard_AreaPoint.GameEffect_GoalBoard_AreaPoint_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function GameEffect_GoalBoard_AreaPoint.GameEffect_GoalBoard_AreaPoint_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_GameEffect_GoalBoard_AreaPoint(int32_t EntryPoint); // Function GameEffect_GoalBoard_AreaPoint.GameEffect_GoalBoard_AreaPoint_C.ExecuteUbergraph_GameEffect_GoalBoard_AreaPoint // (Final|UbergraphFunction) // @ game+0x1556ec0
};

