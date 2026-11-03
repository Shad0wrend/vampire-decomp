// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c6bc0 size=0x6
#include "datamap.h"
#include "CTriggerLook.h"
namespace lifted {
extern char g_1059db68;
}
datamap_t * CTriggerLook::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059db68);
}
// END FUNCTION

// FUNCTION: 0x101c6c50 size=0x19
#include "CTriggerLook.h"
namespace lifted {
int sub_100075f9();
}
void CTriggerLook::vfunc103()
{
    *(int *)((char *)this + 0x5b0) = -1;
    *(int *)((char *)this + 0x5bc) = -1082130432;
    lifted::sub_100075f9();
}
// END FUNCTION

// FUNCTION: 0x101c6c80 size=0x1b
#include "CTriggerLook.h"

void CTriggerLook::vfunc176(CBaseEntity *pOther)
{
	CBaseTrigger::vfunc176(pOther);
	m_flLookTimeLast = -1.0f;
}
// END FUNCTION

// FUNCTION: 0x101c6f80 size=0xae
#include "CTriggerLook.h"
void sub_101434b0(int entindex, int offset, const char *text, int duration, int r, int g, int b, int a);
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);

// TARGET: CTriggerLook::vfunc124
int CTriggerLook::vfunc124()
{
    int text_offset = CBaseTrigger::vfunc124();
    if (*(char *)((char *)this + 0x224) & 1) {
        char tempstr[255];
        float flLast = m_flLookTimeLast < 0.0f ? 0.0f : m_flLookTimeLast;
        Q_snprintf(tempstr, sizeof(tempstr), "Time:   %3.2f", m_flLookTimeTotal - flLast);
        int pEdict = m_pEdict2e0;
        sub_101434b0(engine->vfunc35(pEdict), text_offset, tempstr, 0, 255, 255, 255, 255);
        text_offset++;
    }
    return text_offset;
}
// END FUNCTION

// FUNCTION: 0x101cbf40 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cbf40(unsigned int flags);
};

// TARGET: Helper::sub_101cbf40
void *Helper::sub_101cbf40(unsigned int flags)
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
