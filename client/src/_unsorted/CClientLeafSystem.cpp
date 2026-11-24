// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d1510 size=0x1
#include "CClientLeafSystem.h"
void CClientLeafSystem::vfunc22()
{
}
// END FUNCTION

// FUNCTION: 0x100d1520 size=0x1
#include "CClientLeafSystem.h"
void CClientLeafSystem::vfunc23()
{
}
// END FUNCTION

// FUNCTION: 0x100d1770 size=0xd
#include "CClientLeafSystem.h"
bool CClientLeafSystem::vfunc15(char a0)
{
    *(char *)((char *)this + 0xd8) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x100d1780 size=0xd
#include "CClientLeafSystem.h"
bool CClientLeafSystem::vfunc16(char a0)
{
    *(char *)((char *)this + 0xd9) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x100d1c10 size=0x5d
#include "CClientLeafSystem.h"
#include "IClientRenderable.h"

class IVModelInfo_100d1c10
{
public:
	virtual void v0() = 0;
	virtual void v1() = 0;
	virtual void v2() = 0;
	virtual void v3() = 0;
	virtual void v4() = 0;
	virtual void v5() = 0;
	virtual void v6() = 0;
	virtual void v7() = 0;
	virtual void v8() = 0;
	virtual void v9() = 0;
	virtual bool IsModelTwoPass(const model_t *model) = 0;
};

extern IVModelInfo_100d1c10 *g_104a57f8;

void CClientLeafSystem::vfunc0(IClientRenderable *pRenderable, bool bRenderWithViewModels)
{
	int group = pRenderable->IsTransparent() ? 2 : 1;

	bool bTwoPass = false;
	if (group == 2)
	{
		bTwoPass = g_104a57f8->IsModelTwoPass(pRenderable->GetModel());
	}

	int flags = bRenderWithViewModels ? 2 : 0;
	if (bTwoPass)
		flags |= 1;

	sub_100d1b60(pRenderable, group, flags);
}
// END FUNCTION

// FUNCTION: 0x100d1c70 size=0x1d
struct El1c70 { char pad[0x15]; char f; char pad2[0x34 - 0x16]; };
struct V1c70 { char pad[0x20]; El1c70 *arr; void sub_100d1c70(unsigned int h, char v); };
void V1c70::sub_100d1c70(unsigned int h, char v) { arr[h & 0xffff].f = v; }
// END FUNCTION

// FUNCTION: 0x100d2a10 size=0x25
#include "CClientLeafSystem.h"
namespace lifted {
struct C100d2800 { int sub_100d2800(int, int, int); };
struct C100d28a0 { int sub_100d28a0(int); };
}
int CClientLeafSystem::vfunc10(int a0, int a1, int a2)
{
    ((lifted::C100d28a0 *)this)->sub_100d28a0(a0);
    return ((lifted::C100d2800 *)this)->sub_100d2800(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x100d2b30 size=0x1e
#include "CClientLeafSystem.h"
struct LeafE_100d2b30 { int a, b, c; };
struct LeafView_100d2b30 { char pad[0xc]; LeafE_100d2b30 *m_p; };
// TARGET: CClientLeafSystem::vfunc9
bool CClientLeafSystem::vfunc9(int i, int v)
{
	return ((LeafView_100d2b30 *)this)->m_p[i].c == v;
}
// END FUNCTION

// FUNCTION: 0x100d3310 size=0x19
#include "CClientLeafSystem.h"
// TARGET: CClientLeafSystem::vfunc21
void *CClientLeafSystem::vfunc21(unsigned short h) { return &m_pData->m_Items[h]; }
// END FUNCTION
