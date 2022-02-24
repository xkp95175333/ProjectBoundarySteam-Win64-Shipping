// WidgetBlueprintGeneratedClass TutorialHintPoint.TutorialHintPoint_C
// Size: 0x310 (Inherited: 0x268)
struct UTutorialHintPoint_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x270(0x08)
	struct UTextBlock* Distance_2; // 0x278(0x08)
	struct UImage* Image_100; // 0x280(0x08)
	struct UImage* TargetImage_2; // 0x288(0x08)
	struct UVerticalBox* TargetInfo_2; // 0x290(0x08)
	struct UTextBlock* TargetNote_2; // 0x298(0x08)
	struct UTextBlock* TextBlock_m; // 0x2a0(0x08)
	struct UStaticMeshComponent* TargetMesh; // 0x2a8(0x08)
	bool HasTarget; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FVector2D BackTranslazation; // 0x2b4(0x08)
	float Lenghth; // 0x2bc(0x04)
	bool NewVar_1; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FSlateColor  Color; // 0x2c8(0x28)
	struct FText HintText; // 0x2f0(0x18)
	struct AActor* TargetActor; // 0x308(0x08)

	void Set Hint Text(struct FText HintText); // Function TutorialHintPoint.TutorialHintPoint_C.Set Hint Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetHintHidden(); // Function TutorialHintPoint.TutorialHintPoint_C.SetHintHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetHintVisiable(); // Function TutorialHintPoint.TutorialHintPoint_C.SetHintVisiable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TickShow(struct FGeometry Geometry); // Function TutorialHintPoint.TutorialHintPoint_C.TickShow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTargetHidden(); // Function TutorialHintPoint.TutorialHintPoint_C.SetTargetHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Set Target Visiable(struct AActor* TargetActor); // Function TutorialHintPoint.TutorialHintPoint_C.Set Target Visiable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function TutorialHintPoint.TutorialHintPoint_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TutorialHintPoint.TutorialHintPoint_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TutorialHintPoint(int32_t EntryPoint); // Function TutorialHintPoint.TutorialHintPoint_C.ExecuteUbergraph_TutorialHintPoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

