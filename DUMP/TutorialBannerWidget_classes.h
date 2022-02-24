// WidgetBlueprintGeneratedClass TutorialBannerWidget.TutorialBannerWidget_C
// Size: 0x408 (Inherited: 0x3da)
struct UTutorialBannerWidget_C : UPBTutorialWidget_C {
	char pad_3DA[0x6]; // 0x3da(0x06)
	struct UWidgetAnimation* Visiable; // 0x3e0(0x08)
	struct UImage* Black_BG; // 0x3e8(0x08)
	struct UHorizontalBox* Button_Image_Box; // 0x3f0(0x08)
	struct UCanvasPanel* CanvasPanel_GameTIp2; // 0x3f8(0x08)
	struct UTextBlock* TextBlock_Tips; // 0x400(0x08)

	void ClearBannerButtonImage(); // Function TutorialBannerWidget.TutorialBannerWidget_C.ClearBannerButtonImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void SetBannerText(struct FText BannerText); // Function TutorialBannerWidget.TutorialBannerWidget_C.SetBannerText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void AddBannerButtonImage(struct UWidget* Content); // Function TutorialBannerWidget.TutorialBannerWidget_C.AddBannerButtonImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void HideBanner(); // Function TutorialBannerWidget.TutorialBannerWidget_C.HideBanner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
	void ShowBanner(struct FText TargetTips); // Function TutorialBannerWidget.TutorialBannerWidget_C.ShowBanner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1556ec0
};

