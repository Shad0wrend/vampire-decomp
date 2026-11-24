// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c8af0 size=0x1e
#include "C_VampMP_GameRules.h"

// VC6 writes C_VampMP_GameRules's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_VampMP_GameRules *pcd_emit_100c8af0() { return new C_VampMP_GameRules; }

// TARGET: ??_GC_VampMP_GameRules@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100c8b20 size=0x39
#include "C_VampMP_GameRules.h"
struct CX484 { char pad[0x484]; CX484 *sub_100792b0(); };
void sub_100c8810(CX484 *p);
#pragma warning(disable:4716)
// TARGET: C_VampMP_GameRules::vfunc7
int C_VampMP_GameRules::vfunc7()
{
	CX484 *p = (CX484 *)operator new(0x484);
	m_pX = p ? p->sub_100792b0() : 0;
	sub_100c8810(m_pX);
}
// END FUNCTION
