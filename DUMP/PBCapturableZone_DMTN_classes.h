// BlueprintGeneratedClass PBCapturableZone_DMTN.PBCapturableZone_DMTN_C
// Size: 0x290 (Inherited: 0x270)
struct APBCapturableZone_DMTN_C : APBCapturableZone_Domination {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FString ZoneName; // 0x278(0x10)
	struct FTimerHandle InitWidgetTimeHandle; // 0x288(0x08)

	void CreateWidget(); // Function PBCapturableZone_DMTN.PBCapturableZone_DMTN_C.CreateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void NotifyCreate(); // Function PBCapturableZone_DMTN.PBCapturableZone_DMTN_C.NotifyCreate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function PBCapturableZone_DMTN.PBCapturableZone_DMTN_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PBCapturableZone_DMTN(int32_t EntryPoint); // Function PBCapturableZone_DMTN.PBCapturableZone_DMTN_C.ExecuteUbergraph_PBCapturableZone_DMTN // (Final|UbergraphFunction) // @ game+0x1556ec0
};

