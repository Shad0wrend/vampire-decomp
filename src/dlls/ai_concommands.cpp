// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 4 blocks
#include "vampire.h"

// FUNCTION: 0x10085830 size=0x29
extern void (*g_109f3630)(const char *fmt, ...);
extern const char g_10549c34[];
extern unsigned int g_1092053c;
extern int g_105c9798;

// TARGET: sub_10085830
void sub_10085830()
{
	g_109f3630(g_10549c34);
	g_1092053c = g_1092053c | 2;
	g_105c9798 = g_105c9798 + 1;
}
// END FUNCTION

// FUNCTION: 0x10085870 size=0xa
#include "ConCommand.h"
void sub_10085830(void);
ConCommand g_106c8df4("ai_step", sub_10085830, "NPCs will freeze after completing their current task.  To complete the next task, use 'ai_step' again.  To resume processing normally use 'ai_resume'", 0, 0);
// END FUNCTION

// FUNCTION: 0x10085900 size=0x1b
extern unsigned int g_1092053c;
extern void (*g_109f3630)(const char *, ...);

// TARGET: sub_10085900
void sub_10085900()
{
	g_109f3630("AI Resume...\n");
	g_1092053c &= 0xfffffffd;
}
// END FUNCTION

// FUNCTION: 0x10265680 size=0x124
#include "CBaseEntity.h"
#include "CBCCSlotViews.h"
__declspec(dllimport) void DevMsg(const char *fmt, ...);

class CBaseEntity;
struct AIToggleListView { CBaseEntity *sub_100f8370(CBaseEntity *pStart, int mask); };
extern AIToggleListView g_106eb5d8;
extern int g_1092053c;

struct AIToggleNPC {
    VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2) VIEW_SLOT100(3) VIEW_SLOT100(4) VIEW_SLOT100(5)
    VIEW_SLOT10(60) VIEW_SLOT(610) VIEW_SLOT(611) VIEW_SLOT(612) VIEW_SLOT(613)
    virtual void vfunc614();
    char pad[0x178 - 4];
    float m_f178;
    char pad2[0x6254 - 0x17c];
    float m_f6254, m_f6258, m_f625c, m_f6260;
};
struct AIToggleEnt {
    char pad[0x98];
    AIToggleNPC *m_pNPC;
    char pad2[0x17c - 0x9c];
    float m_f17c;
};

void sub_10265680(char bEnable)
{
    if (bEnable) {
        if (g_1092053c & 1) {
            g_1092053c &= ~1;
            for (AIToggleEnt *e = (AIToggleEnt *)g_106eb5d8.sub_100f8370(0, 0x20); e; e = (AIToggleEnt *)g_106eb5d8.sub_100f8370((CBaseEntity *)e, 0x20)) {
                AIToggleNPC *npc = e->m_pNPC;
                if (npc) {
                    npc->vfunc614();
                    npc->m_f178 = gpGlobals->curtime;
                    npc->m_f6254 = gpGlobals->curtime;
                    npc->m_f6258 = gpGlobals->curtime;
                    npc->m_f625c = gpGlobals->curtime;
                    npc->m_f6260 = gpGlobals->curtime;
                } else {
                    e->m_f17c = gpGlobals->curtime - 0.1f;
                }
            }
            DevMsg("AI Enabled.\n");
        } else {
            DevMsg("AI Already Enabled.\n");
        }
    } else {
        if (g_1092053c & 1) {
            DevMsg("AI Already Disabled.\n");
        } else {
            g_1092053c |= 1;
            DevMsg("AI Disabled.\n");
        }
    }
}
// END FUNCTION
