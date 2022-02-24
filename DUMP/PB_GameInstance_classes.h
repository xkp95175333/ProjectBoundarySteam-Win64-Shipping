// BlueprintGeneratedClass PB_GameInstance.PB_GameInstance_C
// Size: 0xa29 (Inherited: 0x948)
struct UPB_GameInstance_C : UProjectBoundaryInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x948(0x08)
	struct FS_SoundTheme SoundTheme; // 0x950(0x28)
	struct TMap<enum class EPBRole, struct APBCharacter_BP_C*> RoleClassMap; // 0x978(0x50)
	bool KeyOK; // 0x9c8(0x01)
	char pad_9C9[0x3]; // 0x9c9(0x03)
	int32_t MoneyHack; // 0x9cc(0x04)
	struct FMulticastInlineDelegate OnMoneyChange; // 0x9d0(0x10)
	struct TArray<bool> GoodsDisable; // 0x9e0(0x10)
	struct TArray<struct FName> PC_SettingNames; // 0x9f0(0x10)
	struct TArray<struct FName> PS_SettingNames; // 0xa00(0x10)
	struct UUMG_WaterMark_C* WaterMarkWidget; // 0xa10(0x08)
	struct FString GameVersionString; // 0xa18(0x10)
	bool Is Playing First BGM?; // 0xa28(0x01)

	void Delegate on Image Enhance Changes(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate on Image Enhance Changes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HandleWaterMark(); // Function PB_GameInstance.PB_GameInstance_C.HandleWaterMark // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delegate_OnGammaChanges(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate_OnGammaChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delegate_OnFrameRateChanges(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate_OnFrameRateChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delegate on Resolution Changes(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate on Resolution Changes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delegate_OnColorDeficiencyChanges(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate_OnColorDeficiencyChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delegate_OnBloomChanges(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate_OnBloomChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delegate_OnDOFChanges(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate_OnDOFChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delegate_OnTexQualityChanges(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate_OnTexQualityChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delegate_OnMotionBlurChanges(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate_OnMotionBlurChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delegate_OnShadowQualityChanges(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate_OnShadowQualityChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delegate_OnVSyncChanges(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate_OnVSyncChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Delegate_OnAAMethordChanges(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Delegate_OnAAMethordChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BindSettingDelegate(struct FName OptionName); // Function PB_GameInstance.PB_GameInstance_C.BindSettingDelegate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Dedicate_OnWindowModeChanged(struct UPBOptions* PBOptions); // Function PB_GameInstance.PB_GameInstance_C.Dedicate_OnWindowModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SpendMoney(int32_t Cost); // Function PB_GameInstance.PB_GameInstance_C.SpendMoney // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void InitUserSettings(); // Function PB_GameInstance.PB_GameInstance_C.InitUserSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveInit(); // Function PB_GameInstance.PB_GameInstance_C.ReceiveInit // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBPOnStartSetting(); // Function PB_GameInstance.PB_GameInstance_C.NotifyBPOnStartSetting // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void NotifyBPOnStartInputSetting(); // Function PB_GameInstance.PB_GameInstance_C.NotifyBPOnStartInputSetting // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void WaterMarkValidityCheck(); // Function PB_GameInstance.PB_GameInstance_C.WaterMarkValidityCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_PB_GameInstance(int32_t EntryPoint); // Function PB_GameInstance.PB_GameInstance_C.ExecuteUbergraph_PB_GameInstance // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnMoneyChange__DelegateSignature(int32_t CurMoney); // Function PB_GameInstance.PB_GameInstance_C.OnMoneyChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

