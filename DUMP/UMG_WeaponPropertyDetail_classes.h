// WidgetBlueprintGeneratedClass UMG_WeaponPropertyDetail.UMG_WeaponPropertyDetail_C
// Size: 0x310 (Inherited: 0x268)
struct UUMG_WeaponPropertyDetail_C : UPBUserWidget {
	struct UVerticalBox* AddList; // 0x268(0x08)
	struct UVerticalBox* SubList; // 0x270(0x08)
	struct UUMG_WeaponProperty_Add_C* WeaponIntro_Add; // 0x278(0x08)
	struct UUMG_WeaponProperty_Add_C* WeaponIntro_Add_2; // 0x280(0x08)
	struct UUMG_WeaponProperty_Add_C* WeaponIntro_Add_3; // 0x288(0x08)
	struct UUMG_WeaponProperty_Add_C* WeaponIntro_Add_4; // 0x290(0x08)
	struct UWeaponIntro_ProgressBar_C* WeaponIntro_ProgressBar; // 0x298(0x08)
	struct UWeaponIntro_ProgressBar_C* WeaponIntro_ProgressBar_2; // 0x2a0(0x08)
	struct UWeaponIntro_ProgressBar_C* WeaponIntro_ProgressBar_3; // 0x2a8(0x08)
	struct UWeaponIntro_ProgressBar_C* WeaponIntro_ProgressBar_4; // 0x2b0(0x08)
	struct UWeaponIntro_ProgressBar_C* WeaponIntro_ProgressBar_5; // 0x2b8(0x08)
	struct UWeaponIntro_ProgressBar_C* WeaponIntro_ProgressBar_6; // 0x2c0(0x08)
	struct UWeaponIntro_ProgressBar_C* WeaponIntro_ProgressBar_7; // 0x2c8(0x08)
	struct UUMG_WeaponProperty_Sub_C* WeaponIntro_Sub; // 0x2d0(0x08)
	struct UUMG_WeaponProperty_Sub_C* WeaponIntro_Sub_2; // 0x2d8(0x08)
	struct UUMG_WeaponProperty_Sub_C* WeaponIntro_Sub_3; // 0x2e0(0x08)
	struct UUMG_WeaponProperty_Sub_C* WeaponIntro_Sub_4; // 0x2e8(0x08)
	struct UVerticalBox* WeaponPartEffect; // 0x2f0(0x08)
	struct TArray<float> Saved; // 0x2f8(0x10)
	struct UCurveFloat* PointCurve; // 0x308(0x08)

	void Refresh Sub Property(struct FPBWeaponPart_DisplayInfo InWeaponPartDisplayInfo); // Function UMG_WeaponPropertyDetail.UMG_WeaponPropertyDetail_C.Refresh Sub Property // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Refresh Add Property(struct FPBWeaponPart_DisplayInfo InWeaponPartDisplayInfo); // Function UMG_WeaponPropertyDetail.UMG_WeaponPropertyDetail_C.Refresh Add Property // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Info(bool ChangingSlot, struct FName InItemID, bool IsWeaponPart); // Function UMG_WeaponPropertyDetail.UMG_WeaponPropertyDetail_C.Set Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

