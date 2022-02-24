// BlueprintGeneratedClass Mass_explosion.Mass_explosion_C
// Size: 0x2fc (Inherited: 0x2f0)
struct AMass_explosion_C : APBExplosionEffect {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	float LightIntensity; // 0x2f8(0x04)

	void ReceiveBeginPlay(); // Function Mass_explosion.Mass_explosion_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_Mass_explosion(int32_t EntryPoint); // Function Mass_explosion.Mass_explosion_C.ExecuteUbergraph_Mass_explosion // (Final|UbergraphFunction) // @ game+0x1556ec0
};

