// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018c260 size=0x1e
#include "CPointCamera.h"

void sub_100aa7b0(void *p);

// TARGET: CPointCamera::vfunc5
CBaseEntity *CPointCamera::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1018c290 size=0x8
#include "CPointCamera.h"
namespace lifted {
int sub_100027e8(int);
}
void CPointCamera::vfunc113()
{
    lifted::sub_100027e8((int)this);
}
// END FUNCTION

// FUNCTION: 0x1018c410 size=0x82
#include "CPointCamera.h"
#include "CUnknown101ab800.h"

struct IPCamQ { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual int vfunc7(); };
struct IPCamP { virtual void v0(); virtual void v1(); virtual void v2(); virtual IPCamQ *vfunc3(); };
struct PCamEdict { char m_pad[0x40]; IPCamP *m_pObj; };

char CPointCamera::vfunc86(int a, int b, int c, int d, int e)
{
	sub_1018c2b0();
	char cur = *((char *)this + 0x458);
	char old = *((char *)this + 0x459);
	if (old != cur) {
		*((char *)this + 0x459) = cur;
		return true;
	}
	PCamEdict *edict = (PCamEdict *)m_pEdict2e0;
	int x;
	if (edict->m_pObj == 0) {
		x = 0;
	} else {
		IPCamQ *q = edict->m_pObj->vfunc3();
		x = q->vfunc7();
	}
	if (!engine->vfunc105(e, x))
		return false;
	return ((CUnknown101ab800 *)((char *)this + 0x2d4))->sub_101ab8f0(b, (const unsigned char *)c, d, e);
}
// END FUNCTION

// FUNCTION: 0x1018c7a0 size=0x6
#include "CPointCamera.h"
namespace lifted {
extern char g_1058be60;
}
datamap_t * CPointCamera::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058be60);
}
// END FUNCTION

// FUNCTION: 0x1018c8a0 size=0x6
#include "CPointCamera.h"
namespace lifted {
extern char g_1072af84;
}
int CPointCamera::vfunc80()
{
    return (int)&lifted::g_1072af84;
}
// END FUNCTION

// FUNCTION: 0x1018c8c0 size=0x3
#include "CPointCamera.h"
int CPointCamera::vfunc81()
{
    return 0;
}
// END FUNCTION
