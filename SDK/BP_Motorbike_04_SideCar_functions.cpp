#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Motorbike_04_SideCar

#include "Basic.hpp"

#include "BP_Motorbike_04_SideCar_classes.hpp"
#include "BP_Motorbike_04_SideCar_parameters.hpp"


namespace SDK
{

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ExecuteUbergraph_BP_Motorbike_04_SideCar
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Motorbike_04_SideCar_C::ExecuteUbergraph_BP_Motorbike_04_SideCar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_SideCar_C", "ExecuteUbergraph_BP_Motorbike_04_SideCar");

	Params::BP_Motorbike_04_SideCar_C_ExecuteUbergraph_BP_Motorbike_04_SideCar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.OnDeath_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   KillingDamage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDamageEvent                     DamageEvent                                            (ConstParm, Parm, OutParm, ReferenceParm)
// class ATslPlayerState*                  PlayerInstigator                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Motorbike_04_SideCar_C::OnDeath_Event_0(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_SideCar_C", "OnDeath_Event_0");

	Params::BP_Motorbike_04_SideCar_C_OnDeath_Event_0 Parms{};

	Parms.KillingDamage = KillingDamage;
	Parms.DamageEvent = std::move(DamageEvent);
	Parms.PlayerInstigator = PlayerInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_13
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Motorbike_04_SideCar_C::InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_13(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_SideCar_C", "InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_13");

	Params::BP_Motorbike_04_SideCar_C_InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_13 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_7
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Motorbike_04_SideCar_C::InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_7(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_SideCar_C", "InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_7");

	Params::BP_Motorbike_04_SideCar_C_InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_7 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Motorbike_04_SideCar_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_SideCar_C", "ReceiveTick");

	Params::BP_Motorbike_04_SideCar_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_SideCar_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_SideCar_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InitCache
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::InitCache()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_SideCar_C", "InitCache");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.Process_FuelConsumption
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::Process_FuelConsumption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_SideCar_C", "Process_FuelConsumption");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ProcessCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::ProcessCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_SideCar_C", "ProcessCamera");

	UObject::ProcessEvent(Func, nullptr);
}

}

