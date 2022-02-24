// BlueprintGeneratedClass BasicPackBP.BasicPackBP_C
// Size: 0x358 (Inherited: 0x2f8)
struct ABasicPackBP_C : APBVehicle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UNiagaraComponent* Niagara4; // 0x300(0x08)
	struct UNiagaraComponent* Niagara3; // 0x308(0x08)
	struct UNiagaraComponent* Niagara2; // 0x310(0x08)
	struct UNiagaraComponent* Niagara; // 0x318(0x08)
	struct UPBMobilityHeatComponent* PBMobilityHeat; // 0x320(0x08)
	struct UPBEnergySupplyComponent* PBEnergySupply; // 0x328(0x08)
	struct UStaticMeshComponent* Accessory; // 0x330(0x08)
	struct UPBArmorComponent* RearArmor; // 0x338(0x08)
	struct UPBArmorManagerComponent* PBArmorManager; // 0x340(0x08)
	bool bVehicleOn; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UNiagaraComponent* NewVar_1; // 0x350(0x08)

	void DistroyJets(); // Function BasicPackBP.BasicPackBP_C.DistroyJets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TurnOffLight(); // Function BasicPackBP.BasicPackBP_C.TurnOffLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void TurnOnLight(); // Function BasicPackBP.BasicPackBP_C.TurnOnLight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void CallToCharacterBackPackBeHit(struct APawn* DamageCauser, float DamageTaken); // Function BasicPackBP.BasicPackBP_C.CallToCharacterBackPackBeHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void BndEvt__PBArmorManager_K2Node_ComponentBoundEvent_0_ArmorComponentBeHitSignature__DelegateSignature(float DamageTaken, struct FDamageEvent DamageEvent, struct APawn* PawnInstigator, struct AActor* DamageCauser); // Function BasicPackBP.BasicPackBP_C.BndEvt__PBArmorManager_K2Node_ComponentBoundEvent_0_ArmorComponentBeHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimulateVehicleDown(); // Function BasicPackBP.BasicPackBP_C.K2_SimulateVehicleDown // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_SimulateVehicleRestart(); // Function BasicPackBP.BasicPackBP_C.K2_SimulateVehicleRestart // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_TurnOffVehicle(); // Function BasicPackBP.BasicPackBP_C.K2_TurnOffVehicle // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void K2_TurnOnVehicle(); // Function BasicPackBP.BasicPackBP_C.K2_TurnOnVehicle // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ReceiveBeginPlay(); // Function BasicPackBP.BasicPackBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_BasicPackBP(int32_t EntryPoint); // Function BasicPackBP.BasicPackBP_C.ExecuteUbergraph_BasicPackBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

