// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10194080 size=0xa8
#include "CPropDestructable.h"
#include "COutputEvent.h"

void CPropDestructable::vfunc144(const CPropDestructableDamage *pInfo)
{
	CPropDestructableDamage info = *pInfo;
	int nStages = *(int *)((char *)this + 0x77c);
	if (*(int *)((char *)this + 0x784) == nStages) {
		((COutputEvent *)((char *)this + 0x874))->sub_100cd660((void *)pInfo->m_data[10], this, 0);
		if (*((char *)this + 0x790)) {
			sub_10007c57(&info);
			return;
		}
		m_nTakeDamage = 0;
		m_flags204 &= ~0x2000;
		m_field200 = 2;
	} else {
		sub_10193cc0(*(int *)((char *)this + 0x784) + 1, pInfo->m_data[11]);
		m_iHealth = *(int *)((char *)this + 0x780);
	}
}
// END FUNCTION

// FUNCTION: 0x101941d0 size=0x77
#include "CPropDestructable.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CEngineSlot35View {
    S10(a0) S10(a1) S10(a2)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
    virtual int vfunc35(int edict);
};
extern CEngineSlot35View *g_1070b22c;
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int entindex, int line, const char *text, int duration, int r, int g, int b, int a);

struct CPropDestructableUnit : CPropDestructable {
    int sub_10013ab1();
    int sub_101941d0();
};

int CPropDestructableUnit::sub_101941d0()
{
    int nLine = sub_10013ab1();
    if (*(unsigned char *)((char *)this + 0x224) & 1) {
        char szText[32];
        Q_snprintf(szText, 32, "Damage Level: %d", *(int *)((char *)this + 0x784));
        int nEdict = *(int *)((char *)this + 0x2e0);
        sub_101434b0(g_1070b22c->vfunc35(nEdict), nLine, szText, 0, 0xff, 0xff, 0xff, 0xff);
        nLine++;
    }
    return nLine;
}
// END FUNCTION
