// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c6f80 size=0xae
#include "CTriggerLook.h"
#include "IVEngineServer.h"
extern IVEngineServer *g_1070b22c;
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
        sub_101434b0(g_1070b22c->vfunc35(pEdict), text_offset, tempstr, 0, 255, 255, 255, 255);
        text_offset++;
    }
    return text_offset;
}
// END FUNCTION
