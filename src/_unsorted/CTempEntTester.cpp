// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10056d70 size=0xab
#include "CTempEntTester.h"


__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
extern "C" char *__cdecl _strlwr(char *);
extern "C" char *__cdecl strstr(const char *, const char *);
void sub_101cd940(CTempEntTester *pEnt);

// TARGET: CTempEntTester::vfunc103
void CTempEntTester::vfunc103()
{
	m_nFlags |= 0x40;
	m_pObject = sub_100507c0();
	if (m_pObject)
	{
		do
		{
			char szName[128];
			Q_strncpy(szName, m_pObject->sub_10050860(), 0x80);
			_strlwr(szName);
			if (strstr(szName, m_szFilter))
				break;
			m_pObject = m_pObject->sub_10050880();
		} while (m_pObject);
	}
	if (!m_pObject)
	{
		sub_101cd940(this);
		return;
	}
	m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10056e50 size=0x65
#include "CTempEntTester.h"
#include "CUnknown10050860.h"

void sub_101cd940(void *p);

// TARGET: CTempEntTester::sub_10056e50
void CTempEntTester::sub_10056e50()
{
	if (m_pObject) {
		m_pObject->vfunc3(vfunc220(), vfunc221());
		m_flNextThink = EngineGlobals::g_1070b228->curtime + 1.0f;
		if (!(EngineGlobals::g_1070b228->curtime >= m_flEndTime))
			return;
	}
	sub_101cd940(this);
}
// END FUNCTION

// FUNCTION: 0x10056ee0 size=0x1e
#include "CTempEntTester.h"

void sub_100aa7b0(void *p);

// TARGET: CTempEntTester::vfunc5
CTempEntTester *CTempEntTester::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
