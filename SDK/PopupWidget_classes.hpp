#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PopupWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "TslGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PopupWidget.PopupWidget_C
// 0x0068 (0x02A8 - 0x0240)
class UPopupWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PopupEmerging;                                     // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                ButtonCancel;                                      // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                ButtonOK;                                          // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UCircularThrobber*                      CircularThrobber_0;                                // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             TextCancel;                                        // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             TextOK;                                            // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                Waiting;                                           // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class FText                                   Message;                                           // 0x0280(0x0018)(Edit, BlueprintVisible)
	UMulticastDelegateProperty_                   ButtonClickDispatcher;                             // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_PopupWidget(int32 EntryPoint);
	void XBoxOneOk();
	void Destruct();
	void Custom_Event_0();
	void Construct();
	void BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature();
	void SetPopup(EPopupStyle PopupStyle, const class FText& Message_0, const TDelegate<void(EPopupButtonID ButtonID)>& PressedDelegate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PopupWidget_C">();
	}
	static class UPopupWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPopupWidget_C>();
	}
};
static_assert(alignof(UPopupWidget_C) == 0x000008, "Wrong alignment on UPopupWidget_C");
static_assert(sizeof(UPopupWidget_C) == 0x0002A8, "Wrong size on UPopupWidget_C");
static_assert(offsetof(UPopupWidget_C, UberGraphFrame) == 0x000240, "Member 'UPopupWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPopupWidget_C, PopupEmerging) == 0x000248, "Member 'UPopupWidget_C::PopupEmerging' has a wrong offset!");
static_assert(offsetof(UPopupWidget_C, ButtonCancel) == 0x000250, "Member 'UPopupWidget_C::ButtonCancel' has a wrong offset!");
static_assert(offsetof(UPopupWidget_C, ButtonOK) == 0x000258, "Member 'UPopupWidget_C::ButtonOK' has a wrong offset!");
static_assert(offsetof(UPopupWidget_C, CircularThrobber_0) == 0x000260, "Member 'UPopupWidget_C::CircularThrobber_0' has a wrong offset!");
static_assert(offsetof(UPopupWidget_C, TextCancel) == 0x000268, "Member 'UPopupWidget_C::TextCancel' has a wrong offset!");
static_assert(offsetof(UPopupWidget_C, TextOK) == 0x000270, "Member 'UPopupWidget_C::TextOK' has a wrong offset!");
static_assert(offsetof(UPopupWidget_C, Waiting) == 0x000278, "Member 'UPopupWidget_C::Waiting' has a wrong offset!");
static_assert(offsetof(UPopupWidget_C, Message) == 0x000280, "Member 'UPopupWidget_C::Message' has a wrong offset!");
static_assert(offsetof(UPopupWidget_C, ButtonClickDispatcher) == 0x000298, "Member 'UPopupWidget_C::ButtonClickDispatcher' has a wrong offset!");

}

