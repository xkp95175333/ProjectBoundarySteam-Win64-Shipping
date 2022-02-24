// BlueprintGeneratedClass Bubble_BP.Bubble_BP_C
// Size: 0x23c (Inherited: 0x220)
struct ABubble_BP_C : AActor {
	struct UCapsuleComponent* CapsuleCollison; // 0x220(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float CurrentPlayTime; // 0x238(0x04)

	void EnableCollision(); // Function Bubble_BP.Bubble_BP_C.EnableCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void DestroySelf(); // Function Bubble_BP.Bubble_BP_C.DestroySelf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Deactivate(); // Function Bubble_BP.Bubble_BP_C.Deactivate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Activate(); // Function Bubble_BP.Bubble_BP_C.Activate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void StopBubble(); // Function Bubble_BP.Bubble_BP_C.StopBubble // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Recover(); // Function Bubble_BP.Bubble_BP_C.Recover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UserConstructionScript(); // Function Bubble_BP.Bubble_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

