// WidgetBlueprintGeneratedClass UMG_Card_BottomTeamListIcon.UMG_Card_BottomTeamListIcon_C
// Size: 0x338 (Inherited: 0x268)
struct UUMG_Card_BottomTeamListIcon_C : UPBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* frame; // 0x270(0x08)
	struct UImage* frame_2; // 0x278(0x08)
	struct UCanvasPanel* IconBoard; // 0x280(0x08)
	struct UImage* IconImage; // 0x288(0x08)
	struct UImage* Image_2; // 0x290(0x08)
	struct UImage* Image_3; // 0x298(0x08)
	struct UImage* Image_207; // 0x2a0(0x08)
	struct UOverlay* InvitableBoard; // 0x2a8(0x08)
	struct UOverlay* LeaderBoard; // 0x2b0(0x08)
	struct UOverlay* LoadingBoard; // 0x2b8(0x08)
	struct UImage* LoadingImage; // 0x2c0(0x08)
	enum class Enum_PlayerCardState IconStatus; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UTexture2D* Texture; // 0x2d0(0x08)
	struct FPBOnlineUserInfo OnlineUserInfo; // 0x2d8(0x60)

	void SetInfo(enum class Enum_PlayerCardState IconStatus, struct FPBOnlineUserInfo OnlineUserInfo, bool IsTeamLeader); // Function UMG_Card_BottomTeamListIcon.UMG_Card_BottomTeamListIcon_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AvatarRefreshed(struct UTexture2D* AvatarImage); // Function UMG_Card_BottomTeamListIcon.UMG_Card_BottomTeamListIcon_C.AvatarRefreshed // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function UMG_Card_BottomTeamListIcon.UMG_Card_BottomTeamListIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_UMG_Card_BottomTeamListIcon(int32_t EntryPoint); // Function UMG_Card_BottomTeamListIcon.UMG_Card_BottomTeamListIcon_C.ExecuteUbergraph_UMG_Card_BottomTeamListIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
};

