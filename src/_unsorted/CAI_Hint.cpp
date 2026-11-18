// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102d0370 size=0x6
#include "CAI_Hint.h"
#include "datamap.h"
namespace lifted {
extern char g_106099f0;
}
datamap_t *CAI_Hint::vfunc82()
{
    return (datamap_t *)&lifted::g_106099f0;
}
// END FUNCTION

// FUNCTION: 0x102d0860 size=0x14
#include "CAI_Hint.h"

// TARGET: CAI_Hint::vfunc77
void CAI_Hint::vfunc77()
{
	sub_100a8710();
	*(int *)((char *)this + 0x5e8) = 1;
}
// END FUNCTION

// FUNCTION: 0x102d0890 size=0x14
#include "CAI_Hint.h"

// TARGET: CAI_Hint::vfunc78
void CAI_Hint::vfunc78()
{
	sub_100a8990();
	*(int *)((char *)this + 0x5e8) = 0;
}
// END FUNCTION

// FUNCTION: 0x102d08c0 size=0x8
#include "CAI_Hint.h"
// TARGET: CAI_Hint::vfunc119
void CAI_Hint::vfunc119()
{
	vfunc77();
}
// END FUNCTION

// FUNCTION: 0x102d0b60 size=0x4d9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_Hint.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include <math.h>

struct CInspectStatLevels { float sub_1006caa0(int level); };	// stub 0x1000c874
struct CInspectStatOwner
{
	int sub_1006cf30(const char *pszName);	// stub 0x1000fb46
	CInspectStatLevels *sub_1006cff0(int id);
};
extern CInspectStatOwner g_106c7c34;
extern float g_104454c4;
void __fastcall sub_100b3b00(CAI_Hint *p);

struct CAI_HintNameView
{
	char m_pad0000[0x26c];
	const char *m_name26c;
};

void CAI_Hint::vfunc103()
{
	static int s_nStat = g_106c7c34.sub_1006cf30("NPC_Cover_Distance_Scalar");
	CInspectStatLevels *pStat = g_106c7c34.sub_1006cff0(s_nStat);
	{
		CAI_HintNameView *pView = (CAI_HintNameView *)this;
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (pView->m_name26c ? pView->m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	sub_100b3b00(this);
	float flNew;
	switch (m_n5dc) {
	case 0x27d8:
		if (m_f454 == g_104454c4) m_f454 = 17.0f;
		if (m_f45c == g_104454c4) m_f45c = 256.0f;
		if (m_f460 == g_104454c4) m_f460 = 3.4028235e+38f;
		if (m_f464 == g_104454c4) m_f464 = 3.0f;
		m_f454 = m_f454 + 43.0f;
		m_f458 = cos(m_f454 * 0.017453292f);
		flNew = pStat->sub_1006caa0((int)m_f464);
		m_n474 = 1;
		m_f464 = flNew;
		break;
	case 100:
	case 101:
		if (m_f454 == g_104454c4) m_f454 = 60.0f;
		if (m_f45c == g_104454c4) m_f45c = 256.0f;
		if (m_f460 == g_104454c4) m_f460 = 3.4028235e+38f;
		if (m_f464 == g_104454c4) m_f464 = 3.0f;
		if (m_f45c == g_104454c4) m_f464 = 3.0f;
		m_f454 = m_f454 * 0.5f;
		m_f458 = cos(m_f454 * 0.017453292f);
		flNew = pStat->sub_1006caa0((int)m_f464);
		m_n474 = 1;
		m_f464 = flNew;
		break;
	case 0x283c:
		if (m_f454 == g_104454c4) m_f454 = 60.0f;
		if (m_f45c == g_104454c4) m_f45c = 256.0f;
		if (m_f460 == g_104454c4) m_f460 = 3.4028235e+38f;
		if (m_f464 == g_104454c4) m_f464 = 3.0f;
		m_f454 = m_f454 * 0.5f;
		m_f458 = cos(m_f454 * 0.017453292f);
		flNew = pStat->sub_1006caa0((int)m_f464);
		m_n474 = 4;
		m_f464 = flNew;
		break;
	case 0x283d:
		if (m_f454 == g_104454c4) m_f454 = 10.0f;
		if (m_f45c == g_104454c4) m_f45c = 64.0f;
		if (m_f460 == g_104454c4) m_f460 = 256.0f;
		if (m_f464 == g_104454c4) m_f464 = 3.0f;
		m_f454 = m_f454 * 0.5f;
		m_f458 = cos(m_f454 * 0.017453292f);
		flNew = pStat->sub_1006caa0((int)m_f464);
		m_n474 = 8;
		m_f464 = flNew;
		break;
	case 0x28a0:
		if (m_f454 == g_104454c4) m_f454 = 10.0f;
		if (m_f45c == g_104454c4) m_f45c = 64.0f;
		if (m_f460 == g_104454c4) m_f460 = 3.4028235e+38f;
		if (m_f464 == g_104454c4) m_f464 = 3.0f;
		m_f454 = m_f454 * 0.5f;
		m_f458 = cos(m_f454 * 0.017453292f);
		flNew = pStat->sub_1006caa0((int)m_f464);
		m_n474 = 0x10;
		m_f464 = flNew;
		break;
	}
	if (m_n470 < 1 || m_n470 > 32)
		m_n470 = -1;
	else
		m_n470 = 1 << (m_n470 - 1);
}
// END FUNCTION

// FUNCTION: 0x102d1320 size=0x18
// TARGET: CAI_Hint::vfunc163
#include "CAI_Hint.h"
char CAI_Hint::vfunc163()
{
    if (m_n5e8 != 0) {
        return 0;
    }
    return m_n5dc == 0xd;
}
// END FUNCTION

// FUNCTION: 0x102d1600 size=0x104
#include "CAI_Hint.h"
__declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
extern float g_104454c4;
void sub_101434b0(int, int, const char *, int, int, int, int, int);
int sub_100a02b0();
struct SHintView {
    char pad0[0x224]; unsigned char fl;
    char pad1[0x2e0 - 0x225]; int edict;
    char pad2[0x5dc - 0x2e4]; int id;
    char pad3[0xc]; float lockTime;
};
inline int ENTINDEX(int pEdict)
{
    return engine->vfunc35(pEdict);
}
int CAI_Hint::vfunc124()
{
    int n = sub_100a02b0();
    SHintView *v = (SHintView *)this;
    char buf[0x200];
    if (v->fl & 1) {
        Q_snprintf(buf, 0x200, "%i", v->id);
        sub_101434b0(ENTINDEX(v->edict), n, buf, 0, 255, 255, 255, 255);
        float d = v->lockTime - gpGlobals->curtime;
        n++;
        if (g_104454c4 > d) d = g_104454c4;
        Q_snprintf(buf, 0x200, "delay %f", (double)d);
        sub_101434b0(ENTINDEX(v->edict), n, buf, 0, 255, 255, 255, 255);
        n++;
    }
    return n;
}
// END FUNCTION

// FUNCTION: 0x102d2ec0 size=0x5
#include "CAI_Hint.h"
#include "CBaseEntity.h"

// TARGET: CAI_Hint::vfunc219
// the game's 0x102d2ec0: a tail call (jmp) of CBaseEntity::vfunc219
float * CAI_Hint::vfunc219()
{
	return ((CBaseEntity *)this)->CBaseEntity::vfunc219();
}
// END FUNCTION

// FUNCTION: 0x102d2ee0 size=0x8
#include "CBaseEntity.h"
#include "CAI_Hint.h"
// TARGET: CAI_Hint::sub_102d2ee0
unsigned char CAI_Hint::sub_102d2ee0()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x102d2f00 size=0x1e
#include "CAI_Hint.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_Hint::vfunc5
CAI_Hint *CAI_Hint::vfunc5(unsigned int flags)
{
	sub_10005e98();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102d3ec0 size=0x6c
#include "CAI_Hint.h"
#include "CBaseEntity.h"

__declspec(dllimport) void DevMsg(const char *, ...);

void CAI_Hint::vfunc130(int a)
{
	((CBaseEntity *)this)->CBaseEntity::vfunc130(a);
	char *pNode = sub_102d3e60();
	if (!pNode) {
		DevMsg("Warning: AI hint has incorrect or no AI node\n");
		return;
	}
	Vector vecPos = *(Vector *)(pNode + 8);
	vfunc181(&vecPos, 0, 0);
	*(CAI_Hint **)(pNode + 0xa0) = this;
}
// END FUNCTION
