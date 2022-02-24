// WidgetBlueprintGeneratedClass UMG_Ping.UMG_Ping_C
// Size: 0x299 (Inherited: 0x268)
struct UUMG_Ping_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UVerticalBox* AreaBox; // 0x270(0x08)
	struct UTextBlock* AreaText; // 0x278(0x08)
	struct UImage* Image_90; // 0x280(0x08)
	struct UTextBlock* PingValueText; // 0x288(0x08)
	struct APBPlayerState* PBPlayerState; // 0x290(0x08)
	enum class NETWORK_STATS NetworkStats; // 0x298(0x01)

	void HandleArea(); // Function UMG_Ping.UMG_Ping_C.HandleArea // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HandlePing(); // Function UMG_Ping.UMG_Ping_C.HandlePing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function UMG_Ping.UMG_Ping_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Ping.UMG_Ping_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Ping(int32_t EntryPoint); // Function UMG_Ping.UMG_Ping_C.ExecuteUbergraph_UMG_Ping // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

