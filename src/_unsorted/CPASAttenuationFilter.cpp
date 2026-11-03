// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002ac40 size=0xa2
#include "CPASAttenuationFilter.h"

// TARGET: ??_GCPASAttenuationFilter@@UAEPAXI@Z
CPASAttenuationFilter::CPASAttenuationFilter() {}
// END FUNCTION

// FUNCTION: 0x1019d4b0 size=0x165
#include "CBaseEntity.h"
#include "CUnknown101cf0a0.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b22c.h"
#include "CUnknown1019d130.h"
#include "ScopeTrace.h"

extern CUnknown1070b22c *g_1070b22c;
extern float g_104454c4;

struct SFilterView
{
	virtual void v0();
	virtual void v1();
	virtual int GetRecipientCount();
	virtual int GetRecipientIndex(int slot);
};

struct SPlayerEnt { char m_pad[0xa8]; void *m_pPlayer; };

CBaseEntity *sub_100ab250(CUnknown1070b22c_Edict *pEdict);

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct SPlayerObj
{
	SV100(a0) SV100(a1) SV10(a20) SV10(a21)
	virtual float *vfunc220();
};

static inline CBaseEntity *Instance(CUnknown1070b22c_Edict *pEdict)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
	if (!pEdict)
		pEdict = g_1070b22c->vfunc38(0);
	return sub_100ab250(pEdict);
}

static inline CBaseEntity *Instance(int iEnt)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
	return Instance(g_1070b22c->vfunc38(iEnt));
}

void CPASAttenuationFilter::Filter(const Vector &origin, float attenuation)
{
	if (gpGlobals->maxClients == 1)
		return;
	if (attenuation <= g_104454c4)
		return;
	SFilterView *pView = (SFilterView *)this;
	for (int i = pView->GetRecipientCount() - 1; i >= 0; i--) {
		int index = pView->GetRecipientIndex(i);
		CBaseEntity *pEnt = Instance(index);
		if (pEnt) {
			SPlayerObj *pPlayer = (SPlayerObj *)((SPlayerEnt *)pEnt)->m_pPlayer;
			if (pPlayer) {
				Vector delta;
				delta = *(Vector *)pPlayer->vfunc220() - origin;
				if (!(delta.Length() <= 2000.0f / attenuation))
					((CUnknown1019d130 *)this)->sub_1019d130((CBaseEntity *)pPlayer);
			}
		}
	}
}
// END FUNCTION
