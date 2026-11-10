// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101de660 size=0x6ef
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "Vector.h"
#include "CBaseCombatCharacter.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CVDmg_t.h"
#include "CVStatList_t.h"
#include "CDiscipline.h"

struct CDiscManagerView
{
	int sub_101e12a0(int nDisc);
	void *sub_101e11c0(int idx);
	int sub_101e1720(int nDisc);
};

extern CDiscManagerView g_10739a4c;
extern int g_10739a68;
extern unsigned char g_10739a64;

struct CEntryView
{
	char m_pad0000[0x30];
	char m_b30;
};

struct CInfo
{
	int m_n0;
	Vector m_v4;
	Vector m_v10;
	int m_unk1c;
	int m_unk20;
	int m_unk24;
	int m_unk28;
	int m_unk2c;
	int m_unk30;
	int m_unk34;
	int m_unk38;
	int m_unk3c;
	int m_unk40;
	int m_unk44;
	int m_unk48;
	void sub_101c26d0(void *pA, void *pB, float f, int a, int b, void *pDmg, int c);
};

#define DVS(n) virtual void s##n();
#define DVS10(p) DVS(p##0) DVS(p##1) DVS(p##2) DVS(p##3) DVS(p##4) DVS(p##5) DVS(p##6) DVS(p##7) DVS(p##8) DVS(p##9)
#define DVS100(p) DVS10(p##0) DVS10(p##1) DVS10(p##2) DVS10(p##3) DVS10(p##4) DVS10(p##5) DVS10(p##6) DVS10(p##7) DVS10(p##8) DVS10(p##9)

class CDiscEntView
{
public:
	DVS100(0) DVS10(10) DVS10(11) DVS10(12) DVS10(13) DVS10(14) DVS10(15) DVS10(16) DVS10(17) DVS10(18)
	DVS(190) DVS(191)
	virtual Vector WorldSpaceCenter();
	virtual Vector EyePosition();
	DVS(194) DVS(195) DVS(196) DVS(197) DVS(198) DVS(199)
	DVS(200) DVS(201) DVS(202) DVS(203) DVS(204) DVS(205) DVS(206) DVS(207) DVS(208) DVS(209)
	DVS(210) DVS(211) DVS(212) DVS(213) DVS(214) DVS(215) DVS(216)
	virtual const Vector &GetAbsOrigin();
};

struct CTraitList
{
	void sub_101f9ff0(int a, int b, int c, int d);
};

struct CBTargetActs
{
	void sub_10323630();
	void sub_10338cb0();
};

struct CAnimatingView
{
	int sub_1008dc40(int a, int b);
};

struct CAnimOverlayView
{
	void sub_10099250(int a, int b, int c);
};

struct CSrcView
{
	void sub_101dd3a0(void *pChar, int id);
	void sub_101dd090(int a, int id);
};

struct CCastView
{
	void sub_101ddcd0(void *pFirst, void *pSecond, int a);
};

struct CSubView
{
	void sub_101dc790(int pOwner);
};

struct CNpcMethods
{
	void *sub_1029f370(const char *pszName);
	void sub_102ae750(void *p, int a);
};

struct CNpcDbg
{
	char m_pad0000[0x1b30];
	const char *m_pszFile;
	int m_nLine;
};

struct CUpdateFlags
{
	char m_pad0000[0x13a4];
	int m_iUpdateFlags;
};

extern char g_106b8540[];

void sub_1018e910(CBaseCombatCharacter *p);

inline const char *STRINGR(const char *const &s)
{
	return s ? s : g_106b8540;
}

void CDiscipline::sub_101de660(CBaseCombatCharacter *pSource, CBaseCombatCharacter *pTarget, int nDisc, float flValue)
{
	int idx = g_10739a4c.sub_101e12a0(nDisc);
	if (idx == -1)
		return;
	CEntryView *pEntry = (CEntryView *)g_10739a4c.sub_101e11c0(idx);

	((CSrcView *)((char *)this + 0x5c))->sub_101dd3a0(pTarget, nDisc);
	if (m_b1c)
		sub_1018e910(pTarget);
	if (m_nA4 != 0)
		pTarget->sub_1033c6b0(m_nA4);

	CAI_BaseNPCTroika *pNpc = pTarget->m_pNPC98;
	if (pNpc != 0 && m_nA8 != 0)
	{
		if ((m_nA8 & 0x80000000) == 0)
			pNpc->m_flags14b8 |= m_nA8;
		else
			pNpc->m_flags14bc |= m_nA8;
	}

	int nMax = 15;
	if (pSource != 0)
		nMax = CVStatListSet::Of(pSource)->Find(0)->sub_102012d0(0xc);

	int nDamage = m_rng14.sub_101ddaf0(100) * nMax / 100;

	if (nDamage > 0)
	{
		int n = nDamage;
		do
		{
			((CBTargetActs *)pTarget)->sub_10338cb0();
			if (pSource != 0)
				pSource->sub_10338df0(1);
		} while (--n != 0);

		if (nDamage == nMax && pSource != 0)
		{
			pSource->sub_103392c0(0, 0, 0);
			if (m_b1d)
				((CEntityVSlots *)pSource)->slot402();
		}
	}

	int nVal = 100;
	((CTraitList *)((char *)pTarget + 0x13dc))->sub_101f9ff0(9, 2, g_10739a4c.sub_101e1720(nDisc), (int)&nVal);
	sub_101de2f0(pTarget, pSource, m_rng0c.sub_101ddaf0(nVal));

	if (nDamage != nMax || pEntry->m_b30 != 0)
	{
		nVal = 100;
		if (pSource != 0)
			((CTraitList *)((char *)pSource + 0x13dc))->sub_101f9ff0(9, 2, g_10739a4c.sub_101e1720(nDisc), (int)&nVal);
		sub_101de2f0(pSource, pTarget, m_rng04.sub_101ddaf0(nVal));

		int n20 = m_rng20.sub_101ddaf0(100);
		if (n20 > 0)
		{
			int n = n20;
			do
			{
				((CBTargetActs *)pTarget)->sub_10338cb0();
			} while (--n != 0);
		}

		int n28 = m_rng28.sub_101ddaf0(100);
		if (n28 != 0)
		{
			if (n28 < 0 || n28 > 500)
				n28 = 0;
			CVStatListSet::Of(pTarget)->Find(0)->sub_10200be0(0x19, n28);
			((CUpdateFlags *)pTarget)->m_iUpdateFlags |= 1;
		}

		g_10739a68 = m_n30;
		if (m_b1e)
			((CBTargetActs *)pTarget)->sub_10323630();

		if (pNpc != 0)
		{
			if (m_psz34 != 0)
			{
				((CEntityVSlots *)pNpc)->slot614();
				g_10739a64 = 0;
				if (((CEntityVSlots *)pNpc)->slot158())
				{
					((CNpcDbg *)pNpc)->m_pszFile = "E:\\Vampire\\main\\game_shared\\v_discipline.cpp";
					((CNpcDbg *)pNpc)->m_nLine = 0xa24;
					((CNpcMethods *)pNpc)->sub_102ae750(((CNpcMethods *)pNpc)->sub_1029f370(STRINGR(m_psz34)), 0);
				}
				g_10739a64 = 1;
			}
		}
		else
		{
			if (pTarget->m_pA8 != 0 && m_n38 != -1)
				((CEntityVSlots *)pTarget->m_pA8)->slot449(m_n38, 1);
		}

		if (m_psz44 != 0)
			pTarget->sub_10106580(STRINGR(m_psz44), 0, 0.15f, flValue, 0.15f, 1.0f);

		if (m_n3c != -1)
		{
			if (((CAnimatingView *)pTarget)->sub_1008dc40(m_n3c, -1) >= 0)
				((CAnimOverlayView *)pTarget)->sub_10099250(m_n3c, m_n40, 0);
		}
	}

	CDiscEntView *pT = (CDiscEntView *)pTarget;
	CDiscEntView *pS = (CDiscEntView *)pSource;

	if (m_n48 != 0)
	{
		int nStat = CVStatListSet::Of(pTarget)->Find(0)->sub_102012d0(0x11);
		int dmgValue = m_n48 * nStat / 100;
		CVDmg_t dmg;
		dmg.sub_101fa960((CVDmgSource_t *)pSource);
		dmg.sub_101fa8d0(1, 0x80, dmgValue);
		dmg.m_field04 = dmgValue;
		dmg.m_field0c = dmgValue;
		CInfo info;
		info.sub_101c26d0(pSource, pSource, 1.0f, 0, 0, &dmg, -1);
		info.m_v10.Init();
		info.m_v4.Init();

		Vector vecDir;
		if (pSource != 0)
			vecDir = pT->EyePosition() - pS->GetAbsOrigin() - (pT->EyePosition() - pT->WorldSpaceCenter()) * 0.5f;
		pTarget->vfunc292((int)&info, &vecDir, 0);
		dmg.sub_101fa680();
	}

	if (m_n4c != 0)
	{
		Vector vecDir2;
		if (pSource != 0)
			vecDir2 = pT->EyePosition() - pS->GetAbsOrigin() - (pT->EyePosition() - pT->WorldSpaceCenter()) * 0.5f;
		pTarget->sub_10344f80(&vecDir2, 0, 1);
	}

	((CCastView *)((char *)this + 0x50))->sub_101ddcd0(pSource, pTarget, nDisc);
	((CSrcView *)((char *)this + 0x78))->sub_101dd090((int)pTarget, nDisc);
	((CSubView *)((char *)this + 0x94))->sub_101dc790((int)pTarget);
}
// END FUNCTION
