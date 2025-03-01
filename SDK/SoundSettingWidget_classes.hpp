#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundSettingWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BaseOptionWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SoundSettingWidget.SoundSettingWidget_C
// 0x0048 (0x02C0 - 0x0278)
class USoundSettingWidget_C final : public UBaseOptionWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTslCheckBox_C*                         BGMSoundCheckBox;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UQualitySliderWidget_C*                 BGMSoundSliderWidget;                              // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTslCheckBox_C*                         EffectSoundCheckBox;                               // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UQualitySliderWidget_C*                 EffectSoundSliderWidget;                           // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTslCheckBox_C*                         MasterSoundCheckBox;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UQualitySliderWidget_C*                 MasterSoundSliderWidget;                           // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTslCheckBox_C*                         UISoundCheckBox;                                   // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UQualitySliderWidget_C*                 UISoundSliderWidget;                               // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	void ExecuteUbergraph_SoundSettingWidget(int32 EntryPoint);
	void OnApply();
	void OnDefault();
	void OnReset();
	void Construct();
	void UpdateSoundSettings();

	bool IsChanged() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SoundSettingWidget_C">();
	}
	static class USoundSettingWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundSettingWidget_C>();
	}
};
static_assert(alignof(USoundSettingWidget_C) == 0x000008, "Wrong alignment on USoundSettingWidget_C");
static_assert(sizeof(USoundSettingWidget_C) == 0x0002C0, "Wrong size on USoundSettingWidget_C");
static_assert(offsetof(USoundSettingWidget_C, UberGraphFrame) == 0x000278, "Member 'USoundSettingWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USoundSettingWidget_C, BGMSoundCheckBox) == 0x000280, "Member 'USoundSettingWidget_C::BGMSoundCheckBox' has a wrong offset!");
static_assert(offsetof(USoundSettingWidget_C, BGMSoundSliderWidget) == 0x000288, "Member 'USoundSettingWidget_C::BGMSoundSliderWidget' has a wrong offset!");
static_assert(offsetof(USoundSettingWidget_C, EffectSoundCheckBox) == 0x000290, "Member 'USoundSettingWidget_C::EffectSoundCheckBox' has a wrong offset!");
static_assert(offsetof(USoundSettingWidget_C, EffectSoundSliderWidget) == 0x000298, "Member 'USoundSettingWidget_C::EffectSoundSliderWidget' has a wrong offset!");
static_assert(offsetof(USoundSettingWidget_C, MasterSoundCheckBox) == 0x0002A0, "Member 'USoundSettingWidget_C::MasterSoundCheckBox' has a wrong offset!");
static_assert(offsetof(USoundSettingWidget_C, MasterSoundSliderWidget) == 0x0002A8, "Member 'USoundSettingWidget_C::MasterSoundSliderWidget' has a wrong offset!");
static_assert(offsetof(USoundSettingWidget_C, UISoundCheckBox) == 0x0002B0, "Member 'USoundSettingWidget_C::UISoundCheckBox' has a wrong offset!");
static_assert(offsetof(USoundSettingWidget_C, UISoundSliderWidget) == 0x0002B8, "Member 'USoundSettingWidget_C::UISoundSliderWidget' has a wrong offset!");

}

