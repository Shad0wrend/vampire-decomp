// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 5 blocks
#include "vampire.h"

// FUNCTION: 0x10056ba0 size=0x107
#include "CTempEntTester.h"
#include "CEntityVSlots.h"

extern "C" int atoi(const char *);
extern "C" char *_strlwr(char *);
__declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);
CEntityVSlots *sub_100a9ab0(const char *pszName, const float *pOrigin, const float *pAngles, CEntityVSlots *pOwner);

struct CGlobalVarsTE
{
	char pad[0xc];
	float curtime;
};
extern CGlobalVarsTE *g_1070b228;

#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))

CTempEntTester *sub_10056ba0(const float *pOrigin, const float *pAngles, const char *pszLifetime, const char *pszName)
{
	float life;
	char classname[128];
	if (pszLifetime && pszLifetime[0]) {
		life = atoi(pszLifetime);
		life = max(1.0, life);
		life = min(1000.0, life);
		life += g_1070b228->curtime;
	} else {
		Msg("Usage:  te <lifetime> <entname>\n");
		return 0;
	}
	if (pszName && pszName[0]) {
		Q_strncpy(classname, pszName, sizeof(classname));
		_strlwr(classname);
	} else {
		Msg("Usage:  te <lifetime> <entname>\n");
		return 0;
	}
	CTempEntTester *pTester = (CTempEntTester *)sub_100a9ab0("te_tester", pOrigin, pAngles, 0);
	if (!pTester)
		return 0;
	Q_strncpy(pTester->m_szFilter, classname, 64);
	pTester->m_flEndTime = life;
	pTester->vfunc103();
	return pTester;
}
// END FUNCTION

// FUNCTION: 0x10056d00 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1044c854[];	// CTempEntTester vftable
extern const char g_1053f72c[];

// TARGET: te_tester
DLL_EXPORT CBaseEntity *te_tester()
{
	void *mem = sub_100aa720(0x498);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1044c854;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1053f72c);
	return p;
}
// END FUNCTION

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
