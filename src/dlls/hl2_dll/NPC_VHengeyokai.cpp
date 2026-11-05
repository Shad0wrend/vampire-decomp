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

// FUNCTION: 0x103831c0 size=0x217
#include "CEntityVSlots.h"
#include "globalvars.h"

struct CHengeyokaiMorphView : public CEntityVSlots
{
	char m_pad0004[0x168 - 4];
	int m_n168;
	int m_n16c;
	char m_pad0170[0x19c - 0x170];
	unsigned int m_flags19c;
	char m_pad01a0[3];
	char m_b1a3;
	char m_pad01a4[0x204 - 0x1a4];
	unsigned int m_flags204;
	char m_pad0208[0x1480 - 0x208];
	char m_b1480;
	char m_pad1481[0x155c - 0x1481];
	unsigned int m_h155c;
	float m_f1560;
	char m_pad1564[4];
	int m_n1568;
	char m_pad156c[0x1b30 - 0x156c];
	const char *m_pszFile1b30;
	int m_nLine1b34;
	char m_pad1b38[4];
	const char *m_pszFile1b3c;
	int m_nLine1b40;
	char m_pad1b44[0x5cc0 - 0x1b44];
	int m_n5cc0;
	int m_n5cc4;
	char m_pad5cc8[0x6348 - 0x5cc8];
	int m_a6348[5];
	char m_pad635c[0x63b4 - 0x635c];
	float m_f63b4;
	char m_pad63b8[0x6420 - 0x63b8];
	int m_a6420[5];

	void sub_10273070(int a);
	void sub_10097310(CHengeyokaiMorphView *pOwner);
	void sub_102ae750(int nLine, int b);
	void sub_103831c0();
};

void __stdcall sub_10272650(int a);
void sub_101cf600(CHengeyokaiMorphView *pEnt);
void *sub_10136580(const char *pszClassname);
void sub_101d1280(CHengeyokaiMorphView *pEnt);

// TARGET: CHengeyokaiMorphView::sub_103831c0
void CHengeyokaiMorphView::sub_103831c0()
{
	CHengeyokaiMorphView *pThis = this;
	sub_10272650(0x12a);
	pThis->m_flags19c |= 0x10;
	pThis->m_n168 = 0;
	pThis->m_n16c = 0;
	pThis->m_n1568 = 0x12;
	pThis->sub_10273070(1);
	sub_101cf600(pThis);
	void *pNew = sub_10136580("npc_VHengeyokai");
	CHengeyokaiMorphView *pOther = 0;
	if (pNew)
		pOther = *(CHengeyokaiMorphView **)((char *)pNew + 0x98);
	pOther->m_flags204 |= 4;
	pOther->slot62((const float *)pThis->slot217());
	pOther->slot64((const float *)pThis->slot221());
	pOther->slot202(pThis);
	pOther->sub_10097310(pThis);
	pOther->m_f63b4 = 4096.0f;
	sub_101d1280(pOther);
	pOther->m_flags19c |= 0x60;
	pOther->slot614();
	pOther->slot105("models/character/monster/Hengeyokai/hengeyokai.mdl");
	pOther->m_flags19c &= 0xffffff9f;
	pOther->m_b1a3 = 1;
	pOther->m_n168 = 0x1f;
	pOther->m_n16c = 2;
	pOther->m_h155c = *pThis->slot1();
	const char *pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHengeyokai.cpp";
	float flTime; flTime = gpGlobals->curtime;
	pThis->m_f1560 = flTime;
	pOther->m_n5cc0 = 5;
	pOther->m_f1560 = flTime;
	pOther->m_b1480 = 1;
	pOther->m_pszFile1b3c = pszFile;
	pOther->m_n5cc4 = 5;
	pOther->m_nLine1b40 = 0x9cb;
	pOther->m_pszFile1b30 = pszFile;
	pOther->m_nLine1b34 = 0x9cc;
	pOther->sub_102ae750(0x16f, 0);
	pOther->m_a6348[0] = pThis->m_a6348[0];
	pOther->m_a6348[1] = pThis->m_a6348[1];
	pOther->m_a6348[2] = pThis->m_a6348[2];
	pOther->m_a6348[3] = pThis->m_a6348[3];
	pOther->m_a6348[4] = pThis->m_a6348[4];
	pOther->m_a6420[0] = pThis->m_a6420[0];
	pOther->m_a6420[1] = pThis->m_a6420[1];
	pOther->m_a6420[2] = pThis->m_a6420[2];
	pOther->m_a6420[3] = pThis->m_a6420[3];
	pOther->m_a6420[4] = pThis->m_a6420[4];
	pThis->m_n168 = 0x1e;
	pThis->m_n16c = 2;
	pThis->m_h155c = *pOther->slot1();
}
// END FUNCTION
