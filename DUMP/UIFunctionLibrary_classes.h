// BlueprintGeneratedClass UIFunctionLibrary.UIFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UUIFunctionLibrary_C : UBlueprintFunctionLibrary {

	void ReverseResolutions(struct TArray<struct FIntPoint> In, struct UObject* __WorldContext, struct TArray<struct FIntPoint> Out); // Function UIFunctionLibrary.UIFunctionLibrary_C.ReverseResolutions // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetColor(enum class E_ColorType_UI InColorType, struct UObject* __WorldContext, struct FFPBUIColor_BP Out Row); // Function UIFunctionLibrary.UIFunctionLibrary_C.GetColor // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void ResetAnims(struct UUserWidget* Target, struct TArray<struct UWidgetAnimation*> Anims, struct UObject* __WorldContext); // Function UIFunctionLibrary.UIFunctionLibrary_C.ResetAnims // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void GetLevelImage(int32_t InLevel, struct UObject* __WorldContext, struct UTexture2D* Image); // Function UIFunctionLibrary.UIFunctionLibrary_C.GetLevelImage // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetOnlineUserText(struct FPBOnlineUserInfo ParamOnlineUserInfo, bool IsRecentPlayer, struct UObject* __WorldContext, struct FText Output); // Function UIFunctionLibrary.UIFunctionLibrary_C.GetOnlineUserText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetGradeColor(enum class EPBItemGradeType InGrade, struct UObject* __WorldContext, enum class E_ColorType_UI Color); // Function UIFunctionLibrary.UIFunctionLibrary_C.GetGradeColor // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetTextedTimeSpanAgo(struct FTimespan InTimespan, struct UObject* __WorldContext, struct FText Result); // Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextedTimeSpanAgo // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetLinearColor(enum class E_ColorType_UI InColorType, struct UObject* __WorldContext, struct FLinearColor Value); // Function UIFunctionLibrary.UIFunctionLibrary_C.GetLinearColor // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetSlateColor(enum class E_ColorType_UI InColorType, struct UObject* __WorldContext, struct FSlateColor OutSlateColor); // Function UIFunctionLibrary.UIFunctionLibrary_C.GetSlateColor // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
};

