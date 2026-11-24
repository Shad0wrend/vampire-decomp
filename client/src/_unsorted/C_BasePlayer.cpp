// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10002af0 size=0xe
struct V_10002af0 { int m_unk[0x19cc / 4]; int m_n19cc; };
// TARGET: sub_10002af0
int __fastcall sub_10002af0(V_10002af0 *self)
{
	return self->m_n19cc != 0;
}
// END FUNCTION

// FUNCTION: 0x10002b00 size=0x7
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc84()
{
    return *(int *)((char *)this + 0x1990);
}
// END FUNCTION

// FUNCTION: 0x10002b10 size=0x2d
#include "C_BasePlayer.h"
#include "CBaseEntityList.h"
extern CBaseEntityList *g_102b8e98;
C_BaseCombatWeapon *C_BasePlayer::vfunc167()
{
	unsigned int h = *(unsigned int *)((char *)this + 0x1a08);
	if (h != 0xffffffff) {
		CBaseEntityListEntry *e = &g_102b8e98->m_EntPtrArray[h & 0x1fff];
		if (e->m_SerialNumber == (int)(h >> 13))
			return (C_BaseCombatWeapon *)e->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10002b70 size=0x5
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc175(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10002b80 size=0x7
#include "C_BasePlayer.h"
namespace lifted {
extern float g_101e34ec;
}
float C_BasePlayer::vfunc176()
{
    return lifted::g_101e34ec;
}
// END FUNCTION

// FUNCTION: 0x1002a3b0 size=0x7
#include "C_BasePlayer.h"
char * C_BasePlayer::vfunc109()
{
    return (char *)this + 0x1888;
}
// END FUNCTION

// FUNCTION: 0x1002a3c0 size=0x11
#include "C_BasePlayer.h"
namespace lifted {
int __stdcall sub_1007dbb0(int);
}
int C_BasePlayer::vfunc107(int a0)
{
    lifted::sub_1007dbb0(a0);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x100a49f0 size=0x6
#include "C_BasePlayer.h"
namespace lifted {
extern char g_102b0be8;
}
int C_BasePlayer::vfunc16()
{
    return (int)&lifted::g_102b0be8;
}
// END FUNCTION

// FUNCTION: 0x100a4a00 size=0x3
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a5220 size=0x6
#include "C_BasePlayer.h"
namespace lifted {
extern char g_102b0bd0;
}
int C_BasePlayer::vfunc17()
{
    return (int)&lifted::g_102b0bd0;
}
// END FUNCTION

// FUNCTION: 0x100a54a0 size=0x1e
#include "C_BasePlayer.h"

// VC6 writes C_BasePlayer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BasePlayer *pcd_emit_100a54a0() { return new C_BasePlayer; }

// TARGET: ??_GC_BasePlayer@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100a58a0 size=0x9
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc177() { IsTransparent(); }
// END FUNCTION

// FUNCTION: 0x100a5900 size=0x9
struct V { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); };
void __fastcall sub_100a5900(char *self, int edx) { ((V *)(self + 4))->v11(); }
// END FUNCTION

// FUNCTION: 0x100a6e50 size=0x3
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc154(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100a7ab0 size=0x1a
#include "C_BasePlayer.h"
namespace lifted {
struct C100019a0 { bool sub_100019a0(); };
int sub_100a7890();
}
bool C_BasePlayer::vfunc174()
{
    int t0 = lifted::sub_100a7890();
    if (t0 != 0) {
        bool t1 = ((lifted::C100019a0 *)t0)->sub_100019a0();
        if (t1 == 0) {
            return 1;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a7b80 size=0xaf
#include "C_BasePlayer.h"
#include "C_BaseCombatWeapon.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);

struct IVEngineClient_100a7b80
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26();
	virtual void ServerCmd(const char *szCmdString, bool bReliable);
};

extern IVEngineClient_100a7b80 *g_104a57d4;

// TARGET: C_BasePlayer::vfunc158
void C_BasePlayer::vfunc158()
{
	if (vfunc167()->vfunc169())
	{
		char szBuf[128];
		Q_snprintf(szBuf, sizeof(szBuf), "%s %i", (const char *)vfunc167()->vfunc223(), vfunc167()->vfunc169());
		g_104a57d4->ServerCmd(szBuf, true);
	}
	else
	{
		g_104a57d4->ServerCmd((const char *)vfunc167()->vfunc223(), true);
	}
}
// END FUNCTION

// FUNCTION: 0x100a7c30 size=0xb
#include "C_BasePlayer.h"
bool sub_10050f60();
// TARGET: C_BasePlayer::vfunc163
bool C_BasePlayer::vfunc163() { if (sub_10050f60()) return false; return true; }
// END FUNCTION

// FUNCTION: 0x100a8030 size=0x8
#include "C_BasePlayer.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual void u132(); virtual void u133(); virtual void u134(); virtual void u135(); virtual void u136(); virtual void u137(); virtual void u138(); virtual void u139(); virtual void u140(); virtual void u141(); virtual void u142(); virtual void u143(); virtual void u144(); virtual void u145(); virtual void u146(); virtual void u147(); virtual int f148(); };
}
int C_BasePlayer::vfunc171()
{
    return ((lifted::V *)this)->f148();
}
// END FUNCTION

// FUNCTION: 0x100a8040 size=0x30
#include "C_BasePlayer.h"
namespace lifted {
extern int g_1027ba58;
extern int g_104a0d50;
struct C100a9af0 { int sub_100a9af0(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual int f29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual void u132(); virtual void u133(); virtual void u134(); virtual void u135(); virtual void u136(); virtual void u137(); virtual void u138(); virtual void u139(); virtual void u140(); virtual void u141(); virtual void u142(); virtual void u143(); virtual void u144(); virtual void u145(); virtual void u146(); virtual void u147(); virtual int f148(); };
}
int C_BasePlayer::vfunc173()
{
    int t0 = ((lifted::V *)lifted::g_1027ba58)->f29();
    if (t0 == 0) {
        if (((int)this) == lifted::g_104a0d50) {
            return ((lifted::C100a9af0 *)this)->sub_100a9af0(0);
        }
    }
    return ((lifted::V *)this)->f148();
}
// END FUNCTION

// FUNCTION: 0x100a87e0 size=0x2a
#include "C_BasePlayer.h"
namespace lifted {
struct V { virtual void u0(); virtual int f1(); };
}
void C_BasePlayer::vfunc168(int a0)
{
    if (a0 != 0) {
        *(int *)((char *)this + 0x1a08) = *(int *)((char *)(((lifted::V *)a0)->f1()));
        return;
    }
    *(int *)((char *)this + 0x1a08) = -1;
}
// END FUNCTION

// FUNCTION: 0x100a8810 size=0x2a
#include "C_BasePlayer.h"
namespace lifted {
struct V { virtual void u0(); virtual int f1(); };
}
void C_BasePlayer::vfunc169(int a0)
{
    if (a0 != 0) {
        *(int *)((char *)this + 0x1a0c) = *(int *)((char *)(((lifted::V *)a0)->f1()));
        return;
    }
    *(int *)((char *)this + 0x1a0c) = -1;
}
// END FUNCTION

// FUNCTION: 0x100a8920 size=0x100
#include "C_BasePlayer.h"
#include "C_BaseCombatWeapon.h"
#include "CBaseHandle.h"
#include "CBaseEntityList.h"
#include "utlvector.h"

extern CBaseEntityList *g_102b8e98;
extern CUtlVector<CBaseHandle> g_1049d8f8;
extern CUtlVector<CBaseHandle> g_1049d978;

void sub_10186e20(C_BasePlayer *, int);

inline IHandleEntity *CBaseHandle::Get() const
{
	if (!IsValid())
		return 0;
	const CBaseEntityListEntry *pInfo = &g_102b8e98->m_EntPtrArray[GetEntryIndex()];
	if (pInfo->m_SerialNumber != GetSerialNumber())
		return 0;
	return (IHandleEntity *)pInfo->m_pEntity;
}

C_BaseCombatWeapon *C_BasePlayer::vfunc165(int slot, int pos)
{
	CUtlVector<CBaseHandle> *pList = &g_1049d8f8;
	if (*(int *)((char *)this + 0x1624) != 0)
		pList = &g_1049d978;

	if (pos >= 7 || slot >= 6)
		return 0;

	int bestPos = 7;
	C_BaseCombatWeapon *pBest = 0;

	for (int i = 0; i < pList->Count(); i++)
	{
		C_BaseCombatWeapon *pWeapon = (C_BaseCombatWeapon *)(*pList)[i].Get();
		if (!pWeapon)
			continue;
		if (!pWeapon->vfunc176())
			continue;
		if (pWeapon->vfunc220() == slot && pWeapon->vfunc221() <= bestPos && pWeapon->vfunc221() >= pos)
		{
			bestPos = pWeapon->vfunc221();
			pBest = pWeapon;
		}
	}

	sub_10186e20(this, 0);
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x100a99b0 size=0x1e
#include "C_BasePlayer.h"
namespace lifted {
extern int g_1027ba58;
struct C1008f720 { int sub_1008f720(); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual int f29(); };
}
int C_BasePlayer::vfunc86()
{
    int t0 = ((lifted::V *)lifted::g_1027ba58)->f29();
    if (t0 != 0) {
        return ((lifted::C1008f720 *)this)->sub_1008f720();
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a99f0 size=0x3
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc189(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100a9ac0 size=0x23
#include "C_BasePlayer.h"
namespace lifted {
struct C10095070 { int sub_10095070(); };
struct C100a99d0 { bool sub_100a99d0(); };
int sub_100aaab0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual void u132(); virtual void u133(); virtual void u134(); virtual void u135(); virtual void u136(); virtual void u137(); virtual void u138(); virtual void u139(); virtual void u140(); virtual void u141(); virtual void u142(); virtual void u143(); virtual void u144(); virtual void u145(); virtual void u146(); virtual void u147(); virtual void u148(); virtual void u149(); virtual void u150(); virtual void u151(); virtual void u152(); virtual void u153(); virtual void u154(); virtual int f155(); };
}
int C_BasePlayer::vfunc62()
{
    bool t0 = ((lifted::C100a99d0 *)this)->sub_100a99d0();
    if (t0 != 0) {
        ((lifted::V *)this)->f155();
    }
    lifted::sub_100aaab0();
    return ((lifted::C10095070 *)this)->sub_10095070();
}
// END FUNCTION

// FUNCTION: 0x100a9bd0 size=0x3
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc151(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
}
// END FUNCTION

// FUNCTION: 0x100a9c10 size=0x2a
#include "C_BasePlayer.h"
namespace lifted {
struct V { virtual void u0(); virtual int f1(); };
}
void C_BasePlayer::vfunc185(int a0)
{
    if (a0 != 0) {
        *(int *)((char *)this + 0x1a10) = *(int *)((char *)(((lifted::V *)a0)->f1()));
        return;
    }
    *(int *)((char *)this + 0x1a10) = -1;
}
// END FUNCTION

// FUNCTION: 0x100a9ca0 size=0xb
#include "C_BasePlayer.h"
struct Obj_100a99d0 { char sub_100a99d0(); };
// TARGET: C_BasePlayer::vfunc94
bool C_BasePlayer::vfunc94()
{
	return ((Obj_100a99d0 *)this)->sub_100a99d0() ? true : false;
}
// END FUNCTION

// FUNCTION: 0x100a9df0 size=0x1
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc184()
{
}
// END FUNCTION

// FUNCTION: 0x100aa240 size=0x7
#include "C_BasePlayer.h"
char * C_BasePlayer::vfunc195()
{
    return (char *)this + 0x1888;
}
// END FUNCTION

// FUNCTION: 0x100aa250 size=0x21
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc196(int a0, int a1, int a2)
{
    *(int *)((char *)this + 0x1888) = a0;
    *(int *)((char *)this + 0x188c) = a1;
    *(int *)((char *)this + 0x1890) = a2;
    return a2;
}
// END FUNCTION

// FUNCTION: 0x100aa280 size=0x93
#include "C_BasePlayer.h"

extern unsigned int g_104cfe50;

struct Engine_100aa280
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual void v14();
	virtual void v15();
	virtual void v16();
	virtual void v17();
	virtual void v18();
	virtual void v19();
	virtual void v20();
	virtual void v21();
	virtual void v22();
	virtual void v23();
	virtual void v24();
	virtual void v25();
	virtual void v26();
	virtual void v27();
	virtual void v28();
	virtual void v29();
	virtual void v30();
	virtual void v31();
	virtual void v32();
	virtual void v33();
	virtual void v34();
	virtual void v35();
	virtual void v36();
	virtual void v37();
	virtual void v38();
	virtual double v39(int);
};

extern Engine_100aa280 *g_104a57d4;

struct Mode_100aa280
{
	int a;
	int b;
	void sub_100a8f90(C_BasePlayer *pPlayer);
};

struct PlayerFields_100aa280
{
	char pad0[0x15f0];
	float m_flNextTime;
	char pad1[0x1614 - 0x15f4];
	Mode_100aa280 m_Modes[2];
	int m_iMode;
};

// TARGET: C_BasePlayer::vfunc191
void C_BasePlayer::vfunc191()
{
	g_104cfe50 &= 0xfefff7ff;

	PlayerFields_100aa280 *self = (PlayerFields_100aa280 *)this;
	if (!&self->m_Modes[self->m_iMode])
	{
		vfunc160(0);
		return;
	}

	if (self->m_flNextTime < g_104a57d4->v39(0))
	{
		self->m_flNextTime = g_104a57d4->v39(0) + 0.01;
		self->m_Modes[self->m_iMode].sub_100a8f90(this);
	}
}
// END FUNCTION
