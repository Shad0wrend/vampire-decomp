// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10193480 size=0x6
#include "datamap.h"
#include "CPropDestructable.h"
namespace lifted {
extern char g_1058dc3c;
}
datamap_t * CPropDestructable::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058dc3c);
}
// END FUNCTION

// FUNCTION: 0x101939b0 size=0x5d
#include "CPropDestructable.h"

void sub_100aa7b0(void *p);

struct CPropDestructableOutputsView
{
	char m_pad[0x730];
	COutputEvent m_Output730;
	COutputEvent m_OnHealthChanged748;
	char m_pad0760[0x7b4 - 0x760];
	COutputEvent m_Outputs7b4[8];
	COutputEvent m_Output874;
};

CBaseEntity *CPropDestructable::vfunc5(unsigned int flags)
{
	((CPropDestructableOutputsView *)this)->~CPropDestructableOutputsView();
	sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x10193a30 size=0x1
#include "CPropDestructable.h"
void CPropDestructable::vfunc265()
{
}
// END FUNCTION

// FUNCTION: 0x10193a50 size=0xf7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropDestructable.h"
#include "CBreakableProp.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

void CPropDestructable::vfunc103()
{
	*(const char **)((char *)this + 0x794) = *(const char **)((char *)this + 0x388);
	((CBreakableProp *)this)->CBreakableProp::vfunc103();
	const char *pszModel = *(const char **)((char *)this + 0x794);
	if (!pszModel)
		pszModel = g_106b8540;
	vfunc105(pszModel);
	*(int *)((char *)this + 0x784) = 0;
	*(int *)((char *)this + 0x780) = m_iHealth;
	sub_100b3580(0x40000);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
	}
	if (*(int *)((char *)this + 0x788))
		sub_100a5bb0();
	else
		sub_100a5ea0(6, 0, 0, 0);
	sub_100a9470(0);
}
// END FUNCTION

// FUNCTION: 0x10193b90 size=0x3b
#include "CPropDestructable.h"

void sub_1000978c();

// TARGET: ?vfunc104@CPropDestructable@@UAEXXZ
void CPropDestructable::vfunc104()
{
    sub_1000978c();
    int i = m_nStage784;
    if (i < 8) {
        int *p = &m_hModels794[i];
        do {
            if (*p == 0) {
                return;
            }
            engine->vfunc13((const char *)*p, 0);
            i = i + 1;
            p = p + 1;
        } while (i < 8);
    }
}
// END FUNCTION

// FUNCTION: 0x10193be0 size=0x36
#include "CPropDestructable.h"

void sub_10004dbd();

// TARGET: CPropDestructable::vfunc113
void CPropDestructable::vfunc113()
{
	sub_10004dbd();
	int i = 0;
	int *pModel = m_hModels794;
	do
	{
		if (*pModel == 0)
		{
			break;
		}
		m_n77c = i;
		i++;
		pModel++;
	} while (i < 8);
	sub_10193cc0(m_nStage784, 0);
}
// END FUNCTION

// FUNCTION: 0x10193fb0 size=0x9f
#include "CPropDestructable.h"
#include "CVDmg_t.h"

struct DmgView {
	CVDmg_t *m_pDmg;
	char m_pad04[0x30 - 4];
	float m_flDamage;
	char m_pad34[0x4c - 0x34];
};

struct PropView {
	char m_pad[0x78c];
	int m_iStageHealth;
	char m_pad790;
	char m_bDone;
};

int CPropDestructable::vfunc142(struct CTakeDamageInfo *pInfo)
{
#define pInfo ((const void *)pInfo)
	PropView *p = (PropView *)this;
	if (p->m_bDone)
		return 0;
	DmgView info = *(const DmgView *)pInfo;
	CVDmg_t *pDmg = *(CVDmg_t *volatile *)&info.m_pDmg;
	if ((pDmg ? (float)pDmg->sub_101faa70() : info.m_flDamage) <= (float)p->m_iStageHealth)
		return 0;
	info.m_flDamage = (pDmg ? (float)pDmg->sub_101faa70() : info.m_flDamage) - (float)p->m_iStageHealth;
	return sub_10008a1c(&info);
#undef pInfo
}
// END FUNCTION

// FUNCTION: 0x10194080 size=0xa8
#include "CPropDestructable.h"
#include "COutputEvent.h"

void CPropDestructable::vfunc144(void *pInfo)
{
#define pInfo ((const CPropDestructableDamage *)pInfo)
	CPropDestructableDamage info = *pInfo;
	int nStages = *(int *)((char *)this + 0x77c);
	if (*(int *)((char *)this + 0x784) == nStages) {
		((COutputEvent *)((char *)this + 0x874))->sub_100cd660((void *)pInfo->m_data[10], this, 0);
		if (*((char *)this + 0x790)) {
			sub_10007c57(&info);
			return;
		}
		m_nTakeDamage = 0;
		m_flags204 &= ~0x2000;
		m_field200 = 2;
	} else {
		sub_10193cc0(*(int *)((char *)this + 0x784) + 1, pInfo->m_data[11]);
		m_iHealth = *(int *)((char *)this + 0x780);
	}
#undef pInfo
}
// END FUNCTION

// FUNCTION: 0x101941d0 size=0x77
#include "CPropDestructable.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CEngineSlot35View {
    S10(a0) S10(a1) S10(a2)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
    virtual int vfunc35(int edict);
};
extern CEngineSlot35View *g_1070b22c;
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int entindex, int line, const char *text, int duration, int r, int g, int b, int a);

struct CPropDestructableUnit : CPropDestructable {
    int sub_10013ab1();
    int sub_101941d0();
};

int CPropDestructableUnit::sub_101941d0()
{
    int nLine = sub_10013ab1();
    if (*(unsigned char *)((char *)this + 0x224) & 1) {
        char szText[32];
        Q_snprintf(szText, 32, "Damage Level: %d", *(int *)((char *)this + 0x784));
        int nEdict = *(int *)((char *)this + 0x2e0);
        sub_101434b0(g_1070b22c->vfunc35(nEdict), nLine, szText, 0, 0xff, 0xff, 0xff, 0xff);
        nLine++;
    }
    return nLine;
}
// END FUNCTION
