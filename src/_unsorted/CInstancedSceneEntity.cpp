// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10084e30 size=0x70
#include "CInstancedSceneEntity.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
struct S10084e30Ent { char pad[0x94]; int m_v94; };
int CInstancedSceneEntity::vfunc267(int a)
{
    unsigned int h = *(unsigned int *)((char *)this + 0x580);
    CGlobalEntityList_Ent *p = 0;
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        if (s->m_Serial == (int)(h >> 13))
            p = s->m_pEntity;
    }
    if (p) {
        unsigned int h2 = *(volatile unsigned int *)((char *)this + 0x580);
        S10084e30Ent *e;
        if (h2 != 0xffffffff) {
            CGlobalEntityList_Slot *s2 = &g_10566458->m_Slots[h2 & 0x1fff];
            e = s2->m_Serial == (int)(h2 >> 13) ? (S10084e30Ent *)s2->m_pEntity : 0;
        } else
            e = 0;
        int v = e->m_v94;
        if (v)
            return v;
    }
    return sub_10083c90(a);
}
// END FUNCTION

// FUNCTION: 0x10084f80 size=0x1e
#include "CInstancedSceneEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CInstancedSceneEntity::vfunc5
CInstancedSceneEntity *CInstancedSceneEntity::vfunc5(unsigned int flags)
{
	sub_1000b1ef();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
