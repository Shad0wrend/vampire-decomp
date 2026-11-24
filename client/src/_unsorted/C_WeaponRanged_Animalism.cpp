// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10006190 size=0x6
#include "C_WeaponRanged_Animalism.h"

// TARGET: C_WeaponRanged_Animalism::vfunc16
int C_WeaponRanged_Animalism::vfunc16()
{
	return (int)"C_WeaponRanged_Animalism";
}
// END FUNCTION

// FUNCTION: 0x10006ce0 size=0x18
#include "C_WeaponRanged_Animalism.h"
void sub_10064c60();
bool C_WeaponRanged_Animalism::vfunc189(int a)
{
	bool r = C_BaseCombatWeapon::vfunc189(a);
	sub_10064c60();
	return r;
}
// END FUNCTION

// FUNCTION: 0x10006d20 size=0x3c
#include "C_WeaponRanged_Animalism.h"
#include "CBaseHandle.h"
struct AnimView10006d20 {
    char m_unk[0x8fc];
    CBaseHandle m_h8fc;
    char m_unk900[0x978 - 0x900];
    int m_n978;
    int m_n97c;
};
void sub_10064dd0(CBaseHandle h, char flag);
// TARGET: C_WeaponRanged_Animalism::vfunc167
void C_WeaponRanged_Animalism::vfunc167()
{
    AnimView10006d20 *t = (AnimView10006d20 *)this;
    bool b = (t->m_n978 == 6 && t->m_n97c <= 5);
    sub_10064dd0(t->m_h8fc, b);
}
// END FUNCTION

// FUNCTION: 0x10006f90 size=0x1e
#include "C_WeaponRanged_Animalism.h"

// VC6 writes C_WeaponRanged_Animalism's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Animalism *pcd_emit_10006f90(const C_WeaponRanged_Animalism &other) { return new C_WeaponRanged_Animalism(other); }

// TARGET: ??_GC_WeaponRanged_Animalism@@UAEPAXI@Z
// END FUNCTION
