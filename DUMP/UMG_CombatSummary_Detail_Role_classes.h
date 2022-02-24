// WidgetBlueprintGeneratedClass UMG_CombatSummary_Detail_Role.UMG_CombatSummary_Detail_Role_C
// Size: 0x2f0 (Inherited: 0x268)
struct UUMG_CombatSummary_Detail_Role_C : UPBUserWidget {
	struct UImage* HorizontalLine; // 0x268(0x08)
	struct UImage* HorizontalLine_2; // 0x270(0x08)
	struct UImage* HorizontalLine_3; // 0x278(0x08)
	struct UImage* Image_233; // 0x280(0x08)
	struct UTextBlock* TextBlock_RoleName; // 0x288(0x08)
	struct UUMG_Role_MainDetail_KDRatio_C* UMG_Role_MainDetail_KDRatio; // 0x290(0x08)
	struct UUMG_Role_MainDetail_Kill_C* UMG_Role_MainDetail_Kill; // 0x298(0x08)
	struct UUMG_Role_MainDetail_PlayTime_C* UMG_Role_MainDetail_PlayTime; // 0x2a0(0x08)
	struct UUMG_Role_MainDetail_WonRatio_C* UMG_Role_MainDetail_WonRatio; // 0x2a8(0x08)
	struct UUMG_Role_SecondaryDetail_Average_C* UMG_Role_SecondaryDetail_Average; // 0x2b0(0x08)
	struct UUMG_Role_SecondaryDetail_Fight_C* UMG_Role_SecondaryDetail_Fight; // 0x2b8(0x08)
	struct UUMG_Role_SecondaryDetail_Game_C* UMG_Role_SecondaryDetail_Game; // 0x2c0(0x08)
	struct UUMG_Role_SecondaryDetail_Special_C* UMG_Role_SecondaryDetail_Special; // 0x2c8(0x08)
	struct UUMG_Role_SecondaryDetail_Team_C* UMG_Role_SecondaryDetail_Team; // 0x2d0(0x08)
	struct UUMG_Role_SecondaryDetail_Tenacity_C* UMG_Role_SecondaryDetail_Tenacity; // 0x2d8(0x08)
	struct UImage* VerticalLine_2; // 0x2e0(0x08)
	struct UImage* VerticalLine_3; // 0x2e8(0x08)

	void ShowSecondaryDetails(struct FName RoleId); // Function UMG_CombatSummary_Detail_Role.UMG_CombatSummary_Detail_Role_C.ShowSecondaryDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowMainDetails(struct FName RoleId); // Function UMG_CombatSummary_Detail_Role.UMG_CombatSummary_Detail_Role_C.ShowMainDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Show Details(struct FName InRoleID); // Function UMG_CombatSummary_Detail_Role.UMG_CombatSummary_Detail_Role_C.Show Details // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

