// BlueprintGeneratedClass ChatComponent.ChatComponent_C
// Size: 0xc0 (Inherited: 0xb0)
struct UChatComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UWBP_ChatInterface_C* ChatInterface; // 0xb8(0x08)

	void TestFunction(); // Function ChatComponent.ChatComponent_C.TestFunction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CreateChatInterFace(); // Function ChatComponent.ChatComponent_C.CreateChatInterFace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function ChatComponent.ChatComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function ChatComponent.ChatComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ChatComponent(int32_t EntryPoint); // Function ChatComponent.ChatComponent_C.ExecuteUbergraph_ChatComponent // (Final|UbergraphFunction) // @ game+0x1556ec0
};

