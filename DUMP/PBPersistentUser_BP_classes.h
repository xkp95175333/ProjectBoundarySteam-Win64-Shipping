// BlueprintGeneratedClass PBPersistentUser_BP.PBPersistentUser_BP_C
// Size: 0x5bc (Inherited: 0x498)
struct UPBPersistentUser_BP_C : UPBPersistentUser {
	struct TMap<struct FString, bool> AllChallenge; // 0x498(0x50)
	int32_t ColorAssistType; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct FMulticastInlineDelegate UpdateColorAssistType; // 0x4f0(0x10)
	struct TMap<struct FName, int32_t> RoleIDWins; // 0x500(0x50)
	struct TMap<enum class TutorialEnum, bool> TutorialFinish; // 0x550(0x50)
	bool IsFirstTimeEnterGame; // 0x5a0(0x01)
	bool IsForceMarkable; // 0x5a1(0x01)
	char pad_5A2[0x2]; // 0x5a2(0x02)
	float CameraBaseSpeed; // 0x5a4(0x04)
	struct FVector2D CameraXYSpeed; // 0x5a8(0x08)
	float AimBaseSpeed; // 0x5b0(0x04)
	struct FVector2D AimXYSpeed; // 0x5b4(0x08)

	void Save Tutorial Finish(); // Function PBPersistentUser_BP.PBPersistentUser_BP_C.Save Tutorial Finish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TutorialTargetConfirmFunction(enum class TutorialEnum NewParam, bool Finish); // Function PBPersistentUser_BP.PBPersistentUser_BP_C.TutorialTargetConfirmFunction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateColorAssistType__DelegateSignature(); // Function PBPersistentUser_BP.PBPersistentUser_BP_C.UpdateColorAssistType__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

