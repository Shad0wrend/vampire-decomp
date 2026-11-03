// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10043c20 size=0x6
#include "CPhysSaveRestoreBlockHandler.h"
namespace lifted {
extern char g_10539b54;
}
int CPhysSaveRestoreBlockHandler::vfunc0()
{
    return (int)&lifted::g_10539b54;
}
// END FUNCTION

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

// FUNCTION: 0x10043f70 size=0x2e
// TARGET: CPhysSaveRestoreBlockHandler::vfunc3
#include "CPhysSaveRestoreBlockHandler.h"
#include "CSave.h"

extern char g_1053c340[];
extern char g_1053c344[];  // a datamap_t the game's initializer fills in, not a string

void CPhysSaveRestoreBlockHandler::vfunc3(CSave *pSave) {
    pSave->vfunc8(g_1053c340, 1);
    pSave->vfunc2(m_data98, g_1053c344);
}
// END FUNCTION

// FUNCTION: 0x10043fb0 size=0x41
#include "CPhysSaveRestoreBlockHandler.h"
#include "CAnchorList.h"

void CPhysSaveRestoreBlockHandler::vfunc4()
{
	m_pqSize = 0;
	if (m_pqGrowSize != -1) {
		if (m_pqMemory) {
			g_109f3624(m_pqMemory);
			m_pqMemory = 0;
		}
		m_pqAllocationCount = 0;
	}
	m_pqElements = m_pqMemory;
}
// END FUNCTION

// FUNCTION: 0x10044020 size=0x3c
#include "CPhysSaveRestoreBlockHandler.h"
#include "CUnknown100f6d80.h"

extern CUnknown100f6d80 g_106eb5d8;
extern void *g_10723940;

struct CUnknown10723940
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33(); virtual void vfunc34();
	virtual void vfunc35(); virtual void vfunc36(); virtual void vfunc37(); virtual void vfunc38(); virtual void vfunc39();
	virtual void vfunc40(); virtual void vfunc41(); virtual void vfunc42(); virtual void vfunc43(); virtual void vfunc44();
	virtual void vfunc45(); virtual void vfunc46(); virtual void vfunc47(); virtual void vfunc48();
	virtual void vfunc49(int *pResult);
};

// TARGET: CPhysSaveRestoreBlockHandler::vfunc5
void CPhysSaveRestoreBlockHandler::vfunc5()
{
	int local[3];
	g_106eb5d8.sub_100f6d80(this ? (int)this + 8 : 0);
	if (g_10723940) {
		local[0] = 0;
		((CUnknown10723940 *)g_10723940)->vfunc49(local);
	}
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
