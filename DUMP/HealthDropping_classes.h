// WidgetBlueprintGeneratedClass HealthDropping.HealthDropping_C
// Size: 0x2a4 (Inherited: 0x268)
struct UHealthDropping_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Flashonce; // 0x270(0x08)
	struct UImage* Down; // 0x278(0x08)
	struct UImage* HitIndicator; // 0x280(0x08)
	struct UImage* Left; // 0x288(0x08)
	struct UImage* Right; // 0x290(0x08)
	struct UImage* Up; // 0x298(0x08)
	float MoveUnit; // 0x2a0(0x04)

	struct FLinearColor Get_HitIndicator_ColorAndOpacity_1(); // Function HealthDropping.HealthDropping_C.Get_HitIndicator_ColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void weaponLimit(); // Function HealthDropping.HealthDropping_C.weaponLimit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MoveAimPoint(); // Function HealthDropping.HealthDropping_C.MoveAimPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HealthDropping.HealthDropping_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function HealthDropping.HealthDropping_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_HealthDropping(int32_t EntryPoint); // Function HealthDropping.HealthDropping_C.ExecuteUbergraph_HealthDropping // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

