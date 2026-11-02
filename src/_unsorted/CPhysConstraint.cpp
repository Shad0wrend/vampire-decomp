// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002a3d0 size=0x6
#include "CPhysConstraint.h"
namespace lifted {
extern char g_10538b88;
}
datamap_t *CPhysConstraint::vfunc82()
{
    return (datamap_t *)&lifted::g_10538b88;
}
// END FUNCTION

// FUNCTION: 0x1002b0d0 size=0x1e
#include "CPhysConstraint.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysConstraint::vfunc5
CPhysConstraint *CPhysConstraint::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002b1b0 size=0x13
#include "CPhysConstraint.h"
void __fastcall sub_10012c06(CPhysConstraint *self);

// TARGET: CPhysConstraint::vfunc103
void CPhysConstraint::vfunc103()
{
	sub_10012c06(this);
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1002b420 size=0x1e
#include "CPhysConstraint.h"

void __fastcall sub_10001226(CPhysConstraint *self);
void __cdecl sub_101cd940(void *p);

// TARGET: CPhysConstraint::vfunc113
void CPhysConstraint::vfunc113()
{
	sub_10001226(this);
	if (!sub_1002b4c0())
		sub_101cd940(this);
}
// END FUNCTION

// FUNCTION: 0x1002b680 size=0x5d
#include "CPhysConstraint.h"
#include "Vector.h"

struct EntView;
struct PhysObjView;
class QAngle;

struct CPhysConstraintInfo
{
	char m_pad00[0xc];
	Vector m_vecPos;	// 0x0c
	bool m_bFlag;	// 0x18
};

void sub_1002a210(EntView *pEnt, PhysObjView *pObj1, PhysObjView *pObj2, const QAngle *pAngles, const Vector *pPos, bool bFlag);

void CPhysConstraint::vfunc183(int a, int b, CPhysConstraintInfo **ppInfo)
{
	if (b == 0 && gpGlobals->m_n18 != m_n46c)
	{
		m_n46c = gpGlobals->m_n18;
		CPhysConstraintInfo *pInfo = *ppInfo;
		sub_1002a210((EntView *)a, m_pConstraint450->vfunc5(), m_pConstraint450->vfunc6(), (const QAngle *)pInfo, &pInfo->m_vecPos, pInfo->m_bFlag);
	}
}
// END FUNCTION
