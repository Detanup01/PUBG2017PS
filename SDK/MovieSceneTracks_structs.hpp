#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieSceneTracks

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
// NumValues: 0x0007
enum class EMovieScene3DPathSection_Axis : uint8
{
	X                                        = 0,
	Y                                        = 1,
	Z                                        = 2,
	NEG_X                                    = 3,
	NEG_Y                                    = 4,
	NEG_Z                                    = 5,
	MovieScene3DPathSection_MAX              = 6,
};

// Enum MovieSceneTracks.EShow3DTrajectory
// NumValues: 0x0004
enum class EShow3DTrajectory : uint8
{
	EST_OnlyWhenSelected                     = 0,
	EST_Always                               = 1,
	EST_Never                                = 2,
	EST_MAX                                  = 3,
};

// Enum MovieSceneTracks.ELevelVisibility
// NumValues: 0x0003
enum class ELevelVisibility : uint8
{
	Visible                                  = 0,
	Hidden                                   = 1,
	ELevelVisibility_MAX                     = 2,
};

// Enum MovieSceneTracks.EParticleKey
// NumValues: 0x0004
enum class EParticleKey : uint8
{
	Activate                                 = 0,
	Deactivate                               = 1,
	Trigger                                  = 2,
	EParticleKey_MAX                         = 3,
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DLocationKeyStruct final : public FMovieSceneKeyStruct
{
public:
	struct FVector                                Location;                                          // 0x0008(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x1C];                                      // 0x0014(0x001C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieScene3DLocationKeyStruct) == 0x000008, "Wrong alignment on FMovieScene3DLocationKeyStruct");
static_assert(sizeof(FMovieScene3DLocationKeyStruct) == 0x000030, "Wrong size on FMovieScene3DLocationKeyStruct");
static_assert(offsetof(FMovieScene3DLocationKeyStruct, Location) == 0x000008, "Member 'FMovieScene3DLocationKeyStruct::Location' has a wrong offset!");

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x0070 (0x0078 - 0x0008)
struct FMovieScene3DTransformKeyStruct final : public FMovieSceneKeyStruct
{
public:
	struct FVector                                Location;                                          // 0x0008(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0014(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0020(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4C];                                      // 0x002C(0x004C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieScene3DTransformKeyStruct) == 0x000008, "Wrong alignment on FMovieScene3DTransformKeyStruct");
static_assert(sizeof(FMovieScene3DTransformKeyStruct) == 0x000078, "Wrong size on FMovieScene3DTransformKeyStruct");
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Location) == 0x000008, "Member 'FMovieScene3DTransformKeyStruct::Location' has a wrong offset!");
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Rotation) == 0x000014, "Member 'FMovieScene3DTransformKeyStruct::Rotation' has a wrong offset!");
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Scale) == 0x000020, "Member 'FMovieScene3DTransformKeyStruct::Scale' has a wrong offset!");

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x0088 (0x0088 - 0x0000)
struct FScalarParameterNameAndCurve final
{
public:
	struct FName                                   ParameterName;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Index;                                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRichCurve                             ParameterCurve;                                    // 0x0010(0x0078)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FScalarParameterNameAndCurve) == 0x000008, "Wrong alignment on FScalarParameterNameAndCurve");
static_assert(sizeof(FScalarParameterNameAndCurve) == 0x000088, "Wrong size on FScalarParameterNameAndCurve");
static_assert(offsetof(FScalarParameterNameAndCurve, ParameterName) == 0x000000, "Member 'FScalarParameterNameAndCurve::ParameterName' has a wrong offset!");
static_assert(offsetof(FScalarParameterNameAndCurve, Index) == 0x000008, "Member 'FScalarParameterNameAndCurve::Index' has a wrong offset!");
static_assert(offsetof(FScalarParameterNameAndCurve, ParameterCurve) == 0x000010, "Member 'FScalarParameterNameAndCurve::ParameterCurve' has a wrong offset!");

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x01F0 (0x01F0 - 0x0000)
struct FColorParameterNameAndCurves final
{
public:
	struct FName                                   ParameterName;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Index;                                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRichCurve                             RedCurve;                                          // 0x0010(0x0078)(NativeAccessSpecifierPublic)
	struct FRichCurve                             GreenCurve;                                        // 0x0088(0x0078)(NativeAccessSpecifierPublic)
	struct FRichCurve                             BlueCurve;                                         // 0x0100(0x0078)(NativeAccessSpecifierPublic)
	struct FRichCurve                             AlphaCurve;                                        // 0x0178(0x0078)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FColorParameterNameAndCurves) == 0x000008, "Wrong alignment on FColorParameterNameAndCurves");
static_assert(sizeof(FColorParameterNameAndCurves) == 0x0001F0, "Wrong size on FColorParameterNameAndCurves");
static_assert(offsetof(FColorParameterNameAndCurves, ParameterName) == 0x000000, "Member 'FColorParameterNameAndCurves::ParameterName' has a wrong offset!");
static_assert(offsetof(FColorParameterNameAndCurves, Index) == 0x000008, "Member 'FColorParameterNameAndCurves::Index' has a wrong offset!");
static_assert(offsetof(FColorParameterNameAndCurves, RedCurve) == 0x000010, "Member 'FColorParameterNameAndCurves::RedCurve' has a wrong offset!");
static_assert(offsetof(FColorParameterNameAndCurves, GreenCurve) == 0x000088, "Member 'FColorParameterNameAndCurves::GreenCurve' has a wrong offset!");
static_assert(offsetof(FColorParameterNameAndCurves, BlueCurve) == 0x000100, "Member 'FColorParameterNameAndCurves::BlueCurve' has a wrong offset!");
static_assert(offsetof(FColorParameterNameAndCurves, AlphaCurve) == 0x000178, "Member 'FColorParameterNameAndCurves::AlphaCurve' has a wrong offset!");

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DScaleKeyStruct final : public FMovieSceneKeyStruct
{
public:
	struct FVector                                Scale;                                             // 0x0008(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x1C];                                      // 0x0014(0x001C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieScene3DScaleKeyStruct) == 0x000008, "Wrong alignment on FMovieScene3DScaleKeyStruct");
static_assert(sizeof(FMovieScene3DScaleKeyStruct) == 0x000030, "Wrong size on FMovieScene3DScaleKeyStruct");
static_assert(offsetof(FMovieScene3DScaleKeyStruct, Scale) == 0x000008, "Member 'FMovieScene3DScaleKeyStruct::Scale' has a wrong offset!");

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x0178 (0x0178 - 0x0000)
struct FVectorParameterNameAndCurves final
{
public:
	struct FName                                   ParameterName;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Index;                                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRichCurve                             XCurve;                                            // 0x0010(0x0078)(NativeAccessSpecifierPublic)
	struct FRichCurve                             YCurve;                                            // 0x0088(0x0078)(NativeAccessSpecifierPublic)
	struct FRichCurve                             ZCurve;                                            // 0x0100(0x0078)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FVectorParameterNameAndCurves) == 0x000008, "Wrong alignment on FVectorParameterNameAndCurves");
static_assert(sizeof(FVectorParameterNameAndCurves) == 0x000178, "Wrong size on FVectorParameterNameAndCurves");
static_assert(offsetof(FVectorParameterNameAndCurves, ParameterName) == 0x000000, "Member 'FVectorParameterNameAndCurves::ParameterName' has a wrong offset!");
static_assert(offsetof(FVectorParameterNameAndCurves, Index) == 0x000008, "Member 'FVectorParameterNameAndCurves::Index' has a wrong offset!");
static_assert(offsetof(FVectorParameterNameAndCurves, XCurve) == 0x000010, "Member 'FVectorParameterNameAndCurves::XCurve' has a wrong offset!");
static_assert(offsetof(FVectorParameterNameAndCurves, YCurve) == 0x000088, "Member 'FVectorParameterNameAndCurves::YCurve' has a wrong offset!");
static_assert(offsetof(FVectorParameterNameAndCurves, ZCurve) == 0x000100, "Member 'FVectorParameterNameAndCurves::ZCurve' has a wrong offset!");

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DRotationKeyStruct final : public FMovieSceneKeyStruct
{
public:
	struct FRotator                               Rotation;                                          // 0x0008(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x1C];                                      // 0x0014(0x001C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieScene3DRotationKeyStruct) == 0x000008, "Wrong alignment on FMovieScene3DRotationKeyStruct");
static_assert(sizeof(FMovieScene3DRotationKeyStruct) == 0x000030, "Wrong size on FMovieScene3DRotationKeyStruct");
static_assert(offsetof(FMovieScene3DRotationKeyStruct, Rotation) == 0x000008, "Member 'FMovieScene3DRotationKeyStruct::Rotation' has a wrong offset!");

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x0050 (0x0058 - 0x0008)
struct FMovieSceneColorKeyStruct final : public FMovieSceneKeyStruct
{
public:
	struct FLinearColor                           Color;                                             // 0x0008(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_18[0x40];                                      // 0x0018(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneColorKeyStruct) == 0x000008, "Wrong alignment on FMovieSceneColorKeyStruct");
static_assert(sizeof(FMovieSceneColorKeyStruct) == 0x000058, "Wrong size on FMovieSceneColorKeyStruct");
static_assert(offsetof(FMovieSceneColorKeyStruct, Color) == 0x000008, "Member 'FMovieSceneColorKeyStruct::Color' has a wrong offset!");

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// 0x0040 (0x0048 - 0x0008)
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	uint8                                         Pad_8[0x40];                                       // 0x0008(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneVectorKeyStructBase) == 0x000008, "Wrong alignment on FMovieSceneVectorKeyStructBase");
static_assert(sizeof(FMovieSceneVectorKeyStructBase) == 0x000048, "Wrong size on FMovieSceneVectorKeyStructBase");

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// 0x0018 (0x0060 - 0x0048)
struct FMovieSceneVector4KeyStruct final : public FMovieSceneVectorKeyStructBase
{
public:
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               Vector;                                            // 0x0050(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneVector4KeyStruct) == 0x000010, "Wrong alignment on FMovieSceneVector4KeyStruct");
static_assert(sizeof(FMovieSceneVector4KeyStruct) == 0x000060, "Wrong size on FMovieSceneVector4KeyStruct");
static_assert(offsetof(FMovieSceneVector4KeyStruct, Vector) == 0x000050, "Member 'FMovieSceneVector4KeyStruct::Vector' has a wrong offset!");

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// 0x0010 (0x0058 - 0x0048)
struct FMovieSceneVectorKeyStruct final : public FMovieSceneVectorKeyStructBase
{
public:
	struct FVector                                Vector;                                            // 0x0048(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneVectorKeyStruct) == 0x000008, "Wrong alignment on FMovieSceneVectorKeyStruct");
static_assert(sizeof(FMovieSceneVectorKeyStruct) == 0x000058, "Wrong size on FMovieSceneVectorKeyStruct");
static_assert(offsetof(FMovieSceneVectorKeyStruct, Vector) == 0x000048, "Member 'FMovieSceneVectorKeyStruct::Vector' has a wrong offset!");

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0x0008 (0x0050 - 0x0048)
struct FMovieSceneVector2DKeyStruct final : public FMovieSceneVectorKeyStructBase
{
public:
	struct FVector2D                              Vector;                                            // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneVector2DKeyStruct) == 0x000008, "Wrong alignment on FMovieSceneVector2DKeyStruct");
static_assert(sizeof(FMovieSceneVector2DKeyStruct) == 0x000050, "Wrong size on FMovieSceneVector2DKeyStruct");
static_assert(offsetof(FMovieSceneVector2DKeyStruct, Vector) == 0x000048, "Member 'FMovieSceneVector2DKeyStruct::Vector' has a wrong offset!");

}

