// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x10096100 size=0x240
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"
#include <string.h>

extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int entindex, int offset, const char *text, int duration, int r, int g, int b, int a);

static inline void DebugEntityText(int nEdict, int nOffset, const char *pszText)
{
	sub_101434b0(engine->vfunc35(nEdict), nOffset, pszText, 0, 255, 255, 255, 255);
}

int CBaseAnimating::vfunc124()
{
	ScopeTrace trace("CBaseAnimating::DrawDebugTextOverlays", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int text_offset = CBaseEntity::vfunc124();
	if (*(unsigned char *)((char *)this + 0x224) & 1)
	{
		int nUnused;
		char tempstr[1024];
		const char *pszModel = *vfunc9(&nUnused);
		if (!pszModel)
			pszModel = "";
		Q_snprintf(tempstr, sizeof(tempstr), "Model:%s", pszModel);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "Sequence: (%3d) %s", *(int *)((char *)this + 0x6f0), sub_1008fe80(*(int *)((char *)this + 0x6f0)));
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		const char *pszActivity = sub_1008ff50(*(int *)((char *)this + 0x6f0));
		if (pszActivity && strlen(pszActivity) > 0)
		{
			Q_snprintf(tempstr, sizeof(tempstr), "Activity %s", pszActivity);
			DebugEntityText(m_pEdict2e0, text_offset, tempstr);
			text_offset++;
		}
		Q_snprintf(tempstr, sizeof(tempstr), "Cycle: %.5f", *(float *)((char *)this + 0x6f8));
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
	}
	return text_offset;
}
// END FUNCTION
