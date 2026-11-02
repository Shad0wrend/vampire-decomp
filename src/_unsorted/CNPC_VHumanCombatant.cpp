// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103869a0 size=0x6
#include "CNPC_VHumanCombatant.h"
namespace lifted {
extern char g_1063f8a0;
}
datamap_t * CNPC_VHumanCombatant::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1063f8a0);
}
// END FUNCTION

// FUNCTION: 0x10386ae0 size=0x6
#include "CNPC_VHumanCombatant.h"

extern int g_1093b498;

void *CNPC_VHumanCombatant::vfunc580()
{
	return (void *)&g_1093b498;
}
// END FUNCTION

// FUNCTION: 0x10386b00 size=0x6
#include "CNPC_VHumanCombatant.h"

extern char *g_1063f8c0;

const char *CNPC_VHumanCombatant::sub_10386b00()
{
	return g_1063f8c0;
}
// END FUNCTION

// FUNCTION: 0x10386b20 size=0x1e
#include "CNPC_VHumanCombatant.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VHumanCombatant::vfunc5
CNPC_VHumanCombatant *CNPC_VHumanCombatant::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10386c20 size=0x6
#include "CNPC_VHumanCombatant.h"

extern char g_1063f8b8;

char CNPC_VHumanCombatant::vfunc452()
{
	return g_1063f8b8;
}
// END FUNCTION

// FUNCTION: 0x10386c80 size=0x1d
#include "CNPC_VHumanCombatant.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b47c;
extern B g_10936c74;
int CNPC_VHumanCombatant::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b47c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10387110 size=0x13
#include "CNPC_VHumanCombatant.h"
void CNPC_VHumanCombatant::vfunc103()
{
	sub_10384690();
	sub_10012855(0x40);
}
// END FUNCTION

// FUNCTION: 0x10387140 size=0x27
#include "CNPC_VHumanCombatant.h"

struct CAI_BaseNPCTroikaPlaceholder {
    void sub_1000c531();
};

// TARGET: CNPC_VHumanCombatant::vfunc420
void CNPC_VHumanCombatant::vfunc420()
{
    ((CAI_BaseNPCTroikaPlaceholder *)this)->sub_1000c531();
    if (sub_1032e7b0() != 0) {
        CNPC_VHumanCombatantWeapon *w = sub_1032e7b0();
        void **vt = *(void ***)w;
        ((void (__fastcall *)(void *))vt[0x108 / 4])(w);
    }
}
// END FUNCTION

// FUNCTION: 0x103872d0 size=0x67
#include "CBaseEntity.h"
#include "CNPC_VHumanCombatant.h"

typedef int (__fastcall *WeaponFlagsFn)(void *pWeapon, void **vt);
typedef int (__fastcall *DecideFn)(void *pThis, void **vt, unsigned int flags);

int CNPC_VHumanCombatant::vfunc438()
{
	*(int *)((char *)this + 0x1b2c) = 0x15;
	switch (*(int *)((char *)this + 0x5cc0)) {
	case 2: {
		*((char *)this + 0x5b80) = 0;
		unsigned int flags;
		if (sub_1032e7b0()) {
			void *pWeapon = sub_1032e7b0();
			void **wvt = *(void ***)pWeapon;
			flags = ((WeaponFlagsFn)wvt[360])(pWeapon, wvt);
		} else {
			flags = 0;
		}
		void **vt = *(void ***)this;
		int r;
		if (flags & 0x18000) {
			r = ((DecideFn)vt[604])(this, vt, flags);
			if (r)
				return r;
		} else {
			r = ((DecideFn)vt[605])(this, vt, flags);
			if (r)
				return r;
		}
		break;
	}
	}
	return sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x10387520 size=0x44
#include "CNPC_VCop.h"
struct FlagView { char pad[0x4c]; unsigned int m_flags; char pad2[0x65f4 - 0x50]; char m_b65f4; };
static inline bool HasBit7(unsigned int f) { return ((f >> 7) & 1) != 0; }
void CNPC_VHumanCombatant::vfunc453()
{
	sub_102ad140();
	if (((char (__fastcall *)(void *))(*(void ***)this)[158])(this)) {
		if (((int (__fastcall *)(void *))(*(void ***)this)[464])(this) == 1) {
			FlagView *v = (FlagView *)this;
			if (!HasBit7(v->m_flags) || !v->m_b65f4)
				sub_10269eb0(0x3e);
		}
	}
}
// END FUNCTION
