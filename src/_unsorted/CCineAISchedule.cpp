// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a9620 size=0x6
#include "CCineAISchedule.h"
namespace lifted {
extern char g_10593c9c;
}
datamap_t *CCineAISchedule::vfunc82()
{
    return (datamap_t *)&lifted::g_10593c9c;
}
// END FUNCTION

// FUNCTION: 0x101a9730 size=0x2e
#include "CCineAISchedule.h"
// TARGET: CCineAISchedule::vfunc103
extern void (*g_109f3650)(int level, const char *pszMsg);
extern const char g_1059518c[];

void CCineAISchedule::vfunc103()
{
    sub_1000c711();
    if (m_n6094 == 0 && m_n6090 == 0)
    {
        g_109f3650(2, g_1059518c);
    }
}
// END FUNCTION

// FUNCTION: 0x101a9770 size=0x3
#include "CCineAISchedule.h"
bool CCineAISchedule::vfunc585()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101a9790 size=0xe9
#include "CCineAISchedule.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

__declspec(dllimport) void DevMsg(const char *fmt, ...);

extern CGlobalEntityList *g_10566458;

#define W10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define W100(p) W10(p##0) W10(p##1) W10(p##2) W10(p##3) W10(p##4) W10(p##5) W10(p##6) W10(p##7) W10(p##8) W10(p##9)

class CCineAIVSlots
{
public:
    W100(a) W100(b) W100(c) W100(d) W100(e) W10(f0) W10(f1) W10(f2) W10(f3) W10(f4) W10(f5) W10(f6) W10(f7)
    virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5();
    virtual void vfunc586(CBaseEntity *pNPC);
};

struct CNPCAIUnit : public CBaseEntity
{
    void sub_1026d130();
};

static inline CBaseEntity *LookupHandle(const unsigned int *pHandle)
{
    if (*pHandle == 0xffffffff)
        return 0;
    CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[*pHandle & 0x1fff];
    if (pSlot->m_Serial == (int)(*pHandle >> 13))
        return (CBaseEntity *)pSlot->m_pEntity;
    return 0;
}

void CCineAISchedule::vfunc583()
{
    CBaseEntity *pEnt = LookupHandle((unsigned int *)((char *)this + 0x5ce4));
    if (pEnt) {
        CNPCAIUnit *pNPC = *(CNPCAIUnit **)((char *)pEnt + 0x94);
        if (pNPC) {
            if (!*((char *)pNPC + 0x1b4c)) {
                DevMsg("************************************************\n");
                DevMsg("***  WARNING  **********************************\n");
                DevMsg("   scripted sequence(%s)\n", ((CBaseEntity *)this)->sub_100ab4f0());
                DevMsg("   is targeting an entity(%s)\n", pNPC->sub_100ab4f0());
                DevMsg("   This can happen if it starts hidden and is\n");
                DevMsg("   immediately put into a script without a delay.\n");
                DevMsg("   If this is the case.  Put at least a .1 second\n");
                DevMsg("   delay between ScriptUnhide and starting the\n");
                DevMsg("   scripted sequence.\n");
                DevMsg("   Otherwise, talk to a programmer.\n");
                DevMsg("***  WARNING  **********************************\n");
                DevMsg("************************************************\n");
            }
            if (!*((char *)this + 0x5f90))
                pNPC->sub_1026d130();
            ((CCineAIVSlots *)this)->vfunc586(pNPC);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101ab0e0 size=0x52
#include "CCineNPC.h"

void sub_100aa7b0(void *);

struct Helper
{
	void *sub_101ab0e0(unsigned int flags);
};

// TARGET: Helper::sub_101ab0e0
void *Helper::sub_101ab0e0(unsigned int flags)
{
	CCineNPCSlot *p = (CCineNPCSlot *)((char *)this + 0x608c);
	int n = 8;
	do {
		--p;
		p->sub_10015708();
	} while (--n);
	((CCineNPCSlot *)((char *)this + 0x5fb4))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x5f9c))->sub_10015708();
	((CCineNPC *)this)->sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
