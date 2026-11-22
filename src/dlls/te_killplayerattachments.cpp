// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 8 blocks
#include "vampire.h"

// FUNCTION: 0x10065980 size=0x20
#include "CTEKillPlayerAttachments.h"

CTEKillPlayerAttachments::CTEKillPlayerAttachments(const char *name) : CBaseTempEntity(name)
{
	m_nField0c = 0;
}
// END FUNCTION

// FUNCTION: 0x100659b0 size=0x1e
#include "CTEKillPlayerAttachments.h"

// TARGET: CTEKillPlayerAttachments::vfunc2
CBaseTempEntity *CTEKillPlayerAttachments::vfunc2(unsigned int flags)
{
	sub_1000afb0();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100659e0 size=0xb
namespace lifted {
extern char g_1044dfb0;
int sub_100021d0();
}
struct CUnknown100659e0 { int sub_100659e0(); };
int CUnknown100659e0::sub_100659e0()
{
    *(int *)this = (int)&lifted::g_1044dfb0;
    return lifted::sub_100021d0();
}
// END FUNCTION

// FUNCTION: 0x10065a00 size=0x86
#include "CTEKillPlayerAttachments.h"
#include "CRestore.h"

extern void *vt_1044ba34[];
void __fastcall sub_100035d5(void *pFilter);
void __fastcall sub_1000d9f9(void *pFilter);

struct CBroadcastFilterTmp
{
	void **m_pVtbl;
	char m_pad0004[4];
	CRestoreVec m_vec;
	char m_pad001c[0x2c - 0x1c];
};

// TARGET: CTEKillPlayerAttachments::vfunc3
void CTEKillPlayerAttachments::vfunc3(const Vector &pos, const QAngle &ang)
{
	char buf[sizeof(CBroadcastFilterTmp)];
	CBroadcastFilterTmp *pFilter = (CBroadcastFilterTmp *)buf;
	m_nField0c = 1;
	sub_100035d5(pFilter);
	pFilter->m_pVtbl = vt_1044ba34;
	sub_1000d9f9(pFilter);
	vfunc4(*(CRecipientFilter *)pFilter, 0);
	pFilter->m_vec.~CRestoreVec();
}
// END FUNCTION

// FUNCTION: 0x10065ac0 size=0x39
#include "CTEKillPlayerAttachments.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEKillPlayerAttachments::vfunc4(CRecipientFilter &pFilter, float delay)
{
#define pFilter ((void *)&pFilter)
#define delay (*(int *)&delay)
	engine->vfunc103((int)pFilter, delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
#undef delay
#undef pFilter
}
// END FUNCTION

// FUNCTION: 0x10065b10 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c4978;
extern char g_10544220[];
ServerClassReg g_106c49a8("CTEKillPlayerAttachments", &g_106c4978, g_10544220);
// END FUNCTION

// FUNCTION: 0x10065b80 size=0x6
#include "CTEKillPlayerAttachments.h"
namespace lifted {
extern char g_106c49a8;
}
ServerClass *CTEKillPlayerAttachments::vfunc0()
{
    return (ServerClass *)&lifted::g_106c49a8;
}
// END FUNCTION

// FUNCTION: 0x10065ba0 size=0x3
#include "CTEKillPlayerAttachments.h"
int CTEKillPlayerAttachments::vfunc1()
{
    return 0;
}
// END FUNCTION
