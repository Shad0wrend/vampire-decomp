// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10002f70 size=0x6
#include "C_ItemPhysicsHand.h"
namespace lifted {
extern char g_102713c8;
}
int C_ItemPhysicsHand::vfunc17()
{
    return (int)&lifted::g_102713c8;
}
// END FUNCTION

// FUNCTION: 0x100031d0 size=0x47
#include "C_ItemPhysicsHand.h"
extern unsigned int g_104cfe50;
// TARGET: ?vfunc246@C_ItemPhysicsHand@@UAEHHHH@Z
int C_ItemPhysicsHand::vfunc246(int a, int b, int c)
{
	if (g_104cfe50 & 1) {
		switch (b) {
		case 0xef:
			g_104cfe50 |= 0x100000;
			return 0;
		case 0xf0:
			g_104cfe50 |= 0x80000;
			return 0;
		}
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10003220 size=0xd
#include "C_ItemPhysicsHand.h"
namespace lifted {
int sub_1005fa40(int);
}
bool C_ItemPhysicsHand::vfunc188()
{
    lifted::sub_1005fa40(1);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10003230 size=0x1e
#include "C_ItemPhysicsHand.h"

// VC6 writes C_ItemPhysicsHand's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemPhysicsHand *pcd_emit_10003230() { return new C_ItemPhysicsHand; }

// TARGET: ??_GC_ItemPhysicsHand@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10003250 size=0x6
#include "C_ItemPhysicsHand.h"
namespace lifted {
extern char g_102713e4;
}
int C_ItemPhysicsHand::vfunc16()
{
    return (int)&lifted::g_102713e4;
}
// END FUNCTION

// FUNCTION: 0x10003260 size=0x3
#include "C_ItemPhysicsHand.h"
int C_ItemPhysicsHand::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100034d0 size=0x25
#include "C_ItemPhysicsHand.h"
void sub_1005fa40(int);
// TARGET: ?vfunc189@C_ItemPhysicsHand@@UAE_NH@Z
bool C_ItemPhysicsHand::vfunc189(int a) { int r = C_BaseCombatWeapon::vfunc189(a); sub_1005fa40(0); return r ? true : false; }
// END FUNCTION
