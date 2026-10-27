// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035eb10 size=0x6
#include "CNPC_VAnimal.h"
namespace lifted {
extern char g_1062b528;
}
datamap_t * CNPC_VAnimal::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1062b528);
}
// END FUNCTION

// FUNCTION: 0x1035ec50 size=0x1e
#include "CNPC_VAnimal.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VAnimal::vfunc5
CNPC_VAnimal *CNPC_VAnimal::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1035edb0 size=0x1d
#include "CNPC_VAnimal.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a4f4;
extern B g_10936c74;
int CNPC_VAnimal::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a4f4.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1035f5c0 size=0x64
#include "CEntityVSlots.h"
struct CUnknown1027d990 { int sub_1027d990(); };
struct CAnimalUnit : CUnknown1027d990 {
    void sub_1035f5c0(CEntityVSlots *pEnt, Vector *pVec, int a, int b);
};
inline void VSub(const Vector &a, const Vector &b, Vector &r)
{
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
}
// TARGET: CAnimalUnit::sub_1035f5c0
void CAnimalUnit::sub_1035f5c0(CEntityVSlots *pEnt, Vector *pVec, int a, int b)
{
    if (sub_1027d990() == 2) {
        Vector *pOrigin = pEnt->slot217();
        Vector tmp;
        Vector *pOther = pEnt->slot193(&tmp);
        Vector d;
        VSub(*pOther, *pOrigin, d);
        pVec->x += d.x;
        pVec->y += d.y;
        pVec->z += d.z;
    }
}
// END FUNCTION

// FUNCTION: 0x1035fd40 size=0xd2
#include "CNPC_VAnimal.h"
#include "CCineNPC.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

struct CNPCStateView {
	char m_pad0000[0x5cc0];
	int m_nState;	// 0x5cc0
	int m_nIdealState;	// 0x5cc4
	char m_pad5cc8[0x5d74 - 0x5cc8];
	unsigned int m_h5d74;	// 0x5d74
};

int CNPC_VAnimal::vfunc482(char bDisregardState, int interruptLevel)
{
	CNPCStateView *pView = (CNPCStateView *)this;
	int result = 1;
	if (EHandle_Get(pView->m_h5d74)) {
		CCineNPC *pCine = (CCineNPC *)EHandle_Get(pView->m_h5d74);
		if (!pCine->sub_101a8ac0())
			return 0;
		result = 2;
	}
	if (!((CEntityVSlots *)this)->slot158())
		return 0;
	if (!bDisregardState && pView->m_nState != 0 && pView->m_nState != 1 && pView->m_nIdealState != 1 && (pView->m_nState != 3 || interruptLevel < 1))
		return (pView->m_nState == 4) ? result : 0;
	return result;
}
// END FUNCTION
