// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cb7d0 size=0x9f
#include "CTriggerCheckVolume.h"
#include "CCollisionProperty.h"

int sub_101cca80(CBaseEntity **pList, int listMax, const float *pMins, const float *pMaxs, int a, int b);	// stub 0x10003f35

struct CCheckList { CBaseEntity *e[0x800]; CCheckList() { for (int i = 0; i < 0x800; i++) e[i] = 0; } };

void CTriggerCheckVolume::vfunc251(int a)
{
	if (!m_bDisabled) {
		CCheckList list;
		float mins[3];
		float maxs[3];
		CCollisionProperty *pCollide = (CCollisionProperty *)((char *)this + 0x270);
		pCollide->sub_100dcd90((float *)((char *)pCollide + 4), (float *)((char *)pCollide + 0x10), mins, maxs);
		int n = sub_101cca80(list.e, 0x800, mins, maxs, 0, 0);
		for (int i = 0; i < n; i++) {
			if (sub_101c5460(list.e[i]))
				m_out598.sub_100cd660(list.e[i], this, 0);
		}
	}
}
// END FUNCTION
