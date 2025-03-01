#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlueZoneGpsWidget_Base

#include "Basic.hpp"

#include "BlueZoneGpsWidget_Base_classes.hpp"
#include "BlueZoneGpsWidget_Base_parameters.hpp"


namespace SDK
{

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ExecuteUbergraph_BlueZoneGpsWidget_Base
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::ExecuteUbergraph_BlueZoneGpsWidget_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "ExecuteUbergraph_BlueZoneGpsWidget_Base");

	Params::BlueZoneGpsWidget_Base_C_ExecuteUbergraph_BlueZoneGpsWidget_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildUpdateGauge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Gauge                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::ChildUpdateGauge(float Gauge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "ChildUpdateGauge");

	Params::BlueZoneGpsWidget_Base_C_ChildUpdateGauge Parms{};

	Parms.Gauge = Gauge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildResetPlayzone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Gauge                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::ChildResetPlayzone(float Gauge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "ChildResetPlayzone");

	Params::BlueZoneGpsWidget_Base_C_ChildResetPlayzone Parms{};

	Parms.Gauge = Gauge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildResetBluezone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Gauge                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::ChildResetBluezone(float Gauge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "ChildResetBluezone");

	Params::BlueZoneGpsWidget_Base_C_ChildResetBluezone Parms{};

	Parms.Gauge = Gauge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnEnterNextPlayzone
// (BlueprintCallable, BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::OnEnterNextPlayzone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "OnEnterNextPlayzone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnLeaveNextPlayzone
// (BlueprintCallable, BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::OnLeaveNextPlayzone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "OnLeaveNextPlayzone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnWarning
// (BlueprintCallable, BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::OnWarning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "OnWarning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.MainPrepassWidgetVisibilitySetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::MainPrepassWidgetVisibilitySetting(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "MainPrepassWidgetVisibilitySetting");

	Params::BlueZoneGpsWidget_Base_C_MainPrepassWidgetVisibilitySetting Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetDangerLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   DangerLength_0                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          A                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          B                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetDangerLength(float* DangerLength_0, struct FVector* A, struct FVector* B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetDangerLength");

	Params::BlueZoneGpsWidget_Base_C_GetDangerLength Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DangerLength_0 != nullptr)
		*DangerLength_0 = Parms.DangerLength_0;

	if (A != nullptr)
		*A = std::move(Parms.A);

	if (B != nullptr)
		*B = std::move(Parms.B);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayzonePositionAndRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          NextPlayzonePosition                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetNextPlayzonePositionAndRadius(struct FVector* NextPlayzonePosition, float* Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetNextPlayzonePositionAndRadius");

	Params::BlueZoneGpsWidget_Base_C_GetNextPlayzonePositionAndRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NextPlayzonePosition != nullptr)
		*NextPlayzonePosition = std::move(Parms.NextPlayzonePosition);

	if (Radius != nullptr)
		*Radius = Parms.Radius;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayzonePositionAndRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          CurrentPlayzonePosition                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CurrentPlayzoneRadius                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetCurrentPlayzonePositionAndRadius(struct FVector* CurrentPlayzonePosition, float* CurrentPlayzoneRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetCurrentPlayzonePositionAndRadius");

	Params::BlueZoneGpsWidget_Base_C_GetCurrentPlayzonePositionAndRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentPlayzonePosition != nullptr)
		*CurrentPlayzonePosition = std::move(Parms.CurrentPlayzonePosition);

	if (CurrentPlayzoneRadius != nullptr)
		*CurrentPlayzoneRadius = Parms.CurrentPlayzoneRadius;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezonePositionAndRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          BluezonePosition                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   BluezoneRadius                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetBluezonePositionAndRadius(struct FVector* BluezonePosition, float* BluezoneRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetBluezonePositionAndRadius");

	Params::BlueZoneGpsWidget_Base_C_GetBluezonePositionAndRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BluezonePosition != nullptr)
		*BluezonePosition = std::move(Parms.BluezonePosition);

	if (BluezoneRadius != nullptr)
		*BluezoneRadius = Parms.BluezoneRadius;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetSafeLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   SafeLength_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          A                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          B                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetSafeLength(float* SafeLength_0, struct FVector* A, struct FVector* B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetSafeLength");

	Params::BlueZoneGpsWidget_Base_C_GetSafeLength Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SafeLength_0 != nullptr)
		*SafeLength_0 = Parms.SafeLength_0;

	if (A != nullptr)
		*A = std::move(Parms.A);

	if (B != nullptr)
		*B = std::move(Parms.B);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayerzoneToCharacterDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Scale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Direction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetNextPlayerzoneToCharacterDirection(float Scale, struct FVector* Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetNextPlayerzoneToCharacterDirection");

	Params::BlueZoneGpsWidget_Base_C_GetNextPlayerzoneToCharacterDirection Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetPlayerLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   PlayerLength_0                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetPlayerLength(float* PlayerLength_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetPlayerLength");

	Params::BlueZoneGpsWidget_Base_C_GetPlayerLength Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerLength_0 != nullptr)
		*PlayerLength_0 = Parms.PlayerLength_0;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayerzoneToCurrentBlueZoneLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Length                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetNextPlayerzoneToCurrentBlueZoneLength(float* Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetNextPlayerzoneToCurrentBlueZoneLength");

	Params::BlueZoneGpsWidget_Base_C_GetNextPlayerzoneToCurrentBlueZoneLength Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Length != nullptr)
		*Length = Parms.Length;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsInNextPlayzoneBp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsIn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::IsInNextPlayzoneBp(bool* bIsIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "IsInNextPlayzoneBp");

	Params::BlueZoneGpsWidget_Base_C_IsInNextPlayzoneBp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsIn != nullptr)
		*bIsIn = Parms.bIsIn;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetIsInNextPlayzone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FLinearColor UBlueZoneGpsWidget_Base_C::GetIsInNextPlayzone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetIsInNextPlayzone");

	Params::BlueZoneGpsWidget_Base_C_GetIsInNextPlayzone Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.BluezoneGpsMainPrepass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::BluezoneGpsMainPrepass(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "BluezoneGpsMainPrepass");

	Params::BlueZoneGpsWidget_Base_C_BluezoneGpsMainPrepass Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.UpdateGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::UpdateGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "UpdateGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetBluezoneReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewBluezoneReset                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::SetBluezoneReset(bool bNewBluezoneReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "SetBluezoneReset");

	Params::BlueZoneGpsWidget_Base_C_SetBluezoneReset Parms{};

	Parms.bNewBluezoneReset = bNewBluezoneReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetPlayzoneReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewPlayzoneReset                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::SetPlayzoneReset(bool bNewPlayzoneReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "SetPlayzoneReset");

	Params::BlueZoneGpsWidget_Base_C_SetPlayzoneReset Parms{};

	Parms.bNewPlayzoneReset = bNewPlayzoneReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetResetTimeCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ResetTimeCheck                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::SetResetTimeCheck(float ResetTimeCheck, float* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "SetResetTimeCheck");

	Params::BlueZoneGpsWidget_Base_C_SetResetTimeCheck Parms{};

	Parms.ResetTimeCheck = ResetTimeCheck;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::SetReset(bool bReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "SetReset");

	Params::BlueZoneGpsWidget_Base_C_SetReset Parms{};

	Parms.bReset = bReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.TickWaning
// (Public, BlueprintCallable, BlueprintEvent)

void UBlueZoneGpsWidget_Base_C::TickWaning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "TickWaning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetTslCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACharacter*                       Character                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetTslCharacter(class ACharacter** Character) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetTslCharacter");

	Params::BlueZoneGpsWidget_Base_C_GetTslCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezoneTimeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBlueZoneGpsWidget_Base_C::GetBluezoneTimeText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetBluezoneTimeText");

	Params::BlueZoneGpsWidget_Base_C_GetBluezoneTimeText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsStateBluezoneReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsReady                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::IsStateBluezoneReady(bool* IsReady) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "IsStateBluezoneReady");

	Params::BlueZoneGpsWidget_Base_C_IsStateBluezoneReady Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsReady != nullptr)
		*IsReady = Parms.IsReady;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezoneStateBp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Stae                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetBluezoneStateBp(int32* Stae) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetBluezoneStateBp");

	Params::BlueZoneGpsWidget_Base_C_GetBluezoneStateBp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Stae != nullptr)
		*Stae = Parms.Stae;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayzonePositionBp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          NextPlayzonePosition                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetNextPlayzonePositionBp(struct FVector* NextPlayzonePosition) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetNextPlayzonePositionBp");

	Params::BlueZoneGpsWidget_Base_C_GetNextPlayzonePositionBp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NextPlayzonePosition != nullptr)
		*NextPlayzonePosition = std::move(Parms.NextPlayzonePosition);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextplayzoneRadiusBp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   NextPlayzoneRadius                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetNextplayzoneRadiusBp(float* NextPlayzoneRadius) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetNextplayzoneRadiusBp");

	Params::BlueZoneGpsWidget_Base_C_GetNextplayzoneRadiusBp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NextPlayzoneRadius != nullptr)
		*NextPlayzoneRadius = Parms.NextPlayzoneRadius;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsResetBp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bReset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::IsResetBp(bool* bReset) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "IsResetBp");

	Params::BlueZoneGpsWidget_Base_C_IsResetBp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bReset != nullptr)
		*bReset = Parms.bReset;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayZonePosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          CurrentPlayzonePosition                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetCurrentPlayZonePosition(struct FVector* CurrentPlayzonePosition) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetCurrentPlayZonePosition");

	Params::BlueZoneGpsWidget_Base_C_GetCurrentPlayZonePosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentPlayzonePosition != nullptr)
		*CurrentPlayzonePosition = std::move(Parms.CurrentPlayzonePosition);
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayZoneRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   CurrentPlayzoneRadius                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetCurrentPlayZoneRadius(float* CurrentPlayzoneRadius) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetCurrentPlayZoneRadius");

	Params::BlueZoneGpsWidget_Base_C_GetCurrentPlayZoneRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentPlayzoneRadius != nullptr)
		*CurrentPlayzoneRadius = Parms.CurrentPlayzoneRadius;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsBluezoneReset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bBluezoneReset                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::IsBluezoneReset(bool* bBluezoneReset) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "IsBluezoneReset");

	Params::BlueZoneGpsWidget_Base_C_IsBluezoneReset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bBluezoneReset != nullptr)
		*bBluezoneReset = Parms.bBluezoneReset;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsPlayzoneReset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bReset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::IsPlayzoneReset(bool* bReset) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "IsPlayzoneReset");

	Params::BlueZoneGpsWidget_Base_C_IsPlayzoneReset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bReset != nullptr)
		*bReset = Parms.bReset;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetResetTimeCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ResetTimeCheck                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::GetResetTimeCheck(float* ResetTimeCheck) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "GetResetTimeCheck");

	Params::BlueZoneGpsWidget_Base_C_GetResetTimeCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ResetTimeCheck != nullptr)
		*ResetTimeCheck = Parms.ResetTimeCheck;
}


// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsWarningBp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bIsWarning                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlueZoneGpsWidget_Base_C::IsWarningBp(bool* bIsWarning) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlueZoneGpsWidget_Base_C", "IsWarningBp");

	Params::BlueZoneGpsWidget_Base_C_IsWarningBp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsWarning != nullptr)
		*bIsWarning = Parms.bIsWarning;
}

}

