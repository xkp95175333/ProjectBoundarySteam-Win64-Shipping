// WidgetBlueprintGeneratedClass InGameOption_Role.InGameOption_Role_C
// Size: 0x538 (Inherited: 0x3d8)
struct UInGameOption_Role_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* HideEquipmentPanel; // 0x3e0(0x08)
	struct UTextBlock* ArmorDescription; // 0x3e8(0x08)
	struct UCard_InGameOption_C* Card_ActiveModule; // 0x3f0(0x08)
	struct UCard_Character_C* Card_Character; // 0x3f8(0x08)
	struct UCard_Character_C* Card_Character_2; // 0x400(0x08)
	struct UCard_Character_C* Card_Character_3; // 0x408(0x08)
	struct UCard_Character_C* Card_Character_4; // 0x410(0x08)
	struct UCard_Character_C* Card_Character_5; // 0x418(0x08)
	struct UCard_Character_C* Card_Character_7; // 0x420(0x08)
	struct UCard_Character_None_C* Card_Character_None; // 0x428(0x08)
	struct UCard_Character_None_C* Card_Character_None_2; // 0x430(0x08)
	struct UCard_Character_None_C* Card_Character_None_3; // 0x438(0x08)
	struct UCard_Character_None_C* Card_Character_None_4; // 0x440(0x08)
	struct UCard_Character_None_C* Card_Character_None_5; // 0x448(0x08)
	struct UCard_Character_None_C* Card_Character_None_6; // 0x450(0x08)
	struct UCard_InGameOption_C* Card_LeftPylon; // 0x458(0x08)
	struct UCard_InGameOption_C* Card_MainWeapon; // 0x460(0x08)
	struct UCard_InGameOption_C* Card_MeleeWeapon; // 0x468(0x08)
	struct UCard_InGameOption_C* Card_RightPylon; // 0x470(0x08)
	struct UCard_InGameOption_C* Card_SubWeapon; // 0x478(0x08)
	struct UTextBlock* HealthDes; // 0x480(0x08)
	struct UImage* MainImage; // 0x488(0x08)
	struct UTextBlock* MobilityDescription; // 0x490(0x08)
	struct UTextBlock* RoleClass; // 0x498(0x08)
	struct UTextBlock* RoleName; // 0x4a0(0x08)
	struct UTextBlock* Skill1Detail; // 0x4a8(0x08)
	struct UTextBlock* Skill2Detail; // 0x4b0(0x08)
	struct UTextBlock* Text_Skill1; // 0x4b8(0x08)
	struct UTextBlock* Text_Skill2; // 0x4c0(0x08)
	struct UTextBlock* TextBlock_349; // 0x4c8(0x08)
	struct UUI_MenuTitle_Small_C* TitleBoard_Sub; // 0x4d0(0x08)
	struct UUI_MenuTitle_Small_C* TitleBoard_Sub_2; // 0x4d8(0x08)
	struct UUI_MenuTitle_Small_C* TitleBoard_Sub_3; // 0x4e0(0x08)
	struct UUI_MenuTitle_Small_C* TitleBoard_Sub_4; // 0x4e8(0x08)
	struct UUMG_Style_Expandarea01_C* UMG_Style_Expandarea01; // 0x4f0(0x08)
	struct UUMG_Style_Expandarea01_C* UMG_Style_Expandarea01_127; // 0x4f8(0x08)
	struct UUMG_UnlockRequirementTips_C* UMG_UnlockRequirementTips; // 0x500(0x08)
	struct TArray<struct UCard_InGameOption_C*> InfoItems; // 0x508(0x10)
	struct FMulticastInlineDelegate RoleBeenClicked_InGameOption_Role; // 0x518(0x10)
	struct TArray<struct UCard_Character_C*> Characters; // 0x528(0x10)

	void SetInfo(struct FName InRoleID); // Function InGameOption_Role.InGameOption_Role_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function InGameOption_Role.InGameOption_Role_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnRoleButton Focus(struct FName Role ID, bool IsLocked); // Function InGameOption_Role.InGameOption_Role_C.OnRoleButton Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function InGameOption_Role.InGameOption_Role_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RoleBeenClicked(struct FName RoleId); // Function InGameOption_Role.InGameOption_Role_C.RoleBeenClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function InGameOption_Role.InGameOption_Role_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowCharaInfoDetail(); // Function InGameOption_Role.InGameOption_Role_C.ShowCharaInfoDetail // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_InGameOption_Role(int32_t EntryPoint); // Function InGameOption_Role.InGameOption_Role_C.ExecuteUbergraph_InGameOption_Role // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void RoleBeenClicked_InGameOption_Role__DelegateSignature(struct FName RoleId); // Function InGameOption_Role.InGameOption_Role_C.RoleBeenClicked_InGameOption_Role__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

