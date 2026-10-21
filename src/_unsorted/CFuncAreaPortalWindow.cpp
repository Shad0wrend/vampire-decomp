// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010d080 size=0x1e
#include "CFuncAreaPortalWindow.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncAreaPortalWindow::vfunc5
CFuncAreaPortalWindow *CFuncAreaPortalWindow::vfunc5(unsigned int flags)
{
	sub_100154bf();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010d110 size=0xce
#include "CFuncAreaPortalWindow.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

#define STRING(x) ((x) ? (x) : g_106b8540)

void CFuncAreaPortalWindow::vfunc113()
{
    int nDummy;
    CBaseEntity::vfunc113();
    CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, STRING(m_pszFadeEntity), 0, 0);
    if (pEnt) {
        const char *pszModel = *pEnt->vfunc9(&nDummy);
        vfunc105(STRING(pszModel));
        m_nFadeValue = vfunc8();
        *(unsigned int *)((char *)pEnt + 0x19c) |= 0x40;
    }
    const char *pszName = *(const char **)((char *)this + 0x20c);
    pEnt = g_106eb5d8.sub_100f7770(0, STRING(pszName), 0, 0);
    if (pEnt) {
        const char *pszModel = *pEnt->vfunc9(&nDummy);
        vfunc105(STRING(pszModel));
        *(unsigned int *)((char *)pEnt + 0x19c) |= 0x40;
    }
    sub_100b3b00();
}
// END FUNCTION
