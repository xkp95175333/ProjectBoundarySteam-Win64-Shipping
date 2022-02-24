// WidgetBlueprintGeneratedClass TutorialHintWidget.TutorialHintWidget_C
// Size: 0x410 (Inherited: 0x3da)
struct UTutorialHintWidget_C : UPBTutorialWidget_C {
	char pad_3DA[0x6]; // 0x3da(0x06)
	struct USizeBox* ButtonSpace; // 0x3e0(0x08)
	struct UCheckBox* CheckBox_453; // 0x3e8(0x08)
	struct UPBInputTipsImage* PBInputTipsImage_504; // 0x3f0(0x08)
	struct UHorizontalBox* TargetHintLine_2; // 0x3f8(0x08)
	struct UTextBlock* TextBlock_TargetText; // 0x400(0x08)
	int32_t CurrentAchieve; // 0x408(0x04)
	int32_t TotalAchieve; // 0x40c(0x04)

	void SetHintBtnIcon(struct FName InputName); // Function TutorialHintWidget.TutorialHintWidget_C.SetHintBtnIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTargetFinish(); // Function TutorialHintWidget.TutorialHintWidget_C.SetTargetFinish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetHintText(struct FText HintText); // Function TutorialHintWidget.TutorialHintWidget_C.SetHintText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TargetIsFinish(bool IsFinish); // Function TutorialHintWidget.TutorialHintWidget_C.TargetIsFinish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResetHintInfo(); // Function TutorialHintWidget.TutorialHintWidget_C.ResetHintInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitFormat(); // Function TutorialHintWidget.TutorialHintWidget_C.InitFormat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Finish Format(); // Function TutorialHintWidget.TutorialHintWidget_C.Finish Format // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

