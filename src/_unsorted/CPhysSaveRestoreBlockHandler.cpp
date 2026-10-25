// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10043c40 size=0x11
struct CSaveBlockFields10043c40 {
    char pad[0x98];
    int field98;
    int field9c;
    void sub_10043c40(int a);
};
void CSaveBlockFields10043c40::sub_10043c40(int a)
{
    field98 = 0;
    field9c = 0;
}
// END FUNCTION

// FUNCTION: 0x10044070 size=0x34
#include "CPhysSaveRestoreBlockHandler.h"

extern short g_1053c340;
extern char g_1053c344[];

struct ISaveSourceView
{
	virtual void s0(); virtual void s1();
	virtual void s2(void *pBlock, const char *pszName);
	virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12();
	virtual short s13();
};

// TARGET: CPhysSaveRestoreBlockHandler::vfunc6
void CPhysSaveRestoreBlockHandler::vfunc6(void *pSource)
{
	ISaveSourceView *pView = (ISaveSourceView *)pSource;
	m_bMatch40 = pView->s13() == g_1053c340;
	pView->s2(&m_data98, g_1053c344);
}
// END FUNCTION
