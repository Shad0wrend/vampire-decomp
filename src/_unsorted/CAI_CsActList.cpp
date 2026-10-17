// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102ca130 size=0x6b
#include "CAI_CsActList.h"

extern int g_10602f58, g_10602f5c;

void CAI_CsActList::vfunc0(CsActSaveIface *pSave)
{
    pSave->WriteInt(&m_nActs, 1);
    CSAct *p = m_acts;
    CSAct *end = p + m_nActs;
    for (; p < end; p++)
        pSave->WriteFields("CSAct", p, 0, g_10602f58, g_10602f5c);
    int tmp = m_field_a08;
    pSave->WriteInt(&tmp, 1);
}
// END FUNCTION

// FUNCTION: 0x102ca1c0 size=0x81
#include "CAI_CsActList.h"

extern int g_10602f58;
extern int g_10602f5c;
extern void (*g_109f366c)(const char *fmt, ...);

void CAI_CsActList::vfunc1(CsActRestoreIface *pRestore)
{
    pRestore->ReadInt(&m_nActs, 1, 0);
    CSAct *pAct = m_acts;
    CSAct *pEnd = pAct + m_nActs;
    for (; pAct < pEnd; pAct++) {
        if (!pRestore->ReadFields("CSAct", pAct, 0, g_10602f58, g_10602f5c))
            g_109f366c("Error restoring CSAct.\n");
    }
    int tmp;
    pRestore->ReadInt(&tmp, 1, 0);
    m_field_a08 = tmp;
}
// END FUNCTION
