// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10384760 size=0x64
#include "CNPC_VHuman.h"
struct CUnknown1027d990 { int sub_1027d990(); };
inline void VSub(const Vector &a, const Vector &b, Vector &r)
{
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
}
// TARGET: CNPC_VHuman::vfunc563
void CNPC_VHuman::vfunc563(CEntityVSlots *pEnt, Vector *pVec, int a, int b)
{
    if (((CUnknown1027d990 *)this)->sub_1027d990() == 2) {
        Vector *pOrigin = pEnt->slot217();
        Vector tmp;
        Vector *pOther = pEnt->slot193(&tmp);
        Vector d;
        VSub(*pOther, *pOrigin, d);
        pVec->x += d.x;
        pVec->y += d.y;
        pVec->z += d.z;
    }
}
// END FUNCTION

// FUNCTION: 0x103858b0 size=0x108
#include "CNPC_VHuman.h"

int CNPC_VHuman::vfunc376(int act)
{
	switch (act) {
	case 0x3d:
		act = 0x3b;
		break;
	case 0x3e:
		act = 0x3c;
		break;
	case 0x9f:
		act = 0x9d;
		break;
	case 0xa0:
		act = 0x9e;
		break;
	case 0xa3:
		act = 0xa1;
		break;
	case 0xa4:
		act = 0xa2;
		break;
	}
	return sub_10295710(act);
}
// END FUNCTION

// FUNCTION: 0x10385c30 size=0x8d
#include "CNPC_VHuman.h"
#include "CBaseCombatWeapon.h"

struct CGlobalVarsX { char m_pad[0xc]; float m_curtime; };
extern CGlobalVarsX *g_1070b228;

struct CRandomX {
	virtual void v0();
	virtual float RandomFloat(float flMin, float flMax);
};
extern CRandomX *g_1070b244;

struct CNotifyX {
	virtual void v0();
	virtual void v1();
};
extern CNotifyX *g_10924edc;

char CNPC_VHuman::vfunc600(int unused)
{
	unsigned int flags = sub_10007e19() ? ((CBaseCombatWeapon *)sub_10007e19())->vfunc360() : 0;
	if ((flags & 0x18000) && !*((char *)this + 0x6078)) {
		if ((*(CAI_NamedThing **)((char *)this + 0x65e8))->sub_1025dca0(this, 0)) {
			*((char *)this + 0x6078) = 1;
			*(float *)((char *)this + 0x6074) = g_1070b244->RandomFloat(7.5f, 15.0f) + g_1070b228->m_curtime;
			g_10924edc->v1();
			return 1;
		}
		*((char *)this + 0x6078) = 0;
	}
	return 0;
}
// END FUNCTION
