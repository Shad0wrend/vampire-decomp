// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aa5d0 size=0xf
#include "CAI_BaseNPCTroika.h"
int CAI_BaseNPCTroika::vfunc586(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x6088);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101aa5f0 size=0x7
float __fastcall sub_101aa5f0(int p)
{
	return *(float *)((char *)p + 0x63c0);
}
// END FUNCTION

// FUNCTION: 0x101aa610 size=0x7
float __fastcall sub_101aa610(int p)
{
	return *(float *)((char *)p + 0x63c4);
}
// END FUNCTION

// FUNCTION: 0x101aa630 size=0x7
float __fastcall sub_101aa630(int p)
{
	return *(float *)((char *)p + 0x63c8);
}
// END FUNCTION

// FUNCTION: 0x101aa650 size=0x7
float __fastcall sub_101aa650(int p)
{
	return *(float *)((char *)p + 0x63cc);
}
// END FUNCTION

// FUNCTION: 0x101aa670 size=0x7
float sub_101aa670()
{
	return 36.0f;
}
// END FUNCTION

// FUNCTION: 0x101aa690 size=0x3
#include "CAI_BaseNPCTroika.h"
bool CAI_BaseNPCTroika::vfunc591()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101aa6b0 size=0x7
char __fastcall sub_101aa6b0(int p)
{
	return *(char *)((char *)p + 0x63fc);
}
// END FUNCTION

// FUNCTION: 0x101aa6d0 size=0x7
float __fastcall sub_101aa6d0(int p)
{
	return *(float *)((char *)p + 0x6254);
}
// END FUNCTION

// FUNCTION: 0x101aa6f0 size=0x7
float __fastcall sub_101aa6f0(int p)
{
	return *(float *)((char *)p + 0x6258);
}
// END FUNCTION

// FUNCTION: 0x101aa710 size=0x7
float __fastcall sub_101aa710(int p)
{
	return *(float *)((char *)p + 0x625c);
}
// END FUNCTION

// FUNCTION: 0x101aa730 size=0x7
float __fastcall sub_101aa730(int p)
{
	return *(float *)((char *)p + 0x6260);
}
// END FUNCTION

// FUNCTION: 0x101aa750 size=0xd
#include "CAI_BaseNPCTroika.h"
struct TroikaField63f0 { char pad[0x63f0]; char m; };
void CAI_BaseNPCTroika::vfunc416(char value)
{
	((TroikaField63f0 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x101aa770 size=0x7
char __fastcall sub_101aa770(int p)
{
	return *(char *)((char *)p + 0x63f0);
}
// END FUNCTION

// FUNCTION: 0x101aa790 size=0x6
#include "CAI_BaseNPCTroika.h"
namespace lifted {
extern char g_10924248;
}
CAI_CondOwner * CAI_BaseNPCTroika::vfunc580()
{
    return (CAI_CondOwner *)((int)&lifted::g_10924248);
}
// END FUNCTION

// FUNCTION: 0x101aa7b0 size=0x6
#include "CAI_BaseNPCTroika.h"
namespace lifted {
extern int g_105d1060;
}
const char * CAI_BaseNPCTroika::vfunc451()
{
    return (const char *)lifted::g_105d1060;
}
// END FUNCTION

// FUNCTION: 0x1029a8b0 size=0x51
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
extern char g_106b8540[];
void sub_1000f4e8();
float __fastcall sub_10293a80(CAI_BaseNPCTroika *p);

// TARGET: CAI_BaseNPCTroika::vfunc422
void CAI_BaseNPCTroika::vfunc422()
{
	CAI_BaseNPC::vfunc422();
	sub_100ac4e0((int)sub_1000f4e8, 0, 0);
	sub_102c44e0(m_psz6478 ? m_psz6478 : g_106b8540);
	sub_102c4680(*(const char **)((char *)this + 0x6480) ? *(const char **)((char *)this + 0x6480) : g_106b8540);
	sub_10293a80(this);
}
// END FUNCTION

// FUNCTION: 0x1029aa10 size=0x2df
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1028fb70.h"
#include "globalvars.h"

extern "C" int _strcmpi(const char *s1, const char *s2);
extern "C" int atoi(const char *s);
extern "C" double atof(const char *s);
extern void (*g_109f3650)(int level, const char *pMsg, ...);
extern void (*g_109f366c)(const char *pMsg, ...);

class CUnknown1028fc90
{
public:
	int sub_1028fc90();
};

void CAI_BaseNPCTroika::vfunc585(const char *pszName, const char *pszValue)
{
	CUnknown1028fb70 *pView = (CUnknown1028fb70 *)this;
	int nCmp = _strcmpi(pszName, "CAPABILITIES");
	void (*pfnDevMsg)(int level, const char *pMsg, ...) = g_109f3650;
	if (!nCmp)
	{
		pfnDevMsg(2, "Maybe this should be in a func/input SetCapability!\n");
	}
	else if (!_strcmpi(pszName, "GOALS"))
	{
		pfnDevMsg(2, "Hey foo!  You need to implement some goals!\n");
	}
	else
	{
		if (!_strcmpi(pszName, "NPCPERCEPTION"))
		{
			int n = atoi(pszValue);
			void (*pfnError)(const char *pMsg, ...) = g_109f366c;
			pView->m_nLevel = n;
			if (n < 1)
			{
				pfnError("ProcessTweakParam:  %s - You specified an invalid NPCPERCEPTION parameter (%d).  Must be between 1 and %d\n", pView->sub_100ab4f0(), n, 10);
				pView->m_nLevel = 1;
			}
			if (pView->m_nLevel > 10)
			{
				pfnError("ProcessTweakParam:  %s - You specified an invalid NPCPERCEPTION parameter (%d).  Must be between 1 and %d\n", pView->sub_100ab4f0(), pView->m_nLevel, 10);
				pView->m_nLevel = 10;
			}
			pView->sub_1028fb70();
			((CUnknown1028fc90 *)this)->sub_1028fc90();
			return;
		}
		else if (!_strcmpi(pszName, "VISION"))
		{
			pView->m_flVisionOverride = atof(pszValue);
			if (pView->m_flVisionOverride < 0.0f && pView->m_flVisionOverride != -1.0f)
			{
				g_109f366c("ProcessTweakParam:  %s - You specified a negative VISION parameter.  NPCs are not allowed to view their inner-selves.\n", pView->sub_100ab4f0());
			}
		}
		else if (!_strcmpi(pszName, "HEARING"))
		{
			pView->m_flHearingOverride = atof(pszValue);
			if (pView->m_flHearingOverride < 0.0f && pView->m_flHearingOverride != -1.0f)
			{
				g_109f366c("ProcessTweakParam:  %s - You specified a negative HEARING parameter.  Inside of your ears there are drums.\n", pView->sub_100ab4f0());
			}
		}
		else
		{
			if (!_strcmpi(pszName, "SQUAD"))
			{
				sub_1029a930(pszValue);
				return;
			}
			if (!_strcmpi(pszName, "IPGROUPS"))
			{
				sub_10298910(pszValue);
				return;
			}
			if (!_strcmpi(pszName, "HINTGROUPS"))
			{
				sub_102989e0(pszValue);
				return;
			}
			if (!_strcmpi(pszName, "TPMOVETIMER"))
			{
				*(float *)((char *)this + 0x65dc) = atof(pszValue) + gpGlobals->curtime;
				return;
			}
			if (!_strcmpi(pszName, "IGNOREATTACK"))
			{
				*(bool *)((char *)this + 0x65f5) = atoi(pszValue) != 0;
				return;
			}
			if (!_strcmpi(pszName, "NOALERTSTATE"))
			{
				*(bool *)((char *)this + 0x65f6) = atoi(pszValue) != 0;
				return;
			}
			goto ignored;
		}
		pView->sub_1028fb70();
		((CUnknown1028fc90 *)this)->sub_1028fc90();
		return;
	}
ignored:
	pfnDevMsg(2, "ProcessTweakParam(%s, %s) ignored by base class.\n", pszName, pszValue);
}
// END FUNCTION

// FUNCTION: 0x1029adb0 size=0x19a
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027d990.h"
#include "CEHandleGet.h"

struct CTroikaMotor448 {
	char m_pad00[0x28];
	char m_b28;
	void sub_102e0a60(float f);
};

struct CTroikaTarget448 {
	char m_pad0000[0x788];
	char m_b788;
};

struct CTroikaSlot15 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14();
	virtual void slot15(float *pOut);
};

struct CTroika448Vec {
	float x, y, z;
};

struct CTroika448Bits {
	unsigned int b0 : 1; unsigned int b1 : 1; unsigned int b2 : 1; unsigned int b3 : 1;
	unsigned int b4 : 1; unsigned int b5 : 1; unsigned int b6 : 1; unsigned int b7 : 1;
	unsigned int b8 : 1; unsigned int b9 : 1; unsigned int b10 : 1; unsigned int b11 : 1;
	unsigned int b12 : 1; unsigned int b13 : 1; unsigned int b14 : 1; unsigned int b15 : 1;
	unsigned int b16 : 1; unsigned int b17 : 1; unsigned int b18 : 1; unsigned int b19 : 1;
	unsigned int b20 : 1; unsigned int b21 : 1; unsigned int b22 : 1; unsigned int b23 : 1;
	unsigned int b24 : 1; unsigned int b25 : 1; unsigned int b26 : 1; unsigned int b27 : 1;
	unsigned int b28 : 1; unsigned int b29 : 1; unsigned int b30 : 1; unsigned int b31 : 1;
};

struct CTroika448View {
	char m_pad0000[0x14b8];
	CTroika448Bits m_bits14b8;
	CTroika448Bits m_bits14bc;
	char m_pad14c0[0x5d44 - 0x14c0];
	CTroikaMotor448 *m_pMotor;
	char m_pad5d48[0x5d8c - 0x5d48];
	CTroika448Bits m_bits5d8c;
	char m_pad5d90[0x6240 - 0x5d90];
	CBaseHandle m_h6240;
	float m_f6244;
	float m_f6248;
	float m_f624c;
	float m_f6250;
	char m_pad6254[0x6300 - 0x6254];
	int m_n6300;
	char m_pad6304[0x631c - 0x6304];
	int m_n631c;
	int m_n6320;
	int m_n6324;
	int m_n6328;
	int m_n632c;
	char m_pad6330[0x63e0 - 0x6330];
	char m_b63e0;
	char m_pad63e1[0x63ec - 0x63e1];
	int m_n63ec;
	char m_pad63f0[0x643c - 0x63f0];
	CBaseHandle m_h643c;
	char m_pad6440[0x659c - 0x6440];
	int m_n659c;
	char m_b65a0;
	char m_pad65a1[0x65d0 - 0x65a1];
	CTroika448Vec m_vec65d0;
};

void CAI_BaseNPCTroika::vfunc448(int a)
{
	CTroika448View *p = (CTroika448View *)this;
	sub_102b53d0(1, "Leaving interesting place (TaskFail)");
	if (((CUnknown1027d990 *)this)->sub_1027d990() != 3 && ((CUnknown1027d990 *)this)->sub_1027d990() != 1)
		p->m_bits14b8.b3 = 0;
	p->m_pMotor->sub_102e0a60(180.0f);
	p->m_n63ec = 0;
	p->m_f6244 = gpGlobals->curtime;
	p->m_f6248 = gpGlobals->curtime;
	p->m_f6250 = gpGlobals->curtime;
	p->m_f624c = gpGlobals->curtime;
	p->m_n6320 = 0;
	p->m_n6324 = 0;
	p->m_n6328 = 0;
	p->m_n632c = 0;
	p->m_h6240 = (IHandleEntity *)0;
	CGlobalEntityList *pList = g_10566458;
	CBaseEntity *pEnt = pList->sub_100290c0((unsigned int *)&p->m_h643c);
	if (pEnt) {
		((CTroikaTarget448 *)pList->sub_100290c0((unsigned int *)&p->m_h643c))->m_b788 = 0;
		p->m_h643c = (IHandleEntity *)0;
	}
	if (p->m_bits5d8c.b13)
		p->m_bits5d8c.b13 = 0;
	p->m_bits5d8c.b28 = 0;
	p->m_bits5d8c.b29 = 0;
	p->m_bits5d8c.b30 = 0;
	p->m_bits5d8c.b31 = 0;
	p->m_bits14b8.b0 = 0;
	p->m_bits14b8.b1 = 0;
	p->m_bits14b8.b2 = 0;
	p->m_bits14b8.b7 = 0;
	p->m_bits14b8.b9 = 0;
	p->m_bits14b8.b10 = 0;
	p->m_bits14b8.b11 = 0;
	p->m_bits14b8.b12 = 0;
	p->m_bits14b8.b13 = 0;
	p->m_bits14b8.b14 = 0;
	p->m_bits14b8.b15 = 0;
	p->m_bits14b8.b16 = 0;
	p->m_bits14b8.b17 = 0;
	p->m_bits14b8.b19 = 0;
	p->m_bits14b8.b26 = 0;
	p->m_bits14b8.b27 = 0;
	p->m_bits14b8.b28 = 0;
	p->m_bits14b8.b30 = 0;
	p->m_bits14bc.b4 = 0;
	p->m_bits14bc.b5 = 0;
	p->m_bits14bc.b7 = 0;
	p->m_bits14bc.b8 = 0;
	p->m_bits14bc.b10 = 0;
	p->m_bits14bc.b11 = 0;
	p->m_bits14bc.b12 = 0;
	p->m_bits14bc.b31 = 0;
	if (p->m_bits14bc.b0 == 1) {
		CTroika448Vec *pVec = &p->m_vec65d0;
		((CTroikaSlot15 *)this)->slot15(&pVec->x);
		pVec->x = -1.0f;
		pVec->y = -1.0f;
		pVec->z = -1.0f;
		p->m_bits14bc.b0 = 0;
		p->m_bits14bc.b31 = 0;
	}
	p->m_b63e0 = 0;
	sub_10295ab0(5.0f);
	p->m_pMotor->m_b28 = 0;
	p->m_n6300 = 0;
	p->m_n659c = 0;
	p->m_b65a0 = 0;
	CAI_BaseNPC::vfunc448(a);
}
// END FUNCTION

// FUNCTION: 0x1029afc0 size=0x15f
#include "CAI_BaseNPCTroika.h"
#include "CBaseAnimating.h"
#include "CEHandleGet.h"

#define NPCF(type, off) (*(type *)((char *)this + (off)))
#define ENTF(type, p, off) (*(type *)((char *)(p) + (off)))

// TARGET: CAI_BaseNPCTroika::vfunc68
bool CAI_BaseNPCTroika::vfunc68(void *pOther)
{
	if (!NPCF(char, 0x63da))
	{
		if ((NPCF(unsigned int, 0x14b8) & 0x40) == 0x40)
		{
			if (ENTF(int, pOther, 0x94))
				return true;
			if (ENTF(int, pOther, 0xa8))
				return true;
		}
		else
		{
			void *p = (void *)ENTF(int, pOther, 0x98);
			if (p && (ENTF(unsigned int, p, 0x14b8) & 0x20000))
				return true;
		}
	}
	if (pOther == EHandle_Get(NPCF(unsigned int, 0x643c)))
		return true;
	if (ENTF(int, pOther, 0xa0))
		return true;
	void *q = (void *)NPCF(int, 0x5ddc);
	if (q)
	{
		int id = ENTF(int, q, 0x5dc);
		if (id >= 0x283c && id <= 0x283d && (ENTF(unsigned char, pOther, 0x4c) & 0x14))
			return true;
	}
	if ((unsigned char)(ENTF(unsigned int, pOther, 0x4c) >> 1) & 1)
		return true;
	if (EHandle_Get(NPCF(unsigned int, 0x1538)) && NPCF(int, 0x153c) != -1)
	{
		if (EHandle_Get(NPCF(unsigned int, 0x1538)) == pOther)
			return true;
	}
	return ((CBaseAnimating *)this)->sub_1008be20((CBaseEntity *)pOther);
}
// END FUNCTION

// FUNCTION: 0x1029b180 size=0xce
#include "CAI_BaseNPCTroika.h"
#include "CBaseAnimating.h"

extern char *g_10566458;

struct SOtherNpc { char pad[0x14b8]; unsigned int flags; };
struct SOther {
    char pad0[0x4c];
    unsigned char b4c;
    char pad1[0x94 - 0x4d];
    int m94;
    SOtherNpc *m98;
    char pad2[4];
    int ma0;
    char pad3[4];
    int ma8;
};
struct SHandleEntry { SOther *pEnt; unsigned int serial; };
struct STroikaView {
    char pad0[0x14b8];
    unsigned int flags14b8;
    char pad1[0x63da - 0x14bc];
    char b63da;
    char pad2[0x643c - 0x63db];
    unsigned int h643c;
    char pad3[0x65f7 - 0x6440];
    char b65f7;
};

bool CAI_BaseNPCTroika::sub_1029b180(void *pOtherArg)
{
    STroikaView *t = (STroikaView *)this;
    SOther *pOther = (SOther *)pOtherArg;
    if (!t->b63da) {
        if ((t->flags14b8 & 0x40) == 0x40) {
            if (pOther->m94)
                return true;
            if (pOther->ma8)
                return true;
        } else {
            if (pOther->m98 && (pOther->m98->flags & 0x20000))
                return true;
        }
    }
    unsigned int h = t->h643c;
    SOther *pHandled;
    if (h == 0xffffffff) {
        pHandled = 0;
    } else {
        SHandleEntry *e = (SHandleEntry *)(g_10566458 + 4 + (h & 0x1fff) * 12);
        pHandled = e->serial == (h >> 13) ? e->pEnt : 0;
    }
    if (pOther == pHandled)
        return true;
    if (pOther->ma0)
        return true;
    if (t->b65f7) {
        if (pOther->b4c & 0x16)
            return true;
    } else {
        if (pOther->b4c & 0x12)
            return true;
    }
    return ((CBaseAnimating *)this)->sub_1008be20((CBaseEntity *)pOther);
}
// END FUNCTION

// FUNCTION: 0x1029b290 size=0x724
#include "CAI_BaseNPCTroika.h"
#include "animevent_t.h"
#include "CBaseCombatWeapon.h"
#include "CBaseCombatCharacter.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "CEntitySoundOriginView.h"
#include "engineserver.h"
#include "engineiface.h"
#include "globalvars.h"
#include "Tier1.h"
#include "CRecipientFilter.h"
#include "CPASAttenuationFilter.h"
#include "CVDmg_t.h"
#include "CVStatList_t.h"
#include <stdio.h>

struct CAnimEdictView
{
	char m_pad0000[0x2e0];
	int m_pEdict2e0;
	char m_pad02e4[0x6f0 - 0x2e4];
	int m_n6f0;
	char m_pad06f4[4];
	float m_fl6f8;
};

struct CAnimCharCall
{
	void sub_10106580(const char *psz, int a, float b, float c, float d, float e);
	char sub_10336920();	// IsMale
};

struct CHEInfo
{
	char m_data[0x4c];
	void sub_101c26d0(void *pA, void *pB, float f, int a, int b, void *pDmg, int c);
	void sub_101c2a90(int a);
};

struct CHEFileSystem
{
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
	virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8();
	virtual bool FileExists(const char *pszName, const char *pszPathID);	// slot 9
};
extern CHEFileSystem *g_1070b238;

#define HV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define HV100(p) HV10(p##0) HV10(p##1) HV10(p##2) HV10(p##3) HV10(p##4) HV10(p##5) HV10(p##6) HV10(p##7) HV10(p##8) HV10(p##9)

struct CHESlots
{
	HV100(a) HV100(b) HV100(c) HV100(d)
	virtual void e0(); virtual void e1(); virtual void e2();
	virtual void vfunc403();
};

const char *sub_101d3730(const char *pszFormat, ...);
extern "C" int __cdecl atexit(void (__cdecl *)(void));
extern CVStatList_t g_109f0b40;
void __cdecl sub_10012a8a();
__forceinline CVStatList_t *FindStatList(CVStatListSet *pSet, int type)
{
	for (int i = 0; i < pSet->m_nLists; i++) {
		if (pSet->m_pLists[i]->m_field10 == type)
			return pSet->m_pLists[i];
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		g_109f0b40.CVStatList_t::CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}
static inline const float *HEVecPtr(const Vector &v) { return &v.x; }

void CAI_BaseNPCTroika::vfunc259(animevent_t *pEvent)
{
	int *pTask = sub_1028a150();
	switch (pEvent->event)
	{
	case 0x7e5:
		sub_10293d70();
		return;
	case 0x7f8:
	{
		CBaseCombatWeapon *pWeapon = dynamic_cast<CBaseCombatWeapon *>((CBaseEntity *)EHandle_Get(*(unsigned int *)((char *)this + 0x5ce4)));
		if (pWeapon)
		{
			if (pWeapon->sub_102521f0())
			{
				vfunc448((int)"Weapon in use by someone else");
				return;
			}
			if (!vfunc382(pWeapon))
			{
				vfunc448((int)"Can't use this weapon type");
				return;
			}
			vfunc383(pWeapon, 0);
			sub_10273e80(0);
			return;
		}
		vfunc448((int)"Weapon stolen by someone else");
		return;
	}
	case 0x7d5:
	{
		const char *pszSample = pEvent->options;
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int ed = ((CAnimEdictView *)this)->m_pEdict2e0;
		int entindex = engine->vfunc35(ed);
		enginesound->vfunc2(&filter, entindex, 0, pszSample, 1.0f, 0x42, 0, 100,
			(const float *)&((CEntitySoundOriginView *)this)->GetSoundEmissionOrigin(), 0, 1, 0);
		return;
	}
	case 0x1038:
	case 0x1039:
	{
		if (!pTask || *pTask != 0xb4)
			return;
		int nChannel = (pEvent->event == 0x1038) ? 4 : 2;
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int ed = ((CAnimEdictView *)this)->m_pEdict2e0;
		int entindex = engine->vfunc35(ed);
		enginesound->vfunc11(&filter, entindex, nChannel, 0, 0, 0x24, 100,
			(const float *)&((CEntitySoundOriginView *)this)->GetSoundEmissionOrigin(), 0, 1, 0);
		return;
	}
	case 0x1036:
	case 0x1037:
	case 0x103a:
	case 0x103b:
	{
		if (!pTask || *pTask != 0xb4)
			return;
		const char *pszGender = ((CAnimCharCall *)this)->sub_10336920() ? "male" : "female";
		const char *pszSample;
		if (g_1070b238->FileExists(sub_101d3730("sound/Interesting_places/%s/%s.wav", pszGender, pEvent->options), 0))
			pszSample = sub_101d3730("Interesting_places/%s/%s.wav", pszGender, pEvent->options);
		else
			pszSample = sub_101d3730("Interesting_places/%s.wav", pEvent->options);
		int nChannel = (pEvent->event == 0x1036 || pEvent->event == 0x103a) ? 4 : 2;
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int ed = ((CAnimEdictView *)this)->m_pEdict2e0;
		int entindex = engine->vfunc35(ed);
		enginesound->vfunc2(&filter, entindex, nChannel, pszSample, 1.0f, 0x42, 0x180, 100,
			(const float *)&((CEntitySoundOriginView *)this)->GetSoundEmissionOrigin(), 0, 1, 0);
		return;
	}
	case 0x7d6:
	{
		CVDmg_t dmg;
		dmg.sub_101fa960((CVDmgSource_t *)this);
		dmg.m_field04 = 1;
		dmg.m_field0c = 1;
		CHEInfo info;
		info.sub_101c26d0(0, EHandle_Get(*(unsigned int *)((char *)this + 0x628c)), 1.0f, 0, 0, &dmg, -1);
		info.sub_101c2a90(1);
		FindStatList(CVStatListSet::Of(this), 0)->sub_10200a70(0xf, 0x11);
		vfunc144((int)&info);
		((CHESlots *)this)->vfunc403();
		dmg.sub_101fa680();
		return;
	}
	case 0x80c:
	{
		float fRate = 1.0f, fMin = 0.2f, fMax = 0.2f, fExtra;
		char szName[0x40];
		if (sscanf(pEvent->options, "%s %f %f %f", szName, &fRate, &fMin, &fMax) <= 1)
			return;
		if (!(fRate > 0.0f))
			return;
		if (fMin + fMax > fRate)
		{
			float t = fRate / (fMin + fMax);
			fMin *= t;
			fMax *= t;
		}
		float x = fRate - (fMin + fMax);
		if (x > 0.0f)
			fExtra = x;
		else
			fExtra = 0.0f;
		((CAnimCharCall *)this)->sub_10106580(szName, 0, fMin, fExtra, fMax, 1.0f);
		return;
	}
	case 0x80d:
	{
		if (pEvent->options == 0 || pEvent->options[0] == 0)
			return;
		CAnimEdictView *pView = (CAnimEdictView *)this;
		float fDur = sub_10091080(pView->m_n6f0) * pView->m_fl6f8 + 0.1;
		((CAnimCharCall *)this)->sub_10106580(pEvent->options, 0, 0, fDur, 0, 1.0f);
		return;
	}
	}
	CAI_BaseNPC::vfunc259(pEvent);
}
// END FUNCTION

// FUNCTION: 0x1029c010 size=0x39d
#include "CAI_BaseNPCTroika.h"
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "ehandle.h"
#include "engineserver.h"
#include "globalvars.h"

void sub_10119750(const char *fmt, ...);
void *__cdecl sub_100c7480(void *hdr, int idx);

struct CSceneObj76 { float sub_1007dfa0(); };
struct CExprEvent76 { float sub_10076280(float f); };
struct CExprRec76
{
	int m_nIndex;
	char pad[0x14];
	CSceneObj76 *m_pScene;
	CExprEvent76 *m_pEvent;
};
struct CExprEntry76 { char pad[0x18c]; unsigned char m_flags; };
struct CExprTable76 { CExprEntry76 *sub_101051b0(int index); };
struct CDispTable76 { const char *sub_100ec410(int idx); int sub_100eccf0(int idx); };
extern CDispTable76 g_10924980;
extern CExprTable76 g_10709200;
struct CSceneEnt76 { char pad[0x4bc]; CSceneObj76 *m_pScene; };
struct CLookEnt76 { char pad[0x2e0]; int m_pEdict; const char *sub_100ab4f0(); };
struct CNpcView76 { float sub_10106e20(float t, CExprRec76 *pRec); void sub_102775e0(); };

#define AT76(T, off) (*(T *)((char *)this + (off)))

// TARGET: CAI_BaseNPCTroika::sub_1029c010
void CAI_BaseNPCTroika::sub_1029c010()
{
	if (AT76(int, 0x128)) {
		const char *pExprName;
		if (((CBaseCombatCharacter *)this)->sub_10106f90(AT76(int, 0x10b4)))
			pExprName = (const char *)((CBaseCombatCharacter *)this)->sub_101073c0(AT76(int, 0x10b4));
		else
			pExprName = "None";
		void *pHdr = sub_100952d0(-1);
		sub_10119750("Expression / Gesture information for %s:", sub_100ab4f0());
		int *pSeqA = (int *)((CBaseAnimating *)this)->sub_1008d990(AT76(int, 0x6f0));
		int *pSeqB = (int *)((CBaseAnimating *)this)->sub_1008d990(AT76(int, 0x6f0));
		sub_10119750("Seq (%.2f): %s / %s ", (double)AT76(float, 0x6f8), (char *)pSeqB + *pSeqB, (char *)pSeqA + pSeqA[1]);
		sub_10119750("Disposition:  %s,  Expression: %s (%.2f)", g_10924980.sub_100ec410(m_nCurrDisposition), pExprName, (double)((CBaseCombatCharacter *)this)->m_flDefExpressionIntensity);
		if (AT76(EHANDLE, 0x6554).Get()) {
			CSceneEnt76 *pScene = (CSceneEnt76 *)AT76(EHANDLE, 0x6554).Get();
			if (pScene->m_pScene)
				sub_10119750("Scene time: %.2f", (double)pScene->m_pScene->sub_1007dfa0());
			else
				sub_10119750("No Scene");
		} else
			sub_10119750("No Scene Entity");
		for (int i = 0; i < AT76(int, 0x10c8); i++) {
			CExprRec76 *pRec = (CExprRec76 *)(AT76(char *, 0x10bc) + i * 0x20);
			float flLevel;
			if (pRec->m_pEvent && pRec->m_pScene)
				flLevel = pRec->m_pEvent->sub_10076280(pRec->m_pScene->sub_1007dfa0());
			else
				flLevel = ((CNpcView76 *)this)->sub_10106e20(gpGlobals->curtime, pRec);
			CExprEntry76 *pEntry = g_10709200.sub_101051b0(pRec->m_nIndex);
			if (pEntry) {
				if (pEntry->m_flags & 1)
					sub_10119750("Expression:(O) %s level: %0.2f", pEntry, (double)flLevel);
				else
					sub_10119750("Expression:(N) %s level: %0.2f", pEntry, (double)flLevel);
			}
		}
		for (int j = 0; j < 4; j++) {
			float flWeight = AT76(float, 0x748 + j * 0x30);
			if (flWeight > 0.0f) {
				int *pName = (int *)sub_100c7480(pHdr, AT76(int, 0x73c + j * 0x30));
				sub_10119750("Anim Layer %d: %s (weight: %f)", j, (char *)pName + *pName, (double)AT76(float, 0x748 + j * 0x30));
			}
		}
		int nDefault = g_10924980.sub_100eccf0(m_nCurrDisposition);
		sub_10119750("Eye targets -  current: %d  default: %d  step: %d", AT76(int, 0x5b94), nDefault, AT76(int, 0x6578));
		if (AT76(EHANDLE, 0xe64).Get()) {
			CLookEnt76 *pLook = (CLookEnt76 *)AT76(EHANDLE, 0xe64).Get();
			CLookEnt76 *pLook2 = (CLookEnt76 *)AT76(EHANDLE, 0xe64).Get();
			int nEdict = pLook2->m_pEdict;
			int nIndex = engine->vfunc35(nEdict);
			sub_10119750("Looking at entity %d (%s)", nIndex, pLook->sub_100ab4f0());
		}
		if (AT76(char, 0x64ec))
			sub_10119750("Qued Dialog: %s", &AT76(char, 0x64ec));
		float flTalk = m_f64cc - gpGlobals->curtime;
		if (0.0f > flTalk)
			flTalk = 0.0f;
		sub_10119750("Talk Time Remaining: %.2f", (double)flTalk);
	} else
		((CNpcView76 *)this)->sub_102775e0();
}
// END FUNCTION

// FUNCTION: 0x1029ca50 size=0x864
#include "CNPC_VTzimisce.h"
#include "CAI_BaseNPCTroika.h"
#include "DebugOverlay.h"
#include "ConVar.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"

extern ConVar g_10924f20;
extern CGlobalEntityList g_106eb5d8;
extern Vector g_1070d1b0;

void sub_10144cd0(const Vector *pOrg, const Vector *pAng, const Vector &mins, const Vector &maxs, int r, int g, int b, int a, int dur);
void sub_10142b80(const Vector &org, const Vector &mins, const Vector &maxs, const Vector &ang, int r, int g, int b, int a, float dur);
void sub_10142aa0(const Vector *pOrg, const Vector &mins, const Vector &maxs, int r, int g, int b, int a, float dur);
void sub_10142af0(const Vector &org, const Vector &mins, const Vector &maxs, const Vector &dir, int r, int g, int b, int a, float dur);
void sub_10144a30(const Vector *pOrg, const Vector &dir, float flRadius, float flHeight, int r, int g, int b, int a, int dur);
void sub_101d2f40(Vector *pOut, float flYaw);
const Vector *sub_102d6100(int hull);
const Vector *sub_102d6120(int hull);

struct ICollView
{
	virtual void s0();
	virtual const Vector &WorldAlignMins();
	virtual const Vector &WorldAlignMaxs();
};

struct CSlot29View
{
	EVS10(0) EVS10(1)
	EVS(20) EVS(21) EVS(22) EVS(23) EVS(24) EVS(25) EVS(26) EVS(27) EVS(28)
	virtual float slot29();
};

#define V100(q) EVS10(q##0) EVS10(q##1) EVS10(q##2) EVS10(q##3) EVS10(q##4) EVS10(q##5) EVS10(q##6) EVS10(q##7) EVS10(q##8) EVS10(q##9)
struct CDbgSlots
{
	V100(0)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15)
	EVS(160) EVS(161) EVS(162) EVS(163) EVS(164) EVS(165) EVS(166)
	virtual CBaseEntity *slot167();
	EVS(168) EVS(169)
	EVS10(17) EVS10(18)
	EVS(190) EVS(191)
	virtual Vector slot192();
	EVS(193) EVS(194) EVS(195) EVS(196)
	virtual Vector slot197(const Vector &posSrc, char bNoisy, int c);
	EVS(198) EVS(199)
	EVS10(20) EVS10(21)
	virtual const Vector *slot220();
	EVS(221) EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227) EVS(228) EVS(229)
	EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	V100(3)
	EVS(400) EVS(401) EVS(402) EVS(403)
	virtual int slot404(CBaseEntity *pEnt);
	virtual int slot405(CBaseEntity *pEnt);
};

struct CHintView
{
	float sub_102d12e0();
};

struct CDbgFields
{
	char m_pad0[0x50];
	Vector m_vecOrigin;	// 0x50
	char m_pad5c[0x224 - 0x5c];
	int m_debugOverlays;	// 0x224
	char m_pad228[0x1568 - 0x228];
	int m_n1568;
	int m_n156c;
	int m_n1570;
	float m_f1574;
	char m_pad1578[0x5d60 - 0x1578];
	Vector m_v5d60;
	char m_pad5d6c[0x5ddc - 0x5d6c];
	CHintView *m_pHint;	// 0x5ddc
	char m_pad5de0[0x6290 - 0x5de0];
	Vector m_v6290;
	char m_pad629c[0x63fd - 0x629c];
	char m_b63fd;
	char m_pad63fe[0x6658 - 0x63fe];
	char m_b6658;
};

struct CHintFields
{
	char m_pad0[0x454];
	float m_flYaw;
	char m_pad458[0x5dc - 0x458];
	int m_nType;
};

struct CBaseNPCView
{
	void sub_10275760();
};

#define W(off) (*(float *)((char *)sub_1032e7b0() + (off)))

namespace block_1029ca50 {
struct CUnk1029c9f0
{
	char pad0000[0x1c70];
	float m_1c70;
};
#pragma auto_inline(off)
struct CTroikaDbgUnit : CAI_BaseNPCTroika
{
	float sub_1029c9f0(float f, CBaseEntity *p);
	float sub_1029ca30(float f);
};
float CTroikaDbgUnit::sub_1029c9f0(float f, CBaseEntity *p)
{
	float r = f * ((CUnk1029c9f0 *)p)->m_1c70;
	if (0.0f > r)
		r = 0.0f;
	return r;
}
float CTroikaDbgUnit::sub_1029ca30(float f)
{
	return f * 0.7f;
}
#pragma auto_inline(on)
}
using namespace block_1029ca50;

#define MAXF(a, b) (((a) > (b)) ? (a) : (b))
#define MINF(a, b) (((a) < (b)) ? (a) : (b))

inline CBaseEntity *NextNPCInSphere(CBaseEntity *pStart, Vector *pCenter)
{
	CBaseEntity *pEnt = g_106eb5d8.sub_100f8490(pStart, 0x820, pCenter, 4096.0f);
	return pEnt ? (CBaseEntity *)pEnt->m_p9c : 0;
}
__forceinline void AddIn(const Vector &a, const Vector &b, Vector &r) { r.x = a[0] + b.x; r.y = a.y + b.y; r.z = a.z + b.z; }
struct VecAddM : Vector { Vector Add(const Vector &v) const { Vector res; AddIn(*this, v, res); return res; } };
inline void HullMinsTo(int h, Vector &v) { v = *sub_102d6100(h); }
inline void HullMaxsTo(int h, Vector &v) { v = *sub_102d6120(h); }
// TARGET: CAI_BaseNPCTroika::vfunc123
void CAI_BaseNPCTroika::vfunc123()
{
	CTroikaDbgUnit *pUnit = (CTroikaDbgUnit *)this;
	CDbgSlots *pSlots = (CDbgSlots *)this;
	CDbgFields *pF = (CDbgFields *)this;
	float fA, fMin, fYMax;
	if (pF->m_debugOverlays & 0x400000) {
		float flRange = sub_1029c970();
		float flCos = pF->m_f1574;
		sub_1029c4a0(flRange, flCos, 0, 0x40, 0xc0, 0x40, 0x32, 1);
		CBaseEntity *pTarget = m_h628c.Get();
		if (pTarget) {
			flRange = pUnit->sub_1029c9f0(flRange, pTarget);
			flCos = pF->m_f1574 / ((CSlot29View *)pTarget)->slot29();
			sub_1029c4a0(flRange, flCos, 2.0f, 0xc0, 0x40, 0, 0x64, 0);
		}
		sub_1029c4a0(pUnit->sub_1029ca30(flRange), flCos, 4.0f, 0xff, 0, 0x80, 0x96, 0);
	}
	if (pF->m_debugOverlays & 0x1000) {
		ICollView *pColl = (ICollView *)((char *)this + 0x270);
		Vector vecMins = pColl->WorldAlignMins();
		Vector vecMaxs = pColl->WorldAlignMaxs();
		if (vecMaxs != vecMins)
			sub_10144cd0((const Vector *)vfunc217(), &pF->m_v6290, vecMins, vecMaxs, 0x80, 0, 0, 0x28, 0);
		Vector vecBone;
		Vector angBone;
		((CBaseAnimating *)this)->sub_10092610((int)"Bip01", (int)&vecBone, (int)&angBone);
		sub_10142b80(vecBone, Vector(-10, -10, -10), Vector(10, 10, 10), angBone, 0x80, 0, 0, 0x28, 0);
		if (pF->m_vecOrigin != g_1070d1b0) {
			vecMins -= pF->m_vecOrigin;
			vecMaxs += pF->m_vecOrigin;
			sub_10142aa0((const Vector *)vfunc217(), vecMins, vecMaxs, 0xff, 0x80, 0, 0x14, 0);
		}
		if (pF->m_n1568 != pF->m_n156c) {
			HullMinsTo(pF->m_n156c, vecMins);
			HullMaxsTo(pF->m_n156c, vecMaxs);
			sub_10142aa0((const Vector *)vfunc217(), vecMins, vecMaxs, 0xff, 0xff, 0x40, 10, 0);
		}
	}
	if (pF->m_debugOverlays & 0x20000000) {
		if (sub_1032e7b0()) {
			fA = MAXF(W(0x8c0), W(0x8c4));
			fMin = MINF(W(0x8b8), W(0x8bc));
		} else {
			fA = 2000.0f;
			fMin = 0;
		}
		sub_10144a30(pSlots->slot220(), Vector(1, 0, 0), fMin, 32.0f, 0xff, 0xff, 0x20, 0x80, 0);
		sub_10144a30(pSlots->slot220(), Vector(1, 0, 0), fA, 32.0f, 0x80, 0x80, 0x10, 0x80, 0);
	}
	if (g_10924f20.GetInt()) {
		CBaseEntity *pEnemy = pSlots->slot167();
		if (pEnemy) {
			Vector vecSrc;
			for (int i = 0; i < 5; i++) {
				Vector vecPos = ((CDbgSlots *)pEnemy)->slot197(vecSrc, 1, 0);
				sub_10143b70(&vecPos, &Vector(-2, -2, -2), &Vector(2, 2, 2), 0xff, 0x20, 0x20, 1, 0.1f);
			}
		}
	}
	if (pF->m_pHint) {
		switch (((CHintFields *)pF->m_pHint)->m_nType) {
		case 0x27d8:
			if (pF->m_b63fd) {
				fA = 43.0f;
				fYMax = ((CHintFields *)pF->m_pHint)->m_flYaw;
				break;
			}
			fYMax = -43.0f;
			goto negmin;
		case 100:
		case 0x283d:
			fYMax = ((CHintFields *)pF->m_pHint)->m_flYaw;
			goto negmin;
		case 101:
		case 0x283c:
			fYMax = ((CHintFields *)pF->m_pHint)->m_flYaw;
		negmin:
			fA = -((CHintFields *)pF->m_pHint)->m_flYaw;
			break;
		default:
			goto skipHint;
		}
		{
			Vector vec1, vec2;
			sub_101d2f40(&vec1, pF->m_pHint->sub_102d12e0() + fA);
			sub_101d2f40(&vec2, pF->m_pHint->sub_102d12e0() + fYMax);
			Vector vecOrg = ((const VecAddM &)pF->m_v5d60).Add(*((CEntityVSlots *)pF->m_pHint)->slot217());
			sub_10142af0(vecOrg, Vector(0, 0, -10), Vector(200, 0, 10), vec1, 0xff, 0, 0, 0x32, 0);
			sub_10142af0(vecOrg, Vector(0, 0, -10), Vector(200, 0, 10), vec2, 0xff, 0, 0, 0x32, 0);
		}
	}
skipHint:
	if (pF->m_b6658) {
		Vector vecCenter = pSlots->slot192();
		CBaseEntity *pOther;
		for (pOther = NextNPCInSphere(0, &vecCenter); pOther; pOther = NextNPCInSphere(pOther, &vecCenter)) {
			if (pOther != (CBaseEntity *)this) {
				int r, g, b;
				switch (pSlots->slot404(pOther)) {
				case 1: r = 4; g = 1; b = 1; break;
				case 2: r = 4; g = 4; b = 1; break;
				case 3: r = 1; g = 4; b = 1; break;
				case 4: r = 1; g = 1; b = 4; break;
				default: r = 4; g = 0; b = 0; break;
				}
				int n = (pSlots->slot405(pOther) + 2) * 6;
				n = n > 63 ? 63 : (n < 0 ? 0 : n);
				sub_10142e90(&vecCenter, &((CDbgSlots *)pOther)->slot192(), n * r, n * g, n * b, 1, 0);
			}
		}
	}
	if (*(short *)&fA == -1) ((CBaseNPCView *)this)->sub_10275760(); else ((CBaseNPCView *)this)->sub_10275760();
}
// END FUNCTION

// FUNCTION: 0x1029d4e0 size=0xec0
#include "string_t.h"
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "CAI_BaseNPC.h"
#include "CAI_TroikaLink.h"
#include "CAI_BaseNPCTroika.h"
#include <string.h>
#include "Tier1.h"
#include "ehandle.h"
#include "globalvars.h"
#include "engineserver.h"

// TARGET: ?sub_1029d4e0@CAI_BaseNPCTroikaDbg@@QAEHXZ
extern char g_106b8540[];
__declspec(dllimport) int Q_snprintf(char *pDest, int destLen, const char *pFormat, ...);
void sub_101434b0(int ent, int text_offset, const char *text, int duration, int r, int g, int b, int a);	// NDebugOverlay::EntityText
char *sub_101d3730(const char *pFmt, ...);	// UTIL_VarArgs
extern "C" int __cdecl _toupper_lk(int c);
extern "C" int sprintf(char *pDest, const char *pFmt, ...);

#define FLD(T, o) (*(T *)((char *)this + (o)))

struct CDbgDispTable { const char *sub_100ec410(int n); };
extern CDbgDispTable g_10924980;

struct CDbgHB { int sub_101c2a30(); };
struct CDbgAnim { float sub_100920d0(const char *pName); };

struct CDbgDoorAI
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad4[0x2c - 4];
	int m_n2c;	// 0x2c
};
extern CDbgDoorAI *g_1092429c;

struct CDbgChoreo { float sub_1007dfa0(); };

struct CDbgScene
{
	char m_pad0[0x450];
	const char *m_iszSceneFile;	// 0x450
	char m_pad454[0x4bc - 0x454];
	CDbgChoreo *m_pScene;	// 0x4bc
};

struct CDbgVec { float x, y, z; };

struct CDbgSlots
{
	virtual void v0();
	#define DV(n) virtual void v##n();
	#define DV10(p) DV(p##0) DV(p##1) DV(p##2) DV(p##3) DV(p##4) DV(p##5) DV(p##6) DV(p##7) DV(p##8) DV(p##9)
	DV(1) DV(2) DV(3) DV(4) DV(5) DV(6) DV(7) DV(8) DV(9)
	DV10(1) DV10(2) DV10(3) DV10(4) DV10(5) DV10(6) DV10(7) DV10(8) DV10(9)
	DV10(10) DV10(11) DV10(12) DV10(13) DV10(14) DV10(15) DV10(16) DV10(17) DV10(18) DV10(19) DV10(20)
	DV(210) DV(211) DV(212) DV(213) DV(214) DV(215) DV(216)
	virtual const CDbgVec &slot217();
	DV(218)
	virtual const CDbgVec &slot219();
};

struct CDbgBits
{
	int m_Ints[6];
	CDbgBits() { if (GetInts()) memset(GetInts(), 0, 6 * sizeof(int)); }
	int *GetInts() { return m_Ints; }
	const int *GetInts() const { return m_Ints; }
	void Copy(CDbgBits *out) const
	{
		int *pDest = out->GetInts();
		const int *pInts = GetInts();
		pDest[0] = pInts[0];
		pDest[1] = pInts[1];
		pDest[2] = pInts[2];
		pDest[3] = pInts[3];
		pDest[4] = pInts[4];
		pDest[5] = pInts[5];
	}
	bool IsBitSet(int bit) const { return (m_Ints[bit >> 5] & (1 << (bit & 31))) != 0; }
};

struct CDbgFields
{
	float GetDoorTime() { return *(float *)((char *)this + 0x6450) - gpGlobals->curtime; }
	char m_pad0[0x5c74];
	CDbgBits m_Conditions;	// 0x5c74
	CDbgBits m_CustomInterruptConditions;	// 0x5c8c
	char m_pad5ca4[0x6554 - 0x5ca4];
	CHandle<CDbgScene> m_hScene;	// 0x6554
};

struct CDbgFloats
{
	char m_pad0[0x654];
	float m_flGroundSpeed;	// 0x654
	char m_pad658[0x6f8 - 0x658];
	float m_flCycle;	// 0x6f8
	char m_pad6fc[0x6264 - 0x6fc];
	float m_flDistToPlayer;	// 0x6264
};
struct CDbgNVF { float m_Value; operator const float &() const { return m_Value; } };
struct CDbgFloats2
{
	char m_pad0[0x654];
	float m_flGroundSpeed;	// 0x654
	char m_pad658[0x6f8 - 0x658];
	CDbgNVF m_flCycle;	// 0x6f8
	char m_pad6fc[0x6264 - 0x6fc];
	float m_flDistToPlayer;	// 0x6264
};
#define FF ((CDbgFloats *)this)
#define FF2 ((CDbgFloats2 *)this)
#define SLOTS ((CDbgSlots *)this)
#define DF ((CDbgFields *)this)

struct CAI_BaseNPCTroikaDbg : public CAI_BaseNPCTroika
{
	int sub_1029d4e0();
};

int CAI_BaseNPCTroikaDbg::sub_1029d4e0()
{
	int text_offset = CAI_BaseNPC::sub_102767d0();

	if (FLD(unsigned char, 0x224) & 1)
	{
		char tempstr[512];
		g_109f3890(tempstr, "Seq: ", sizeof(tempstr));
		void *pStudioHdr = sub_100952d0(-1);
		int *pSeqDesc = (int *)sub_1008d990(FLD(int, 0x6f0));
		if (!pSeqDesc)
		{
			g_109f3884(tempstr, "(INVALID)", sizeof(tempstr), -1);
		}
		else
		{
			g_109f3884(tempstr, (char *)pSeqDesc + pSeqDesc[0], sizeof(tempstr), -1);
			g_109f3884(tempstr, " / ", sizeof(tempstr), -1);
			g_109f3884(tempstr, (char *)pSeqDesc + pSeqDesc[1], sizeof(tempstr), -1);
		}
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "Cycle: %.2f", FF->m_flCycle);
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		if (pStudioHdr)
		{
			Q_snprintf(tempstr, sizeof(tempstr), "move_yaw: %.3f", ((CDbgAnim *)this)->sub_100920d0("move_yaw"));
			sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;

			Q_snprintf(tempstr, sizeof(tempstr), "aim_pitch: %.3f", ((CDbgAnim *)this)->sub_100920d0("aim_pitch"));
			sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;

			Q_snprintf(tempstr, sizeof(tempstr), "aim_yaw: %.3", ((CDbgAnim *)this)->sub_100920d0("aim_yaw"));
			sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
		}

		Q_snprintf(tempstr, sizeof(tempstr), "ground speed: %.3f", FF->m_flGroundSpeed);
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "dist to player: %.3f", FF->m_flDistToPlayer);
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "Disposition: %s", g_10924980.sub_100ec410(FLD(int, 0x64d4)));
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "pos: %5.1f, %5.1f, %5.1f", SLOTS->slot217().x, SLOTS->slot217().y, SLOTS->slot217().z);
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "dir: %5.1f, %5.1f, %5.1f", SLOTS->slot219().x, SLOTS->slot219().y, SLOTS->slot219().z);
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		if ((FLD(unsigned int, 0x224) & 0x10000000) && FLD(int, 0x5c38))
		{
			int conds[] = { 0x40, 0x46, 1, 0x47, 0x48, 0x49, 0x4c, 0x4f, 0x51, 8, 0x5f, 0x60, 9,
				0x54, 0x56, 0x57, 0x58, 0x59, 0x63, 0x6d, 0x6f, 0x70, 0xa, 0xb, 0xc, 0xd };
			sub_101434b0(entindexDbg(), text_offset, "INT COND\n", 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
			char *p = tempstr;
			CDbgBits conditions;
			CDbgBits interrupts;
			int count = 0;
			DF->m_Conditions.Copy(&conditions);
			DF->m_CustomInterruptConditions.Copy(&interrupts);
			int i;
			int len;
			const char *pName;
			char buf[8];
			int j;
			for (i = 0; i < 0x77; i++)
			{
				bool bInt = interrupts.IsBitSet(i);
				if (conditions.IsBitSet(i))
				{
					count++;
					len = 0;
					if (sub_10269aa0(i))
						len = 10;
					len = len * 4 / 10;
					pName = vfunc408(i);
					for (j = 0; j < 3; j++)
					{
						if (j < len)
							buf[j] = _toupper_lk(pName[j]);
						else
							buf[j] = pName[j];
					}
					buf[j] = 0;
					p += sprintf(p, "%s  ", buf);
					if (!(count & 7))
					{
						sprintf(p, "\n");
						sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
						text_offset++;
						p = tempstr;
					}
				}
				if (bInt)
				{
					count++;
					len = 0;
					if (!sub_10269aa0(i))
						len = 10;
					len = len * 4 / 10;
					pName = vfunc408(i);
					for (j = 0; j < 3; j++)
					{
						if (j < len)
							buf[j] = _toupper_lk(pName[j]);
						else
							buf[j] = pName[j];
					}
					buf[j] = 0;
					p += sprintf(p, "!%s ", buf);
					if (!(count & 7))
					{
						sprintf(p, "\n");
						sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
						text_offset++;
						p = tempstr;
					}
				}
			}
			int rem = count & 7;
			if (rem)
			{
				sprintf(p, "\n");
				sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
			sub_101434b0(entindexDbg(), text_offset, "COND\n", 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
			p = tempstr;
			for (i = 0; i < 26; i++)
			{
				int cond = conds[i];
				len = 0;
				if (sub_10269aa0(cond))
					len = 10;
				len = len * 4 / 10;
				pName = vfunc408(cond);
				for (j = 0; j < 3; j++)
				{
					if (j < len)
						buf[j] = _toupper_lk(pName[j]);
					else
						buf[j] = pName[j];
				}
				buf[j] = 0;
				p += sprintf(p, "%s ", buf);
				if ((i & 7) == 7)
				{
					sprintf(p, "\n");
					sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
					text_offset++;
					p = tempstr;
				}
			}
			if (rem != 7)
			{
				sprintf(p, "\n");
				sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
		}
		else if (sub_10269aa0(0x55))
		{
			sub_101434b0(entindexDbg(), text_offset, "Enemy too far to attack", 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
		}

		int nHG = FLD(int, 0x1594);
		sub_101434b0(entindexDbg(), text_offset, sub_101d3730("HG - %d : HB - %d", nHG, ((CDbgHB *)((char *)this + 0x660c))->sub_101c2a30()), 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		if (!g_1092429c->vfunc1() && g_1092429c->m_n2c)
		{
			char buf[100];
			switch (FLD(int, 0x644c))
			{
			default:
				goto noai;
			case 1:
				sprintf(buf, "EALTAI_OPEN_DOOR              - %f", DF->GetDoorTime());
				break;
			case 2:
				sprintf(buf, "EALTAI_WAIT_DOOR              - %f", DF->GetDoorTime());
				break;
			case 3:
				sprintf(buf, "EALTAI_BLOCKED_DOOR           - %f", DF->GetDoorTime());
				break;
			case 4:
				sprintf(buf, "EALTAI_SCRIPT_STOPPED_AT_DOOR - %f", DF->GetDoorTime());
				break;
			case 0:
				goto noai;
			}
			sub_101434b0(entindexDbg(), text_offset, buf, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
		}
noai:

		if (DF->m_hScene)
		{
			CDbgScene *pScene = DF->m_hScene;
			CDbgChoreo *pChoreo = DF->m_hScene->m_pScene;
			if (pChoreo && pScene)
			{
				const char *pszName = pScene->m_iszSceneFile ? pScene->m_iszSceneFile : g_106b8540;
				sub_101434b0(entindexDbg(), text_offset, sub_101d3730("Scene: %s time: %.2f", pszName, pChoreo->sub_1007dfa0()), 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
			else if (pScene)
			{
				const char *pszName = pScene->m_iszSceneFile ? pScene->m_iszSceneFile : g_106b8540;
				sub_101434b0(entindexDbg(), text_offset, sub_101d3730("Scene: %s", pszName), 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
			else
			{
				sub_101434b0(entindexDbg(), text_offset, "??? scene", 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
		}
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x102c5470 size=0x38
#include "CAI_BaseNPCTroika.h"

struct EntObj {
	char pad[0x9c];
	int field9c;
};
struct EntSlot {
	EntObj *ent;
	int serial;
	int pad;
};
extern char *g_10566458;

static inline EntObj *ResolveHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntSlot *slot = (EntSlot *)(g_10566458 + 4) + (h & 0x1fff);
		if (slot->serial == (int)(h >> 13))
			return slot->ent;
	}
	return 0;
}

int CAI_BaseNPCTroika::vfunc293()
{
	EntObj *ent = ResolveHandle(*(unsigned int *)(m_pad0004 + 0x647c - 4));
	return ent == 0 ? 0 : ent->field9c;
}
// END FUNCTION

// FUNCTION: 0x102c5500 size=0x45
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::vfunc419()
{
	int pWeapon = sub_10007e19();
	if (pWeapon) {
		m_f5bbc = sub_1000cabd(pWeapon);
		m_f5bc0 = sub_10014655(pWeapon);
	} else {
		m_f5bbc = 0.3f;
		m_f5bc0 = 0.5f;
	}
}
// END FUNCTION

// FUNCTION: 0x102c5870 size=0x6
extern void *g_109248d4;

void *sub_102c5870(void)
{
    return &g_109248d4;
}
// END FUNCTION

// FUNCTION: 0x102c5890 size=0x3
#include "CAI_BaseNPCTroika.h"

int CAI_BaseNPCTroika::vfunc81()
{
	return 0;
}
// END FUNCTION
