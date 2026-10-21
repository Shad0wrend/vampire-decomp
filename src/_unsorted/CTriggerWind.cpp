// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ca980 size=0x83
#include "CTriggerWind.h"
struct CGlobalVarsX { char pad[0xc]; float curtime; };
extern CGlobalVarsX *g_1070b228;
#define W_V(n) virtual void w##n();
#define W_V10(p) W_V(p##0) W_V(p##1) W_V(p##2) W_V(p##3) W_V(p##4) W_V(p##5) W_V(p##6) W_V(p##7) W_V(p##8) W_V(p##9)
struct CWindSystemX {
    W_V10(0) W_V10(1) W_V10(2)
    W_V(30) W_V(31) W_V(32) W_V(33) W_V(34) W_V(35) W_V(36) W_V(37) W_V(38)
    virtual int w39(float *pVec);
};
extern CWindSystemX *g_10723940;
void sub_1000d17a();

// TARGET: CTriggerWind::vfunc103
void CTriggerWind::vfunc103()
{
    m_b05d8 = 1;
    m_n05dc = g_10723940->w39(m_vec05e0);
    m_n05c0 = (int)vfunc221()[1];
    sub_100b3b00();
    sub_101c6860();
    m_n05b8 = m_n05b0;
    m_n05c8 = m_n05c0;
    sub_100ac4e0((int)sub_1000d17a, 0, 0);
    *(float *)((char *)this + 0x17c) = g_1070b228->curtime;
}
// END FUNCTION

// FUNCTION: 0x101caee0 size=0xe9
#include "CTriggerWind.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);

#define ESD10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CEngineServerTW
{
public:
    ESD10(a) ESD10(b) ESD10(c)
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
    virtual int IndexOfEdict(int pEdict);
};

extern CEngineServerTW *g_1070b22c;
void sub_101434b0(int nEntIndex, int nLine, const char *pszText, int nDuration, int r, int g, int b, int a);

static inline int EntIndex(CTriggerWind *p)
{
    int pEdict = *(int *)((char *)p + 0x2e0);
    return g_1070b22c->IndexOfEdict(pEdict);
}

int CTriggerWind::vfunc124()
{
    int nTextOffset = sub_101c4f40();
    if (*((unsigned char *)this + 0x224) & 1) {
        char szText[255];
        Q_snprintf(szText, 255, "Dir: %i (%i)", m_n05c8, *(int *)((char *)this + 0x5cc));
        sub_101434b0(EntIndex(this), nTextOffset, szText, 0, 255, 255, 255, 255);
        nTextOffset++;
        Q_snprintf(szText, 255, "Speed: %i (%i)", m_n05b8, *(int *)((char *)this + 0x5bc));
        sub_101434b0(EntIndex(this), nTextOffset, szText, 0, 255, 255, 255, 255);
        nTextOffset++;
    }
    return nTextOffset;
}
// END FUNCTION
