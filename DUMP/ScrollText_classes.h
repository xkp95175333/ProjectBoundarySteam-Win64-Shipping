// WidgetBlueprintGeneratedClass ScrollText.ScrollText_C
// Size: 0x304 (Inherited: 0x268)
struct UScrollText_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UScrollBox* ScrollBox; // 0x270(0x08)
	struct UTextBlock* ScrollText; // 0x278(0x08)
	struct USizeBox* SizeBox; // 0x280(0x08)
	float ScrollOffset; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FText Text; // 0x290(0x18)
	float BoxWidth; // 0x2a8(0x04)
	bool IsDoubleText; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UObject* FontFamily; // 0x2b0(0x08)
	struct FName Typeface; // 0x2b8(0x08)
	int32_t FontSize; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FSlateColor TextColor; // 0x2c8(0x28)
	float ScrollSpeed; // 0x2f0(0x04)
	bool IsPause; // 0x2f4(0x01)
	enum class EHorizontalAlignment TextAlignment; // 0x2f5(0x01)
	char pad_2F6[0x2]; // 0x2f6(0x02)
	float ScrollTime; // 0x2f8(0x04)
	float ScrollEdgeFadeValue_L; // 0x2fc(0x04)
	float ScrollEdgeFadeValue_R; // 0x300(0x04)

	void Set Text Info(struct FText InText); // Function ScrollText.ScrollText_C.Set Text Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BreakPause(); // Function ScrollText.ScrollText_C.BreakPause // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetInfo(struct FText Text); // Function ScrollText.ScrollText_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetStyle(struct FSlateColor TextColor); // Function ScrollText.ScrollText_C.SetStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetTitleText(struct FText Text); // Function ScrollText.ScrollText_C.SetTitleText // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ScrollText.ScrollText_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function ScrollText.ScrollText_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ScrollText(int32_t EntryPoint); // Function ScrollText.ScrollText_C.ExecuteUbergraph_ScrollText // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

