// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10065980 size=0x20
#include "CTEKillPlayerAttachments.h"

CTEKillPlayerAttachments::CTEKillPlayerAttachments(const char *name) : CBaseTempEntityHead(name)
{
	m_nField0c = 0;
}
// END FUNCTION

// FUNCTION: 0x100659b0 size=0x1e
#include "CTEKillPlayerAttachments.h"

// TARGET: CTEKillPlayerAttachments::vfunc2
CTEKillPlayerAttachments *CTEKillPlayerAttachments::vfunc2(unsigned int flags)
{
	sub_1000afb0();
	if (flags & 1)
		operator delete(this);
	return this;
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
void CTEKillPlayerAttachments::vfunc3(const float *pos, const float *ang)
{
	char buf[sizeof(CBroadcastFilterTmp)];
	CBroadcastFilterTmp *pFilter = (CBroadcastFilterTmp *)buf;
	m_nField0c = 1;
	sub_100035d5(pFilter);
	pFilter->m_pVtbl = vt_1044ba34;
	sub_1000d9f9(pFilter);
	vfunc4(pFilter, 0);
	pFilter->m_vec.~CRestoreVec();
}
// END FUNCTION

// FUNCTION: 0x10065ac0 size=0x39
#include "CTEKillPlayerAttachments.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEKillPlayerAttachments::vfunc4(void *pFilter, int delay)
{
	engine->vfunc103((int)pFilter, delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
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
