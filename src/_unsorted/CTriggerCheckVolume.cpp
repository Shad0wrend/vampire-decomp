// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cb650 size=0x6
#include "CTriggerCheckVolume.h"
namespace lifted {
extern char g_1059e768;
}
datamap_t * CTriggerCheckVolume::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059e768);
}
// END FUNCTION

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

// FUNCTION: 0x101cb8a0 size=0x10
#include "CTriggerCheckVolume.h"

// TARGET: CTriggerCheckVolume::vfunc103
void CTriggerCheckVolume::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x101cc350 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cc350(unsigned int flags);
};

// TARGET: Helper::sub_101cc350
void *Helper::sub_101cc350(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x598))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x580))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x568))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4bc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4a4))->sub_10015708();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
