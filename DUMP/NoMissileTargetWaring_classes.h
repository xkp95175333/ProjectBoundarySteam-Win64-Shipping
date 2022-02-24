// WidgetBlueprintGeneratedClass NoMissileTargetWaring.NoMissileTargetWaring_C
// Size: 0x3f0 (Inherited: 0x3c8)
struct UNoMissileTargetWaring_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x3d0(0x08)
	struct UImage* Image_NoTargeting; // 0x3d8(0x08)
	float HideTimer; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct FTimerHandle HideTimerHandle; // 0x3e8(0x08)

	void HideWarning(); // Function NoMissileTargetWaring.NoMissileTargetWaring_C.HideWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnShow(); // Function NoMissileTargetWaring.NoMissileTargetWaring_C.OnShow // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnHide(); // Function NoMissileTargetWaring.NoMissileTargetWaring_C.OnHide // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OpenOption(); // Function NoMissileTargetWaring.NoMissileTargetWaring_C.OpenOption // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CloseOption(); // Function NoMissileTargetWaring.NoMissileTargetWaring_C.CloseOption // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInitialized(); // Function NoMissileTargetWaring.NoMissileTargetWaring_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_NoMissileTargetWaring(int32_t EntryPoint); // Function NoMissileTargetWaring.NoMissileTargetWaring_C.ExecuteUbergraph_NoMissileTargetWaring // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

