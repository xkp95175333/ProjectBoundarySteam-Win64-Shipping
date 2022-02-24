// BlueprintGeneratedClass TutorialActor.TutorialActor_C
// Size: 0x2a8 (Inherited: 0x220)
struct ATutorialActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x228(0x08)
	struct USceneComponent* Scene; // 0x230(0x08)
	struct FMulticastInlineDelegate DispatcherActiveTarget; // 0x238(0x10)
	bool IsActiveAtBeginPlay; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct UTutorialHintPoint_C* HintWidget; // 0x250(0x08)
	struct FSlateColor HintColor; // 0x258(0x28)
	struct FText HintText; // 0x280(0x18)
	struct FLinearColor ActorColor; // 0x298(0x10)

	void EnableCollision(bool IsEnable); // Function TutorialActor.TutorialActor_C.EnableCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void EventActiveTarget(); // Function TutorialActor.TutorialActor_C.EventActiveTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BeActive(); // Function TutorialActor.TutorialActor_C.BeActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function TutorialActor.TutorialActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TutorialActor.TutorialActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveDestroyed(); // Function TutorialActor.TutorialActor_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function TutorialActor.TutorialActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_TutorialActor(int32_t EntryPoint); // Function TutorialActor.TutorialActor_C.ExecuteUbergraph_TutorialActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void DispatcherActiveTarget__DelegateSignature(); // Function TutorialActor.TutorialActor_C.DispatcherActiveTarget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

