// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103830e0 size=0x37
#include "CBaseAnimating.h"

struct CUnknown103830e0
{
	char m_pad0000[0x1b30];
	const char *m_pszFile1b30;
	int m_nLine1b34;

	void sub_103830e0();
	void sub_102ae750(int a, int b);
};

// TARGET: CUnknown103830e0::sub_103830e0
void CUnknown103830e0::sub_103830e0()
{
	m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHengeyokai.cpp";
	m_nLine1b34 = 0x985;
	sub_102ae750(0x16e, 0);
	((CBaseAnimating *)this)->sub_1008d5f0(0.0f);
	((CBaseAnimating *)this)->sub_1008d6d0(1);
}
// END FUNCTION

// FUNCTION: 0x10383130 size=0x28
#include "CNPC_VHengeyokai.h"

// TARGET: CNPC_VHengeyokai::sub_10383130
void CNPC_VHengeyokai::sub_10383130()
{
	sub_1008d5f0(0);
	sub_1008d6d0(0);
	sub_102c4310("Hengeyokai_freeze_emitter", this, 1, -1, 0);
}
// END FUNCTION

// FUNCTION: 0x10383170 size=0x34
extern char g_1063f48c[];

struct CMingXiaoView {
    char pad0[0x1b30];
    const char *m_psz1b30;
    int m_n1b34;
    void sub_10013cf5(int a, int b, int c);
    void sub_1000198d(int a, int b);
    void sub_10383170(int unused);
};

// TARGET: CMingXiaoView::sub_10383170
void CMingXiaoView::sub_10383170(int unused)
{
    sub_10013cf5(1, 1, 10);
    m_psz1b30 = g_1063f48c;
    m_n1b34 = 0x99e;
    sub_1000198d(0x170, 0);
}
// END FUNCTION
