// WidgetBlueprintGeneratedClass UMG_CombatSummary_Detail_Weapon.UMG_CombatSummary_Detail_Weapon_C
// Size: 0x2f0 (Inherited: 0x268)
struct UUMG_CombatSummary_Detail_Weapon_C : UPBUserWidget {
	struct UImage* HorizontalLine; // 0x268(0x08)
	struct UImage* HorizontalLine_2; // 0x270(0x08)
	struct UImage* HorizontalLine_3; // 0x278(0x08)
	struct UImage* Image_113; // 0x280(0x08)
	struct UUMG_Weapon_MainDetail_GameTime_C* UMG_Weapon_MainDetail_GameTime; // 0x288(0x08)
	struct UUMG_Weapon_MainDetail_HeadShot_C* UMG_Weapon_MainDetail_HeadShot; // 0x290(0x08)
	struct UUMG_Weapon_MainDetail_KDRatio_C* UMG_Weapon_MainDetail_KDRatio; // 0x298(0x08)
	struct UUMG_Weapon_MainDetail_Kill_C* UMG_Weapon_MainDetail_Kill; // 0x2a0(0x08)
	struct UUMG_Weapon_SecondaryDetail_Average_C* UMG_Weapon_SecondaryDetail_Average; // 0x2a8(0x08)
	struct UUMG_Weapon_SecondaryDetail_KillDistance_C* UMG_Weapon_SecondaryDetail_KillDistance; // 0x2b0(0x08)
	struct UUMG_Weapon_SecondaryDetail_Match_C* UMG_Weapon_SecondaryDetail_Match; // 0x2b8(0x08)
	struct UUMG_Weapon_SecondaryDetail_Performance_C* UMG_Weapon_SecondaryDetail_Performance; // 0x2c0(0x08)
	struct UUMG_Weapon_SecondaryDetail_Shooting_C* UMG_Weapon_SecondaryDetail_Shooting; // 0x2c8(0x08)
	struct UImage* VertivalLine_2; // 0x2d0(0x08)
	struct UImage* VertivalLine_3; // 0x2d8(0x08)
	struct UImage* WeaponImage; // 0x2e0(0x08)
	struct UTextBlock* WeaponName; // 0x2e8(0x08)

	void ShowSecondaryDetails(struct FName WeaponID); // Function UMG_CombatSummary_Detail_Weapon.UMG_CombatSummary_Detail_Weapon_C.ShowSecondaryDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowMainDetails(struct FName WeaponID); // Function UMG_CombatSummary_Detail_Weapon.UMG_CombatSummary_Detail_Weapon_C.ShowMainDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowWeaponIcon(struct FName WeaponID); // Function UMG_CombatSummary_Detail_Weapon.UMG_CombatSummary_Detail_Weapon_C.ShowWeaponIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowDetails(struct FName InWeaponId); // Function UMG_CombatSummary_Detail_Weapon.UMG_CombatSummary_Detail_Weapon_C.ShowDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

