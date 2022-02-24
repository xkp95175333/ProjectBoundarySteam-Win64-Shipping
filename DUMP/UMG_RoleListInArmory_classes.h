// WidgetBlueprintGeneratedClass UMG_RoleListInArmory.UMG_RoleListInArmory_C
// Size: 0x2e0 (Inherited: 0x260)
struct UUMG_RoleListInArmory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_ShortRoleInfo_C* UMG_SingleRoleInArmory_1; // 0x268(0x08)
	struct UUMG_ShortRoleInfo_C* UMG_SingleRoleInArmory_2; // 0x270(0x08)
	struct UUMG_ShortRoleInfo_C* UMG_SingleRoleInArmory_3; // 0x278(0x08)
	struct FMulticastInlineDelegate Btn_0_Clicked; // 0x280(0x10)
	struct FMulticastInlineDelegate Btn_1_Clicked; // 0x290(0x10)
	struct FMulticastInlineDelegate Btn_2_Clicked; // 0x2a0(0x10)
	struct FMulticastInlineDelegate Btn_0_Hoverd; // 0x2b0(0x10)
	struct FMulticastInlineDelegate Btn_1_Hoverd; // 0x2c0(0x10)
	struct FMulticastInlineDelegate Btn_2_Hoverd; // 0x2d0(0x10)

	void AlterVisability(bool Visable, struct UUMG_ShortRoleInfo_C* UMG_SingleRoleInArmory); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.AlterVisability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PickButton(bool Select_Btn_1, bool Select_Btn_2, bool Select_Btn_3); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.PickButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_0_K2Node_ComponentBoundEvent_1_Btn_Clicked__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_0_K2Node_ComponentBoundEvent_1_Btn_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_1_K2Node_ComponentBoundEvent_2_Btn_Clicked__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_1_K2Node_ComponentBoundEvent_2_Btn_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_2_K2Node_ComponentBoundEvent_3_Btn_Clicked__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_2_K2Node_ComponentBoundEvent_3_Btn_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_0_K2Node_ComponentBoundEvent_0_Btn_Hoverd__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_0_K2Node_ComponentBoundEvent_0_Btn_Hoverd__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_1_K2Node_ComponentBoundEvent_4_Btn_Hoverd__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_1_K2Node_ComponentBoundEvent_4_Btn_Hoverd__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_2_K2Node_ComponentBoundEvent_5_Btn_Hoverd__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.BndEvt__UMG_RoleListInArmory_UMG_SingleRoleInArmory_2_K2Node_ComponentBoundEvent_5_Btn_Hoverd__DelegateSignature // (BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_RoleListInArmory(int32_t EntryPoint); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.ExecuteUbergraph_UMG_RoleListInArmory // (Final|UbergraphFunction) // @ game+0x1556ec0
	void Btn_2_Hoverd__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.Btn_2_Hoverd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Btn_1_Hoverd__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.Btn_1_Hoverd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Btn_0_Hoverd__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.Btn_0_Hoverd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Btn_2_Clicked__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.Btn_2_Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Btn_1_Clicked__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.Btn_1_Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Btn_0_Clicked__DelegateSignature(); // Function UMG_RoleListInArmory.UMG_RoleListInArmory_C.Btn_0_Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

