// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10097ec0 size=0x1e
#include "C_BaseCombatCharacter.h"

// VC6 writes C_BaseCombatCharacter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseCombatCharacter *pcd_emit_10097ec0(const C_BaseCombatCharacter &other) { return new C_BaseCombatCharacter(other); }

// TARGET: ??_GC_BaseCombatCharacter@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10097ee0 size=0x27
#include "C_BaseCombatCharacter.h"
// TARGET: ??1C_BaseCombatCharacter@@UAE@XZ
C_BaseCombatCharacter::~C_BaseCombatCharacter()
{
}
// END FUNCTION

// FUNCTION: 0x10097fa0 size=0x2d
#include "C_BaseCombatCharacter.h"
#include "CBaseEntityList.h"
extern CBaseEntityList *g_102b8e98;
void *C_BaseCombatCharacter::vfunc148()
{
	unsigned int h = *(unsigned int *)((char *)this + 0x105c);
	if (h != 0xffffffff) {
		CBaseEntityListEntry *e = &g_102b8e98->m_EntPtrArray[h & 0x1fff];
		if (e->m_SerialNumber == (int)(h >> 13))
			return e->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10098120 size=0xa8
#include "C_BaseCombatCharacter.h"
#include "C_BaseCombatWeapon.h"
#include "ehandle.h"

inline C_BaseCombatWeapon *GetAW10098120(char *self)
{
	unsigned int h = *(unsigned int *)(self + 0x105c);
	if (h != 0xffffffff)
	{
		CBaseEntityListEntry &e = g_102b8e98->m_EntPtrArray[h & 0x1fff];
		if (e.m_SerialNumber == (int)(h >> 13))
			return (C_BaseCombatWeapon *)e.m_pEntity;
	}
	return 0;
}

bool C_BaseCombatCharacter::vfunc147(C_BaseCombatWeapon *pWeapon, int)
{
	if (!pWeapon->vfunc185())
		return false;
	if (((CBaseHandle *)((char *)this + 0x105c))->Get() && !GetAW10098120((char *)this)->vfunc189((int)pWeapon))
		return false;
	((CBaseHandle *)((char *)this + 0x105c))->m_Index = *pWeapon->vfunc1();
	pWeapon->vfunc188();
	return true;
}
// END FUNCTION

// FUNCTION: 0x100981d0 size=0x6
#include "C_BaseCombatCharacter.h"
namespace lifted {
extern char g_102ae7ac;
}
int C_BaseCombatCharacter::vfunc16()
{
    return (int)&lifted::g_102ae7ac;
}
// END FUNCTION

// FUNCTION: 0x100981e0 size=0x3
#include "C_BaseCombatCharacter.h"
int C_BaseCombatCharacter::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10098710 size=0x6
#include "C_BaseCombatCharacter.h"
namespace lifted {
extern char g_102ae794;
}
int C_BaseCombatCharacter::vfunc17()
{
    return (int)&lifted::g_102ae794;
}
// END FUNCTION

// FUNCTION: 0x10099850 size=0x14
#include "C_BaseCombatCharacter.h"
namespace lifted {
extern char g_102aea5c;
extern char g_102aea78;
bool sub_10099870();
}
int C_BaseCombatCharacter::vfunc143()
{
    bool t0 = lifted::sub_10099870();
    if (t0 != 0) {
        return (int)&lifted::g_102aea78;
    }
    return (int)&lifted::g_102aea5c;
}
// END FUNCTION
