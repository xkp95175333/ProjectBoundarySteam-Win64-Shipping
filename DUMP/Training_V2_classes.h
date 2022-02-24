// WidgetBlueprintGeneratedClass Training_V2.Training_V2_C
// Size: 0x499 (Inherited: 0x3d8)
struct UTraining_V2_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UCard_Training_Major_C* Card_AdvancedCombat; // 0x3e0(0x08)
	struct UCard_Training_Major_C* Card_BasicCombat; // 0x3e8(0x08)
	struct UCard_Training_Major_C* Card_BasicMove; // 0x3f0(0x08)
	struct UCard_Training_Minor_C* Card_FORMATIONMODE; // 0x3f8(0x08)
	struct UCard_Training_Minor_C* Card_FormationTeam; // 0x400(0x08)
	struct UCard_Training_Major_C* Card_Training_Major; // 0x408(0x08)
	struct UCard_Training_Major_C* Card_Training_Major_2; // 0x410(0x08)
	struct UCard_Training_Major_C* Card_Training_Major_3; // 0x418(0x08)
	struct UCard_Training_Mission_C* Card_TrainingMIsisons; // 0x420(0x08)
	struct UCard_Training_Mission_C* Card_TrainingMIsisons_C_2; // 0x428(0x08)
	struct UCard_Training_Mission_C* Card_TrainingMIsisons_C_3; // 0x430(0x08)
	struct UImage* EditGradualMask; // 0x438(0x08)
	struct UHorizontalBox* HorizontalBox_BasicTrain; // 0x440(0x08)
	struct UHorizontalBox* HorizontalBox_Formation_tutorial_video; // 0x448(0x08)
	struct UHorizontalBox* HorizontalBox_Role_tutorial_video; // 0x450(0x08)
	struct UTextBlock* LevelCount; // 0x458(0x08)
	struct UTextBlock* LevelName; // 0x460(0x08)
	struct UUI_MenuTitle_Small_C* UI_MenuTitle_Small; // 0x468(0x08)
	struct UUI_MenuTitle_Small_C* UI_MenuTitle_Small_2; // 0x470(0x08)
	struct UUI_MenuTitle_Small_C* UI_MenuTitle_Small_3; // 0x478(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x480(0x08)
	struct UUMG_Widget_MainTitle_C* UMG_Widget_MainTitle; // 0x488(0x08)
	struct UUMG_Widget_MenuTitleSub_C* UMG_Widget_MenuTitleSub; // 0x490(0x08)
	bool IsPS4; // 0x498(0x01)

	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Training_V2.Training_V2_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshIntroduce(struct FText LevelCount, struct FText LevelName); // Function Training_V2.Training_V2_C.RefreshIntroduce // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetStartTrainingLock(bool IsLock); // Function Training_V2.Training_V2_C.SetStartTrainingLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitFocus(); // Function Training_V2.Training_V2_C.InitFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Training_V2.Training_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Show(); // Function Training_V2.Training_V2_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Training_V2.Training_V2_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Training_V2.Training_V2_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Training_V2(int32_t EntryPoint); // Function Training_V2.Training_V2_C.ExecuteUbergraph_Training_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

