// UserDefinedStruct Struct_BreathState.Struct_BreathState
// Size: 0xe8 (Inherited: 0x00)
struct FStruct_BreathState {
	struct FString BreathType_131_EC0AF01748B0DB96C70F79AA30046B08; // 0x00(0x10)
	int32_t StatePriority_181_B4E074F94D7B9D83F3210C9A6B7AA1D2; // 0x10(0x04)
	bool IsEmergency?_179_E2B4135B40F7F090340843B43458564B; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float SoundVolume_180_5A1839E543B92B5B846E1EA27C9C260B; // 0x18(0x04)
	int32_t BreathRateFadeInCountdown_182_0A699F9C417C8B79B2C18B9DD829C813; // 0x1c(0x04)
	int32_t BreathRateFadeOutCountdown_183_E525907B40A41084420BD692D1485BD3; // 0x20(0x04)
	float FadeInRatio_191_E9E03D4A46AFF519A47610B4C1A9AB4B; // 0x24(0x04)
	float FadeOutRatio_192_498ADBCB4587D8ED97E125A6E1A3B2D5; // 0x28(0x04)
	int32_t BreathSoundIntParam_188_B5D47E9345D709A32D2170B9B71858A1; // 0x2c(0x04)
	struct TMap<enum class EPBRole, float> BreathInRate_224_A351CD1E46D58AF1632FF4BFB934A398; // 0x30(0x50)
	struct TMap<enum class EPBRole, float> BreathOutRate_225_1931205647D4E0DE8DC28A88BEA9B90B; // 0x80(0x50)
	struct FText Detail_108_697B16754E63FAAB5A73E598E960DF46; // 0xd0(0x18)
};

