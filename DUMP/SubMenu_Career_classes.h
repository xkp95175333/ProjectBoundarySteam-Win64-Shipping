// WidgetBlueprintGeneratedClass SubMenu_Career.SubMenu_Career_C
// Size: 0x430 (Inherited: 0x3d8)
struct USubMenu_Career_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* CardFlash; // 0x3e0(0x08)
	struct UWidgetAnimation* MainFadeIn; // 0x3e8(0x08)
	struct UUMG_RoleDetail_Panel_C* UMG_RoleDetail_Panel; // 0x3f0(0x08)
	struct UUMG_Widget_Role_C* UMG_Widget_Role_Fixer; // 0x3f8(0x08)
	struct UUMG_Widget_Role_C* UMG_Widget_Role_Leeway; // 0x400(0x08)
	struct UUMG_Widget_Role_C* UMG_Widget_Role_Probe; // 0x408(0x08)
	struct UUMG_Widget_Role_C* UMG_Widget_Role_Shielder; // 0x410(0x08)
	struct UUMG_Widget_Role_C* UMG_Widget_Role_Spiker; // 0x418(0x08)
	struct UUMG_Widget_Role_C* UMG_Widget_Role_Vodka; // 0x420(0x08)
	struct UCustomize_C* CustomizePanle; // 0x428(0x08)

	struct UWidget* DoNavigation_FixerToProbe(enum class EUINavigation Navigation); // Function SubMenu_Career.SubMenu_Career_C.DoNavigation_FixerToProbe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct UWidget* DoNavigation_SpikerToFixer(enum class EUINavigation Navigation); // Function SubMenu_Career.SubMenu_Career_C.DoNavigation_SpikerToFixer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowWidget(); // Function SubMenu_Career.SubMenu_Career_C.ShowWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BindEvents(); // Function SubMenu_Career.SubMenu_Career_C.BindEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetRoleInfo(struct FName RoleId, bool IsLocked); // Function SubMenu_Career.SubMenu_Career_C.SetRoleInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function SubMenu_Career.SubMenu_Career_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function SubMenu_Career.SubMenu_Career_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function SubMenu_Career.SubMenu_Career_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Show(); // Function SubMenu_Career.SubMenu_Career_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function SubMenu_Career.SubMenu_Career_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void OnPressBack_2(); // Function SubMenu_Career.SubMenu_Career_C.OnPressBack_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RoleBeenClicked(struct FName RoleId); // Function SubMenu_Career.SubMenu_Career_C.RoleBeenClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_SubMenu_Career(int32_t EntryPoint); // Function SubMenu_Career.SubMenu_Career_C.ExecuteUbergraph_SubMenu_Career // (Final|UbergraphFunction) // @ game+0x1556ec0
};

