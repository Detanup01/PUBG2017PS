#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainLobbyHUD

#include "Basic.hpp"

#include "MainLobbyHUD_classes.hpp"
#include "MainLobbyHUD_parameters.hpp"


namespace SDK
{

// Function MainLobbyHUD.MainLobbyHUD_C.ExecuteUbergraph_MainLobbyHUD
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainLobbyHUD_C::ExecuteUbergraph_MainLobbyHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "ExecuteUbergraph_MainLobbyHUD");

	Params::MainLobbyHUD_C_ExecuteUbergraph_MainLobbyHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainLobbyHUD.MainLobbyHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainLobbyHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWebPopupParam                   Param                                                  (ConstParm, Parm, OutParm, ReferenceParm)

void UMainLobbyHUD_C::ShowWebPopup(const struct FWebPopupParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "ShowWebPopup");

	Params::MainLobbyHUD_C_ShowWebPopup Parms{};

	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainLobbyHUD_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainLobbyHUD_C::BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainLobbyHUD_C::BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainLobbyHUD.MainLobbyHUD_C.InitializeHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainLobbyHUD_C::InitializeHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "InitializeHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnKey_SystemMenuOrEscape
// (Public, BlueprintCallable, BlueprintEvent)

void UMainLobbyHUD_C::OnKey_SystemMenuOrEscape()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "OnKey_SystemMenuOrEscape");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainLobbyHUD.MainLobbyHUD_C.GetMainCoherentWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTWidget*              Browser                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainLobbyHUD_C::GetMainCoherentWidget(class UCoherentUIGTWidget** Browser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "GetMainCoherentWidget");

	Params::MainLobbyHUD_C_GetMainCoherentWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Browser != nullptr)
		*Browser = Parms.Browser;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnReload
// (Public, BlueprintCallable, BlueprintEvent)

void UMainLobbyHUD_C::OnReload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "OnReload");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainLobbyHUD.MainLobbyHUD_C.On_HorizontalBox_90_Prepass_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainLobbyHUD_C::On_HorizontalBox_90_Prepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "On_HorizontalBox_90_Prepass_0");

	Params::MainLobbyHUD_C_On_HorizontalBox_90_Prepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopupImpl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWebPopupParam                   Param                                                  (Parm)

void UMainLobbyHUD_C::ShowWebPopupImpl(const struct FWebPopupParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "ShowWebPopupImpl");

	Params::MainLobbyHUD_C_ShowWebPopupImpl Parms{};

	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainLobbyHUD.MainLobbyHUD_C.CanShowWebPopup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PopupId                                                (Parm, ZeroConstructor)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainLobbyHUD_C::CanShowWebPopup(const class FString& PopupId, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "CanShowWebPopup");

	Params::MainLobbyHUD_C_CanShowWebPopup Parms{};

	Parms.PopupId = std::move(PopupId);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function MainLobbyHUD.MainLobbyHUD_C.AddWebPopup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWebPopup_C*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainLobbyHUD_C::AddWebPopup(class UWebPopup_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "AddWebPopup");

	Params::MainLobbyHUD_C_AddWebPopup Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainLobbyHUD.MainLobbyHUD_C.RemoveWebPopup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWebPopup_C*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainLobbyHUD_C::RemoveWebPopup(class UWebPopup_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "RemoveWebPopup");

	Params::MainLobbyHUD_C_RemoveWebPopup Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           WebPopupID                                             (Parm, ZeroConstructor)

void UMainLobbyHUD_C::CloseWebPopupByID(const class FString& WebPopupID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "CloseWebPopupByID");

	Params::MainLobbyHUD_C_CloseWebPopupByID Parms{};

	Parms.WebPopupID = std::move(WebPopupID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainLobbyHUD.MainLobbyHUD_C.On_NameTag_Prepass_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainLobbyHUD_C::On_NameTag_Prepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "On_NameTag_Prepass_0");

	Params::MainLobbyHUD_C_On_NameTag_Prepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnCreateCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainLobbyHUD_C::OnCreateCharacter(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "OnCreateCharacter");

	Params::MainLobbyHUD_C_OnCreateCharacter Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnDestroyCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainLobbyHUD_C::OnDestroyCharacter(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "OnDestroyCharacter");

	Params::MainLobbyHUD_C_OnDestroyCharacter Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainLobbyHUD.MainLobbyHUD_C.GetNameTagWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULobbyVoiceChat_C*                Widget                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainLobbyHUD_C::GetNameTagWidget(int32 SlotIndex, class ULobbyVoiceChat_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainLobbyHUD_C", "GetNameTagWidget");

	Params::MainLobbyHUD_C_GetNameTagWidget Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}

}

