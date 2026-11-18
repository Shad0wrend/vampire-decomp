// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034e490 size=0x6
#include "datamap.h"
#include "CFogController.h"
namespace lifted {
extern char g_10625e58;
}
datamap_t *CFogController::vfunc82()
{
    return (datamap_t *)&lifted::g_10625e58;
}
// END FUNCTION

// FUNCTION: 0x1034ea80 size=0x3e3
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CFogController.h"
#include "CWorld.h"
#include "DebugOverlay.h"
#include "ScopeTrace.h"
#include "Tier1.h"

CBaseEntity *sub_100ab250(void *pEdict);

struct fogcolor32 { unsigned char r, g, b, a; };

inline void DebugEntityText(int edict, int line, const char *pszText)
{
	sub_101434b0(engine->vfunc35(edict), line, pszText, 0, 255, 255, 255, 255);
}

inline int SnprintfF(int (*fn)(char *, int, const char *, ...), char *buf, const char *fmt, double f)
{
	return fn(buf, 512, fmt, f);
}

int CFogController::vfunc124()
{
	long text_offset = this->CBaseEntity::vfunc124();
	if (m_fDebugOverlays224 & 1) {
		CWorld *pWorld;
		char tempstr[512];
		void *pEdict = engine->vfunc38(0);
		{
			ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
			if (!pEdict)
				pEdict = engine->vfunc38(0);
			pWorld = (CWorld *)sub_100ab250(pEdict);
		}
		const char *pszState = pWorld->m_bColdWorld ? "On" : "Off";
		int (*Q_snprintf)(char *, int, const char *, ...) = g_109f388c;
		Q_snprintf(tempstr, sizeof(tempstr), "State: %s", pszState);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		double d = pWorld->m_flFogStart;
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "Start: %3.0f", d);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		d = pWorld->m_flFogEnd;
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "End  : %3.0f", d);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset += 1;
		fogcolor32 color = *(fogcolor32 *)&pWorld->m_nFogColor1;
		int t0 = color.r; Q_snprintf(tempstr, sizeof(tempstr), "1) Red  : %i", t0);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "1) Green: %i", color.g);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "1) Blue : %i", color.b);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		color = *(fogcolor32 *)&pWorld->m_nFogColor2;
		Q_snprintf(tempstr, sizeof(tempstr), "2) Red  : %i", color.r);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "2) Green: %i", color.g);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "2) Blue : %i", color.b);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x1034ef70 size=0x1e
#include "CFogController.h"

void sub_100aa7b0(void *p);

// TARGET: CFogController::vfunc5
CBaseEntity *CFogController::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
