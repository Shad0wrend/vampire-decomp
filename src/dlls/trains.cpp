// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x10159f00 size=0xf5
#include "CFuncPlat.h"
#include "CBaseEntity.h"
#include "CUnknown101c26d0.h"
extern char g_106b8540[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
extern void (__cdecl *g_109f3650)(int level, const char *fmt, ...);

struct CServerNetworkableX {
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
	virtual const char *s5();
};
struct CServerUnknownX {
	virtual void s0(); virtual void s1(); virtual void s2();
	virtual CServerNetworkableX *s3();
};
struct CEdictX {
	char m_pad[0x40];
	CServerUnknownX *m_pUnk;
};

static inline const char *EdictClassName(CEdictX *pEdict)
{
	if (!pEdict->m_pUnk)
		return g_106b8540;
	return pEdict->m_pUnk->s3()->s5();
}

inline void *PlatEdict(CFuncPlat *p) { return p->m_pEdict; }
inline int PlatEntIndex(CFuncPlat *p) { return engine->vfunc35((int)PlatEdict(p)); }

void CFuncPlat::vfunc178(CBaseEntity *pOther)
{
	const char *pszOther = EdictClassName((CEdictX *)pOther->m_pEdict2e0);
	const char *pszThis = EdictClassName((CEdictX *)m_pEdict);
	g_109f3650(2, "%s Blocked by %s\n", pszThis, pszOther);
	CUnknown101c26d0 info;
	pOther->sub_100a1250(info.sub_101c26d0(this, this, 1.0f, 1, 0, 0, -1));
	if (m_pszStopSound) {
		enginesound->vfunc7(PlatEntIndex(this), 6, STRINGR(m_pszStopSound));
	}
	if (m_nToggleState == 2) {
		vfunc243();
		return;
	}
	if (m_nToggleState == 3)
		vfunc242();
}
// END FUNCTION
