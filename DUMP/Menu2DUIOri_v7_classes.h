// BlueprintGeneratedClass Menu2DUIOri_v7.Menu2DUIOri_v7_C
// Size: 0x258 (Inherited: 0x228)
struct AMenu2DUIOri_v7_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct FRotator RotFound; // 0x230(0x0c)
	struct FRotator NewRot; // 0x23c(0x0c)
	bool Map_load; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct ADisplayActor_C* DisplayActor; // 0x250(0x08)

	void ReceiveBeginPlay(); // Function Menu2DUIOri_v7.Menu2DUIOri_v7_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void FindNewRot(); // Function Menu2DUIOri_v7.Menu2DUIOri_v7_C.FindNewRot // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Menu2DUIOri_v7.Menu2DUIOri_v7_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Menu2DUIOri_v7(int32_t EntryPoint); // Function Menu2DUIOri_v7.Menu2DUIOri_v7_C.ExecuteUbergraph_Menu2DUIOri_v7 // (Final|UbergraphFunction) // @ game+0x1556ec0
};

