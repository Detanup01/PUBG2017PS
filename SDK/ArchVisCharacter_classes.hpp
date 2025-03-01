#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArchVisCharacter

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class ArchVisCharacter.ArchVisCharacter
// 0x0070 (0x0830 - 0x07C0)
class AArchVisCharacter final : public ACharacter
{
public:
	class FString                                 LookUpAxisName;                                    // 0x07C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LookUpAtRateAxisName;                              // 0x07D0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TurnAxisName;                                      // 0x07E0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TurnAtRateAxisName;                                // 0x07F0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MoveForwardAxisName;                               // 0x0800(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MoveRightAxisName;                                 // 0x0810(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MouseSensitivityScale_Pitch;                       // 0x0820(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MouseSensitivityScale_Yaw;                         // 0x0824(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_828[0x8];                                      // 0x0828(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ArchVisCharacter">();
	}
	static class AArchVisCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<AArchVisCharacter>();
	}
};
static_assert(alignof(AArchVisCharacter) == 0x000010, "Wrong alignment on AArchVisCharacter");
static_assert(sizeof(AArchVisCharacter) == 0x000830, "Wrong size on AArchVisCharacter");
static_assert(offsetof(AArchVisCharacter, LookUpAxisName) == 0x0007C0, "Member 'AArchVisCharacter::LookUpAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, LookUpAtRateAxisName) == 0x0007D0, "Member 'AArchVisCharacter::LookUpAtRateAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, TurnAxisName) == 0x0007E0, "Member 'AArchVisCharacter::TurnAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, TurnAtRateAxisName) == 0x0007F0, "Member 'AArchVisCharacter::TurnAtRateAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MoveForwardAxisName) == 0x000800, "Member 'AArchVisCharacter::MoveForwardAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MoveRightAxisName) == 0x000810, "Member 'AArchVisCharacter::MoveRightAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MouseSensitivityScale_Pitch) == 0x000820, "Member 'AArchVisCharacter::MouseSensitivityScale_Pitch' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MouseSensitivityScale_Yaw) == 0x000824, "Member 'AArchVisCharacter::MouseSensitivityScale_Yaw' has a wrong offset!");

// Class ArchVisCharacter.ArchVisCharMovementComponent
// 0x0050 (0x07A0 - 0x0750)
class UArchVisCharMovementComponent final : public UCharacterMovementComponent
{
public:
	struct FRotator                               RotationalAcceleration;                            // 0x0750(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                               RotationalDeceleration;                            // 0x075C(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                               MaxRotationalVelocity;                             // 0x0768(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         MinPitch;                                          // 0x0774(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxPitch;                                          // 0x0778(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingFriction;                                   // 0x077C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingSpeed;                                      // 0x0780(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingAcceleration;                               // 0x0784(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_788[0x18];                                     // 0x0788(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ArchVisCharMovementComponent">();
	}
	static class UArchVisCharMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArchVisCharMovementComponent>();
	}
};
static_assert(alignof(UArchVisCharMovementComponent) == 0x000010, "Wrong alignment on UArchVisCharMovementComponent");
static_assert(sizeof(UArchVisCharMovementComponent) == 0x0007A0, "Wrong size on UArchVisCharMovementComponent");
static_assert(offsetof(UArchVisCharMovementComponent, RotationalAcceleration) == 0x000750, "Member 'UArchVisCharMovementComponent::RotationalAcceleration' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, RotationalDeceleration) == 0x00075C, "Member 'UArchVisCharMovementComponent::RotationalDeceleration' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MaxRotationalVelocity) == 0x000768, "Member 'UArchVisCharMovementComponent::MaxRotationalVelocity' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MinPitch) == 0x000774, "Member 'UArchVisCharMovementComponent::MinPitch' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MaxPitch) == 0x000778, "Member 'UArchVisCharMovementComponent::MaxPitch' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingFriction) == 0x00077C, "Member 'UArchVisCharMovementComponent::WalkingFriction' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingSpeed) == 0x000780, "Member 'UArchVisCharMovementComponent::WalkingSpeed' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingAcceleration) == 0x000784, "Member 'UArchVisCharMovementComponent::WalkingAcceleration' has a wrong offset!");

}

