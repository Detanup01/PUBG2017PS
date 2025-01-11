#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayTags

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum GameplayTags.EGameplayTagQueryExprType
// NumValues: 0x0008
enum class EGameplayTagQueryExprType : uint8
{
	Undefined                                = 0,
	AnyTagsMatch                             = 1,
	AllTagsMatch                             = 2,
	NoTagsMatch                              = 3,
	AnyExprMatch                             = 4,
	AllExprMatch                             = 5,
	NoExprMatch                              = 6,
	EGameplayTagQueryExprType_MAX            = 7,
};

// Enum GameplayTags.EGameplayContainerMatchType
// NumValues: 0x0003
enum class EGameplayContainerMatchType : uint8
{
	Any                                      = 0,
	All                                      = 1,
	EGameplayContainerMatchType_MAX          = 2,
};

// Enum GameplayTags.EGameplayTagMatchType
// NumValues: 0x0003
enum class EGameplayTagMatchType : uint8
{
	Explicit                                 = 0,
	IncludeParentTags                        = 1,
	EGameplayTagMatchType_MAX                = 2,
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0038 (0x0040 - 0x0008)
struct FGameplayTagTableRow final : public FTableRowBase
{
public:
	class FString                                 Tag;                                               // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   CategoryText;                                      // 0x0018(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                 DevComment;                                        // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayTagTableRow) == 0x000008, "Wrong alignment on FGameplayTagTableRow");
static_assert(sizeof(FGameplayTagTableRow) == 0x000040, "Wrong size on FGameplayTagTableRow");
static_assert(offsetof(FGameplayTagTableRow, Tag) == 0x000008, "Member 'FGameplayTagTableRow::Tag' has a wrong offset!");
static_assert(offsetof(FGameplayTagTableRow, CategoryText) == 0x000018, "Member 'FGameplayTagTableRow::CategoryText' has a wrong offset!");
static_assert(offsetof(FGameplayTagTableRow, DevComment) == 0x000030, "Member 'FGameplayTagTableRow::DevComment' has a wrong offset!");

// ScriptStruct GameplayTags.GameplayTag
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FGameplayTag final
{
public:
	struct FName                                   TagName;                                           // 0x0000(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FGameplayTag) == 0x000008, "Wrong alignment on FGameplayTag");
static_assert(sizeof(FGameplayTag) == 0x000008, "Wrong size on FGameplayTag");
static_assert(offsetof(FGameplayTag, TagName) == 0x000000, "Member 'FGameplayTag::TagName' has a wrong offset!");

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0048 (0x0048 - 0x0000)
struct FGameplayTagQuery final
{
public:
	int32                                         TokenStreamVersion;                                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   TagDictionary;                                     // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                 QueryTokenStream;                                  // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                 UserDescription;                                   // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 AutoDescription;                                   // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FGameplayTagQuery) == 0x000008, "Wrong alignment on FGameplayTagQuery");
static_assert(sizeof(FGameplayTagQuery) == 0x000048, "Wrong size on FGameplayTagQuery");
static_assert(offsetof(FGameplayTagQuery, TokenStreamVersion) == 0x000000, "Member 'FGameplayTagQuery::TokenStreamVersion' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, TagDictionary) == 0x000008, "Member 'FGameplayTagQuery::TagDictionary' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, QueryTokenStream) == 0x000018, "Member 'FGameplayTagQuery::QueryTokenStream' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, UserDescription) == 0x000028, "Member 'FGameplayTagQuery::UserDescription' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, AutoDescription) == 0x000038, "Member 'FGameplayTagQuery::AutoDescription' has a wrong offset!");

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0078 (0x0078 - 0x0000)
struct alignas(0x08) FGameplayTagNode final
{
public:
	uint8                                         Pad_0[0x78];                                       // 0x0000(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayTagNode) == 0x000008, "Wrong alignment on FGameplayTagNode");
static_assert(sizeof(FGameplayTagNode) == 0x000078, "Wrong size on FGameplayTagNode");

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0020 (0x0020 - 0x0000)
struct FGameplayTagContainer final
{
public:
	TArray<struct FGameplayTag>                   GameplayTags;                                      // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FName>                           Tags;                                              // 0x0010(0x0010)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FGameplayTagContainer) == 0x000008, "Wrong alignment on FGameplayTagContainer");
static_assert(sizeof(FGameplayTagContainer) == 0x000020, "Wrong size on FGameplayTagContainer");
static_assert(offsetof(FGameplayTagContainer, GameplayTags) == 0x000000, "Member 'FGameplayTagContainer::GameplayTags' has a wrong offset!");
static_assert(offsetof(FGameplayTagContainer, Tags) == 0x000010, "Member 'FGameplayTagContainer::Tags' has a wrong offset!");

}

