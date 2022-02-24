// WidgetBlueprintGeneratedClass Customize.Customize_C
// Size: 0x498 (Inherited: 0x3d8)
struct UCustomize_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UVerticalBox* DetailPanel; // 0x3e0(0x08)
	struct UPBWidgetSwitcher* MainWidgetSwitcher; // 0x3e8(0x08)
	struct UUMG_Customize_ItemPanel_C* UMG_Customize_ItemPanel; // 0x3f0(0x08)
	struct UUMG_Customize_OrnamentPanel_C* UMG_Customize_OrnamentPanel; // 0x3f8(0x08)
	struct UUMG_Customize_WeaponIntro_C* UMG_Customize_WeaponIntro; // 0x400(0x08)
	struct UUMG_Customize_SkinPanel_C* UMG_Customize_WeaponSkinPanel; // 0x408(0x08)
	struct UUMG_UnlockPoints_C* UMG_UnlockPoints; // 0x410(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x418(0x08)
	struct UUMG_Widget_MainTitle_C* UMG_Widget_MainTitle; // 0x420(0x08)
	struct UUMG_Widget_MenuTitleSub_C* UMG_Widget_MenuTitleSub; // 0x428(0x08)
	struct UUMG_Widget_SmallBaseTabSwitcher_C* UMG_Widget_SmallBaseTabSwitcher; // 0x430(0x08)
	struct FName RoleId; // 0x438(0x08)
	int32_t CurrentMenuLevel; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UPBCustomManager_BP_C* CustomManager; // 0x448(0x08)
	float ScrollAnimTimeToAvoidClicked; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct TArray<struct UUMG_Customize_Base_C*> EntryPath; // 0x458(0x10)
	bool bEditSkinMode; // 0x468(0x01)
	bool bEnableEditWeaponSkin; // 0x469(0x01)
	bool bWeaponPartSkinMode; // 0x46a(0x01)
	bool bInOverviewMode; // 0x46b(0x01)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct TArray<struct FText> TitleText; // 0x470(0x10)
	struct FRotator NoneUIOverViewRotation; // 0x480(0x0c)
	struct FVector NoneUIOverViewCamLocaction; // 0x48c(0x0c)

	void InitWeaponOrnamentsPanel(struct UUMG_Widget_Customize_PanelBase_C* InPanelWidget, struct UUMG_Customize_Base_C* Entry, struct FText Title); // Function Customize.Customize_C.InitWeaponOrnamentsPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Skin Intro Info(struct FName InItemID, struct FName InRoleID, struct FName InWeaponId); // Function Customize.Customize_C.Set Skin Intro Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Customize.Customize_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DisableTestWeapon(); // Function Customize.Customize_C.DisableTestWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnableTestWeapon(); // Function Customize.Customize_C.EnableTestWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DoBack(); // Function Customize.Customize_C.DoBack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetWeaponPartIntroInfo(bool ChangingSlot, struct FName InItemID, struct FName InRoleID, struct FName InWeaponId, enum class EPBSlotType InSlotType, enum class EPBPartSlotType InPartSlotType); // Function Customize.Customize_C.SetWeaponPartIntroInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Weapon Intro Info(bool ChangingSlot, struct FName InItemID, struct FName InRoleID, struct FName InWeaponId, enum class EPBSlotType InSlotType); // Function Customize.Customize_C.Set Weapon Intro Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExitOverviewMode(); // Function Customize.Customize_C.ExitOverviewMode // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterOverviewMode(); // Function Customize.Customize_C.EnterOverviewMode // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ToggleOverviewMode(); // Function Customize.Customize_C.ToggleOverviewMode // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExitWeaponPartSkinMode(); // Function Customize.Customize_C.ExitWeaponPartSkinMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterWeaponPartSkinMode(); // Function Customize.Customize_C.EnterWeaponPartSkinMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DisableWeaponDetail(); // Function Customize.Customize_C.DisableWeaponDetail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnableWeaponDetail(); // Function Customize.Customize_C.EnableWeaponDetail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DisableWeaponSkinPanel_Internal(); // Function Customize.Customize_C.DisableWeaponSkinPanel_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnableWeaponSkinPanel_Internal(); // Function Customize.Customize_C.EnableWeaponSkinPanel_Internal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DisableEditWeaponSkin(); // Function Customize.Customize_C.DisableEditWeaponSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnableEditWeaponSkin(); // Function Customize.Customize_C.EnableEditWeaponSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitWeaponSkinPanel(struct UUMG_Widget_Customize_PanelBase_C* InPanelWidget, struct UUMG_Customize_Base_C* Entry, struct FText Title); // Function Customize.Customize_C.InitWeaponSkinPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RefreshCurrentLevelWidgets(); // Function Customize.Customize_C.RefreshCurrentLevelWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EnterTheLevel(int32_t LevelIndex, struct UUMG_Widget_Customize_PanelBase_C* InPanelWidget, struct FText Title, struct UUMG_Customize_Base_C* Entry); // Function Customize.Customize_C.EnterTheLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Customize.Customize_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Init(); // Function Customize.Customize_C.Init // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function Customize.Customize_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function Customize.Customize_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function Customize.Customize_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void MouseLeft(); // Function Customize.Customize_C.MouseLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_Widget_SmallBaseTabSwitcher_K2Node_ComponentBoundEvent_0_OnTabSwitched__DelegateSignature(int32_t InTabIndex, int32_t OutTabIndex); // Function Customize.Customize_C.BndEvt__UMG_Widget_SmallBaseTabSwitcher_K2Node_ComponentBoundEvent_0_OnTabSwitched__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Customize(int32_t EntryPoint); // Function Customize.Customize_C.ExecuteUbergraph_Customize // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

