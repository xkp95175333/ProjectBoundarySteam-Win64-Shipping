// BlueprintGeneratedClass APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C
// Size: 0x6d8 (Inherited: 0x680)
struct AAPBSmokeGrenadeLauncher_BP_C : APBLauncher_Deploy_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UPBFireComponent_Projectile* PBFireComponent_Projectile; // 0x688(0x08)
	struct UStaticMeshComponent* 3Pgagetmesh; // 0x690(0x08)
	struct UStaticMeshComponent* FPAttachMesh; // 0x698(0x08)
	struct USkeletalMeshComponent* 3P_SKmesh; // 0x6a0(0x08)
	struct UStaticMeshComponent* Mesh_St_Weap_SGL03; // 0x6a8(0x08)
	struct UStaticMeshComponent* Mesh_St_Weap_SGL02; // 0x6b0(0x08)
	struct UStaticMeshComponent* Mesh_St_Weap_SGL01; // 0x6b8(0x08)
	struct UAnimMontage* LeftTriggerSmokeMontage; // 0x6c0(0x08)
	struct UAnimMontage* RightTriggerSmokeMontage; // 0x6c8(0x08)
	struct UParticleSystem* FireMuzzle_VFX; // 0x6d0(0x08)

	void OnNotifyEnd_3FDC6E784E7003F8C82041BC6FFBB978(struct FName NotifyName); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.OnNotifyEnd_3FDC6E784E7003F8C82041BC6FFBB978 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnNotifyBegin_3FDC6E784E7003F8C82041BC6FFBB978(struct FName NotifyName); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.OnNotifyBegin_3FDC6E784E7003F8C82041BC6FFBB978 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInterrupted_3FDC6E784E7003F8C82041BC6FFBB978(struct FName NotifyName); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.OnInterrupted_3FDC6E784E7003F8C82041BC6FFBB978 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnBlendOut_3FDC6E784E7003F8C82041BC6FFBB978(struct FName NotifyName); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.OnBlendOut_3FDC6E784E7003F8C82041BC6FFBB978 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnCompleted_3FDC6E784E7003F8C82041BC6FFBB978(struct FName NotifyName); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.OnCompleted_3FDC6E784E7003F8C82041BC6FFBB978 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnNotifyEnd_1FD7BB1E49E7F34F91E856834DDE14FA(struct FName NotifyName); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.OnNotifyEnd_1FD7BB1E49E7F34F91E856834DDE14FA // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnNotifyBegin_1FD7BB1E49E7F34F91E856834DDE14FA(struct FName NotifyName); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.OnNotifyBegin_1FD7BB1E49E7F34F91E856834DDE14FA // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnInterrupted_1FD7BB1E49E7F34F91E856834DDE14FA(struct FName NotifyName); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.OnInterrupted_1FD7BB1E49E7F34F91E856834DDE14FA // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnBlendOut_1FD7BB1E49E7F34F91E856834DDE14FA(struct FName NotifyName); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.OnBlendOut_1FD7BB1E49E7F34F91E856834DDE14FA // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void OnCompleted_1FD7BB1E49E7F34F91E856834DDE14FA(struct FName NotifyName); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.OnCompleted_1FD7BB1E49E7F34F91E856834DDE14FA // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimuilateFire(); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.K2_SimuilateFire // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void NotifySmokeTriggedByPlayer_2(); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.NotifySmokeTriggedByPlayer_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void K2_Deploying(); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.K2_Deploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_Undeploying(); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.K2_Undeploying // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_APBSmokeGrenadeLauncher_BP(int32_t EntryPoint); // Function APBSmokeGrenadeLauncher_BP.APBSmokeGrenadeLauncher_BP_C.ExecuteUbergraph_APBSmokeGrenadeLauncher_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

