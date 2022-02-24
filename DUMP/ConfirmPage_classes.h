// WidgetBlueprintGeneratedClass ConfirmPage.ConfirmPage_C
// Size: 0x480 (Inherited: 0x3c8)
struct UConfirmPage_C : UPBMainMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UImage* Image_97; // 0x3d0(0x08)
	struct UButton* PageFocuser; // 0x3d8(0x08)
	struct UPlayerInfo_C* PlayerLeft_01; // 0x3e0(0x08)
	struct UPlayerInfo_C* PlayerLeft_02; // 0x3e8(0x08)
	struct UPlayerInfo_C* PlayerLeft_03; // 0x3f0(0x08)
	struct UPlayerInfo_C* PlayerLeft_04; // 0x3f8(0x08)
	struct UPlayerInfo_C* PlayerLeft_05; // 0x400(0x08)
	struct UPlayerInfo_C* PlayerRight_01; // 0x408(0x08)
	struct UPlayerInfo_C* PlayerRight_02; // 0x410(0x08)
	struct UPlayerInfo_C* PlayerRight_03; // 0x418(0x08)
	struct UPlayerInfo_C* PlayerRight_04; // 0x420(0x08)
	struct UPlayerInfo_C* PlayerRight_05; // 0x428(0x08)
	struct UTeamInfo_C* Team_Info_Left; // 0x430(0x08)
	struct UTeamInfo_C* Team_Info_Right; // 0x438(0x08)
	struct UUMG_Widget_Bottom_Panel_C* UMG_Widget_Bottom_Panel; // 0x440(0x08)
	struct TArray<struct UPlayerInfo_C*> BlueTeamWidgets; // 0x448(0x10)
	struct TArray<struct UPlayerInfo_C*> RedTeamWidgets; // 0x458(0x10)
	struct FTimerHandle NewVar_1; // 0x468(0x08)
	struct FMulticastInlineDelegate OnBack; // 0x470(0x10)

	struct FEventReply GamepadBackKey(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ConfirmPage.ConfirmPage_C.GamepadBackKey // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetDefaultFocus(); // Function ConfirmPage.ConfirmPage_C.SetDefaultFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void UpdateConfirmPage(); // Function ConfirmPage.ConfirmPage_C.UpdateConfirmPage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void PreConstruct(bool IsDesignTime); // Function ConfirmPage.ConfirmPage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Construct(); // Function ConfirmPage.ConfirmPage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void Destruct(); // Function ConfirmPage.ConfirmPage_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1556ec0
	void BackToSelectCareer(); // Function ConfirmPage.ConfirmPage_C.BackToSelectCareer // (BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ExecuteUbergraph_ConfirmPage(int32_t EntryPoint); // Function ConfirmPage.ConfirmPage_C.ExecuteUbergraph_ConfirmPage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1556ec0
	void OnBack__DelegateSignature(); // Function ConfirmPage.ConfirmPage_C.OnBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

