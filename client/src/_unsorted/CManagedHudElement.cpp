// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004bb70 size=0x1
#include "CManagedHudElement.h"
void CManagedHudElement::vfunc113()
{
}
// END FUNCTION

// FUNCTION: 0x1004ea40 size=0x1
#include "CManagedHudElement.h"
void CManagedHudElement::vfunc112()
{
}
// END FUNCTION

// FUNCTION: 0x1005f0a0 size=0x44
#include "CManagedHudElement.h"
struct MHEView { int m_unk0; int m_unk4; void sub_1005f150(int); };
CManagedHudElement::CManagedHudElement(int a, int b) : CBasePanel(a, b)
{
	sub_101a9ff0(a);
	((MHEView *)(IManagedHudElement *)this)->sub_1005f150(a);
}
// END FUNCTION

// FUNCTION: 0x1005f110 size=0x1e
#include "CManagedHudElement.h"

// VC6 writes CManagedHudElement's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CManagedHudElement *pcd_emit_1005f110(const CManagedHudElement &other) { return new CManagedHudElement(other); }

// TARGET: ??_GCManagedHudElement@@UAEPAXI@Z
// END FUNCTION
