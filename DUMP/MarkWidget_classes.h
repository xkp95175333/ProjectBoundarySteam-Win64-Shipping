// WidgetBlueprintGeneratedClass MarkWidget.MarkWidget_C
// Size: 0x2c1 (Inherited: 0x268)
struct UMarkWidget_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UTextBlock* Distance; // 0x270(0x08)
	struct UTextBlock* M; // 0x278(0x08)
	struct UVerticalBox* TargetDistance; // 0x280(0x08)
	struct UImage* TargetImage; // 0x288(0x08)
	struct UTextBlock* TargetNote; // 0x290(0x08)
	struct AActor* MarkActor; // 0x298(0x08)
	float Lenghth; // 0x2a0(0x04)
	struct FVector MarkLocation; // 0x2a4(0x0c)
	struct TArray<struct FMarkType> MarkType; // 0x2b0(0x10)
	bool bEnermy; // 0x2c0(0x01)

	void IsSansor(); // Function MarkWidget.MarkWidget_C.IsSansor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsMine(); // Function MarkWidget.MarkWidget_C.IsMine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void IsPawn(); // Function MarkWidget.MarkWidget_C.IsPawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRep_MarkActor(); // Function MarkWidget.MarkWidget_C.OnRep_MarkActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetMark(struct FMarkType MarkType); // Function MarkWidget.MarkWidget_C.SetMark // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void MULTIMARK(); // Function MarkWidget.MarkWidget_C.MULTIMARK // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function MarkWidget.MarkWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MarkWidget.MarkWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_MarkWidget(int32_t EntryPoint); // Function MarkWidget.MarkWidget_C.ExecuteUbergraph_MarkWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

