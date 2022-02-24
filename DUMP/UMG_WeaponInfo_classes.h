// WidgetBlueprintGeneratedClass UMG_WeaponInfo.UMG_WeaponInfo_C
// Size: 0x328 (Inherited: 0x2a8)
struct UUMG_WeaponInfo_C : UPBWeaponInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UUMG_Weapon_Info_ProgressBar_C* Agility; // 0x2b0(0x08)
	struct UUMG_Weapon_Info_ProgressBar_C* Aim; // 0x2b8(0x08)
	struct UUMG_Weapon_Info_ProgressBar_C* CAPACITY; // 0x2c0(0x08)
	struct UUMG_Weapon_Info_ProgressBar_C* Damage; // 0x2c8(0x08)
	struct UUMG_Weapon_Info_ProgressBar_C* EmptyReload; // 0x2d0(0x08)
	struct UUMG_Weapon_Info_ProgressBar_C* Equip; // 0x2d8(0x08)
	struct UUMG_Weapon_Info_ProgressBar_C* HIP; // 0x2e0(0x08)
	struct UUMG_Weapon_Info_ProgressBar_C* Rate; // 0x2e8(0x08)
	struct UUMG_Weapon_Info_ProgressBar_C* Recoil; // 0x2f0(0x08)
	struct UUMG_Weapon_Info_ProgressBar_C* Reload; // 0x2f8(0x08)
	struct UUMG_Weapon_Info_ProgressBar_C* Velocity; // 0x300(0x08)
	struct UTextBlock* WeaponNameText; // 0x308(0x08)
	struct UCurveFloat* PointCurve; // 0x310(0x08)
	struct TArray<float> Saved; // 0x318(0x10)

	void GetWeaponInfo(struct TArray<float> WeaponInfoArray); // Function UMG_WeaponInfo.UMG_WeaponInfo_C.GetWeaponInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SetWeaponInfo(); // Function UMG_WeaponInfo.UMG_WeaponInfo_C.K2_SetWeaponInfo // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_WeaponInfo.UMG_WeaponInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void CustomEvent_1(); // Function UMG_WeaponInfo.UMG_WeaponInfo_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_WeaponInfo(int32_t EntryPoint); // Function UMG_WeaponInfo.UMG_WeaponInfo_C.ExecuteUbergraph_UMG_WeaponInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

