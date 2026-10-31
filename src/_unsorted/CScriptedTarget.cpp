// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034d410 size=0x8
#include "CScriptedTarget.h"
// TARGET: CScriptedTarget::sub_1034d410
unsigned char CScriptedTarget::sub_1034d410()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x1034d430 size=0x6
#include "CScriptedTarget.h"
namespace lifted {
extern char g_106257e8;
}
datamap_t * CScriptedTarget::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_106257e8);
}
// END FUNCTION

// FUNCTION: 0x1034d6e0 size=0xdb
#include "CScriptedTarget.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

#define SV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

// The entity's virtual table up to slot 217 (GetAbsOrigin).
struct CScriptedTargetSlots
{
	SV100(a) SV100(b) SV10(c)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual float *vfunc217();
};

int sub_10325e70();
extern int g_10938054;

// TARGET: CScriptedTarget::vfunc103
void CScriptedTarget::vfunc103()
{
    if (g_10938054 == 0)
        g_10938054 = sub_10325e70();
    {
        ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    }
    sub_100b3b00();
    float *pOrigin = ((CScriptedTargetSlots *)this)->vfunc217();
    m_vecOrigin5f44[0] = pOrigin[0];
    m_vecOrigin5f44[1] = pOrigin[1];
    m_vecOrigin5f44[2] = pOrigin[2];
    if (m_n5f50 == 0)
        sub_1034d5b0();
    sub_100b3840(0x10);
}
// END FUNCTION

// FUNCTION: 0x1034ddf0 size=0x1f1
#include "CScriptedTarget.h"
#include "ehandle.h"

__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int nEntIndex, int nLine, const char *pszText, int nDuration, int r, int g, int b, int a);

#define SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct SScriptedTargetSlots
{
	SLOTS10(a0) SLOTS10(a1) SLOTS10(a2) SLOTS10(a3) SLOTS10(a4) SLOTS10(a5) SLOTS10(a6) SLOTS10(a7) SLOTS10(a8) SLOTS10(a9)
	SLOTS10(b0) SLOTS10(b1) SLOTS10(b2) SLOTS10(b3) SLOTS10(b4) SLOTS10(b5) SLOTS10(b6)
	virtual void c70();
	virtual void c71();
	virtual CBaseEntity *vfunc172();
};

int CScriptedTarget::vfunc124()
{
	char text[512];
	int nLine = CBaseEntity::vfunc124();
	if (m_pad0224[0] & 1) {
		if (m_n5f50)
			Q_strncpy(text, "State: Off", sizeof(text));
		else
			Q_strncpy(text, "State: On", sizeof(text));
		int nEdict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(nEdict), nLine, text, 0, 255, 255, 255, 255);
		nLine++;
		CBaseEntity *pNext = ((SScriptedTargetSlots *)this)->vfunc172();
		if (pNext)
			Q_snprintf(text, sizeof(text), "Next: %s", pNext->sub_1000b5cd());
		else
			Q_strncpy(text, "Next: -NONE-", sizeof(text));
		nEdict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(nEdict), nLine, text, 0, 255, 255, 255, 255);
		nLine++;
		if (m_hUser5ce4.Get())
			Q_snprintf(text, sizeof(text), "User: %s", m_hUser5ce4.Get()->sub_1000b5cd());
		else if (m_n5f50)
			Q_strncpy(text, "User: -NONE-", sizeof(text));
		else
			Q_strncpy(text, "User: -LOOKING-", sizeof(text));
		nEdict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(nEdict), nLine, text, 0, 255, 255, 255, 255);
		nLine++;
	}
	return nLine;
}
// END FUNCTION
