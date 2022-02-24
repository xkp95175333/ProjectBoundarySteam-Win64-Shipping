// WidgetBlueprintGeneratedClass SubMenu_Gallary.SubMenu_Gallary_C
// Size: 0x418 (Inherited: 0x3d8)
struct USubMenu_Gallary_C : UMainMenuWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UPBButton* AntiFocus; // 0x3e0(0x08)
	struct UImage* Image; // 0x3e8(0x08)
	struct UImage* Image_2; // 0x3f0(0x08)
	struct UImage* Image_3; // 0x3f8(0x08)
	struct UImage* Image_88; // 0x400(0x08)
	struct UScrollBox* MainScrollBox; // 0x408(0x08)
	float WaitOperationTime; // 0x410(0x04)
	float TargetScroll; // 0x414(0x04)

	struct UWidget* Do Custom Navigation 0(enum class EUINavigation Navigation); // Function SubMenu_Gallary.SubMenu_Gallary_C.Do Custom Navigation 0 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HandleAutoScroll(); // Function SubMenu_Gallary.SubMenu_Gallary_C.HandleAutoScroll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowIn(); // Function SubMenu_Gallary.SubMenu_Gallary_C.ShowIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowOut(); // Function SubMenu_Gallary.SubMenu_Gallary_C.ShowOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function SubMenu_Gallary.SubMenu_Gallary_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void SetCustomFocus(); // Function SubMenu_Gallary.SubMenu_Gallary_C.SetCustomFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SubMenu_Gallary.SubMenu_Gallary_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_SubMenu_Gallary(int32_t EntryPoint); // Function SubMenu_Gallary.SubMenu_Gallary_C.ExecuteUbergraph_SubMenu_Gallary // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

