// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10003000 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc143()
{
}
// END FUNCTION

// FUNCTION: 0x10003010 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc144()
{
}
// END FUNCTION

// FUNCTION: 0x10003170 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc243()
{
}
// END FUNCTION

// FUNCTION: 0x1007ab20 size=0x1e
#include "C_BaseCombatWeapon.h"

// VC6 writes C_BaseCombatWeapon's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseCombatWeapon *pcd_emit_1007ab20() { return new C_BaseCombatWeapon; }

// TARGET: ??_GC_BaseCombatWeapon@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1007b650 size=0x27
#include "CWeaponOwner.h"
struct CWeaponOwner;
CWeaponOwner *sub_1007b160();

int __stdcall sub_1007b650(int nIndex)
{
	return *(int *)((char *)sub_1007b160() + 0x2668 + nIndex * 0x1093c);
}
// END FUNCTION

// FUNCTION: 0x1007bee0 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc173()
{
}
// END FUNCTION

// FUNCTION: 0x1007bf20 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc178()
{
}
// END FUNCTION

// FUNCTION: 0x1007c1f0 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc191()
{
}
// END FUNCTION

// FUNCTION: 0x1007c200 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc192()
{
}
// END FUNCTION

// FUNCTION: 0x1007c210 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc193()
{
}
// END FUNCTION

// FUNCTION: 0x1007c900 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc194()
{
}
// END FUNCTION

// FUNCTION: 0x1007c930 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc212()
{
}
// END FUNCTION

// FUNCTION: 0x1007c950 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc195()
{
}
// END FUNCTION

// FUNCTION: 0x1007ca90 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc200()
{
}
// END FUNCTION
