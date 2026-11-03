// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10097b50 size=0x3c
#include "CBaseEntity.h"
#include "CBaseTransmitProxy.h"

extern int vt_10450004[];

CBaseTransmitProxy::CBaseTransmitProxy(CBaseEntity *pEnt)
{
    m_hEnt = 0xffffffff;
    m_vptr = vt_10450004;
    if (pEnt) {
        m_hEnt = *pEnt->vfunc1();
        m_sUnk = 0;
    } else {
        m_hEnt = 0xffffffff;
        m_sUnk = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10097ba0 size=0x1e
#include "CBaseTransmitProxy.h"

// TARGET: CBaseTransmitProxy::vfunc0
CBaseTransmitProxy *CBaseTransmitProxy::vfunc0(unsigned int flags)
{
	sub_10002428();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10097c70 size=0x5
#include "CBaseTransmitProxy.h"
bool CBaseTransmitProxy::vfunc1(int a0, int a1, int a2, int a3, int a4)
{
    return 0;
}
// END FUNCTION
