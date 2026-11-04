// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102ca0c0 size=0x32
#include "CAI_CsActList.h"

struct CSActLayout { int m_type; int m_h4; char m_pad8[0x14]; int m_h1c; int m_h20; int m_pad24; };

CSAct::CSAct()
{
	CSActLayout *p = (CSActLayout *)this;
	p->m_type = 0;
	p->m_h4 = -1;
	p->m_h1c = -1;
	p->m_h20 = -1;
}

// TARGET: CAI_CsActList::CAI_CsActList
CAI_CsActList::CAI_CsActList()
{
	m_nActs = 0;
	m_field_a08 = 0;
}
// END FUNCTION

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

// FUNCTION: 0x102ca280 size=0x10
#include "CAI_CsActList.h"
void CAI_CsActList::vfunc2(char flag)
{
	if (flag)
		sub_102ca760();
}
// END FUNCTION
