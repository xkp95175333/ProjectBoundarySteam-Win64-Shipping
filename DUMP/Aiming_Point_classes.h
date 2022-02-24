// WidgetBlueprintGeneratedClass Aiming_Point.Aiming_Point_C
// Size: 0x332 (Inherited: 0x268)
struct UAiming_Point_C : UPBWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* HideShow; // 0x270(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x278(0x08)
	struct UImage* Cross_Center; // 0x280(0x08)
	struct UImage* Cross_L; // 0x288(0x08)
	struct UImage* Cross_R; // 0x290(0x08)
	struct UImage* Cross_T; // 0x298(0x08)
	struct UImage* Cross_U; // 0x2a0(0x08)
	struct UCanvasPanel* Crosshair_Main_GE; // 0x2a8(0x08)
	struct UImage* Float_Circle; // 0x2b0(0x08)
	float MoveUnit; // 0x2b8(0x04)
	float SpreadModify; // 0x2bc(0x04)
	struct FVector WeaponSwayTranslation; // 0x2c0(0x0c)
	struct FRotator WeaponSwayRotation; // 0x2cc(0x0c)
	float DeltaTimeX; // 0x2d8(0x04)
	float FireIndicateReticleScale; // 0x2dc(0x04)
	struct FVector2D BR; // 0x2e0(0x08)
	struct FVector2D TL; // 0x2e8(0x08)
	float ADSIndicateReticleScale; // 0x2f0(0x04)
	float MoveIndicator; // 0x2f4(0x04)
	struct UMaterialInstanceDynamic* MeterPitch; // 0x2f8(0x08)
	float FOVScaler; // 0x300(0x04)
	float Spread; // 0x304(0x04)
	struct APBWeapon* Current Weapon; // 0x308(0x08)
	float New Force Input; // 0x310(0x04)
	float TargetingFOVScler; // 0x314(0x04)
	float Pull Factor; // 0x318(0x04)
	float TargetForce; // 0x31c(0x04)
	struct FTimerHandle TimerHandle_FadeOut; // 0x320(0x08)
	struct UMaterialInstanceDynamic* SpreadCircleMid; // 0x328(0x08)
	bool IsTargeting; // 0x330(0x01)
	bool IsCaching; // 0x331(0x01)

	void Fade(); // Function Aiming_Point.Aiming_Point_C.Fade // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FadeIn(); // Function Aiming_Point.Aiming_Point_C.FadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FadeOut(); // Function Aiming_Point.Aiming_Point_C.FadeOut // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddForce_GE(); // Function Aiming_Point.Aiming_Point_C.AddForce_GE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetAimPointNewForce(); // Function Aiming_Point.Aiming_Point_C.SetAimPointNewForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CrossHairMainGE_Change(struct FGeometry MyGeometry); // Function Aiming_Point.Aiming_Point_C.CrossHairMainGE_Change // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AimLeftAndRightShow(bool bShow); // Function Aiming_Point.Aiming_Point_C.AimLeftAndRightShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetOnScreenPos_Any(struct UWidget* Widget, struct FVector2D TL, struct FVector2D BR); // Function Aiming_Point.Aiming_Point_C.GetOnScreenPos_Any // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetOnScreenPos(struct UUserWidget* Widget, struct FVector2D TL, struct FVector2D BR); // Function Aiming_Point.Aiming_Point_C.GetOnScreenPos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Aiming_Point.Aiming_Point_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function Aiming_Point.Aiming_Point_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Aiming_Point(int32_t EntryPoint); // Function Aiming_Point.Aiming_Point_C.ExecuteUbergraph_Aiming_Point // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

