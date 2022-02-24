// BlueprintGeneratedClass BP_Tank_Skill.BP_Tank_Skill_C
// Size: 0x730 (Inherited: 0x6d0)
struct ABP_Tank_Skill_C : APBShieldModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d0(0x08)
	struct UStaticMeshComponent* Board_Undeploy; // 0x6d8(0x08)
	struct UStaticMeshComponent* Board_R2; // 0x6e0(0x08)
	struct UStaticMeshComponent* Board_R1; // 0x6e8(0x08)
	struct UStaticMeshComponent* Board_L2; // 0x6f0(0x08)
	struct UStaticMeshComponent* Board_L1; // 0x6f8(0x08)
	struct UStaticMeshComponent* Board; // 0x700(0x08)
	struct UStaticMeshComponent* GlassBoard_R; // 0x708(0x08)
	struct UStaticMeshComponent* GlassBoard_L; // 0x710(0x08)
	struct UStaticMeshComponent* GlassBoard; // 0x718(0x08)
	struct FName DeployedSokcetName; // 0x720(0x08)
	struct FName UndeployedSockerName; // 0x728(0x08)

	void GetFirstWeapon(struct APBWeapon* FirstWeapon); // Function BP_Tank_Skill.BP_Tank_Skill_C.GetFirstWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetOwnerMesh3P(struct USkeletalMeshComponent* Mesh3P); // Function BP_Tank_Skill.BP_Tank_Skill_C.GetOwnerMesh3P // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void GetOwnerMesh1P(struct USkeletalMeshComponent* Mesh1P); // Function BP_Tank_Skill.BP_Tank_Skill_C.GetOwnerMesh1P // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1556ec0
	void AttachToOwnerCharacter(struct FName InSocketName); // Function BP_Tank_Skill.BP_Tank_Skill_C.AttachToOwnerCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsDeploying(); // Function BP_Tank_Skill.BP_Tank_Skill_C.K2_OnHandsDeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsUndeploying(); // Function BP_Tank_Skill.BP_Tank_Skill_C.K2_OnHandsUndeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsUndeployed(); // Function BP_Tank_Skill.BP_Tank_Skill_C.K2_OnHandsUndeployed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnEquip(struct AActor* NewOwner); // Function BP_Tank_Skill.BP_Tank_Skill_C.K2_OnEquip // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_HitInfo(float DamageTaken, struct FDamageEvent DamageEvent, struct APawn* PawnInstigator, struct AActor* DamageCauser); // Function BP_Tank_Skill.BP_Tank_Skill_C.K2_HitInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsDeployed(); // Function BP_Tank_Skill.BP_Tank_Skill_C.K2_OnHandsDeployed // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_OnHandsFirstDeploying(); // Function BP_Tank_Skill.BP_Tank_Skill_C.K2_OnHandsFirstDeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_BP_Tank_Skill(int32_t EntryPoint); // Function BP_Tank_Skill.BP_Tank_Skill_C.ExecuteUbergraph_BP_Tank_Skill // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

