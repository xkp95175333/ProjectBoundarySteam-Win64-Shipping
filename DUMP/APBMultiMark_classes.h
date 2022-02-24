// BlueprintGeneratedClass APBMultiMark.APBMultiMark_C
// Size: 0x298 (Inherited: 0x238)
struct AAPBMultiMark_C : AABPRealChallengeBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	float MultiMarkTimeDuration; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct TMap<struct APBPlayerState*, float> MarkPlayerState; // 0x248(0x50)

	void DelateDeadPlayerState(float Damage, enum class EPBHitZone HitZone, struct UDamageType* DamageType, struct AController* KillerControl, struct AController* KilledControl, struct APawn* KillerPawn, struct APawn* KilledPawn, struct AActor* DamageCauser); // Function APBMultiMark.APBMultiMark_C.DelateDeadPlayerState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Multi Mark Check(struct APBPlayerState* PlayerVisionMark); // Function APBMultiMark.APBMultiMark_C.Multi Mark Check // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function APBMultiMark.APBMultiMark_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifyRoundEndResult(struct FName GameModeName, enum class EPBGameResult GameResult); // Function APBMultiMark.APBMultiMark_C.NotifyRoundEndResult // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_APBMultiMark(int32_t EntryPoint); // Function APBMultiMark.APBMultiMark_C.ExecuteUbergraph_APBMultiMark // (Final|UbergraphFunction) // @ game+0x1556ec0
};

