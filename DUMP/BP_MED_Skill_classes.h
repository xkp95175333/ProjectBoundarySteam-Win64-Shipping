// BlueprintGeneratedClass BP_MED_Skill.BP_MED_Skill_C
// Size: 0x60c (Inherited: 0x5e0)
struct ABP_MED_Skill_C : APBMedicineSkillModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x5e8(0x08)
	struct ABP_MechUAV_C* FlyingMechUAV; // 0x5f0(0x08)
	float RespawnTime; // 0x5f8(0x04)
	char pad_5FC[0x4]; // 0x5fc(0x04)
	struct FTimerHandle RespawnTimer; // 0x600(0x08)
	int32_t Count; // 0x608(0x04)

	void GetCharacterIndicator(struct APBCharacter* Character, struct UUMG_Indicator_Character_C* CharacterIndicator); // Function BP_MED_Skill.BP_MED_Skill_C.GetCharacterIndicator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void CountDown(); // Function BP_MED_Skill.BP_MED_Skill_C.CountDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RecoverRespawnTimer(); // Function BP_MED_Skill.BP_MED_Skill_C.RecoverRespawnTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnRep_Count(); // Function BP_MED_Skill.BP_MED_Skill_C.OnRep_Count // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void RespawnFlyingMachUAV(); // Function BP_MED_Skill.BP_MED_Skill_C.RespawnFlyingMachUAV // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SpawnMechUAV(struct ABP_MechUAV_C* Mech UAV); // Function BP_MED_Skill.BP_MED_Skill_C.SpawnMechUAV // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SpawnFlyingMechUAV(); // Function BP_MED_Skill.BP_MED_Skill_C.SpawnFlyingMechUAV // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_ActivatedSkill(); // Function BP_MED_Skill.BP_MED_Skill_C.K2_ActivatedSkill // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveTick(float DeltaSeconds); // Function BP_MED_Skill.BP_MED_Skill_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveDestroyed(); // Function BP_MED_Skill.BP_MED_Skill_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnEquip(struct AActor* NewOwner); // Function BP_MED_Skill.BP_MED_Skill_C.K2_OnEquip // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void SpawnRescueMechUAV_Server(struct APBCharacter* SavedTarget, struct FName SocketName); // Function BP_MED_Skill.BP_MED_Skill_C.SpawnRescueMechUAV_Server // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowMechUAVRespawnWidget(); // Function BP_MED_Skill.BP_MED_Skill_C.ShowMechUAVRespawnWidget // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CleanMechUAVRespawnWidget(); // Function BP_MED_Skill.BP_MED_Skill_C.CleanMechUAVRespawnWidget // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnPBCharacterEMPEffectOffDelegates(); // Function BP_MED_Skill.BP_MED_Skill_C.OnPBCharacterEMPEffectOffDelegates // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnPBCharacterEMPEffectOnDelegates(); // Function BP_MED_Skill.BP_MED_Skill_C.OnPBCharacterEMPEffectOnDelegates // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_ShowIndicator(); // Function BP_MED_Skill.BP_MED_Skill_C.K2_ShowIndicator // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OwningCharacterBeHitDown(); // Function BP_MED_Skill.BP_MED_Skill_C.K2_OwningCharacterBeHitDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_BP_MED_Skill(int32_t EntryPoint); // Function BP_MED_Skill.BP_MED_Skill_C.ExecuteUbergraph_BP_MED_Skill // (Final|UbergraphFunction) // @ game+0x1556ec0
};

