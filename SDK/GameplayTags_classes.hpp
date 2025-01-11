#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayTags

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (0x0098 - 0x0028)
class UEditableGameplayTagQuery final : public UObject
{
public:
	class FString                                 UserDescription;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x10];                                      // 0x0038(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UEditableGameplayTagQueryExpression*    RootExpression;                                    // 0x0048(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      TagQueryExportText_Helper;                         // 0x0050(0x0048)(NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQuery">();
	}
	static class UEditableGameplayTagQuery* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQuery>();
	}
};
static_assert(alignof(UEditableGameplayTagQuery) == 0x000008, "Wrong alignment on UEditableGameplayTagQuery");
static_assert(sizeof(UEditableGameplayTagQuery) == 0x000098, "Wrong size on UEditableGameplayTagQuery");
static_assert(offsetof(UEditableGameplayTagQuery, UserDescription) == 0x000028, "Member 'UEditableGameplayTagQuery::UserDescription' has a wrong offset!");
static_assert(offsetof(UEditableGameplayTagQuery, RootExpression) == 0x000048, "Member 'UEditableGameplayTagQuery::RootExpression' has a wrong offset!");
static_assert(offsetof(UEditableGameplayTagQuery, TagQueryExportText_Helper) == 0x000050, "Member 'UEditableGameplayTagQuery::TagQueryExportText_Helper' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (0x0028 - 0x0028)
class UEditableGameplayTagQueryExpression : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression">();
	}
	static class UEditableGameplayTagQueryExpression* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression");
static_assert(sizeof(UEditableGameplayTagQueryExpression) == 0x000028, "Wrong size on UEditableGameplayTagQueryExpression");

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyTagsMatch final : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                  Tags;                                              // 0x0028(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AnyTagsMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AnyTagsMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AnyTagsMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_AnyTagsMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_AnyTagsMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyTagsMatch) == 0x000048, "Wrong size on UEditableGameplayTagQueryExpression_AnyTagsMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyTagsMatch, Tags) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_AnyTagsMatch::Tags' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AllTagsMatch final : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                  Tags;                                              // 0x0028(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AllTagsMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AllTagsMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AllTagsMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_AllTagsMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_AllTagsMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_AllTagsMatch) == 0x000048, "Wrong size on UEditableGameplayTagQueryExpression_AllTagsMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_AllTagsMatch, Tags) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_AllTagsMatch::Tags' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_NoTagsMatch final : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                  Tags;                                              // 0x0028(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_NoTagsMatch">();
	}
	static class UEditableGameplayTagQueryExpression_NoTagsMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_NoTagsMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_NoTagsMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_NoTagsMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_NoTagsMatch) == 0x000048, "Wrong size on UEditableGameplayTagQueryExpression_NoTagsMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_NoTagsMatch, Tags) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_NoTagsMatch::Tags' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyExprMatch final : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AnyExprMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AnyExprMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_AnyExprMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_AnyExprMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyExprMatch) == 0x000038, "Wrong size on UEditableGameplayTagQueryExpression_AnyExprMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyExprMatch, Expressions) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_AnyExprMatch::Expressions' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AllExprMatch final : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AllExprMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AllExprMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AllExprMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_AllExprMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_AllExprMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_AllExprMatch) == 0x000038, "Wrong size on UEditableGameplayTagQueryExpression_AllExprMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_AllExprMatch, Expressions) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_AllExprMatch::Expressions' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_NoExprMatch final : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_NoExprMatch">();
	}
	static class UEditableGameplayTagQueryExpression_NoExprMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_NoExprMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_NoExprMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_NoExprMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_NoExprMatch) == 0x000038, "Wrong size on UEditableGameplayTagQueryExpression_NoExprMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_NoExprMatch, Expressions) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_NoExprMatch::Expressions' has a wrong offset!");

// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class IGameplayTagAssetInterface final : public IInterface
{
public:
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer) const;
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch) const;
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch) const;
	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagAssetInterface">();
	}
	static class IGameplayTagAssetInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameplayTagAssetInterface>();
	}
};
static_assert(alignof(IGameplayTagAssetInterface) == 0x000008, "Wrong alignment on IGameplayTagAssetInterface");
static_assert(sizeof(IGameplayTagAssetInterface) == 0x000028, "Wrong size on IGameplayTagAssetInterface");

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayTagLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer& InOutTagContainer);
	static bool DoesContainerHaveTag(const struct FGameplayTagContainer& TagContainer, EGameplayTagMatchType ContainerTagsMatchType, const struct FGameplayTag& Tag, EGameplayTagMatchType TagMatchType);
	static bool DoesContainerMatchAllTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
	static bool DoesContainerMatchAnyTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
	static bool DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
	static bool DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, EGameplayTagMatchType ContainerTagsMatchType, const struct FGameplayTag& Tag, EGameplayTagMatchType TagMatchType);
	static bool DoGameplayTagsMatch(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, EGameplayTagMatchType TagOneMatchType, EGameplayTagMatchType TagTwoMatchType);
	static class FString GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	static class FString GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
	static int32 GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
	static bool HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
	static bool IsGameplayTagValid(const struct FGameplayTag& TagContainer);
	static struct FGameplayTagQuery MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	static struct FGameplayTag MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	static bool NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const class FString& B);
	static bool NotEqual_TagTag(const struct FGameplayTag& A, const class FString& B);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlueprintGameplayTagLibrary">();
	}
	static class UBlueprintGameplayTagLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintGameplayTagLibrary>();
	}
};
static_assert(alignof(UBlueprintGameplayTagLibrary) == 0x000008, "Wrong alignment on UBlueprintGameplayTagLibrary");
static_assert(sizeof(UBlueprintGameplayTagLibrary) == 0x000028, "Wrong size on UBlueprintGameplayTagLibrary");

// Class GameplayTags.GameplayTagsSettings
// 0x0028 (0x0050 - 0x0028)
class UGameplayTagsSettings final : public UObject
{
public:
	TArray<class FString>                         GameplayTags;                                      // 0x0028(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                         CommonlyReplicatedTags;                            // 0x0038(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                         NetIndexFirstBitSegment;                           // 0x0048(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagsSettings">();
	}
	static class UGameplayTagsSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagsSettings>();
	}
};
static_assert(alignof(UGameplayTagsSettings) == 0x000008, "Wrong alignment on UGameplayTagsSettings");
static_assert(sizeof(UGameplayTagsSettings) == 0x000050, "Wrong size on UGameplayTagsSettings");
static_assert(offsetof(UGameplayTagsSettings, GameplayTags) == 0x000028, "Member 'UGameplayTagsSettings::GameplayTags' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, CommonlyReplicatedTags) == 0x000038, "Member 'UGameplayTagsSettings::CommonlyReplicatedTags' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, NetIndexFirstBitSegment) == 0x000048, "Member 'UGameplayTagsSettings::NetIndexFirstBitSegment' has a wrong offset!");

// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0010 (0x0038 - 0x0028)
class UGameplayTagsDeveloperSettings final : public UObject
{
public:
	class FString                                 DeveloperConfigName;                               // 0x0028(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagsDeveloperSettings">();
	}
	static class UGameplayTagsDeveloperSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagsDeveloperSettings>();
	}
};
static_assert(alignof(UGameplayTagsDeveloperSettings) == 0x000008, "Wrong alignment on UGameplayTagsDeveloperSettings");
static_assert(sizeof(UGameplayTagsDeveloperSettings) == 0x000038, "Wrong size on UGameplayTagsDeveloperSettings");
static_assert(offsetof(UGameplayTagsDeveloperSettings, DeveloperConfigName) == 0x000028, "Member 'UGameplayTagsDeveloperSettings::DeveloperConfigName' has a wrong offset!");

// Class GameplayTags.GameplayTagsManager
// 0x0208 (0x0230 - 0x0028)
class UGameplayTagsManager final : public UObject
{
public:
	uint8                                         Pad_28[0x138];                                     // 0x0028(0x0138)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UDataTable*>                     GameplayTagTables;                                 // 0x0160(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_170[0xC0];                                     // 0x0170(0x00C0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FGameplayTag RequestGameplayTag(struct FName TagName, bool ErrorIfNotFound) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagsManager">();
	}
	static class UGameplayTagsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagsManager>();
	}
};
static_assert(alignof(UGameplayTagsManager) == 0x000008, "Wrong alignment on UGameplayTagsManager");
static_assert(sizeof(UGameplayTagsManager) == 0x000230, "Wrong size on UGameplayTagsManager");
static_assert(offsetof(UGameplayTagsManager, GameplayTagTables) == 0x000160, "Member 'UGameplayTagsManager::GameplayTagTables' has a wrong offset!");

}

