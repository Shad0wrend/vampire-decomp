// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10149da0 size=0xd
struct WeaponField8cc { char pad[0x8cc]; int m; };
void CBaseCombatWeapon::vfunc297(int value)
{
	((WeaponField8cc *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x10149e60 size=0x9
extern float g_104454c4;
float CBaseCombatWeapon::vfunc337(int a, int b) { return g_104454c4; }
// END FUNCTION

// FUNCTION: 0x1024f790 size=0x8
#include "CBaseCombatWeapon.h"

void CBaseCombatWeapon::vfunc359()
{
	vfunc119();
}
// END FUNCTION

// FUNCTION: 0x10252e80 size=0xb
void sub_1000c6f8();

void CBaseCombatWeapon::vfunc305()
{
	*(void **)((char *)this + 0x1ec) = (void *)sub_1000c6f8;
}
// END FUNCTION

// FUNCTION: 0x10255030 size=0x8
#include "CBaseCombatWeapon.h"

void CBaseCombatWeapon::vfunc340()
{
	vfunc348();
}
// END FUNCTION

// FUNCTION: 0x102577c0 size=0x8
// TARGET: CBaseCombatWeapon::vfunc288
void CBaseCombatWeapon::vfunc288()
{
	vfunc349();
}
// END FUNCTION
