// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1039c480 size=0x6
#include "CNPC_VMingXiaoTentacle.h"
int CNPC_VMingXiaoTentacle::vfunc337()
{
    return 0x38000;
}
// END FUNCTION

// FUNCTION: 0x1039e310 size=0x90
#include "CNPC_VMingXiaoTentacle.h"

#define QV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define QV100(p) QV10(p##0) QV10(p##1) QV10(p##2) QV10(p##3) QV10(p##4) QV10(p##5) QV10(p##6) QV10(p##7) QV10(p##8) QV10(p##9)

struct CVTSlots {
	QV100(s0)
	QV10(s10) QV10(s11) QV10(s12) QV10(s13) QV10(s14) QV10(s15)
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163();
	virtual void s164(); virtual void s165(); virtual void s166();
	virtual int vfunc167();
};

struct CVTFields {
	char m_pad0[0x1b38];
	int m_n1b38;
	const char *m_pszFile1b3c;
	int m_nLine1b40;
	char m_pad1[0x5cc0 - 0x1b44];
	int m_nState5cc0;
	int m_nIdealState5cc4;
};

int CNPC_VMingXiaoTentacle::vfunc461()
{
	CVTFields *p = (CVTFields *)this;
	p->m_n1b38 = 0x1a;
	if (p->m_nState5cc0 != 7 && p->m_nIdealState5cc4 != 7) {
		int r = ((CVTSlots *)this)->vfunc167();
		p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiaoTentacle.cpp";
		if (r) {
			p->m_nIdealState5cc4 = 2;
			p->m_nLine1b40 = 0x48d;
			return *(volatile int *)&p->m_nIdealState5cc4;
		}
		p->m_nIdealState5cc4 = 1;
		p->m_nLine1b40 = 0x491;
		return *(volatile int *)&p->m_nIdealState5cc4;
	}
	p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiaoTentacle.cpp";
	p->m_nLine1b40 = 0x486;
	p->m_nIdealState5cc4 = 7;
	return 7;
}
// END FUNCTION

// FUNCTION: 0x1039e890 size=0x3d
#include "vampire.h"
#include "CAI_BaseNPCTroika.h"
#include "CNPC_VMingXiaoTentacle.h"

extern char g_1064a398[];

struct CUnknownTroikaBase1039e890
{
    void sub_10012611(int a);
};

// TARGET: CNPC_VMingXiaoTentacle::vfunc390
void CNPC_VMingXiaoTentacle::vfunc390(int a)
{
    m_n6680 = 0;
    m_pszFile1b30 = g_1064a398;
    m_nLine1b34 = 0x549;
    ((CAI_BaseNPCTroika *)this)->sub_102ae750(0x168, 0);
    ((CUnknownTroikaBase1039e890 *)this)->sub_10012611(a);
}
// END FUNCTION

// FUNCTION: 0x1039e970 size=0xbc
#include "CNPC_VMingXiaoTentacle.h"

#define TENTACLE_FILE "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiaoTentacle.cpp"

void CNPC_VMingXiaoTentacle::sub_1039e970()
{
	switch ((unsigned int)m_n6670) {
	case 0:
		goto L_default;
	case 1:
		goto L_default;
	case 2:
		m_pszFile1b30 = TENTACLE_FILE;
		m_nLine1b34 = 0x590;
		sub_102ae750(0x16a, 1);
		break;
	case 3:
		if (sub_10295460(0x1d, 0) != -1) {
			m_pszFile1b30 = TENTACLE_FILE;
			m_nLine1b34 = 0x598;
			sub_102ae750(0x16a, 1);
		} else {
			m_pszFile1b30 = TENTACLE_FILE;
			m_nLine1b34 = 0x59d;
			sub_102ae750(0x16c, 1);
		}
		break;
	default:
	L_default:
		sub_1039f310();
		m_pszFile1b30 = TENTACLE_FILE;
		m_nLine1b34 = 0x589;
		sub_102ae750(0x16b, 1);
		break;
	}
	m_nTakeDamage = 1;
	m_b6699 = 1;
	m_b63d8 = 1;
}
// END FUNCTION
