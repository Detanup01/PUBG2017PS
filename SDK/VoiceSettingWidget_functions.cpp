#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoiceSettingWidget

#include "Basic.hpp"

#include "VoiceSettingWidget_classes.hpp"
#include "VoiceSettingWidget_parameters.hpp"


namespace SDK
{

// Function VoiceSettingWidget.VoiceSettingWidget_C.ExecuteUbergraph_VoiceSettingWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoiceSettingWidget_C::ExecuteUbergraph_VoiceSettingWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSettingWidget_C", "ExecuteUbergraph_VoiceSettingWidget");

	Params::VoiceSettingWidget_C_ExecuteUbergraph_VoiceSettingWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::OnReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSettingWidget_C", "OnReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::OnDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSettingWidget_C", "OnDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSettingWidget_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVoiceSettingWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSettingWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.UpdateVoiceSettingWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::UpdateVoiceSettingWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSettingWidget_C", "UpdateVoiceSettingWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.IsChanged
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UVoiceSettingWidget_C::IsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSettingWidget_C", "IsChanged");

	Params::VoiceSettingWidget_C_IsChanged Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.GetMyVoiceOptionString
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           OptionString                                           (Parm, OutParm, ZeroConstructor)

void UVoiceSettingWidget_C::GetMyVoiceOptionString(class FString* OptionString) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSettingWidget_C", "GetMyVoiceOptionString");

	Params::VoiceSettingWidget_C_GetMyVoiceOptionString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OptionString != nullptr)
		*OptionString = std::move(Parms.OptionString);
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.GetVoiceChannelOptionString
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           OptionString                                           (Parm, OutParm, ZeroConstructor)

void UVoiceSettingWidget_C::GetVoiceChannelOptionString(class FString* OptionString) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSettingWidget_C", "GetVoiceChannelOptionString");

	Params::VoiceSettingWidget_C_GetVoiceChannelOptionString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OptionString != nullptr)
		*OptionString = std::move(Parms.OptionString);
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.GetMyVoiceByOption
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bIsMuted                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUsePushToTalk                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoiceSettingWidget_C::GetMyVoiceByOption(bool* bIsMuted, bool* bUsePushToTalk) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSettingWidget_C", "GetMyVoiceByOption");

	Params::VoiceSettingWidget_C_GetMyVoiceByOption Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsMuted != nullptr)
		*bIsMuted = Parms.bIsMuted;

	if (bUsePushToTalk != nullptr)
		*bUsePushToTalk = Parms.bUsePushToTalk;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.GetVoiceChannelByOption
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    GlobalChannel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    TeamChannel                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoiceSettingWidget_C::GetVoiceChannelByOption(bool* GlobalChannel, bool* TeamChannel) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSettingWidget_C", "GetVoiceChannelByOption");

	Params::VoiceSettingWidget_C_GetVoiceChannelByOption Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GlobalChannel != nullptr)
		*GlobalChannel = Parms.GlobalChannel;

	if (TeamChannel != nullptr)
		*TeamChannel = Parms.TeamChannel;
}

}

