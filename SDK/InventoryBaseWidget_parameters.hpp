#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryBaseWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function InventoryBaseWidget.InventoryBaseWidget_C.ExecuteUbergraph_InventoryBaseWidget
// 0x0018 (0x0018 - 0x0000)
struct InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInventoryWidget_C*                     K2Node_CustomEvent_Inventory;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UItem*                                  K2Node_CustomEvent_DroppingItem;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget) == 0x000008, "Wrong alignment on InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget");
static_assert(sizeof(InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget) == 0x000018, "Wrong size on InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget");
static_assert(offsetof(InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget, EntryPoint) == 0x000000, "Member 'InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget, K2Node_CustomEvent_Inventory) == 0x000008, "Member 'InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget::K2Node_CustomEvent_Inventory' has a wrong offset!");
static_assert(offsetof(InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget, K2Node_CustomEvent_DroppingItem) == 0x000010, "Member 'InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget::K2Node_CustomEvent_DroppingItem' has a wrong offset!");

// Function InventoryBaseWidget.InventoryBaseWidget_C.SetInventoryWidget
// 0x0008 (0x0008 - 0x0000)
struct InventoryBaseWidget_C_SetInventoryWidget final
{
public:
	class UInventoryWidget_C*                     Inventory;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryBaseWidget_C_SetInventoryWidget) == 0x000008, "Wrong alignment on InventoryBaseWidget_C_SetInventoryWidget");
static_assert(sizeof(InventoryBaseWidget_C_SetInventoryWidget) == 0x000008, "Wrong size on InventoryBaseWidget_C_SetInventoryWidget");
static_assert(offsetof(InventoryBaseWidget_C_SetInventoryWidget, Inventory) == 0x000000, "Member 'InventoryBaseWidget_C_SetInventoryWidget::Inventory' has a wrong offset!");

// Function InventoryBaseWidget.InventoryBaseWidget_C.UpdateDragDragDroppingItem
// 0x0008 (0x0008 - 0x0000)
struct InventoryBaseWidget_C_UpdateDragDragDroppingItem final
{
public:
	class UItem*                                  DroppingItem;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryBaseWidget_C_UpdateDragDragDroppingItem) == 0x000008, "Wrong alignment on InventoryBaseWidget_C_UpdateDragDragDroppingItem");
static_assert(sizeof(InventoryBaseWidget_C_UpdateDragDragDroppingItem) == 0x000008, "Wrong size on InventoryBaseWidget_C_UpdateDragDragDroppingItem");
static_assert(offsetof(InventoryBaseWidget_C_UpdateDragDragDroppingItem, DroppingItem) == 0x000000, "Member 'InventoryBaseWidget_C_UpdateDragDragDroppingItem::DroppingItem' has a wrong offset!");

}

