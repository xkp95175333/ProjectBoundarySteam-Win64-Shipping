// WidgetBlueprintGeneratedClass KillList.KillList_C
// Size: 0x2c0 (Inherited: 0x268)
struct UKillList_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x270(0x08)
	struct TArray<struct UKillItem_C*> KillItemArray; // 0x278(0x10)
	int32_t ListSize; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct TArray<struct UKillItem_C*> KillItemPool; // 0x290(0x10)
	struct TArray<struct UKillItem_C*> InUsePool; // 0x2a0(0x10)
	int32_t CurrentIndex; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UKillItem_C* PendingKillItem; // 0x2b8(0x08)

	void InitPlayerEnterInfo(struct APBPlayerState* PBPlayerState, bool Enter); // Function KillList.KillList_C.InitPlayerEnterInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void FadeItem(struct UKillItem_C* FadeItem); // Function KillList.KillList_C.FadeItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ResetItem(struct UKillItem_C* FadeItem); // Function KillList.KillList_C.ResetItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RemoveAll(); // Function KillList.KillList_C.RemoveAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PlayAnim(struct UKillItem_C* NewKillItem); // Function KillList.KillList_C.PlayAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddKillItem(struct APBPlayerState* Killer, struct APBPlayerState* Deceased, struct UDamageType* DamageType, enum class EPBHitZone HitZone, struct UTexture* Icon, struct UTextureRenderTarget2D* RenderTarget); // Function KillList.KillList_C.AddKillItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function KillList.KillList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_KillList(int32_t EntryPoint); // Function KillList.KillList_C.ExecuteUbergraph_KillList // (Final|UbergraphFunction) // @ game+0x1556ec0
};

