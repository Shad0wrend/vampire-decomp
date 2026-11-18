// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e1e20 size=0x56
#include "CFlameCluster.h"
#include <string.h>

// TARGET: CFlameCluster::CFlameCluster
CFlameCluster::CFlameCluster() : CBaseEntity(0)
{
	m_b488 = 0;
	memset(m_aBurn464, 0, sizeof(m_aBurn464));
}
// END FUNCTION

// FUNCTION: 0x103e1ea0 size=0x86
#include "CFlameCluster.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CBaseEntity *CFlameCluster::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x450))->~CUtlVector<int>();
	sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103e1f60 size=0x13
#include "CFlameCluster.h"
void __fastcall sub_1000350d(CFlameCluster *self);

// TARGET: CFlameCluster::vfunc103
void CFlameCluster::vfunc103()
{
	sub_1000350d(this);
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103e1f90 size=0x49
#include "CFlameCluster.h"
void CFlameCluster::vfunc104()
{
	engine->vfunc17("flamethrower_hit_flame-emitter", 0);
	engine->vfunc17("flamethrower_hit_none-emitter", 0);
	engine->vfunc17("flamethrower_hit_steam-emitter", 0);
	engine->vfunc17("flamethrower_hit_glow-emitter", 0);
}
// END FUNCTION

// FUNCTION: 0x103e20c0 size=0x2e8
#include "utlrbtree.h"
#include "CFlameCluster.h"
#include "CEntityVSlots.h"
#include "CSprayCan.h"

// TARGET: CFlameCluster::vfunc134
void CFlameCluster::vfunc134()
{
	float flDelta = gpGlobals->curtime - *(float *)&m_n480;
	*(float *)&m_n480 = gpGlobals->curtime;

	int nLive = 0;
	Vector vMins(4096.0f, 4096.0f, 4096.0f);
	Vector vMaxs(-4096.0f, -4096.0f, -4096.0f);

	for (int i = 0; i < m_BurnList.Count(); ) {
		m_BurnList[i].m_flStrength -= flDelta;
		if (m_BurnList[i].m_flStrength < 0.0f) {
			m_BurnList.Remove(i);
		} else {
			i++;
			nLive++;
		}
	}

	if (nLive > 0) {
		int j, k;
		for (j = 0; j < nLive; j++) {
			for (k = 0; k < 3; k++) {
				if (m_BurnList[j].m_vecOrigin[k] > vMaxs[k])
					vMaxs[k] = m_BurnList[j].m_vecOrigin[k];
				if (m_BurnList[j].m_vecOrigin[k] < vMins[k])
					vMins[k] = m_BurnList[j].m_vecOrigin[k];
			}
		}
		for (k = 0; k < 3; k++) {
			vMaxs[k] += 24.0f;
			vMins[k] -= 24.0f;
		}

		Vector vCenter = (vMaxs + vMins) * 0.5f;
		((CEntityVSlots *)this)->slot62((const float *)&vCenter);
		sub_1009edc0(&vMins.x, &vMaxs.x);
		sub_100adf10(&vMins.x, &vMaxs.x);
		sub_100b3b00();

		CBaseEntity *pList[32];
		int nCount = sub_101cca80(pList, 32, &vMins, &vMaxs, 0, 0);
		for (int e = 0; e < nCount; e++) {
			for (j = 0; j < nLive; j++) {
				if (pList[e]->m_nTakeDamage) {
					if ((m_BurnList[j].m_vecOrigin - *(Vector *)((CEntityVSlots *)pList[e])->slot220()).Length() < 24.0f)
						sub_103e2000(pList[e], j);
				}
			}
		}
	} else {
		if (m_b488)
			sub_101cd940((char *)this);
	}

	m_flNextThink = gpGlobals->curtime + 0.5;

	if (sub_103e1740() > 0)
		vfunc123();
}
// END FUNCTION

// FUNCTION: 0x103e25a0 size=0xea
#include "DebugOverlay.h"
#include "utlrbtree.h"
#include "CFlameCluster.h"
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, unsigned int maxLen, const char *pFormat, ...);
// TARGET: CFlameCluster::vfunc123
void CFlameCluster::vfunc123()
{
	int nCount = m_BurnList.Count();
	for (int i = 0; i < nCount; i++) {
		Vector vecSize(24.0f, 24.0f, 24.0f);
		float flFade = m_BurnList[i].m_flStrength * 0.3333333333333333;
		Vector vecColor(1.0f, 0.0f, 0.0f);
		sub_10144290(&m_BurnList[i], vecColor, vecSize, 255, 0, 0, (int)(flFade * 255.0), 0.5f);
		char szText[16];
		Q_snprintf(szText, 32, "%d: %2.2", i, m_BurnList[i].m_flStrength);
		sub_10143710(&m_BurnList[i], szText, 0, 0.5f);
	}
}
// END FUNCTION
