// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10280fb0 size=0x1
// TARGET: sub_10280fb0
void sub_10280fb0()
{
}
// END FUNCTION

// FUNCTION: 0x10280fd0 size=0x1
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc411
void CAI_BaseNPC::vfunc411() {
}
// END FUNCTION

// FUNCTION: 0x102cc080 size=0x11c
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
extern void (*g_109f3658)(int level, const char *pFormat, ...);
extern char g_105ce0d4[];

// The virtual view of slot 440 (the placeholders keep the slot numbers right).
struct SchedView
{
    CAI_NPC_V10(0) CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
    CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19)
    CAI_NPC_V10(20) CAI_NPC_V10(21) CAI_NPC_V10(22) CAI_NPC_V10(23) CAI_NPC_V10(24) CAI_NPC_V10(25) CAI_NPC_V10(26) CAI_NPC_V10(27) CAI_NPC_V10(28) CAI_NPC_V10(29)
    CAI_NPC_V10(30) CAI_NPC_V10(31) CAI_NPC_V10(32) CAI_NPC_V10(33) CAI_NPC_V10(34) CAI_NPC_V10(35) CAI_NPC_V10(36) CAI_NPC_V10(37) CAI_NPC_V10(38) CAI_NPC_V10(39)
    CAI_NPC_V10(40) CAI_NPC_V10(41) CAI_NPC_V10(42) CAI_NPC_V10(43)
    virtual int vfunc440(int schedule);
};

struct CineView
{
    char pad[0x5f60];
    int m_nMoveTo;
};

inline CineView *ResolveHandle(unsigned int h)
{
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (h >> 13))
            return (CineView *)pSlot->m_pEntity;
    }
    return 0;
}

int CAI_BaseNPC::vfunc440(int schedule)
{
    if (schedule == 0x2e) {
        CAI_BaseNPCTroika *pNPC = (CAI_BaseNPCTroika *)this;
        const unsigned int *ph = &pNPC->m_h5d74;
        SchedView *pView = (SchedView *)this;
        if (!ResolveHandle(pNPC->m_h5d74)) {
            g_109f3658(2, g_105ce0d4, ((CBaseEntity *)this)->sub_1009f200());
            sub_1027d170();
            return pView->vfunc440(1);
        }
        switch (ResolveHandle(*ph)->m_nMoveTo) {
        case 0:
        case 4:
            return pView->vfunc440(0x32);
        case 1:
            return pView->vfunc440(0x2f);
        case 2:
            return pView->vfunc440(0x30);
        case 3:
            return pView->vfunc440(0x31);
        case 5:
            return pView->vfunc440(0x33);
        }
    }
    return schedule;
}
// END FUNCTION
