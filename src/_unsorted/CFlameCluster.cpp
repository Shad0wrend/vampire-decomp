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

CFlameCluster *CFlameCluster::vfunc5(unsigned int flags)
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
