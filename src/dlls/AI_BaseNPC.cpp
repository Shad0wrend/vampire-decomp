// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x101a6420 size=0x7
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc410
int CAI_BaseNPC::vfunc410(int a)
{
	return a;
}
// END FUNCTION

// FUNCTION: 0x101a6440 size=0x8
#include "CAI_BaseNPC.h"
struct CBaseEntityView
{
	void sub_100ac720(const char *context);
};

void CAI_BaseNPC::vfunc412()
{
	((CBaseEntityView *)this)->sub_100ac720(0);
}
// END FUNCTION

// FUNCTION: 0x101a6460 size=0x8
#include "CAI_BaseNPC.h"
struct CBaseEntityView
{
	void sub_100ac720(const char *context);
};

void CAI_BaseNPC::vfunc413()
{
	((CBaseEntityView *)this)->sub_100ac720(0);
}
// END FUNCTION

// FUNCTION: 0x101a6480 size=0x8
#include "CAI_BaseNPC.h"
struct CBaseEntityView
{
	void sub_100ac720(const char *context);
};

void CAI_BaseNPC::vfunc414()
{
	((CBaseEntityView *)this)->sub_100ac720(0);
}
// END FUNCTION

// FUNCTION: 0x101a64a0 size=0x8
#include "CAI_BaseNPC.h"
struct CBaseEntityView
{
	void sub_100ac720(const char *context);
};

void CAI_BaseNPC::vfunc415()
{
	((CBaseEntityView *)this)->sub_100ac720(0);
}
// END FUNCTION

// FUNCTION: 0x101a64c0 size=0x3
#include "CAI_BaseNPC.h"
void CAI_BaseNPC::vfunc416(char a0)
{
}
// END FUNCTION

// FUNCTION: 0x101a64e0 size=0x3
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc417
char CAI_BaseNPC::vfunc417() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101a6500 size=0x1
// TARGET: sub_101a6500
void __fastcall sub_101a6500(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x101a6520 size=0x3
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc128
char CAI_BaseNPC::vfunc128() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101a6540 size=0x1
// TARGET: sub_101a6540
void __fastcall sub_101a6540(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x101a6560 size=0x1
// TARGET: sub_101a6560
void __fastcall sub_101a6560(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x101a6580 size=0x3
// TARGET: sub_101a6580
void __stdcall sub_101a6580(int a) {
}
// END FUNCTION

// FUNCTION: 0x101a65a0 size=0x26
#include "CAI_BaseNPC.h"

extern void (__cdecl *g_109f3630)(const char *fmt, ...);

// TARGET: CAI_BaseNPC::vfunc441
int CAI_BaseNPC::vfunc441(int a)
{
	g_109f3630("Called wrong StartTask()\n");
	void (CAI_BaseNPC::*pSlot442)(int);
	void **vt = *(void ***)this;
	*(void **)&pSlot442 = vt[0x6e8 / 4];
	(this->*pSlot442)(a);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101a65e0 size=0x26
struct CUnknown101a65e0View {
    int sub_101a65e0(int a);
};

extern void (__cdecl *g_109f3630)(const char *fmt, ...);

// TARGET: CUnknown101a65e0View::sub_101a65e0
int CUnknown101a65e0View::sub_101a65e0(int a)
{
    g_109f3630("Called wrong RunTask()\n");
    void (CUnknown101a65e0View::*pSlot444)(int);
    void **vt = *(void ***)this;
    *(void **)&pSlot444 = vt[0x6f0 / 4];
    (this->*pSlot444)(a);
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101a6620 size=0xf
#include "CAI_BaseNPC.h"

struct CRangeNode_102ea280 {
	int sub_102ea280(int a);
};

// TARGET: CAI_BaseNPC::vfunc447
int CAI_BaseNPC::vfunc447(int a)
{
	void *p = ((void *(__fastcall *)(void *))(*(void ***)this)[580])(this);
	return ((CRangeNode_102ea280 *)p)->sub_102ea280(a);
}
// END FUNCTION

// FUNCTION: 0x101a6640 size=0x10
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"

class CRangeNode_102ea280
{
public:
	int sub_102ea280(int a);
};

int CAI_BaseNPC::vfunc450(int a)
{
	CAI_CondOwner *pCond = ((CAI_BaseNPCTroika *)this)->vfunc580();
	return ((CRangeNode_102ea280 *)((char *)pCond + 0x18))->sub_102ea280(a);
}
// END FUNCTION

// FUNCTION: 0x101a6660 size=0x6
#include "CAI_BaseNPC.h"
namespace lifted {
extern char g_10594820;
}
const char * CAI_BaseNPC::vfunc451()
{
    return (const char *)((int)&lifted::g_10594820);
}
// END FUNCTION

// FUNCTION: 0x101a6680 size=0x3
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc454
int CAI_BaseNPC::vfunc454() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101a66a0 size=0x5
// TARGET: sub_101a66a0
bool __stdcall sub_101a66a0(int a, int b)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x101a66c0 size=0x3
#include "CAI_BaseNPC.h"
#include "CAI_StandoffBehavior.h"
CAI_BehaviorBase ** CAI_BaseNPC::vfunc456()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101a66e0 size=0x3
#include "CAI_BaseNPC.h"
int CAI_BaseNPC::vfunc457()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101a6700 size=0x3
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc462
char CAI_BaseNPC::vfunc462() { return 0; }
// END FUNCTION

// FUNCTION: 0x101a6720 size=0x7
#include "CAI_BaseNPC.h"
int CAI_BaseNPC::vfunc464()
{
    return *(int *)((char *)this + 0x5cc0);
}
// END FUNCTION

// FUNCTION: 0x101a6740 size=0x3
#include "CAI_BaseNPC.h"
void CAI_BaseNPC::vfunc465(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101a6760 size=0x5
// TARGET: sub_101a6760
bool __stdcall sub_101a6760(int a)
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x101a6780 size=0x5
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
bool CAI_BaseNPC::vfunc468(CBaseEntity * a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101a67a0 size=0x3
// TARGET: sub_101a67a0
void __stdcall sub_101a67a0(int) {}
// END FUNCTION

// FUNCTION: 0x101a67c0 size=0x7
float sub_101a67c0()
{
	return 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101a67e0 size=0x2d
#include "CAI_BaseNPC.h"
#include "ehandle.h"

// TARGET: CAI_BaseNPC::vfunc167
int CAI_BaseNPC::vfunc167()
{
	return (int)((CBaseHandle *)((char *)this + 0x5ce0))->Get();
}
// END FUNCTION

// FUNCTION: 0x101a6820 size=0x5
// TARGET: sub_101a6820
bool __stdcall sub_101a6820(int a)
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x101a6840 size=0xb
#include "CAI_BaseNPC.h"
void CAI_BaseNPC::vfunc483(int unused)
{
	vfunc158();
}
// END FUNCTION

// FUNCTION: 0x101a6860 size=0x3
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc136
char CAI_BaseNPC::vfunc136() {
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101a6880 size=0x1
// TARGET: sub_101a6880
void __fastcall sub_101a6880(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x101a68a0 size=0x1
// TARGET: sub_101a68a0
void sub_101a68a0()
{
}
// END FUNCTION

// FUNCTION: 0x101a68c0 size=0x1
// TARGET: sub_101a68c0
void sub_101a68c0()
{
}
// END FUNCTION

// FUNCTION: 0x101a68e0 size=0x1
// TARGET: sub_101a68e0
void sub_101a68e0()
{
}
// END FUNCTION

// FUNCTION: 0x101a6900 size=0x1
// TARGET: sub_101a6900
void sub_101a6900()
{
}
// END FUNCTION

// FUNCTION: 0x101a6920 size=0x1
// TARGET: sub_101a6920
void sub_101a6920()
{
}
// END FUNCTION

// FUNCTION: 0x101a6940 size=0x1
// TARGET: sub_101a6940
void sub_101a6940()
{
}
// END FUNCTION

// FUNCTION: 0x101a6960 size=0x1
// TARGET: sub_101a6960
void sub_101a6960()
{
}
// END FUNCTION

// FUNCTION: 0x101a6980 size=0x1
// TARGET: sub_101a6980
void sub_101a6980()
{
}
// END FUNCTION

// FUNCTION: 0x101a69a0 size=0x1
// TARGET: sub_101a69a0
void sub_101a69a0()
{
}
// END FUNCTION

// FUNCTION: 0x101a69c0 size=0x1
// TARGET: sub_101a69c0
void sub_101a69c0()
{
}
// END FUNCTION

// FUNCTION: 0x101a69e0 size=0x1
// TARGET: sub_101a69e0
void sub_101a69e0()
{
}
// END FUNCTION

// FUNCTION: 0x101a6a00 size=0x1
// TARGET: sub_101a6a00
void sub_101a6a00()
{
}
// END FUNCTION

// FUNCTION: 0x101a6a20 size=0x1
// TARGET: sub_101a6a20
void sub_101a6a20()
{
}
// END FUNCTION

// FUNCTION: 0x101a6a40 size=0x1
// TARGET: sub_101a6a40
void sub_101a6a40()
{
}
// END FUNCTION

// FUNCTION: 0x101a6a60 size=0x1
// TARGET: sub_101a6a60
void sub_101a6a60()
{
}
// END FUNCTION

// FUNCTION: 0x101a6a80 size=0x1
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc504
void CAI_BaseNPC::vfunc504() {
}
// END FUNCTION

// FUNCTION: 0x101a6aa0 size=0x1
// TARGET: sub_101a6aa0
void sub_101a6aa0()
{
}
// END FUNCTION

// FUNCTION: 0x101a6ac0 size=0x1
// TARGET: sub_101a6ac0
void sub_101a6ac0()
{
}
// END FUNCTION

// FUNCTION: 0x101a6ae0 size=0x1
// TARGET: sub_101a6ae0
void sub_101a6ae0()
{
}
// END FUNCTION

// FUNCTION: 0x101a6b00 size=0x3
#include "CAI_BaseNPC.h"

// TARGET: CAI_BaseNPC::vfunc508
void CAI_BaseNPC::vfunc508(int a)
{
}
// END FUNCTION

// FUNCTION: 0x101a6b20 size=0x3
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc512
int CAI_BaseNPC::vfunc512() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101a6b40 size=0x7
#include "CAI_BaseNPC.h"

float CAI_BaseNPC::vfunc522()
{
	return 18.0f;
}
// END FUNCTION

// FUNCTION: 0x101a6b60 size=0x7
// TARGET: sub_101a6b60
float sub_101a6b60()
{
	return 18.0f;
}
// END FUNCTION

// FUNCTION: 0x101a6b80 size=0x7
float sub_101a6b80()
{
	return 350.0f;
}
// END FUNCTION

// FUNCTION: 0x101a6ba0 size=0x5
#include "CAI_BaseNPC.h"
bool CAI_BaseNPC::vfunc527(CAI_NavProvider * a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101a6bc0 size=0x3
#include "CAI_BaseNPC.h"

// TARGET: CAI_BaseNPC::vfunc536
void CAI_BaseNPC::vfunc536(int a, int b, int c, int d)
{
}
// END FUNCTION

// FUNCTION: 0x101a6be0 size=0x3
// TARGET: sub_101a6be0
void __stdcall sub_101a6be0(int a, int b, int c, int d) {
}
// END FUNCTION

// FUNCTION: 0x101a6c00 size=0xa
#include "CAI_BaseNPC.h"
struct B
{
	int sub_1000aed4(int a);
};

extern B g_10936c74;

int CAI_BaseNPC::vfunc546(int a)
{
	return g_10936c74.sub_1000aed4(a);
}
// END FUNCTION

// FUNCTION: 0x101a6c20 size=0x7
float sub_101a6c20()
{
	return 1024.0f;
}
// END FUNCTION

// FUNCTION: 0x101a6c40 size=0x3
#include "CAI_BaseNPC.h"

// TARGET: CAI_BaseNPC::vfunc551
void CAI_BaseNPC::vfunc551(int a, int b)
{
}
// END FUNCTION

// FUNCTION: 0x101a6c60 size=0x3
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc557
char CAI_BaseNPC::vfunc557() {
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101a6c80 size=0x1
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc558
void CAI_BaseNPC::vfunc558() {
}
// END FUNCTION

// FUNCTION: 0x101a6ca0 size=0x1
// TARGET: sub_101a6ca0
void sub_101a6ca0()
{
}
// END FUNCTION

// FUNCTION: 0x101a6cc0 size=0x3
// TARGET: sub_101a6cc0
void __stdcall sub_101a6cc0(int a) {
}
// END FUNCTION

// FUNCTION: 0x101a6ce0 size=0x10
struct CUnknownNPC101a6ce0 {
    bool sub_101a6ce0(int unused);
};

// TARGET: sub_101a6ce0
bool CUnknownNPC101a6ce0::sub_101a6ce0(int unused)
{
    void **vt = *(void ***)this;
    char r = ((char (__fastcall *)(void *))vt[0x278 / 4])(this);
    return r == 0;
}
// END FUNCTION

// FUNCTION: 0x101a6d00 size=0x6
extern char g_1090ff08[];

// TARGET: sub_101a6d00
void *sub_101a6d00()
{
	return g_1090ff08;
}
// END FUNCTION

// FUNCTION: 0x102658f0 size=0x60
#include "CAI_BaseNPC.h"

void sub_101cd940(void *p);

// TARGET: CAI_BaseNPC::vfunc402
char CAI_BaseNPC::vfunc402()
{
	char bResult = vfunc394();
	if (bResult) {
		if (!vfunc398()) {
			sub_101cd940(this);
			return bResult;
		}
		sub_100544f0(*(int *)((char *)this + 0xfd0));
		vfunc77();
		vfunc395();
	}
	else {
		vfunc395();
	}
	return bResult;
}
// END FUNCTION

// FUNCTION: 0x10265970 size=0x9c
#include "CAI_BaseNPC.h"
void sub_10139610(const float *pAngles, float *pForward, float *pRight, float *pUp);

// TARGET: CAI_BaseNPC::sub_10265970
int CAI_BaseNPC::sub_10265970()
{
    float forward[3];
    sub_10139610(vfunc221(), forward, 0, 0);
    int act;
    switch (*(int *)((char *)this + 0x1594)) {
    case 1: act = 0x66; break;
    case 3: act = 0x68; break;
    case 4: act = 0x69; break;
    case 5: act = 0x6a; break;
    case 6: act = 0x6b; break;
    case 7: act = 0x6c; break;
    default: act = 0x49; break;
    }
    if (sub_1008dc40(act, -1) == -1)
        return 0x49;
    return act;
}
// END FUNCTION

// FUNCTION: 0x10265a40 size=0x32
#include "CBaseEntity.h"

// TARGET: sub_10265a40
void __fastcall sub_10265a40(CBaseEntity *pEnt)
{
    pEnt->m_iHealth = pEnt->m_iMaxHealth / 2;
    pEnt->m_nTakeDamage = 2;
    pEnt->m_iMaxHealth = 5;
    pEnt->vfunc93(6, 0);
}
// END FUNCTION

// FUNCTION: 0x10265a90 size=0x2b
struct CUnkSub10265a90
{
	void sub_100cd660(int a, void *pOwner, int b);
};

struct CUnk10265a90
{
	char m_pad0000[0x5bd4];
	char m_b5bd4;
	char m_pad5bd5[0x5e24 - 0x5bd5];
	CUnkSub10265a90 m_sub5e24;

	void sub_10265a90(int a);
};

// TARGET: CUnk10265a90::sub_10265a90
void CUnk10265a90::sub_10265a90(int a)
{
	if (m_b5bd4 == 0)
	{
		m_sub5e24.sub_100cd660(a, this, 0);
		m_b5bd4 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x10265ad0 size=0x2f7
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPC_vfunc144.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "CUnknown100290c0.h"
#include "CDevFlagObj.h"
#include "CCineNPC.h"
#include "CUnknown103158f0.h"
#include "IPhysicsObject.h"

#define FILE_ "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp"

struct CScriptView144
{
	char m_pad0000[0x204];
	unsigned int m_flags204;
	char m_pad0208[0x5f91 - 0x208];
	char m_b5f91;
};

extern CDevFlagObj *g_10924a6c;
extern CDevFlagObj *g_106bbaa4;

void CAI_BaseNPC::vfunc144(int a)
{
	CAI_BaseNPCUnit144 *p = (CAI_BaseNPCUnit144 *)this;
	const CAI_NPCDamageRecord *pInfo = (const CAI_NPCDamageRecord *)a;

	if (p->m_pSchedule5c38 && (int)p->m_pSchedule5c38 == p->sub_102cc1f0(0x3a))
		return;

	if (p->m_nState5cc0 == 4)
	{
		if (((CUnknown100290c0 *)g_10566458)->sub_100290c0((unsigned int *)&p->m_hScript5d74))
		{
			CScriptView144 *pScript = (CScriptView144 *)((CUnknown100290c0 *)g_10566458)->sub_100290c0((unsigned int *)&p->m_hScript5d74);
			if (pScript->m_b5f91 && (((CScriptView144 *)((CUnknown100290c0 *)g_10566458)->sub_100290c0((unsigned int *)&p->m_hScript5d74))->m_flags204 & 0x2080) != 0x80)
			{
				p->m_LastDamage.m_n00 = pInfo->m_n00;
				p->m_LastDamage.m_n04 = pInfo->m_n04;
				p->m_LastDamage.m_n08 = pInfo->m_n08;
				p->m_LastDamage.m_n0c = pInfo->m_n0c;
				p->m_LastDamage.m_vecForce.sub_1003e4b0(pInfo->m_vecForce);
				p->m_LastDamage.m_vecPosition.sub_1003e4b0(pInfo->m_vecPosition);
				p->m_LastDamage.m_n28 = pInfo->m_n28;
				p->m_LastDamage.m_pInflictor = pInfo->m_pInflictor;
				p->m_LastDamage.m_n30 = pInfo->m_n30;
				p->m_LastDamage.m_n34 = pInfo->m_n34;
				p->m_LastDamage.m_n38 = pInfo->m_n38;
				p->m_LastDamage.m_n3c = pInfo->m_n3c;
				p->m_LastDamage.m_n40 = pInfo->m_n40;
				p->m_LastDamage.m_n44 = pInfo->m_n44;
				p->m_LastDamage.m_b48 = pInfo->m_b48;
				p->m_LastDamage.m_b49 = pInfo->m_b49;
				p->m_LastDamage.m_b4a = pInfo->m_b4a;
				return;
			}
			((CCineNPC *)((CUnknown100290c0 *)g_10566458)->sub_100290c0((unsigned int *)&p->m_hScript5d74))->sub_101a8c30();
			IPhysicsObject *pPhys;
			if (!g_106bbaa4->vfunc1() && g_106bbaa4->m_n2c && (pPhys = p->m_pPhysObj36c))
			{
				Vector vecTmp;
				Vector vecPos;
				vecPos = *p->vfunc263(&vecTmp);
				pPhys->vfunc39((float *)&vecPos, 0);
			}
		}
	}

	p->vfunc511();
	if (p->m_n153c == -1 || !p->m_h1538.Get())
		p->vfunc488();

	p->sub_10265a90(pInfo->m_pInflictor);
	if (((CBaseEntity *)p)->sub_100b3700() & 0x2000)
	{
		*(int *)((char *)p + 0x1ec) = 0;
		p->sub_10265a40();
	}
	p->sub_1032b9b0(a);
	p->m_pszFile1b3c = FILE_;
	p->m_nLine1b40 = 0x217;
	p->m_nIdealState5cc4 = 7;
	g_10924a6c->vfunc1();
	p->sub_10269a20(0x4c);
	p->m_hAttacker5b7c = pInfo->m_pInflictor;
	p->m_b5b80 = 1;
	p->sub_1028ae60();
	if (p->m_pSquad5da4)
		((CUnknown103158f0 *)p->m_pSquad5da4)->sub_103158f0((CBaseEntity *)p);
	if ((char)p->vfunc552())
		p->sub_102695d0();
	else
		sub_101babc0(0x20, p->vfunc217(), 0x180, 30.0f, 0);
	p->m_pszFile1b3c = FILE_;
	p->m_nLine1b40 = 0x241;
	p->m_nIdealState5cc4 = 7;
	p->sub_1026e340(7);
}
// END FUNCTION

// FUNCTION: 0x10265e90 size=0x21
#include "CAI_BaseNPC.h"
struct CBaseCombatCharacterCall_10265e90
{
    int sub_1000e854(int a);
};

// TARGET: CAI_BaseNPC::vfunc142
int CAI_BaseNPC::vfunc142(int arg)
{
    int *vt;
    int r = ((CBaseCombatCharacterCall_10265e90 *)this)->sub_1000e854(arg);
    vt = *(int **)this;
    ((void (__fastcall *)(CAI_BaseNPC *, int *))vt[459])(this, vt);
    return r;
}
// END FUNCTION

// FUNCTION: 0x10265ed0 size=0x4a0
#include "CAI_BaseNPC.h"
#include "CTakeDamageInfo.h"
#include "CVDmg_t.h"
#include "COutputEvent.h"
#include "CEntityVSlots.h"
#include "CUnknown102e0150.h"
#include "CAI_Motor.h"
#include "CSoundEnt.h"
#include "CBaseEntity.h"
#include "globalvars.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct NPCSlots {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23) SV10(24) SV10(25) SV10(26) SV10(27) SV10(28) SV10(29)
	SV10(30) SV10(31) SV10(32) SV10(33) SV10(34) SV10(35) SV10(36) SV10(37) SV10(38) SV10(39)
	SV10(40) SV10(41) SV10(42) SV10(43) SV10(44) SV10(45) SV10(46) SV10(47) SV10(48) SV10(49)
	SV10(50) SV10(51) SV10(52) SV10(53) SV10(54) SV10(55) SV10(56)
	SV(570) SV(571) SV(572) SV(573) SV(574) SV(575)
	virtual char s576(float flDamage, unsigned int bits);
	virtual char s577(float flDamage, unsigned int bits);
};

struct BCC390 { int sub_1000f7db(CTakeDamageInfo *pInfo); };

struct DmgView {
	CVDmg_t *pVDmg;
	char pad04[0x28 - 4];
	CAI_BaseNPC *pAttacker;
	CBaseEntity *pInflictor;
	float flDamage;
	char pad34[4];
	unsigned int nFlags;
	CAI_BaseNPC *GetAttacker() const { return pAttacker; }
	CBaseEntity *GetInflictor() const { return pInflictor; }
};

struct NPCData {
	char pad0[0x208];
	int m_nHealth208;
	char pad1[0x210 - 0x20c];
	int m_nHealth210;
	char pad2[0x5b7c - 0x214];
	int m_h5b7c;
	char m_b5b80;
	char pad3[0x5b9c - 0x5b81];
	Vector m_vec5b9c;
	char pad4[0x5d44 - 0x5ba8];
	CAI_Motor *m_pMotor;
	char pad5[0x5d8c - 0x5d48];
	unsigned int m_nFlags5d8c;
	char pad6[0x5d94 - 0x5d90];
	float m_f5d94;
	float m_f5d98;
	char pad7[0x5e0c - 0x5d9c];
	COutputEvent m_Out5e0c;
	char pad8[0x5e3c - 0x5e24];
	COutputEvent m_Out5e3c;
};

struct SlotsInfl { virtual void s0(); virtual unsigned int *s1(); };
extern SlotsInfl *g_10924a6c;
extern Vector g_1070ba40;
extern int g_1070d1b0;
extern int g_1072bc84;
extern char g_1072bcc1;
void __fastcall sub_10009980(CAI_Motor *self);

int CAI_BaseNPC::vfunc390(CTakeDamageInfo *pInfo)
{
	NPCData *p = (NPCData *)this;
	const DmgView &info = *(DmgView *)pInfo;
	DmgView *d = (DmgView *)pInfo;
	vfunc491();
	p->m_nFlags5d8c &= ~2;
	if (!((BCC390 *)this)->sub_1000f7db(pInfo))
		return 0;
	if (p->m_f5d98 != gpGlobals->curtime)
		p->m_Out5e0c.sub_100cd660(this, this, 0);
	if (p->m_nHealth210 <= p->m_nHealth208 / 2)
		p->m_Out5e3c.sub_100cd660(this, this, 0);
	if ((sub_100b3700() & 0x2000) && info.GetInflictor()) {
		if (info.GetInflictor()->sub_100b3700() & 0x2080) {
			if (vfunc363(info.GetInflictor()) && vfunc201(info.GetInflictor(), 0x2804091, 0, 0)) {
				if (info.GetAttacker()) {
					p->m_vec5b9c = *(Vector *)info.GetAttacker()->vfunc217();
				} else {
					Vector vecOff = g_1070ba40 * 64.0f;
					p->m_vec5b9c = vecOff + *(Vector *)vfunc217();
				}
			} else {
				Vector vecPos;
				if (info.GetAttacker()) {
					vecPos = *(Vector *)info.GetAttacker()->vfunc217();
				} else {
					Vector vecOff = g_1070ba40 * 64.0f;
					vecPos = vecOff + *(Vector *)vfunc217();
				}
				p->m_vec5b9c = vecPos;
				if (vfunc167()) {
					if (!vfunc541()->sub_102dfa20(info.GetInflictor()) && !sub_10269aa0(0x46)) {
						vfunc544((CBaseEntity *)vfunc167(), (int)&vecPos, (int)&g_1070d1b0);
						goto done;
					}
				}
				if (vfunc541()->sub_102dfa20(info.GetInflictor()))
					vfunc544(info.GetInflictor(), (int)&vecPos, (int)&g_1070d1b0);
				else
					vfunc544(0, (int)&vecPos, (int)&g_1070d1b0);
			}
done:
			if (vfunc167()) {
				sub_10009980(p->m_pMotor);
				Vector vecLast;
				vfunc541()->sub_102dfed0(&vecLast, (CBaseEntity *)vfunc167());
				p->m_pMotor->sub_102e2020((const float *)&vecLast, 0);
			}
			if (info.GetInflictor())
				p->m_h5b7c = *((CEntityVSlots *)info.GetInflictor())->slot1();
			else
				p->m_h5b7c = -1;
			p->m_b5b80 = 1;
			{
				unsigned int bits = d->pVDmg ? d->pVDmg->m_field10 | d->nFlags : d->nFlags;
				float flDmg = d->pVDmg ? (float)d->pVDmg->sub_101faa70() : d->flDamage;
				if (((NPCSlots *)this)->s576(flDmg, bits)) {
					g_10924a6c->s1();
					sub_10269a20(0x4c);
				}
			}
			{
				unsigned int bits = d->pVDmg ? d->pVDmg->m_field10 | d->nFlags : d->nFlags;
				float flDmg = d->pVDmg ? (float)d->pVDmg->sub_101faa70() : d->flDamage;
				if (((NPCSlots *)this)->s577(flDmg, bits)) {
					g_10924a6c->s1();
					sub_10269a20(0x4d);
				}
			}
			if (gpGlobals->curtime - p->m_f5d98 < 1.0)
				p->m_f5d94 = (d->pVDmg ? (float)d->pVDmg->sub_101faa70() : d->flDamage) + p->m_f5d94;
			else
				p->m_f5d94 = d->pVDmg ? (float)d->pVDmg->sub_101faa70() : d->flDamage;
			p->m_f5d98 = gpGlobals->curtime;
			if (p->m_f5d94 > p->m_nHealth208 * 0.3) {
				g_10924a6c->s1();
				sub_10269a20(0x4e);
			}
		}
		char bFlag = g_1072bcc1;
		int nVolume = g_1072bc84;
		CSoundEnt::sub_101bac90(1, (Vector *)vfunc217(), nVolume, 0.2f, bFlag, (CBaseEntity *)this);
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x102664a0 size=0x5
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"

// TARGET: CAI_BaseNPC::vfunc391
// the game's 0x102664a0: a tail call (jmp) of CBaseCombatCharacter::vfunc391
int CAI_BaseNPC::vfunc391(int a0)
{
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc391(a0);
}
// END FUNCTION

// FUNCTION: 0x102664c0 size=0x11a
#include "CAI_BaseNPC.h"
#include "CTakeDamageInfo.h"
#include "CVDmg_t.h"

extern Vector g_1070d1b0;
extern Vector g_1070ba40;

struct CAI_BaseNPC_Dead
{
	char m_pad0[0x1fc];
	int m_takedamage;
	char m_pad200[0x210 - 0x200];
	int m_iHealth;
};

inline Vector OffsetDown(const Vector &v)
{
	Vector res;
	res = v;
	res.z -= 10.0f;
	return res;
}

int CAI_BaseNPC::vfunc392(CTakeDamageInfo *pInfo)
{
	Vector vecDir = g_1070d1b0;
	if (pInfo->m_pAttacker)
	{
		Vector vecSrc;
		vecDir = (vecSrc = ((CAI_BaseNPC *)pInfo->m_pAttacker)->vfunc192(), vecSrc.z -= 10.0f, vecSrc) - vfunc192();
		VectorNormalize(vecDir);
		g_1070ba40 = vecDir;
	}
	unsigned int bits = pInfo->m_pVDmg00 ? pInfo->m_pVDmg00->m_field10 | pInfo->m_nFlags38 : pInfo->m_nFlags38;
	if ((bits & 0xe1) && ((CAI_BaseNPC_Dead *)this)->m_takedamage != 1)
	{
		CAI_BaseNPC_Dead *p = (CAI_BaseNPC_Dead *)this;
		p->m_iHealth = (int)(p->m_iHealth - (pInfo->m_pVDmg00 ? (float)pInfo->m_pVDmg00->sub_101faa70() : pInfo->m_flDamage) * 0.1);
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10266630 size=0x20
#include "CAI_BaseNPC.h"

int CAI_BaseNPC::vfunc576(float a, int unused)
{
	if (a > 0.0f)
		return 1;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10266660 size=0x20
bool __stdcall sub_10266660(float a, float b)
{
	return a > 20.0f;
}
// END FUNCTION

// FUNCTION: 0x10266690 size=0x57
#include "CAI_BaseNPC.h"
#include "CVDmg_t.h"

struct SInfo
{
	CVDmg_t *m_pDmg;
	int m_unk04; int m_unk08; int m_unk0c; int m_unk10; int m_unk14; int m_unk18; int m_unk1c;
	int m_unk20; int m_unk24; int m_unk28; int m_unk2c;
	float m_flDamage;
	float GetDamage() const { return m_pDmg ? (float)m_pDmg->sub_101faa70() : m_flDamage; }
};

#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)

struct SRulesView
{
	V10(0) V10(1) V10(2) V(30) V(31) V(32)
	virtual void RadiusDamage(const SInfo &info, const Vector &vecSrc, float flRadius, int iClassIgnore, void *pIgnore);
};

struct SNpcSlots
{
	V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9)
	V10(10) V10(11) V10(12) V10(13) V10(14) V10(15) V10(16) V10(17) V10(18) V10(19)
	V10(20)
	V(210) V(211) V(212) V(213) V(214) V(215) V(216)
	virtual const Vector &GetAbsOrigin();
};

extern SRulesView *g_1070ba0c;

// TARGET: CAI_BaseNPC::sub_10266690
void CAI_BaseNPC::sub_10266690(void *pInfo, void *pOther)
{
	const SInfo &info = *(SInfo *)pInfo;
	g_1070ba0c->RadiusDamage(info, ((SNpcSlots *)this)->GetAbsOrigin(), info.GetDamage() * 2.5, (int)pOther, 0);
}
// END FUNCTION

// FUNCTION: 0x10266710 size=0x46
#include "CVDmg_t.h"
#include "CGameRules.h"
struct SDmgInfo { CVDmg_t *m_pDmg; char m_pad04[0x2c]; float m_flDamage; };
extern CGameRules *g_1070ba0c;
void __stdcall sub_10266710(SDmgInfo *pInfo, void *a, int b)
{
	float f;
	if (pInfo->m_pDmg)
		f = (float)pInfo->m_pDmg->sub_101faa70();
	else
		f = pInfo->m_flDamage;
	g_1070ba0c->vfunc33(pInfo, a, f * 2.5, b, 0);
}
// END FUNCTION

// FUNCTION: 0x10266780 size=0x2cc
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CAI_BaseNPC.h"
#include "CTakeDamageInfo.h"
#include "CGameTrace.h"
#include "CVDmg_t.h"
#include "ConVar.h"
#include "engineserver.h"

extern float g_104454c4;

extern ConVar g_109201a8;
extern ConVar g_1090fe70;
extern ConVar g_109204f0;
extern ConVar g_1090fdc0;
extern ConVar g_10920238;

struct CTDIDmg : CTakeDamageInfo
{
	float GetDamage() { return m_pVDmg00 ? (float)m_pVDmg00->sub_101faa70() : m_flDamage; }
	unsigned int GetDamageType() { return m_pVDmg00 ? (m_pVDmg00->m_field10 | m_nFlags38) : m_nFlags38; }
};

void CAI_BaseNPC::sub_10266780(CTakeDamageInfo *pInfo, const Vector *pVecDir, CGameTrace *pTrace)
{
	*(char *)((char *)this + 0x5df0) = 0;
	if (*(int *)((char *)this + 0x1fc) == 0)
		return;

	long iEdict = *(int *)(0x2e0 + (char *)this);
	if (!(!(pInfo->m_pVDmg00->sub_101fb340(engine->vfunc35(iEdict))))) return; else { CTDIDmg info = *(CTDIDmg *)pInfo;

	*(int *)((char *)this + 0x1594) = pTrace->m_hitgroup;
	long t0 = pTrace->m_physicsbone; *(int *)((char *)this + 0x660) = t0;

	int iIndex = engine->vfunc35(pcd_stage(*(int *)((char *)this + 0x2e0)));
	float flDamage; flDamage = (float)pInfo->m_pVDmg00->sub_101fb200(iIndex, pInfo->sub_101c29b0());

	switch (pTrace->m_hitgroup)
	{
	case 10:
		flDamage = 0.01f;
		pTrace->m_hitgroup = 0;
		break;
	case 1:
		{
			ConVar *pVar = g_109201a8.m_pParent;
			flDamage *= pVar->vfunc1() ? g_104454c4 : g_109201a8.m_pParent->m_fValue;
		}
		break;
	case 2:
		flDamage *= g_1090fe70.m_pParent->vfunc1() ? g_104454c4 : g_1090fe70.m_pParent->m_fValue;
		break;
	case 3:
		flDamage *= g_109204f0.m_pParent->vfunc1() ? g_104454c4 : g_109204f0.m_pParent->m_fValue;
		break;
	case 4:
	case 5:
		flDamage *= g_1090fdc0.m_pParent->vfunc1() ? g_104454c4 : g_1090fdc0.m_pParent->m_fValue;
		break;
	case 6:
	case 7:
		flDamage *= g_10920238.m_pParent->vfunc1() ? g_104454c4 : g_10920238.m_pParent->m_fValue;
		break;
	}

	info.m_flDamage = flDamage;

	if (1.0 <= info.GetDamage() && !(info.GetDamageType() & 0x100))
	{
		if (!(1 == pTrace->m_hitgroup && !(((float)*(int *)(0x210 + (char *)this) - info.GetDamage()) <= g_104454c4))) {
			sub_102699e0(*(Vector *)pTrace->m_endpos, vfunc145(), info.GetDamage());
			vfunc146(info.m_pVDmg00, pVecDir, pTrace);
		} else {
			*(char *)((char *)this + 0x5df0) = 1;
		}
	}

	vfunc292(pInfo, pVecDir, pTrace);
	info.m_pAttacker = pInfo->m_pAttacker;
	info.sub_101c2a10(pTrace->m_hitbox);
	sub_101c2d20(&info, this); }
}
// END FUNCTION

// FUNCTION: 0x10266b10 size=0x116
#include "Vector.h"
#include "CEntityVSlots.h"
#include "CAI_BaseNPC.h"

CEntityVSlots *sub_101cd9e0(int index);

char CAI_BaseNPC::sub_10266b10(int a, int b, float f)
{
	const Vector *pA = (const Vector *)a;
	const Vector *pB = (const Vector *)b;
	Vector dir = *pB - *pA;
	float flDist = VectorNormalize(dir);
	for (int i = 1; i <= gpGlobals->maxClients; i++)
	{
		Vector dir2 = sub_101cd9e0(i)->slot192() - *pA;
		float flDist2 = VectorNormalize(dir2);
		if (DotProduct(dir, dir2) > f && flDist > flDist2)
			return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10266c80 size=0x86
#include "CEntityVSlots.h"

CEntityVSlots *sub_101cd9e0(int playerIndex);

static inline float DistTo2D(const Vector &a, const Vector &b)
{
    Vector vecDelta;
    VectorSubtract(a, b, vecDelta);
    return vecDelta.Length2D();
}

// TARGET: sub_10266c80
bool __stdcall sub_10266c80(const Vector *pPos, float flRadius)
{
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CEntityVSlots *pPlayer = sub_101cd9e0(i);
        if (pPlayer)
        {
            if (DistTo2D(*pPos, pPlayer->slot192()) <= flRadius)
                return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10266d40 size=0x14f
#include "CAI_BaseNPC.h"


struct RayPlayerView
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18)
	CAI_NPC_V(190) CAI_NPC_V(191) CAI_NPC_V(192) CAI_NPC_V(193) CAI_NPC_V(194) CAI_NPC_V(195)
	virtual Vector vfunc196();
};

RayPlayerView *sub_1000ac8b(int index);

// TARGET: sub_10266d40
void sub_10266d40(Vector vecStart, Vector vecDir, int nIgnoreEdict)
{
	vecDir = vecDir - vecStart;
	VectorNormalize(vecDir);
	for (int i = 1; i <= gpGlobals->maxClients; i++)
	{
		RayPlayerView *pPlayer = sub_1000ac8b(i);
		if (pPlayer && *(int *)((char *)pPlayer + 0x2e0) != nIgnoreEdict)
		{
			Vector vecToPlayer = pPlayer->vfunc196() - vecStart;
			float flAlong = vecToPlayer.Dot(vecDir);
			Vector vecClosest = vecStart + vecDir * flAlong;
			Vector vecOffset = vecClosest - pPlayer->vfunc196();
			vecOffset.Length();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10266ef0 size=0x1f6
#include "CTriggerTraceEnum.h"
#include "CUnknown1070b254.h"
#include "CVDmg_t.h"

struct CTriggerDmgInfo {
	CVDmg_t *m_pDmg;
	char pad4[0x28];
	void *m_n2c;
	float m_f30;
	int m_n34;
	unsigned int m_n38;
};
extern char g_104994f8[];
struct TTE2 {
	void *m_vptr;
	void *m_pAttacker;
	int m_nDamage;
	Vector m_vecDir;
	int m_nDamageType;
	unsigned int m_fMask;
	Ray_t m_Ray;
	TTE2(void *pAttacker, int nDamage, const Vector &dir, unsigned int nType, const Ray_t &ray) : m_pAttacker(pAttacker), m_nDamage(nDamage), m_vecDir(dir), m_nDamageType(nType), m_fMask(0x46004003)
	{
		m_vptr = g_104994f8;
		m_Ray.m_Start[0] = ray.m_Start[0];
		m_Ray.m_Start[1] = ray.m_Start[1];
		m_Ray.m_Start[2] = ray.m_Start[2];
		m_Ray.m_Delta[0] = ray.m_Delta[0];
		m_Ray.m_Delta[1] = ray.m_Delta[1];
		m_Ray.m_Delta[2] = ray.m_Delta[2];
		m_Ray.m_Extents[0] = ray.m_Extents[0];
		m_Ray.m_Extents[1] = ray.m_Extents[1];
		m_Ray.m_Extents[2] = ray.m_Extents[2];
		m_Ray.m_StartOffset[0] = ray.m_StartOffset[0];
		m_Ray.m_StartOffset[1] = ray.m_StartOffset[1];
		m_Ray.m_StartOffset[2] = ray.m_StartOffset[2];
		m_Ray.m_IsRay = ray.m_IsRay;
		m_Ray.m_IsSwept = ray.m_IsSwept;
		m_Ray.m_b32 = ray.m_b32;
		m_Ray.m_b33 = ray.m_b33;
		m_Ray.m_n34 = ray.m_n34;
	}
};

void __stdcall sub_10266ef0(CTriggerDmgInfo *pInfo, const Vector *pStart, const Vector *pEnd, const Vector *pDir)
{
	Ray_t ray;
	ray.Init(*pStart, *pEnd);
	unsigned int mask;
	if (pInfo->m_pDmg)
		mask = pInfo->m_pDmg->m_field10 | pInfo->m_n38;
	else
		mask = pInfo->m_n38;
	float dmg;
	if (pInfo->m_pDmg)
		dmg = (float)pInfo->m_pDmg->sub_101faa70();
	else
		dmg = pInfo->m_f30;
	TTE2 e(pInfo->m_n2c, (int)dmg, *pDir, mask, ray);
	g_1070b254->vfunc7(&ray, 1, (CTriggerTraceEnum *)&e);
}
// END FUNCTION

// FUNCTION: 0x10267170 size=0xbb
#include "CBaseEntity.h"
#include "CTriggerTraceEnum.h"
#include "CUnknown1070b254.h"
#include "CGameTrace.h"
#include "CTakeDamageInfo.h"
#include "CVDmg_t.h"

extern CUnknown1070b254 *g_1070b254;

bool CTriggerTraceEnum::vfunc0(CBaseEntity *pEnt)
{
	CTakeDamageInfo info;
	CGameTrace trace;
	g_1070b254->vfunc2(&m_Ray, m_fMask, pEnt, &trace);
	if (trace.m_fraction < 1.0f) {
		CVDmg_t vdmg;
		vdmg.sub_101fa8d0(1, m_nDamageType, m_nDamage);
		info.sub_101c26d0(m_pAttacker, m_pAttacker, (float)m_nDamage, m_nDamageType, 0, (int)&vdmg, -1);
		info.sub_101c29e0(&trace);
		pEnt->sub_100a7d00((int)&info, (int)m_vecDir, (int)&trace);
		vdmg.sub_101fa680();
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10267260 size=0xba
#include "CPASFilter.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct CEngineEffectX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2)
	PV(30) PV(31) PV(32) PV(33) PV(34) PV(35) PV(36) PV(37) PV(38)
	virtual void vfunc39(CRecipientFilter *pFilter, int a, const float *pOrigin, const float *pOther, int nEntIndex);
};

struct CEntView184
{
	char pad[0x2e0];
	int m_pEdict2e0;
	void sub_10267260(const float *pOrigin, const void *pOther, int mode);
};

extern CEngineEffectX *g_10540528;

void CEntView184::sub_10267260(const float *pOrigin, const void *pOther, int mode)
{
	CPASFilter filter(pOrigin);
	switch (mode) {
	case 1:
		int edict = m_pEdict2e0;
		g_10540528->vfunc39(&filter, 0, pOrigin, (const float *)((const char *)pOther + 0xc), engine->vfunc35(edict));
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10267350 size=0xd
extern int g_10920544;
extern int g_10920548;
void sub_10267350()
{
	g_10920544 = 0;
	g_10920548 = 0;
}
// END FUNCTION

// FUNCTION: 0x10267370 size=0x54
extern "C" __declspec(dllimport) void Error(const char *, ...);
extern int g_1092030c[2][5];
extern int g_10920544[];

void sub_10267370(int pEntity, int nList)
{
	if (nList < 0 || nList > 1)
		Error("Invalid dodge list number.");
	int n = g_10920544[nList];
	if (n >= 5)
		Error("Too many entities in dodge list.");
	g_1092030c[nList][n++] = pEntity;
	g_10920544[nList] = n;
}
// END FUNCTION

// FUNCTION: 0x102673f0 size=0x48
extern int g_1092030c[2][5];
extern int g_10920544[2];
extern void (*g_109f366c)(const char *fmt, ...);
int sub_102673f0(int id, int list)
{
    if (list < 0 || list > 1)
        g_109f366c("Invalid dodge list number.");
    int n = g_10920544[list];
    for (int i = 0; i < n; i++) {
        if (g_1092030c[list][i] == id)
            return i;
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x10267460 size=0x5
extern float g_104994ac;
float g_1090fe0c = 0.11f - g_104994ac;
// END FUNCTION

// FUNCTION: 0x102674b0 size=0x5
extern float g_1090fe0c;
extern float g_104454c4;
extern float g_104994ac;
float g_1090fe30 = g_104454c4 * g_1090fe0c + g_104994ac;
// END FUNCTION

// FUNCTION: 0x10267500 size=0x5
extern float g_1090fe0c;
extern float g_104994ac;
float g_1090fe44 = 0.5f * g_1090fe0c + g_104994ac;
// END FUNCTION

// FUNCTION: 0x10267550 size=0x5
extern float g_1090fe0c;
extern float g_104994ac;
float g_1090fe48 = 0.65f * g_1090fe0c + g_104994ac;
// END FUNCTION

// FUNCTION: 0x102675a0 size=0x5
extern float g_1090fe0c;
extern float g_104994ac;
float g_1090fe3c = 0.85f * g_1090fe0c + g_104994ac;
// END FUNCTION

// FUNCTION: 0x102675f0 size=0x5
extern float g_1090fe0c;
extern float g_104994ac;
float g_1090fe40 = g_104994ac + g_1090fe0c;
// END FUNCTION

// FUNCTION: 0x10267640 size=0x5
extern float g_104994b4;
float g_1090fe08 = 0.11f - g_104994b4;
// END FUNCTION

// FUNCTION: 0x10267690 size=0x5
extern float g_1090fe08;
extern float g_104454c4;
extern float g_104994b4;
float g_1090fe24 = g_104454c4 * g_1090fe08 + g_104994b4;
// END FUNCTION

// FUNCTION: 0x102676e0 size=0x5
extern float g_1090fe08;
extern float g_104994b4;
float g_1090fe34 = 0.5f * g_1090fe08 + g_104994b4;
// END FUNCTION

// FUNCTION: 0x10267730 size=0x5
extern float g_1090fe08;
extern float g_104994b4;
float g_1090fe38 = 0.65f * g_1090fe08 + g_104994b4;
// END FUNCTION

// FUNCTION: 0x10267780 size=0x5
extern float g_1090fe08;
extern float g_104994b4;
float g_1090fe28 = 0.85f * g_1090fe08 + g_104994b4;
// END FUNCTION

// FUNCTION: 0x102677d0 size=0x5
extern float g_1090fe08;
extern float g_104994b4;
float g_1090fe2c = g_104994b4 + g_1090fe08;
// END FUNCTION

// FUNCTION: 0x10267820 size=0x288
#include "CBaseEntity.h"
#include "engineiface.h"
#include "Vector.h"
#include "CEntityVSlots.h"

// TARGET: sub_10267820

extern float g_1090fe24;
extern float g_1090fe28;
extern float g_1090fe2c;
extern float g_1090fe30;
extern float g_1090fe34;
extern float g_1090fe38;
extern float g_1090fe3c;
extern float g_1090fe40;
extern float g_1090fe44;
extern float g_1090fe48;
extern Vector g_1070d1b0;

Vector __stdcall sub_10267820(CBaseEntity *pEnt, const Vector *pPos, const Vector *pDirA, const Vector *pDirB)
{
	Vector vecResult = g_1070d1b0;

	float flMinX, flMaxX, flMinY, flMaxY;
	switch ( enginerandom->vfunc2(0, 5) )
	{
	case 1:
		flMinX = -g_1090fe34;
		flMaxX = -g_1090fe28;
		flMinY = g_1090fe44;
		flMaxY = g_1090fe3c;
		break;
	case 2:
		flMinX = -g_1090fe24;
		flMaxX = -g_1090fe34;
		flMinY = g_1090fe48;
		flMaxY = g_1090fe40;
		break;
	case 3:
		flMinX = g_1090fe24;
		flMaxX = g_1090fe34;
		flMinY = g_1090fe48;
		flMaxY = g_1090fe40;
		break;
	case 4:
		flMinX = g_1090fe34;
		flMaxX = g_1090fe28;
		flMinY = g_1090fe44;
		flMaxY = g_1090fe3c;
		break;
	case 5:
		flMinX = g_1090fe38;
		flMaxX = g_1090fe2c;
		flMinY = g_1090fe30;
		flMaxY = g_1090fe44;
		break;
	case 0:
		flMinX = -g_1090fe38;
		flMaxX = g_1090fe2c;
		flMinY = g_1090fe30;
		flMaxY = g_1090fe44;
		break;
	default:
		flMinX = -g_1090fe38;
		flMaxX = g_1090fe2c;
		flMinY = g_1090fe30;
		flMaxY = g_1090fe44;
		break;
	}

	float flX, flY;
	float flLen2;
	do
	{
		do
		{
			flX = enginerandom->vfunc1(flMinX, flMaxX);
			flY = enginerandom->vfunc1(flMinY, flMaxY);
			flLen2 = flX * flX + flY * flY;
		} while ( 0.008f > flLen2 );
	} while ( flLen2 > 0.012f );

	Vector *pOrigin = ((CEntityVSlots *)pEnt)->slot220();
	float flDx = pOrigin->x - pPos->x;
	float flDy = pOrigin->y - pPos->y;
	float flDz = pOrigin->z - pPos->z;
	float flDist = FastSqrt(flDx * flDx + flDy * flDy + flDz * flDz);

	float flScale = ( flDist < 400.0f ) ? 200.0f / flDist : 220.0f / flDist;

	vecResult = *pDirA * (flX * flScale) + *pDirB * (flY * flScale);

	return vecResult;
}
// END FUNCTION

// FUNCTION: 0x10267b60 size=0x4c7
#include "CBaseEntity.h"
#include "UTIL_Trace.h"
#include "CFireBulletsInfo.h"
#include "CEntityVSlots.h"
#include "CTakeDamageInfo.h"
#include "CNPC_VBach.h"
#include "Tier1.h"

#define V440(n) virtual void v##n();
#define V440_10(p) V440(p##0) V440(p##1) V440(p##2) V440(p##3) V440(p##4) V440(p##5) V440(p##6) V440(p##7) V440(p##8) V440(p##9)

class CUnknown104276a0 { public: int sub_104276a0(int nAmmoType); };
class CUnknown104276d0 { public: int sub_104276d0(int nAmmoType); };

struct CAmmoRulesView
{
	V440_10(0) V440_10(1) V440_10(2) V440_10(3) V440_10(4)
	V440(50) V440(51) V440(52) V440(53) V440(54)
	virtual CUnknown104276a0 *vfunc55();
};

struct CTracerEntView
{
	V440_10(0) V440_10(1) V440_10(2) V440_10(3) V440_10(4) V440_10(5) V440_10(6) V440_10(7) V440_10(8) V440_10(9)
	V440_10(10) V440_10(11) V440_10(12) V440_10(13) V440_10(14) V440_10(15) V440_10(16) V440_10(17)
	V440(180) V440(181) V440(182) V440(183)
	virtual void vfunc184(const Vector *pSrc, CGameTrace *pTrace, int iTracerType);
};

struct CShotEntity : CBaseEntity
{
	void sub_10266ef0(CTakeDamageInfo *pInfo, const Vector *pSrc, const float *pEnd, const Vector *pDir);
};

struct CLethalUnitView { int sub_10258290(void *pChar); };
struct CAnimatingView { int sub_10096b50(int hitbox); bool sub_10092e20(const char *pszName, Vector *pOrigin, void *pAngles); };

// the SDK's trace_t layout with its Vector members: its assignment copies member by member
struct cplane440_t { Vector normal; float dist; unsigned char type; unsigned char signbits; unsigned char pad[2]; };
struct csurface440_t { const char *name; short surfaceProps; unsigned short flags; };
struct trace440_t
{
	Vector startpos;
	Vector endpos;
	cplane440_t plane;
	float fraction;
	int contents;
	unsigned short dispFlags;
	bool allsolid;
	bool startsolid;
	float fractionleftsolid;
	csurface440_t surface;
	int hitgroup;
	short physicsbone;
	CBaseEntity *m_pEnt;
	int hitbox;
};

extern void *g_1070ba0c;
extern struct DevObj1074f04c { virtual void v0(); virtual bool vfunc1(); int m_n4[10]; int m_n2c; } *g_1074f04c;
extern int g_1092054c;
extern float g_1072cb40;
extern int g_1072bc58;
extern char g_1072bcb6;
extern Vector g_1070d1b0;
void sub_101bac90(int type, const float *pOrigin, int volume, float flDuration, char a, CBaseEntity *pOwner);
void sub_101d0b70(const Vector *pStart, const float *pEnd, int n);

int CBaseEntity::sub_10267b60(CFireBulletsInfo *pInfo)
{
	if (pInfo->m_iAmmoType == -1)
		return -1;
	CBaseEntity *pHit = 0;
	CUnknown104276a0 *pAmmoDef = ((CAmmoRulesView *)g_1070ba0c)->vfunc55();
	int nDamageType = pAmmoDef->sub_104276a0(pInfo->m_iAmmoType);
	int result = -1;
	CGameTrace tr;
	CTraceFilterSimple filter(this, 0);
	{
		Ray_t ray;
		ray.sub_1006dec0(pInfo->m_vecSrc, &pInfo->m_vecEnd.x, &g_1070d1b0.x, &g_1070d1b0.x, 0, 1);
		g_1070b254->vfunc4(&ray, 0x46004003, (CTraceFilterNoCharacterCollide *)&filter, &tr);
		if (g_10738960.sub_1005f190())
			sub_10146570((const Vector *)&tr.m_startpos, (const Vector *)&tr.m_endpos, 0xff, 0xff, 0, 1, -1.0f);
	}
	if (tr.m_fraction != 1.0 && tr.m_pEnt)
	{
		pHit = tr.m_pEnt;
		sub_101bac90(0x10, tr.m_endpos, g_1072bc58, 0.2f, g_1072bcb6, this);
		float flDamage = (float)pInfo->m_Dmg.m_field04;
		CVDmg_t dmg = pInfo->m_Dmg;
		if (!g_1074f04c->vfunc1() && g_1074f04c->m_n2c)
			g_109f3630("Starting Ranged Attack Damage Calculation with Base Damage (%f)\n", flDamage);
		void *pChar = m_p9c;
		if (pInfo->m_pWeapon98)
			dmg.m_field04 = ((CLethalUnitView *)pInfo->m_pWeapon98)->sub_10258290(pChar);
		dmg.sub_101fa960((CVDmgSource_t *)pInfo->m_pAttacker);
		dmg.m_field40 = 0;
		dmg.sub_101fb3e0(8);
		if (pHit->m_p9c)
		{
			result = ((CAnimatingView *)pHit->m_p9c)->sub_10096b50(tr.m_hitbox);
			pHit->vfunc21((int)pInfo->m_pAttacker->m_p9c);
			pInfo->m_pAttacker->vfunc24((int)pHit);
		}
		else
		{
			CTakeDamageInfo info;
			info.sub_101c26d0(pInfo->m_pWeapon98, pInfo->m_pAttacker, (float)dmg.sub_101faa70(), dmg.m_field10, 0, (int)&dmg, -1);
			info.sub_101c29e0(&tr);
			((CEntityVSlots *)pHit)->slot141((const CTakeDamageInfo *)&info, pInfo->m_vecDir, &tr);
		}
		dmg.sub_101fa680();
	}
	{
		CTakeDamageInfo info;
		((CShotEntity *)this)->sub_10266ef0(info.sub_101c26d0(pInfo->m_pAttacker, pInfo->m_pAttacker, (float)pInfo->m_Dmg.sub_101faa70(), nDamageType, 0, (int)&pInfo->m_Dmg, -1), &pInfo->m_vecSrc, tr.m_endpos, &pInfo->m_vecDir);
	}
	if (pInfo->m_iTracerFreq && (g_1092054c++ % pInfo->m_iTracerFreq) == 0)
		((CTracerEntView *)this)->vfunc184(&pInfo->m_vecSrc, &tr, ((CUnknown104276d0 *)pAmmoDef)->sub_104276d0(pInfo->m_iAmmoType));
	if (pInfo->m_pWeapon98)
	{
		Vector vecMuzzle;
		Vector angMuzzle;
		if (!((CAnimatingView *)pInfo->m_pWeapon98)->sub_10092e20("muzzleflash", &vecMuzzle, &angMuzzle))
			vecMuzzle = pInfo->m_vecSrc;
		sub_101d0b70(&vecMuzzle, tr.m_endpos, (int)(tr.m_fraction * pInfo->m_flDistance * 0.015625));
	}
	if ((pAmmoDef->sub_104276a0(pInfo->m_iAmmoType) & 0x2000000) && dynamic_cast<CNPC_VBach *>(this))
		g_1072cb40 = 3.0f;
	*(trace440_t *)pInfo->m_Result = *(trace440_t *)&tr;
	pInfo->m_pHitEntity = pHit;
	pInfo->m_nC0 = 0;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10268170 size=0x153
#include "CUnknown10268170.h"
#include "CUnknown10160680.h"
#include "engineiface.h"

Vector CUnknown10268170::sub_10268170(const Vector &vecSpread, const Vector &vecRight, const Vector &vecUp)
{
	Vector pt;
	do {
		pt.x = enginerandom->vfunc1(-0.5f, 0.5f) + enginerandom->vfunc1(-0.5f, 0.5f);
		pt.y = enginerandom->vfunc1(-0.5f, 0.5f) + enginerandom->vfunc1(-0.5f, 0.5f);
		pt.z = pt.x * pt.x + pt.y * pt.y;
	} while (pt.z > 1.0f);
	Vector vecSp = vecSpread;
	float flSpreadY;
	if (m_pPlayer) {
		vecSp.x = m_pPlayer->sub_10160680();
		flSpreadY = vecSp.x;
	} else {
		flSpreadY = vecSp.y;
	}
	pt = vecRight * (vecSp.x * pt.x) + vecUp * (flSpreadY * pt.y);
	return pt;
}
// END FUNCTION

// FUNCTION: 0x10268330 size=0x498
#include "CGameTrace.h"
#include "CBaseEntity.h"
#include "CVDmg_t.h"
#include "ConVar.h"
#include "CUnknown101c26d0.h"
#include "CUnknown101c29e0.h"
#include "CUnknown101c2a50.h"
#include "CUnknown101c2a90.h"
#include "CUnknown101d8a70.h"
#include "engineiface.h"

__declspec(dllimport) void DevMsg(const char *pMsg, ...);

struct CLethalUnitView
{
	int sub_10258290(void *pChar);
};

#define VS(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); \
	virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define VC(b) VS(b##0) VS(b##1) VS(b##2) VS(b##3) VS(b##4) VS(b##5) VS(b##6) VS(b##7) VS(b##8) VS(b##9)

struct CDmgRecord;

struct CTargetCharView
{
	virtual void s0();
	virtual int *vfunc1();
	virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	VS(s1) VS(s2) VS(s3) VS(s4) VS(s5) VS(s6) VS(s7) VS(s8) VS(s9)
	VC(t1) VC(t2)
	VS(u0) VS(u1) VS(u2)
	virtual void vfunc330(float flDamage, CDmgRecord *pRec);
	char sub_10337f30();
};

struct CTargetEntView
{
	VC(a)
	VS(b0) VS(b1) VS(b2) VS(b3)
	virtual void c0();
	virtual void vfunc141(void *pInfo, Vector *pDir, CGameTrace *pTrace);
};

struct CUnk101e8ef0View
{
	int sub_101e8ef0(void *p);
};

struct CDmgRecord
{
	int m_unk00;
	int m_unk04;
	int m_unk08;
	int m_unk0c;
	int m_unk10;
	int m_unk14;
	int m_unk18;
	int m_unk1c;
	Vector m_vec20;		// 0x20
	int m_unk2c;
	int m_unk30;
	int m_unk34;
	int m_unk38;
	int m_unk3c;
	int m_unk40;
	int m_unk44;
	CVDmg_t m_dmg;		// 0x48
	int m_unk8c;
	int m_unk90;
	CVDmgSource_t *m_pSrc;	// 0x94
	CLethalUnitView *m_pLethal;	// 0x98
	int m_unk9c;
	int m_unka0;
	int m_unka4;
	int m_unka8;
	int m_unkac;
	int m_unkb0;
	int m_unkb4;
	int m_unkb8;
	int m_unkbc;
	int m_nC0;		// 0xc0
	int m_trace[0x14];	// 0xc4: a trace
	int m_n114;		// 0x114
};

extern ConVar *g_1074f04c;
extern ConVar *g_1090febc;
extern CVDmg_t *g_1072cb10;
extern float g_1072cb40;
extern int g_1072cb5c;
extern CUnk101e8ef0View g_10739d08;

void sub_101c2c30();
void sub_101c2c60();
int sub_10258270();
void sub_101cfef0(void *pTrace, int a2, int a3, void *a4, int a5);

inline int EdX_e8(CBaseEntity *p) { return p->m_pEdict2e0; }
inline int F04_e8(CVDmg_t &d) { return d.m_field04; }
inline float Pct_e8(float f) { return f; }
inline int F04p_e8(CVDmg_t *d) { return d->m_field04; }
inline int pcd_id_e8(int x) { return x; }
#define DICE_DEBUGP(pEnt) (!g_1074f04c->vfunc1() && g_1074f04c->m_nValue && engine->vfunc35((pEnt)->m_pEdict2e0))
#define DICE_DEBUG(pEnt) (!g_1074f04c->vfunc1() && g_1074f04c->m_nValue && engine->vfunc35(EdX_e8(pEnt)))

struct CInfoV : CUnknown101c26d0
{
	CInfoV(void *a1, void *a2, float f, int t, int a, int b, int c) { sub_101c26d0(a1, a2, f, t, a, b, c); }
};
inline void InitInfo(CUnknown101c26d0 &i, void *a1, void *a2, float f, int t, int a, int b, int c) { i.sub_101c26d0(a1, a2, f, t, a, b, c); }
// TARGET: CBaseEntity::sub_10268330
void CBaseEntity::sub_10268330(CBaseEntity *pTarget, void *pDmgV, float flPercent)
{
	CDmgRecord *pDmg = (CDmgRecord *)pDmgV;
	void *pTargetData = pTarget->m_p9c;
	void *pChar = m_p9c;
	CVDmg_t dmg = pDmg->m_dmg;

	sub_101c2c30();

	if (pDmg->m_pLethal) {
		float flBase = (float)pDmg->m_dmg.m_field04;
		float flLeth;
		if (pChar)
			flLeth = (float)pDmg->m_pLethal->sub_10258290(pChar);
		else
			flLeth = (float)sub_10258270();

		if (DICE_DEBUG(pTarget)) {
			DevMsg("Starting Ranged Attack Damage Calculation with Base Damage (%f)\n", (double)flBase);
			DevMsg("Total Lethality of (%f)\n", (double)flLeth);
		}

		int nLeth = (int)flLeth;
		dmg.m_field04 = nLeth;

		if (DICE_DEBUG(pTarget)) {
			DevMsg("Total Lethality of all shots in this volley = (%i)\n", dmg.m_field04);
			DevMsg("Percent of shots in this volley that hit target = (%f)\n", (double)flPercent);
		}

		if (dmg.m_field04 < 1)
			dmg.m_field04 = 1;

		dmg.sub_101fa960(pDmg->m_pSrc);
		dmg.m_field40 = 0;
		dmg.m_field0c = nLeth;
		dmg.sub_101fb3e0(8);

		CUnknown101c26d0 info;
		info.sub_101c26d0(pDmg->m_pLethal, pDmg->m_pSrc, (float)dmg.sub_101faa70(), dmg.m_field10, pDmg->m_nC0, (int)&dmg, pDmg->m_n114);
		CGameTrace *pTrace = (CGameTrace *)pDmg->m_trace;
		((CUnknown101c29e0 *)&info)->sub_101c29e0((const int *)pTrace);
		((CUnknown101c2a50 *)&info)->sub_101c2a50(*(int *)&flPercent);
		((CTargetEntView *)pTarget)->vfunc141(&info, &pDmg->m_vec20, pTrace);

		float flThrough;
		if (g_1072cb10)
			flThrough = (float)g_1072cb10->sub_101faa70();
		else
			flThrough = g_1072cb40;

		CTargetCharView *pTargetChar = *(CTargetCharView *volatile *)&pTargetData;
		if (pTargetChar && pTargetChar->sub_10337f30()) {
			if (DICE_DEBUG(pTarget))
				DevMsg("Supernatural Rolling Defense against Firearm\n");

			int nDice = g_10739d08.sub_101e8ef0(pTargetChar);
			CVDmgBlock16_t block(4, 0xc);
			CUnknown101d8a70 roll;
			roll.sub_101d8820((int)pTargetChar, 0, &block, nDice);
			roll.sub_101d8a70(&pTargetData);
			int nSuccess = roll.m_n04 - roll.m_n0c;
			nSuccess = nSuccess > 0 ? nSuccess : 0;
			flThrough -= (float)nSuccess;
			if (flThrough < 0.0f)
				flThrough = 0.0f;

			if (DICE_DEBUG(pTarget))
				DevMsg("Defense Roll successes = %d\n", nSuccess);
		}

		float flMult = ((CUnknown101c2a90 *)&info)->sub_101c2a70();
		if (DICE_DEBUG(pTarget))
			DevMsg("Final damage:  Lethality that went through (%f) * BaseDamage (%f) * Multiplier (%f) = Total (%f)\n",
				(double)flThrough, (double)flBase, (double)flMult, (double)(flMult * flThrough * flBase));

		flThrough = flMult * flThrough * flBase;
		float flOverride = g_1090febc->vfunc1() ? 0.0f : g_1090febc->m_fValue;
		if (flOverride >= 0.0f)
			flThrough = flOverride;
		g_1072cb40 = flThrough;

		if (pTargetChar) {
			g_1072cb5c = *pTargetChar->vfunc1();
			pTargetChar->vfunc330(flThrough, pDmg);
		}

		int bDead = 0;
		if (flThrough <= 0.0f)
			bDead = 1;
		sub_101cfef0(pTrace, pDmg->m_dmg.m_field10, 1, pDmg->m_pLethal, bDead);
		sub_101c2c60();
	}
	dmg.sub_101fa680();
}
// END FUNCTION

// FUNCTION: 0x10268900 size=0x4bc
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CBaseEntity.h"
#include "CFireBulletsInfo.h"
#include "CVampireProjectile.h"
#include "CVStatList_t.h"
#include "CBasePlayer.h"
#include "CUnknown10268170.h"

#define V185(n) virtual void v##n();
#define V185_10(p) V185(p##0) V185(p##1) V185(p##2) V185(p##3) V185(p##4) V185(p##5) V185(p##6) V185(p##7) V185(p##8) V185(p##9)

class CUnknown104276a0 { public: int sub_104276a0(int nAmmoType); };

struct CAmmoRulesView185
{
	V185_10(0) V185_10(1) V185_10(2) V185_10(3) V185_10(4)
	V185(50) V185(51) V185(52) V185(53) V185(54)
	virtual CUnknown104276a0 *vfunc55();
};

struct CEntityView186
{
	V185_10(0) V185_10(1) V185_10(2) V185_10(3) V185_10(4) V185_10(5) V185_10(6) V185_10(7) V185_10(8) V185_10(9)
	V185_10(10) V185_10(11) V185_10(12) V185_10(13) V185_10(14) V185_10(15) V185_10(16) V185_10(17)
	V185(180) V185(181) V185(182) V185(183) V185(184) V185(185)
	virtual char vfunc186();
};

extern void *g_1070ba0c;
extern int g_1072cb48;
extern float g_104994c8[6];
void sub_101c2c60();
void sub_101c2c30();
void *sub_101cda50();
void sub_10138a90(const Vector &forward, Vector &right, Vector &up);
CVampireProjectile *sub_101ef900(const Vector *pOrigin, const Vector *pDir, CBaseEntity *pAttacker, int nFlags, float flScale, const char *a, int b, int c, int d);

void CBaseEntity::vfunc185(CFireBulletsInfo *pInfo)
{
	if (m_pNPC98)
		--*(int *)((char *)m_pNPC98 + 0x65f0);
	CUnknown104276a0 *pAmmoDef = ((CAmmoRulesView185 *)g_1070ba0c)->vfunc55();
	int nDamageType = pAmmoDef->sub_104276a0(pInfo->m_iAmmoType);
	pInfo->m_Dmg.m_field10 = nDamageType;
	if (!pInfo->m_pAttacker)
		pInfo->m_pAttacker = this;
	sub_101c2c60();
	sub_101c2c30();
	g_1072cb48 = nDamageType | 0x1000;
	Vector vecRight, vecUp;
	sub_10138a90(pInfo->m_vecDirShooting, vecRight, vecUp);
	CUtlVector<CFireBulletsHit> hits;
	for (int iShot = 0; iShot < pInfo->m_iShots; iShot++)
	{
		for (int iPellet = 0; iPellet < pInfo->m_iPellets; iPellet++)
		{
			pInfo->m_vecDir = pInfo->m_vecDirShooting;
			if (!(nDamageType & 0x2000000) || (m_pA8 && !*(int *)((char *)m_pA8 + 0x1e78)))
				VectorAdd(((CUnknown10268170 *)this)->sub_10268170(pInfo->m_vecSpread, vecRight, vecUp), pInfo->m_vecDir, pInfo->m_vecDir);
			pInfo->m_vecEnd = pInfo->m_vecSrc + pInfo->m_vecDir * pInfo->m_flDistance;
			bool bProjectile = pInfo->m_bFlagsA0 & 1;
			void *pPlayer = sub_101cda50();
			int nLevel = pPlayer ? CVStatListSet::Of(pPlayer)->Find(3)->sub_102012d0(3) : 0;
			if (bProjectile || (nLevel >= 3 && !m_pA8))
			{
				bProjectile = true;
				pInfo->m_flA4 /= g_104994c8[nLevel > 5 ? 5 : (nLevel < 0 ? 0 : nLevel)];
			}
			if (((CEntityView186 *)this)->vfunc186())
				continue;
			if (bProjectile && pInfo->m_pA8 && *(char *)pInfo->m_pA8)
			{
				float flFrac = 1.0f / pInfo->m_iPellets;
				CVampireProjectile *pProj = sub_101ef900(&pInfo->m_vecSrc, &pInfo->m_vecDir, pInfo->m_pAttacker, *(int *)&pInfo->m_bFlagsA0, pInfo->m_flA4, (const char *)pInfo->m_pA8, pInfo->m_nAC, pInfo->m_nB0, pInfo->m_nB4);
				pProj->sub_101ef540(&pInfo->m_vecSrc, &pInfo->m_vecEnd, pInfo->m_iAmmoType, (int)&pInfo->m_Dmg, pInfo->m_pAttacker, &pInfo->m_vecDir, *(float *)&pInfo->m_n9c, *(int *)&pInfo->m_flDistance, 1, iShot, 0, 0, (CBaseEntity *)pInfo->m_pWeapon98, (const char *)pInfo->m_nB8, *(int *)&flFrac);
				continue;
			}
			sub_10267b60(pInfo);
			if (pInfo->m_pHitEntity)
			{
				int k;
				for (k = 0; k < hits.Count(); k++)
				{
					if (hits[k].m_hEnt.Get() == pInfo->m_pHitEntity)
						break;
				}
				CFireBulletsHit *pEntry;
				if (k >= hits.Count())
				{
					CFireBulletsHit hit;
					hit.m_hEnt = pInfo->m_pHitEntity;
					hit.m_nHits = 0;
					pEntry = &hits[hits.AddToTail(hit)];
				}
				else
				{
					pEntry = &hits[k];
				}
				pEntry->m_nHits++;
			}
		}
		if (pInfo->m_iPellets)
		{
			for (int m = 0; m < hits.Count(); m++)
			{
				CBaseEntity *pEnt = hits[m].m_hEnt.Get();
				if (pEnt)
				{
					float flFraction = hits[m].m_nHits;
					flFraction /= pInfo->m_iPellets;
					sub_10268330(pEnt, pInfo, flFraction);
				}
			}
		}
	}
	if (m_pA8)
		((CBasePlayer *)m_pA8)->sub_10160560();
}
// END FUNCTION

// FUNCTION: 0x10268ef0 size=0x30b
#include "CTraceFilterNoCharacterCollide.h"
#include "CBaseEntity.h"
#include "vampire.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "Ray_t.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "engineiface.h"

void sub_101cfe10(void *pTrace, int hitgroup, int a);
void sub_10146570(const float *a, const float *b, int c, int d, int e, int f, float g);

struct DmgInfoView { int m_n0; int m_nDamage; int m_n8; int m_nc; unsigned char m_bType; };

// TARGET: CBaseEntity::vfunc146
void CBaseEntity::vfunc146(void *pInfo, const Vector &vecDir, void *pTrace)
{
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	DmgInfoView *info = (DmgInfoView *)pInfo;
	CGameTrace *tr = (CGameTrace *)pTrace;
	if (pSlots->slot145() == -1 || pSlots->slot145() == 0x14)
		return;
	float flDamage = (float)info->m_nDamage;
	if (flDamage == 0.0f)
		return;
	if ((info->m_bType & 0xc7) == 0)
		return;
	if (!pSlots->slot158())
	{
		if (*(int *)((char *)this + 0x208) <= 0)
			return;
		*(int *)((char *)this + 0x208) -= 1;
	}
	int nShots = 0;
	if (flDamage < 10.0f)
	{
		flDamage = 0.1f;
		nShots = 1;
	}
	else if (flDamage < 25.0f)
	{
		flDamage = 0.2f;
		nShots = 2;
	}
	else
	{
		flDamage = 0.3f;
		nShots = 4;
	}
	for (int i = nShots; i > 0; i--)
	{
		Vector vecNeg;
		vecNeg.x = vecDir.x * -1.0f;
		vecNeg.y = vecDir.y * -1.0f;
		vecNeg.z = vecDir.z * -1.0f;
		Vector vecNew;
		vecNew.x = enginerandom->vfunc1(-flDamage, flDamage) + vecNeg.x;
		vecNew.y = enginerandom->vfunc1(-flDamage, flDamage) + vecNeg.y;
		vecNew.z = enginerandom->vfunc1(-flDamage, flDamage) + vecNeg.z;
		Vector vecEnd;
		vecEnd = vecNew * -172.0f;
		vecEnd = vecEnd + *(Vector *)tr->m_endpos;
		Ray_t ray;
		ray.Init(*(Vector *)tr->m_endpos, vecEnd);
		CTraceFilterSimple filter(this, 0);
		CGameTrace result;
		g_1070b254->vfunc4(&ray, 0x400b, (CTraceFilterNoCharacterCollide *)&filter, &result);
		if (!g_10738964->vfunc1() && g_10738964->m_n2c)
			sub_10146570(result.m_startpos, result.m_endpos, 0xff, 0, 0, 1, -1.0f);
		if (result.m_fraction != 1.0)
			sub_101cfe10(&result, pSlots->slot145(), 1);
	}
}
// END FUNCTION

// FUNCTION: 0x102692d0 size=0x252
#include "CBaseEntity.h"
#include "UTIL_Trace.h"
#include "engineiface.h"

#define V4(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)
#define V64(x) V16(x##a) V16(x##b) V16(x##c) V16(x##d)

struct CBaseEntityBleedView {
	V64(a) V64(b) V16(c) virtual void d0();
	virtual int vfunc145();
	V4(e) V4(f) V4(g)
	virtual bool vfunc158();
	char m_pad0004[0x208 - 4];
	int m_n208;
};

void sub_101cfe10(void *p, int a, int b);

void CBaseEntity::sub_102692d0(int cCount, float flNoise, CGameTrace *ptr, Vector vecDir)
{
	CBaseEntityBleedView *pView = (CBaseEntityBleedView *)this;
	if (!pView->vfunc158()) {
		if (pView->m_n208 <= 0)
			return;
		pView->m_n208--;
	}
	for (int i = 0; i < cCount; i++) {
		Vector vecTraceDir;
		vecTraceDir.x = vecDir.x + enginerandom->vfunc1(-flNoise, flNoise);
		vecTraceDir.y = vecDir.y + enginerandom->vfunc1(-flNoise, flNoise);
		vecTraceDir.z = vecDir.z + enginerandom->vfunc1(-flNoise, flNoise);
		const Vector &vecStart = *(Vector *)ptr->m_endpos;
		CGameTrace Bloodtr;
		UTIL_TraceLine(vecStart, vecStart + vecTraceDir * 172.0f, 0x400b, this, 0, &Bloodtr);
		if (Bloodtr.m_fraction != 1.0)
			sub_101cfe10(&Bloodtr, pView->vfunc145(), 1);
	}
}
// END FUNCTION

// FUNCTION: 0x102695d0 size=0xd2
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

struct CEntFields102695d0
{
	char m_pad0000[0x16c];
	int m_n16c;
	char m_pad0170[0x17c - 0x170];
	float m_flNextThink;
	char m_pad0180[0x1a3 - 0x180];
	unsigned char m_a1a3;
	char m_pad01a4[0x26c - 0x1a4];
	const char *m_name26c;
};
extern float g_1070d9d0[];
void sub_100152b2();

// TARGET: CAI_BaseNPC::sub_102695d0
void CAI_BaseNPC::sub_102695d0()
{
	CEntFields102695d0 *pFields = (CEntFields102695d0 *)this;
	CBaseEntity *pEnt = (CBaseEntity *)this;
	if (pFields->m_n16c == 0) {
		pFields->m_a1a3 = 0xff;
		pFields->m_n16c = 2;
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", pFields->m_name26c ? pFields->m_name26c : g_106b8540);
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
		pCol->sub_100dc580(pCol->m_usSolidFlags | 4);
	}
	pEnt->sub_100b2f50(g_1070d9d0);
	pEnt->sub_100b3b00();
	pFields->m_flNextThink = gpGlobals->curtime + 10.0;
	pEnt->sub_100ac4e0((int)sub_100152b2, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x102696f0 size=0x8e
extern float g_1044e664;
#define D5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define D10(p) D5(p##a) D5(p##b)
#define D100(p) D10(p##0) D10(p##1) D10(p##2) D10(p##3) D10(p##4) D10(p##5) D10(p##6) D10(p##7) D10(p##8) D10(p##9)
struct E {
	D100(a) D100(b) virtual void c0();
	virtual char v201(void *, int, int, int);
	D100(d) D10(e0) D10(e1) D10(e2) D10(e3) D10(e4) D10(e5) virtual void h0();
	virtual char v363(void *);
};
E *sub_1000ac8b(int);
char sub_10015960(void *, void *);
void sub_10014614(void *);

// TARGET: sub_102696f0
void __fastcall sub_102696f0(char *self)
{
	for (int i = 0; i < gpGlobals->maxClients; i++) {
		E *p = sub_1000ac8b(i + 1);
		if (p && p->v363(self) && sub_10015960(self, p) && p->v201(self, 0x2804091, 0, 0)) {
			float t = gpGlobals->curtime;
			*(float *)(self + 0x17c) = t + g_1044e664;
			return;
		}
	}
	sub_10014614(self);
}
// END FUNCTION

// FUNCTION: 0x102697b0 size=0x14a
#include "CBaseEntity.h"
#include "CEntityVSlots.h"

CEntityVSlots *sub_101cd9e0(int playerIndex);
void sub_10139550(const Vector *angles, Vector *forward);
void sub_101c0b10();

struct DeathThinkView : CEntityVSlots
{
    char pad0004[0x17c - 4];
    float m_flNextThink;	// 0x17c

    int sub_100ac4e0(int func, int thinkTime, const char *szContext);	// CBaseEntity::ThinkSet (stub 0x10007fe5)
};

// TARGET: sub_102697b0
void __fastcall sub_102697b0(DeathThinkView *pThis)
{
    pThis->m_flNextThink = gpGlobals->curtime + 0.1f;
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CEntityVSlots *pPlayer = sub_101cd9e0(i);
        if (pPlayer)
        {
            Vector vecDelta = *pThis->slot220() - pPlayer->slot192();
            float flDistSqr = vecDelta.y * vecDelta.y + vecDelta.x * vecDelta.x + vecDelta.z * vecDelta.z;
            if (flDistSqr < 65536.0)
                return;
            if (flDistSqr < 2250000.0)
            {
                VectorNormalize(vecDelta);
                Vector vecForward;
                sub_10139550((const Vector *)((char *)pPlayer + 0x206c), &vecForward);
                if (DotProduct(vecForward, vecDelta) > 0.0f)
                    return;
            }
        }
    }
    pThis->sub_100ac4e0((int)sub_101c0b10, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x10269960 size=0x52
#include "CBaseEntity.h"
#include "globalvars.h"

void sub_101c0b10();

void CBaseEntity::sub_10269960()
{
	if (m_bAlpha1a3 > 7) {
		m_bAlpha1a3 -= 7;
		m_flNextThink = gpGlobals->curtime + 0.1;
	} else {
		m_bAlpha1a3 = 0;
		m_flNextThink = gpGlobals->curtime + 0.2;
		sub_100ac4e0((int)sub_101c0b10, 0, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x102699e0 size=0x22
#include "Vector.h"

extern char g_1070ba40[];
void sub_1000b497(const Vector *pVec, void *pData, int a, int b);

// TARGET: sub_102699e0
void sub_102699e0(Vector vec, int a, float t)
{
    sub_1000b497(&vec, g_1070ba40, a, (int)t);
}
// END FUNCTION

// FUNCTION: 0x10269a20 size=0x59
#include "CAI_BaseNPCTroika.h"
struct CAI_BaseNPC580 : CAI_BaseNPC {
	virtual void s569(); virtual void s570(); virtual void s571(); virtual void s572(); virtual void s573();
	virtual void s574(); virtual void s575(); virtual void s576(); virtual void s577(); virtual void s578();
	virtual void s579();
	virtual CAI_CondOwner *Slot580();
};
// TARGET: CAI_BaseNPC::sub_10269a20
void CAI_BaseNPC::sub_10269a20(int condition)
{
	int id;
	if (condition < 1000000000)
		goto translate;
	if (condition == -1)
		goto translate;
	id = condition;
	goto check;
translate:
	{
		CAI_CondOwner *pOwner = ((CAI_BaseNPC580 *)this)->Slot580();
		id = pOwner->m_table.sub_102ea2d0(condition);
	}
check:
	if (id != -1) {
		int bit = id - 1000000000;
		if (bit != -1)
			((unsigned int *)((char *)this + 0x5c5c))[bit >> 5] |= 1 << (bit & 0x1f);
	}
}
// END FUNCTION

// FUNCTION: 0x10269aa0 size=0x62
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPC580 : CAI_BaseNPC {
	virtual void s569(); virtual void s570(); virtual void s571(); virtual void s572(); virtual void s573();
	virtual void s574(); virtual void s575(); virtual void s576(); virtual void s577(); virtual void s578();
	virtual void s579();
	virtual CAI_CondOwner *GetClassScheduleIdSpace();
};

struct CAI_CondBits5c5c {
	unsigned int m_Ints[1];
	bool IsBitSet(int bitNum) const { return (m_Ints[bitNum >> 5] & (1 << (bitNum & 31))) != 0; }
};

inline bool AI_IdIsLocal(int id) { return id < 1000000000 || id == -1; }
inline int AI_RemapFromGlobal(int id) { return (id != -1) ? id - 1000000000 : -1; }

// TARGET: CAI_BaseNPC::sub_10269aa0
bool CAI_BaseNPC::sub_10269aa0(int condition)
{
	int interrupt = AI_RemapFromGlobal(AI_IdIsLocal(condition) ? ((CAI_BaseNPC580 *)this)->GetClassScheduleIdSpace()->ConditionLocalToGlobal(condition) : condition);
	if (interrupt == -1)
		return false;
	bool bReturn = ((CAI_CondBits5c5c *)((char *)this + 0x5c5c))->IsBitSet(interrupt);
	return bReturn;
}
// END FUNCTION

// FUNCTION: 0x10269b30 size=0xd
namespace lifted {
int __stdcall sub_10014df8(int);
}
int __stdcall sub_10269b30(int a0, int a1)
{
    return lifted::sub_10014df8(a0);
}
// END FUNCTION

// FUNCTION: 0x10269b50 size=0x5f
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPC580 : CAI_BaseNPC {
	virtual void s569(); virtual void s570(); virtual void s571(); virtual void s572(); virtual void s573();
	virtual void s574(); virtual void s575(); virtual void s576(); virtual void s577(); virtual void s578();
	virtual void s579();
	virtual CAI_CondOwner *Slot580();
};

// TARGET: CAI_BaseNPC::sub_10269b50
void CAI_BaseNPC::sub_10269b50(int condition)
{
	int id;
	if (condition < 1000000000)
		goto translate;
	if (condition == -1)
		goto translate;
	id = condition;
	goto check;
translate:
	{
		CAI_CondOwner *pOwner = ((CAI_BaseNPC580 *)this)->Slot580();
		id = pOwner->m_table.sub_102ea2d0(condition);
	}
check:
	if (id != -1) {
		int bit = id - 1000000000;
		if (bit != -1)
			((unsigned int *)((char *)this + 0x5c5c))[bit >> 5] &= ~(1 << (bit & 0x1f));
	}
}
// END FUNCTION

// FUNCTION: 0x10269bd0 size=0x7a
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPC580b : CAI_BaseNPC {
	virtual void s569(); virtual void s570(); virtual void s571(); virtual void s572(); virtual void s573();
	virtual void s574(); virtual void s575(); virtual void s576(); virtual void s577(); virtual void s578();
	virtual void s579();
	virtual CAI_CondOwner *Slot580();
};

// TARGET: CAI_BaseNPC::sub_10269bd0
void CAI_BaseNPC::sub_10269bd0(int *pConditions, int nConditions)
{
	for (int i = 0; i < nConditions; i++)
	{
		int condition = pConditions[i];
		int id;
		if (condition < 1000000000)
			goto translate;
		if (condition == -1)
			goto translate;
		id = condition;
		goto check;
translate:
		{
			CAI_CondOwner *pOwner = ((CAI_BaseNPC580b *)this)->Slot580();
			id = pOwner->m_table.sub_102ea2d0(condition);
		}
check:
		if (id != -1)
		{
			int bit = id - 1000000000;
			if (bit != -1)
				((unsigned int *)((char *)this + 0x5c5c))[bit >> 5] &= ~(1 << (bit & 0x1f));
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10269c70 size=0x86
#include "CAI_BaseNPCTroika.h"

struct CondBitVec
{
	unsigned int m_Ints[6];
	bool IsBitSet(int bitNum) const
	{
		bool r = (m_Ints[bitNum >> 5] & (1 << (bitNum & 31))) != 0;
		return r;
	}
};

inline int AI_RemapToGlobalX(int globalID)
{
	return (globalID != -1) ? globalID - 1000000000 : -1;
}

inline bool AI_IdIsLocalX(int id)
{
	return (id < 1000000000 || id == -1);
}

struct CAI_BaseNPCTroikaCond : CAI_BaseNPCTroika
{
	int GlobalCondition(int condition)
	{
		int global;
		if (AI_IdIsLocalX(condition))
		{
			CAI_CondOwner *pOwner = vfunc580();
			global = pOwner->m_table.sub_102ea2d0(condition);
		}
		else
			global = condition;
		return global;
	}
};

bool CAI_BaseNPCTroika::sub_10269c70(int condition)
{
	int interrupt = AI_RemapToGlobalX(((CAI_BaseNPCTroikaCond *)this)->GlobalCondition(condition));
	if (interrupt == -1)
		return false;
	if (*(int *)((char *)this + 0x5c38) == 0)
		return false;
	if (((CondBitVec *)((char *)this + 0x5c74))->IsBitSet(interrupt))
		return true;
	return ((CondBitVec *)((char *)this + 0x5c8c))->IsBitSet(interrupt);
}
// END FUNCTION

// FUNCTION: 0x10269d30 size=0x85
#include "CAI_BaseNPCTroika.h"

inline bool AI_IdIsLocal(int id) { return (id < 1000000000 || id == -1); }
inline int AI_RemapFromGlobal(int id) { return (id != -1) ? id - 1000000000 : -1; }

bool CAI_BaseNPCTroika::sub_10269d30(int condition)
{
	if (*(int *)((char *)this + 0x5c38) == 0)
		return false;
	int id = AI_RemapFromGlobal(AI_IdIsLocal(condition) ? vfunc580()->ConditionLocalToGlobal(condition) : condition);
	if (id == -1)
		return false;
	unsigned int mask = 1 << (id & 0x1f);
	int *bits = (int *)this;
	return (bits[(id >> 5) + 0x1717] & mask) && (bits[(id >> 5) + 0x171d] & mask);
}
// END FUNCTION

// FUNCTION: 0x10269df0 size=0x85
#include "CAI_BaseNPCTroika.h"

namespace block_10269df0 {
struct CondBits
{
	int m_ints[6];
	bool IsBitSet(int bit) const { return (m_ints[bit >> 5] & (1 << (bit & 31))) != 0; }
};
inline bool IsLocalId(int id) { return id < 1000000000 || id == -1; }
}
using namespace block_10269df0;

bool CAI_BaseNPCTroika::sub_10269df0(int condition)
{
	if (*(int *)((char *)this + 0x5c38) == 0)
		return false;
	int global = IsLocalId(condition) ? vfunc580()->ConditionLocalToGlobal(condition) : condition;
	int interrupt = (global == -1) ? -1 : global - 1000000000;
	if (interrupt == -1)
		return false;
	return !((CondBits *)((char *)this + 0x5c5c))->IsBitSet(interrupt) && ((CondBits *)((char *)this + 0x5c8c))->IsBitSet(interrupt);
}
// END FUNCTION

// FUNCTION: 0x10269eb0 size=0x59
#include "CAI_BaseNPCTroika.h"
struct CAI_BaseNPC580 : CAI_BaseNPC {
	virtual void s569(); virtual void s570(); virtual void s571(); virtual void s572(); virtual void s573();
	virtual void s574(); virtual void s575(); virtual void s576(); virtual void s577(); virtual void s578();
	virtual void s579();
	virtual CAI_CondOwner *Slot580();
};
// TARGET: CAI_BaseNPC::sub_10269eb0
void CAI_BaseNPC::sub_10269eb0(int condition)
{
	int id;
	if (condition < 1000000000)
		goto translate;
	if (condition == -1)
		goto translate;
	id = condition;
	goto check;
translate:
	{
		CAI_CondOwner *pOwner = ((CAI_BaseNPC580 *)this)->Slot580();
		id = pOwner->m_table.sub_102ea2d0(condition);
	}
check:
	if (id != -1) {
		int bit = id - 1000000000;
		if (bit != -1)
			((unsigned int *)((char *)this + 0x5c74))[bit >> 5] |= 1 << (bit & 0x1f);
	}
}
// END FUNCTION

// FUNCTION: 0x10269f30 size=0x5f
#include "CNPC_VGuard1.h"
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPC580 : CAI_BaseNPC {
	virtual void s569(); virtual void s570(); virtual void s571(); virtual void s572(); virtual void s573();
	virtual void s574(); virtual void s575(); virtual void s576(); virtual void s577(); virtual void s578();
	virtual void s579();
	virtual CAI_CondOwner *Slot580();
};

// TARGET: CNPC_VGuard1::sub_10269f30
void CNPC_VGuard1::sub_10269f30(int condition)
{
	int id;
	if (condition < 1000000000)
		goto translate;
	if (condition == -1)
		goto translate;
	id = condition;
	goto check;
translate:
	{
		CAI_CondOwner *pOwner = ((CAI_BaseNPC580 *)this)->Slot580();
		id = pOwner->m_table.sub_102ea2d0(condition);
	}
check:
	if (id != -1) {
		int bit = id - 1000000000;
		if (bit != -1)
			((unsigned int *)((char *)this + 0x5c74))[bit >> 5] &= ~(1 << (bit & 0x1f));
	}
}
// END FUNCTION

// FUNCTION: 0x10269fb0 size=0x59
#include "CAI_BaseNPCTroika.h"
struct CAI_BaseNPC580 : CAI_BaseNPC {
	virtual void s569(); virtual void s570(); virtual void s571(); virtual void s572(); virtual void s573();
	virtual void s574(); virtual void s575(); virtual void s576(); virtual void s577(); virtual void s578();
	virtual void s579();
	virtual CAI_CondOwner *Slot580();
};
// TARGET: CAI_BaseNPC::sub_10269fb0
void CAI_BaseNPC::sub_10269fb0(int condition)
{
	int id;
	if (condition < 1000000000)
		goto translate;
	if (condition == -1)
		goto translate;
	id = condition;
	goto check;
translate:
	{
		CAI_CondOwner *pOwner = ((CAI_BaseNPC580 *)this)->Slot580();
		id = pOwner->m_table.sub_102ea2d0(condition);
	}
check:
	if (id != -1) {
		int bit = id - 1000000000;
		if (bit != -1)
			((unsigned int *)((char *)this + 0x5c8c))[bit >> 5] |= 1 << (bit & 0x1f);
	}
}
// END FUNCTION

// FUNCTION: 0x1026a030 size=0x5f
#include "CAI_BaseNPCTroika.h"
struct CAI_BaseNPC580 : CAI_BaseNPC {
	virtual void s569(); virtual void s570(); virtual void s571(); virtual void s572(); virtual void s573();
	virtual void s574(); virtual void s575(); virtual void s576(); virtual void s577(); virtual void s578();
	virtual void s579();
	virtual CAI_CondOwner *Slot580();
};
// TARGET: CAI_BaseNPC::sub_1026a030
void CAI_BaseNPC::sub_1026a030(int condition)
{
	int id;
	if (condition < 1000000000)
		goto translate;
	if (condition == -1)
		goto translate;
	id = condition;
	goto check;
translate:
	{
		CAI_CondOwner *pOwner = ((CAI_BaseNPC580 *)this)->Slot580();
		id = pOwner->m_table.sub_102ea2d0(condition);
	}
check:
	if (id != -1) {
		int bit = id - 1000000000;
		if (bit != -1)
			((unsigned int *)((char *)this + 0x5c8c))[bit >> 5] &= ~(1 << (bit & 0x1f));
	}
}
// END FUNCTION

// FUNCTION: 0x1026a0b0 size=0x2b
#include <string.h>

struct CUnk1026a0b0
{
	char m_pad0000[0x5c74];
	int m_a5c74[6];
	int m_a5c8c[6];

	void sub_1026a0b0();
};

// TARGET: CUnk1026a0b0::sub_1026a0b0
void CUnk1026a0b0::sub_1026a0b0()
{
	if (m_a5c74 != 0)
		memset(m_a5c74, 0, sizeof(m_a5c74));
	if (m_a5c8c != 0)
		memset(m_a5c8c, 0, sizeof(m_a5c8c));
}
// END FUNCTION

// FUNCTION: 0x1026a0f0 size=0x143
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPC.h"
#include "ScopeTrace.h"

inline void *operator new(unsigned int, void *p) { return p; }

struct CNpcCondBits	// six dwords
{
	int m_d[6];

	CNpcCondBits()
	{
		for (int i = 0; i < 6; i++)
			m_d[i] = 0;
	}
};

struct CNpcCondSource	// the record the interrupt conditions are cached from
{
	CNpcCondBits m_bitsA;	// 0x00
	int m_pad18[4];
	CNpcCondBits m_bitsC;	// 0x28
};



struct CAI_BaseNPCUnit : CAI_BaseNPC
{
	void sub_1026a0f0();
	void sub_10269eb0(int condition);	// stub 0x100123f5
};

// TARGET: CAI_BaseNPCUnit::sub_1026a0f0
void CAI_BaseNPCUnit::sub_1026a0f0()
{
	char *pThis = (char *)this;
	ScopeTrace trace("CAI_BaseNPC::CacheInterruptConditions", this ? (*(const char **)(pThis + 0x26c) ? *(const char **)(pThis + 0x26c) : g_106b8540) : g_105387dc);
	CNpcCondSource *pSource = *(CNpcCondSource **)(pThis + 0x5c38);
	*(float *)(pThis + 0x1b24) = gpGlobals->curtime;
	if (!pSource)
	{
		new ((CNpcCondBits *)(pThis + 0x5c74)) CNpcCondBits;
		new ((CNpcCondBits *)(pThis + 0x5c8c)) CNpcCondBits;
		return;
	}
	CNpcCondBits *pA = (CNpcCondBits *)(pThis + 0x5c74);
	CNpcCondBits *pB = (CNpcCondBits *)(pThis + 0x5c8c);
	pA->m_d[0] = pSource->m_bitsC.m_d[0];
	pA->m_d[1] = pSource->m_bitsC.m_d[1];
	pA->m_d[2] = pSource->m_bitsC.m_d[2];
	pA->m_d[3] = pSource->m_bitsC.m_d[3];
	pA->m_d[4] = pSource->m_bitsC.m_d[4];
	pA->m_d[5] = pSource->m_bitsC.m_d[5];
	pB->m_d[0] = pSource->m_bitsA.m_d[0];
	pB->m_d[1] = pSource->m_bitsA.m_d[1];
	pB->m_d[2] = pSource->m_bitsA.m_d[2];
	pB->m_d[3] = pSource->m_bitsA.m_d[3];
	pB->m_d[4] = pSource->m_bitsA.m_d[4];
	pB->m_d[5] = pSource->m_bitsA.m_d[5];
	vfunc453();
	vfunc411();
	sub_10269eb0(0x75);
}
// END FUNCTION

// FUNCTION: 0x1026a2a0 size=0x10
struct CUnknown1026a2a0
{
	char pad_0000[0x5cdc];
	char *m_pSub5cdc;
	void sub_1026a2a0(int a);
};

// TARGET: CUnknown1026a2a0::sub_1026a2a0
void CUnknown1026a2a0::sub_1026a2a0(int a)
{
	*(int *)(m_pSub5cdc + 0x10) = a;
}
// END FUNCTION

// FUNCTION: 0x1026a2c0 size=0x280
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"
#include "CDevFlagObj.h"
#include "S1030fc90.h"
#include "CUnknown1017fd60.h"

extern void (*g_109f3658)(int level, const char *pMsg, ...);
extern CGlobalEntityList *g_10566458;
extern CDevFlagObj *g_10924a6c;

struct CAI_LookView : CAI_BaseNPC
{
	char m_pad0004[0x98 - 4];
	CAI_BaseNPCTroika *m_p98;
	char m_pad009c[0x1480 - 0x9c];
	char m_b1480;
	char m_pad1481[0x14bc - 0x1481];
	unsigned int m_f14bc;
	char m_pad14c0[0x5b68 - 0x14c0];
	unsigned int m_h5b68;
	unsigned int m_h5b6c;
	unsigned int m_h5b70;
	unsigned int m_h5b74;
	char m_pad5b78[0x5cdc - 0x5b78];
	S1030fc90 *m_pSenses;

	S1030fc90 *GetSenses() { return m_pSenses; }
	int sub_102707d0(void *pEnt);
};

struct CAI_LookEnt : CAI_BaseNPC
{
	char m_pad0004[0x9c - 4];
	int m_n9c;
	char m_pad00a0[0xa8 - 0xa0];
	int m_na8;
	char m_pad00ac[0x3d4 - 0xac];
	float m_vel3d4[3];
};

inline unsigned int EntHandle(CAI_LookEnt *p) { return *((CGlobalEntityList_Ent *)p)->v1(); }
inline CBaseEntity *LookupOwnerHandle(CGlobalEntityList *&pList, CAI_BaseNPCTroika *p)
{
	int tmp;
	const unsigned int *h = (const unsigned int *)p->vfunc586((int)&tmp);
	pList = g_10566458;
	return pList->sub_100290c0(h);
}
inline CBaseEntity *LookupOwnerHandle(CAI_BaseNPCTroika *p)
{
	int tmp;
	return g_10566458->sub_100290c0((const unsigned int *)p->vfunc586((int)&tmp));
}

void CAI_BaseNPC::vfunc469(int unused)
{
	static int conditionsToClear[] = { 0x43, 0x45, 0x46, 0x44, 0x5b, 0x5a };
	CAI_LookView *v = (CAI_LookView *)this;
	sub_10269bd0(conditionsToClear, 6);
	CAI_BaseNPCTroika *pObj = v->m_p98;
	CBaseEntity *pLeader = 0;
	if (pObj) {
		CGlobalEntityList *pList;
		if (LookupOwnerHandle(pList, pObj)) {
			pLeader = LookupOwnerHandle(pObj);
		} else if (*(unsigned int *)((char *)pObj + 0x14b8) & 0x400000) {
			pLeader = pList->sub_100290c0((const unsigned int *)((char *)pObj + 0x608c));
		}
	}
	int iter;
	CAI_LookEnt *pEnt = (CAI_LookEnt *)v->sub_102707d0((void *)v->GetSenses()->sub_1030fc90(&iter));
	while (pEnt) {
		if ((CBaseEntity *)pEnt != pLeader) {
			int relation = vfunc404((CBaseEntity *)pEnt);
			if (pEnt->m_na8) {
				g_10924a6c->vfunc1();
				sub_10269a20(0x5a);
				if (pEnt->m_n9c && v->m_b1480)
					((CUnknown1017fd60 *)pEnt->m_na8)->sub_1017ff40((CBaseEntity *)pObj, relation);
			}
			if (relation != 4) {
				if ((CBaseEntity *)pEnt == (CBaseEntity *)vfunc167()) {
					g_10924a6c->vfunc1();
					sub_10269a20(0x46);
				}
				switch (relation) {
				case 1:
					if ((v->m_f14bc & 0x10000) != 0x10000) {
						int priority = vfunc405((CBaseEntity *)pEnt);
						if (priority < 0) {
							v->m_h5b70 = EntHandle(pEnt);
							g_10924a6c->vfunc1();
							sub_10269a20(0x45);
						} else if (priority > 10) {
							v->m_h5b74 = EntHandle(pEnt);
							g_10924a6c->vfunc1();
							sub_10269a20(0x5b);
						} else {
							v->m_h5b68 = EntHandle(pEnt);
							g_10924a6c->vfunc1();
							sub_10269a20(0x43);
						}
						vfunc544((CBaseEntity *)pEnt, (int)pEnt->vfunc217(), (int)pEnt->m_vel3d4);
						break;
					}
				case 2:
					if ((v->m_f14bc & 0x10000) != 0x10000) {
						unsigned int *pHandle = &v->m_h5b6c;
						*pHandle = EntHandle(pEnt);
						vfunc544((CBaseEntity *)pEnt, (int)pEnt->vfunc217(), (int)pEnt->m_vel3d4);
						g_10924a6c->vfunc1();
						sub_10269a20(0x44);
					}
					break;
				case 3:
				case 4:
					break;
				default:
					g_109f3658(2, "%s can't assess %s\n", sub_1009f200(), ((CAI_BaseNPC *)pEnt)->sub_1009f200());
					break;
				}
			}
		}
		pEnt = (CAI_LookEnt *)v->GetSenses()->sub_1030fd20(&iter);
	}
}
// END FUNCTION

// FUNCTION: 0x1026a5e0 size=0x224
#include "CAI_BaseNPC.h"
#include "CAI_Senses.h"
#include "CAIPendingCondList.h"
#include "COutputEvent.h"
#include "CDevFlagObj.h"
#include "Tier1.h"

extern CDevFlagObj *g_10924a6c;
__declspec(dllimport) void DevMsg(const char *pMsg, ...);

struct CAI_NPCListenView : CAI_BaseNPC
{
	char m_pad0004[0x1ae0 - 4];
	CAIPendingCondList m_pending;
	char m_pad1b24[0x5ca8 - 0x1ae0 - sizeof(CAIPendingCondList)];
	int m_afSoundBits[6];
	char m_pad5cc0[0x5cdc - 0x5cc0];
	CAI_Senses *m_pSenses;
	char m_pad5ce0[0x5ee4 - 0x5ce0];
	COutputEvent m_OnHearWorld;
	COutputEvent m_OnHearPlayer;
	COutputEvent m_OnHearCombat;
};

void CAI_BaseNPC::vfunc470()
{
	static int s_Conditions[10] = { 106, 107, 108, 109, 110, 111, 112, 113, 114, 94 };
	CAI_NPCListenView *v = (CAI_NPCListenView *)this;
	sub_10269bd0(s_Conditions, 10);
	int *pBits = v->m_afSoundBits;
	if (pBits) {
		for (int i = 6; i != 0; i--)
			*pBits++ = 0;
	}
	int iter;
	CAI_SenseRecord *pRec = (CAI_SenseRecord *)v->m_pSenses->sub_10310440(&iter);
	while (pRec) {
		int cond = -1;
		if (pRec->sub_101b9920()) {
			switch (pRec->m_nType) {
			case 8: cond = 106; break;
			case 1: cond = 109; break;
			case 2: cond = 110; break;
			case 4: cond = 111; break;
			case 16: cond = 112; break;
			case 256: cond = 107; break;
			case 512: cond = 108; break;
			case 1024: cond = 113; break;
			case 2048: cond = 114; break;
			default:
				DevMsg("**ERROR: Monster %s hearing sound of unknown type %d!\n", sub_1009f200(), pRec->m_nType);
				break;
			}
		} else {
			cond = 94;
		}
		if (cond != -1) {
			float f;
			if (cond == 114)
				f = enginerandom->vfunc1(0, 0.5f);
			else
				f = vfunc471();
			g_10924a6c->vfunc1();
			v->m_pending.sub_102cc6c0(cond, f);
			v->m_afSoundBits[cond >> 5] |= 1 << (cond & 0x1f);
		}
		pRec = (CAI_SenseRecord *)v->m_pSenses->sub_10310480(&iter);
	}
	v->m_pending.sub_102cc760((CAI_BaseNPCCondTarget *)this);
	if (sub_10269aa0(110))
		v->m_OnHearWorld.sub_100cd660(this, this, 0);
	if (sub_10269aa0(111))
		v->m_OnHearPlayer.sub_100cd660(this, this, 0);
	if (sub_10269aa0(109) || sub_10269aa0(112) || sub_10269aa0(106))
		v->m_OnHearCombat.sub_100cd660(this, this, 0);
}
// END FUNCTION

// FUNCTION: 0x1026a8a0 size=0x16
#include "CAI_BaseNPC.h"
float CAI_BaseNPC::vfunc471()
{
	return enginerandom->vfunc1(0.2f, 0.9f);
}
// END FUNCTION

// FUNCTION: 0x1026a8d0 size=0x5
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
bool CAI_BaseNPC::vfunc566(CBaseEntity * a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1026a8f0 size=0x8
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc567
int CAI_BaseNPC::vfunc567(int unused)
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1026a910 size=0x9
#include "CAI_BaseNPC.h"
extern float g_104454c4;
float CAI_BaseNPC::vfunc568(int a) { return g_104454c4; }
// END FUNCTION

// FUNCTION: 0x1026a930 size=0x1a7
#include "CBaseEntity.h"
#include "CBaseGrenade.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CUnknown102e0150.h"
#include "CAI_BaseNPC.h"

struct CMemoryNodeView {
	char m_pad0000[0x24];
	EHANDLE m_hEnt;
	char m_pad0028[0x38 - 0x28];
	CMemoryNodeView *m_pNext;
};

CBaseEntity *CAI_BaseNPC::sub_1026a930()
{
	for (CMemoryNodeView *pNode = (CMemoryNodeView *)vfunc541()->m_pHead; pNode; pNode = pNode->m_pNext) {
		CBaseGrenade *pGrenade = dynamic_cast<CBaseGrenade *>(pNode->m_hEnt.Get());
		if (!pGrenade || pGrenade->m_field200 == 2)
			continue;
		if (!vfunc201(pGrenade, 0x2804091, 0, 0))
			continue;
		CEntityVSlots *pSlots = (CEntityVSlots *)pGrenade;
		Vector *pMine = (Vector *)vfunc217();
		Vector *pTheirs = pSlots->slot217();
		Vector vecDelta = *pTheirs - *pMine;
		if ((int)FastSqrt(vecDelta.x * vecDelta.x + (vecDelta.y * vecDelta.y + vecDelta.z * vecDelta.z)) <= 200)
			return pGrenade;
		Vector *pTheirs2 = pSlots->slot217();
		Vector *pMine2 = (Vector *)vfunc217();
		Vector vecToMe = *pMine2 - *pTheirs2;
		Vector vecVelocity;
		pSlots->slot199(&vecVelocity, 0);
		VectorNormalize(vecToMe);
		VectorNormalize(vecVelocity);
		if (DotProduct(vecToMe, vecVelocity) > 0.85)
			return pGrenade;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1026ab50 size=0x281
#include <math.h>
#include "UTIL_Trace.h"
#include "CAI_BaseNPC.h"

const Vector &sub_102d6120(int hull);	// NAI_Hull::Maxs
const Vector &sub_102d6100(int hull);	// NAI_Hull::Mins

inline float HullSqrt(float f)
{
	return (float)sqrt(f);
}

struct CHullRay
{
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_f34;

	__forceinline void Init(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs, bool a = true, char b = 0)
	{
		VectorSubtract(end, start, m_Delta);
		m_IsSwept = (m_Delta.LengthSqr() != 0.0f);
		VectorSubtract(maxs, mins, m_Extents);
		m_Extents *= 0.5f;
		m_IsRay = ((m_Extents.x * m_Extents.x + (m_Extents.y * m_Extents.y + m_Extents.z * m_Extents.z)) < 1e-6);
		VectorAdd(mins, maxs, m_StartOffset);
		m_StartOffset *= 0.5f;
		VectorAdd(start, m_StartOffset, m_Start);
		m_StartOffset *= -1.0f;
		m_b32 = b;
		m_b33 = 0;
		m_f34 = 0.0f;
		if (a && !m_IsRay) {
			float fl = HullSqrt(m_Extents.x * m_Extents.x + m_Extents.y * m_Extents.y);
			m_f34 = fl;
			if (m_f34 > 1e-6)
				m_b33 = 1;
		}
	}
};

inline void UTIL_TraceHullR(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr)
{
	CHullRay ray;
	ray.Init(vecAbsStart, vecAbsEnd, hullMin, hullMax);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4((Ray_t *)&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

void CAI_BaseNPC::sub_1026ab50()
{
	if (*((char *)this + 0x5f2d) && *((char *)this + 0x5f2c))
	{
		Vector vecEnd = *(Vector *)vfunc217();
		vecEnd.z += 1.0f;
		CGameTrace tr;
		UTIL_TraceHullR(*(Vector *)vfunc217(), vecEnd, sub_102d6100(*(int *)((char *)this + 0x1568)), sub_102d6120(*(int *)((char *)this + 0x1568)), 0x200400b, this, 0, &tr);
		if (!tr.m_startsolid && tr.m_fraction == 1.0)
			sub_10273070(0);
	}
}
// END FUNCTION

// FUNCTION: 0x1026ae90 size=0x6
int sub_1026ae90(void)
{
    return 7;
}
// END FUNCTION

// FUNCTION: 0x1026aeb0 size=0x21
#include "CSound.h"
#include "CAI_BaseNPC.h"
#include "CSoundEnt.h"

struct CEarView1026aeb0
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18)
	CAI_NPC_V(190) CAI_NPC_V(191) CAI_NPC_V(192) CAI_NPC_V(193) CAI_NPC_V(194) CAI_NPC_V(195)
	virtual Vector vfunc196();	// slot 196: the ear position, returned by value

	CSound *sub_1026aeb0(int iType);
};

// the sound of this type nearest the ear position (slot 196)
CSound *CEarView1026aeb0::sub_1026aeb0(int iType)
{
	return CSoundEnt::sub_101bb370(iType, &vfunc196());
}
// END FUNCTION

// FUNCTION: 0x1026aef0 size=0x26
#include "CAI_BaseNPC.h"
#include "CAI_Senses.h"

extern void (__cdecl *g_109f3630)(const char *fmt, ...);

struct CUnknown1026aef0View
{
	char m_pad0000[0x5cdc];
	CAI_Senses *m_pSenses;	// 0x5cdc
};

// TARGET: CAI_BaseNPC::vfunc474
void *CAI_BaseNPC::vfunc474()
{
	void *p = ((CUnknown1026aef0View *)this)->m_pSenses->sub_103104f0(0);
	if (p == 0)
		g_109f3630("Warning: NULL Return from GetBestSound\n");
	return p;
}
// END FUNCTION

// FUNCTION: 0x1026af30 size=0x26
#include "CAI_Senses.h"

extern void (__cdecl *g_109f3630)(const char *fmt, ...);

struct CUnknown1026af30View {
    char m_pad0000[0x5cdc];
    CAI_Senses *m_pSenses;	// 0x5cdc
};

// TARGET: sub_1026af30
void *__fastcall sub_1026af30(CUnknown1026af30View *self)
{
    void *p = self->m_pSenses->sub_103104f0(1);
    if (p == 0) {
        g_109f3630("Warning: NULL Return from GetBestScent\n");
    }
    return p;
}
// END FUNCTION

// FUNCTION: 0x1026af70 size=0x205
#include "vampire.h"
#include "CAI_BaseNPC.h"
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"
#include "Vector.h"
#include <math.h>

float sub_1013d580(float a, float b);

void CAI_BaseNPC::sub_1026af70(const float *pTargetPos, float flInterval)
{
	CBaseCombatCharacter *pThis = (CBaseCombatCharacter *)this;
	const Vector &vTargetPos = *(const Vector *)pTargetPos;

	if (!(vfunc513() & 0x1000))
		return;

	Vector vTargetDir = vTargetPos - *(const Vector *)vfunc220();
	float flTargetYaw = sub_1013d580(sub_1027db80(&vTargetDir), vfunc221()[1]);

	float iRate = 0.8f;
	float timeToUse = flInterval;
	while (timeToUse > 0.0f)
	{
		pThis->m_flHeadYaw = (iRate * pThis->m_flHeadYaw) + (1 - iRate) * flTargetYaw;
		timeToUse -= 0.1;
	}
	if (pThis->m_flHeadYaw > 360.0f)
		pThis->m_flHeadYaw = 0.0f;
	pThis->m_flHeadYaw = ((CBaseAnimating *)this)->sub_10095cb0(0, pThis->m_flHeadYaw);

	Vector vEyePosition = vfunc193();
	float dist = (vTargetPos - vEyePosition).Length();
	float flTargetPitch = -((float)atan((vTargetPos.z - vEyePosition.z) / dist) * 57.29578f);

	timeToUse = flInterval;
	while (timeToUse > 0.0f)
	{
		pThis->m_flHeadPitch = (iRate * pThis->m_flHeadPitch) + (1 - iRate) * flTargetPitch;
		timeToUse -= 0.1;
	}
	if (pThis->m_flHeadPitch > 360.0f)
		pThis->m_flHeadPitch = 0.0f;
	((CBaseAnimating *)this)->sub_10095cb0(1, pThis->m_flHeadPitch);
}
// END FUNCTION

// FUNCTION: 0x1026b210 size=0x14
#include "CAI_BaseNPC.h"

int CAI_BaseNPC::vfunc372(int a)
{
	vfunc370(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1026b240 size=0x14
#include "CAI_BaseNPC.h"

#define CVS(n) virtual void s##n();
#define CVS10(p) CVS(p##0) CVS(p##1) CVS(p##2) CVS(p##3) CVS(p##4) CVS(p##5) CVS(p##6) CVS(p##7) CVS(p##8) CVS(p##9)

struct CCBCSlots371
{
	CVS10(0) CVS10(1) CVS10(2) CVS10(3) CVS10(4) CVS10(5) CVS10(6) CVS10(7) CVS10(8) CVS10(9)
	CVS10(10) CVS10(11) CVS10(12) CVS10(13) CVS10(14) CVS10(15) CVS10(16) CVS10(17) CVS10(18) CVS10(19)
	CVS10(20) CVS10(21) CVS10(22) CVS10(23) CVS10(24) CVS10(25) CVS10(26) CVS10(27) CVS10(28) CVS10(29)
	CVS10(30) CVS10(31) CVS10(32) CVS10(33) CVS10(34) CVS10(35) CVS10(36)
	CVS(370)
	virtual void s371(int a);
};

int CAI_BaseNPC::vfunc373(int a)
{
	((CCBCSlots371 *)this)->s371(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1026b270 size=0x197
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"
#include "CBaseCombatCharacter.h"
#include "ehandle.h"
#include "CUnknown1070b244.h"

struct S1026b270Sphere
{
	int m_nIndex;
	int m_nCount;
	CBaseEntity *m_pList[256];
	S1026b270Sphere *sub_101cccf0(int a, int b, int c, int d);
};
CBaseEntity *__fastcall sub_101ccd40(S1026b270Sphere *p);

struct S1026b270Npc
{
	char m_pad0000[0xe64];
	EHANDLE m_hTarget;	// 0xe64
	char m_pad0e68[0x5d6c - 0xe68];
	float m_flNextCheck;	// 0x5d6c
};

extern CUnknown1070b244 *g_1070b244;

struct S1026b270Ent
{
	char m_pad0000[0x94];
	void *m_p94;
};

CBaseEntity *CAI_BaseNPC::vfunc534()
{
	S1026b270Npc *pNpc = (S1026b270Npc *)this;
	if (pNpc->m_flNextCheck < gpGlobals->curtime) {
		CBaseEntity *pBest = 0;
		float flBest = 16384.0f;
		S1026b270Sphere sphere;
		sphere.sub_101cccf0((int)((CEntityVSlots *)this)->slot217(), 0x44800000, 0, 0);
		for (CBaseEntity *pEnt = sub_101ccd40(&sphere); pEnt; pEnt = sub_101ccd40(&sphere)) {
			if (pEnt != (CBaseEntity *)this && (((S1026b270Ent *)pEnt)->m_p94 || (pEnt->sub_100b3700() & 0x80))) {
				Vector vec1;
				const Vector *pPos = ((CEntityVSlots *)pEnt)->slot193(&vec1);
				const Vector *pMine = ((CEntityVSlots *)this)->slot217();
				float dx = pMine->x - pPos->x;
				float dy = pMine->y - pPos->y;
				float dz = pMine->z - pPos->z;
				float flDist = FastSqrt(dy * dy + (dx * dx + dz * dz));
				if (flDist < flBest) {
					Vector vec2;
					if (((CBaseCombatCharacter *)this)->sub_10325da0(((CEntityVSlots *)pEnt)->slot193(&vec2))) {
						pBest = pEnt;
						flBest = flDist;
					}
				}
			}
			sphere.m_nIndex++;
		}
		if (pBest) {
			pNpc->m_flNextCheck = (float)g_1070b244->vfunc2(1, 5) + gpGlobals->curtime;
			pNpc->m_hTarget = pBest;
		}
	}
	return ((S1026b270Npc *)this)->m_hTarget.Get();
}
// END FUNCTION

// FUNCTION: 0x1026b480 size=0x4f
#include "CAI_BaseNPC.h"
void sub_10139970(const Vector *in, Vector *out);

void CAI_BaseNPC::vfunc539(const Vector *pDir)
{
    Vector ang;
    sub_10139970(pDir, &ang);
    vfunc345("aim_pitch", ang.x, 0);
    vfunc345("aim_yaw", ang.y, 0);
}
// END FUNCTION

// FUNCTION: 0x1026b4f0 size=0x6c
#include "CAI_BaseNPC.h"

#define V1(n) virtual void n();
#define V10(p) V1(p##0) V1(p##1) V1(p##2) V1(p##3) V1(p##4) V1(p##5) V1(p##6) V1(p##7) V1(p##8) V1(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct Vec3 { float x, y, z; };

struct NpcSlots {
    V100(a)
    V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6)
    V1(s0) V1(s1) V1(s2) V1(s3) V1(s4) V1(s5) V1(s6)
    virtual int vf167();
    V10(d1) V10(d2) V10(d3) V10(d4)
    V1(t0) V1(t1) V1(t2) V1(t3) V1(t4) V1(t5) V1(t6) V1(t7) V1(t8)
    virtual int vf217();
    V100(e)
    V10(f1) V10(f2) V10(f3) V10(f4) V10(f5) V10(f6) V10(f7)
    V1(u0)
    virtual Vec3 *vf389(Vec3 *out, int a);
    V100(g)
    V10(h1) V10(h2) V10(h3) V10(h4)
    V1(w0) V1(w1) V1(w2) V1(w3) V1(w4) V1(w5) V1(w6) V1(w7) V1(w8)
    virtual void vf539(Vec3 *p);
    V10(i1) V10(i2) V10(i3)
    V1(y0) V1(y1) V1(y2) V1(y3)
    virtual void vf574(Vec3 *out, Vec3 *v, int a, int b);
};

void CAI_BaseNPC::vfunc538()
{
    NpcSlots *w = (NpcSlots *)this;
    if (w->vf167()) {
        Vec3 t;
        Vec3 out;
        Vec3 c = *w->vf389(&out, w->vf217());
        w->vf574(&t, &c, 0, 0);
        w->vf539(&t);
    }
}
// END FUNCTION

// FUNCTION: 0x1026b580 size=0x1b0
#include "CWeaponThrown_Grenade_Frag.h"
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"
#include "QAngle.h"

void sub_10139970(const Vector &v, QAngle &a);
void sub_10139550(const QAngle &a, Vector *out);

// TARGET: CAI_BaseNPC::sub_1026b580
void CAI_BaseNPC::sub_1026b580(int nDir, Vector *pOut)
{
	Vector vA, vB;
	((CBaseCombatCharacter *)this)->sub_10331da0(&vA, &vB);
	QAngle ang;
	Vector v = *(Vector *)g_1070d9d0;
	sub_10139970(vB, ang);
	if (nDir == 1) { v.x = v.x + 20.0f; v.y = v.y + 20.0f; v.z = *(volatile float *)&v.z; }
	else if (nDir == 2) { v.x = v.x + 20.0f; v.y = *(volatile float *)&v.y; v.z = *(volatile float *)&v.z; }
	else if (nDir == 3) { v.x = v.x + 20.0f; v.y = v.y - 20.0f; v.z = *(volatile float *)&v.z; }
	else if (nDir == 4) { v.x = *(volatile float *)&v.x; v.y = v.y + 20.0f; v.z = *(volatile float *)&v.z; }
	else if (nDir == 5) { v.x = *(volatile float *)&v.x; v.y = *(volatile float *)&v.y; v.z = *(volatile float *)&v.z; }
	else if (nDir == 6) { v.x = *(volatile float *)&v.x; v.y = v.y - 20.0f; v.z = *(volatile float *)&v.z; }
	else if (nDir == 7) { v.x = v.x - 20.0f; v.y = v.y + 20.0f; v.z = *(volatile float *)&v.z; }
	else if (nDir == 8) { v.x = v.x - 20.0f; v.y = *(volatile float *)&v.y; v.z = *(volatile float *)&v.z; }
	else if (nDir == 9) { v.x = v.x - 20.0f; v.y = v.y - 20.0f; v.z = *(volatile float *)&v.z; }
	Vector fwd;
	sub_10139550(*(QAngle *)&v.sub_1026b7a0(*(Vector *)&ang), &fwd);
	pOut->sub_1003e4b0(vA.sub_1011e060(fwd.sub_100a19c0(25.0f)));
}
// END FUNCTION

// FUNCTION: 0x1026b7a0 size=0x43
#include "Vector.h"
Vector Vector::sub_1026b7a0(const Vector &v) const
{
	Vector res;
	VectorAdd(*this, v, res);
	return res;
}
// END FUNCTION

// FUNCTION: 0x1026b810 size=0x737
// TARGET: CAI_BaseNPC::vfunc333
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"
#include "CGlobalEntityList.h"

struct Holder;
extern CGlobalEntityList g_106eb5d8;
extern CGlobalEntityList *g_10566458;
extern float g_104454c4;

void *__fastcall sub_1017cf90(Holder *pHolder);

class CUnknown1006edb0
{
public:
	int sub_1006edb0();
};

#define VS(n) virtual void s##n();
#define VS10(p) VS(p##0) VS(p##1) VS(p##2) VS(p##3) VS(p##4) VS(p##5) VS(p##6) VS(p##7) VS(p##8) VS(p##9)
#define VS100(p) VS10(p##0) VS10(p##1) VS10(p##2) VS10(p##3) VS10(p##4) VS10(p##5) VS10(p##6) VS10(p##7) VS10(p##8) VS10(p##9)

class CSlotView333
{
public:
	VS100(0) VS10(10) VS10(11) VS10(12) VS10(13) VS10(14) VS10(15) VS10(16) VS10(17) VS10(18)
	VS(190) VS(191) VS(192)
	virtual Vector vfunc193();
	VS(194) VS(195) VS(196) VS(197) VS(198) VS(199)
	VS10(20) VS10(21)
	virtual const Vector &vfunc220();
	VS(221) VS(222) VS(223) VS(224) VS(225) VS(226) VS(227) VS(228) VS(229)
	VS10(23) VS10(24) VS10(25) VS10(26)
	VS(270) VS(271) VS(272) VS(273) VS(274) VS(275) VS(276)
	virtual void vfunc277(const Vector *pTarget);
	VS(278) VS(279)
	VS10(28) VS10(29) VS10(30) VS10(31) VS10(32) VS10(33) VS10(34) VS10(35)
	VS(360) VS(361) VS(362) VS(363) VS(364) VS(365) VS(366) VS(367)
	virtual Vector vfunc368();
	VS(369) VS(370) VS(371) VS(372) VS(373) VS(374) VS(375) VS(376) VS(377) VS(378) VS(379)
	VS10(38) VS10(39) VS10(40) VS10(41) VS10(42) VS10(43) VS10(44) VS10(45) VS10(46)
	VS(470) VS(471) VS(472) VS(473)
	virtual void *vfunc474();
	VS(475) VS(476) VS(477) VS(478) VS(479)
	VS10(48) VS10(49) VS10(50) VS10(51) VS10(52)
	VS(530) VS(531) VS(532) VS(533) VS(534) VS(535) VS(536)
	virtual void vfunc537(const Vector *pTarget, float flInterval);
};

class CNavView333
{
public:
	char m_pad00[0x18];
	int m_i18;
	void *sub_102ee5e0();
	bool sub_102ee6a0();
};

class CAI_BaseNPCV333 : public CBaseCombatCharacter
{
public:
	char m_pad19a8[0x5b94 - 0x19a8];
	int m_nEyeTarget;		// 0x5b94
	char m_pad5b98[0x5ce4 - 0x5b98];
	EHANDLE m_hTarget5ce4;		// 0x5ce4
	char m_pad5ce8[0x5d34 - 0x5ce8];
	CNavView333 *m_pNavigator;	// 0x5d34
	char m_pad5d38[0x5d6c - 0x5d38];
	float m_flNextEyeLook;		// 0x5d6c

	bool sub_10325da0(const Vector &vecTarget);
	void sub_10331da0(Vector *pA, Vector *pB);
	void sub_1026b580(int nEye, Vector *pOut);
};

void CAI_BaseNPC::vfunc333(float flInterval)
{
	CAI_BaseNPCV333 *p = (CAI_BaseNPCV333 *)this;
	CSlotView333 *slots = (CSlotView333 *)this;

	if (p->m_nEyeTarget > 0)
		goto END;

	{
		CBaseHandle *ph = (CBaseHandle *)&p->m_hDialogPartnerFE8;
		CGlobalEntityList *pList = g_10566458;
		CBaseEntity *pPartner;
		CBaseEntity *pOwner;
		if (pList->sub_100290c0((const unsigned int *)ph) != 0 &&
		    (pPartner = pList->sub_100290c0((const unsigned int *)ph)) != 0 &&
		    (pOwner = (CBaseEntity *)pPartner->m_pA8) != 0)
		{
			CBaseEntity *pLook = (CBaseEntity *)sub_1017cf90((Holder *)pOwner);
			if (pLook != 0 && (((CUnknown1006edb0 *)pLook)->sub_1006edb0() & 0x10))
			{
				if (p->sub_10325da0(((CSlotView333 *)pLook)->vfunc193()))
				{
					p->m_hEyeLookTarget = pLook;
					goto END;
				}
			}
			else
			{
				if (p->sub_10325da0(((CSlotView333 *)pOwner)->vfunc193()))
				{
					p->m_hEyeLookTarget = pOwner;
					goto END;
				}
			}
			pList = g_10566458;
		}

		ph = (CBaseHandle *)&p->m_hTarget5ce4;
		CBaseEntity *pTarget = (CBaseEntity *)pList->sub_100290c0((const unsigned int *)ph);
		if (pTarget != 0)
		{
			if (p->sub_10325da0(((CSlotView333 *)pList->sub_100290c0((const unsigned int *)ph))->vfunc193()))
			{
				p->m_hEyeLookTarget = p->m_hTarget5ce4;
				goto END;
			}
		}
	}

	if (vfunc167() != 0)
	{
		if (p->sub_10325da0(((CSlotView333 *)(CBaseEntity *)vfunc167())->vfunc193()))
		{
			p->m_hEyeLookTarget = (CBaseEntity *)vfunc167();
			goto END;
		}
	}

	if (p->m_pNavigator->sub_102ee6a0())
	{
		Vector vec = *(Vector *)p->m_pNavigator->sub_102ee5e0();
		if (p->m_pNavigator->m_i18 == 0)
			vec.z = vfunc193().z;
		if (p->sub_10325da0(vec))
		{
			slots->vfunc537(&vec, flInterval);
			slots->vfunc277(&vec);
			return;
		}
	}

	if ((sub_10269aa0(0x6d) && sub_10269c70(0x6d)) ||
	    (sub_10269aa0(0x6a) && sub_10269c70(0x6a)))
	{
		char *pObj = (char *)vfunc474();
		if (pObj != 0 && (*(int *)(pObj + 4) == 1 || *(int *)(pObj + 4) == 8))
		{
			Vector *pPosition = (Vector *)(pObj + 0x20);
			if (p->sub_10325da0(*pPosition))
			{
				slots->vfunc537(pPosition, flInterval);
				slots->vfunc277(pPosition);
				return;
			}
		}
	}

	if (p->m_flNextEyeLook > gpGlobals->curtime)
	{
		if (!p->sub_10325da0(p->m_vEyeLookTarget))
			p->m_flNextEyeLook = 0.0f;
	}

	if (p->m_flNextEyeLook < gpGlobals->curtime)
	{
		Vector vecLook = slots->vfunc368();
		CBaseEntity *pBest = 0;
		{
			float flClosest = 16384.0f;
			Vector vecSearch = vecLook * 300.0f + slots->vfunc193();

			for (CBaseEntity *pIter = g_106eb5d8.sub_100f79b0(0, (const float *)&vecSearch, 300.0f);
			     pIter != 0;
			     pIter = g_106eb5d8.sub_100f79b0(pIter, (const float *)&vecSearch, 300.0f))
			{
				if (pIter != (CBaseEntity *)this &&
				    (*(void **)((char *)pIter + 0x94) != 0 || (pIter->sub_100b3700() & 0x80)))
				{
					float flDist = (slots->vfunc220() - ((CSlotView333 *)pIter)->vfunc193()).Length();
					if (flDist < flClosest)
					{
						if (p->sub_10325da0(((CSlotView333 *)pIter)->vfunc193()))
						{
							pBest = pIter;
							flClosest = flDist;
						}
					}
				}
			}
		}

		p->m_hEyeLookTarget = pBest;

		if (p->m_hEyeLookTarget != 0)
		{
			p->m_flNextEyeLook = gpGlobals->curtime + enginerandom->vfunc2(1, 5);
		}
		else
		{
			p->m_vEyeLookTarget = vecLook * 500.0f + slots->vfunc193();
			p->m_flNextEyeLook = gpGlobals->curtime + 0.5;
		}
	}

END:
	if (p->m_hEyeLookTarget == (CBaseEntity *)this)
		p->m_hEyeLookTarget = 0;

	if (p->m_nEyeTarget > 0)
	{
		p->sub_1026b580(p->m_nEyeTarget, &p->m_vEyeLookTarget);
	}
	else if (p->m_hEyeLookTarget != 0)
	{
		p->m_vEyeLookTarget = ((CSlotView333 *)(CBaseEntity *)p->m_hEyeLookTarget)->vfunc193();
	}
	else
	{
		Vector v1, v2;
		p->sub_10331da0(&v1, &v2);
		p->m_vEyeLookTarget = v2 * 25.0f + v1;
	}

	slots->vfunc537(&p->m_vEyeLookTarget, flInterval);

	float flTime = flInterval;
	while (flTime > g_104454c4)
	{
		p->m_vCurEyeTarget = p->m_vCurEyeTarget * (1.0f - p->m_flEyeIntegRate) +
		                      p->m_vEyeLookTarget * p->m_flEyeIntegRate;
		flTime -= 0.1;
	}

	slots->vfunc277(&p->m_vCurEyeTarget);
}
// END FUNCTION

// FUNCTION: 0x1026c120 size=0x218
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CVProfile.h"

struct CCycleSampler
{
	unsigned __int64 m_Int64;
	void Sample()
	{
		unsigned long *pl = (unsigned long *)&m_Int64;
		__asm {
			mov ecx, pl
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void Add(CCycleSampler &other) { m_Int64 += other.m_Int64; }
};

struct CMotorSlots5d34
{
	virtual void slot0();
	virtual void slot1();
	virtual void slot2();
	virtual void slot3();
	virtual void slot4();
	virtual void slot5(int a, int b);
};

extern CCycleSampler g_1090ff58;

// TARGET: CAI_BaseNPC::sub_1026c120
void CAI_BaseNPC::sub_1026c120(int a, int b)
{
	CBaseEntity *pSelf = (CBaseEntity *)this;
	ScopeTrace trace("CAI_BaseNPC::PerformMovement", pSelf ? (pSelf->m_name26c ? pSelf->m_name26c : g_106b8540) : g_105387dc);
	CVProfile *pProf = g_109f3648;
	if (pProf->m_enabled || !pProf->m_bAtRoot) {
		if (pProf->m_pCurNode->m_pszName != "CAI_BaseNPC_PerformMovement")
			pProf->m_pCurNode = pProf->m_pCurNode->GetSubNode("CAI_BaseNPC_PerformMovement", 0, "Unaccounted");
		CVProfNode *pNode = pProf->m_pCurNode;
		pNode->m_nCurFrameCalls++;
		if (pNode->m_nRecursions++ == 0) {
			((CCycleSampler *)&pNode->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(pNode->m_nBudgetGroupID);
		}
		pProf->m_bAtRoot = false;
	}
	g_1090ff58.Sample();
	(*(CMotorSlots5d34 **)((char *)this + 0x5d34))->slot5(a, b);
	{
		CCycleSampler tmp;
		tmp.m_Int64 = 0;
		tmp.Sample();
		g_1090ff58.m_Int64 = tmp.m_Int64 - g_1090ff58.m_Int64;
	}
	CVProfile *pProf2 = g_109f3648;
	if (!pProf2->m_bAtRoot || pProf2->m_enabled) {
		CVProfNode *pNode = pProf2->m_pCurNode;
		if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0) {
			CCycleSampler tmp2;
			tmp2.m_Int64 = 0;
			tmp2.Sample();
			pNode->m_CurFrameTime.m_Int64 = tmp2.m_Int64 - pNode->m_CurFrameTime.m_Int64;
			((CCycleSampler *)&pNode->m_TotalTime)->Add(*(CCycleSampler *)&pNode->m_CurFrameTime);
			g_109f3648->PopGroup();
		}
		if (pNode->m_nRecursions == 0)
			pProf2->m_pCurNode = pProf2->m_pCurNode->m_pParent;
		pProf2->m_bAtRoot = (pProf2->m_pCurNode == pProf2->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x1026c3d0 size=0x11f
#include "CAI_BaseNPC.h"

extern unsigned char g_1092053c;
extern char g_1093408c;
extern int g_105c9798;
extern float g_10920550;
extern const float g_10454110;

struct CAI_BaseNPCNavX { bool sub_102ee6a0(); };

struct CTextParamsX
{
	float x, y;
	int effect;
	unsigned char r, g, b, a, r2, g2, b2, a2;
	float fadein, fadeout, hold, fx;
	int channel;
};
void sub_101ce3d0(CTextParamsX *p, const char *text);

#define S1(n) virtual void s##n();
#define S10(p) S1(p##0) S1(p##1) S1(p##2) S1(p##3) S1(p##4) S1(p##5) S1(p##6) S1(p##7) S1(p##8) S1(p##9)
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CAI_BaseNPCSlot310
{
	S1(0) S1(1) S1(2) S1(3) S1(4) S1(5) S1(6) S1(7) S1(8) S1(9)
	S10(1) S10(2) S10(3) S10(4) S10(5) S10(6) S10(7) S10(8) S10(9)
	S100(1) S100(2)
	S10(30)
	virtual void s310(int a);
};

// TARGET: sub_1026c3d0
bool __fastcall sub_1026c3d0(CAI_BaseNPC *p)
{
	unsigned char f = g_1092053c;
	if (!(f & 1)) {
		if (g_1093408c) {
			if (f & 2) {
				if (*(int *)((char *)p + 0x5f40) >= g_105c9798) {
					if (!(*(CAI_BaseNPCNavX **)((char *)p + 0x5d34))->sub_102ee6a0()) {
						*(float *)((char *)p + 0x6f4) = 0.0f;
						return false;
					}
					return false;
				}
				*(float *)((char *)p + 0x6f4) = 1.0f;
			}
			return true;
		}
	} else {
		if (g_1093408c)
			goto call;
	}
	if (gpGlobals->curtime >= g_10920550) {
		float flNext = gpGlobals->curtime;
		flNext += g_10454110;
		CTextParamsX t;
		t.x = 0.7f;
		t.y = 0.65f;
		g_10920550 = flNext;
		t.effect = 0;
		t.r = 255; t.g = 255; t.b = 255; t.a = 255;
		t.r2 = 255; t.g2 = 255; t.b2 = 255; t.a2 = 255;
		t.fadein = 0.0f;
		t.fadeout = 0.0f;
		t.hold = 5.1f;
		t.fx = 0.0f;
		t.channel = 1;
		sub_101ce3d0(&t, "A.I. Disabled...\n");
	}
call:
	((CAI_BaseNPCSlot310 *)p)->s310(1);
	return false;
}
// END FUNCTION

// FUNCTION: 0x1026c540 size=0x1f2
#include "CAI_BaseNPC.h"
#include "CAI_Navigator.h"
#include "CVProfile.h"

__declspec(dllimport) void vtune(bool bEnable);
extern unsigned char g_1092053c;

struct CCycleView
{
	unsigned __int64 m_Int64;

	CCycleView &operator+=(const CCycleView &rhs)
	{
		m_Int64 += rhs.m_Int64;
		return *this;
	}
};

struct CVNodeView
{
	const char *m_pszName;	// 0x00
	char m_pad0004[4];
	CCycleView m_CurFrameTime;	// 0x08
	int m_nRecursions;	// 0x10
	int m_nCurFrameCalls;	// 0x14
	CCycleView m_TotalTime;	// 0x18
	char m_pad0020[0x48 - 0x20];
	CVNodeView *m_pParent;	// 0x48
	char m_pad004c[0x54 - 0x4c];
	int m_nBudgetGroupID;	// 0x54
};

struct CVProfView
{
	bool m_bVTuneGroupEnabled;	// 0x00
	char m_pad0001[3];
	int m_nVTuneGroupID;	// 0x04
	int m_GroupIDStack[1024];	// 0x08
	int m_nGroupIDStackPtr;	// 0x1008
	int m_enabled;	// 0x100c
	bool m_bAtRoot;	// 0x1010
	char m_pad1011[3];
	CVNodeView *m_pCurNode;	// 0x1014
	CVNodeView *m_pRoot;	// 0x1018
};

struct CRunAnimView
{
	char m_pad0000[0x65d];
	char m_bFlag65d;
	char m_pad65e[0xfec - 0x65e];
	int m_nActivity;	// 0xfec
	char m_pad0ff0[4];
	int m_nSeq;	// 0xff4
	char m_pad0ff8[0x5cc0 - 0xff8];
	int m_nState;	// 0x5cc0
	char m_pad5cc4[0x5d34 - 0x5cc4];
	CAI_Navigator *m_pNavigator;	// 0x5d34
};

// TARGET: CAI_BaseNPC::sub_1026c540
float CAI_BaseNPC::sub_1026c540()
{
	CRunAnimView *pNpc = (CRunAnimView *)this;
	CVProfView *pProf = (CVProfView *)g_109f3648;
	if (pProf->m_enabled || !pProf->m_bAtRoot) {
		if (pProf->m_pCurNode->m_pszName != "CAI_BaseNPC_RunAnimation")
			pProf->m_pCurNode = (CVNodeView *)((CVProfNode *)pProf->m_pCurNode)->GetSubNode("CAI_BaseNPC_RunAnimation", 0, "Unaccounted");
		((CVProfNode *)pProf->m_pCurNode)->EnterScope();
		pProf->m_bAtRoot = false;
	}
	float flInterval = vfunc250(0);
	if (g_1092053c & 2) {
		if (!pNpc->m_pNavigator->sub_102ee6a0())
			flInterval = 0;
	}
	if (vfunc513() & 0x20000000)
		vfunc538();
	if (pNpc->m_nState != 4 && pNpc->m_nState != 7 && pNpc->m_nActivity == 1 && vfunc251()) {
		int nSeq;
		if (pNpc->m_bFlag65d) {
			int nAct = pNpc->m_nSeq;
			nSeq = sub_1008dc40(nAct, -1);
		} else {
			int nAct = pNpc->m_nSeq;
			nSeq = sub_1008dd30(nAct, -1);
		}
		if (-1 != nSeq)
			sub_10260a50(nSeq);
	}
	CVProfView *pEnd = (CVProfView *)g_109f3648;
	if (!pEnd->m_bAtRoot || pEnd->m_enabled) {
		CVNodeView *pNode = pEnd->m_pCurNode;
		if (--pNode->m_nRecursions == 0 && 0 != pNode->m_nCurFrameCalls) {
			CCycleView cnt;
			cnt.m_Int64 = 0;
			unsigned long *pSamplev = (unsigned long *)&cnt;
			__asm {
				mov ecx, pSamplev
				rdtsc
				mov [ecx], eax
				mov [ecx+4], edx
			}
			pNode->m_CurFrameTime.m_Int64 = cnt.m_Int64 - pNode->m_CurFrameTime.m_Int64;
			pNode->m_TotalTime += pNode->m_CurFrameTime;
			CVProfView *pCur = (CVProfView *)g_109f3648;
			pCur->m_nGroupIDStackPtr -= 1;
			int nPopped = (int)(1 + pCur->m_nGroupIDStackPtr)[pCur->m_GroupIDStack];
			if (pCur->m_GroupIDStack[pCur->m_nGroupIDStackPtr] != nPopped && pCur->m_bVTuneGroupEnabled && nPopped == pCur->m_nVTuneGroupID)
				vtune(false);
		}
		if (pNode->m_nRecursions == 0)
			pEnd->m_pCurNode = pEnd->m_pCurNode->m_pParent;
		pEnd->m_bAtRoot = (pEnd->m_pCurNode == pEnd->m_pRoot);
	}
	return flInterval;
}
// END FUNCTION

// FUNCTION: 0x1026c7c0 size=0x228
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPC.h"
#include "CVProfile.h"
#include "ScopeTrace.h"

struct CCycleSampler
{
	unsigned __int64 m_Int64;
	void Sample() { __asm { mov ecx, this
		rdtsc
		mov [ecx], eax
		mov [ecx+4], edx } }
	void End()
	{
		CCycleSampler e;
		e.m_Int64 = 0;
		e.Sample();
		m_Int64 = e.m_Int64 - m_Int64;
	}
};
extern CCycleSampler g_1090ff00;

struct CVProfNodeX : CVProfNode
{
	bool ExitScopeX()
	{
		if (--m_nRecursions == 0 && m_nCurFrameCalls != 0) {
			CCycleSampler *pc = (CCycleSampler *)&m_CurFrameTime;
			pc->End();
			m_TotalTime += pc->m_Int64;
			g_109f3648->PopGroup();
		}
		return m_nRecursions == 0;
	}
};
struct CVProfileX : CVProfile
{
	void ExitScopeX()
	{
		if (!m_bAtRoot || m_enabled) {
			if (((CVProfNodeX *)m_pCurNode)->ExitScopeX())
				m_pCurNode = m_pCurNode->m_pParent;
			m_bAtRoot = (m_pCurNode == m_pRoot);
		}
	}
};

float CAI_BaseNPC::sub_1026c7c0()
{
	float flAdvance;
	{
	ScopeTrace trace("CAI_BaseNPC::PostRun", this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc);
	CVProfile *pProf = g_109f3648;
	if (pProf->m_enabled || !pProf->m_bAtRoot) {
		if (pProf->m_pCurNode->m_pszName != "CAI_BaseNPC_PostRun")
			pProf->m_pCurNode = pProf->m_pCurNode->GetSubNode("CAI_BaseNPC_PostRun", 0, "Unaccounted");
		CVProfNode *pNode = pProf->m_pCurNode;
		pNode->m_nCurFrameCalls++;
		if (pNode->m_nRecursions++ == 0) {
			((CCycleSampler *)&pNode->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(pNode->m_nBudgetGroupID);
		}
		pProf->m_bAtRoot = false;
	}
	CCycleSampler *pg = &g_1090ff00;
	pg->Sample();
	flAdvance = sub_1026c540();
	vfunc258(flAdvance, this);
	sub_1032aa40();
	g_1090ff00.End();
	((CVProfileX *)g_109f3648)->ExitScopeX();
	}
	return flAdvance;
}
// END FUNCTION

// FUNCTION: 0x1026ca80 size=0x283
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CVProfile.h"
#include "ScopeTrace.h"
#include "globalvars.h"

struct NpcThinkView {
	char m_pad0000[0x17c];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x26c - 0x180];
	const char *m_name26c;	// 0x26c
	char m_pad0270[0x1538 - 0x270];
	EHANDLE m_hTarget1538;	// 0x1538
	int m_nTarget153c;	// 0x153c
};
struct NpcThinkCycle {
	unsigned __int64 m_Int64;
	NpcThinkCycle() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End()
	{
		NpcThinkCycle Temp;
		Temp.Sample();
		m_Int64 = Temp.m_Int64 - m_Int64;
	}
};
struct CAI_BaseNPCUnit {
	void sub_1026a0f0();
};
void __fastcall sub_1027efb0(CAI_BaseNPC *pNPC);
char __fastcall sub_1026c3d0(CAI_BaseNPC *pNPC);
extern int g_10934088;

// TARGET: CAI_BaseNPC::vfunc431
void CAI_BaseNPC::vfunc431()
{
	NpcThinkView *pView = (NpcThinkView *)this;
	ScopeTrace trace("CAI_BaseNPC::NPCThink", this ? (pView->m_name26c ? pView->m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	char *pFlag = (char *)this + 0x5b55;
	if (*pFlag) {
		*pFlag = 0;
		sub_1027efb0(this);
	}
	((CAI_BaseNPCUnit *)this)->sub_1026a0f0();
	pView->m_flNextThink = (float)(gpGlobals->curtime + 0.1);
	char *pGlobal = *(char **)&g_10934088;
	if (pGlobal && pGlobal[0x658]) {
		CVProfile *pProf = g_109f3648;
		if (pProf->m_enabled || !pProf->m_bAtRoot) {
			if (pProf->m_pCurNode->m_pszName != "CAI_BaseNPC_NPCThink")
				pProf->m_pCurNode = pProf->m_pCurNode->GetSubNode("CAI_BaseNPC_NPCThink", 0, "Unaccounted");
			pProf->m_pCurNode->EnterScope();
			pProf->m_bAtRoot = false;
		}
		if (!sub_1026c3d0(this)) {
			g_109f3648->ExitScope();
			return;
		}
		if (!pView->m_hTarget1538.Get() || pView->m_nTarget153c != 1)
			vfunc432(0);
		float flAdvance = sub_1026c7c0();
		sub_1026c120(*(int *)&flAdvance, 0);
		CVProfile *pProf2 = g_109f3648;
		if (!pProf2->m_bAtRoot || pProf2->m_enabled) {
			CVProfNode *pNode = pProf2->m_pCurNode;
			if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0) {
				((NpcThinkCycle *)&pNode->m_CurFrameTime)->End();
				pNode->m_TotalTime += pNode->m_CurFrameTime.m_Int64;
				g_109f3648->PopGroup();
			}
			if (pNode->m_nRecursions == 0)
				pProf2->m_pCurNode = pProf2->m_pCurNode->m_pParent;
			pProf2->m_bAtRoot = (pProf2->m_pCurNode == pProf2->m_pRoot);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1026cdc0 size=0x47
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
struct CAI_Container5bd8 { void sub_100cd660(CBaseEntity *pEnt, CAI_BaseNPC *pOwner, int a); };
bool CAI_BaseNPC::vfunc379(CBaseEntity *pEnt, int b, int c, int d, int e, int f, int g)
{
    sub_1026d130();
    ((CAI_Container5bd8 *)((char *)this + 0x5bd8))->sub_100cd660(pEnt, this, 0);
    return sub_10329760(pEnt, b, c, d, e, f, g);
}
// END FUNCTION

// FUNCTION: 0x1026ce30 size=0x64
#include "CAI_BaseNPC.h"
#include "CCineNPC.h"
#include "CBaseEntity.h"
#include "ehandle.h"

struct NPCHandle1538View {
	char m_pad0000[0x1538];
	EHANDLE m_h1538;	// 0x1538
	int m_n153c;	// 0x153c
	char m_pad1540[0x5bf0 - 0x1540];
	CCineNPCSlot m_slot5bf0;	// 0x5bf0
};

void CAI_BaseNPC::vfunc380()
{
	NPCHandle1538View *pView = (NPCHandle1538View *)this;
	pView->m_slot5bf0.sub_100cd660((pView->m_n153c != -1) ? pView->m_h1538.Get() : 0, (CCineNPC *)this, 0);
	sub_10005d94();
	vfunc416(0);
	sub_10007ea0();
}
// END FUNCTION

// FUNCTION: 0x1026cec0 size=0x9c
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"

struct COutX5c08
{
	void sub_10010794(CBaseEntity *pEnt, CAI_BaseNPC *pNpc, int a);
};

struct CAI_BaseNPCX354 : CAI_BaseNPC
{
	char m_pad0004[0x1538 - 4];
	EHANDLE m_hTarget;
	int m_iKind;
	int m_iMode;
	char m_pad1544[0x5c08 - 0x1544];
	COutX5c08 m_Output;
	void sub_1026d130();
	CBaseEntity *GetTarget() { return m_hTarget; }
};

// TARGET: CAI_BaseNPC::vfunc354
void CAI_BaseNPC::vfunc354()
{
	CAI_BaseNPCX354 *p = (CAI_BaseNPCX354 *)this;
	p->sub_1026d130();
	if (p->GetTarget() && p->m_iKind != -1 && p->m_iMode == 8)
		return;
	if ((char)(int)EHandleDetail::g_10566458 == -1) p->m_Output.sub_10010794(p->m_iKind != -1 ? p->GetTarget() : 0, p, 0);
	else p->m_Output.sub_10010794(p->m_iKind != -1 ? p->GetTarget() : 0, p, 0);
}
// END FUNCTION

// FUNCTION: 0x1026cf90 size=0x8f
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"

struct COutputEvent355
{
	char m_data[0x1c];
	void sub_100cd660(CBaseEntity *pActivator, CAI_BaseNPC *pCaller, int delay);
};

struct CAI_BaseNPCView355 : CAI_BaseNPC
{
	char m_pad0004[0x1538 - 4];
	EHANDLE m_h1538;
	int m_n153c;
	int m_nTargetMode1540;
	char m_pad1544[0x5c20 - 0x1544];
	COutputEvent355 m_Output5c20;
	bool sub_1026d160();
};

// TARGET: CAI_BaseNPC::vfunc355
bool CAI_BaseNPC::vfunc355()
{
	CAI_BaseNPCView355 *p = (CAI_BaseNPCView355 *)this;
	if (!p->m_h1538 || p->m_n153c == -1 || p->m_nTargetMode1540 != 8)
	{
		if ((char)(int)EHandleDetail::g_10566458 == -1) p->m_Output5c20.sub_100cd660(p->m_n153c != -1 ? p->m_h1538.Get() : 0, this, 0);
		else p->m_Output5c20.sub_100cd660(p->m_n153c != -1 ? p->m_h1538.Get() : 0, this, 0);
	}
	return p->sub_1026d160();
}
// END FUNCTION

// FUNCTION: 0x1026d050 size=0x4f
struct SSquadView { void sub_10316700(void *pNPC); };
struct SDbgSink { void sub_102dfc10(const char *); };
extern SDbgSink *g_109203f0;
char *__cdecl sub_101d3730(const char *, const char *, int);

struct SNpcView5bb0 {
    char pad[0x5bb0];
    int m_n5bb0;
    char pad2[0x5da4 - 0x5bb4];
    void *m_p5da4;
    void sub_1026d050();
};

// TARGET: SNpcView5bb0::sub_1026d050
void SNpcView5bb0::sub_1026d050()
{
    if (m_n5bb0 <= 0) {
        SSquadView *pSquad = *(SSquadView **)&m_p5da4;
        if (pSquad)
            pSquad->sub_10316700(this);
        g_109203f0->sub_102dfc10(sub_101d3730("%s(%d) :", "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp", 0xf36));
    }
    ++m_n5bb0;
}
// END FUNCTION

// FUNCTION: 0x1026d0c0 size=0x43
struct Helper { void sub_1000a8a8(void*); };
// TARGET: sub_1026d0c0
void __fastcall sub_1026d0c0(char* p)
{
	if (--*(int*)(p + 0x5bb0) <= 0) {
		Helper* h = *(Helper**)(p + 0x5da4);
		if (h)
			h->sub_1000a8a8(p);
		*(int*)(p + 0x5bb0) = 0;
	}
	*(unsigned int*)(p + 0x14bc) &= 0x7f7fffff;
}
// END FUNCTION

// FUNCTION: 0x1026d130 size=0x20
#include "vampire.h"
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::sub_1026d130
void CAI_BaseNPC::sub_1026d130()
{
    sub_10279a50(0);
    sub_1026d050();
    (*(int *)((char *)this + 0x5bb4))++;
}
// END FUNCTION

// FUNCTION: 0x1026d160 size=0x1e
struct CUnk1026d160 {
	char m_pad0000[0x5bb4];
	int m_5bb4;
	void sub_1026d160();
	void sub_1026d0c0();
};

// TARGET: CUnk1026d160::sub_1026d160
void CUnk1026d160::sub_1026d160()
{
	m_5bb4--;
	if (m_5bb4 < 0)
	{
		m_5bb4 = 0;
	}
	sub_1026d0c0();
}
// END FUNCTION

// FUNCTION: 0x1026d190 size=0xa
#include "ConVar.h"
ConVar g_10920440("footstep_normal_vol", "0.5", 128);
// END FUNCTION

// FUNCTION: 0x1026d220 size=0xa
#include "ConVar.h"
ConVar g_10920280("footstep_normal_dist", "256", 128);
// END FUNCTION

// FUNCTION: 0x1026d2b0 size=0xa
#include "ConVar.h"
ConVar g_10920160("footstep_heavy_vol", "0.85", 128);
// END FUNCTION

// FUNCTION: 0x1026d340 size=0xa
#include "ConVar.h"
ConVar g_109204a8("footstep_heavy_dist", "512", 128);
// END FUNCTION

// FUNCTION: 0x1026d3d0 size=0xa
#include "ConVar.h"
ConVar g_109203f8("footstep_npc_use_templates", "1", 0);
// END FUNCTION

// FUNCTION: 0x1026d460 size=0x29c
#include "utlrbtree.h"
#include "CAI_BaseNPC.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1017d630.h"
#include "CUnknown1017d680.h"
#include "ConVar.h"
#include "engineserver.h"
#include "engineiface.h"

struct SurfData { char pad[0x24]; float f24; float f28; float f2c; float f30; };
struct SurfLookup { SurfData *sub_10207c40(void *pNpc); };
struct SndRec { char pad[0x2c]; unsigned short s2c; unsigned short s2e; };
struct SndTable { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual const char *vfunc6(int idx); };
struct NpcView : public CEntitySoundOriginView {
	char pad1[0x2e0 - 4];
	int m_pEdict2e0;
	char pad2[0x5b90 - 0x2e4];
	SndRec *m_pSnd5b90;
};

extern void *sub_101cda50();
extern int __fastcall sub_1017cf90(void *p);
extern SurfLookup g_1074f028;
extern ConVar g_109203f8;
extern ConVar g_10920160;
extern ConVar g_109204a8;
extern ConVar g_10920440;
extern ConVar g_10920280;
extern SndTable *g_10723944;
extern int sub_10228350(float a);

static inline int CvI(ConVar &c) { if (c.m_pParent->vfunc1()) return 0; ConVar *p = c.m_pParent; int v = p->m_nValue; if (*(short *)&p == -1) return v; return v; }

static inline void GetStepSoundParams(SurfData *pData, int nSide, float &flVolume, float &flLevel)
{
	if (CvI(g_109203f8) != 0) {
		switch (nSide) {
		case 0:
			flVolume = pData->f24;
			flLevel = pData->f28;
			break;
		case 1:
			flVolume = pData->f2c;
			flLevel = pData->f30;
			break;
		default:
			__assume(0);
		}
	} else {
		switch (nSide) {
		case 0:
			flVolume = g_10920440.GetFloat();
			flLevel = g_10920280.GetFloat();
			break;
		case 1:
			flVolume = g_10920160.GetFloat();
			flLevel = g_109204a8.GetFloat();
			break;
		default:
			__assume(0);
		}
	}
}

void CAI_BaseNPC::sub_1026d460(int nSide)
{
	NpcView *self = (NpcView *)this;
	void *pPlayer = sub_101cda50();
	if (pPlayer) {
		if (((CUnknown1017d630 *)pPlayer)->sub_1017d630() || ((CUnknown1017d680 *)pPlayer)->sub_1017d680() || sub_1017cf90(pPlayer))
			return;
	}
	SurfData *pData = g_1074f028.sub_10207c40(this);
	float flVolume;
	float flLevel;
	GetStepSoundParams(pData, nSide, flVolume, flLevel);
	if (g_10723944 && self->m_pSnd5b90) {
		int nLevel = sub_10228350(flLevel);
		CPASAttenuationFilter filter(self, (soundlevel_t)nLevel);
		int nIndex;
		if (enginerandom->vfunc2(0, 1))
			nIndex = self->m_pSnd5b90->s2c;
		else
			nIndex = self->m_pSnd5b90->s2e;
		const char *pszName = g_10723944->vfunc6(nIndex);
		if (pszName && *pszName) {
			int edict = self->m_pEdict2e0;
			enginesound->vfunc2(&filter, engine->vfunc35(edict), 4, pszName, flVolume, nLevel, 0, 100, 0, 0, 1, 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1026d7b0 size=0x21
namespace lifted {
extern char g_105cb988;
}
struct CUnknown1026d7b0 { void sub_1026d7b0(int, int, int, int); };
void CUnknown1026d7b0::sub_1026d7b0(int a0, int a1, int a2, int a3)
{
    *(int *)((char *)this + 0x1b3c) = (int)&lifted::g_105cb988;
    *(int *)((char *)this + 0x1b40) = 0xffc;
    *(int *)((char *)this + 0x5cc4) = 3;
}
// END FUNCTION

// FUNCTION: 0x1026d7f0 size=0x75
#include "CAI_BaseNPC.h"
struct SHandleEntry { void *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct SEnt459 {
    V100(a) V100(b) V100(c) V100(d)
    V10(e0) V10(e1) V10(e2) V10(e3) V10(e4)
    virtual void e50(); virtual void e51(); virtual void e52(); virtual void e53(); virtual void e54();
    virtual void e55(); virtual void e56(); virtual void e57(); virtual void e58();
    virtual void v459();
};

static inline SEnt459 *GetEnt(unsigned h)
{
    SEnt459 *ent;
    if (h == 0xffffffff)
        ent = 0;
    else {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        ent = (he->serial == (h >> 13)) ? (SEnt459 *)he->p : 0;
    }
    return ent;
}

void CAI_BaseNPC::vfunc459()
{
    unsigned *ph = (unsigned *)((char *)this + 0x5d74);
    if (*(int *)((char *)this + 0x5cc0) == 4 && GetEnt(*ph) != 0)
        GetEnt(*(volatile unsigned *)ph)->v459();
}
// END FUNCTION

// FUNCTION: 0x1026d890 size=0x6b
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc553
int CAI_BaseNPC::vfunc553(float a, float b)
{
    if (b < 100.0f)
        return 8;
    if (b < 200.0f)
        return 0x5f;
    if (b > 1024.0f)
        return 0x60;
    return a < 0.5 ? 0x61 : 0x4f;
}
// END FUNCTION

// FUNCTION: 0x1026d920 size=0x52
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc554
int CAI_BaseNPC::vfunc554(float a, float b)
{
	if (b < 64.0f)
		return 8;
	if (b > 512.0f)
		return 0x60;
	if (a < 0.5)
		return 0x61;
	return 0x50;
}
// END FUNCTION

// FUNCTION: 0x1026d9a0 size=0xb7
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"

#define SV1(n) virtual void f##n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct S555Focus
{
	SV100(a) SV100(b) SV100(c)
	SV10(d) SV10(e)
	SV1(f0) SV1(f1) SV1(f2) SV1(f3) SV1(f4) SV1(f5) SV1(f6)
	virtual bool Check();
};

struct S555Owner
{
	char pad[0x9c];
	S555Focus *pFocus;
};

int CAI_BaseNPC::vfunc555(float a, float b)
{
	S555Owner *pOwner = (S555Owner *)vfunc167();
	S555Focus *pFocus;
	if (pOwner == 0)
		pFocus = 0;
	else
		pFocus = pOwner->pFocus;
	if (b > 256.0f)
		return 9;
	if (b > 64.0f)
		return 0x60;
	if (a < 0.7)
		return 0;
	CBaseEntity *pEnt = (CBaseEntity *)vfunc167();
	if (!pEnt)
		return 0;
	if (pFocus && !pFocus->Check())
		return 0;
	pEnt = (CBaseEntity *)vfunc167();
	if (pEnt->sub_100b3700() & 1)
		return 0x51;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1026da90 size=0x7f
#include "CAI_BaseNPC.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CSlot327View
{
	SV100(a) SV100(b) SV100(c) SV10(d0) SV10(d1)
	SV(d20) SV(d21) SV(d22) SV(d23) SV(d24) SV(d25) SV(d26)
	virtual char s327();
};

// TARGET: CAI_BaseNPC::vfunc556
int CAI_BaseNPC::vfunc556(float a, float b)
{
    int pFocus = vfunc167();
    CSlot327View *pObj;
    if (pFocus == 0)
        pObj = 0;
    else
        pObj = *(CSlot327View **)(pFocus + 0x9c);
    if (b > 180.0f)
        return 9;
    if (b > 64.0f)
        return 0x60;
    if (a < 0.7)
        return 0;
    if (pObj) {
        if (!pObj->s327())
            return 0;
    }
    return 0x52;
}
// END FUNCTION

// FUNCTION: 0x1026db30 size=0x9e
#include "CAI_BaseNPC.h"
struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

#define WL_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define WL_V100(p) WL_V10(p##0) WL_V10(p##1) WL_V10(p##2) WL_V10(p##3) WL_V10(p##4) WL_V10(p##5) WL_V10(p##6) WL_V10(p##7) WL_V10(p##8) WL_V10(p##9)

struct CWeaponLike
{
	WL_V100(a0) WL_V100(a1) WL_V100(a2)
	WL_V10(a30) WL_V10(a31) WL_V10(a32) WL_V10(a33) WL_V10(a34) WL_V10(a35)
	virtual unsigned int GetWeaponFlags();	// slot 360
};

CWeaponLike * __fastcall sub_1032e7b0(CAI_BaseNPC *self);

unsigned int CAI_BaseNPC::vfunc513()
{
	const char *name;
	if (this)
		name = *(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540;
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CAI_BaseNPC::CapabilitiesGet";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	unsigned int flags = *(unsigned int *)((char *)this + 0x5cec);
	if (sub_1032e7b0(this))
		flags |= sub_1032e7b0(this)->GetWeaponFlags();
	(*g_109f3680)--;
	return flags;
}
// END FUNCTION

// FUNCTION: 0x1026dc00 size=0x17
struct CUnk1026dc00 {
    char pad[0x5cec];
    unsigned int m_5cec;
    unsigned int sub_1026dc00(unsigned int flags);
};

unsigned int CUnk1026dc00::sub_1026dc00(unsigned int flags)
{
    m_5cec = m_5cec | flags;
    return m_5cec;
}
// END FUNCTION

// FUNCTION: 0x1026dc30 size=0x19
struct CUnk1026dc30
{
	char m_pad0000[0x5cec];
	unsigned int m_flags5cec;	// 0x5cec

	unsigned int sub_1026dc30(unsigned int flags);
};

// TARGET: sub_1026dc30
unsigned int CUnk1026dc30::sub_1026dc30(unsigned int flags)
{
	m_flags5cec &= ~flags;
	return m_flags5cec;
}
// END FUNCTION

// FUNCTION: 0x1026dc60 size=0xb
#include "CUnknown1026dc60.h"
void CUnknown1026dc60::sub_1026dc60()
{
	m_unk5cec = 0;
}
// END FUNCTION

// FUNCTION: 0x1026dc80 size=0x66
#include "CAI_BaseNPC.h"

// TARGET: CAI_BaseNPC::vfunc560
void CAI_BaseNPC::vfunc560()
{
	sub_10269b50(0x4f);
	sub_10269b50(0x50);
	sub_10269b50(0x51);
	sub_10269b50(0x52);
	sub_10269b50(0x2e);
	sub_10269b50(0x2f);
	sub_10269b50(0x62);
	sub_10269b50(0x63);
	sub_10269b50(0x64);
	sub_10269b50(0x65);
	sub_10269b50(0x66);
}
// END FUNCTION

// FUNCTION: 0x1026dd10 size=0x4e7
#include "CAI_BaseNPC.h"
#include "CVProfile.h"
#include "globalvars.h"

struct CycleCount
{
	unsigned __int64 m_Int64;
	CycleCount() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

struct CGatherWeaponView
{
	CAI_NPC_V10(0) CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19)
	CAI_NPC_V10(20) CAI_NPC_V10(21) CAI_NPC_V10(22) CAI_NPC_V10(23) CAI_NPC_V10(24) CAI_NPC_V10(25) CAI_NPC_V10(26) CAI_NPC_V10(27) CAI_NPC_V10(28) CAI_NPC_V10(29)
	CAI_NPC_V10(30) CAI_NPC_V10(31) CAI_NPC_V10(32) CAI_NPC_V10(33) CAI_NPC_V10(34) CAI_NPC_V10(35)
	CAI_NPC_V(360) CAI_NPC_V(361) CAI_NPC_V(362) CAI_NPC_V(363) CAI_NPC_V(364)
	virtual int vfunc365(CAI_BaseNPC *pOther, float flDot, float flDist);
	CAI_NPC_V(366)
	virtual int vfunc367(CAI_BaseNPC *pOther, float flDot, float flDist);
	char sub_10252410(int a);
};

struct CGatherDevFlag
{
	virtual void v0();
	virtual void vfunc1();
};
extern CGatherDevFlag *g_10924a6c;

struct CGatherNPCView
{
	char m_pad0000[0x1564];
	float m_flNextAttack1564;
	char m_pad1568[0x5b88 - 0x1568];
	float m_f5b88;
	float m_f5b8c;
};

// TARGET: CAI_BaseNPC::vfunc561
void CAI_BaseNPC::vfunc561(CAI_BaseNPC *pOther, float flDist)
{
	CVProfile *prof = g_109f3648;
	if (prof->m_enabled || !prof->m_bAtRoot) {
		if (prof->m_pCurNode->m_pszName != "CAI_BaseNPC_GatherAttackConditions")
			prof->m_pCurNode = prof->m_pCurNode->GetSubNode("CAI_BaseNPC_GatherAttackConditions", 0, "Unaccounted");
		prof->m_pCurNode->EnterScope();
		prof->m_bAtRoot = false;
	}
	CGatherNPCView *pView = (CGatherNPCView *)this;
	Vector *pMe = (Vector *)vfunc217();
	Vector *pTheir = (Vector *)pOther->vfunc217();
	Vector dir = *pTheir - *pMe;
	dir.z = 0;
	VectorNormalize(dir);
	Vector vecFacing = vfunc368();
	float t0 = dir.x * vecFacing.x; float flDot = ((dir.z * vecFacing.z) + dir.y * vecFacing.y) + (t0);
	vfunc560();
	long flags = vfunc513();
	int r;
	Vector vecTarget = pOther->vfunc197(*(Vector *)vfunc217(), true, false);
	if (!((flags & 0x2000) && sub_10007e19())) { if (flags & 0x20000) {
		if (!(gpGlobals->curtime >= pView->m_flNextAttack1564)) {
			g_10924a6c->vfunc1();
			sub_10269a20(0x2f);
		}
		r = vfunc553(flDot, flDist);
	} else {
		goto skip1;
	} } else {
		if (!((CGatherWeaponView *)sub_10007e19())->sub_10252410(0)) {
			g_10924a6c->vfunc1();
			sub_10269a20(0x2f);
		}
		r = ((CGatherWeaponView *)sub_10007e19())->vfunc365(pOther, flDot, flDist);
	}
	if (r == 0x4f) {
		if (vfunc562((int)vfunc217(), (int)&vecTarget, 1) || (vfunc560(), vecTarget = pOther->vfunc193(), vfunc562((int)vfunc217(), (int)&vecTarget, 1))) {
			g_10924a6c->vfunc1();
			sub_10269a20(0x4f);
		}
	} else {
		g_10924a6c->vfunc1();
		sub_10269a20(r);
	}
skip1:
	if (!((0x8000 & flags) && sub_10007e19())) { if (0x80000 & flags) {
		g_10924a6c->vfunc1();
		r = vfunc555(flDot, flDist);
		sub_10269a20(r);
	} } else {
		g_10924a6c->vfunc1();
		r = ((CGatherWeaponView *)sub_10007e19())->vfunc367(pOther, flDot, flDist);
		sub_10269a20(r);
	}
	if (sub_10269aa0(0x63)) {
		if (3.4028235e+38f == pView->m_f5b8c)
			pView->m_f5b8c = gpGlobals->curtime + 2.5f;
		pView->m_f5b88 = gpGlobals->curtime + 1.5f;
	} else if (gpGlobals->curtime >= pView->m_f5b88) {
		pView->m_f5b8c = 3.4028235e+38f;
	}
	if (gpGlobals->curtime > pView->m_f5b8c) {
		g_10924a6c->vfunc1();
		sub_10269a20(0x2e);
	}
	if (gpGlobals->curtime < pView->m_f5b88) {
		g_10924a6c->vfunc1();
		sub_10269a20(0x63);
		sub_10269b50(0x50);
		sub_10269b50(0x4f);
		sub_10269b50(0x52);
		sub_10269b50(0x51);
	} else if (sub_10269aa0(0x50) || sub_10269aa0(0x4f) || sub_10269aa0(0x52) || sub_10269aa0(0x51)) {
		sub_10269b50(8);
		sub_10269b50(0x5f);
		sub_10269b50(0x60);
		sub_10269b50(9);
		sub_10269b50(0x63);
	}
	prof = g_109f3648;
	if (!(!prof->m_bAtRoot || prof->m_enabled)) return; else { CVProfNode *node = prof->m_pCurNode;
		if (--node->m_nRecursions == 0 && node->m_nCurFrameCalls != 0) {
			CycleCount end;
			end.Sample();
			CUnknownCycle100335e0 *pc = &node->m_CurFrameTime;
			pc->m_Int64 = end.m_Int64 - pc->m_Int64;
			node->m_TotalTime += pc->m_Int64;
			CVProfile *p2 = g_109f3648;
			p2->m_nGroupStackDepth--;
			int t4 = p2->m_nGroupStackDepth; int nNew = *(p2->m_GroupIDStack + t4);
			int t3 = 1 + p2->m_nGroupStackDepth; int nOld = p2->m_GroupIDStack[t3];
			if (nNew != nOld && p2->m_bVTuneGroupsEnabled && nOld == p2->m_nVTuneGroupID)
				vtune(false);
		}
		if (node->m_nRecursions == 0)
			prof->m_pCurNode = prof->m_pCurNode->m_pParent;
		prof->m_bAtRoot = (prof->m_pCurNode == prof->m_pRoot); }
}
// END FUNCTION

// FUNCTION: 0x1026e340 size=0x7d
#include "CAI_BaseNPC.h"
extern "C" __declspec(dllimport) void __cdecl DevMsg(int level, const char *pszFormat, ...);

void CAI_BaseNPC::sub_1026e340(int newState)
{
    int oldState = *(int *)((char *)this + 0x5cc0);
    if (newState != oldState)
        *(float *)((char *)this + 0x5cc8) = gpGlobals->curtime;
    switch (newState) {
    case 1:
        if (vfunc167()) {
            sub_10279a50(0);
            DevMsg(2, "Stripped\n");
        }
        break;
    }
    bool bChanged = false;
    if (*(int *)((char *)this + 0x5cc0) != newState)
        bChanged = true;
    *(int *)((char *)this + 0x5cc0) = newState;
    *(int *)((char *)this + 0x5cc4) = newState;
    if (bChanged)
        vfunc463(oldState, newState);
}
// END FUNCTION

// FUNCTION: 0x1026e3e0 size=0xc4
#include "CAI_BaseNPC.h"

void CAI_BaseNPC::vfunc463(int a, int type)
{
    int *pField = (int *)((char *)this + 0x5b64);
    switch (type) {
    case 1:
        *pField = 0x31;
        break;
    case 2:
        *pField = 0x8f;
        break;
    case 3:
        *pField = 0x39;
        break;
    case 4:
        *pField = 8;
        break;
    case 8:
        *pField = 0x85;
        break;
    case 5:
    case 6:
    case 12:
        *pField = 0;
        break;
    case 7:
    case 9:
    case 10:
    case 13:
        *pField = 4;
        break;
    case 11:
    case 14:
        *pField = 0x7f;
        break;
    case 0:
        *pField = 0x30;
        break;
    default:
        *pField = 0x30;
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x1026e4f0 size=0x92
#include "CAI_BaseNPC.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct SensingTarget { void sub_10310710(); };

void CAI_BaseNPC::sub_1026e4f0()
{
	const char *name;
	if (this) {
		name = *(const char **)((char *)this + 0x26c);
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CAI_BaseNPC::PerformSensing";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (*(int *)((char *)this + 0x5bb4) <= 0)
		(*(SensingTarget **)((char *)this + 0x5cdc))->sub_10310710();
	vfunc459();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1026e5c0 size=0xd
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc477
extern int g_105c97dc[];

void CAI_BaseNPC::vfunc477()
{
	sub_10269bd0(g_105c97dc, 0xe);
}
// END FUNCTION

// FUNCTION: 0x1026e5e0 size=0x2a6
#include "CAI_BaseNPC.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CGameTrace.h"
#include "CAI_MoveProbe.h"
#include "CVProfile.h"
#include "globalvars.h"
#include "Vector.h"
#include "CCollisionProperty.h"
#include "CDevFlagObj.h"
#include "CUnknown1027d990.h"

struct HullTrace : CGameTrace {};

void sub_1026e940(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs,
                  unsigned int mask, void *pFilter, HullTrace *pTrace, char b);

struct CTraceFilterNavGround102e3290
{
    int m_pad[5];
    CTraceFilterNavGround102e3290 *sub_102e3290(int a, int b);
};

struct CAI_BaseNPCCheckOnGround : CAI_BaseNPC
{
    char m_pad5d5c[0x5d5c - 4];
    float m_fl5d5c;
};

extern CDevFlagObj *g_10924a6c;

// TARGET: CAI_BaseNPC::sub_1026e5e0
void CAI_BaseNPC::sub_1026e5e0()
{
    ScopeTrace trace("CAI_BaseNPC::CheckOnGround",
                     this ? (((CBaseEntity *)this)->m_name26c ? ((CBaseEntity *)this)->m_name26c : g_106b8540) : g_105387dc);

    CAI_BaseNPCCheckOnGround *pSelf = (CAI_BaseNPCCheckOnGround *)this;
    CBaseEntity *pEnt = (CBaseEntity *)this;

    if (!sub_10269aa0(0x73))
    {
        if (((CUnknown1027d990 *)this)->sub_1027d990() != 0)
            return;
        if (vfunc94() == 7)
            return;

        if (gpGlobals->curtime - pSelf->m_fl5d5c > -0.001)
        {
            pSelf->m_fl5d5c = gpGlobals->curtime + 0.5f;

            Vector vecStart = *(Vector *)vfunc217();
            vecStart.z = vecStart.z + 0.1;
            Vector vecEnd = *(Vector *)vfunc217();
            vecEnd.z = vecEnd.z - 4.0;

            CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
            pCol->vfunc1();
            pCol->vfunc2();
            const Vector *pMins = (const Vector *)pCol->vfunc1();
            const Vector *pMaxs = (const Vector *)pCol->vfunc2();

            CAI_MoveProbe *pProbe = (CAI_MoveProbe *)Owned5d40();

            g_109f3648->EnterScope("CAI_MoveProbe_TraceHull", 0, "Unaccounted", false);

            CBaseEntity *pOuter = (CBaseEntity *)pProbe->m_pOuter;

            HullTrace tr;

            CTraceFilterNavGround102e3290 filter;
            int nGroup = *(int *)((char *)pOuter + 0x368);
            filter.sub_102e3290((int)pOuter, nGroup);

            sub_1026e940(vecStart, vecEnd, *pMins, *pMaxs, 0x202400b, &filter, &tr, 1);

            g_109f3648->ExitScope();

            if (tr.m_fraction == 1.0)
            {
                g_10924a6c->vfunc1();
                sub_10269a20(0x73);
                vfunc208(0);
                return;
            }
            if (tr.m_pEnt != 0 && tr.m_pEnt != vfunc209())
            {
                vfunc208((int)tr.m_pEnt);
            }
        }
    }
    else
    {
        if ((pEnt->sub_100b3700() & 1) || ((CUnknown1027d990 *)this)->sub_1027d990() != 0)
            sub_10269b50(0x73);
    }
}
// END FUNCTION

// FUNCTION: 0x1026e940 size=0x241
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "Ray_t.h"
#include <math.h>
struct HullTrace { Vector startpos; Vector endpos; char rest[0x54 - 0x18]; };
struct IHullTrace { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void TraceRay(const Ray_t &ray, unsigned mask, void *filter, HullTrace *tr); };
struct IHullClient { virtual void v0(); virtual bool v1(); char pad[0x28]; void *m2c; };
extern IHullTrace *g_1070b254;
extern IHullClient *g_10738964;
void sub_10146570(void *, void *, int, int, int, int, float);
// m_Extents (+0x18) here is the game's start offset and m_StartOffset (+0x24) its extents
struct HullRay : Ray_t
{
	void InitHull(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs)
	{
		Vector &offset = *(Vector *)m_Extents;
		Vector &extents = *(Vector *)m_StartOffset;
		m_Delta[0] = end.x - start.x;
		m_Delta[1] = end.y - start.y;
		m_Delta[2] = end.z - start.z;
		m_IsSwept = (m_Delta[0] * m_Delta[0] + m_Delta[1] * m_Delta[1] + m_Delta[2] * m_Delta[2]) != 0;
		VectorSubtract(maxs, mins, extents);
		extents *= 0.5f;
		m_IsRay = (extents.z * extents.z + extents.y * extents.y + extents.x * extents.x) < 1e-6;
		VectorAdd(mins, maxs, offset);
		offset *= 0.5f;
		m_Start[0] = offset.x + start.x;
		m_Start[1] = offset.y + start.y;
		m_Start[2] = offset.z + start.z;
		offset *= -1.0f;
		m_b32 = 0;
		m_b33 = 0;
		m_n34 = 0;
	}
};
void sub_1026e940(const Vector &vecStart, const Vector &vecEnd, const Vector &hullMin, const Vector &hullMax, unsigned mask, void *filter, HullTrace *ptr, char bTraceOffset)
{
	ScopeTrace trace("UTIL_TraceHull", g_106b8540, g_106b8540);
	HullRay ray;
	ray.InitHull(vecStart, vecEnd, hullMin, hullMax);
	if (bTraceOffset && !ray.m_IsRay) {
		float f = sqrt(ray.m_StartOffset[1] * ray.m_StartOffset[1] + ray.m_StartOffset[0] * ray.m_StartOffset[0]);
		*(float *)&ray.m_n34 = f;
		if (f > 1e-6)
			ray.m_b33 = 1;
	}
	g_1070b254->TraceRay(ray, mask, filter, ptr);
	if (!g_10738964->v1() && g_10738964->m2c)
		sub_10146570(ptr, (char *)ptr + 0xc, 0xff, 0xff, 0, 1, -1.0f);
}
// END FUNCTION

// FUNCTION: 0x1026ec30 size=0x3db
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CAIPendingCondList.h"
#include "CUnknown102dfaa0.h"
#include "CVProfile.h"
#include "ScopeTrace.h"
#include "ehandle.h"

struct CCycleSampler433
{
	unsigned __int64 m_Int64;
	void Sample() { __asm { mov ecx, this
		rdtsc
		mov [ecx], eax
		mov [ecx+4], edx } }
};
extern CCycleSampler433 g_109204a0;
struct CCondHookView_433 { virtual void v0(); virtual void v1(); };
extern CCondHookView_433 *g_10924a6c;
int __cdecl sub_101d1800(int edict);

struct CGatherSched433 { char pad[0x1c]; int m_n1c; int GetId() const { return m_n1c; } };
struct CGatherView433
{
	char p0[0x98];
	CAI_BaseNPCTroika *m_pObj98;
	char p1[0x204 - 0x9c];
	unsigned m_f204;
	bool IsFlag10() const { return (m_f204 >> 10) & 1; }
	char p2[0x26c - 0x208];
	const char *m_name26c;
	char p3[0x2e0 - 0x270];
	int m_edict;
	int edict() const { return m_edict; }
	char p4[0x14bc - 0x2e4];
	unsigned m_f14bc;
	char p5[0x5b64 - 0x14c0];
	unsigned m_f5b64;
	bool IsFlag5b64_0() const { return m_f5b64 & 1; }
	bool IsFlag5b64_1() const { return (m_f5b64 >> 1) & 1; }
	char p5b[0x5c38 - 0x5b68];
	CGatherSched433 *m_pSched;
	char p6[0x5ca4 - 0x5c3c];
	bool m_b5ca4;
	char p7[0x5cc0 - 0x5ca5];
	int m_state;
	char p8[0x5ce4 - 0x5cc4];
	EHANDLE m_h5ce4;
};

// the Troika NPC part keeps its move target as a handle and hands it out by value, like slot 586
struct CTroikaView433 : CAI_BaseNPCTroika { EHANDLE GetMoveTargetEnt() const { return m_hMoveTargetEnt; } };

// TARGET: CAI_BaseNPC::vfunc433
void CAI_BaseNPC::vfunc433()
{
	CGatherView433 *v = (CGatherView433 *)this;
	ScopeTrace trace("CAI_BaseNPC::GatherConditions", this ? (v->m_name26c ? v->m_name26c : g_106b8540) : g_105387dc);
	v->m_b5ca4 = true;
	CCycleSampler433 *pg = &g_109204a0;
	pg->Sample();
	((CAIPendingCondList *)((char *)this + 0x1a9c))->sub_102cc760((CAI_BaseNPCCondTarget *)this);
	if (v->m_state != 0 && 7 != v->m_state) {
		if (v->IsFlag10() || sub_101d1800(v->edict()) || v->IsFlag5b64_0()) {
			sub_1026e5e0();
			if (vfunc509()) {
				g_109f3648->EnterScope("CAI_BaseNPC_IdleSound", 0, "Unaccounted", false);
				if (v->IsFlag5b64_1())
					vfunc499();
				else if ((v->m_f14bc & 0x10000) == 0x10000)
					vfunc504();
				else if (v->m_pSched && vfunc447(v->m_pSched->GetId()) == 0x12f)
					vfunc503();
				else
					vfunc490();
				g_109f3648->ExitScope();
			}
			sub_1026e4f0();
			((CUnknown102dfaa0 *)vfunc541())->sub_102df320();
			sub_10279dd0();
			if (sub_1026fb40()) {
				g_10924a6c->v1();
				sub_10269a20(0x67);
			}
		} else
			vfunc477();
		if (vfunc167())
			vfunc481(vfunc167());
		if (v->m_h5ce4.Get())
			sub_10271d10(v->m_h5ce4.Get());
		CAI_BaseNPCTroika *pObj = v->m_pObj98;
		if (pObj) {
			unsigned int tmp;
			if (((EHANDLE *)pObj->vfunc586((int)&tmp))->Get())
				pObj->sub_1028e480(((EHANDLE *)pObj->vfunc586((int)&tmp))->Get());
			if (((CTroikaView433 *)pObj)->GetMoveTargetEnt().Get())
				pObj->sub_1028e980(((CTroikaView433 *)pObj)->GetMoveTargetEnt().Get());
			pObj->sub_1028e790();
		}
		vfunc565();
	}
	CCycleSampler433 end;
	end.m_Int64 = 0;
	end.Sample();
	g_109204a0.m_Int64 = end.m_Int64 - g_109204a0.m_Int64;
}
// END FUNCTION

// FUNCTION: 0x1026f110 size=0x2f4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CVProfile.h"
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "ehandle.h"

extern void (CVProfile::*g_109f3660)(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted);	// the import slot of CVProfile::EnterScope

struct CCycleCount {
	unsigned __int64 m_Int64;
	CCycleCount() { m_Int64 = 0; }
	void Sample() {
		unsigned long *p = (unsigned long *)this;
		__asm {
			mov ecx, p
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void Start() { Sample(); }
	void End() {
		CCycleCount now;
		now.Sample();
		m_Int64 = now.m_Int64 - m_Int64;
	}
};

struct CAIInner1070af4cB { virtual bool vfunc0(); virtual bool vfunc1(); char m_pad[0x2c - 4]; int m_i2c; };
struct CAIInner1070af4c { int m_i0; CAIInner1070af4cB *m_p4; };
struct CAINav5d34 { char m_pad[0x34]; char m_b34; };

extern CCycleCount g_109203e8;
extern CCycleCount g_1090fe68;
extern CAIInner1070af4c *g_1070af4c;

struct CRunAIView : CAI_BaseNPC {
	char m_pad0004[0x26c - 4];
	const char *m_name26c;
	char m_pad0270[0xfe8 - 0x270];
	EHANDLE m_hfe8;
	char m_pad0fec[0x1b4c - 0xfec];
	char m_b1b4c;
	char m_pad1b4d[0x5ca4 - 0x1b4d];
	char m_b5ca4;
	char m_pad5ca5[0x5d34 - 0x5ca5];
	CAINav5d34 *m_p5d34;
	void sub_1026ab50();
	void sub_102817c0(char b);
};

// TARGET: CAI_BaseNPC::vfunc432
void CAI_BaseNPC::vfunc432(char bSkip)
{
	CRunAIView *self = (CRunAIView *)this;
	ScopeTrace trace("CAI_BaseNPC::RunAI", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CAI_BaseNPC_RunAI", 0, "Unaccounted", false);
	g_109203e8.Start();
	self->m_b5ca4 = 0;
	CAIInner1070af4c *g = g_1070af4c;
	if (!g->m_p4->vfunc1() && g->m_p4->m_i2c != 0 && self->m_p5d34->m_b34 != 0)
		((CBaseEntity *)this)->sub_1009f3c0("NPC w/no reachable nodes!", 5);
	if (!bSkip && !self->m_hfe8.Get()) {
		(g_109f3648->*g_109f3660)("CAI_BaseNPC_RunAI_GatherConditions", 0, "Unaccounted", false);
		vfunc433();
		if (!self->m_b5ca4)
			self->m_b5ca4 = 1;
		g_109f3648->ExitScope();
	}
	self->sub_1026ab50();
	g_1090fe68.Start();
	vfunc434();
	g_1090fe68.End();
	self->sub_102817c0(bSkip);
	if (!bSkip) {
		sub_10269b50(0x4c);
		sub_10269b50(0x4d);
		sub_10269b50(0x38);
	}
	self->m_b1b4c = 1;
	g_109203e8.End();
	g_109f3648->ExitScopeInlined();
}
// END FUNCTION

// FUNCTION: 0x1026f4d0 size=0x86
#include "CAI_BaseNPC.h"

#define FIELD(type, off) (*(type *)((char *)this + (off)))

int CAI_BaseNPC::sub_1026f4d0()
{
	FIELD(int, 0x1b2c) = 0;
	FIELD(int, 0x1b30) = 0;
	FIELD(int, 0x1b34) = 0;
	FIELD(int, 0x1b44) = 0;
	FIELD(int, 0x1b48) = 0;
	int state = vfunc460();
	if (state == 0)
		state = vfunc461();
	if ((FIELD(unsigned int, 0x14bc) & 0x20000) == 0x20000) {
		switch (state) {
		case 1:
			FIELD(int, 0x1b40) = 0x12f7;
			break;
		case 3:
			FIELD(int, 0x1b40) = 0x12f8;
			break;
		default:
			return state;
		}
		FIELD(const char *, 0x1b3c) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp";
		state = FIELD(int, 0x5cc4) = 0xb;
	}
	return state;
}
// END FUNCTION

// FUNCTION: 0x1026f590 size=0x96
#include "CAI_BaseNPC.h"

struct CAI_SquadView
{
	void sub_103161a0(int a);
};

#define NPC_INT(off) (*(int *)((char *)this + (off)))

int CAI_BaseNPC::vfunc460()
{
	NPC_INT(0x1b38) = 1;
	if (NPC_INT(0x5bb0) <= 0 && NPC_INT(0x5da4) != 0) {
		switch (NPC_INT(0x5cc0)) {
		case 1:
		case 3:
			if (sub_10269aa0(0x54) && vfunc167() != 0) {
				char *pObj = *(char **)((char *)this + 0x98);
				if (pObj) {
					*(unsigned int *)(pObj + 0x14bc) |= 0x80002000;
					return 0;
				}
				CAI_SquadView *pSquad = (NPC_INT(0x5bb0) <= 0) ? *(CAI_SquadView **)((char *)this + 0x5da4) : 0;
				pSquad->sub_103161a0(vfunc167());
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1026f660 size=0x3d8
#include "CBaseEntity.h"
#include "CAI_BaseNPC_vfunc461.h"
#include "CAI_Motor.h"

#define FILE_ "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp"

typedef void (*FnDevWarning)(int, const char *, ...);
extern FnDevWarning g_109f3658;

int CAI_BaseNPC::vfunc461()
{
	CAI_BaseNPCUnit461 *p = (CAI_BaseNPCUnit461 *)this;
	p->m_n1b38 = 1;
	switch (p->m_nState5cc0) {
	case 1:
		if (p->sub_10269d30(0x54) || p->sub_10269d30(0x46)) {
			p->m_nLine1b40 = 0x136a;
			p->m_nIdealState5cc4 = 2;
		} else if (p->sub_10269d30(0x4c)) {
			p->m_b5b80 = 0;
			sub_102e0b40((float *)p->m_pMotor5d44);
			Vector v = ((CEnemiesView *)p->vfunc541())->sub_102dfed0((CBaseEntity *)p->vfunc167());
			p->m_pMotor5d44->sub_102e2020(&v.x, 0);
			p->m_nLine1b40 = 0x1373;
			p->m_nIdealState5cc4 = 3;
		} else if (p->sub_10269d30(0x4d)) {
			p->m_b5b80 = 0;
			sub_102e0b40((float *)p->m_pMotor5d44);
			Vector v = ((CEnemiesView *)p->vfunc541())->sub_102dfed0((CBaseEntity *)p->vfunc167());
			p->m_pMotor5d44->sub_102e2020(&v.x, 0);
			p->m_nLine1b40 = 0x137c;
			p->m_nIdealState5cc4 = 3;
		} else if (p->sub_10269d30(0x6a) || p->sub_10269d30(0x6d) || p->sub_10269d30(0x6e) || p->sub_10269d30(0x6f) || p->sub_10269d30(0x6b) || p->sub_10269d30(0x70)) {
			S101b9920 *pObj = (S101b9920 *)p->vfunc474();
			if (!pObj)
				return p->m_nIdealState5cc4;
			sub_102e0b40((float *)p->m_pMotor5d44);
			CAI_Motor *pMotor = p->m_pMotor5d44;
			pMotor->sub_102e2020((const float *)pObj->sub_101b99d0(), 0);
			int n = *(int *)((char *)pObj + 4);
			if (n != 1 && n != 8 && n != 0x10)
				return p->m_nIdealState5cc4;
			p->m_nLine1b40 = 0x1397;
			p->m_nIdealState5cc4 = 3;
		} else if (p->sub_10269d30(0x5e)) {
			p->m_nLine1b40 = 0x139e;
			p->m_nIdealState5cc4 = 3;
		} else {
			return p->m_nIdealState5cc4;
		}
		p->m_pszFile1b3c = FILE_;
		break;
	case 3:
		if (p->sub_10269d30(0x54) || p->sub_10269d30(0x46)) {
			p->m_nLine1b40 = 0x13ac;
			p->m_nIdealState5cc4 = 2;
			p->m_pszFile1b3c = FILE_;
		} else if (p->sub_10269d30(0x6a) || p->sub_10269d30(0x6d)) {
			p->m_pszFile1b3c = FILE_;
			p->m_nLine1b40 = 0x13b2;
			p->m_nIdealState5cc4 = 3;
			S101b9920 *pObj = (S101b9920 *)p->vfunc474();
			if (pObj) {
				sub_102e0b40((float *)p->m_pMotor5d44);
				CAI_Motor *pMotor = p->m_pMotor5d44;
				pMotor->sub_102e2020((const float *)pObj->sub_101b99d0(), 0);
			}
			g_10739a4c.sub_101e3d70((CUnknown101e3cfObj *)p);
			return p->m_nIdealState5cc4;
		} else if (p->vfunc462()) {
			p->m_nLine1b40 = 0x13c0;
			p->m_nIdealState5cc4 = 1;
			p->m_pszFile1b3c = FILE_;
		}
		break;
	case 2:
		if (!p->vfunc167()) {
			p->m_pszFile1b3c = FILE_;
			p->m_nLine1b40 = 0x13cc;
			p->m_nIdealState5cc4 = 3;
			g_109f3658(2, "***Combat state with no enemy!\n");
			return p->m_nIdealState5cc4;
		}
		break;
	case 4:
		if (p->sub_10269d30(0x5c) || p->sub_10269d30(0x4c) || p->sub_10269d30(0x4d)) {
			p->m_b5b80 = 0;
			p->sub_1027d0a0();
			return p->m_nIdealState5cc4;
		}
		break;
	case 7:
		p->m_nLine1b40 = 0x13dd;
		p->m_nIdealState5cc4 = 7;
		p->m_pszFile1b3c = FILE_;
		break;
	}
	return p->m_nIdealState5cc4;
}
// END FUNCTION

// FUNCTION: 0x1026fb40 size=0x7b
#include "CAI_BaseNPC.h"
extern float g_10452dc4;
bool CAI_BaseNPC::sub_1026fb40()
{
	if (vfunc513() & 0x200000) {
		float *pNext = (float *)((char *)this + 0x5da0);
		if (*pNext < gpGlobals->curtime) {
			float t = gpGlobals->curtime;
			*pNext = t + g_10452dc4;
			if (!sub_10007e19()) {
				float box[3] = { 300.0f, 300.0f, 100.0f };
				if (sub_10005dd5(box))
					return true;
			}
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1026fbe0 size=0xc6
#include "CAI_BaseNPC.h"
#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CNpcWeaponX	// the active weapon
{
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV100(1) SV100(2)
	SV10(30) SV10(31) SV10(32) SV10(33) SV10(34) SV10(35)
	SV(360) SV(361) SV(362) SV(363)
	virtual char v364(int a, int b, char bFlag);
};

struct CNpcSlotsX	// the NPC's slots past 568
{
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV100(1) SV100(2) SV100(3) SV100(4)
	SV10(50) SV10(51) SV10(52) SV10(53) SV10(54) SV10(55) SV10(56)
	SV(570) SV(571) SV(572)
	virtual char v573(int a, int b, char bFlag);
};

struct CNpcAiGlobalX
{
	virtual void v0();
	virtual void v1();
};
extern CNpcAiGlobalX *g_10924a6c;

char CAI_BaseNPC::vfunc562(int a, int b, char bFlag)
{
	char result;
	if (sub_10007e19()) {
		result = ((CNpcWeaponX *)sub_10007e19())->v364(a, b, bFlag);
	} else if (vfunc513() & 0x20000) {
		result = ((CNpcSlotsX *)this)->v573(a, b, bFlag);
	} else {
		if (bFlag) {
			g_10924a6c->v1();
			sub_10269a20(0x42);
		}
		result = 0;
	}
	if (vfunc513() & 0x10000000) {
		if (sub_10266b10(a, b, 0.92f)) {
			if (bFlag) {
				g_10924a6c->v1();
				sub_10269a20(0x64);
			}
			return 0;
		}
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x1026fcf0 size=0x195
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "Ray_t.h"
#include "CTraceFilterSimple.h"
#include "CGameTrace.h"

struct CNPCOriginView {
	char m_pad0000[0x184];
	Vector m_vecOrigin184;	// 0x184
};

struct CNPCTargetView {
	char m_pad0000[0x9c];
	int m_n9c;	// 0x9c
};

class CEngineTraceView {
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void TraceRay(Ray_t *pRay, int mask, CTraceFilterSimple *pFilter, CGameTrace *pTrace);	// slot 4
};

class CUnknown10738964 {
public:
	virtual void v0();
	virtual char vfunc1();
	char m_pad04[0x2c - 4];
	int m_n2c;
};

class CUnknown10924a6c {
public:
	virtual void v0();
	virtual void vfunc1();
};

extern CEngineTraceView *g_1070b254;
extern CUnknown10738964 *g_10738964;
extern CUnknown10924a6c *g_10924a6c;
void sub_10146570(const float *pStart, const float *pEnd, int r, int g, int b, int bNoDepth, float flDuration);

char CAI_BaseNPC::vfunc573(const Vector *pOffset, const float *pEnd, char bSetCondition)
{
	Vector vecSum;
	VectorAdd(((CNPCOriginView *)this)->m_vecOrigin184, *pOffset, vecSum);
	Vector vecStart = vecSum;
	Ray_t ray;
	ray.sub_1004f7a0(&vecStart.x, pEnd);
	CTraceFilterSimple filter(this, 0);
	CGameTrace tr;
	g_1070b254->TraceRay(&ray, 0x46004003, &filter, &tr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570(&tr.m_startpos[0], &tr.m_endpos[0], 0xff, 0, 0, 1, -1.0f);
	if (tr.m_fraction == 1.0)
		return 1;
	CBaseEntity *pEnt = tr.m_pEnt;
	if ((int)pEnt == vfunc167())
		return 1;
	if (pEnt && ((CNPCTargetView *)pEnt)->m_n9c) {
		int r = vfunc404(pEnt);
		if (r == 1)
			return r;
		if (bSetCondition) {
			g_10924a6c->vfunc1();
			sub_10269a20(0x63);
			return 0;
		}
	} else if (bSetCondition) {
		g_10924a6c->vfunc1();
		sub_10269a20(0x66);
		sub_10270aa0(pEnt);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1026ff00 size=0x5b
#include "CBaseEntity.h"
#include "Vector.h"
class CBaseEntity;
struct CUnitHelper
{
	char pad0000[0x184];
	Vector m_vecOrigin184;
	bool sub_1026ff80(CBaseEntity *pEntity, const float *pFrom, const float *pTo);
	void sub_1026ff00(const Vector *pOffset, const float *pTo);
};
void CUnitHelper::sub_1026ff00(const Vector *pOffset, const float *pTo)
{
	Vector vecSum = m_vecOrigin184 + *pOffset;
	sub_1026ff80((CBaseEntity *)this, &vecSum.x, pTo);
}
// END FUNCTION

// FUNCTION: 0x1026ff80 size=0x18b
#include "CBaseEntity.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CTraceFilterSimple.h"
#include "CGameTrace.h"
#include "Ray_t.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
extern CUnknown1070b254 *g_1070b254;
extern CUnknown10738964 *g_10738964;
extern float g_104454c4;
extern double g_10449280;
void sub_10015df2(float *a, float *b, int c, int d, int e, int f, float g);
struct EntView
{
	char pad[0x9c];
	int m_n9c;
};
struct CUnitHelper
{
	bool sub_1000c89c(CBaseEntity *ent, const float *start, const float *end);
	// TARGET: sub_1026ff80
	bool sub_1026ff80(CBaseEntity *ent, const float *start, const float *end);
};
bool CUnitHelper::sub_1026ff80(CBaseEntity *ent, const float *start, const float *end)
{
	Ray_t ray;
	ray.m_Delta[0] = end[0] - start[0];
	ray.m_Delta[1] = end[1] - start[1];
	ray.m_Delta[2] = end[2] - start[2];
	int swept = ray.m_Delta[0] * ray.m_Delta[0] + ray.m_Delta[1] * ray.m_Delta[1] + ray.m_Delta[2] * ray.m_Delta[2] != g_104454c4;
	*(char *)&ray.m_IsSwept = swept;
	ray.m_Start[0] = start[0];
	ray.m_StartOffset[2] = 0;
	ray.m_StartOffset[1] = 0;
	ray.m_StartOffset[0] = 0;
	ray.m_IsRay = true;
	ray.m_Extents[2] = 0;
	ray.m_Extents[1] = 0;
	ray.m_Extents[0] = 0;
	ray.m_Start[1] = start[1];
	ray.m_Start[2] = start[2];
	ray.m_b32 = 0;
	ray.m_n34 = 0;
	ray.m_b33 = 0;
	CTraceFilterSimple filter(ent, 0);
	CGameTrace tr;
	g_1070b254->vfunc4(&ray, 0x46004003, (CTraceFilterNoCharacterCollide *)&filter, &tr);
	if (!g_10738964->vfunc1())
	{
		int n = g_10738964->m_n2c;
		if (n)
			sub_10015df2(tr.m_startpos, tr.m_endpos, 0xff, 0, 0, 1, -1.0f);
	}
	if (tr.m_fraction == g_10449280)
		return true;
	EntView *hit = (EntView *)tr.m_pEnt;
	if (hit)
	{
		int v = hit->m_n9c;
		if (v)
		{
			sub_1000c89c(tr.m_pEnt, tr.m_endpos, end);
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10270180 size=0xcd
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"

extern Vector g_1070d1b0;

struct CAINpcTrackView
{
	char m_pad0000[0x5bc5];
	char m_bTracking;	// 0x5bc5
	char m_pad5bc6[2];
	Vector m_vecTrack;	// 0x5bc8
};

static inline float LengthSqrG(const Vector &v)
{
	return v.x * v.x + (v.y * v.y + v.z * v.z);
}

void CAI_BaseNPC::sub_10270180(void *pObject, char bTrack)
{
	CAINpcTrackView *p = (CAINpcTrackView *)this;
	CEntityVSlots *pEnt = (CEntityVSlots *)pObject;
	if (!pEnt) {
		p->m_vecTrack = g_1070d1b0;
		p->m_bTracking = bTrack;
		return;
	}
	if (!bTrack) {
		p->m_vecTrack = *pEnt->slot217();
		p->m_bTracking = 0;
		return;
	}
	if (!p->m_bTracking) {
		if (LengthSqrG(p->m_vecTrack - *pEnt->slot217()) > 4096.0f)
			p->m_bTracking = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x10270290 size=0xd
#include "CUnknown10270290.h"
void CUnknown10270290::sub_10270290(int value)
{
	m_unk5b90 = value;
}
// END FUNCTION

// FUNCTION: 0x102702b0 size=0x7
struct CUnknown102702b0 { int sub_102702b0(); };
int CUnknown102702b0::sub_102702b0()
{
    return *(int *)((char *)this + 0x5b90);
}
// END FUNCTION

// FUNCTION: 0x102702d0 size=0x63
#include "CAI_BaseNPC.h"
struct SDifficultyView {
    virtual void s0();
    virtual bool s1();
    char m_pad[0x24];
    float m28;
};
extern SDifficultyView *g_10924a1c;
// TARGET: CAI_BaseNPC::vfunc418
float CAI_BaseNPC::vfunc418(float a)
{
    switch ((int)a) {
    case -1000003:
        if (g_10924a1c->s1())
            return 0.0f;
        return g_10924a1c->m28;
    case -1000002:
        return 160.0f;
    case -1000000:
        return *(float *)((char *)this + 0x5bac);
    }
    return a;
}
// END FUNCTION

// FUNCTION: 0x10270360 size=0xa
#include "ConVar.h"
ConVar g_109202c8("debug_sound_occlusion", "1", 0, "Set this to 1 to allow certain objects & the world to occlude sounds.");
// END FUNCTION

// FUNCTION: 0x102703f0 size=0x2de
#include "CUnknown1030f940.h"
#include "CTraceFilterSoundOcclude.h"
#include "CEHandleGet.h"
#include "engineiface.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "UTIL_Trace.h"

struct CConVar109202cc
{
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad[0x28];
	int m_n2c;
};
extern CConVar109202cc *g_109202cc;

struct CEntityWithCollision
{
	char m_pad[0x270];
	CCollisionProperty m_Collision;
};

class CUnknown102703f0
{
public:
	float sub_102703f0(CUnknown1030f940Rec *pRec, float *pVolume);
};

float CUnknown102703f0::sub_102703f0(CUnknown1030f940Rec *pRec, float *pVolume)
{
	if (!g_109202cc->vfunc1() && g_109202cc->m_n2c != 0 && pRec)
	{
		Vector vecStart = *(Vector *)pRec->m_vecOrigin;
		CTraceFilterSoundOcclude filter;
		CGameTrace trace;

		if (EHandle_Get(*(unsigned int *)&pRec->m_unk0))
		{
			CEntityWithCollision *pEnt = (CEntityWithCollision *)EHandle_Get(*(unsigned int *)&pRec->m_unk0);
			Vector vecMins = *(Vector *)pEnt->m_Collision.vfunc1();
			Vector vecMaxs = *(Vector *)pEnt->m_Collision.vfunc2();
			vecStart.x += enginerandom->vfunc1(vecMins.x, vecMaxs.x);
			vecStart.y += enginerandom->vfunc1(vecMins.y, vecMaxs.y);
			vecStart.z += enginerandom->vfunc1(vecMins.z, vecMaxs.z);
		}
		else
		{
			vecStart.x += enginerandom->vfunc1(-8.0f, 8.0f);
			vecStart.y += enginerandom->vfunc1(-8.0f, 8.0f);
			vecStart.z += enginerandom->vfunc1(0.0f, 8.0f);
		}

		{
			Vector vecEar;
			Vector *pEar = ((CEntityVSlots *)this)->slot193(&vecEar);
			UTIL_TraceLine(*pEar, vecStart, 0xffffffff, &filter, &trace);
		}
		if (trace.m_fraction != 1.0f)
			*pVolume = 0.0f;
	}
	return *pVolume;
}
// END FUNCTION

// FUNCTION: 0x10270790 size=0x29
#include "CTraceFilterSoundOcclude.h"

// TARGET: CTraceFilterSoundOcclude::vfunc0
bool CTraceFilterSoundOcclude::vfunc0(void *pEnt, int contentsMask)
{
    if (pEnt == sub_1000aa0b())
        return 1;
    if (pEnt)
    {
        if (((CTraceFilterSoundOcclude *)pEnt)->sub_100a93d0())
            return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102707d0 size=0x39
typedef int (__fastcall *CUnknownSlotFn)(void *pThis);

int __stdcall sub_102707d0(void *pEntity)
{
    if (pEntity != 0) {
        void *pObj = *(void **)((char *)pEntity + 0x98);
        if (pObj != 0) {
            int nState = ((CUnknownSlotFn)((void **)*(void **)pObj)[138])(pObj);
            if (nState == 3) {
                return ((CUnknownSlotFn)((void **)*(void **)pObj)[97])(pObj);
            }
        }
    }
    return (int)pEntity;
}
// END FUNCTION

// FUNCTION: 0x10270820 size=0x8
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"

char CAI_BaseNPC::vfunc337()
{
	unsigned char result = ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc337();
	result |= 1;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10270840 size=0x3b
#include "CAI_BaseNPC.h"

namespace block_10270840 {
	struct CUnk10270840 : CAI_BaseNPC {
		int sub_1027d990();
		char sub_10014df8(int a);
	};
}

// TARGET: CAI_BaseNPC::vfunc564
bool CAI_BaseNPC::vfunc564()
{
	if (((block_10270840::CUnk10270840 *)this)->sub_1027d990() != 3)
	{
		if (((block_10270840::CUnk10270840 *)this)->sub_1027d990() != 1)
		{
			if (((block_10270840::CUnk10270840 *)this)->sub_10014df8(0x46))
			{
				if (!((block_10270840::CUnk10270840 *)this)->sub_10014df8(0x55))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10270890 size=0xe9
#include "CAI_BaseNPC_vfunc481.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "Vector.h"

float CAI_BaseNPCUnit481::sub_10270890(CBaseEntity *pEnemy)
{
	Vector enemyDelta = *((CEntityVSlots *)pEnemy)->slot217() - *((CEntityVSlots *)this)->slot217();
	Vector enemyMins, enemyMaxs, myMins, myMaxs;
	((CCollisionProperty *)((char *)pEnemy + 0x270))->vfunc15(&enemyMins, &enemyMaxs);
	((CCollisionProperty *)((char *)this + 0x270))->vfunc15(&myMins, &myMaxs);
	if (enemyMins.z >= myMaxs.z)
		enemyDelta.z = enemyMins.z - myMaxs.z;
	else if (enemyMaxs.z <= myMins.z)
		enemyDelta.z = enemyMaxs.z - myMins.z;
	else
		enemyDelta.z = 0;
	return enemyDelta.Length();
}
// END FUNCTION

// FUNCTION: 0x102709c0 size=0xaf
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CUnknown102e0150.h"

struct AINavView_102709c0
{
	char pad0[0x2c];
	int m_pNetwork;
	int GetNetwork() const { return m_pNetwork; }
};

struct AIView_102709c0
{
	char pad0[0x5bb0];
	int m_nCount5bb0;
	char pad1[0x5d34 - 0x5bb4];
	AINavView_102709c0 *m_pNavigator;
	char pad2[0x5da4 - 0x5d38];
	int m_nSquad5da4;
	AINavView_102709c0 *GetNavigator() { return m_pNavigator; }
};

// TARGET: CAI_BaseNPC::vfunc544
char CAI_BaseNPC::vfunc544(CBaseEntity *pEnt, int a, int b)
{
	AIView_102709c0 *self = (AIView_102709c0 *)this;
	if (vfunc541()) {
		if (pEnt) {
			AIView_102709c0 *pAI = *(AIView_102709c0 **)((char *)pEnt + 0x94);
			if (pAI && self->m_nCount5bb0 <= 0 && self->m_nSquad5da4) {
				int other = pAI->m_nCount5bb0 <= 0 ? pAI->m_nSquad5da4 : 0;
				if (other == self->m_nSquad5da4 && pAI->m_nCount5bb0 <= 0)
					return 0;
			}
			if (vfunc541()->sub_102e0210((int)pEnt))
				vfunc494();
		}
		return vfunc541()->sub_102df700(self->GetNavigator()->GetNetwork(), (int)pEnt, a, b);
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10270aa0 size=0x2a
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"

void CAI_BaseNPC::sub_10270aa0(CBaseEntity *pEnt)
{
	unsigned int *pHandle = (unsigned int *)((char *)this + 0x5d90);
	if (pEnt)
		*pHandle = *pEnt->vfunc1();
	else
		*pHandle = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x10270ae0 size=0x2d
#include "CBaseEntity.h"
#include "CBasePlayer.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	unsigned int m_serial;
	int m_pad;
};

struct EntList {
	int m_hdr;
	EntInfo m_entries[1];
};

extern EntList *g_10566458;

CBaseEntity *CBasePlayer::sub_10270ae0()
{
	unsigned int h = *(unsigned int *)((char *)this + 0x5d90);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13))
			return info->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10270b20 size=0xaf7
#include "MvsnSec0.h"
#include "CHL2_Player.h"
#include "CNPC_VTzimisce.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CAI_BaseNPC_vfunc481.h"
#include "CVProfile.h"
#include "Vector.h"
#include "ehandle.h"
#include "CVariantCopy.h"
#include "CUnknown102718e0.h"
#include "CUnknown102e0150.h"
#include "CUnknown102dfd90.h"
#include "UTIL_Trace.h"

struct CDevFlag481 { virtual void vfunc0(); virtual bool vfunc1(); };
extern CDevFlag481 *g_10924a6c;
extern Vector g_1070d1b0;

struct CCycleCount481 {
	unsigned __int64 m_Int64;
	CCycleCount481() { m_Int64 = 0; }
	void Sample() {
		unsigned long *p = (unsigned long *)this;
		__asm {
			mov ecx, p
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

struct CWeapon481 { char m_pad[0x8c0]; float m_flRange8c0; };
struct CEnemy481 { char m_pad[0x9c]; CAI_BaseNPC *m_pNPC9c; };
struct CNPCFlags481 { char m_pad[0x14b8]; unsigned int m_flags14b8; };
struct CEnt481 { char m_pad[0xa8]; int m_na8; };
struct CNav481 { char m_pad[0x34]; char m_b34; };

struct COutputEHANDLE481 : COutputEvent {
	void Set(CUnknown102718e0 value, void *pActivator, void *pCaller)
	{
		((CVariantCopy *)this)->sub_1000b320(0xc, &value);
		sub_100cd300(*(CVariantCopy *)this, pActivator, pCaller, 0);
	}
};

struct CAI_BaseNPCView481 : CAI_BaseNPCUnit481 {
	CWeapon481 *sub_1032e7b0();
	void SetCondition(int c) { g_10924a6c->vfunc1(); sub_10269a20(c); }
	CBaseEntity *GetEnemy() { return (CBaseEntity *)vfunc167(); }
};

inline void PopGroup481(CVProfile *p)
{
	--p->m_nGroupStackDepth;
	int nNew = p->m_GroupIDStack[p->m_nGroupStackDepth];
	int nOld = p->m_GroupIDStack[p->m_nGroupStackDepth + 1];
	if (nNew != nOld && p->m_bVTuneGroupsEnabled && nOld == p->m_nVTuneGroupID)
		vtune(false);
}

inline void CVProfile::EnterScope(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted)
{
	if (m_enabled != 0 || !m_bAtRoot) {
		if (pszName != m_pCurNode->m_pszName)
			m_pCurNode = m_pCurNode->GetSubNode(pszName, detailLevel, pBudgetGroupName);
		m_pCurNode->EnterScope();
		m_bAtRoot = false;
	}
}

struct CVProfScope481 {
	CVProfScope481(const char *pszName, int detail, const char *pszGroup, bool bAssert)
	{
		g_109f3648->EnterScope(pszName, detail, pszGroup, bAssert);
	}
};

#define MAX481(a, b) ((a) > (b) ? (a) : (b))

inline int Zero481() { return 0; }
inline void ExitFinal481()
{
	CVProfile *p = g_109f3648;
	if (!p->m_bAtRoot || p->m_enabled) {
		CVProfNode *n = p->m_pCurNode;
		if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
			CCycleCount481 now;
			now.Sample();
			CCycleCount481 *pc = (CCycleCount481 *)&n->m_CurFrameTime;
			pc->m_Int64 = now.m_Int64 - pc->m_Int64;
			n->m_TotalTime += pc->m_Int64;
			PopGroup481(g_109f3648);
		}
		if (n->m_nRecursions == 0)
			p->m_pCurNode = p->m_pCurNode->m_pParent;
		p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
}

// TARGET: CAI_BaseNPC::vfunc481
void CAI_BaseNPC::vfunc481(CBaseEntity *pEnemy)
{
	CAI_BaseNPCView481 *v = (CAI_BaseNPCView481 *)this;
	CEntityVSlots *pEnt = (CEntityVSlots *)pEnemy;
	CVProfScope481 scope("CAI_BaseNPC_GatherEnemyConditions", 0, "Unaccounted", false);
	v->sub_10269b50(0x56);
	v->sub_10269b50(0x57);
	v->sub_10269b50(0x4a);
	v->sub_10269b50(0x48);
	CBaseEntity *pBlocker = 0;
	v->sub_10270aa0(0);
	if (!v->vfunc201(pEnemy, 0x2804091, (int *)&pBlocker, v->m_nSeeFailCount)) {
		if (v->m_nSeeFailCount < 10)
			v->m_nSeeFailCount++;
	} else
		v->m_nSeeFailCount = 0;

	if (v->m_nSeeFailCount >= 10) {
		CVProfScope481 scope2("CAI_BaseNPC_GatherEnemyConditions_Outputs", 0, "Unaccounted", false);
		v->sub_10270aa0(pBlocker);
		v->SetCondition(0x48);
		v->sub_10270180(v->GetEnemy(), 1);
		if (v->m_flags5d8c & 0x20000) {
			if (((CEnt481 *)v->GetEnemy())->m_na8) {
				v->m_OnE5eb4.sub_100cd660(v, v, 0);
				v->m_OnE5e6c.sub_100cd660(v, v, 0);
			} else
				v->m_OnE5e6c.sub_100cd660(v, v, 0);
		}
		v->m_flags5d8c &= ~0x20000;
		g_109f3648->ExitScope();
	} else {
		v->SetCondition(0x4a);
		if (v->vfunc363(pEnemy) && v->vfunc468(pEnemy)) {
			v->SetCondition(0x46);
			v->sub_10270180(v->GetEnemy(), 0);
		}
		if (!(v->m_flags5d8c & 0x20000)) {
			CVProfScope481 scope3("CAI_BaseNPC_GatherEnemyConditions_Outputs", 0, "Unaccounted", false);
			EHANDLE hEnemy;
			hEnemy = v->GetEnemy();
			if (((CEnt481 *)v->GetEnemy())->m_na8) {
				((COutputEHANDLE481 *)&v->m_OnE5e9c)->Set(*(CUnknown102718e0 *)&hEnemy, v, v);
				((COutputEHANDLE481 *)&v->m_OnE5e54)->Set(*(CUnknown102718e0 *)&hEnemy, v, v);
			} else
				((COutputEHANDLE481 *)&v->m_OnE5e54)->Set(*(CUnknown102718e0 *)&hEnemy, v, v);
			g_109f3648->ExitScope();
		}
		v->m_flags5d8c |= 0x20000;
	}

	if (!pEnt->slot158()) {
		v->SetCondition(0x58);
		v->sub_10269b50(0x46);
		v->sub_10269b50(0x48);
		g_109f3648->ExitScope();
		return;
	}

	float flDist = v->sub_10270890(pEnemy);
	g_109f3648->EnterScope("CAI_BaseNPC_GatherEnemyConditions_SeeEnemy", 0, "Unaccounted", false);
	if (v->sub_10269aa0(0x46)) {
		if (v->m_nSeeFailCount == 0) {
			if (*pEnt->slot198() != g_1070d1b0) {
				float flRand = enginerandom->vfunc1(-0.05f, 0.0f);
				Vector vecPos = *pEnt->slot217() - *pEnt->slot198() * flRand;
				v->vfunc544(pEnemy, (int)&vecPos, (int)((char *)pEnemy + 0x3d4));
			} else
				v->vfunc544(pEnemy, (int)pEnt->slot217(), (int)((char *)pEnemy + 0x3d4));
		}
		CAI_BaseNPC *pNPC = ((CEnemy481 *)pEnemy)->m_pNPC9c;
		if (pNPC && pNPC->vfunc363((CBaseEntity *)v)) {
			v->SetCondition(0x56);
			v->sub_10269b50(0x57);
		} else {
			v->sub_10269b50(0x56);
			v->SetCondition(0x57);
		}
	}
	g_109f3648->ExitScopeInlined();

	float flMaxDist = v->m_flt5de4;
	if (v->sub_1032e7b0() && v->sub_10269aa0(0x46))
		flMaxDist = MAX481(v->m_flt5de4, v->sub_1032e7b0()->m_flRange8c0);
	if (flDist >= flMaxDist)
		v->SetCondition(0x55);
	else
		v->sub_10269b50(0x55);

	if (v->vfunc564())
		v->vfunc561((CAI_BaseNPC *)v->vfunc167(), flDist);
	else
		v->vfunc560();
	v->sub_10271900();
	if (!((CNav481 *)v->m_pNavigator5d34)->m_b34 && v->vfunc530(v->GetEnemy()))
		v->SetCondition(0x59);

	if (gpGlobals->curtime - v->vfunc541()->sub_102e0150((void *)v->vfunc167()) > 8.0f
		&& !v->vfunc541()->sub_102e0210((int)v->m_hFocus5ce0.Get())
		&& !v->sub_10269aa0(0x46)) {
		Vector vecLKP;
		v->vfunc541()->sub_102dfed0(&vecLKP, v->GetEnemy());
		CNPCFlags481 *pNPC = (CNPCFlags481 *)v->m_pAI0098;
		if (pNPC) {
			if ((pNPC->m_flags14b8 & 0x8000) == 0x8000) {
				pNPC->m_flags14b8 &= ~0x8000;
				((CUnknown102dfd90 *)v->vfunc541())->sub_102dfd90(v->GetEnemy());
			}
		} else {
			Vector vecDelta = vecLKP - *(const Vector *)v->vfunc217();
			if (FastSqrt(vecDelta.y * vecDelta.y + vecDelta.x * vecDelta.x) < 48.0f && !v->sub_10269aa0(0x46))
				((CUnknown102dfd90 *)v->vfunc541())->sub_102dfd90(v->GetEnemy());
		}
		if (!v->sub_10269aa0(0x46) && v->sub_10269aa0(0x59)) {
			CGameTrace tr;
			UTIL_TraceLine(v->vfunc193(), vecLKP, 0x2804091, v, 0, &tr);
			if (tr.m_fraction != 1.0)
				((CUnknown102dfd90 *)v->vfunc541())->sub_102dfd90(v->GetEnemy());
		}
	}

	(void)Zero481();
	ExitFinal481();
}
// END FUNCTION

// FUNCTION: 0x102718e0 size=0xd
#include "CUnknown102718e0.h"
CUnknown102718e0 *CUnknown102718e0::sub_102718e0(const CUnknown102718e0 *other)
{
	m_unk0 = other->m_unk0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10271900 size=0x19a
#include "CUnknown102e0150.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "CAI_Navigator.h"
#include "CUnknown102ee120.h"
#include "CUnknown102ee1a0.h"
#include "CUnknown102f2fc0.h"
#include "ehandle.h"
#include "CGlobalEntityList.h"
#include <math.h>
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "CAI_BaseNPC_vfunc144.h"
#include "CCineNPC.h"
#include "CUnknown103158f0.h"
#include "IPhysicsObject.h"
#include "ConVar.h"

// The game's first decliner of the header inline EHandleEntityList::LookupEntity in this unit is
// CAI_BaseNPC::Event_Killed (0x10265ad0, judged 0 below as a same-unit copy): its LookupEntity COMDAT is compiled
// before CineCleanup, so VC6 knows the call's side effects (not its registers) there, as in the game.
extern ConVar g_106bbaa0;
extern ConVar g_10924a68;
#define FILE_144 "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp"

void __cdecl sub_101cf390(CAI_BaseNPC *pEnt, const Vector &mins, const Vector &maxs);
float __cdecl sub_102d61e0(int hull);
int __cdecl sub_101cd250(CAI_BaseNPC *pEnt, int mask, CBaseEntity *pIgnore);


namespace block_10271900
{
struct CScriptView144
{
	char m_pad0000[0x204];
	unsigned int m_spawnflags;
	char m_pad0208[0x5f91 - 0x208];
	char m_bPlayedSequence;
};

struct CDamageInfo144 : CAI_NPCDamageRecord
{
	CBaseEntity *GetAttacker() const { return m_pInflictor; }
};

struct CEventKilled144 : CAI_BaseNPCUnit144
{
	IPhysicsObject *VPhysicsGetObject() const { return m_pPhysObj36c; }
	void SetIdealStateDbg(int state, const char *pszFile, int nLine) { m_pszFile1b3c = pszFile; m_nLine1b40 = nLine; m_nIdealState5cc4 = state; }
	void SetTouchNull() { *(int *)((char *)this + 0x1ec) = 0; }
	void SetCondition(int iCondition) { if (g_10924a68.GetBool()) {} sub_10269a20(iCondition); }
	void sub_10265ad0(const CDamageInfo144 &info);
};

void CEventKilled144::sub_10265ad0(const CDamageInfo144 &info)
{
	if (m_pSchedule5c38 && (int)m_pSchedule5c38 == sub_102cc1f0(0x3a))
		return;

	if (m_nState5cc0 == 4 && m_hScript5d74.Get())
	{
		CScriptView144 *pScript = (CScriptView144 *)m_hScript5d74.Get();
		if (pScript->m_bPlayedSequence && (((CScriptView144 *)m_hScript5d74.Get())->m_spawnflags & 0x2080) != 0x80)
		{
			m_LastDamage = info;
			return;
		}
		((CCineNPC *)m_hScript5d74.Get())->sub_101a8c30();
		IPhysicsObject *pPhys;
		if (g_106bbaa0.GetBool() && (pPhys = VPhysicsGetObject()))
		{
			Vector vecTmp;
			Vector vecPos;
			vecPos = *vfunc263(&vecTmp);
			pPhys->vfunc39((float *)&vecPos, 0);
		}
	}

	vfunc511();
	if (m_n153c == -1 || !m_h1538.Get())
		vfunc488();

	sub_10265a90(info.GetAttacker());
	if (((CBaseEntity *)this)->sub_100b3700() & 0x2000)
	{
		SetTouchNull();
		sub_10265a40();
	}
	sub_1032b9b0((int)&info);
	SetIdealStateDbg(7, FILE_144, 0x217);
	SetCondition(0x4c);
	m_hAttacker5b7c = info.GetAttacker();
	m_b5b80 = 1;
	sub_1028ae60();
	if (m_pSquad5da4)
		((CUnknown103158f0 *)m_pSquad5da4)->sub_103158f0((CBaseEntity *)this);
	if ((char)vfunc552())
		sub_102695d0();
	else
		sub_101babc0(0x20, vfunc217(), 0x180, 30.0f, 0);
	SetIdealStateDbg(7, FILE_144, 0x241);
	sub_1026e340(7);
}
}

extern Vector g_1070d1b0;

struct CAI_BaseNPCView : CAI_BaseNPC
{
	char m_pad04[0x5ce0 - 4];
	EHANDLE m_h5ce0;
	char m_pad5ce4[0x5d34 - 0x5ce4];
	CAI_Navigator *m_pNav;

	CAI_Navigator *GetNavigator() { return m_pNav; }
};

void CAI_BaseNPC::sub_10271900()
{
	CAI_BaseNPCView *p = (CAI_BaseNPCView *)this;
	if (p->GetNavigator()->m_i18 != 3 && p->GetNavigator()->m_i18 != 1 && p->GetNavigator()->sub_102ee620() == 2)
	{
		if (p->m_h5ce0 != p->GetNavigator()->sub_102ee160())
		{
			p->GetNavigator()->sub_102ed310((CBaseEntity *)p->m_h5ce0.Get(), &g_1070d1b0);
			return;
		}
		Vector vecGoal;
		vfunc541()->sub_102dfed0(&vecGoal, (CBaseEntity *)vfunc167());
		float flA = ((CUnknown102ee1a0 *)p->GetNavigator())->sub_102ee1a0();
		float flB = ((CUnknown102f2fc0 *)p->GetNavigator())->sub_102f2fc0();
		vfunc563((CBaseEntity *)vfunc167(), &vecGoal, &flA, &flB);
		const Vector *pDest = p->GetNavigator()->sub_102ee140();
		if (pDest->DistTo(vecGoal) > 80.0f || fabs(flB - ((CUnknown102f2fc0 *)p->GetNavigator())->sub_102f2fc0()) > 12.0)
		{
			((CUnknown102ee120 *)p->GetNavigator())->sub_102ee1c0(*(int *)&flA);
			((CUnknown102ee120 *)p->GetNavigator())->sub_102f2fe0(*(int *)&flB);
			p->GetNavigator()->sub_102ee200();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10271b10 size=0x188
#include "CGlobalEntityList.h"
#include "CAI_BaseNPC.h"
struct NavX {
    int m_pad[6];
    int m_i18;
    int sub_100037e2();
    CAI_BaseNPC *sub_10015906();
    void sub_10008abc(CAI_BaseNPC *pEnt, const float *pVec);
    unsigned int sub_10004831();
    float *sub_100071fd();
    void sub_10007b4e();
};
extern CGlobalEntityList *g_10566458;
extern float g_1070d1b0[3];
extern float (*g_10579660)(float);
extern const float g_104454c8;

struct EH {
    unsigned int m_Index;
    CAI_BaseNPC *Get() const
    {
        if (m_Index != 0xffffffff) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_Index & 0x1fff];
            if ((unsigned int)s->m_Serial == (m_Index >> 13))
                return (CAI_BaseNPC *)s->m_pEntity;
        }
        return 0;
    }
    bool IsValid() const
    {
        if (m_Index == 0xffffffff)
            return false;
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_Index & 0x1fff];
        return (unsigned int)s->m_Serial == (m_Index >> 13) && s->m_pEntity;
    }
};

#define NAV (*(NavX **)((char *)self + 0x5d34))
#define HND ((EH *)((char *)self + 0x5ce4))

void __fastcall sub_10271b10(CAI_BaseNPC *self)
{
    if (NAV->m_i18 == 3 || NAV->m_i18 == 1)
        return;
    if (NAV->sub_100037e2() != 1)
        return;
    CAI_BaseNPC *goal = NAV->sub_10015906();
    if (HND->Get() != goal) {
        NAV->sub_10008abc(HND->Get(), g_1070d1b0);
        return;
    }
    if (!(NAV->sub_10004831() & 4))
        return;
    if (HND->IsValid()) {
        CAI_BaseNPC *e = HND->Get();
        NavX *n = NAV;
        float *pos = e->vfunc217();
        float *g = n->sub_100071fd();
        float dx = g[0] - pos[0];
        float dy = g[1] - pos[1];
        float dz = g[2] - pos[2];
        float d = g_10579660(dy * dy + (dz * dz + dx * dx));
        if (!(d > g_104454c8))
            return;
    }
    NAV->sub_10007b4e();
}
// END FUNCTION

// FUNCTION: 0x10271d10 size=0x1a2
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CVProfile.h"
#include "ehandle.h"

extern CAI_BaseNPC *g_10924a6c;
extern "C" __declspec(dllimport) void vtune(int);

struct CCycleCountX {
	unsigned __int64 m_Int64;
	void Sample() {
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx+4], edx
		}
	}
	void End() {
		CCycleCountX t;
		t.m_Int64 = 0;
		t.Sample();
		m_Int64 = t.m_Int64 - m_Int64;
	}
	void Add(const CCycleCountX &r) {
		m_Int64 += r.m_Int64;
	}
};

struct CNodeExit : CVProfNode {
	void Exit() {
		if (--m_nRecursions == 0 && m_nCurFrameCalls != 0) {
			CCycleCountX *cur = (CCycleCountX *)&m_CurFrameTime;
			cur->End();
			((CCycleCountX *)&m_TotalTime)->Add(*cur);
			CVProfile *p = g_109f3648;
			p->m_nGroupStackDepth--;
			int a = p->m_GroupIDStack[p->m_nGroupStackDepth + 1];
			int b = p->m_GroupIDStack[p->m_nGroupStackDepth];
			if (b != a && p->m_bVTuneGroupsEnabled && a == p->m_nVTuneGroupID)
				vtune(0);
		}
	}
};

// TARGET: CAI_BaseNPC::sub_10271d10
void CAI_BaseNPC::sub_10271d10(CBaseEntity *pTarget)
{
	CVProfile *p = g_109f3648;
	if (p->m_enabled || !p->m_bAtRoot) {
		if (p->m_pCurNode->m_pszName != "CAI_Memory_CheckTarget")
			p->m_pCurNode = p->m_pCurNode->GetSubNode("CAI_Memory_CheckTarget", 0, "Unaccounted");
		p->m_pCurNode->EnterScope();
		p->m_bAtRoot = false;
	}
	sub_10269b50(0x4b);
	sub_10269b50(0x49);
	if (!vfunc201(pTarget, 0x2804091, 0, 0)) {
		g_10924a6c->vfunc1();
		sub_10269a20(0x49);
	} else {
		g_10924a6c->vfunc1();
		sub_10269a20(0x4b);
	}
	sub_10271b10();
	p = g_109f3648;
	if (!p->m_bAtRoot || p->m_enabled) {
		CNodeExit *n = (CNodeExit *)p->m_pCurNode;
		n->Exit();
		if (n->m_nRecursions == 0)
			p->m_pCurNode = p->m_pCurNode->m_pParent;
		p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x10271f30 size=0x3
void __stdcall sub_10271f30(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10271f50 size=0x7
#include "CAI_BaseNPC.h"
int CAI_BaseNPC::vfunc375(int a0)
{
    return a0;
}
// END FUNCTION

// FUNCTION: 0x10271f70 size=0x58
#include "CAI_BaseNPC.h"

struct CNpcView376 : public CAI_BaseNPC
{
	virtual int s569(int a);
	virtual int s570(int a);
};

// TARGET: CAI_BaseNPC::vfunc376
int CAI_BaseNPC::vfunc376(int act)
{
	if (!(vfunc513() & 0x8000000))
		return act;
	CNpcView376 *p = (CNpcView376 *)this;
	if (act == 0x54)
		return p->s570(*(int *)((char *)this + 0x5ddc));
	if (act == 6 || (act == 1 && (*(unsigned char *)((char *)this + 0x5d8c) & 2)))
		return p->s569(*(int *)((char *)this + 0x5ddc));
	return act;
}
// END FUNCTION

// FUNCTION: 0x10271ff0 size=0xf7
#include "CAI_BaseNPC.h"
#include "CBaseAnimating.h"

int CAI_BaseNPC::sub_10271ff0(int act, int *pOut)
{
    int i = 0;
    act = vfunc375(act);
    int a2 = vfunc381(act);
    if (pOut)
        *pOut = a2;
    int fb = act;
    int cur = act;
    int nxt;
    do {
        i++;
        int t = vfunc376(cur);
        if (t != cur)
            fb = t;
        nxt = vfunc381(t);
        if (nxt == cur)
            break;
        cur = nxt;
    } while (i < 5);
    if (cur == 0x18)
        return cur;
    CBaseAnimating *pAnim = (CBaseAnimating *)this;
    if (pAnim->sub_1008dd30(nxt, -1) >= 0)
        return nxt;
    cur = fb;
    if (cur == nxt || pAnim->sub_1008dd30(cur, -1) < 0) {
        if (a2 != cur && pAnim->sub_1008dd30(a2, -1) >= 0)
            return act;
        cur = act;
        if (cur == a2 || pAnim->sub_1008dd30(cur, -1) < 0) {
            if (cur == 0x13) {
                act = 9;
                cur = *(volatile int *)&act;
            }
        }
    }
    return cur;
}
// END FUNCTION

// FUNCTION: 0x10272130 size=0x240
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPC.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

__declspec(dllimport) void DevMsg(const char *pMsg, ...);
const char *sub_10412550(int act);
extern CAI_BaseNPC *g_10920334;
extern int g_1090fdbc;
extern float g_1090fe04;

struct CNPCObj98 { void sub_10295a80(int a, int *pSeq, int *pTrans, int *pOut); };
struct CScriptCineView { char m_pad0000[0x5f50]; const char *m_pszCustomMove; };

void CAI_BaseNPC::sub_10272130(int act, int *pSequence, int *pTranslated, int *pOut)
{
	for (;;)
	{
		*pSequence = -1;
		*pTranslated = sub_10271ff0(act, pOut);
		if (act == 0x18)
		{
			if (!EHandle_Get(*(unsigned int *)((char *)this + 0x5d74)))
				goto common;
			const char *pszMove = ((CScriptCineView *)EHandle_Get(*(unsigned int *)((char *)this + 0x5d74)))->m_pszCustomMove;
			if (!pszMove)
				pszMove = g_106b8540;
			*pSequence = sub_1008f7b0(pszMove);
			if (*pSequence != -1)
				return;
			DevMsg("SCRIPT_CUSTOM_MOVE: %s has no sequence:%s\n", sub_1009f200(), ((CScriptCineView *)EHandle_Get(*(unsigned int *)((char *)this + 0x5d74)))->m_pszCustomMove);
			*pSequence = sub_1008dc40(9, -1);
			goto check;
		}
		if (act != 0xf1 || !*(CNPCObj98 **)((char *)this + 0x98))
			goto common;
		(*(CNPCObj98 **)((char *)this + 0x98))->sub_10295a80(0xf1, pSequence, pTranslated, pOut);
		if (*pSequence != -1)
			return;
		{
			int nTemp;
			const char *pszName = *vfunc9(&nTemp);
			if (!pszName)
				pszName = g_106b8540;
			DevMsg("%s has no sequence for act:ACT_DISPOSITION\n", pszName);
		}
		goto check;
common:
		*pSequence = sub_1008dc40(*pTranslated, -1);
		if (*pSequence != -1)
			return;
		if ((g_10920334 != this && g_1090fdbc != *pTranslated) || gpGlobals->curtime - g_1090fe04 > 5.0)
		{
			int nTemp;
			const char *pszName = *vfunc9(&nTemp);
			if (!pszName)
				pszName = g_106b8540;
			DevMsg("%s has no sequence for act:%s (%s)\n", sub_1009f200(), sub_10412550(*pTranslated), pszName);
			g_10920334 = this;
			g_1090fdbc = *pTranslated;
			g_1090fe04 = gpGlobals->curtime;
		}
		if (*pTranslated == 0x13)
		{
			*pTranslated = 9;
			*pSequence = sub_1008dc40(9, -1);
		}
check:
		if (*pSequence != -1)
			return;
		if (act == 0xf1)
		{
			*pSequence = 0;
			return;
		}
		act = 0xf1;
	}
}
// END FUNCTION

// FUNCTION: 0x10272400 size=0x6e
#include "CAI_BaseNPC.h"

#define NPCF(type, off) (*(type *)((char *)this + (off)))

// TARGET: CAI_BaseNPC::vfunc311
void CAI_BaseNPC::vfunc311(int a, int b, int c)
{
	if (c >= 0)
	{
		if (NPCF(int, 0xfec) != a)
			vfunc465(a);
		NPCF(int, 0xfec) = a;
		NPCF(int, 0xff0) = a;
		NPCF(int, 0x5cd4) = b;
		NPCF(int, 0x5cd0) = b;
		NPCF(int, 0xff4) = b;
		NPCF(int, 0x5ccc) = c;
		sub_10260a50(c);
		NPCF(int, 0x6f8) = 0;
		NPCF(int, 0x170) = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10272490 size=0xf3
#include "CBaseCombatCharacter.h"
#include "CAI_BaseNPC.h"
#include "CVSoundActivityTable_t.h"

#define SN10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SN100(p) SN10(p##0) SN10(p##1) SN10(p##2) SN10(p##3) SN10(p##4) SN10(p##5) SN10(p##6) SN10(p##7) SN10(p##8) SN10(p##9)

// The NPC's virtual table up to slot 533.
struct CNPCSlots533
{
	SN100(a) SN100(b) SN100(c) SN100(d) SN100(e) SN10(f0) SN10(f1) SN10(f2)
	virtual void g0(); virtual void g1(); virtual void g2();
	virtual Vector vfunc533(int act, int a);
};

struct CNPCUnit : CAI_BaseNPC
{
	float sub_10091080(int seq);	// sequence duration (stub 0x10009813)
	void sub_1032a910(int d, float duration);	// CBaseCombatCharacter member (stub 0x100101ea)
	void sub_1009f380(const Vector &vec);	// stub 0x10015bfe
};

struct CMotorTick
{
	void sub_102e1cf0();	// stub 0x10011af9
};

extern CVSoundActivityTable_t g_1073dd58;

// TARGET: CAI_BaseNPC::sub_10272490
void CAI_BaseNPC::sub_10272490(int act, int seq, int c, int d)
{
    CNPCUnit *self = (CNPCUnit *)this;
    *(int *)((char *)this + 0xff4) = c;
    if (seq > -1) {
        if ((*(int *)((char *)this + 0x6f0) != seq || !*(char *)((char *)this + 0x65d))
            && ((*(int *)((char *)this + 0xfec) != 9 && *(int *)((char *)this + 0xfec) != 0x13) || (act != 9 && act != 0x13)))
            *(int *)((char *)this + 0x6f8) = 0;
        sub_10260a50(seq);
        self->sub_1032a910(d, self->sub_10091080(seq));
    } else {
        sub_10260a50(0);
    }
    self->sub_1009f380(((CNPCSlots533 *)this)->vfunc533(act, *(int *)((char *)this + 0xff4)));
    if (*(int *)((char *)this + 0xfec) != act)
        vfunc465(act);
    if (*(int *)((char *)this + 0xfec) != *(int *)((char *)this + 0xff4) && !*(char *)((char *)this + 0x5cd8))
        g_1073dd58.sub_101f6010((CBaseCombatCharacter *)this, *(int *)((char *)this + 0xff4), *(int *)((char *)this + 0xfec));
    *(int *)((char *)this + 0xfec) = act;
    (*(CMotorTick **)((char *)this + 0x5d44))->sub_102e1cf0();
}
// END FUNCTION

// FUNCTION: 0x102725d0 size=0x5f
#include "CAI_BaseNPC.h"

struct CAI_BaseNPCView310 : CAI_BaseNPC
{
	char pad0004[0xfec - 4];
	int m_nActivity;
	int m_nIdealActivity;
	char padff4[0x5ccc - 0xff4];
	int m_nSeq;
	int m_nA;
	int m_nB;
};

// TARGET: CAI_BaseNPC::vfunc310
void CAI_BaseNPC::vfunc310(int act)
{
	CAI_BaseNPCView310 *p = (CAI_BaseNPCView310 *)this;
	if (p->m_nActivity != act && (act == 0 || p->m_nActivity != 2)) {
		p->m_nIdealActivity = act;
		sub_10272130(act, &p->m_nSeq, &p->m_nA, &p->m_nB);
		sub_10272490(p->m_nIdealActivity, p->m_nSeq, p->m_nA, p->m_nB);
	}
}
// END FUNCTION

// FUNCTION: 0x10272650 size=0x3c
#include "CAI_BaseNPC.h"

#define CSV_ROW(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CNPCSlot310View
{
	CSV_ROW(r0)
	CSV_ROW(r1)
	CSV_ROW(r2)
	CSV_ROW(r3)
	CSV_ROW(r4)
	CSV_ROW(r5)
	CSV_ROW(r6)
	CSV_ROW(r7)
	CSV_ROW(r8)
	CSV_ROW(r9)
	CSV_ROW(r10)
	CSV_ROW(r11)
	CSV_ROW(r12)
	CSV_ROW(r13)
	CSV_ROW(r14)
	CSV_ROW(r15)
	CSV_ROW(r16)
	CSV_ROW(r17)
	CSV_ROW(r18)
	CSV_ROW(r19)
	CSV_ROW(r20)
	CSV_ROW(r21)
	CSV_ROW(r22)
	CSV_ROW(r23)
	CSV_ROW(r24)
	CSV_ROW(r25)
	CSV_ROW(r26)
	CSV_ROW(r27)
	CSV_ROW(r28)
	CSV_ROW(r29)
	CSV_ROW(r30)
	virtual void vfunc310(int a);
};

namespace block_10272650 {
	struct CAI_BaseNPCUnit10272650 : CAI_BaseNPC
	{
		void sub_10272650(int nValue);
		void sub_10272130(int nValue, int *pA, int *pB, int *pC);
	};
}

// TARGET: block_10272650::CAI_BaseNPCUnit10272650::sub_10272650
void block_10272650::CAI_BaseNPCUnit10272650::sub_10272650(int nValue)
{
	if (nValue == 0)
	{
		((CNPCSlot310View *)this)->vfunc310(0);
		return;
	}
	*(int *)((char *)this + 0xff0) = nValue;
	sub_10272130(nValue, (int *)((char *)this + 0x5ccc), (int *)((char *)this + 0x5cd0), (int *)((char *)this + 0x5cd4));
}
// END FUNCTION

// FUNCTION: 0x102726a0 size=0xb7
#include "CAI_BaseNPC.h"
#include "CBaseAnimating.h"

struct CNPCSlots310
{
	CAI_NPC_V(0) CAI_NPC_V(1) CAI_NPC_V(2) CAI_NPC_V(3) CAI_NPC_V(4) CAI_NPC_V(5) CAI_NPC_V(6) CAI_NPC_V(7) CAI_NPC_V(8) CAI_NPC_V(9)
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19)
	CAI_NPC_V10(20) CAI_NPC_V10(21) CAI_NPC_V10(22) CAI_NPC_V10(23) CAI_NPC_V10(24) CAI_NPC_V10(25) CAI_NPC_V10(26) CAI_NPC_V10(27) CAI_NPC_V10(28) CAI_NPC_V10(29)
	CAI_NPC_V10(30)
	virtual void vfunc310(int a);
};

struct CNpcAnimFields
{
	char m_pad0000[0x6f0];
	int m_nSequence;
	char m_pad06f4[0xff0 - 0x6f4];
	int m_IdealActivity;
	char m_pad0ff4[0x5ccc - 0xff4];
	int m_nIdealSequence;
	int m_IdealTranslatedActivity;
	int m_IdealWeaponActivity;

	int GetSequence() { return m_nSequence; }
	int sub_100936e0(int sequence, int a, int b);
};

void CAI_BaseNPC::sub_102726a0()
{
	CNpcAnimFields *pFields = (CNpcAnimFields *)this;
	int iNextSequence = pFields->sub_100936e0(pFields->GetSequence(), pFields->m_nIdealSequence, 0);
	if (iNextSequence != -1) {
		if (iNextSequence != pFields->m_nIdealSequence) {
			int eWeaponActivity = 2;
			int eTranslatedActivity = 2;
			int eNextActivity = ((CBaseAnimating *)this)->sub_10090020(iNextSequence);
			if (eNextActivity != -1) {
				int iJunk;
				sub_10272130(eNextActivity, &iJunk, &eTranslatedActivity, &eWeaponActivity);
			}
			sub_10272490(2, iNextSequence, eTranslatedActivity, eWeaponActivity);
		} else {
			sub_10272490(pFields->m_IdealActivity, pFields->m_nIdealSequence, pFields->m_IdealTranslatedActivity, pFields->m_IdealWeaponActivity);
		}
	} else {
		((CNPCSlots310 *)this)->vfunc310(pFields->m_IdealActivity);
	}
}
// END FUNCTION

// FUNCTION: 0x10272790 size=0x21
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc466
bool CAI_BaseNPC::vfunc466()
{
    int r = ((CAI_BaseNPC *)this)->vfunc464();
    if (r == 4 && *(int *)((char *)this + 0xfec) != 2)
        return false;
    return true;
}
// END FUNCTION

// FUNCTION: 0x102727d0 size=0xe6
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPC.h"
#include "ScopeTrace.h"

void CAI_BaseNPC::sub_102727d0()
{
    ScopeTrace trace("CAI_BaseNPC::MaintainActivity", this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc);
    if (vfunc466()) {
        int nIdeal = *(int *)((char *)this + 0xff0);
        int nCurrent = *(int *)((char *)this + 0xfec);
        if (nCurrent != nIdeal || *(int *)((char *)this + 0x6f0) != *(int *)((char *)this + 0x5ccc)) {
            if (nCurrent == 2) {
                if (*((char *)this + 0x65c))
                    sub_102726a0();
            } else {
                sub_10272130(nIdeal, (int *)((char *)this + 0x5ccc), (int *)((char *)this + 0x5cd0), (int *)((char *)this + 0x5cd4));
                sub_102726a0();
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10272900 size=0x23
// TARGET: sub_10272900
int __fastcall sub_10272900(void *pSelf)
{
    char *p = (char *)pSelf;
    if (*(p + 0x65c) != 0 && *(int *)(p + 0x6f0) == *(int *)(p + 0x5ccc)) {
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10272940 size=0x6f
#include "CAI_BaseNPC.h"
#include "CBaseAnimating.h"

extern "C" __declspec(dllimport) void DevWarning(int level, const char *fmt, ...);

struct CUnknownEmbed102e1cf0
{
	void sub_102e1cf0();
};

void CAI_BaseNPC::sub_10272940(const char *label)
{
	int sequence = ((CBaseAnimating *)this)->sub_1008f7b0(label);
	if (sequence > -1) {
		if (*(int *)((char *)this + 0x6f0) != sequence || !*((char *)this + 0x65d))
			*(int *)((char *)this + 0x6f8) = 0;
		sub_10260a50(sequence);
		(*(CUnknownEmbed102e1cf0 **)((char *)this + 0x5d44))->sub_102e1cf0();
	} else {
		DevWarning(2, "%s has no sequence named:%f\n", ((CBaseAnimating *)this)->sub_1009f200(), label);
		*(int *)((char *)this + 0x6f0) = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x102729d0 size=0xad
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CGlobalEntityList.h"

#define SO_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SO_V100(p) SO_V10(p##0) SO_V10(p##1) SO_V10(p##2) SO_V10(p##3) SO_V10(p##4) SO_V10(p##5) SO_V10(p##6) SO_V10(p##7) SO_V10(p##8) SO_V10(p##9)

// the vtable of the object at +0x98 up to slot 585, then slot 586
struct CFocusSourceSlots
{
	SO_V100(a0) SO_V100(a1) SO_V100(a2) SO_V100(a3) SO_V100(a4)
	SO_V10(b0) SO_V10(b1) SO_V10(b2) SO_V10(b3) SO_V10(b4) SO_V10(b5) SO_V10(b6) SO_V10(b7)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5();
	virtual unsigned int *GetFocusHandle(void *pOut);	// slot 586
};

struct CFocusKind
{
	int sub_102ee620();	// the kind (stub 0x100037e2)
};

struct SHandleSlot
{
	CBaseEntity *m_pEntity;
	int m_Serial;
};

extern CGlobalEntityList *g_10566458;

static inline CBaseEntity *ResolveHandle(unsigned int h)
{
	if (h == 0xffffffff)
		return 0;
	SHandleSlot *s = (SHandleSlot *)&g_10566458->m_Slots[h & 0x1fff].m_pEntity;
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

CBaseEntity *CAI_BaseNPC::sub_102729d0()
{
	if ((*(CFocusKind **)((char *)this + 0x5d34))->sub_102ee620() == 2)
		return ResolveHandle(*(unsigned int *)((char *)this + 0x5ce0));
	if ((*(CFocusKind **)((char *)this + 0x5d34))->sub_102ee620() == 1)
		return ResolveHandle(*(unsigned int *)((char *)this + 0x5ce4));
	if ((*(CFocusKind **)((char *)this + 0x5d34))->sub_102ee620() == 7) {
		void *pOut;
		return ResolveHandle(*(*(CFocusSourceSlots **)((char *)this + 0x98))->GetFocusHandle(&pOut));
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10272ab0 size=0x39f
class Vector;
__forceinline void VectorSubtract(const Vector &a, const Vector &b, Vector &c);
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "UTIL_Trace.h"
#include "CUnknown1003ff80.h"

Vector sub_102808c0(const Vector *a, const Vector *b, float c, float d);
float sub_10146150(const Vector *v);
struct CUnknown1004f860 { void *sub_1004f860(); };

float CAI_BaseNPC::sub_10272ab0(const Vector *pStart, const Vector *pEnd, float fGravity, float fArcSize, const Vector *pMins, const Vector *pMaxs, int nTarget, Vector *jumpVelocity, int *pBlockerOut)
{
	const Vector &vecStart = *pStart;
	const Vector &vecEnd = *pEnd;
	const Vector &mins = *pMins;
	const Vector &maxs = *pMaxs;
	CBaseEntity *pTarget = (CBaseEntity *)nTarget;
	CBaseEntity **pBlocker = (CBaseEntity **)pBlockerOut;
	Vector rawJumpVel = sub_102808c0(&vecStart, &vecEnd, fGravity, fArcSize);
	*jumpVelocity = rawJumpVel;
	Vector vecFrom = vecStart;

	Vector vecDelta = vecStart - vecEnd;
	float jumpTime = vecDelta.Length2D() / rawJumpVel.Length2D();
	float timeStep = jumpTime * 0.1;

	Vector gravity(0, 0, fGravity);

	for (float flTime = 0; flTime < jumpTime - 0.1; flTime += timeStep)
	{
		Vector nextPos = vecFrom + (rawJumpVel - 0.5f * gravity * timeStep) * timeStep;

		if ((flTime + timeStep) > jumpTime)
		{
			nextPos = vecEnd;
		}

		CGameTrace tr;
		((CUnknown1003ff80 *)&tr)->sub_1003ff80();
		Ray_t ray;
		((CUnknown1004f860 *)&ray)->sub_1004f860();
		ray.sub_1006dec0(vecFrom, &nextPos.x, &mins.x, &maxs.x, 1, 0);
		CTraceFilterSimple traceFilter(this, 0);
		g_1070b254->vfunc4(&ray, 0x200400b, (CTraceFilterNoCharacterCollide *)&traceFilter, &tr);
		if (g_10738960.sub_1005f190())
			sub_10146570((const Vector *)&tr.m_startpos, (const Vector *)&tr.m_endpos, 0xff, 0xff, 0, 1, -1.0f);

		if (tr.m_startsolid || tr.m_fraction < 1.0)
		{
			CBaseEntity *pEntity = tr.m_pEnt;
			if (pEntity == pTarget)
				return g_104454c4;
			*pBlocker = pEntity;
			Vector vecHit = *(const Vector *)tr.m_endpos - vecStart;
			return sub_10146150(&vecHit);
		}

		rawJumpVel = rawJumpVel - gravity * timeStep;
		vecFrom = nextPos;
	}
	return g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x10272f40 size=0xe5
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "IPhysicsObject.h"
#include "Ent.h"

// TARGET: CAI_BaseNPC::sub_10272f40
float sub_100c65b0(void *pModel);
extern float g_104454c4;

void CAI_BaseNPC::sub_10272f40()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;

	if (pEnt->vfunc94() == 7)
		return;

	if (pEnt->m_obj36c)
		vfunc225();

	pEnt->sub_100a6150(1, 0, 0);

	IPhysicsObject *pPhys = (IPhysicsObject *)pEnt->m_obj36c;
	if (!pPhys)
		return;

	float flMass = sub_100c65b0(((CBaseAnimating *)this)->sub_100952d0(-1));
	if (flMass > g_104454c4)
	{
		pPhys->vfunc11(flMass);
	}
	else
	{
		float flOther = (float)(((Ent *)this)->sub_10336920() ? 0x5a : 0x41);
		pPhys->vfunc11(flOther);
	}

	IPhysicsShadowController *pShadow = pPhys->vfunc48();
	double flSpeed = (vfunc214()[1] + vfunc214()[0]) * 0.5;
	pShadow->vfunc4((float)(flSpeed * 0.5));
}
// END FUNCTION

// FUNCTION: 0x10273070 size=0xcf
#include "CAI_BaseNPC.h"
#include "Tier1.h"
int sub_102d6210(int hull);
int sub_102f9950();
int sub_102d6230(int hull);
int sub_102d6120(int hull);
int sub_102d6100(int hull);
void sub_101cf390(CAI_BaseNPC *p, int v, int w);
struct CNPC10273070View : CAI_BaseNPC { const char *sub_100ab4f0(); };
#define HULL (*(int *)((char *)this + 0x1568))
void CAI_BaseNPC::sub_10273070(char bForce)
{
	if ((sub_102d6210(HULL) & sub_102f9950()) != sub_102d6210(HULL)) {
		void (*pf)(const char *, ...) = g_109f3630;
		pf("\n****ERROR***\n");
		pf("%s is using hull %s which has not been precached.\n", ((CNPC10273070View *)this)->sub_100ab4f0(), (const char *)sub_102d6230(HULL));
		pf("Be sure that this class's GetUsedHullBits function includes that hull type.\n");
		pf("If it already is, this entity is probably spawned after the node graph is created.\n");
		pf("Have the class responsible for spawning it include it.\n");
		pf("****ERROR***\n\n");
	}
	if (*((char *)this + 0x5f2d) || bForce) {
		sub_101cf390(this, sub_102d6100(HULL), sub_102d6120(HULL));
		*((char *)this + 0x5f2d) = 0;
		if (*(int *)((char *)this + 0x36c))
			sub_10272f40();
	}
}
// END FUNCTION

// FUNCTION: 0x10273180 size=0x5c
#include "CAI_BaseNPC.h"

int sub_102d6160(int hull);
int sub_102d6140(int hull);
void sub_101cf390(CAI_BaseNPC *pNPC, int a, int b);

bool CAI_BaseNPC::sub_10273180(char bForce)
{
	char *pThis = (char *)this;
	if (!pThis[0x5f2d] || bForce) {
		sub_101cf390(this, sub_102d6140(*(int *)(pThis + 0x1568)), sub_102d6160(*(int *)(pThis + 0x1568)));
		pThis[0x5f2d] = 1;
		if (*(int *)(pThis + 0x36c))
			sub_10272f40();
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10273200 size=0x138
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CGameRules.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }


extern "C" int __cdecl strcmp(const char *, const char *);
#pragma intrinsic(strcmp)

extern CGameRules *g_1070ba0c;
void sub_101cd940(CBaseEntity *pEnt);

#define NPC_NAME (*(const char **)((char *)this + 0x26c))
#define NPC_WEAPON (*(const char **)((char *)this + 0x5dec))

void CAI_BaseNPC::vfunc103()
{
	ScopeTrace trace("CAI_BaseNPC::Spawn", this ? (STRINGR_F(NPC_NAME)) : g_105387dc);
	if (!g_1070ba0c->vfunc74()) {
		sub_101cd940((CBaseEntity *)this);
		return;
	}
	if (*(int *)((char *)this + 0x98) == 0 && (vfunc513() & 0x200000) && NPC_WEAPON) {
		if (strcmp(STRINGR_F(NPC_WEAPON), "0") && strcmp(STRINGR_F(NPC_WEAPON), "item_w_unarmed")) {
			void *pWeapon = sub_1032e120(STRINGR_F(NPC_WEAPON));
			if (pWeapon)
				vfunc383(pWeapon, 0);
		}
	}
	vfunc223();
	sub_10323a90();
}
// END FUNCTION

// FUNCTION: 0x10273390 size=0x2c1
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "CUnknown102ee270.h"
#include "globalvars.h"
#include "Vector.h"
#include <string.h>

extern int g_1093407c;

void sub_10272650(int a);
void sub_10273aa0();
void sub_1026d7b0();

struct CUnknown1026a2a0
{
    void sub_1026a2a0(int a);
};

struct CObj1a9c
{
    void sub_102cc7e0();
};

struct CObj5d34
{
    char m_pad00[0x2c];
    int m_field2c;
};

struct CCondBits5c5c
{
    unsigned int m_bits[6];
    void ClearAll() { if (this) memset(this, 0, sizeof(m_bits)); }
};

// TARGET: CAI_BaseNPC::sub_10273390
void CAI_BaseNPC::sub_10273390()
{
    char *pSelf = (char *)this;

    ((CBaseEntity *)this)->sub_100a9290(1);
    *(EHANDLE *)(pSelf + 0x5b7c) = (CBaseEntity *)0;
    *(bool *)(pSelf + 0x5b80) = false;
    ((CBaseAnimating *)this)->sub_100904a0();
    ((CBaseEntity *)this)->sub_100b3580(0x12000);
    *(float *)(pSelf + 0x3ec) = 1.0f;
    *(int *)(pSelf + 0x1fc) = 2;

    sub_102e0b40((float *)*(void **)(pSelf + 0x5d44));
    CAI_Motor *pMotor = (CAI_Motor *)*(void **)(pSelf + 0x5d44);

    float yaw = ((Vector *)((CAI_BaseNPC *)this)->vfunc221())->y;
    if (*(char *)((char *)pMotor + 0x28) != 0)
    {
        if (yaw >= 180.0f)
            yaw -= 180.0f;
        else
            yaw += 180.0f;
    }
    if (*(int *)((char *)pMotor + 0x1c) == 0x43340000)
        *(float *)((char *)pMotor + 0x34) = yaw;
    else
        *(float *)((char *)pMotor + 0x34) = pMotor->sub_102e0a80(yaw);

    *(int *)(pSelf + 0x208) = 100;
    *(int *)(pSelf + 0x200) = 0;
    *(const char **)(pSelf + 0x1b3c) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp";
    *(int *)(pSelf + 0x1b40) = 0x1af1;
    *(int *)(pSelf + 0x5cc4) = 1;

    if (((CBaseAnimating *)this)->sub_1008dd30(1, -1) >= 0)
    {
        sub_10272650(1);
    }
    else if (((CBaseAnimating *)this)->sub_1008dd30(0xf1, -1) >= 0)
    {
        sub_10272650(0xf1);
    }
    else
    {
        *(int *)(pSelf + 0x6f0) = 0;
    }

    *(char *)(pSelf + 0x1a40) = 0;
    *(int *)(pSelf + 0x1a44) = 0x202400b;
    ((CObj5d34 *)*(void **)(pSelf + 0x5d34))->m_field2c = g_1093407c;
    ((CAI_BaseNPC *)this)->sub_10280d30();
    ((CUnknown102ee270 *)*(void **)(pSelf + 0x5d34))->sub_102ee270();
    ((CBaseAnimating *)this)->sub_10095be0();
    ((CBaseAnimating *)this)->sub_1008f540();

    *(int *)(pSelf + 0x5ddc) = 0;
    *(int *)(pSelf + 0x5d8c) = 0;
    ((CAI_BaseNPC *)this)->sub_10279a50(0);
    *(float *)(pSelf + 0x5de4) = 1024.0f;
    ((CUnknown1026a2a0 *)this)->sub_1026a2a0(0x45400000);
    *(char *)(pSelf + 0x5cd8) = 0;

    unsigned int nFlags = *(unsigned int *)(pSelf + 0x204);
    unsigned char bFlag = (unsigned char)(nFlags >> 8);
    if (bFlag & 1)
    {
        *(float *)(pSelf + 0x5de4) = 1.0e9f;
        ((CUnknown1026a2a0 *)this)->sub_1026a2a0(0x45bb8000);
    }

    ((CCondBits5c5c *)(pSelf + 0x5c5c))->ClearAll();
    ((CObj1a9c *)(pSelf + 0x1a9c))->sub_102cc7e0();
    ((CObj1a9c *)(pSelf + 0x1ae0))->sub_102cc7e0();
    ((CAI_BaseNPC *)this)->sub_10274ca0();
    *(int *)(pSelf + 0x1f0) = (int)sub_1026d7b0;

    if (gpGlobals->curtime > 1.0)
    {
        ((void (__fastcall *)(void *))sub_10273aa0)(this);
    }
    else
    {
        ((CBaseEntity *)this)->sub_100ac4e0((int)sub_10273aa0, 0, 0);
        *(float *)(pSelf + 0x17c) = gpGlobals->curtime + 0.1;
    }

    *(char *)(pSelf + 0x1b28) = 0;
    *(int *)(pSelf + 0x5b58) = 0;
    *(float *)(pSelf + 0x5b5c) = gpGlobals->curtime;
    *(int *)(pSelf + 0x5b84) = 0;
    *(int *)(pSelf + 0x5b88) = 0;
    *(int *)(pSelf + 0x5b8c) = 0x7f7fffff;
    *(int *)(pSelf + 0x5cc8) = 0;
    *(int *)(pSelf + 0x5b98) = 10;
    *(EHANDLE *)(pSelf + 0x5ba8) = (CBaseEntity *)0;
    *(int *)(pSelf + 0x5b90) = 0;
    *(bool *)(pSelf + 0x5d78) = false;
    *(bool *)(pSelf + 0x5bc4) = false;
    ((CAI_BaseNPC *)this)->sub_10270180(0, 0);
    *(int *)(pSelf + 0x5d98) = 0;
    *(int *)(pSelf + 0x5d9c) = 0;
    *(int *)(pSelf + 0x5ce8) = 0;
    *(int *)(pSelf + 0x5d6c) = 0;
    *(int *)(pSelf + 0x5da0) = 0;
    *(int *)(pSelf + 0x5db4) = 0;
}
// END FUNCTION

// FUNCTION: 0x10273720 size=0x24
void __fastcall sub_100081c0(void *pSelf);

// TARGET: sub_10273720
char __fastcall sub_10273720(void *pSelf)
{
    if (((char (__fastcall *)(void *))(*(void ***)pSelf)[158])(pSelf)) {
        if (*(int *)((char *)pSelf + 0x36c) == 0) {
            sub_100081c0(pSelf);
        }
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10273760 size=0x18
// TARGET: sub_10273760
extern char g_106b8540[];
struct CUnk10273760 {
    char pad[0x1584];
    void *m_p1584;
    void sub_10273760();
    void sub_10273790(void *p, int flag);
};
void CUnk10273760::sub_10273760()
{
    void *p = m_p1584;
    if (p == 0) {
        p = g_106b8540;
    }
    sub_10273790(p, 0);
}
// END FUNCTION

// FUNCTION: 0x10273790 size=0x269
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CGlobalEntityList.h"
#include "CBasePlayer.h"

struct NpcRelEntView {
	CBP_V100(a) CBP_V10(b0) CBP_V10(b1) CBP_V10(b2) CBP_V1(c0) CBP_V1(c1) CBP_V1(c2) CBP_V1(c3) CBP_V1(c4) CBP_V1(c5) CBP_V1(c6) CBP_V1(c7)
	virtual int vfunc138();
};
extern "C" int __cdecl _strcmpi(const char *a, const char *b);
extern "C" char *__cdecl strtok(char *s, const char *delim);
extern "C" int __cdecl atoi(const char *s);
extern "C" unsigned int __cdecl strlen(const char *s);
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
__declspec(dllimport) void DevMsg(int level, const char *pMsg, ...);
__declspec(dllimport) void Warning(const char *pMsg, ...);
extern CGlobalEntityList g_106eb5d8;
void *sub_10136580(const char *pszName);
void sub_101cd970(void *pEnt);

// TARGET: CAI_BaseNPC::sub_10273790
void CAI_BaseNPC::sub_10273790(const char *pszRelationship, CBaseEntity *pActivator)
{
	char parseString[1000];
	Q_strncpy(parseString, pszRelationship, sizeof(parseString));
	char *entityString = strtok(parseString, " ");
	while (entityString) {
		char *dispositionString = strtok(0, " ");
		int disposition;
		if (!dispositionString) {
			DevMsg(1, "***ERROR***\n");
			DevMsg(1, "Ignoring invalid relationship string '%s'.\nThe proper format is '[entityname|entityclass|player] [D_HT|D_FR|D_LI|D_NU] [1-10]'\n", dispositionString);
			DevMsg(1, "***ERROR***\n");
			return;
		}
		if (!_strcmpi(dispositionString, "D_HT"))
			disposition = 1;
		else if (!_strcmpi(dispositionString, "D_FR"))
			disposition = 2;
		else if (!_strcmpi(dispositionString, "D_LI"))
			disposition = 3;
		else if (!_strcmpi(dispositionString, "D_NU"))
			disposition = 4;
		else {
			DevMsg(1, "***ERROR***\n");
			DevMsg(1, "Bad relationship type (%s) to unknown entity (%s)!\nThe proper format is '[entityname|entityclass|player] [D_HT|D_FR|D_LI|D_NU] [1-10]'\n", dispositionString, entityString);
			DevMsg(1, "***ERROR***\n");
			return;
		}
		char *priorityString = strtok(0, " ");
		int priority;
		if (!priorityString) {
			DevMsg(1, "***ERROR***\n");
			DevMsg(1, "Ignoring invalid relationship string '%s'.\nThe proper format is '[entityname|entityclass|player] [D_HT|D_FR|D_LI|D_NU] [1-10]'\n", dispositionString);
			DevMsg(1, "***ERROR***\n");
			return;
		}
		priority = atoi(priorityString);
		if (entityString[strlen(entityString) - 1] == '*') {
			for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, entityString, 0, 0); pEnt; pEnt = g_106eb5d8.sub_100f7770(pEnt, entityString, 0, 0))
				sub_10332ca0(pEnt, disposition, priority);
		} else {
			CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, entityString, 0, 0);
			if (pEnt) {
				sub_10332ca0(pEnt, disposition, priority);
			} else if (!_strcmpi("player", entityString)) {
				sub_10332aa0(1, disposition, priority);
			} else {
				NpcRelEntView *pTemp = (NpcRelEntView *)sub_10136580(entityString);
				if (pTemp) {
					sub_10332aa0(pTemp->vfunc138(), disposition, priority);
					sub_101cd970(pTemp);
				} else {
					Warning("***ERROR***\nCounldn't set relationship to unknown entity or class (%s)!\n", entityString);
				}
			}
		}
		entityString = strtok(0, " ");
	}
}
// END FUNCTION

// FUNCTION: 0x10273aa0 size=0x1d
// TARGET: sub_10273aa0
void __fastcall sub_10273760(int *p);
void __fastcall sub_10273aa0(int *p)
{
    sub_10273760(p);
    ((void (__fastcall *)(int *))(*(int **)p)[0x698 / 4])(p);
    ((void (__fastcall *)(int *))(*(int **)p)[0x694 / 4])(p);
}
// END FUNCTION

// FUNCTION: 0x10273ad0 size=0x1d8
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CAI_MoveProbe.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "TestBit.h"
#include "engineiface.h"
#include "globalvars.h"

__declspec(dllimport) void Warning(const char *pMsg, ...);
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
void sub_1000f4e8();

struct CAINpcView
{
	char m_pad0000[0x17c];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x204 - 0x180];
	unsigned int m_flags204;
	char m_pad0208[0x20c - 0x208];
	const char *m_pszTarget20c;
	char m_pad0210[0x1b4c - 0x210];
	char m_b1b4c;
	char m_pad1b4d[0x5bb8 - 0x1b4d];
	char m_b5bb8;
	char m_pad5bb9[0x5d40 - 0x5bb9];
	CAI_MoveProbe *m_pMoveProbe;
	char m_pad5d44[0x5d7c - 0x5d44];
	int m_n5d7c;
	int m_n5d80;
	char m_pad5d84[0x5de8 - 0x5d84];
	CBaseEntity *m_pTarget5de8;
};

void CAI_BaseNPC::vfunc422()
{
	CAINpcView *pNpc = (CAINpcView *)this;
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	pNpc->m_b5bb8 = 0;
	pNpc->m_b1b4c = 0;
	if (pSlots->slot94() != 5 && pSlots->slot94() != 6 && !(vfunc513() & 4) && !TestBit(pNpc->m_flags204, 2)) {
		Vector vecPos = *pSlots->slot220();
		CAI_MoveProbe *pProbe = pNpc->m_pMoveProbe;
		if (!pProbe->sub_102e7880(&vecPos.x, 0x202400b, 0, -256.0f, (float *)&vecPos, 0))
			Warning("NPC %s stuck in wall--level design error\n", sub_1009f200());
		pSlots->slot62(&vecPos.x);
	} else {
		sub_100b3640(1);
	}
	if (pNpc->m_pszTarget20c) {
		pNpc->m_pTarget5de8 = g_106eb5d8.sub_100f7770(0, pNpc->m_pszTarget20c, 0, 0);
		if (!pNpc->m_pTarget5de8) {
			Warning("ReadyNPC()--%s couldn't find target %s", sub_1009f200(), pNpc->m_pszTarget20c ? pNpc->m_pszTarget20c : g_106b8540);
		} else {
			sub_1026e340(1);
			sub_10280de0(3);
		}
	}
	vfunc545();
	if (gpGlobals->curtime > 1.0) {
		sub_100ac4e0((int)sub_1000f4e8, 0, 0);
		pNpc->m_flNextThink = gpGlobals->curtime;
	} else {
		sub_100ac4e0((int)sub_1000f4e8, 0, 0);
		pNpc->m_flNextThink = enginerandom->vfunc1(0.1f, 0.4f) + gpGlobals->curtime;
	}
	pNpc->m_n5d7c = -1;
	pNpc->m_n5d80 = 0;
	if (TestBit(pNpc->m_flags204, 7)) {
		sub_1026e340(1);
		pSlots->slot310(1);
		sub_10280de0(0x2d);
	}
}
// END FUNCTION

// FUNCTION: 0x10273d30 size=0x7c
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"

struct SNpcData {
	char pad[0x5da4];
	int m_pSquad;
	const char *volatile m_pszSquadName;
};

extern void (*g_109f3650)(int level, const char *fmt, ...);
int sub_10015bc7(CAI_BaseNPC *pNpc, const char *name);

bool CAI_BaseNPC::vfunc545()
{
	SNpcData *d = (SNpcData *)this;
	if (!d->m_pSquad) {
		if (vfunc513() & 0x4000000) {
			if (!d->m_pszSquadName) {
				g_109f3650(2, "WARNING: Found %s that isn't in a squad\n", ((CBaseEntity *)this)->sub_1009f200());
				return d->m_pSquad != 0;
			}
			d->m_pSquad = sub_10015bc7(this, d->m_pszSquadName);
			vfunc542();
		}
	}
	return d->m_pSquad != 0;
}
// END FUNCTION

// FUNCTION: 0x10273dd0 size=0x30
#include "CAI_BaseNPC.h"
#include "CUnknown102e0730.h"
struct CAI_NPC542View
{
	char m_pad0000[0x5d88];
	CUnknown102e0730 *m_p5d88;	// 0x5d88
	char m_pad5d8c[0x5da4 - 0x5d8c];
	int m_n5da4;	// 0x5da4
};
void CAI_BaseNPC::vfunc542()
{
	CAI_NPC542View *p = (CAI_NPC542View *)this;
	CUnknown102e0730 *pObj = p->m_p5d88;
	if (pObj) {
		pObj->sub_100146d7();
		delete pObj;
	}
	p->m_p5d88 = (CUnknown102e0730 *)(p->m_n5da4 + 8);
}
// END FUNCTION

// FUNCTION: 0x10273e10 size=0x16
extern int g_109203f0;

// TARGET: sub_10273e10
int __fastcall sub_10273e10(char *pThis)
{
	int r = g_109203f0;
	if (*(int *)(pThis + 0x5bb0) > 0)
		return r;
	return *(int *)(pThis + 0x5d88);
}
// END FUNCTION

// FUNCTION: 0x10273e40 size=0x27
// TARGET: CUnknown10273e40::sub_10273e40
#include "CUnknown10273e40.h"
#include "CUnknown102e0730.h"

void CUnknown10273e40::sub_10273e40()
{
	if (m_n5da4 == 0)
	{
		CUnknown102e0730 *p = m_p5d88;
		if (p)
		{
			p->sub_100146d7();
			operator delete(p);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10273e80 size=0x24
#include "CAI_BaseNPC.h"

// TARGET: CAI_BaseNPC::sub_10273e80
void CAI_BaseNPC::sub_10273e80(char flag)
{
	if (flag == 0 && sub_10269aa0(0x5c)) {
		return;
	}
	*(int *)((char *)this + 0x5c44) = 4;
}
// END FUNCTION

// FUNCTION: 0x10273ec0 size=0x9c
#include "CAI_BaseNPC.h"
#include "CUnknown102ee270.h"

extern "C" __declspec(dllimport) void Warning(const char *, ...);

void CAI_BaseNPC::sub_10273ec0()
{
    *(char *)((char *)this + 0x1a40) = 0;
    switch (*(int *)((char *)this + 0x5c44)) {
    case 0:
    case 1:
        *(int *)((char *)this + 0x5c44) = 3;
        break;
    case 2:
        sub_10273e80(0);
        break;
    case 3:
        Warning("Movement completed twice!\n");
        break;
    }
    int state = *(int *)((char *)this + 0x5d70);
    if (state != 6 && state != 4 && state != 5)
        sub_10272650(sub_1027a6c0());
    if ((*(CUnknown102ee270 **)((char *)this + 0x5d34))->sub_102ee6a0())
        (*(CUnknown102ee270 **)((char *)this + 0x5d34))->sub_102f0400();
    (*(CUnknown102ee270 **)((char *)this + 0x5d34))->sub_102ee270();
}
// END FUNCTION

// FUNCTION: 0x10273f90 size=0x19
int __fastcall sub_10273f90(char *pThis)
{
	int state = *(int *)(pThis + 0x5c44);
	if (state != 4 && state != 2)
		return 1;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10273fc0 size=0x8e
#include "CAI_BaseNPC.h"

struct AIObjX {
	virtual void v0();
	virtual bool vfunc1();
	char pad[0x28];
	int f2c;
};
struct AIGlobX { int pad; AIObjX *p; };
struct AIObj2X { virtual void v0(); virtual void vfunc1(); };
extern AIGlobX *g_1070af4c;
extern AIObj2X *g_10924a6c;
extern void (__cdecl *g_109f3630)(const char *fmt, ...);
const char *__cdecl sub_10316fa0(int code);

void CAI_BaseNPC::vfunc448(int code)
{
	AIGlobX *g = g_1070af4c;
	if (!g->p->vfunc1() && g->p->f2c) {
		const char *s = sub_10316fa0(code);
		unsigned int flags = *(unsigned int *)((char *)this + 0x224);
		*(const char **)((char *)this + 0x5f30) = s;
		*(int *)((char *)this + 0x5f3c) = 0;
		*(int *)((char *)this + 0x5f38) = *(int *)((char *)this + 0x5c38);
		if (flags & 0x8000000)
			g_109f3630("   TaskFail -> %s\n", s);
	}
	*(char *)((char *)this + 0x1a40) = 0;
	*(int *)((char *)this + 0x5c50) = code;
	g_10924a6c->vfunc1();
	sub_10269a20(0x5c);
}
// END FUNCTION

// FUNCTION: 0x10274080 size=0x106
#include "CHumanoidRec.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CAI_BaseNPC.h"
#include "CUtlVector20.h"
#include "Vector.h"
#include "CBaseEntity.h"
#include "CBCCSlotViews.h"
#include "UnreachableEnt_t.h"

struct CUnreachableList : CUtlVector20
{
    UnreachableEnt_t *Base() { return (UnreachableEnt_t *)m_pMemory; }
    UnreachableEnt_t &Element(int i) { return Base()[i]; }
    UnreachableEnt_t &operator[](int i) { return Element(i); }
    int Size() const { return m_size; }
    int AddToTail()
    {
        int elem = m_size;
        sub_1027f990(1);
        sub_1027fa50(elem, 1);
        Construct(&Element(elem));
        return elem;
    }
};

struct CAI_BaseNPCUnreachView
{
    char pad[0x5d48];
    CUnreachableList m_UnreachableEnts;
};

#define m_UnreachableEnts (((CAI_BaseNPCUnreachView *)this)->m_UnreachableEnts)

void CAI_BaseNPC::sub_10274080(CBaseEntity *pEntity)
{
    for (int i = m_UnreachableEnts.Size() - 1; i >= 0; i--)
    {
        if (pEntity == m_UnreachableEnts[i].hUnreachableEnt.Get())
        {
            m_UnreachableEnts[i].fExpireTime = gpGlobals->curtime + 3.0f;
            m_UnreachableEnts[i].vLocationWhenUnreachable = *(Vector *)((CEntityOriginSlotView *)pEntity)->vfunc217();
            return;
        }
    }

    int nNewIndex = m_UnreachableEnts.AddToTail();
    m_UnreachableEnts[nNewIndex].hUnreachableEnt = pEntity;
    m_UnreachableEnts[nNewIndex].fExpireTime = gpGlobals->curtime + 3.0f;
    m_UnreachableEnts[nNewIndex].vLocationWhenUnreachable = *(Vector *)((CEntityOriginSlotView *)pEntity)->vfunc217();
}
// END FUNCTION

// FUNCTION: 0x102741e0 size=0x177
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CLogicAuto.h"
#include "Vector.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
struct CNpcMemoryRec
{
	EHANDLE m_hEnt;
	float m_flTime;
	Vector m_vecPos;
};

struct CNpcMemoryList : public CUtlVector<CNpcMemoryRec>
{
	void FastRemoveMove(int elem)
	{
		if (m_Size > 0) {
			memmove(&Element(elem), &Element(m_Size - 1), sizeof(CNpcMemoryRec));
			--m_Size;
		}
	}
};

struct CAI_BaseNPC_MemView
{
	char m_pad[0x5d48];
	CNpcMemoryList m_Recs;
};

// TARGET: CAI_BaseNPC::vfunc530
bool CAI_BaseNPC::vfunc530(CBaseEntity *pEnt)
{
	CAI_BaseNPC_MemView *pView = (CAI_BaseNPC_MemView *)this;
	for (int i = pView->m_Recs.Count() - 1; i >= 0; i--) {
		if (pView->m_Recs.Element(i).m_hEnt.Get() == 0) {
			pView->m_Recs.FastRemoveMove(i);
			continue;
		}
		if (pEnt == pView->m_Recs.Element(i).m_hEnt.Get()) {
			if (!((gpGlobals->curtime) > pView->m_Recs.Element(i).m_flTime)) {
				Vector delta;
				VectorSubtract(*(Vector *)((CAI_BaseNPC *)pEnt)->vfunc217(), pView->m_Recs.Element(i).m_vecPos, delta);
				if (!(delta.LengthSqr() > 14400.0f))
					return true;
			}
			pView->m_Recs.FastRemoveMove(i);
			return false;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102743c0 size=0x374
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CUnknown102e0150.h"
#include "S1030fc90.h"

struct FsNode { char pad24[0x24]; EHANDLE m_hEnt; char pad28[0x38 - 0x28]; FsNode *m_pNext; };

// TARGET: CAI_BaseNPC::vfunc478
CBaseEntity *CAI_BaseNPC::vfunc478()
{
	CBaseEntity *pBest = 0;
	int bestPriority;
	int bestDist;
	char bBestFlag;
	char bHaveVisible;
	bestDist = 0x10000000;
	bestPriority = -1000;
	bBestFlag = 1;
	bHaveVisible = 0;
	for (FsNode *pNode = *(FsNode **)((char *)((CEntityVSlots *)this)->slot541() + 0xc); pNode; pNode = pNode->m_pNext) {
		CBaseEntity *pEnt = pNode->m_hEnt.Get();
		if (!pEnt)
			continue;
		if (pEnt->sub_100b3700() & 0x8000)
			continue;
		if (pEnt->m_p9c && !*((char *)pEnt->m_p9c + 0x1480))
			continue;
		if (pEnt == (CBaseEntity *)this)
			continue;
		if (!((CEntityVSlots *)pEnt)->slot158())
			continue;
		if (((CEntityVSlots *)this)->slot404(pEnt) != 1 && ((CEntityVSlots *)this)->slot404(pEnt) != 2)
			continue;
		if (((CEntityVSlots *)this)->slot541()->sub_102e0210((int)pEnt))
			continue;
		char bFlag = ((CEntityVSlots *)this)->slot530((CEntityVSlots *)pEnt);
		if (!bBestFlag) {
			if (bFlag)
				continue;
		} else if (!bFlag) {
			if (!vfunc479(pEnt))
				continue;
			bHaveVisible = ((S1030fc90 *)Owned5cdc())->sub_1030fb10((int)pEnt) || vfunc201(pEnt, 0x2804091, 0, 0);
			bestPriority = ((CEntityVSlots *)this)->slot405(pEnt);
			Vector *pMine = ((CEntityVSlots *)this)->slot217();
			Vector *pOther = ((CEntityVSlots *)pEnt)->slot217();
			float dx = pOther->x - pMine->x;
			float dy = pOther->y - pMine->y;
			float dz = pOther->z - pMine->z;
			bestDist = (int)(dx * dx + dy * dy + dz * dz);
			bBestFlag = 0;
			pBest = pEnt;
			continue;
		}
		if (((CEntityVSlots *)this)->slot405(pEnt) > bestPriority) {
			if (vfunc479(pEnt)) {
				bestPriority = ((CEntityVSlots *)this)->slot405(pEnt);
				Vector *pMine = ((CEntityVSlots *)this)->slot217();
				Vector *pOther = ((CEntityVSlots *)pEnt)->slot217();
				float dx = pOther->x - pMine->x;
				float dy = pOther->y - pMine->y;
				float dz = pOther->z - pMine->z;
				bestDist = (int)(dx * dx + dy * dy + dz * dz);
				bBestFlag = bFlag;
				pBest = pEnt;
			}
		} else if (((CEntityVSlots *)this)->slot405(pEnt) == bestPriority) {
			Vector *pMine = ((CEntityVSlots *)this)->slot217();
			Vector *pOther = ((CEntityVSlots *)pEnt)->slot217();
			float dx = pOther->x - pMine->x;
			float dy = pOther->y - pMine->y;
			float dz = pOther->z - pMine->z;
			int dist = (int)(dx * dx + dy * dy + dz * dz);
			bool bCloser = dist < bestDist;
			if (bCloser || !bHaveVisible) {
				char bVis = ((S1030fc90 *)Owned5cdc())->sub_1030fb10((int)pEnt) || vfunc201(pEnt, 0x2804091, 0, 0);
				if ((bCloser && (bVis || !bHaveVisible)) || (!bCloser && !bHaveVisible && bVis)) {
					if (vfunc479(pEnt)) {
						bestDist = dist;
						bHaveVisible = bVis;
						bestPriority = ((CEntityVSlots *)this)->slot405(pEnt);
						bBestFlag = bFlag;
						pBest = pEnt;
					}
				}
			}
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x10274820 size=0x1f2
#include "AITrace.h"
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "Ray_t.h"
#include "Vector.h"
int CAI_BaseNPC::vfunc570(CBaseEntity *pHint)
{
	int result = 0x54;
	if (pHint && vfunc167() && *(int *)((char *)pHint + 0x5dc) >= 100 && *(int *)((char *)pHint + 0x5dc) <= 101)
	{
		if (sub_1008dc40(0x57, -1) != -1)
		{
			Ray_t ray;
			{
				Vector vecStart = *(Vector *)vfunc217() + vfunc533(0x57, 0x57);
				Vector vecEnd;
				Vector *pVecEnd = ((CEntityVSlots *)vfunc167())->slot193(&vecEnd);
				ray.Init(vecStart, *pVecEnd);
			}
			{
				CTraceFilterSimple filter(this, 0);
				CGameTrace trace;
				g_1070b254->vfunc4(&ray, 0x2804091, (CTraceFilterNoCharacterCollide *)&filter, &trace);

				if (!g_10738964->vfunc1() && g_10738964->m_n2c)
					sub_10146570((const Vector *)&trace.m_startpos, (const Vector *)&trace.m_endpos, 0xff, 0, 0, 1, -1.0f);

				if (trace.m_fraction != 1.0)
					result = 0x57;
			}
		}
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x10274aa0 size=0x64
#include "CBaseAnimating.h"
#include "CAI_BaseNPC.h"

struct SOtherState { char pad[0x5dc]; int m_nState; };

int CAI_BaseNPC::sub_10274aa0(void *pOther)
{
	CBaseAnimating *pAnim = (CBaseAnimating *)this;
	SOtherState *p = (SOtherState *)pOther;
	int result = (pAnim->sub_1008dc40(6, -1) != -1) ? 6 : 1;
	if (p) {
		switch (p->m_nState) {
		case 101:
			if (pAnim->sub_1008dc40(8, -1) != -1)
				return 8;
			break;
		case 100:
			if (pAnim->sub_1008dc40(7, -1) != -1)
				return 7;
			break;
		}
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x10274b30 size=0x11e
#include "Vector.h"
#include "CEntityVSlots.h"
#include "CAI_Navigator.h"
#include "CAI_BaseNPC.h"

float sub_101d2c70(const Vector *pDelta);

struct NpcNavView
{
	char pad0[0x5d34];
	CAI_Navigator *m_pNavigator;
};

float CAI_BaseNPC::vfunc515(const Vector *pTarget)
{
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	CAI_Navigator *pNav = ((NpcNavView *)this)->m_pNavigator;
	Vector vecPos;
	if (pNav->sub_102ee3f0() == 0x37)
	{
		vecPos.x = -pTarget->y;
		vecPos.y = pTarget->x;
		{
			Vector delta = vecPos - *pSelf->slot220();
			return sub_101d2c70(&delta);
		}
	}
	else if (((NpcNavView *)this)->m_pNavigator->sub_102ee3f0() == 0x38)
	{
		vecPos.x = pTarget->y;
		vecPos.y = pTarget->x;
		{
			Vector delta = vecPos - *pSelf->slot220();
			return sub_101d2c70(&delta);
		}
	}
	else
	{
		Vector delta = *pTarget - *pSelf->slot220();
		return sub_101d2c70(&delta);
	}
}
// END FUNCTION

// FUNCTION: 0x10274ca0 size=0xc7
#include "CAI_BaseNPC.h"
#include "Vector.h"
extern Vector g_1070d1b0;
void sub_10428310(void *pStudioHdr, Vector *pOut);
__declspec(dllimport) void DevMsg(const char *pMsg, ...);
struct CAI_ColView {
	virtual void v0();
	virtual float *OBBMins();
	virtual float *OBBMaxs();
};
struct CAI_BaseNPCEye : CAI_BaseNPC {
	char m_padEye[0x5d60 - 4];
	Vector m_vecEyeOffset;
};

// TARGET: CAI_BaseNPC::sub_10274ca0
void CAI_BaseNPC::sub_10274ca0()
{
	Vector &eye = ((CAI_BaseNPCEye *)this)->m_vecEyeOffset;
	sub_10428310(sub_100952d0(-1), &eye);
	if (eye == g_1070d1b0) {
		DevMsg("WARNING: %s has no eye offset in .qc!\n", sub_1009f200());
		CAI_ColView *pColl = (CAI_ColView *)((char *)this + 0x270);
		float *mins = pColl->OBBMins();
		float *maxs = pColl->OBBMaxs();
		eye.x = maxs[0] + mins[0];
		eye.y = maxs[1] + mins[1];
		eye.z = maxs[2] + mins[2];
		eye *= 0.75f;
	}
	sub_1009f380(&eye);
}
// END FUNCTION

// FUNCTION: 0x10274db0 size=0x5c
#include "CAI_BaseNPC.h"
#include "Vector.h"
Vector CAI_BaseNPC::vfunc533(int a, int b)
{
	if ((vfunc513() & 0x8000000) && (a == 0x57 || a == 8))
		return Vector(0, 0, 24.0f);
	return *(Vector *)((char *)this + 0x5d60);
}
// END FUNCTION

// FUNCTION: 0x10274e30 size=0x741
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"
#include "Vector.h"
#include <string.h>
#include <stdlib.h>
struct animevent_t { int event; const char *options; int a; int b; CBaseEntity *pSource; };
struct EntV { void sub_101a8890(int a); void sub_101a7230(int a); };
struct ObjA { void sub_102d09b0(CAI_BaseNPC *p, int a); };
struct ObjB { void sub_102db3e0(CAI_BaseNPC *p, int a); };
struct ObjM { void sub_102e0b40(); void sub_102e1c10(float a, float b); };
struct WpnV { int sub_102521f0(); virtual void v0(); };
struct NpcV : public CAI_BaseNPC {
	void sub_101b0c10(const char *s);
	int sub_100b3700();
	void sub_1026d460(int a);
	void sub_10260a50(int a);
	void sub_1032a910(int a, int b);
	void sub_1032e210(animevent_t *e);
	void sub_1032e330(animevent_t *e);
	void sub_10273e80(int a);
	NpcV *sub_1032e7b0();
	int sub_1008f7b0(const char *s);
	int sub_1008f6c0(const char *s);
	float sub_10095cb0(int a, int b);
};
#define NPC_V10(p) CAI_NPC_V(p##0) CAI_NPC_V(p##1) CAI_NPC_V(p##2) CAI_NPC_V(p##3) CAI_NPC_V(p##4) CAI_NPC_V(p##5) CAI_NPC_V(p##6) CAI_NPC_V(p##7) CAI_NPC_V(p##8) CAI_NPC_V(p##9)
struct Slots192 {
	CAI_NPC_V(0) CAI_NPC_V(1) CAI_NPC_V(2) CAI_NPC_V(3) CAI_NPC_V(4) CAI_NPC_V(5) CAI_NPC_V(6) CAI_NPC_V(7) CAI_NPC_V(8) CAI_NPC_V(9) NPC_V10(1) NPC_V10(2) NPC_V10(3) NPC_V10(4) NPC_V10(5) NPC_V10(6) NPC_V10(7) NPC_V10(8) NPC_V10(9)
	NPC_V10(10) NPC_V10(11) NPC_V10(12) NPC_V10(13) NPC_V10(14) NPC_V10(15) NPC_V10(16) NPC_V10(17) NPC_V10(18)
	CAI_NPC_V(190) CAI_NPC_V(191)
	virtual Vector vfunc192();
};
void sub_10272650(int a);
void sub_101aeb60(int edict, const char *s, float v, int a, int b, int c);
struct FindObj { void *sub_100f7fe0(const char *s, const float *origin, float radius, void *pSearch, void *pActivator); void *sub_100f7f20(int a, const char *s, void *b, int c); };
extern FindObj g_106eb5d8;
struct RandV { virtual void v0(); virtual void v1(); virtual int vfunc2(int a, int b); };
extern RandV *g_1070b244;
__declspec(dllimport) void DevMsg(const char *fmt, ...);

#define NPC_F(T, off) (*(T *)((char *)this + (off)))
#define NPC_H(off) (*(EHANDLE *)((char *)this + (off)))

void CAI_BaseNPC::vfunc259(animevent_t *pEvent)
{
	NpcV *self = (NpcV *)this;
	switch (pEvent->event) {
	case 1000:
		if (NPC_F(int, 0x5cc0) == 4) { NPC_F(int, 0x200) = 1; NPC_F(int, 0x210) = 0; }
		return;
	case 0x3f2:
		if (NPC_F(int, 0x5cc0) == 4) { NPC_F(int, 0x200) = 0; NPC_F(int, 0x210) = NPC_F(int, 0x208); }
		return;
	case 0x3ec:
		self->sub_101b0c10(pEvent->options);
		return;
	case 0x3f0:
		self->sub_101b0c10(pEvent->options);
		return;
	case 0x3f1:
		if (!g_1070b244->vfunc2(0, 2)) return;
	case 0x3ed:
		sub_101aeb60(NPC_F(int, 0x2e0), pEvent->options, 1.0f, 0x50, 0, 100);
		return;
	case 0x3eb: {
		char *p98 = NPC_F(char *, 0x98);
		int pEdi = 0;
		if (p98) pEdi = *(int *)(p98 + 0x62ec);
		if (NPC_H(0x5d74)) {
			((EntV *)NPC_H(0x5d74).Get())->sub_101a7230(atoi(pEvent->options));
			return;
		}
		if (NPC_F(ObjA *, 0x5ddc)) {
			NPC_F(ObjA *, 0x5ddc)->sub_102d09b0(this, atoi(pEvent->options));
			return;
		}
		if (pEdi)
			((ObjB *)pEdi)->sub_102db3e0(this, atoi(pEvent->options));
		return;
	}
	case 0x3e9:
		if (NPC_H(0x5d74))
			((EntV *)NPC_H(0x5d74).Get())->sub_101a8890(0);
		return;
	case 0x3ea:
		if (NPC_H(0x5d74))
			((EntV *)NPC_H(0x5d74).Get())->sub_101a8890(1);
		return;
	case 0x3fc:
	case 0x3fd:
	case 0x3fe:
		DevMsg("Bodygroup!\n");
		return;
	case 0x7d2:
		if (self->sub_100b3700() & 1) self->sub_101b0c10("AI_BaseNPC.BodyDrop_Heavy");
		return;
	case 0x7d1:
		if (self->sub_100b3700() & 1) self->sub_101b0c10("AI_BaseNPC.BodyDrop_Light");
		return;
	case 0x7da:
		self->sub_101b0c10("AI_BaseNPC.SwishSound");
		return;
	case 0x7e4:
		sub_10272650(1);
		NPC_F(int, 0x5d8c) &= ~0x2000;
		self->sub_10095cb0(0, *(int *)(vfunc221() + 1));
		NPC_F(int, 0x19c) |= 0x10;
		return;
	case 0x7e6:
		if (pEvent->options) {
			int n = atoi(pEvent->options);
			NPC_F(ObjM *, 0x5d44)->sub_102e0b40();
			double flYaw = vfunc219()[1] + (double)n;
			NPC_F(ObjM *, 0x5d44)->sub_102e1c10((float)flYaw, -1.0f);
		}
		return;
	case 0x7f8: {
		WpnV *w = 0;
		if (pEvent->options && strlen(pEvent->options)) {
			char *f = (char *)g_106eb5d8.sub_100f7fe0(pEvent->options, vfunc217(), 256.0f, this, 0);
			if (f) w = *(WpnV **)(f + 0xa0);
		} else {
			char *pe = (char *)NPC_H(0x5ce4).Get();
			if (pe) w = *(WpnV **)(pe + 0xa0);
		}
		if (w) {
			if (w->sub_102521f0()) {
				NPC_F(const char *, 0x1b44) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp";
				NPC_F(int, 0x1b48) = 0x1f06;
				vfunc448((int)"Weapon in use by someone else");
				return;
			}
			if (!vfunc382(w)) {
				NPC_F(const char *, 0x1b44) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp";
				NPC_F(int, 0x1b48) = 0x1f0e;
				vfunc448((int)"Can't use this weapon type");
				return;
			}
			((CBaseCombatWeapon *)w)->vfunc341((CBaseEntity *)(void *)this);
			vfunc383(w, 0);
			self->sub_10273e80(0);
			return;
		}
		NPC_F(const char *, 0x1b44) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp";
		NPC_F(int, 0x1b48) = 0x1f19;
		vfunc448((int)"Weapon stolen by someone else");
		return;
	}
	case 0x7fb: {
		NpcV *a = self->sub_1032e7b0();
		if (!a) return;
		const char *o = pEvent->options;
		if (!o) return;
		int i = atoi(o);
		if (i == -1) return;
		a->sub_10260a50(i);
		return;
	}
	case 0x7fa: {
		NpcV *a = self->sub_1032e7b0();
		if (!a) return;
		const char *o = pEvent->options;
		if (!o) return;
		int i = a->sub_1008f7b0(o);
		if (i == -1) return;
		a->sub_10260a50(i);
		return;
	}
	case 0x7fc: {
		NpcV *a = self->sub_1032e7b0();
		if (!a) return;
		const char *o = pEvent->options;
		if (!o) return;
		int i = a->sub_1008f6c0(o);
		if (i == -1) return;
		self->sub_1032a910(i, 0);
		return;
	}
	case 0x7f9: {
		const char *o = pEvent->options;
		if (o) {
			void *e = g_106eb5d8.sub_100f7f20(0, o, this, 0);
			if (e) ((Slots192 *)e)->vfunc192();
		}
		vfunc385(self->sub_1032e7b0(), 0, 0);
		return;
	}
	case 0x802:
	case 0x803:
		self->sub_1026d460(0);
		return;
	case 0x804:
	case 0x805:
		self->sub_1026d460(1);
		return;
	}
	if ((CAI_BaseNPC *)pEvent->pSource == this && (pEvent->event < 3000 || pEvent->event > 4002)) {
		self->sub_1032e330(pEvent);
		return;
	}
	self->sub_1032e210(pEvent);
}
// END FUNCTION

// FUNCTION: 0x10275760 size=0xd1f
#include "CFlameCluster.h"
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CAI_Navigator.h"
#include "DebugOverlay.h"
#include "ehandle.h"
#include "globalvars.h"
#include "Vector.h"
#include <math.h>
#include <string.h>

void sub_10142aa0(const Vector *pOrigin, const Vector *pMins, const Vector *pMaxs, int r, int g, int b, int a, float flDuration);
void sub_10142af0(const Vector *pOrigin, const Vector *pMins, const Vector *pMaxs, const Vector *pDir, int r, int g, int b, int a, float flDuration);
class CDbgVt;
CDbgVt *__fastcall sub_1032e7b0(void *pChar);
char *sub_102d6100(int hull);
char *sub_102d6120(int hull);

extern int g_1092053c;

struct CDbgCollision
{
	virtual void v0();
	virtual const Vector &OBBMins();
	virtual const Vector &OBBMaxs();
};

struct CDbgNavOwner
{
	char m_pad00[0x156c];
	int m_n156c;
};

struct CDbgNode
{
	Vector sub_102fb0d0(int hull);
};
struct CDbgNetwork
{
	int m_nCount;
	CDbgNode **m_ppNodes;
	CDbgNode **AccessNodes() { return m_ppNodes; }
	CDbgNode *GetNode(int i) { return m_ppNodes[i]; }
};
struct CDbgNav
{
	void *m_vptr;
	CDbgNavOwner *m_pOuter;	// 0x04
	int m_n08;
	int m_n0c;
	char m_pad10[0x2c - 0x10];
	CAI_NavProviderList *m_pNetwork;	// 0x2c
	void sub_102f28e0();
};

struct CDbgPathfinder
{
	int sub_103061e0(int nOverlays);
};

class CDbgVt
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
	virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
	virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
	virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87(); virtual void v88(); virtual void v89();
	virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93(); virtual void v94(); virtual void v95(); virtual void v96(); virtual void v97(); virtual void v98(); virtual void v99();
	virtual void v100(); virtual void v101(); virtual void v102(); virtual void v103(); virtual void v104(); virtual void v105(); virtual void v106(); virtual void v107(); virtual void v108(); virtual void v109();
	virtual void v110(); virtual void v111(); virtual void v112(); virtual void v113(); virtual void v114(); virtual void v115(); virtual void v116(); virtual void v117(); virtual void v118(); virtual void v119();
	virtual void v120(); virtual void v121(); virtual void v122(); virtual void v123(); virtual void v124(); virtual void v125(); virtual void v126(); virtual void v127(); virtual void v128(); virtual void v129();
	virtual void v130(); virtual void v131(); virtual void v132(); virtual void v133(); virtual void v134(); virtual void v135(); virtual void v136(); virtual void v137(); virtual void v138(); virtual void v139();
	virtual void v140(); virtual void v141(); virtual void v142(); virtual void v143(); virtual void v144(); virtual void v145(); virtual void v146(); virtual void v147(); virtual void v148(); virtual void v149();
	virtual void v150(); virtual void v151(); virtual void v152(); virtual void v153(); virtual void v154(); virtual void v155(); virtual void v156(); virtual void v157(); virtual void v158(); virtual void v159();
	virtual void v160(); virtual void v161(); virtual void v162(); virtual void v163(); virtual void v164(); virtual void v165(); virtual void v166();
	virtual int s167();
	virtual void v168(); virtual void v169(); virtual void v170(); virtual void v171(); virtual void v172(); virtual void v173(); virtual void v174(); virtual void v175(); virtual void v176(); virtual void v177();
	virtual void v178(); virtual void v179(); virtual void v180(); virtual void v181(); virtual void v182(); virtual void v183(); virtual void v184(); virtual void v185(); virtual void v186(); virtual void v187();
	virtual void v188(); virtual void v189(); virtual void v190(); virtual void v191(); virtual void v192();
	virtual Vector EyePosition();
	virtual void v194(); virtual void v195(); virtual void v196(); virtual void v197(); virtual void v198(); virtual void v199(); virtual void v200(); virtual void v201(); virtual void v202(); virtual void v203();
	virtual void v204(); virtual void v205(); virtual void v206(); virtual void v207(); virtual void v208(); virtual void v209(); virtual void v210(); virtual void v211(); virtual void v212(); virtual void v213();
	virtual void v214(); virtual void v215(); virtual void v216();
	virtual const Vector &GetAbsOrigin();
	virtual void v218(); virtual void v219();
	virtual const Vector &GetLocalOrigin();
	virtual void v221(); virtual void v222(); virtual void v223(); virtual void v224(); virtual void v225(); virtual void v226(); virtual void v227(); virtual void v228(); virtual void v229(); virtual void v230();
	virtual void v231(); virtual void v232(); virtual void v233(); virtual void v234(); virtual void v235(); virtual void v236(); virtual void v237(); virtual void v238(); virtual void v239(); virtual void v240();
	virtual void v241(); virtual void v242(); virtual void v243(); virtual void v244(); virtual void v245(); virtual void v246(); virtual void v247(); virtual void v248(); virtual void v249(); virtual void v250();
	virtual void v251(); virtual void v252(); virtual void v253(); virtual void v254(); virtual void v255(); virtual void v256(); virtual void v257(); virtual void v258(); virtual void v259(); virtual void v260();
	virtual void v261(); virtual void v262(); virtual void v263(); virtual void v264(); virtual void v265(); virtual void v266(); virtual void v267(); virtual void v268(); virtual void v269(); virtual void v270();
	virtual void v271(); virtual void v272(); virtual void v273(); virtual void v274(); virtual void v275(); virtual void v276(); virtual void v277(); virtual void v278(); virtual void v279(); virtual void v280();
	virtual void v281(); virtual void v282(); virtual void v283(); virtual void v284(); virtual void v285(); virtual void v286(); virtual void v287(); virtual void v288(); virtual void v289(); virtual void v290();
	virtual void v291(); virtual void v292(); virtual void v293(); virtual void v294(); virtual void v295(); virtual void v296(); virtual void v297(); virtual void v298(); virtual void v299(); virtual void v300();
	virtual void v301(); virtual void v302(); virtual void v303(); virtual void v304(); virtual void v305(); virtual void v306(); virtual void v307(); virtual void v308(); virtual void v309(); virtual void v310();
	virtual void v311(); virtual void v312(); virtual void v313(); virtual void v314(); virtual void v315(); virtual void v316(); virtual void v317(); virtual void v318(); virtual void v319(); virtual void v320();
	virtual void v321(); virtual void v322(); virtual void v323(); virtual void v324(); virtual void v325(); virtual void v326(); virtual void v327(); virtual void v328(); virtual void v329(); virtual void v330();
	virtual void v331(); virtual void v332(); virtual void v333(); virtual void v334(); virtual void v335(); virtual void v336(); virtual void v337(); virtual void v338(); virtual void v339(); virtual void v340();
	virtual void v341(); virtual void v342(); virtual void v343(); virtual void v344(); virtual void v345(); virtual void v346(); virtual void v347(); virtual void v348(); virtual void v349(); virtual void v350();
	virtual void v351(); virtual void v352(); virtual void v353(); virtual void v354(); virtual void v355(); virtual void v356(); virtual void v357(); virtual void v358(); virtual void v359(); virtual void v360();
	virtual void v361(); virtual void v362(); virtual void v363(); virtual void v364(); virtual void v365(); virtual void v366(); virtual void v367();
	virtual Vector BodyDirection2D();
	virtual void v369(); virtual void v370(); virtual void v371();
	virtual Vector EyeDirection2D();
	virtual void v373(); virtual void v374(); virtual void v375(); virtual void v376(); virtual void v377(); virtual void v378(); virtual void v379(); virtual void v380(); virtual void v381(); virtual void v382();
	virtual void v383(); virtual void v384();
	virtual void Weapon_Drop(CDbgVt *pWeapon, int a, int b);
	virtual void v386(); virtual void v387(); virtual void v388(); virtual void v389(); virtual void v390(); virtual void v391(); virtual void v392(); virtual void v393(); virtual void v394(); virtual void v395();
	virtual void v396(); virtual void v397(); virtual void v398(); virtual void v399(); virtual void v400(); virtual void v401(); virtual void v402(); virtual void v403(); virtual void v404(); virtual void v405();
	virtual void v406(); virtual void v407(); virtual void v408(); virtual void v409(); virtual void v410(); virtual void v411(); virtual void v412(); virtual void v413(); virtual void v414(); virtual void v415();
	virtual void v416(); virtual void v417(); virtual void v418(); virtual void v419(); virtual void v420(); virtual void v421(); virtual void v422(); virtual void v423(); virtual void v424(); virtual void v425();
	virtual void v426(); virtual void v427(); virtual void v428(); virtual void v429(); virtual void v430(); virtual void v431(); virtual void v432(); virtual void v433(); virtual void v434(); virtual void v435();
	virtual void v436(); virtual void v437(); virtual void v438(); virtual void v439(); virtual void v440(); virtual void v441(); virtual void v442(); virtual void v443(); virtual void v444(); virtual void v445();
	virtual void v446(); virtual void v447(); virtual void v448(); virtual void v449(); virtual void v450(); virtual void v451(); virtual void v452(); virtual void v453(); virtual void v454(); virtual void v455();
	virtual void v456(); virtual void v457(); virtual void v458(); virtual void v459(); virtual void v460(); virtual void v461(); virtual void v462(); virtual void v463(); virtual void v464(); virtual void v465();
	virtual void v466(); virtual void v467(); virtual void v468(); virtual void v469(); virtual void v470(); virtual void v471(); virtual void v472(); virtual void v473(); virtual void v474(); virtual void v475();
	virtual void v476(); virtual void v477(); virtual void v478(); virtual void v479(); virtual void v480(); virtual void v481(); virtual void v482(); virtual void v483(); virtual void v484(); virtual void v485();
	virtual void v486(); virtual void v487(); virtual void v488(); virtual void v489(); virtual void v490(); virtual void v491(); virtual void v492(); virtual void v493(); virtual void v494(); virtual void v495();
	virtual void v496(); virtual void v497(); virtual void v498(); virtual void v499(); virtual void v500(); virtual void v501(); virtual void v502(); virtual void v503(); virtual void v504(); virtual void v505();
	virtual void v506(); virtual void v507(); virtual void v508(); virtual void v509(); virtual void v510(); virtual void v511(); virtual void v512(); virtual void v513(); virtual void v514(); virtual void v515();
	virtual void v516(); virtual void v517(); virtual void v518(); virtual void v519(); virtual void v520(); virtual void v521(); virtual void v522(); virtual void v523(); virtual void v524(); virtual void v525();
	virtual void v526(); virtual void v527(); virtual void v528(); virtual void v529();
	virtual bool IsUnreachable(CDbgVt *pEnt);
	virtual void v531(); virtual void v532(); virtual void v533(); virtual void v534(); virtual void v535(); virtual void v536(); virtual void v537(); virtual void v538(); virtual void v539(); virtual void v540();
	virtual void *GetEnemies();
};

class CDbgEnemy : public CDbgVt
{
public:
	char m_pad04[0xa8 - 4];
	int m_nA8;	// 0xa8
	char m_padac[0x1568 - 0xac];
	int m_nHull;	// 0x1568
};

struct CDbgEnemyEnt
{
	char m_pad00[0x9c];
	CDbgEnemy *m_pCombatChar;	// 0x9c
};

struct CDbgEnemyInfo
{
	char m_pad00[0xc];
	Vector vLastKnownLocation;	// 0x0c
	char m_pad18[0x24 - 0x18];
	CHandle<CDbgEnemyEnt> hEnemy;	// 0x24
	char m_pad28[0x35 - 0x28];
	bool bEludedMe;	// 0x35
	char m_pad36[2];
	CDbgEnemyInfo *m_pNext;	// 0x38
};

struct CDbgEnemies
{
	char m_pad00[0xc];
	CDbgEnemyInfo *m_pHead;	// 0x0c
};

class CDbgNPC : public CDbgVt
{
public:
	char m_pad04[0x98 - 4];
	void *m_p98;	// 0x98
	char m_pad9c[0x224 - 0x9c];
	int m_debugOverlays;	// 0x224
	char m_pad228[0x270 - 0x228];
	CDbgCollision m_Collision;	// 0x270
	char m_pad274[0x1568 - 0x274];
	int m_nHull;	// 0x1568
	int m_n156c;
	int m_n1570;
	float m_flFieldOfView;	// 0x1574
	char m_pad1578[0x5c38 - 0x1578];
	void *m_pSchedule;	// 0x5c38
	char m_pad5c3c[0x5ce4 - 0x5c3c];
	CHandle<CDbgEnemyEnt> m_hTargetEnt;	// 0x5ce4
	char m_pad5ce8[0x5d34 - 0x5ce8];
	CDbgNav *m_pNavigator;	// 0x5d34
	char m_pad5d38[0x5d3c - 0x5d38];
	CDbgPathfinder *m_pPathfinder;	// 0x5d3c
	char m_pad5d40[0x5db8 - 0x5d40];
	Vector m_vecLastPosition;	// 0x5db8

	const Vector &Maxs2() { return m_Collision.OBBMaxs(); }
	int GetHullType() { return m_nHull; }
	void sub_1028ae60();
	int sub_102cc1f0(int type);
	int sub_100ac4e0(int pfn, int a, const char *pszContext);
	void sub_100ad320(float *a, float *b, float *c);
};

void __fastcall sub_101c0b10(CBaseEntity *pEnt);

// TARGET: CAI_BaseNPC::vfunc123
void CAI_BaseNPC::vfunc123()
{
	CDbgNPC *pThis = (CDbgNPC *)this;

	if (pThis->m_debugOverlays & 0x10000)
	{
		pThis->sub_1028ae60();
		pThis->Weapon_Drop(sub_1032e7b0(pThis), 0, 0);
		pThis->sub_100ac4e0((int)sub_101c0b10, 0, 0);
	}

	if (pThis->m_debugOverlays & 0x4000)
	{
		pThis->m_pNavigator->sub_102f28e0();
	}

	if (!(g_1092053c & 1) && pThis->m_pSchedule && (int)pThis->m_pSchedule == pThis->sub_102cc1f0(0x39))
	{
		sub_10142aa0(&pThis->m_vecLastPosition, &Vector(-5, -5, -5), &Vector(5, 5, 5), 255, 0, 255, 0, 0);
	}

	if (pThis->m_debugOverlays & 0x1000)
	{
		Vector forward, right, up;
		pThis->sub_100ad320(&forward.x, &right.x, &up.x);
		if (pThis->m_Collision.OBBMins().x == pThis->Maxs2().x
			&& pThis->m_Collision.OBBMins().y == pThis->Maxs2().y
			&& pThis->m_Collision.OBBMins().z == pThis->Maxs2().z)
			sub_10142aa0(&pThis->GetAbsOrigin(), &Vector(-5, -5, -5), &Vector(5, 5, 5), 255, 128, 0, 20, 0);
		else
		{
			const Vector &vMins = pThis->m_Collision.OBBMins();
			sub_10142aa0(&pThis->GetAbsOrigin(), &vMins, &pThis->m_Collision.OBBMaxs(), 255, 0, 0, 20, 0);
		}
	}

	if (pThis->m_debugOverlays & 0x2000)
	{
		CDbgNav *pNav = pThis->m_pNavigator;
		pNav->m_n08 = pNav->m_pOuter->m_n156c;
		pNav->m_n0c = gpGlobals->framecount;
		CAI_NavProviderList *pNetwork = pThis->m_pNavigator->m_pNetwork;
		int iNodeID = pNetwork->sub_102f3c10((int)pThis, &pThis->GetLocalOrigin());
		if (iNodeID != -1)
		{
			sub_10142aa0(&((CDbgNetwork *)pThis->m_pNavigator->m_pNetwork)->AccessNodes()[iNodeID]->sub_102fb0d0(pThis->m_nHull),
				&Vector(-10, -10, -10), &Vector(10, 10, 10), 255, 255, 255, 0, 0);
		}
	}

	if ((pThis->m_debugOverlays & 0x400000) && !pThis->m_p98)
	{
		float flViewRange = acos(pThis->m_flFieldOfView);
		Vector vEyeDir = pThis->EyeDirection2D();
		Vector vLeftDir, vRightDir;
		float fSin, fCos;
		fSin = sin(flViewRange);
		fCos = cos(flViewRange);

		vLeftDir.x = vEyeDir.x * fCos - vEyeDir.y * fSin;
		vLeftDir.y = vEyeDir.x * fSin + vEyeDir.y * fCos;
		vLeftDir.z = vEyeDir.z;
		fSin = sin(-flViewRange);
		fCos = cos(-flViewRange);
		vRightDir.x = vEyeDir.x * fCos - vEyeDir.y * fSin;
		vRightDir.y = vEyeDir.x * fSin + vEyeDir.y * fCos;
		vRightDir.z = vEyeDir.z;

		sub_10142af0(&pThis->EyePosition(), &Vector(0, 0, -40), &Vector(200, 0, 40), &vLeftDir, 255, 0, 0, 50, 0);
		sub_10142af0(&pThis->EyePosition(), &Vector(0, 0, -40), &Vector(200, 0, 40), &vRightDir, 255, 0, 0, 50, 0);
		sub_10142af0(&pThis->EyePosition(), &Vector(0, 0, -40), &Vector(200, 0, 40), &vEyeDir, 0, 255, 0, 50, 0);
		sub_10142af0(&pThis->EyePosition(), &Vector(0, 0, -10), &Vector(40, 0, 10), &vEyeDir, 0, 255, 0, 50, 0);
	}

	if (pThis->m_debugOverlays & 0x20000)
	{
		CDbgEnemies *pEnemies = (CDbgEnemies *)pThis->GetEnemies();
		for (CDbgEnemyInfo *eMemory = pEnemies->m_pHead; eMemory != 0; eMemory = eMemory->m_pNext)
		{
			if (eMemory->hEnemy)
			{
				CDbgEnemy *npcEnemy = eMemory->hEnemy->m_pCombatChar;
				if (npcEnemy)
				{
					float r, b, g;
					char debugText[255];
					debugText[0] = 0;

					if ((int)npcEnemy == pThis->s167())
					{
						strcat(debugText, "Current Enemy");
					}
					else if (npcEnemy == (CDbgEnemy *)pThis->m_hTargetEnt.Get())
					{
						strcat(debugText, "Current Target");
					}
					else
					{
						strcat(debugText, "Other Memory");
					}
					if (pThis->IsUnreachable(npcEnemy))
					{
						strcat(debugText, " (Unreachable)");
					}
					if (eMemory->bEludedMe)
					{
						strcat(debugText, " (Eluded)");
					}
					if (pThis->IsUnreachable(npcEnemy))
					{
						r = 0;
						g = 255;
						b = 0;
					}
					else if (eMemory->bEludedMe)
					{
						r = 0;
						g = 0;
						b = 255;
					}
					else if ((int)npcEnemy == pThis->s167())
					{
						r = 255;
						g = 0;
						b = 0;
					}
					else if (npcEnemy == (CDbgEnemy *)pThis->m_hTargetEnt.Get())
					{
						r = 255;
						g = 0;
						b = 255;
					}
					else
					{
						r = 255;
						g = 100;
						b = 100;
					}

					Vector drawPos = eMemory->vLastKnownLocation;
					sub_10143710(&drawPos.x, debugText, 0, 0);

					if (npcEnemy->m_nA8 &&
						(eMemory->vLastKnownLocation - npcEnemy->GetAbsOrigin()).Length() < 10)
					{
						Vector vEnemyFacing = npcEnemy->BodyDirection2D();
						Vector eyePos = npcEnemy->EyePosition() + vEnemyFacing * 10.0f;
						Vector upVec = Vector(0, 0, 2);
						Vector sideVec;
						CrossProduct(vEnemyFacing, upVec, sideVec);
						sub_10142e90(&(eyePos + sideVec + upVec), &(eyePos - sideVec - upVec), r, g, b, 0, 0);
						sub_10142e90(&(eyePos + sideVec - upVec), &(eyePos - sideVec + upVec), r, g, b, 0, 0);
						sub_10143710(&eyePos.x, debugText, 0, 0);
					}
					else
					{
						{
							int hull = npcEnemy->m_nHull;
							sub_10143b70(&drawPos, (Vector *)sub_102d6100(hull), (Vector *)sub_102d6120(hull), r, g, b, 0, 0);
						}
						{
							int hull = npcEnemy->m_nHull;
							sub_10143b70(&drawPos, (Vector *)sub_102d6100(hull), (Vector *)sub_102d6120(hull), r, g, b, 0, 0);
						}
					}
				}
			}
		}
	}

	if (pThis->m_debugOverlays & 0x200000)
	{
		if (pThis->s167())
		{
			sub_10142e90(&pThis->EyePosition(), &((CDbgVt *)pThis->s167())->EyePosition(), 255, 0, 0, 1, 0);
		}
		if (pThis->m_hTargetEnt.Get())
		{
			sub_10142e90(&pThis->EyePosition(), &((CDbgVt *)pThis->m_hTargetEnt.Get())->EyePosition(), 0, 0, 255, 1, 0);
		}
	}

	pThis->m_pPathfinder->sub_103061e0(pThis->m_debugOverlays);

	((CBaseEntity *)this)->CBaseEntity::vfunc123();
}
// END FUNCTION

// FUNCTION: 0x102767d0 size=0xb38
#include "CAI_BaseNPC.h"
#include <string.h>
#include "Tier1.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

// TARGET: ?sub_102767d0@CAI_BaseNPC@@QAEHXZ
extern char g_106b8540[];
extern Vector g_1070d1b0;	// vec3_origin
extern float g_1070d9d0[];	// vec3_angle
__declspec(dllimport) int Q_snprintf(char *pDest, int destLen, const char *pFormat, ...);
void sub_101434b0(int ent, int text_offset, const char *text, int duration, int r, int g, int b, int a);	// NDebugOverlay::EntityText

#define FLD(T, o) (*(T *)((char *)this + (o)))
#define EFLD(p, T, o) (*(T *)((char *)(p) + (o)))

struct CAI_DbgTask
{
	int iTask;
	float flTaskData;
};

struct CAI_DbgSchedule
{
	int m_unk00[8];
	CAI_DbgTask *m_pTaskList;	// 0x20
	int m_nTasks;	// 0x24
	int m_unk28[6];
	const char *m_pszName;	// 0x40
	CAI_DbgTask *GetTaskList() const { return m_pTaskList; }
	int NumTasks() const { return m_nTasks; }
};

struct CAI_DbgMemory
{
	int m_unk00[9];
	unsigned int m_hEnemy;	// 0x24
	int m_unk28[4];
	CAI_DbgMemory *m_pNext;	// 0x38
};

inline CAI_DbgMemory *GetFirstDbg(void *pList, CAI_DbgMemory **pIter) { return (*pIter = *(CAI_DbgMemory **)((char *)pList + 0xc)); }
inline CAI_DbgMemory *GetNextDbg(CAI_DbgMemory **pIter) { return (*pIter = (*pIter)->m_pNext); }

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

int CAI_BaseNPC::sub_102767d0()
{
	int text_offset = sub_1033e4a0();

	if (FLD(unsigned int, 0x224) & 0x80000)
	{
		char tempstr[512];
		Q_snprintf(tempstr, sizeof(tempstr), "Health: %i", FLD(int, 0x210));
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "Squad: %c : ", FLD(int, 0x5bb0) > 0 ? 'X' : 'O');
		if (FLD(void *, 0x5da4))
		{
			const char *pName = EFLD(FLD(void *, 0x5da4), const char *, 4);
			strncat(tempstr, pName ? pName : g_106b8540, sizeof(tempstr));
			strncat(tempstr, "\n", sizeof(tempstr));
		}
		else
		{
			strncat(tempstr, " - \n", sizeof(tempstr));
		}
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		g_109f3890(tempstr, "Enemy: ", sizeof(tempstr));
		if (vfunc167())
		{
			if (EFLD(vfunc167(), const char *, 0x26c))
			{
				const char *pName = EFLD(vfunc167(), const char *, 0x26c);
				strcat(tempstr, pName ? pName : g_106b8540);
				strcat(tempstr, "\n");
			}
			else
			{
				strcat(tempstr, STRINGR(EFLD(vfunc167(), const char *, 0x11c)));
				strcat(tempstr, "\n");
			}
		}
		else
		{
			strcat(tempstr, " - \n");
		}
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "Slot:  %s \n", ((CEntityVSlots *)this)->slot546(FLD(int, 0x5dac)));
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;
	}

	if (FLD(unsigned int, 0x224) & 1)
	{
		char tempstr[512];

		int i = 0;
		CAI_DbgMemory *iter;
		for (CAI_DbgMemory *pEMemory = GetFirstDbg(vfunc541(), &iter); pEMemory != 0; pEMemory = GetNextDbg(&iter))
		{
			CAI_BaseNPC *pEnemy = (CAI_BaseNPC *)EHandle_Get(pEMemory->m_hEnemy);
			if (pEnemy)
			{
				Q_snprintf(tempstr, sizeof(tempstr), "MEM%02d: %s", i, pEnemy->sub_100ab4f0());
				sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
			i++;
		}

		Q_snprintf(tempstr, sizeof(tempstr), "Health: %i", FLD(int, 0x210));
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		if (sub_10007e19())
		{
			int ammo1 = EFLD(sub_10007e19(), int, 0x748) >= 0 ? sub_103346c0(EFLD(sub_10007e19(), int, 0x748)) : -1;
			int ammo2 = EFLD(sub_10007e19(), int, 0x744) >= 0 ? sub_103346c0(EFLD(sub_10007e19(), int, 0x744)) : -1;
			Q_snprintf(tempstr, sizeof(tempstr), "Weapon: %s (%d/%d) (%d/%d)",
				((CEntityVSlots *)sub_10007e19())->slot348(),
				EFLD(sub_10007e19(), int, 0x74c), ammo2,
				EFLD(sub_10007e19(), int, 0x750), ammo1);
		}
		else
		{
			Q_snprintf(tempstr, sizeof(tempstr), "UNARMED");
		}
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "Stat: %s, ", vfunc406(FLD(int, 0x5cc0)));
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		int navType = sub_1027d990();
		Q_snprintf(tempstr, sizeof(tempstr), "Move: %s, ", vfunc407(navType));
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		if (FLD(CAI_DbgSchedule *, 0x5c38))
		{
			const char *pName = FLD(CAI_DbgSchedule *, 0x5c38)->m_pszName;
			if (!pName)
				pName = "Unknown";
			Q_snprintf(tempstr, sizeof(tempstr), "Schd: %s, ", pName);
			sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;

			if (FLD(unsigned int, 0x224) & 0x100000)
			{
				for (int i = 0; i < FLD(CAI_DbgSchedule *, 0x5c38)->NumTasks(); i++)
				{
					Q_snprintf(tempstr, sizeof(tempstr), "%s%s%s%s",
						(i == 0) ? "Task:" : "       ",
						(i == FLD(int, 0x5c40)) ? "->" : "   ",
						(const char *)vfunc449(FLD(CAI_DbgSchedule *, 0x5c38)->GetTaskList()[i].iTask),
						(i == FLD(int, 0x5c40)) ? "<-" : g_106b8540);
					sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
					text_offset++;
				}
			}
			else
			{
				int *pTask = sub_1028a150();
				if (pTask)
					Q_snprintf(tempstr, sizeof(tempstr), "Task: %s (#%d), ", (const char *)vfunc449(*pTask), FLD(int, 0x5c40));
				else
					g_109f3890(tempstr, "Task: None", sizeof(tempstr));
				sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
		}

		if (FLD(int, 0xfec) != -1 && FLD(int, 0xff0) != -1 && FLD(int, 0xfec) != 0)
		{
			int iActivity = vfunc375(FLD(int, 0xfec));
			iActivity = vfunc381(iActivity);
			iActivity = vfunc376(iActivity);
			int iIdealActivity = vfunc375(FLD(int, 0xff0));
			iIdealActivity = vfunc381(iIdealActivity);
			iIdealActivity = vfunc376(iIdealActivity);
			const char *pszActivity = sub_1008ff50(sub_1008dc40(iActivity, -1));
			const char *pszIdealActivity = sub_1008ff50(sub_1008dc40(iIdealActivity, -1));
			Q_snprintf(tempstr, sizeof(tempstr), "Actv: %s (%s)\n", pszActivity, pszIdealActivity);
		}
		else if (FLD(int, 0xfec) == 0)
		{
			g_109f3890(tempstr, "Actv: RESET", sizeof(tempstr));
		}
		else
		{
			g_109f3890(tempstr, "Actv: INVALID", sizeof(tempstr));
		}
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		if (FLD(CAI_DbgSchedule *, 0x5f3c))
		{
			const char *pName = FLD(CAI_DbgSchedule *, 0x5f3c)->m_pszName;
			if (!pName)
				pName = "Unknown";
			Q_snprintf(tempstr, sizeof(tempstr), "Intr: %s (%s)\n", pName, FLD(const char *, 0x5f34));
			sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
		}

		if (FLD(CAI_DbgSchedule *, 0x5f38))
		{
			const char *pName = FLD(CAI_DbgSchedule *, 0x5f38)->m_pszName;
			if (!pName)
				pName = "Unknown";
			Q_snprintf(tempstr, sizeof(tempstr), "Fail: %s (%s)\n", pName, FLD(const char *, 0x5f30));
			sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
		}

		if (sub_10269aa0(0x55))
		{
			sub_101434b0(entindexDbg(), text_offset, "Enemy too far to attack", 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
		}

		if (GetAbsVelocityDbg() != g_1070d1b0 || FLD(Vector, 0x3c8) != *(Vector *)g_1070d9d0)
		{
			char tmp[512];
			Q_snprintf(tmp, sizeof(tmp), "Vel %.1f %.1f %.1f   Ang: %.1f %.1f %.1f\n",
				GetAbsVelocityDbg().x, GetAbsVelocityDbg().y, GetAbsVelocityDbg().z,
				FLD(Vector, 0x3c8).x, FLD(Vector, 0x3c8).y, FLD(Vector, 0x3c8).z);
			sub_101434b0(entindexDbg(), text_offset, tmp, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
		}
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x102775e0 size=0x2f7
#include "Tier1.h"
#include "CAI_BaseNPC_vfunc76.h"
#include "CUnknown1027d990.h"

void sub_10119750(const char *pFmt, ...);

void CAI_BaseNPC::vfunc76()
{
	CAI_BaseNPCUnit76 *pNPC = (CAI_BaseNPCUnit76 *)this;
	char tempstr[512];

	if (!sub_100952d0(-1))
		return;

	int (*Q_snprintf)(char *, int, const char *, ...) = g_109f388c;
	Q_snprintf(tempstr, sizeof(tempstr), "Seq: ");
	int *pSeq = sub_1008d990(pNPC->m_nSequence6f0);
	if (!pSeq) {
		g_109f3884(tempstr, "(INVALID)", sizeof(tempstr), -1);
	} else {
		int (*Q_strncat)(char *, const char *, int, int) = g_109f3884;
		Q_strncat(tempstr, (char *)pSeq + pSeq[0], sizeof(tempstr), -1);
		Q_strncat(tempstr, " / ", sizeof(tempstr), -1);
		Q_strncat(tempstr, (char *)pSeq + pSeq[1], sizeof(tempstr), -1);
	}
	sub_10119750(tempstr);
	sub_10119750("Cycle: %.2f", pNPC->m_flCycle6f8);

	if (pNPC->m_nActivityfec != -1 && pNPC->m_nIdealActivityff0 != -1 && pNPC->m_nActivityfec != 0) {
		int iActivity = vfunc375(pNPC->m_nActivityfec);
		iActivity = vfunc381(iActivity);
		iActivity = vfunc376(iActivity);
		int iIdealActivity = vfunc375(pNPC->m_nIdealActivityff0);
		iIdealActivity = vfunc381(iIdealActivity);
		iIdealActivity = vfunc376(iIdealActivity);
		const char *pszActivity = sub_1008ff50(sub_1008dc40(iActivity, -1));
		const char *pszIdealActivity = sub_1008ff50(sub_1008dc40(iIdealActivity, -1));
		Q_snprintf(tempstr, sizeof(tempstr), "Actv: %s (%s)\n", pszActivity, pszIdealActivity);
	} else if (pNPC->m_nActivityfec == 0) {
		g_109f3890(tempstr, "Actv: RESET", sizeof(tempstr));
	} else {
		g_109f3890(tempstr, "Actv: INVALID", sizeof(tempstr));
	}
	sub_10119750(tempstr);

	sub_10119750("State: %s, ", vfunc406(pNPC->m_nState5cc0));
	int nMoveType = ((CUnknown1027d990 *)this)->sub_1027d990();
	sub_10119750("Move: %s, ", vfunc407(nMoveType));

	if (pNPC->m_pSchedule5c38) {
		const char *pName = pNPC->m_pSchedule5c38->m_pszName;
		if (!pName)
			pName = "Unknown";
		sub_10119750("Schd: %s, ", pName);

		int *pTask = sub_1028a150();
		if (pTask) {
			Q_snprintf(tempstr, sizeof(tempstr), "Task: %s (#%d), ", vfunc449(pTask[0]), pNPC->m_nTask5c40);
		} else {
			g_109f3890(tempstr, "Task: None", sizeof(tempstr));
		}
		sub_10119750(tempstr);

		for (int i = 0; i < pNPC->m_pSchedule5c38->NumTasks(); i++) {
			g_109f388c(tempstr, sizeof(tempstr), "%s%s%s%s",
				(i == 0) ? "Task:" : "       ",
				(i == pNPC->m_nTask5c40) ? "->" : "   ",
				vfunc449(pNPC->m_pSchedule5c38->GetTaskList()[i].m_nTask),
				(i == pNPC->m_nTask5c40) ? "<-" : "");
			sub_10119750(tempstr);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102779a0 size=0x238
#include "CEntityVSlots.h"
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "Tier1.h"
#include "UTIL_BloodStream.h"
#include "globalvars.h"

extern char g_10547e40[];

void CAI_BaseNPC::vfunc581()
{
	const char *pState = vfunc406(*(int *)((char *)this + 0x5cc0));
	const char *pClass = sub_1009f200();
	void (*pDevMsg)(const char *, ...) = (void (*)(const char *, ...))g_109f3630;
	pDevMsg("%s: ", pClass);
	pDevMsg("State: %s, ", pState);
	if (*(int *)((char *)this + 0xfec) != -1 && *(int *)(0xff0 + (char *)this) != -1)
	{
		const char *pAct = ((CBaseAnimating *)this)->sub_1008ff50(((CBaseAnimating *)this)->sub_1008dc40(*(int *)((char *)this + 0xfec), -1));
		const char *pIdeal = ((CBaseAnimating *)this)->sub_1008ff50(((CBaseAnimating *)this)->sub_1008dc40(*(int *)((char *)this + 0xff0), -1));
		pDevMsg("Activity: %s  -  Ideal Activity: %s\n", pAct, pIdeal);
	}
	void *pSchedule = *(void **)((char *)this + 0x5c38);
	if (pSchedule)
	{
		const char *pName = *(const char **)((char *)pSchedule + 0x40);
		if (!pName)
			pName = "Unknown";
		pDevMsg("Schedule %s, ", pName);
		void *pTask = sub_1028a150();
		if (pTask)
			pDevMsg("Task %d (#%d), ", *(int *)pTask, *(int *)((char *)this + 0x5c40));
	}
	else
	{
		pDevMsg("No Schedule, ");
	}
	if (vfunc167())
	{
		Vector *pOrg = ((CEntityVSlots *)(CBaseEntity *)vfunc167())->slot217();
		Vector tmp; tmp = *pOrg;
		tmp.z += 64.0f;
		Vector vec = tmp;
		g_10566258->Sparks(vec, 1, 1, 0);
		pDevMsg("\nEnemy is %s", ((CBaseEntity *)vfunc167())->sub_1009f200());
	}
	else
	{
		pDevMsg("No enemy ");
	}
	if (vfunc153())
	{
		pDevMsg(" Moving ");
		if (*(float *)((char *)this + 0x5cf0) > gpGlobals->curtime)
			pDevMsg(": Stopped for %.2f. ", (double)(*(float *)((char *)this + 0x5cf0) - gpGlobals->curtime));
		else if (*(int *)((char *)this + 0xff0) == sub_1027a6c0())
			pDevMsg(": In stopped anim. ");
	}
	pDevMsg("Leader.");
	pDevMsg(g_10547e40);
	pDevMsg("Yaw speed:%3.1f,Health: %3d\n", (double)*(float *)(0x38 + *(int *)((char *)this + 0x5d44)), *(int *)((char *)this + 0x210));
	if (vfunc209())
		pDevMsg("Groundent:%s\n\n", ((CBaseEntity *)vfunc209())->sub_1009f200());
	else
		pDevMsg("Groundent: NULL\n\n");
}
// END FUNCTION

// FUNCTION: 0x10277c70 size=0xa
#include "ConVar.h"
ConVar g_10920340("ai_report_task_timings_on_limit", "0", 128);
// END FUNCTION

// FUNCTION: 0x10277d00 size=0xa
#include "ConVar.h"
ConVar g_1090fd70("ai_think_limit_label", "0", 128);
// END FUNCTION

// FUNCTION: 0x10277d90 size=0x260
#include "CFlameCluster.h"
#include "CUnknown10738960.h"
#include "CAI_BaseNPC_vfunc76.h"
#include "CCollisionProperty.h"
#include "DebugOverlay.h"
#include "Tier1.h"
#include "globalvars.h"

extern float g_10920554;
extern __int64 g_109203e8, g_109204a0, g_1090fe68, g_10920338, g_1090ff00, g_1090ff58;
extern double *g_109f367c;
struct CAIDebugSink { virtual char vfunc0(); virtual char vfunc1(); char m_pad[0x2c - 4]; int m_n2c; };
extern CAIDebugSink *g_10920344;
extern CFoo1005f190 g_1090fd70;
char *sub_1027f5d0(char *pBuf, const char *pFmt, ...);

void CAI_BaseNPC::vfunc582(float flThinkTime)
{
	CAI_BaseNPCUnit76 *pNPC = (CAI_BaseNPCUnit76 *)this;
	if (!(gpGlobals->curtime < g_10920554)) {
		g_10920554 = gpGlobals->curtime + 1.0f;
		const char *pszTask;
		if (!sub_1028a150())
			pszTask = "INVALID TASK";
		else
			pszTask = (const char *)vfunc449(*sub_1028a150());
		const char *pszSchedule = pNPC->m_pSchedule5c38->m_pszName;
		g_109f364c("%s thinking for %.02fms!!! (%s)[%s]\n\tr%.2f (c%.2f, pst%.2f, ms%.2f), p-r%.2f, m%.2f\n",
			sub_100ab4f0(), (double)flThinkTime, pszSchedule, pszTask,
			(double)g_109203e8 * *g_109f367c, (double)g_109204a0 * *g_109f367c,
			(double)g_1090fe68 * *g_109f367c, (double)g_10920338 * *g_109f367c,
			(double)g_1090ff00 * *g_109f367c, (double)g_1090ff58 * *g_109f367c);

		Vector tmp = *(Vector *)vfunc220();
		Vector vecMins, vecMaxs;
		CCollisionProperty *pCP = (CCollisionProperty *)((char *)this + 0x270);
		pCP->sub_100dcd90(&pCP->m_vecMins.x, &pCP->m_vecMaxs.x, &vecMins.x, &vecMaxs.x);
		tmp.z = vecMaxs.z + 16.0f;

		if (g_1090fd70.sub_1005f190()) {
			float max = -1;
			const char *pszMax = "unknown";

			if ((double)g_109204a0 * *g_109f367c > max) {
				max = (double)g_109204a0 * *g_109f367c;
				pszMax = "Conditions";
			}
			if ((double)g_1090fe68 * *g_109f367c > max) {
				max = (double)g_1090fe68 * *g_109f367c;
				pszMax = "Pre-think";
			}
			if ((double)g_10920338 * *g_109f367c > max) {
				max = (double)g_10920338 * *g_109f367c;
				pszMax = "Schedule";
			}
			if ((double)g_1090ff00 * *g_109f367c > max) {
				max = (double)g_1090ff00 * *g_109f367c;
				pszMax = "Post-run";
			}
			if ((double)g_1090ff58 * *g_109f367c > max) {
				max = (double)g_1090ff58 * *g_109f367c;
				pszMax = "Move";
			}
			char buf[256];
			const char *pszText = sub_1027f5d0(buf, "Slow %.1f, %s %.1f ", (double)flThinkTime, pszMax, max);
			sub_10143710(&tmp.x, pszText, 0, 0x3f800000);
		}

		if (!g_10920344->vfunc1() && g_10920344->m_n2c)
			sub_10280c80();
	}
}
// END FUNCTION

// FUNCTION: 0x10278090 size=0xc7
#include "CAI_BaseNPC.h"
#include "CCineNPC.h"
#include "CEntityVSlots.h"

struct EntInfo { void *pEnt; unsigned int serial; int pad; };
struct EntList { int hdr; EntInfo e[1]; };
extern EntList *g_10566458;

struct EHandle
{
	volatile unsigned int m_Index;

	void *Get() const
	{
		unsigned int h = m_Index;
		if (h != 0xffffffff) {
			EntInfo *e = &g_10566458->e[h & 0x1fff];
			if (e->serial == (h >> 13))
				return e->pEnt;
		}
		return 0;
	}
};

int CAI_BaseNPC::sub_10278090(char bFlag, int n)
{
	int result = 1;
	EHandle *pHandle = (EHandle *)((char *)this + 0x5d74);
	if (pHandle->Get()) {
		CCineNPC *pCine = (CCineNPC *)pHandle->Get();
		if (!pCine->sub_101a8ac0())
			return 0;
		result = 2;
	}
	if (!((CEntityVSlots *)this)->slot158())
		return 0;
	if (!bFlag) {
		int state = *(int *)((char *)this + 0x5cc0);
		if (state != 0 && state != 1 && *(int *)((char *)this + 0x5cc4) != 1 && (state != 3 || n < 1))
			return 0;
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x102781a0 size=0x28
struct CUnknown102781a0 {
    char pad_0000[0x5da4];
    int m_n5da4;
    bool sub_102781a0(CUnknown102781a0 *pOther);
};

// TARGET: CUnknown102781a0::sub_102781a0
bool CUnknown102781a0::sub_102781a0(CUnknown102781a0 *pOther)
{
    if (pOther == 0)
        return false;
    if (m_n5da4 == 0)
        return false;
    if (m_n5da4 == pOther->m_n5da4)
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x102781e0 size=0x23
// TARGET: sub_102781e0
void __fastcall sub_102781e0(void *pSelf, int unused, int value)
{
    int old = *(int *)((char *)pSelf + 0x5db0);
    *(int *)((char *)pSelf + 0x5db0) = value;
    if (old != value) {
        ((void (__fastcall *)(void *, int, int, int))(*(void ***)pSelf)[0x89c / 4])(pSelf, value, old, value);
    }
}
// END FUNCTION

// FUNCTION: 0x10278220 size=0x1f9
#include "CAI_BaseNPC.h"
#include "utlmemory.h"
#include "CBaseEntity.h"
#include "CTraceFilterSimpleTwoEnt.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CAI_MoveProbe.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "CAI_Navigator.h"

struct V3 { float x, y, z; };
struct CViewOffsetView { char m_pad0000[0x184]; Vector m_vecViewOffset; };

void sub_10146570(V3 *pStart, V3 *pEnd, int a, int b, int c, int d, int e);

static inline Vector AddExtents(const Vector &a, const Vector &b)
{
	Vector res;
	res.x = a.x + b.x;
	res.y = b.y + a.y;
	res.z = b.z + a.z;
	return res;
}

extern int g_1090fdb4;
extern float g_104994a0;
extern Vector g_10934060;

#define GV(n) virtual void s##n();
#define GV10(p) GV(p##0) GV(p##1) GV(p##2) GV(p##3) GV(p##4) GV(p##5) GV(p##6) GV(p##7) GV(p##8) GV(p##9)

class CSlot548View
{
public:
	GV10(0) GV10(1) GV10(2) GV10(3) GV10(4) GV10(5) GV10(6) GV10(7) GV10(8) GV10(9)
	GV10(10) GV10(11) GV10(12) GV10(13) GV10(14) GV10(15) GV10(16) GV10(17) GV10(18) GV10(19)
	GV10(20) GV10(21) GV10(22) GV10(23) GV10(24) GV10(25) GV10(26) GV10(27) GV10(28) GV10(29)
	GV10(30) GV10(31) GV10(32) GV10(33) GV10(34) GV10(35) GV10(36) GV10(37) GV10(38) GV10(39)
	GV10(40) GV10(41) GV10(42) GV10(43) GV10(44) GV10(45) GV10(46) GV10(47) GV10(48) GV10(49)
	GV10(50) GV10(51) GV10(52) GV10(53) GV(540) GV(541) GV(542) GV(543) GV(544) GV(545) GV(546) GV(547)
	virtual char vfunc548(const Vector *pEnd, int a);
};

class CEngineTraceView
{
public:
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4(Ray_t *pRay, unsigned int fMask, CTraceFilterSimpleTwoEnt *pFilter, CGameTrace *pTrace);
};

struct CNavGoalRecord
{
	int m_nType;	// 0x00
	Vector m_vecPos;	// 0x04
	int m_n10;	// 0x10
	int m_n14;	// 0x14
	int m_n18;	// 0x18
	int m_n1c;	// 0x1c
	float m_fl20;	// 0x20
	int m_n24;	// 0x24
	int m_n28;	// 0x28
	Vector m_vec2c;	// 0x2c
	int m_n38;	// 0x38
	int m_n3c;	// 0x3c
};

bool CAI_BaseNPC::sub_10278220(const Vector *pStart, const Vector *pEnd, int mask)
{
	CTraceFilterSimpleTwoEnt filter(this, (const void *)mask, 0);
	CGameTrace trace;
	{
		Ray_t ray;
		ray.sub_1004f7a0((const float *)pStart, AddExtents(*pEnd, ((CViewOffsetView *)this)->m_vecViewOffset).Base());
		((CEngineTraceView *)g_1070b254)->v4(&ray, 0x2804091, &filter, &trace);
		if (g_10738960.sub_1005f190())
			sub_10146570((V3 *)&trace.m_startpos, (V3 *)&trace.m_endpos, 0xff, 0, 0, 1, 0xbf800000);
	}

	if (trace.m_fraction != 1.0)
	{
		if (((CSlot548View *)this)->vfunc548(pEnd, 0))
		{
			AIMoveTrace_t moveTrace;
			CAI_MoveProbe *pMoveProbe = (CAI_MoveProbe *)Owned5d40();
			float *pOrigin = vfunc220();
			pMoveProbe->sub_102e6d70(0, pOrigin, (const float *)pEnd, 0x202400b, 0, 100.0f, 0, &moveTrace, 0, 0);
			if (moveTrace.fStatus == 0)
			{
				float flDefaultSpeed = g_104994a0;
				CNavGoalRecord goal;
				goal.m_nType = 4;
				goal.m_vecPos = *pEnd;
				goal.m_n10 = -1;
				goal.m_n14 = 0x13;
				goal.m_n18 = -1;
				goal.m_n1c = -1;
				goal.m_fl20 = flDefaultSpeed;
				goal.m_n24 = 0;
				goal.m_n28 = g_1090fdb4;
				goal.m_vec2c = g_10934060;
				goal.m_n38 = 0;
				goal.m_n3c = 0;
				CAI_Navigator *pNavigator = (CAI_Navigator *)Owned5d34();
				if (pNavigator->sub_102ecd20(&goal, 1))
					return true;
			}
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102784a0 size=0x144
#include "CAI_BaseNPC.h"
#include "QAngle.h"

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);

bool CAI_BaseNPC::sub_102784a0(const Vector *pStart, int mask)
{
	Vector vecStep;
	Vector vecMinus;
	Vector vecPlus;
	Vector vecRight;
	if (sub_10278220(pStart, (const Vector *)vfunc220(), mask))
		return true;
	sub_10139610(*(QAngle *)vfunc221(), 0, &vecRight, 0);
	vecStep = vecRight * 48.0f;
	vecStep.z = 0;
	vecMinus = vecPlus = *(Vector *)vfunc220();
	Vector vecStart = *pStart;
	for (int i = 0; i < 5; i++)
	{
		vecMinus = vecMinus - vecStep;
		vecPlus = vecPlus + vecStep;
		if (sub_10278220(&vecStart, &vecMinus, mask))
			return true;
		if (sub_10278220(&vecStart, &vecPlus, mask))
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10278650 size=0x213
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CAI_BaseNPC.h"
#include "Vector.h"
#include "ehandle.h"
#include "CVStatList_t.h"
#include "CUnknown102e0150.h"
#include "CBaseCombatCharacter.h"
#include "QAngle.h"

void sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
extern float g_104994e0;

struct CAI_BaseNPC_78650 : public CAI_BaseNPC
{
	char m_pad0004[0x5ba8 - 4];
	CHandle<CAI_BaseNPC> m_h5ba8;
};

Vector CAI_BaseNPC::sub_10278650(const Vector &vecPos, int a, int b)
{
	CAI_BaseNPC_78650 *pThis = (CAI_BaseNPC_78650 *)this;

	if ( pThis->m_h5ba8 )
	{
		Vector vecOut = *(Vector *)pThis->m_h5ba8->vfunc217();
		return vecOut;
	}

	CAI_BaseNPC *pEnemy = (CAI_BaseNPC *)vfunc167();

	if ( pEnemy )
	{
		Vector vecLKP;
		vfunc541()->sub_102dfed0(&vecLKP, (CBaseEntity *)vfunc167());

		Vector vecTarget = pEnemy->vfunc197(vecPos, a, b);

		CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)((CBaseEntity *)pEnemy)->m_p9c;
		if ( pChar != 0 && pChar->m_pA8 != 0 )
		{
			if ( CVStatListSet::Of(pChar)->Find(3)->sub_102012d0(0xb) == 5 )
				vecTarget.z += g_104994e0;
		}

		Vector vecOffset = vecTarget - *(Vector *)pEnemy->vfunc217();
		return vecLKP + vecOffset;
	}
	else
	{
		Vector forward;
		sub_10139610((const QAngle *)vfunc221(), &forward, 0, 0);
		return forward + vecPos;
	}
}
// END FUNCTION

// FUNCTION: 0x10278900 size=0x82
#include "Vector.h"
#include "CAI_BaseNPC.h"

Vector CAI_BaseNPC::vfunc574(const Vector &vecPos, int a, int b)
{
	Vector vecTarget = sub_10278650(vecPos, a, b);
	Vector dir = vecTarget - vecPos;
	VectorNormalize(dir);
	return dir;
}
// END FUNCTION

// FUNCTION: 0x102789c0 size=0x206
#include "CAI_BaseNPC.h"
#include "Vector.h"

// bNoisy / bUseEye are bools in the game (byte tests); the header keeps int for the matched callers that forward them.
Vector CAI_BaseNPC::vfunc197(const Vector &posSrc, int bNoisy, int bUseEye)
{
	Vector low, delta;
	VectorSubtract(vfunc192(), (VectorMultiply(vfunc192() - *(Vector *)vfunc217(), 0.25f, delta), delta), low);
	Vector high = vfunc193();
	VectorSubtract(high, low, delta);
	Vector result;
	if ((bool)(char)bNoisy)
	{
		float rand1 = enginerandom->vfunc1(0.0, 0.5);
		float rand2 = enginerandom->vfunc1(0.0, 0.5);
		result = low + delta * rand1 + delta * rand2;
	}
	else if ((bool)(char)bUseEye)
		result = high;
	else
		result = low + delta * 0.5f;

	return result;
}
// END FUNCTION

// FUNCTION: 0x10278c60 size=0xf
#include "CAI_BaseNPC.h"

bool CAI_BaseNPC::vfunc575()
{
	return (vfunc513() >> 6) & 1;
}
// END FUNCTION

// FUNCTION: 0x10278c80 size=0x20
#include <math.h>
#include "CUnknown10290040.h"

// TARGET: CUnknown10290040::sub_10278c80
char CUnknown10290040::sub_10278c80()
{
    return fabs(m_pMotor5d44->sub_102e1f90()) <= 0.006;
}
// END FUNCTION

// FUNCTION: 0x10278cb0 size=0x47
#include "CAI_BaseNPC.h"
struct ConVarLike {
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad0004[0x24];
	float m_f28;
	int m_n2c;
};
struct NpcHelper {
	virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4();
	virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8(); virtual void h9();
	virtual void h10(); virtual void h11(); virtual void h12(); virtual void h13();
	virtual void vfunc14(int a, float b, float c, float d);
};
extern ConVarLike *g_10924f74;

void CAI_BaseNPC::vfunc519(int a, float b, float c, float d)
{
	if (!g_10924f74->vfunc1() && g_10924f74->m_n2c)
		(*(NpcHelper **)((char *)this + 0x5d44))->vfunc14(a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x10278d20 size=0x47
#include "CAI_BaseNPC.h"

struct ConVarLike {
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad0004[0x24];
	float m_f28;
	int m_n2c;
};
struct NpcHelper {
	virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4();
	virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8(); virtual void h9();
	virtual void h10(); virtual void h11(); virtual void h12();
	virtual void vfunc13(int a, float b, float c, float d);
};
extern ConVarLike *g_10924f74;

void CAI_BaseNPC::vfunc518(int a, float b, float c, float d)
{
	if (!g_10924f74->vfunc1() && g_10924f74->m_n2c)
		(*(NpcHelper **)((char *)this + 0x5d44))->vfunc13(a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x10278d90 size=0x47
#include "CAI_BaseNPC.h"

struct ConVarLike {
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad0004[0x24];
	float m_f28;
	int m_n2c;
};
struct NpcHelper {
	virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4();
	virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8(); virtual void h9();
	virtual void h10(); virtual void h11();
	virtual void h12(int a, int b, float c, float d, float e);
};
extern ConVarLike *g_10924f74;

void CAI_BaseNPC::vfunc517(int a, int b, float c, float d, float e)
{
	if (!g_10924f74->vfunc1() && g_10924f74->m_n2c)
		(*(NpcHelper **)((char *)this + 0x5d44))->h12(a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x10278e00 size=0x13
#include "CAI_BaseNPC.h"

struct CAI_Helper5d44 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual float v15(int a);
};

float CAI_BaseNPC::vfunc520(int a)
{
	float f = (*(CAI_Helper5d44 **)((char *)this + 0x5d44))->v15(a);
	return f;
}
// END FUNCTION

// FUNCTION: 0x10278e30 size=0x161
#include "CAI_BaseNPC.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b248 *g_1070b248;
int sub_101af070(const char *pszSentence);
int sub_101aeb60(int edict, const char *pszSentence, float flVolume, int soundlevel, int flags, int pitch);

template <class T> __forceinline T EdictOf(T e) { return e; }

// TARGET: CAI_BaseNPC::vfunc484
int CAI_BaseNPC::vfunc484(const char *pszSentence, int unused, float volume, int soundlevel, int unused2)
{
	int sentenceIndex = -1;
	if (pszSentence && vfunc158()) {
		if (pszSentence[0] == '!') {
			sentenceIndex = sub_101af070(pszSentence);
			CPASAttenuationFilter filter((CEntitySoundOriginView *)this, (soundlevel_t)soundlevel);
			g_1070b248->vfunc4(&filter, engine->vfunc35(EdictOf(*(int *)((char *)this + 0x2e0))), 2, sentenceIndex, volume, soundlevel, 0, 100, 0, 0, 1, 0);
		} else {
			sentenceIndex = sub_101aeb60(EdictOf(*(int *)((char *)this + 0x2e0)), pszSentence, volume, soundlevel, 0, 100);
		}
	}
	return sentenceIndex;
}
// END FUNCTION

// FUNCTION: 0x10279000 size=0x21
#include "CAI_BaseNPC.h"
void CAI_BaseNPC::vfunc485(const char *pszSample, int a, float flVolume, int b, int c, int d)
{
	vfunc484(pszSample, a, flVolume, b, 0);
}
// END FUNCTION

// FUNCTION: 0x10279040 size=0xb
namespace lifted {
extern char g_105ccb48;
int __stdcall sub_10005c59(int);
}
int sub_10279040()
{
    return lifted::sub_10005c59((int)&lifted::g_105ccb48);
}
// END FUNCTION

// FUNCTION: 0x10279060 size=0x13
#include "CAI_BaseNPC.h"
namespace lifted {
void sub_10084b40(void *pEntity, const char *pszScene, unsigned int *pOut);
}

void CAI_BaseNPC::vfunc540(const char *pszScene)
{
	lifted::sub_10084b40(this, pszScene, 0);
}
// END FUNCTION

// FUNCTION: 0x10279090 size=0x16e
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"

extern "C" int __cdecl _strcmpi(const char *a, const char *b);
__declspec(dllimport) void DevMsg(const char *fmt, ...);

CBasePlayer *sub_101cd9e0(int index);	// stub 0x1000ac8b
extern CGlobalEntityList g_106eb5d8;
extern int g_10920558;
extern int g_1092055c;

// TARGET: CAI_BaseNPC::vfunc559
CBaseEntity *CAI_BaseNPC::vfunc559(const char *pszName)
{
    if (!_strcmpi(pszName, "!player"))
        return (CBaseEntity *)sub_101cd9e0(1);
    if (!_strcmpi(pszName, "!playercontroller")) {
        CBasePlayer *pPlayer = sub_101cd9e0(1);
        if (pPlayer)
            return pPlayer->sub_101618a0();
    } else if (!_strcmpi(pszName, "!enemy")) {
        if (vfunc167())
            return (CBaseEntity *)vfunc167();
    } else if (_strcmpi(pszName, "!self") && _strcmpi(pszName, "!target1")) {
        if (!_strcmpi(pszName, "!nearestfriend") || !_strcmpi(pszName, "!friend"))
            return (CBaseEntity *)sub_101cd9e0(1);
        if (!_strcmpi(pszName, "self")) {
            if (++g_10920558 < 5) {
                DevMsg("ERROR: \"self\" is no longer used, use \"!self\" in vcd instead!\n");
                return (CBaseEntity *)this;
            }
        } else {
            if (!_strcmpi(pszName, "Player")) {
                if (++g_1092055c < 5)
                    DevMsg("ERROR: \"player\" is no longer used, use \"!player\" in vcd instead!\n");
                return (CBaseEntity *)sub_101cd9e0(1);
            }
            CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
            if (pEnt)
                return pEnt;
        }
    }
    return (CBaseEntity *)this;
}
// END FUNCTION

// FUNCTION: 0x10279260 size=0x3e
#include "CBaseEntity.h"

void sub_100940d0();

void __fastcall sub_10279260(CBaseEntity *param_1)
{
    if (param_1->sub_100b3700() & 1) {
        param_1->sub_100ac4e0(0, 0, 0);
        ((void (__fastcall *)(CBaseEntity *))sub_100940d0)(param_1);
        param_1->sub_100b3b00();
        return;
    }
    *(float *)((char *)param_1 + 0x17c) = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x102792b0 size=0x114
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPC.h"
#include "CBaseAnimating.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern float g_1070d1b0[3];
void sub_101cf390(CBaseEntity *pEnt, const float *a, const float *b);
void sub_1000b1d6();

struct SNpcDeathView
{
	char pad0[0x26c];
	const char *name26c;
	CCollisionProperty collision;
};

void CAI_BaseNPC::sub_102792b0()
{
	CBaseAnimating *pAnim = (CBaseAnimating *)this;
	CBaseEntity *pEnt = (CBaseEntity *)this;
	pAnim->sub_10095be0();
	{
		ScopeTrace trace("CBaseEntity::RemoveSolidFlags", this ? (((SNpcDeathView *)this)->name26c ? ((SNpcDeathView *)this)->name26c : g_106b8540) : g_105387dc);
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
		pCol->sub_100dc580(pCol->m_usSolidFlags & ~4);
	}
	pEnt->vfunc93(6, 0);
	*(int *)((char *)this + 0x6f8) = 0;
	pAnim->sub_10090950();
	*(int *)((char *)this + 0x6f4) = 0;
	*(int *)((char *)this + 0x208) = *(int *)((char *)this + 0x210);
	*(int *)((char *)this + 0x200) = 2;
	sub_101cf390(pEnt, g_1070d1b0, g_1070d1b0);
	pEnt->sub_100b3b00();
	sub_10265a40();
	pEnt->sub_100ac4e0((int)sub_1000b1d6, 0, 0);
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.5;
}
// END FUNCTION

// FUNCTION: 0x10279420 size=0x4e2
#include "CAI_BaseNPC.h"
#include "CGameTrace.h"
#include "Ray_t.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "UTIL_Trace.h"

float __cdecl sub_10146150(const Vector *v);

#include <math.h>
namespace block_10279420 {
#pragma auto_inline(off)
struct RayInit : Ray_t { void sub_1004f7a0(const float *pStart, const float *pEnd); };
void RayInit::sub_1004f7a0(const float *pStart, const float *pEnd)
{
    VectorSubtract(*(const Vector *)pEnd, *(const Vector *)pStart, *(Vector *)m_Delta);
    m_IsSwept = ((Vector *)m_Delta)->LengthSqr() != 0;
    m_StartOffset[2] = 0;
    m_StartOffset[1] = 0;
    m_StartOffset[0] = 0;
    m_IsRay = true;
    m_Extents[2] = 0;
    m_Extents[1] = 0;
    m_Extents[0] = 0;
    m_Start[0] = pStart[0];
    m_Start[1] = pStart[1];
    m_Start[2] = pStart[2];
    m_b32 = 0;
    m_n34 = 0;
    m_b33 = 0;
}
struct Ray_tViewH { Vector m_Start; Vector m_Delta; Vector m_StartOffset; Vector m_Extents; bool m_IsRay; bool m_IsSwept; char m_b32; char m_b33; float m_f34; };
struct RayHull : Ray_t { void sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b); };
void RayHull::sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b)
{
	const Vector &end = *(const Vector *)pEnd;
	Ray_tViewH *r = (Ray_tViewH *)this;
	const Vector &mins = *(const Vector *)pMins;
	const Vector &maxs = *(const Vector *)pMaxs;
	VectorSubtract(end, start, r->m_Delta);
	r->m_IsSwept = (r->m_Delta.LengthSqr() != 0.0f);
	VectorSubtract(maxs, mins, r->m_Extents);
	r->m_Extents *= 0.5f;
	r->m_IsRay = (r->m_Extents.LengthSqr() < 1e-6);
	VectorAdd(mins, maxs, r->m_StartOffset);
	r->m_StartOffset *= 0.5f;
	VectorAdd(start, r->m_StartOffset, r->m_Start);
	r->m_StartOffset *= -1.0f;
	r->m_b32 = b;
	r->m_b33 = 0;
	r->m_f34 = 0.0f;
	if (a && !r->m_IsRay) {
		r->m_f34 = (float)sqrt((r->m_Extents.x * r->m_Extents.x) + (r->m_Extents.y * r->m_Extents.y));
		if (1e-6 < r->m_f34)
			r->m_b33 = 1;
	}
}
#pragma auto_inline(on)
}
using namespace block_10279420;
inline void TraceLineCallsR(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	((RayInit *)&ray)->sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}
inline void TraceLineCallsR(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter, CGameTrace *ptr)
{
	Ray_t ray;
	((RayInit *)&ray)->sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

__forceinline Vector VSubG(const Vector &a, const Vector &b) { Vector r; r.x = a.x - b.x; r.y = a.y - b.y; r.z = a.z - b.z; return r; }
bool CAI_BaseNPC::sub_10279420()
{
	float hx = vfunc214()[0] * 0.5f;
	float hy = vfunc214()[1] * 0.5f;
	Vector start;
	start.x = hx + vfunc217()[0];
	start.y = hy + vfunc217()[1];
	start.z = vfunc217()[2];
	CGameTrace tr;
	float last, cur;
	{ Vector end = VSubG(start, Vector(0, 0, 100.0f)); TraceLineCallsR(start, end, 0x2400b, this, 0, &tr); }
	{ Vector d = VSubG(start, *(Vector *)&tr.m_endpos); last = sub_10146150(&d); }
	start.x = vfunc217()[0] - hx;
	start.y = vfunc217()[1] - hy;
	{ Vector end = VSubG(start, Vector(0, 0, 100.0f)); TraceLineCallsR(start, end, 0x2400b, this, 0, &tr); }
	{ Vector d = VSubG(start, *(Vector *)&tr.m_endpos); cur = sub_10146150(&d); }
	if (cur > last)
		return false;
	last = cur;
	start.x = vfunc217()[0] - hx;
	start.y = hy + vfunc217()[1];
	{ Vector end = VSubG(start, Vector(0, 0, 100.0f)); TraceLineCallsR(start, end, 0x2400b, this, 0, &tr); }
	{ Vector d = VSubG(start, *(Vector *)&tr.m_endpos); cur = sub_10146150(&d); }
	if (cur > last)
		return false;
	last = cur;
	start.x = hx + vfunc217()[0];
	start.y = vfunc217()[1] - hy;
	{ Vector end = VSubG(start, Vector(0, 0, 100.0f)); TraceLineCallsR(start, end, 0x2400b, this, 0, &tr); }
	{ Vector d = VSubG(start, *(Vector *)&tr.m_endpos); cur = sub_10146150(&d); }
	if (cur > last)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10279a50 size=0xd5
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
struct S10739a4c { void sub_101e3d70(CAI_BaseNPC *pNPC); };
extern S10739a4c g_10739a4c;
static inline CGlobalEntityList_Ent *Resolve(unsigned int h)
{
    if (h != -1) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        if (s->m_Serial == (h >> 13))
            return s->m_pEntity;
    }
    return 0;
}
void CAI_BaseNPC::sub_10279a50(int a)
{
    CGlobalEntityList_Ent *pEnt = (CGlobalEntityList_Ent *)a;
    unsigned int *pHandle = (unsigned int *)((char *)this + 0x5ce0);
    if (Resolve(*(unsigned int *)pHandle) != pEnt) {
        unsigned int h = *(volatile unsigned int *)pHandle;
        if (h != -1) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
            if (s->m_Serial == (h >> 13) && s->m_pEntity)
                sub_10279b70((CBaseEntity *)Resolve(*(volatile unsigned int *)pHandle));
        }
        vfunc560();
    }
    if (pEnt) {
        *pHandle = *pEnt->v1();
        g_10739a4c.sub_101e3d70(this);
    } else {
        *pHandle = -1;
    }
}
// END FUNCTION

// FUNCTION: 0x10279b70 size=0x2a
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"

void CAI_BaseNPC::sub_10279b70(CBaseEntity *pEnt)
{
	unsigned int *pHandle = (unsigned int *)((char *)this + 0x1a94);
	if (pEnt)
		*pHandle = *pEnt->vfunc1();
	else
		*pHandle = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x10279bb0 size=0x2a
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CUnknown102e0150.h"

// TARGET: CAI_BaseNPC::sub_10279bb0
Vector *CAI_BaseNPC::sub_10279bb0(Vector *pOut)
{
	((CUnknown102e0150 *)vfunc541())->sub_102dfed0(pOut, (CBaseEntity *)vfunc167());
	return pOut;
}
// END FUNCTION

// FUNCTION: 0x10279bf0 size=0x1f
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CUnknown102e0150.h"

// TARGET: CAI_BaseNPC::sub_10279bf0
float CAI_BaseNPC::sub_10279bf0()
{
	return ((CUnknown102e0150 *)vfunc541())->sub_102e0150((CBaseEntity *)vfunc167());
}
// END FUNCTION

// FUNCTION: 0x10279c20 size=0x1f
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CUnknown102dfd90.h"

// TARGET: CAI_BaseNPC::sub_10279c20
void CAI_BaseNPC::sub_10279c20()
{
    ((CUnknown102dfd90 *)vfunc541())->sub_102dfd90((CBaseEntity *)vfunc167());
}
// END FUNCTION

// FUNCTION: 0x10279c50 size=0x26
struct CUnknown102dfaa0
{
	void sub_102dfaa0(void *p, int a);
};

struct CNpcView10279c50
{
	void sub_10279c50(int arg);
};

// TARGET: CNpcView10279c50::sub_10279c50
void CNpcView10279c50::sub_10279c50(int arg)
{
	((CUnknown102dfaa0 *)((void *(__fastcall *)(void *))(*(void ***)this)[541])(this))->sub_102dfaa0(
		(void *)((int (__fastcall *)(void *))(*(void ***)this)[167])(this), arg);
}
// END FUNCTION

// FUNCTION: 0x10279c90 size=0x1f
#include "vampire.h"
#include "CAI_BaseNPC.h"
#include "CUnknown102e0150.h"
// TARGET: CAI_BaseNPC::sub_10279c90
void CAI_BaseNPC::sub_10279c90()
{
    ((CUnknown102e0150 *)vfunc541())->sub_102e0210(vfunc167());
}
// END FUNCTION

// FUNCTION: 0x10279cc0 size=0x2a
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"

void CAI_BaseNPC::sub_10279cc0(CBaseEntity *pEnt)
{
	unsigned int *pHandle = (unsigned int *)((char *)this + 0x5ce4);
	if (pEnt)
		*pHandle = *pEnt->vfunc1();
	else
		*pHandle = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x10279d00 size=0xa0
#include "CAI_BaseNPC.h"
#include "CUnknown102e0150.h"

typedef char (__fastcall *PFN_Char)(void *);

static inline char CallSlot158(void *p)
{
    return ((PFN_Char)(*(void ***)p)[158])(p);
}

bool CAI_BaseNPC::vfunc480()
{
    if ((*(unsigned int *)((char *)this + 0x14bc) & 0x10000) != 0x10000) {
        return !vfunc167()
            || !CallSlot158((void *)vfunc167())
            || vfunc541()->sub_102e0210(vfunc167())
            || sub_10269aa0(0x43) || sub_10269aa0(0x45) || sub_10269aa0(0x5b) || sub_10269aa0(0x58);
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10279dd0 size=0x42c
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPC.h"
#include "CVProfile.h"
#include "ScopeTrace.h"
#include "COutputEvent.h"
#include "CUnknown102e0150.h"

struct CCycleSampler
{
	unsigned __int64 m_Int64;
	void Sample() { __asm { mov ecx, this
		rdtsc
		mov [ecx], eax
		mov [ecx+4], edx } }
};

struct CDevFlagObj { virtual void v0(); virtual void v1(); };
extern CDevFlagObj *g_10924a6c;
__declspec(dllimport) void DevMsg(int level, const char *fmt, ...);

struct CAI_BaseNPCChoose : CAI_BaseNPC { CBaseEntity *sub_102707d0(CBaseEntity *pEnt); };

#define NPC_M(T, off) (*(T *)((char *)this + (off)))

// TARGET: CAI_BaseNPC::sub_10279dd0
bool CAI_BaseNPC::sub_10279dd0()
{
	ScopeTrace trace("CAI_BaseNPC::ChooseEnemy", this ? (NPC_M(const char *, 0x26c) ? NPC_M(const char *, 0x26c) : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CAI_Enemies_ChooseEnemy", 0, "Unaccounted", false);

	CBaseEntity *pInitialEnemy = (CBaseEntity *)vfunc167();
	CBaseEntity *pChosenEnemy = pInitialEnemy;
	unsigned int uFlags = NPC_M(unsigned int, 0x5d8c);
	bool fHadEnemy = (uFlags & 0x18000) != 0;
	unsigned char fEnemyWasPlayer = (uFlags >> 16) & 1;
	bool fEnemyWentNull = fHadEnemy && !pInitialEnemy;
	bool fEnemyEluded = fEnemyWentNull || (pInitialEnemy && vfunc541()->sub_102e0210((int)pInitialEnemy));
	bool fEnemyDead = pInitialEnemy && !((CAI_BaseNPC *)pInitialEnemy)->vfunc158();
	bool fCondNewEnemy, fCondLostEnemy, fCondEnemyDead;

	if (NPC_M(void *, 0x5c38)) {
		fCondNewEnemy = sub_10269c70(0x54);
		fCondLostEnemy = sub_10269c70(0x47);
		fCondEnemyDead = sub_10269c70(0x58);
	} else {
		fCondEnemyDead = fCondLostEnemy = fCondNewEnemy = true;
	}

	if (!fEnemyDead || !fCondEnemyDead) {
		if (!fEnemyWentNull) {
			if (!fCondNewEnemy && !(fCondLostEnemy && fEnemyEluded)) {
				CVProfile *pProf = g_109f3648;
				bool bRet = pChosenEnemy != 0;
				pProf->ExitScope();
				return bRet;
			}
		} else if (!fCondNewEnemy && !fCondLostEnemy && NPC_M(void *, 0x5c38)) {
			DevMsg(2, "WARNING: AI enemy went NULL but schedule (%s) is not interested\n", *(const char **)((char *)NPC_M(void *, 0x5c38) + 0x40));
		}
	}

	if (vfunc480())
		pChosenEnemy = ((CAI_BaseNPCChoose *)this)->sub_102707d0((CBaseEntity *)vfunc478());

	if (pChosenEnemy != pInitialEnemy || fEnemyWentNull) {
		NPC_M(unsigned int, 0x5d8c) &= 0xfffe7fff;
		if (pInitialEnemy && !((CAI_BaseNPC *)pInitialEnemy)->vfunc158()) {
			g_10924a6c->v1();
			sub_10269a20(0x58);
		}
		if (!pChosenEnemy) {
			sub_10269b50(0x54);
		} else {
			g_10924a6c->v1();
			sub_10269a20(0x54);
		}
		sub_10279a50((int)pChosenEnemy);
		if (fHadEnemy) {
			sub_1028ae60();
			NPC_M(unsigned int, 0x5d8c) &= 0xfffdffff;
		}
		if (!pChosenEnemy) {
			if (fEnemyEluded) {
				g_10924a6c->v1();
				sub_10269a20(0x47);
				vfunc493();
			}
			if (fEnemyWasPlayer)
				(&NPC_M(COutputEvent, 0x5ecc))->sub_100cd660((CBaseEntity *)this, (CBaseEntity *)this, 0);
			else
				(&NPC_M(COutputEvent, 0x5e84))->sub_100cd660((CBaseEntity *)this, (CBaseEntity *)this, 0);
		} else {
			NPC_M(unsigned int, 0x5d8c) |= (*(int *)((char *)pChosenEnemy + 0xa8) != 0 ? 0x10000 : 0x8000);
		}
	}

	CVProfile *p = g_109f3648;
	bool bRet = pChosenEnemy != 0;
	if (!p->m_bAtRoot || p->m_enabled) {
		CVProfNode *n = p->m_pCurNode;
		if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
			CCycleSampler end;
			end.m_Int64 = 0;
			end.Sample();
			CUnknownCycle100335e0 *pc = &n->m_CurFrameTime;
			pc->m_Int64 = end.m_Int64 - pc->m_Int64;
			n->m_TotalTime += pc->m_Int64;
			CVProfile *q = g_109f3648;
			q->m_nGroupStackDepth--;
			int nOld = q->m_GroupIDStack[q->m_nGroupStackDepth + 1];
			int nNew = q->m_GroupIDStack[q->m_nGroupStackDepth];
			if (nNew != nOld && q->m_bVTuneGroupsEnabled && nOld == q->m_nVTuneGroupID)
				vtune(false);
		}
		if (n->m_nRecursions == 0)
			p->m_pCurNode = p->m_pCurNode->m_pParent;
		p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
	return bRet;
}
// END FUNCTION

// FUNCTION: 0x1027a310 size=0xb7
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "Vector.h"
extern void (__cdecl *g_109f3630)(const char *fmt, ...);	// DevMsg

struct CRandomStreamX
{
	virtual void v0();
	virtual float RandomFloat(float flMin, float flMax);
};
extern CRandomStreamX *g_1070b244;

struct CDropItemX	// the created item entity
{
	void sub_100b1d10();	// stub 0x1000d486: ClearParent
	void sub_100b2770(const Vector *pVelocity);	// stub 0x1000489a
	void sub_100b2f50(const Vector *pImpulse);	// stub 0x10006a5f
};

CDropItemX *sub_100a99d0(const char *pszName, const Vector *pOrigin, const Vector *pAngles, CAI_BaseNPC *pOwner);

CBaseEntity *CAI_BaseNPC::sub_1027a310(const char *pszItemName, Vector vecPos, Vector vecAng)
{
	if (!pszItemName) {
		g_109f3630("DropItem() - No item name!\n");
		return 0;
	}
	CDropItemX *pItem = sub_100a99d0(pszItemName, &vecPos, &vecAng, this);
	if (pItem) {
		if ((unsigned char)(*(unsigned int *)((char *)this + 0x268) >> 12) & 1)
			((CDropItemX *)this)->sub_100b1d10();
		pItem->sub_100b2770((const Vector *)((char *)this + 0x3bc));
		Vector vecImpulse;
		vecImpulse.y = g_1070b244->RandomFloat(0, 100.0f);
		vecImpulse.x = 0;
		vecImpulse.z = 0;
		pItem->sub_100b2f50(&vecImpulse);
		return (CBaseEntity *)pItem;
	}
	g_109f3630("DropItem() - Didn't create!\n");
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1027a400 size=0xd
#include "CAI_BaseNPC.h"
struct NpcFlags204 { char pad[0x204]; unsigned int m; };
unsigned int CAI_BaseNPC::vfunc552()
{
	return (((NpcFlags204 *)this)->m >> 9) & 1;
}
// END FUNCTION

// FUNCTION: 0x1027a420 size=0xc9
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"
struct SNpcSchedule
{
    char m_pad[0x1c];
    int m_type;
};

#define NPC_FIELD(type, off) (*(type *)((char *)this + (off)))

struct CNpcScheduleV { char m_pad[0x1c]; int m_iScheduleId; int GetId() const { return m_iScheduleId; } };
inline bool IsCurSchedule(CAI_BaseNPC *p, int schedId, bool fTranslate = true)
{
    CNpcScheduleV *pSchedule = *(CNpcScheduleV **)((char *)p + 0x5c38);
    return (pSchedule &&
            ((fTranslate && (void *)pSchedule == (void *)p->vfunc447(schedId)) ||
             (!fTranslate && p->vfunc447(pSchedule->GetId()) == schedId)));
}
// TARGET: CAI_BaseNPC::vfunc509
bool CAI_BaseNPC::vfunc509()
{
    int state = NPC_FIELD(int, 0x5cc0);
    if ((state == 1 || state == 3) && !((char)(NPC_FIELD(unsigned int, 0x204) >> 1) & 1) && NPC_FIELD(char, 0x1480)
        && !NPC_FIELD(EHANDLE, 0xfe8) && !((CBaseCombatCharacter *)this)->sub_1033e2b0())
    {
        int val = 999;
        if (IsCurSchedule(this, 0x12f, false))
            val = 20;
        else if (vfunc510())
        {
            vfunc507();
            return false;
        }
        if (enginerandom->vfunc2(0, val) == 0)
            return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x1027a530 size=0x6d
#include "CAI_BaseNPC.h"
#define TEN(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct S0 { TEN(a) };
struct S1 : S0 { TEN(b) };
struct S2 : S1 { TEN(c) };
struct S3 : S2 { TEN(d) };
struct S4 : S3 { TEN(e) };
struct S5 : S4 { TEN(f) };
struct S6 : S5 { TEN(g) };
struct S7 : S6 { TEN(h) };
struct S8 : S7 { TEN(i) };
struct S9 : S8 { TEN(j) };
struct S10 : S9 { TEN(k) };
struct S11 : S10 { virtual void l0(); virtual void l1(); virtual void l2(); virtual void l3(); virtual void l4(); virtual void l5(); virtual void l6(); virtual void l7(); virtual void l8(); virtual double l9(int); };
struct IChk { virtual void m0(); virtual void m1(); virtual int m2(int, int); };
extern S11 *g_1070b22c;
extern IChk *g_1070b244;

bool CAI_BaseNPC::vfunc510()
{
    int state = *(int *)((char *)this + 0x10e8);
    if (state == 0)
        return false;
    if (state == 8)
        return false;
    double t = *(float *)((char *)this + 0x10ec);
    if (g_1070b22c->l9(0) < t)
        return false;
    bool r = g_1070b244->m2(0, *(int *)((char *)this + 0x10e8)) == 0;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1027a5c0 size=0x58
#include "CAI_BaseNPC.h"
#include "CLogicAuto.h"
struct SSquad60 { char pad[0x60]; float m_flTime; };
static inline bool Bit1(unsigned int v) { return ((v >> 1) & 1) != 0; }
bool CAI_BaseNPC::vfunc486()
{
	char *p = (char *)this;
	if (gpGlobals->curtime <= *(float *)(p + 0x5ce8))
		return false;
	if (*(int *)(p + 0x5bb0) <= 0 && *(SSquad60 **)(p + 0x5da4)) {
		if (gpGlobals->curtime <= (*(SSquad60 **)(p + 0x5da4))->m_flTime)
			return false;
	}
	if (Bit1(*(unsigned int *)(p + 0x204)) && *(int *)(p + 0x5cc0) != 2)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x1027a640 size=0x5d
#include "CAI_BaseNPC.h"
#include "globalvars.h"
#include "engineiface.h"
// TARGET: CAI_BaseNPC::vfunc487
void CAI_BaseNPC::vfunc487()
{
	*(float *)((char *)this + 0x5ce8) = enginerandom->vfunc1(1.5f, 2.0f) + gpGlobals->curtime;
	if (*(int *)((char *)this + 0x5bb0) <= 0) {
		char *pSquad = *(char **)((char *)this + 0x5da4);
		if (pSquad)
			*(float *)(pSquad + 0x60) = enginerandom->vfunc1(1.5f, 2.0f) + gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x1027a6c0 size=0x29
#include "CAI_BaseNPC.h"
#include "CUnknown102ee270.h"
int __fastcall sub_102ee510(void *p);
// TARGET: CAI_BaseNPC::sub_1027a6c0
int CAI_BaseNPC::sub_1027a6c0()
{
    int r;
    if (((CUnknown102ee270 *)*(int *)((char *)this + 0x5d34))->sub_102ee6a0())
    {
        r = sub_102ee510(*(void **)((char *)this + 0x5d34));
        if (r != -1)
            return r;
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1027a700 size=0x28
#include "CAI_BaseNPC.h"
#include "CAI_Navigator.h"

struct CAI_BaseNPC435View : CAI_BaseNPC
{
	char m_pad0004[0x5cf0 - sizeof(CAI_BaseNPC)];
	int m_n5cf0;
	char m_pad5cf4[0x5d34 - 0x5cf4];
	CAI_Navigator *m_pNavigator;
};

// TARGET: CAI_BaseNPC::vfunc435
void CAI_BaseNPC::vfunc435(void *pSchedule)
{
	CAI_BaseNPC435View *p = (CAI_BaseNPC435View *)this;
	p->m_pNavigator->vfunc4((int)pSchedule);
	p->m_n5cf0 = 0;
	sub_1028ae60();
}
// END FUNCTION

// FUNCTION: 0x1027a740 size=0x23
// TARGET: sub_1027a740
int __fastcall sub_1027a740(void *pSelf)
{
    if (((void *(__fastcall *)(void *))(*(void ***)pSelf)[0x29c / 4])(pSelf) == 0) {
        return 0;
    }
    char *pObj = (char *)((void *(__fastcall *)(void *))(*(void ***)pSelf)[0x29c / 4])(pSelf);
    return *(int *)(pObj + 0x94);
}
// END FUNCTION

// FUNCTION: 0x1027a780 size=0x23
// TARGET: sub_1027a780
int __fastcall sub_1027a780(void *pSelf)
{
    if (((void *(__fastcall *)(void *))(*(void ***)pSelf)[0x29c / 4])(pSelf) == 0) {
        return 0;
    }
    char *pObj = (char *)((void *(__fastcall *)(void *))(*(void ***)pSelf)[0x29c / 4])(pSelf);
    return *(int *)(pObj + 0x9c);
}
// END FUNCTION

// FUNCTION: 0x1027a7c0 size=0x6
extern void *g_105c9814;

void *sub_1027a7c0(void)
{
    return &g_105c9814;
}
// END FUNCTION

// FUNCTION: 0x1027a7e0 size=0x5
int * sub_1027a820(void);
int * g_1090ff50 = ((int * (*)(int))sub_1027a820)(0);
// END FUNCTION

// FUNCTION: 0x1027a820 size=0xe7d
#include "UnreachableEnt_t.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "datamap.h"
extern ISaveRestoreOps *g_1055dc70;
extern int g_105c982c;
extern int g_10608a8c;
extern int g_1060e508;
extern int g_1060ee50;
extern int g_1060fac8;
extern int g_106111b8;
extern int g_106145f8;
struct UnreachableEnt_t;
template <class T> class CHandle;
void sub_10004da9();
void sub_100073d8();
void sub_1000b1d6();
void sub_1000f4e8();
void sub_10013f48();
#include "CUtlVectorDataOps.h"
inline ISaveRestoreOps *Ops_109f07a4()
{
	static CUtlVectorDataOps<CUtlVector<UnreachableEnt_t,CUtlMemory<UnreachableEnt_t> >,9> ops;
	return (ISaveRestoreOps *)&ops;
}
extern int g_105c9814[2];
int *sub_1027a820()
{
    static typedescription_t dataDesc[] = {
        { 0 },
        { 5, "m_bShouldMove", {0x1a40, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iCollisionMask", {0x1a44, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastEnemy", {0x1a94, 0}, 1, 2, 0, 0, 0 },
        { 2, "m_altEquipment", {0x1a98, 0}, 1, 6, "alternateequipment", 0, 0 },
        { 9, "m_DelayedConditionList", {0x1a9c, 0}, 1, 2, 0, 0, 0, (datamap_t *)&g_10608a8c },
        { 9, "m_DelayedSoundConditionList", {0x1ae0, 0}, 1, 2, 0, 0, 0, (datamap_t *)&g_10608a8c },
        { 0xf, "m_flCacheInterruptTime", {0x1b24, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bForceStateChange", {0x1b28, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flNextDoorUseTime", {0x5b60, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_bfNPCStateFlags", {0x5b64, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastSeenHateEnt", {0x5b68, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastSeenFearEnt", {0x5b6c, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastSeenDislikeEnt", {0x5b70, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastSeenNemesisEnt", {0x5b74, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastHeardEnt", {0x5b78, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastDamageEnt", {0x5b7c, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bCondTookDamage", {0x5b80, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_bfNPCFrenziedFlags", {0x5b84, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flWeaponBlockedByFriendTimer", {0x5b88, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flExtendedBlockedByFriendTimer", {0x5b8c, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_RelativeEyeTarget", {0x5b94, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_eEnemyOccludedCheck", {0x5b98, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_vecLastDamageAttackPos", {0x5b9c, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hShootTargetOverride", {0x5ba8, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flSpecialDistanceAccum", {0x5bac, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iSquadDisconnected", {0x5bb0, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iIsOblivious", {0x5bb4, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bDidMaintainSchedule", {0x5bb8, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flBurstShootPauseMin", {0x5bbc, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flBurstShootPauseMax", {0x5bc0, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bInChoreoScene", {0x5bc4, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bEnemyWentOccluded", {0x5bc5, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_vecEnemyWentOccluded", {0x5bc8, 0}, 1, 2, 0, 0, 0 },
        { 9, "m_ScheduleState", {0x5c40, 0}, 1, 2, 0, 0, 0, (datamap_t *)&g_105c982c },
        { 4, "m_IdealSchedule", {0x5c3c, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_failSchedule", {0x5c54, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bConditionsGathered", {0x5ca4, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_NPCState", {0x5cc0, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_IdealNPCState", {0x5cc4, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flLastStateChangeTime", {0x5cc8, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_nIdealSequence", {0x5ccc, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_IdealTranslatedActivity", {0x5cd0, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_IdealWeaponActivity", {0x5cd4, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bKeepSound", {0x5cd8, 0}, 1, 2, 0, 0, 0 },
        { 9, "m_pSenses", {0x5cdc, 0}, 1, 0x42, 0, 0, 0, (datamap_t *)&g_106145f8 },
        { 0xc, "m_hEnemy", {0x5ce0, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hTargetEnt", {0x5ce4, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flSoundWaitTime", {0x5ce8, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_afCapability", {0x5cec, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flMoveWaitFinished", {0x5cf0, 0}, 1, 2, 0, 0, 0 },
        { 9, "m_MoveAndShootOverlay", {0x5cf4, 0}, 1, 2, 0, 0, 0, (datamap_t *)&g_1060ee50 },
        { 0xc, "m_hOpeningDoor", {0x5d24, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hBlockedDoor", {0x5d28, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hCondHitByDoor", {0x5d2c, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bOpeningDoorWait", {0x5d30, 0}, 1, 2, 0, 0, 0 },
        { 9, "m_pNavigator", {0x5d34, 0}, 1, 0x42, 0, 0, 0, (datamap_t *)&g_1060fac8 },
        { 9, "m_pPathfinder", {0x5d3c, 0}, 1, 0x42, 0, 0, 0, (datamap_t *)&g_106111b8 },
        { 9, "m_pMotor", {0x5d44, 0}, 1, 0x42, 0, 0, 0, (datamap_t *)&g_1060e508 },
        { 0xa, "m_UnreachableEnts", {0x5d48, 0}, 1, 2, 0, Ops_109f07a4(), 0 },
        { 3, "m_vDefaultEyeOffset", {0x5d60, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_scriptState", {0x5d70, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hCine", {0x5d74, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bCineScriptHidden", {0x5d78, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_afMemory", {0x5d8c, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flSumDamage", {0x5d94, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flLastDamageTime", {0x5d98, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flLastAttackTime", {0x5d9c, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flNextWeaponSearchTime", {0x5da0, 0}, 1, 2, 0, 0, 0 },
        { 2, "m_SquadName", {0x5da8, 0}, 1, 6, "squadname", 0, 0 },
        { 4, "m_iMySquadSlot", {0x5dac, 0}, 1, 2, 0, 0, 0 },
        { 2, "m_strHintGroup", {0x5db0, 0}, 1, 6, "hintgroup", 0, 0 },
        { 0xf, "m_flWaitFinished", {0x5db4, 0}, 1, 2, 0, 0, 0 },
        { 0xe, "m_vecLastPosition", {0x5db8, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_qaLastFacing", {0x5dc4, 0}, 1, 2, 0, 0, 0 },
        { 0xe, "m_vSavePosition", {0x5dd0, 0}, 1, 2, 0, 0, 0 },
        { 0xb, "m_pHintNode", {0x5ddc, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_cAmmoLoaded", {0x5de0, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flDistTooFar", {0x5de4, 0}, 1, 2, 0, 0, 0 },
        { 0xb, "m_pGoalEnt", {0x5de8, 0}, 1, 2, 0, 0, 0 },
        { 2, "m_spawnEquipment", {0x5dec, 0}, 1, 6, "additionalequipment", 0, 0 },
        { 5, "m_bWantsLargeHull", {0x5f2c, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_OnDamaged", {0x5e0c, 0}, 1, 0x16, "OnDamaged", g_1055dc70 },
        { 0xa, "m_OnDeath", {0x5e24, 0}, 1, 0x16, "OnDeath", g_1055dc70 },
        { 0xa, "m_OnHalfHealth", {0x5e3c, 0}, 1, 0x16, "OnHalfHealth", g_1055dc70 },
        { 0xa, "m_OnFoundEnemy", {0x5e54, 0}, 1, 0x16, "OnFoundEnemy", g_1055dc70 },
        { 0xa, "m_OnLostEnemyLOS", {0x5e6c, 0}, 1, 0x16, "OnLostEnemyLOS", g_1055dc70 },
        { 0xa, "m_OnLostEnemy", {0x5e84, 0}, 1, 0x16, "OnLostEnemy", g_1055dc70 },
        { 0xa, "m_OnFoundPlayer", {0x5e9c, 0}, 1, 0x16, "OnFoundPlayer", g_1055dc70 },
        { 0xa, "m_OnLostPlayerLOS", {0x5eb4, 0}, 1, 0x16, "OnLostPlayerLOS", g_1055dc70 },
        { 0xa, "m_OnLostPlayer", {0x5ecc, 0}, 1, 0x16, "OnLostPlayer", g_1055dc70 },
        { 0xa, "m_OnHearWorld", {0x5ee4, 0}, 1, 0x16, "OnHearWorld", g_1055dc70 },
        { 0xa, "m_OnHearPlayer", {0x5efc, 0}, 1, 0x16, "OnHearPlayer", g_1055dc70 },
        { 0xa, "m_OnHearCombat", {0x5f14, 0}, 1, 0x16, "OnHearCombat", g_1055dc70 },
        { 0xa, "m_OnGrappleBegin", {0x5bd8, 0}, 1, 0x16, "OnGrappleBegin", g_1055dc70 },
        { 0xa, "m_OnGrappleEnd", {0x5bf0, 0}, 1, 0x16, "OnGrappleEnd", g_1055dc70 },
        { 0xa, "m_OnFedUponBegin", {0x5c08, 0}, 1, 0x16, "OnFedUponBegin", g_1055dc70 },
        { 0xa, "m_OnFedUponEnd", {0x5c20, 0}, 1, 0x16, "OnFedUponEnd", g_1055dc70 },
        { 2, "InputSetRelationship", {0, 0}, 1, 8, "SetRelationship", 0, (void *)sub_100073d8 },
        { 0, "CAI_BaseNPCNPCUse", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10004da9 },
        { 0, "CAI_BaseNPCNPCThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000f4e8 },
        { 0, "CAI_BaseNPCCorpseFallThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000b1d6 },
        { 0, "CAI_BaseNPCNPCInitThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10013f48 },
    };
    g_105c9814[1] = 102;
    g_105c9814[0] = (int)&dataDesc[1];
    return g_105c9814;
}
// END FUNCTION

// FUNCTION: 0x1027ba40 size=0x5
int sub_1027ba80(void);
int g_109204ec = ((int (*)(int))sub_1027ba80)(0);
// END FUNCTION

// FUNCTION: 0x1027ba80 size=0x1a
namespace lifted {
extern int g_105c982c;
extern int g_105c9830;
extern char g_105caa2c;
}
int sub_1027ba80()
{
    lifted::g_105c9830 = 5;
    lifted::g_105c982c = (int)&lifted::g_105caa2c;
    return (int)&lifted::g_105c982c;
}
// END FUNCTION

// FUNCTION: 0x1027bab0 size=0x5
int sub_1027baf0(void);
int g_109201ec = ((int (*)(int))sub_1027baf0)(0);
// END FUNCTION

// FUNCTION: 0x1027baf0 size=0x1a
namespace lifted {
extern int g_105cab08;
extern int g_105cab0c;
extern char g_105cab4c;
}
int sub_1027baf0()
{
    lifted::g_105cab0c = 3;
    lifted::g_105cab08 = (int)&lifted::g_105cab4c;
    return (int)&lifted::g_105cab08;
}
// END FUNCTION

// FUNCTION: 0x1027bb20 size=0x1b
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"

// TARGET: CAI_BaseNPC::vfunc106
void CAI_BaseNPC::vfunc106(const char *pszName)
{
	((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc106(pszName);
	vfunc424();
}
// END FUNCTION

// FUNCTION: 0x1027bb50 size=0x76
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"
#include <string.h>
#pragma intrinsic(strcmp)

extern char g_106b8540[];
void sub_10006c3a(const char *pszName);
void sub_10014614(CAI_BaseNPC *pNPC);
__declspec(dllimport) void DevMsg(const char *, ...);

class CAI_BaseNPCSlots
{
public:
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	EVS10(30) EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35) EVS10(36) EVS10(37) EVS10(38) EVS10(39)
	EVS10(40) EVS10(41) EVS10(42) EVS10(43) EVS10(44) EVS(450) EVS(451)
	virtual char slot452();
};

struct CAI_BaseNPCFields {
	char m_pad[0x5dec];
	const char *m_iszSpawnEquipment;
};

struct CAI_BaseNPCUnit : CAI_BaseNPC {
	const char *sub_1000b5cd();
	void sub_10011324();
};

inline const char *STRING(const char *const &isz)
{
	if (isz)
		return isz;
	return g_106b8540;
}

void CAI_BaseNPC::vfunc104()
{
	CAI_BaseNPCFields *f = (CAI_BaseNPCFields *)this;
	CAI_BaseNPCUnit *u = (CAI_BaseNPCUnit *)this;
	if (f->m_iszSpawnEquipment != 0 && strcmp(STRING(f->m_iszSpawnEquipment), "0"))
		sub_10006c3a(STRING(f->m_iszSpawnEquipment));
	if (!((CAI_BaseNPCSlots *)this)->slot452()) {
		DevMsg("ERROR: Rejecting spawn of %s as error in NPC's schedules.\n", u->sub_1000b5cd());
		sub_10014614(this);
		return;
	}
	u->sub_10011324();
}
// END FUNCTION

// FUNCTION: 0x1027bbf0 size=0x5
int sub_1027bc30(void);
int g_109201a4 = ((int (*)(int))sub_1027bc30)(0);
// END FUNCTION

// FUNCTION: 0x1027bc30 size=0x1a
namespace lifted {
extern int g_105cabd0;
extern int g_105cabd4;
extern char g_105cac14;
}
int sub_1027bc30()
{
    lifted::g_105cabd4 = 4;
    lifted::g_105cabd0 = (int)&lifted::g_105cac14;
    return (int)&lifted::g_105cabd0;
}
// END FUNCTION

// FUNCTION: 0x1027bc60 size=0x182
#include "CSave.h"
#include "CAI_BaseNPC.h"
#include "ehandle.h"
#include "Tier1.h"
struct SaveRecView { short m_nVersion; int m_nFlags; char m_szName[0x80]; unsigned m_crc; };
struct SaveSchedView { char pad20[0x20]; char *m_pData; int m_nCount; char pad28[0x40 - 0x28]; const char *m_pszName; };
class CSaveView { public: virtual void v0(); virtual void v1(); virtual void v2(SaveRecView *pRec, void *pOps); };
extern char g_105cabd0;
void sub_10006ee7(void *p, int n);
void sub_10015311(void *p, int n);
void __fastcall sub_102e0b60(void *p);
void __fastcall sub_102e0b80(void *p);
void __fastcall sub_102e8aa0(void *p);
void __fastcall sub_102e8ac0(void *p);
char __fastcall sub_102ee6a0(void *p);
void sub_1023f040(unsigned *p);
void sub_1023f060(unsigned *p);
void sub_100143b7(unsigned *p, const char *data, int bits);
int CAI_BaseNPC::vfunc126(CSave *pSave)
{
	char *pThis = (char *)this;
	sub_10006ee7(pThis + 0x5b8c, 4);
	sub_10006ee7(pThis + 0x5db4, 3);
	if (Owned5d44())
		sub_102e0b60(Owned5d44());
	void *pOverlay = pThis + 0x5cf4;
	sub_102e8aa0(pOverlay);
	SaveRecView rec;
	rec.m_nVersion = 1;
	rec.m_nFlags = 0;
	if (vfunc167())
		rec.m_nFlags |= 1;
	if (((EHANDLE *)(pThis + 0x5ce4))->Get())
		rec.m_nFlags |= 2;
	if (sub_102ee6a0(*(void **)(pThis + 0x5d34)))
		rec.m_nFlags |= 4;
	if (*(SaveSchedView **)(pThis + 0x5c38)) {
		g_109f3890(rec.m_szName, (*(SaveSchedView **)(pThis + 0x5c38))->m_pszName, 0x80);
		sub_1023f040(&rec.m_crc);
		sub_100143b7(&rec.m_crc, (*(SaveSchedView **)(pThis + 0x5c38))->m_pData, (*(SaveSchedView **)(pThis + 0x5c38))->m_nCount << 3);
		sub_1023f060(&rec.m_crc);
	} else {
		rec.m_szName[0] = 0;
		rec.m_crc = 0;
	}
	((CSaveView *)pSave)->v2(&rec, &g_105cabd0);
	int ret = sub_10348980(pSave);
	sub_10015311(pThis + 0x5b8c, 4);
	sub_10015311(pThis + 0x5db4, 3);
	if (Owned5d44())
		sub_102e0b80(Owned5d44());
	sub_102e8ac0(pOverlay);
	return ret;
}
// END FUNCTION

// FUNCTION: 0x1027be60 size=0xb5
#include "CAI_BaseNPC.h"
#include "CUnknown102ee270.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
extern void (__cdecl *g_109f3650)(int, const char *, ...);

struct CHandleView
{
	unsigned int m_Index;

	CGlobalEntityList_Ent *Get() const
	{
		if (m_Index != 0xffffffff) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
			if (pSlot->m_Serial == (int)(m_Index >> 13))
				return pSlot->m_pEntity;
		}
		return 0;
	}
};

struct CConditionBits
{
	int m_Bits[6];

	void ClearAll()
	{
		if (this)
			for (int i = 0; i < 6; i++)
				m_Bits[i] = 0;
	}
};

#define NV1(n) virtual void nv##n();
#define NV10(p) NV1(p##0) NV1(p##1) NV1(p##2) NV1(p##3) NV1(p##4) NV1(p##5) NV1(p##6) NV1(p##7) NV1(p##8) NV1(p##9)
#define NV100(p) NV10(p##0) NV10(p##1) NV10(p##2) NV10(p##3) NV10(p##4) NV10(p##5) NV10(p##6) NV10(p##7) NV10(p##8) NV10(p##9)

struct CAI_BaseNPCLevelView	// the NPC as the level transition cleanup sees it
{
	NV100(a) NV10(b0) NV10(b1) NV10(b2) NV10(b3) NV10(b4) NV10(b5) NV1(c0) NV1(c1) NV1(c2) NV1(c3) NV1(c4) NV1(c5) NV1(c6)
	virtual int slot167();

	char m_pad0004[0xfec - 4];
	int m_nFec;
	char m_pad0ff0[0x1b3c - 0xff0];
	const char *m_pszFile1b3c;
	int m_nLine1b40;
	char m_pad1b44[0x5c5c - 0x1b44];
	CConditionBits m_Conditions;
	char m_pad5c74[0x5cc0 - 0x5c74];
	int m_nState5cc0;
	int m_nState5cc4;
	char m_pad5cc8[0x5d34 - 0x5cc8];
	CUnknown102ee270 *m_pNavigator;
	char m_pad5d38[0x5d74 - 0x5d38];
	CHandleView m_hScripted;

	void sub_10280d30();
	void sub_1026e340(int newState);
	const char *sub_100ab4f0();
};

void CAI_BaseNPC::sub_1027be60()
{
	CAI_BaseNPCLevelView *p = (CAI_BaseNPCLevelView *)this;
	p->m_pNavigator->sub_102ee270();
	p->sub_10280d30();
	p->m_nFec = 0;
	if (!p->slot167())
		p->m_Conditions.ClearAll();
	if (p->m_nState5cc0 == 4 && (!p->m_hScripted.Get())) {
		p->sub_1026e340(1);
		p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp";
		p->m_nLine1b40 = 0x28d0;
		p->m_nState5cc4 = 1;
		g_109f3650(1, "Scripted Sequence stripped on level transition for %s\n", p->sub_100ab4f0());
	}
}
// END FUNCTION

// FUNCTION: 0x1027bf50 size=0x19b
#include "CAI_BaseNPCSavedSched.h"
#include "CUnknown102ee270.h"
extern CUnknown10936b68 g_10936b68;
void __cdecl sub_1023f040(unsigned int *p);
void __cdecl sub_1023f060(unsigned int *p);
void __cdecl sub_1023f0c0(unsigned int *pCrc, const void *pData, unsigned int len);

struct CNav102ee1e0 : CUnknown102ee270
{
	char sub_102ee1e0(int a);
};

// TARGET: CAI_BaseNPC::vfunc130
void CAI_BaseNPC::vfunc130(int a)
{
	CAI_BaseNPCSavedSched *p = (CAI_BaseNPCSavedSched *)this;
	bool bBad;
	if ((p->m_nState5cc0 != 4 || p->m_hScriptedSeq5d74.Get())
		&& p->m_Saved.m_szSchedule[0]
		&& p->m_Saved.m_nVersion == 1
		&& (!(p->m_Saved.m_nFlags & 1) || p->vfunc167())
		&& (!(p->m_Saved.m_nFlags & 2) || p->m_hTarget5ce4.Get())) {
		bBad = false;
	} else {
		bBad = true;
	}
	if (p->m_nTaskFail5c50 >= 0x2a)
		p->m_nTaskFail5c50 = 1;
	if (!bBad) {
		p->m_pSchedule = g_10936b68.sub_1030f350(p->m_Saved.m_szSchedule);
		if (p->m_pSchedule) {
			unsigned int crc;
			sub_1023f040(&crc);
			sub_1023f0c0(&crc, p->m_pSchedule->m_pTasks, p->m_pSchedule->m_nTasks << 3);
			sub_1023f060(&crc);
			if (crc != p->m_Saved.m_nCRC)
				p->m_pSchedule = 0;
		}
	}
	if (p->m_pSchedule && !bBad) {
		p->m_b5c58 = (p->m_Saved.m_nFlags >> 2) & 1;
	} else {
		p->m_b5c58 = 0;
		sub_1027be60();
	}
	sub_10323b60(a);
	p->m_n5b90 = 0;
	if (p->m_b5c58) {
		if (!((CNav102ee1e0 *)p->m_pNavigator5d34)->sub_102ee1e0(0))
			sub_1027be60();
	} else {
		((CUnknown102ee270 *)p->m_pNavigator5d34)->sub_102ee270();
	}
}
// END FUNCTION

// FUNCTION: 0x1027c160 size=0x65
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CRestore.h"

extern char g_105cabd0[];	// the datamap of the block at +0x19b4
void sub_10015311(void *pArray, int count);

struct CNpcLookObject
{
	void sub_102e0b80();	// stub 0x100010e6
};

struct CNpcRestoreMember
{
	void sub_102e8ac0();	// stub 0x100081bb
};

int CAI_BaseNPC::vfunc127(CRestore *pRestore)
{
	pRestore->vfunc2((CBaseEntity *)((char *)this + 0x19b4), (int)g_105cabd0);
	int result = sub_10348890(pRestore);
	sub_10015311((char *)this + 0x5b8c, 4);
	sub_10015311((char *)this + 0x5db4, 3);
	CNpcLookObject *pLook = *(CNpcLookObject **)((char *)this + 0x5d44);
	if (pLook)
		pLook->sub_102e0b80();
	((CNpcRestoreMember *)((char *)this + 0x5cf4))->sub_102e8ac0();
	return result;
}
// END FUNCTION

// FUNCTION: 0x1027c1f0 size=0x9a
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "Vector.h"
struct CDevFlagView
{
	virtual void vfunc0();
	virtual char vfunc1();
};

extern CDevFlagView *g_10924a6c;
extern float g_1070d9d0[3];
extern Vector g_1070d1b0;

struct CAI_BaseNPCSchedView : CAI_BaseNPC
{
	bool IsCurSchedule(int schedId)
	{
		return *(int *)((char *)this + 0x5c38) && *(int *)((char *)this + 0x5c38) == sub_102cc1f0(schedId);
	}
};

// TARGET: CAI_BaseNPC::sub_1027c1f0
void CAI_BaseNPC::sub_1027c1f0()
{
	if (!((CAI_BaseNPCSchedView *)this)->IsCurSchedule(0x3a)) {
		g_10924a6c->vfunc1();
		sub_10269a20(0x75);
		((CBaseEntity *)this)->vfunc93(0, 0);
		*(int *)((char *)this + 0x3ec) = 0;
		((CBaseEntity *)this)->sub_100b2f50(g_1070d9d0);
		((CBaseEntity *)this)->sub_100b2770(g_1070d1b0);
	} else {
		g_10924a6c->vfunc1();
		sub_10269a20(0x76);
		*(int *)((char *)this + 0xfec) = 0;
		((CBaseEntity *)this)->vfunc93(4, 0);
		*(float *)((char *)this + 0x3ec) = 1.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x1027c2c0 size=0x3
char sub_1027c2c0()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1027c2e0 size=0x3
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc452
#include "vampire.h"

bool CAI_BaseNPC::vfunc452()
{
    return true;
}
// END FUNCTION

// FUNCTION: 0x1027c300 size=0x368
#include "vampire_all.h"
#include "CUnknown101c2770.h"
#include "CUnknown102cc670.h"
#include "COutputEvent.h"
#include "CBaseCombatCharacter.h"
#include "CUtlVector4.h"
void __fastcall sub_1027f610(void *);
void *__fastcall sub_102e06f0(void *);
extern int g_105c9798;
extern void *(*g_109f3634)(int);
extern void *vt_1049a0cc[];
extern void *vt_1049a0b8[];
extern void *vt_104995c4[];
extern void *vt_10499594[];

struct HInv { int h; HInv() { h = -1; } };
struct SinkV { void **vt; SinkV() { vt = vt_1049a0cc; } };

CAI_BaseNPC *CAI_BaseNPC::sub_1027c300()
{
	char *p = (char *)this;
	((CBaseCombatCharacter *)this)->sub_10326de0();
	((SinkV *)(p + 0x19b0))->SinkV::SinkV();
	*(short *)(p + 0x19b4) = 1;
	*(int *)(p + 0x19b8) = 0;
	((CUnknown101c2770 *)(p + 0x1a48))->sub_101c2690();
	*(int *)(p + 0x1a94) = -1;
	((CUnknown102cc670 *)(p + 0x1a9c))->sub_102cc670();
	((CUnknown102cc670 *)(p + 0x1ae0))->sub_102cc670();
	((HInv *)(p + 0x5b68))->HInv::HInv();
	((HInv *)(p + 0x5b6c))->HInv::HInv();
	((HInv *)(p + 0x5b70))->HInv::HInv();
	((HInv *)(p + 0x5b74))->HInv::HInv();
	((HInv *)(p + 0x5b78))->HInv::HInv();
	((HInv *)(p + 0x5b7c))->HInv::HInv();
	*(int *)(p + 0x5ba8) = -1;
	((COutputEvent *)(p + 0x5bd8))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5bf0))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5c08))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5c20))->sub_100cd2a0();
	sub_1027f610(p + 0x5c5c);
	sub_1027f610(p + 0x5c74);
	sub_1027f610(p + 0x5c8c);
	sub_1027f610(p + 0x5ca8);
	*(int *)(p + 0x5ce0) = -1;
	*(int *)(p + 0x5ce4) = -1;
	*(int *)(p + 0x5cf8) = 0;
	*(int *)(p + 0x5d00) = -1;
	*(char *)(p + 0x5d04) = 0;
	*(int *)(p + 0x5d08) = 0;
	*(int *)(p + 0x5d0c) = 0;
	*(int *)(p + 0x5d10) = 0;
	*(int *)(p + 0x5d14) = 0;
	*(int *)(p + 0x5d18) = 0;
	*(int *)(p + 0x5d1c) = 0;
	*(int *)(p + 0x5d20) = 0;
	*(void ***)(p + 0x5cf4) = vt_1049a0b8;
	((HInv *)(p + 0x5d24))->HInv::HInv();
	((HInv *)(p + 0x5d28))->HInv::HInv();
	((HInv *)(p + 0x5d2c))->HInv::HInv();
	*(int *)(p + 0x5d48) = 0;
	*(int *)(p + 0x5d4c) = 4;
	*(int *)(p + 0x5d50) = 0;
	void *mem = g_109f3634(0x50);
	*(void **)(p + 0x5d48) = mem;
	*(int *)(p + 0x5d54) = 0;
	*(void **)(p + 0x5d58) = mem;
	*(float *)(p + 0x5d5c) = -1.0f;
	((HInv *)(p + 0x5d74))->HInv::HInv();
	*(int *)(p + 0x5d90) = -1;
	((COutputEvent *)(p + 0x5e0c))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5e24))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5e3c))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5e54))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5e6c))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5e84))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5e9c))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5eb4))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5ecc))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5ee4))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5efc))->sub_100cd2a0();
	((COutputEvent *)(p + 0x5f14))->sub_100cd2a0();
	*(int *)(p + 0x4c) |= 0x20;
	*(void ***)p = vt_104995c4;
	*(void ***)(p + 0x19b0) = vt_10499594;
	*(int *)(p + 0x5b50) = 0;
	*(char *)(p + 0x5b54) = 0;
	*(char *)(p + 0x5b55) = 0;
	memset(p + 0x1b4e, 0, 0x4000);
	*(int *)(p + 0x5d44) = 0;
	*(int *)(p + 0x5d40) = 0;
	*(int *)(p + 0x5d34) = 0;
	*(int *)(p + 0x5cdc) = 0;
	*(int *)(p + 0x5d3c) = 0;
	*(int *)(p + 0x5d38) = 0;
	*(int *)(p + 0x5c38) = 0;
	*(int *)(p + 0x5c3c) = 0;
	*(int *)(p + 0x5cec) = 0;
	*(int *)(p + 0x1568) = 0;
	*(int *)(p + 0x156c) = 0;
	*(int *)(p + 0x5dac) = -1;
	*(int *)(p + 0x5d94) = 0;
	*(int *)(p + 0x5d98) = 0;
	*(int *)(p + 0x5d9c) = 0;
	*(int *)(p + 0x5ce8) = 0;
	*(int *)(p + 0x5d6c) = 0;
	*(int *)(p + 0xe5c) = 0;
	*(int *)(p + 0xe60) = 0;
	*(int *)(p + 0x5dec) = 0;
	void *obj = operator new(0x14);
	*(void **)(p + 0x5d88) = obj ? sub_102e06f0(obj) : 0;
	*(float *)(p + 0xe3c) = 0.95f;
	this->sub_10279cc0(0);
	*(int *)(p + 0x5da4) = 0;
	*(int *)(p + 0x5cf0) = 0;
	*(char *)(p + 0x5f2d) = 1;
	*(char *)(p + 0x5f2c) = 1;
	*(char *)(p + 0x5df0) = 0;
	*(float *)(p + 0x5bbc) = 0.3f;
	*(float *)(p + 0x5bc0) = 0.5f;
	*(int *)(p + 0x5f34) = 0;
	*(int *)(p + 0x5f30) = 0;
	*(int *)(p + 0x5f38) = 0;
	*(int *)(p + 0x5f3c) = 0;
	g_105c9798 = 0;
	((CUtlVector4 *)&g_1090fe10)->sub_10265310((int)this);
	((CBaseEntity *)this)->sub_100aaa40(7);
	*(CAI_BaseNPC **)(p + 0x94) = this;
	*(int *)(p + 0x158c) = 2;
	*(char *)(p + 0x5bd4) = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1027c750 size=0x7
float sub_1027c750()
{
	return -1.0f;
}
// END FUNCTION

// FUNCTION: 0x1027c770 size=0x5
#include "CAI_DefMovementSink.h"
// TARGET: CAI_DefMovementSink::vfunc1
bool CAI_DefMovementSink::vfunc1(int a, int b, int c)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1027c790 size=0x20
extern int g_1049a0f8;

struct Helper
{
	void* sub_1027c790(unsigned char flags);
};

// TARGET: Helper::sub_1027c790
void* Helper::sub_1027c790(unsigned char flags)
{
	*(void**)this = &g_1049a0f8;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1027c7c0 size=0x20
extern int g_1049a0f8;

struct Helper
{
	void* sub_1027c7c0(unsigned char flags);
};

// TARGET: Helper::sub_1027c7c0
void* Helper::sub_1027c7c0(unsigned char flags)
{
	*(void**)this = &g_1049a0f8;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1027c7f0 size=0x1e
#include "CAI_BaseNPC.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_BaseNPC::vfunc5
CAI_BaseNPC *CAI_BaseNPC::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1027c820 size=0x19b
#include "vampire_all.h"
void __fastcall sub_10273e40(void *);
void __fastcall sub_100cd2d0(void *);
void __fastcall sub_1027faa0(void *);
void __fastcall sub_102cc6a0(void *);
void __fastcall sub_103274d0(void *);
extern int vt_104995c4;
extern int vt_10499594;
extern int vt_1049a0f8;

struct CDeleteHelper
{
	virtual void vfunc0(int a);
};

void CAI_BaseNPC::sub_1027c820()
{
	void *p;
	void *v;

	*(void **)this = &vt_104995c4;
	*(void **)((char *)this + 0x19b0) = &vt_10499594;
	g_1090fe10.sub_102653f0(this);
	sub_10273e40(this);

	p = *(void **)((char *)this + 0x5d3c);
	if (p)
		((CDeleteHelper *)p)->vfunc0(1);
	p = *(void **)((char *)this + 0x5d34);
	if (p)
		((CDeleteHelper *)p)->vfunc0(1);
	p = *(void **)((char *)this + 0x5d44);
	if (p)
		((CDeleteHelper *)p)->vfunc0(1);
	p = *(void **)((char *)this + 0x5d38);
	if (p)
		((CDeleteHelper *)p)->vfunc0(1);
	p = *(void **)((char *)this + 0x5d40);
	if (p)
		((CDeleteHelper *)p)->vfunc0(1);
	p = *(void **)((char *)this + 0x5cdc);
	if (p)
		((CDeleteHelper *)p)->vfunc0(1);

	v = (char *)this + 0x5f14; sub_100cd2d0(v);
	v = (char *)this + 0x5efc; sub_100cd2d0(v);
	v = (char *)this + 0x5ee4; sub_100cd2d0(v);
	v = (char *)this + 0x5ecc; sub_100cd2d0(v);
	v = (char *)this + 0x5eb4; sub_100cd2d0(v);
	v = (char *)this + 0x5e9c; sub_100cd2d0(v);
	v = (char *)this + 0x5e84; sub_100cd2d0(v);
	v = (char *)this + 0x5e6c; sub_100cd2d0(v);
	v = (char *)this + 0x5e54; sub_100cd2d0(v);
	v = (char *)this + 0x5e3c; sub_100cd2d0(v);
	v = (char *)this + 0x5e24; sub_100cd2d0(v);
	v = (char *)this + 0x5e0c; sub_100cd2d0(v);

	v = (char *)this + 0x5d48;
	*(int *)((char *)v + 0xc) = 0;
	sub_1027faa0(v);
	*(void **)((char *)v + 0x10) = *(void **)v;
	if (*(int *)((char *)v + 8) != -1) {
		if (*(void **)v) {
			Plat_Free(*(void **)v);
			*(void **)v = 0;
		}
		*(int *)((char *)v + 4) = 0;
	}

	v = (char *)this + 0x5c20;
	*(void **)((char *)this + 0x5cf4) = &vt_1049a0f8;
	sub_100cd2d0(v);
	v = (char *)this + 0x5c08; sub_100cd2d0(v);
	v = (char *)this + 0x5bf0; sub_100cd2d0(v);
	v = (char *)this + 0x5bd8; sub_100cd2d0(v);

	sub_102cc6a0((char *)this + 0x1ae0);
	sub_102cc6a0((char *)this + 0x1a9c);

	sub_103274d0(this);
}
// END FUNCTION

// FUNCTION: 0x1027ca30 size=0x50
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CUnknown10315ec0.h"
#include "CUnknown103158f0.h"
struct CHint5ddc { void sub_102d1420(int a); };
struct CBaseCombatCharacterView { void sub_1000b0c8(); };
void CAI_BaseNPC::vfunc180()
{
	if (*(CUnknown10315ec0 **)((char *)this + 0x5da4)) {
		if ((*(CUnknown10315ec0 **)((char *)this + 0x5da4))->sub_10315ec0((CUnknown10315ec0Ent *)this))
			(*(CUnknown103158f0 **)((char *)this + 0x5da4))->sub_103158f0((CBaseEntity *)this);
	}
	if (*(CHint5ddc **)((char *)this + 0x5ddc)) {
		(*(CHint5ddc **)((char *)this + 0x5ddc))->sub_102d1420(0);
		*(int *)((char *)this + 0x5ddc) = 0;
	}
	vfunc511();
	((CBaseCombatCharacterView *)this)->sub_1000b0c8();
}
// END FUNCTION

// FUNCTION: 0x1027caa0 size=0x2c
#include "CAI_BaseNPC.h"
#include "vampire.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b248 *g_1070b248;
extern char *g_1070b22c;

struct CUnkEngine1027caa0
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
	virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14();
	virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24();
	virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34();
	virtual int s35(int edict, int b);
};

// TARGET: CAI_BaseNPC::vfunc511
void CAI_BaseNPC::vfunc511()
{
	int edict = *(int *)((char *)this + 0x2e0);
	g_1070b248->vfunc5(((CUnkEngine1027caa0 *)g_1070b22c)->s35(edict, 1));
}
// END FUNCTION

// FUNCTION: 0x1027cae0 size=0xe7
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "CAI_LocalNavigator.h"
extern void *g_1093407c;

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CNpcComponentSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23) SV10(24) SV10(25) SV10(26) SV10(27) SV10(28) SV10(29)
	SV10(30) SV10(31) SV10(32) SV10(33) SV10(34) SV10(35) SV10(36) SV10(37) SV10(38) SV10(39)
	SV10(40) SV10(41)
	SV(420) SV(421) SV(422) SV(423) SV(424)
	virtual void *s425();
	virtual void *s426();
	virtual void *s427();
	virtual void *s428();
	virtual void *s429();
	virtual void *s430();
};

struct CNavigatorSlotsX {
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual void s3(void *pNet);
};

bool CAI_BaseNPC::vfunc424()
{
	CNpcComponentSlotsX *pSlots = (CNpcComponentSlotsX *)this;
	char *pSelf = (char *)this;
	*(void **)(pSelf + 0x5cdc) = pSlots->s425();
	if (!*(void **)(pSelf + 0x5cdc))
		return false;
	*(void **)(pSelf + 0x5d44) = pSlots->s427();
	if (!*(void **)(pSelf + 0x5d44))
		return false;
	*(void **)(pSelf + 0x5d38) = pSlots->s428();
	if (!*(void **)(pSelf + 0x5d38))
		return false;
	*(void **)(pSelf + 0x5d40) = pSlots->s426();
	if (!*(void **)(pSelf + 0x5d40))
		return false;
	*(void **)(pSelf + 0x5d34) = pSlots->s429();
	if (!*(void **)(pSelf + 0x5d34))
		return false;
	*(void **)(pSelf + 0x5d3c) = pSlots->s430();
	if (!*(void **)(pSelf + 0x5d3c))
		return false;
	*(void **)(pSelf + 0x5cf8) = this;
	char *pLocalNav = *(char **)(pSelf + 0x5d38);
	((CAI_Motor *)*(void **)(pSelf + 0x5d44))->sub_102e0ba0(pLocalNav ? pLocalNav + 0x10 : 0);
	char *pNav = *(char **)(pSelf + 0x5d34);
	((CAI_LocalNavigator *)*(void **)(pSelf + 0x5d38))->sub_102ddc00(pNav ? pNav + 0x10 : 0);
	((CNavigatorSlotsX *)*(void **)(pSelf + 0x5d34))->s3(g_1093407c);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1027cc10 size=0xf8
#include "CAI_BaseNPC.h"
#include "CAI_Senses.h"

CAI_Senses *CAI_BaseNPC::vfunc425()
{
	CAI_Senses *pSenses = new CAI_Senses;
	pSenses->m_pOuter = this;
	return pSenses;
}
// END FUNCTION

// FUNCTION: 0x1027cd50 size=0x34
#include "CLogicAuto.h"
// TARGET: CUnknown1027cd50::sub_1027cd50
extern double g_10499408;

struct CUnknown1027cd50
{
	float m_flTime;
	float m_flInterval;

	CUnknown1027cd50 *sub_1027cd50(float flInterval, char bNever);
};

CUnknown1027cd50 *CUnknown1027cd50::sub_1027cd50(float flInterval, char bNever)
{
	m_flInterval = flInterval;
	m_flTime = -1.0f;
	if (bNever) {
		m_flTime = (float)g_10499408;
		return this;
	}
	m_flTime = flInterval + gpGlobals->curtime;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1027cda0 size=0x2c
struct CFloatPair1027cda0 {
    float m_f0;
    float m_f4;
    void sub_1027cda0(float f, bool b);
};
extern double g_10499408;

// TARGET: sub_1027cda0
void CFloatPair1027cda0::sub_1027cda0(float f, bool b)
{
    m_f4 = f;
    if (b) {
        m_f0 = g_10499408;
        return;
    }
    m_f0 = f + gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1027cde0 size=0xa9
#include "CAI_Senses.h"

CAI_Senses *sub_make_senses()
{
    return new CAI_Senses;
}

// TARGET: ??_GCAI_Senses@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1027cec0 size=0x1f
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
CAI_Motor *CAI_BaseNPC::vfunc427()
{
	CAI_Motor *p = (CAI_Motor *)operator new(0x6c);
	if (p)
		return p->sub_102e0900((int)this);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1027cef0 size=0x27
#include "CAI_MoveProbe.h"

// TARGET: sub_1027cef0
CAI_MoveProbe *__fastcall sub_1027cef0(void *pOuter)
{
    return new CAI_MoveProbe(pOuter);
}
// END FUNCTION

// FUNCTION: 0x1027cf30 size=0x20
extern int g_1049a0f8;

struct Helper
{
	void* sub_1027cf30(unsigned char flags);
};

// TARGET: Helper::sub_1027cf30
void* Helper::sub_1027cf30(unsigned char flags)
{
	*(void**)this = &g_1049a0f8;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1027cf60 size=0x1f
#include "CAI_BaseNPC.h"
#include "CAI_LocalNavigator.h"

CAI_LocalNavigator *CAI_BaseNPC::vfunc428()
{
	CAI_LocalNavigator *p = (CAI_LocalNavigator *)operator new(0x20);
	if (p)
		return p->sub_102ddab0((int)this);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1027cf90 size=0x1f
#include "CAI_BaseNPC.h"
#include "CAI_Navigator.h"

CAI_Navigator *CAI_BaseNPC::vfunc429()
{
	return new CAI_Navigator((int)this);
}
// END FUNCTION

// FUNCTION: 0x1027cfc0 size=0x2f
#include "CAI_BaseNPC.h"
#include "CAI_Pathfinder.h"

// TARGET: CAI_BaseNPC::vfunc430
CAI_Pathfinder *CAI_BaseNPC::vfunc430()
{
	return new CAI_Pathfinder(this);
}
// END FUNCTION

// FUNCTION: 0x1027d000 size=0x20
extern int g_1049a0f8;

struct Helper
{
	void* sub_1027d000(unsigned char flags);
};

// TARGET: Helper::sub_1027d000
void* Helper::sub_1027d000(unsigned char flags)
{
	*(void**)this = &g_1049a0f8;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1027d030 size=0x43
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "inputdata_t.h"
extern char g_106b8540[];
struct CAI_BaseNPCUnit : CAI_BaseNPC {
	void sub_1027d030(inputdata_t *pInput);
	void sub_10273790(const char *pszCommand, CBaseEntity *pActivator);
};
void CAI_BaseNPCUnit::sub_1027d030(inputdata_t *pInput)
{
	variant_t *v = &pInput->value;
	const char *psz;
	if (v->fieldType == 2) {
		psz = v->iszValue;
		if (!psz)
			psz = g_106b8540;
	} else {
		psz = v->sub_10008805();
	}
	sub_10273790(psz, (CBaseEntity *)pInput->pActivator);
}
// END FUNCTION

// FUNCTION: 0x1027d0a0 size=0x99
#include "CAI_BaseNPC.h"
#include "CCineNPC.h"
struct CAI_BaseNPC_Cine { char pad[0x5d74]; CHandle<CCineNPC> m_hCine; };

bool CAI_BaseNPC::sub_1027d0a0()
{
    char *p = (char *)this;
    if (*(int *)(p + 0x200) == 1) {
        *(const char **)(p + 0x1b3c) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp";
        *(int *)(p + 0x1b40) = 0x2a70;
        *(int *)(p + 0x5cc4) = 7;
        return false;
    }
    CAI_BaseNPC_Cine *c = (CAI_BaseNPC_Cine *)this;
    if (c->m_hCine)
        c->m_hCine->sub_101a8c30();
    return true;
}
// END FUNCTION

// FUNCTION: 0x1027d170 size=0x5d4
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "CAI_BaseNPC_vfunc144.h"
#include "CCineNPC.h"
#include "CUnknown103158f0.h"
#include "IPhysicsObject.h"

#include "ConVar.h"

// The game's first decliner of the header inline EHandleEntityList::LookupEntity in this unit is
// CAI_BaseNPC::Event_Killed (0x10265ad0, judged 0 below as a same-unit copy): its LookupEntity COMDAT is compiled
// before CineCleanup, so VC6 knows the call's side effects (not its registers) there, as in the game.
extern ConVar g_106bbaa0;
extern ConVar g_10924a68;
#define FILE_144 "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp"

void __cdecl sub_101cf390(CAI_BaseNPC *pEnt, const Vector &mins, const Vector &maxs);
float __cdecl sub_102d61e0(int hull);
int __cdecl sub_101cd250(CAI_BaseNPC *pEnt, int mask, CBaseEntity *pIgnore);


namespace block_1027d170
{
struct CScriptView144
{
	char m_pad0000[0x204];
	unsigned int m_spawnflags;
	char m_pad0208[0x5f91 - 0x208];
	char m_bPlayedSequence;
};

struct CDamageInfo144 : CAI_NPCDamageRecord
{
	CBaseEntity *GetAttacker() const { return m_pInflictor; }
};

struct CEventKilled144 : CAI_BaseNPCUnit144
{
	IPhysicsObject *VPhysicsGetObject() const { return m_pPhysObj36c; }
	void SetIdealStateDbg(int state, const char *pszFile, int nLine) { m_pszFile1b3c = pszFile; m_nLine1b40 = nLine; m_nIdealState5cc4 = state; }
	void SetTouchNull() { *(int *)((char *)this + 0x1ec) = 0; }
	void SetCondition(int iCondition) { if (g_10924a68.GetBool()) {} sub_10269a20(iCondition); }
	void sub_10265ad0(const CDamageInfo144 &info);
};

void CEventKilled144::sub_10265ad0(const CDamageInfo144 &info)
{
	if (m_pSchedule5c38 && (int)m_pSchedule5c38 == sub_102cc1f0(0x3a))
		return;

	if (m_nState5cc0 == 4 && m_hScript5d74.Get())
	{
		CScriptView144 *pScript = (CScriptView144 *)m_hScript5d74.Get();
		if (pScript->m_bPlayedSequence && (((CScriptView144 *)m_hScript5d74.Get())->m_spawnflags & 0x2080) != 0x80)
		{
			m_LastDamage = info;
			return;
		}
		((CCineNPC *)m_hScript5d74.Get())->sub_101a8c30();
		IPhysicsObject *pPhys;
		if (g_106bbaa0.GetBool() && (pPhys = VPhysicsGetObject()))
		{
			Vector vecTmp;
			Vector vecPos;
			vecPos = *vfunc263(&vecTmp);
			pPhys->vfunc39((float *)&vecPos, 0);
		}
	}

	vfunc511();
	if (m_n153c == -1 || !m_h1538.Get())
		vfunc488();

	sub_10265a90(info.GetAttacker());
	if (((CBaseEntity *)this)->sub_100b3700() & 0x2000)
	{
		SetTouchNull();
		sub_10265a40();
	}
	sub_1032b9b0((int)&info);
	SetIdealStateDbg(7, FILE_144, 0x217);
	SetCondition(0x4c);
	m_hAttacker5b7c = info.GetAttacker();
	m_b5b80 = 1;
	sub_1028ae60();
	if (m_pSquad5da4)
		((CUnknown103158f0 *)m_pSquad5da4)->sub_103158f0((CBaseEntity *)this);
	if ((char)vfunc552())
		sub_102695d0();
	else
		sub_101babc0(0x20, vfunc217(), 0x180, 30.0f, 0);
	SetIdealStateDbg(7, FILE_144, 0x241);
	sub_1026e340(7);
}
}

struct CCineCleanupScript
{
	char m_pad0000[0x204];
	unsigned int m_spawnflags;	// 0x204
	char m_pad0208[0x5f48 - 0x208];
	int m_iszPlay;	// 0x5f48
	char m_pad5f4c[0x5f78 - 0x5f4c];
	int m_saved_movetype;	// 0x5f78
	int m_saved_movecollide;	// 0x5f7c
	int m_n5f80;
	int m_saved_solidflags;	// 0x5f84
	int m_saved_effects;	// 0x5f88
	int m_n5f8c;
	char m_b5f90;
	char m_b5f91;

	void sub_10279cc0(CBaseEntity *pEnt);
	bool HasSpawnFlags(unsigned int bit) { return (m_spawnflags >> bit) & 1; }
};

struct CCineHandle : CBaseHandle
{
	CCineCleanupScript *Get() const
	{
		return (CCineCleanupScript *)CBaseHandle::Get();
	}
	CCineCleanupScript *operator->() const { return Get(); }
};

struct CCineCleanupOwner98
{
	char m_pad0000[0x14b8];
	int m_n14b8;
};

struct ScopeTraceInl
{
	__forceinline ScopeTraceInl(const char *func, const char *name)
	{
		g_109f3620[*g_109f3680].name = func;
		g_109f3620[*g_109f3680].file = name;
		g_109f3620[*g_109f3680].line = g_106b8540;
		(*g_109f3680)++;
	}
	__forceinline ~ScopeTraceInl() { (*g_109f3680)--; }
};

struct CAI_CineCleanupNPC : public CAI_BaseNPC
{
	char m_pad0004[0x98 - 4];
	CCineCleanupOwner98 *m_p98;	// 0x98
	char m_pad009c[0x19c - 0x9c];
	int m_fEffects;	// 0x19c
	char m_pad01a0[0x1ec - 0x1a0];
	int m_pfnTouch;	// 0x1ec
	int m_pfnUse;	// 0x1f0
	char m_pad01f4[0x200 - 0x1f4];
	int m_lifeState;	// 0x200
	unsigned int m_spawnflags;	// 0x204
	char m_pad0208[0x210 - 0x208];
	int m_iHealth;	// 0x210
	char m_pad0214[0x26c - 0x214];
	const char *m_iName;	// 0x26c
	CCollisionProperty m_Collision;	// 0x270
	char m_pad02d4[0x6f4 - 0x2d4];
	int m_n6f4;	// 0x6f4
	char m_pad06f8[0xfec - 0x6f8];
	int m_nfec;	// 0xfec
	char m_pad0ff0[0x1568 - 0xff0];
	int m_nHull;	// 0x1568
	char m_pad156c[0x1b3c - 0x156c];
	const char *m_pszFile;	// 0x1b3c
	int m_nLine;	// 0x1b40
	char m_pad1b44[0x5cc4 - 0x1b44];
	int m_IdealState;	// 0x5cc4
	char m_pad5cc8[0x5d70 - 0x5cc8];
	int m_n5d70;	// 0x5d70
	CCineHandle m_hCine;	// 0x5d74
	char m_pad5d78[0x5de8 - 0x5d78];
	int m_n5de8;	// 0x5de8

	void sub_1026d160();
	void sub_103281b0(const char *pszBone, int a, int b);
	void sub_100926e0(int bone, Vector &origin, Vector &angles);
	bool sub_100903e0();
	void sub_100b3580(int a);

	void SetSolid(int solid)
	{
		ScopeTraceInl scope("CBaseEntity::SetSolid", m_iName ? m_iName : g_106b8540);
		m_Collision.sub_100dc480(solid);
	}
	void SetSolidFlags(int flags)
	{
		ScopeTrace scope("CBaseEntity::SetSolidFlags", m_iName ? m_iName : g_106b8540, g_106b8540);
		m_Collision.sub_100dc580(flags);
	}
	void AddSolidFlags(int flags)
	{
		ScopeTrace scope("CBaseEntity::AddSolidFlags", m_iName ? m_iName : g_106b8540, g_106b8540);
		m_Collision.AddSolidFlags(flags);
	}
	bool sub_1027d170();
	CCollisionProperty *CollisionProp() { return &m_Collision; }
	const Vector &WorldAlignMins() { return *(Vector *)CollisionProp()->vfunc1(); }
	const Vector &WorldAlignMaxs() { return *(Vector *)CollisionProp()->vfunc2(); }
	const Vector &GetLocalOrigin() { return *(Vector *)vfunc220(); }
	void SetLocalOrigin(const Vector &v) { ((CEntityVSlots *)this)->slot62((float *)&v.x); }
	void SetMoveType(int a, int b) { ((CEntityVSlots *)this)->slot93(a, b); }
	void SetCondition(int iCondition) { if (g_10924a68.GetBool()) {} sub_10269a20(iCondition); }
};

// TARGET: CAI_CineCleanupNPC::sub_1027d170
bool CAI_CineCleanupNPC::sub_1027d170()
{
	CAI_CineCleanupNPC *p = this;

	sub_1027f270(0);
	p->m_n5d70 = 0;
	CCineCleanupScript *pOldCine = p->m_hCine.Get();

	if (p->m_hCine.Get())
	{
		if (!p->m_hCine->m_b5f90)
			p->sub_1026d160();
		p->m_hCine->sub_10279cc0(0);
		((CEntityVSlots *)this)->slot93(p->m_hCine->m_saved_movetype, p->m_hCine->m_saved_movecollide);
		p->SetSolidFlags(p->m_hCine->m_saved_solidflags);
		p->m_fEffects = p->m_hCine->m_saved_effects;
		if (p->m_p98)
			p->m_p98->m_n14b8 = p->m_hCine->m_n5f8c;
	}
	else
	{
		p->SetMoveType(4, 0);
		p->SetSolid(2);
		p->SetSolidFlags(0x10);
	}
	p->m_hCine.m_Index = 0xffffffff;
	sub_10279cc0(0);
	p->m_n5de8 = 0;

	if (p->m_lifeState == 1)
	{
		p->m_iHealth = 0;
		p->AddSolidFlags(4);
		sub_1026e340(7);
		p->m_lifeState = 2;
		sub_101cf390(this, p->WorldAlignMins(), Vector(p->WorldAlignMaxs().x, p->WorldAlignMaxs().y, p->WorldAlignMins().z + 2));
		if (pOldCine && pOldCine->HasSpawnFlags(3))
		{
			p->m_pfnUse = 0;
			sub_100ac4e0(0, 0, 0);
			p->m_pfnTouch = 0;
		}
		else
			sub_102695d0();
		if (!p->sub_100903e0())
		{
			p->m_n6f4 = 0;
			p->m_fEffects |= 0x10;
		}
		p->SetMoveType(0, 0);
		return false;
	}

	if (pOldCine && pOldCine->m_iszPlay && pOldCine->m_b5f91)
	{
		if (pOldCine->HasSpawnFlags(13))
		{
			p->sub_103281b0("Bip01", 1, 1);
			Vector origin = p->GetLocalOrigin();
			origin.z -= sub_102d61e0(p->m_nHull) * 0.5f;
			p->SetLocalOrigin(origin);
		}
		else if (!pOldCine->HasSpawnFlags(7))
		{
			Vector new_origin;
			Vector new_angle;
			p->sub_100926e0(0, new_origin, new_angle);

			Vector oldOrigin = p->GetLocalOrigin();
			if ((oldOrigin - new_origin).Length2D() < 8.0)
				new_origin = oldOrigin;

			Vector origin = p->GetLocalOrigin();
			origin.x = new_origin.x;
			origin.y = new_origin.y;
			origin.z += 1;

			if (sub_100b3700() & 0x400)
			{
				origin.z = new_origin.z;
				p->SetLocalOrigin(origin);
			}
			else
			{
				p->SetLocalOrigin(origin);
				p->sub_100b3580(1);
				int drop = sub_101cd250(this, 0x202400b, 0);
				if (drop < 0)
				{
					p->SetLocalOrigin(oldOrigin);
				}
				else if (drop == 0)
				{
					Vector origin = p->GetLocalOrigin();
					origin.z = new_origin.z;
					p->SetLocalOrigin(origin);
					sub_100b3640(1);
				}
			}

			origin = p->GetLocalOrigin();
			((CEntityVSlots *)this)->slot181(&origin, 0, 0);
			p->SetLocalOrigin(origin);
			p->m_fEffects |= 0x10;
		}
		p->m_nfec = 0;
	}

	p->m_pszFile = "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp";
	if (p->m_iHealth > 0)
	{
		p->m_nLine = 0x2b1d;
		p->m_IdealState = 1;
	}
	else
	{
		p->m_nLine = 0x2b22;
		p->m_IdealState = 7;
		p->SetCondition(0x4c);
	}
	p->m_spawnflags &= ~0x80;
	return true;
}
// END FUNCTION

// FUNCTION: 0x1027d8d0 size=0x90
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include <math.h>

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CSlot220Ent {
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
	S10(c0) S10(c1)
	virtual float *vfunc220(int a);
};

struct CNpcMotorView {
	void sub_102e0b40();
	void sub_102e2020(float *pPos);
};

struct CNpcMotorHolder {
	char m_pad[0x5d44];
	CNpcMotorView *m_pMotor;
};

struct CEntVelView {
	char m_pad[0x3bc];
	float m_vx;
	float m_vy;
};

struct CDevFlagObj {
	virtual void v0();
	virtual bool vfunc1();
};
extern CDevFlagObj *g_10924a6c;

static inline bool EntDirtyBit(CBaseEntity *pEnt)
{
	unsigned int f = pEnt->m_flags268;
	return (f >> 12) & 1;
}

static inline float AbsF(float f) { return (float)fabs(f); }

void CAI_BaseNPC::sub_1027d8d0(CBaseEntity *pEnt)
{
	if (EntDirtyBit(pEnt))
		pEnt->sub_100b1d10();
	if (EntDirtyBit(pEnt))
		pEnt->sub_100b1d10();
	CEntVelView *v = (CEntVelView *)pEnt;
	if (AbsF(v->m_vx) + AbsF(v->m_vy) > 50.0f) {
		g_10924a6c->vfunc1();
		sub_10269a20(0x74);
		((CNpcMotorHolder *)this)->m_pMotor->sub_102e0b40();
		CNpcMotorView *pMotor = ((CNpcMotorHolder *)this)->m_pMotor;
		pMotor->sub_102e2020(((CSlot220Ent *)pEnt)->vfunc220(0));
	}
}
// END FUNCTION

// FUNCTION: 0x1027d990 size=0xa
struct CUnknown1027d990Sub { int p[6]; int a; };
struct CUnknown1027d990 { char p[0x5d34]; CUnknown1027d990Sub *m; int sub_1027d990(); };
// TARGET: CUnknown1027d990::sub_1027d990
int CUnknown1027d990::sub_1027d990() { return m->a; }
// END FUNCTION

// FUNCTION: 0x1027d9b0 size=0xb
void __fastcall sub_102eeba0(void *);
void __fastcall sub_1027d9b0(char *self)
{
	sub_102eeba0(*(void **)(self + 0x5d34));
}
// END FUNCTION

// FUNCTION: 0x1027d9d0 size=0x5
#include "CAI_BaseNPC.h"

// TARGET: CAI_BaseNPC::vfunc514
bool CAI_BaseNPC::vfunc514(int a, int b, int c, int d)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1027d9f0 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_1027d9f0(char *self, int, int a, int b)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CAI_BaseNPC::OverrideMoveFacing";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1027da90 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_1027da90(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CAI_BaseNPC::OverrideMove";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1027db30 size=0x3a
#include "CAI_BaseNPCTroika.h"
#include "CAI_Navigator.h"
extern int g_106c994c;
inline CAI_NavProvider *NavListGet(CAI_NavProviderList *pList, int i)
{
	if (i >= 0 && i < pList->m_nCount)
		return pList->m_ppItems[i];
	g_106c994c++;
	return 0;
}
// TARGET: CAI_BaseNPCTroika::sub_1027db30
bool CAI_BaseNPCTroika::sub_1027db30(int nNode)
{
	CAI_NavProvider *pNode = NavListGet(m_p5d34->m_pProviders, nNode);
	if (pNode)
		return vfunc527(pNode);
	return false;
}
// END FUNCTION

// FUNCTION: 0x1027db80 size=0x4b
#include "CAI_BaseNPC.h"

float sub_101d2c70(const Vector *pDir);

// TARGET: CAI_BaseNPC::sub_1027db80
float CAI_BaseNPC::sub_1027db80(const Vector *pDir)
{
	if (pDir->x == 0.0f && pDir->y == 0.0f && pDir->z == 0.0f)
		return vfunc221()[1];
	return sub_101d2c70(pDir);
}
// END FUNCTION

// FUNCTION: 0x1027dbf0 size=0x7
namespace lifted {
extern float g_104492dc;
}
float sub_1027dbf0()
{
    return lifted::g_104492dc;
}
// END FUNCTION

// FUNCTION: 0x1027dc10 size=0x45
struct CPEnt { char pad[0x60]; struct CEnt60 *p60; };
struct CEnt60 { char pad[0xa4]; void *pA4; };
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
#define V100(n) V10(n##0) V10(n##1) V10(n##2) V10(n##3) V10(n##4) V10(n##5) V10(n##6) V10(n##7) V10(n##8) V10(n##9)
struct CObj {
	V100(a) V100(b) V100(c) V100(d) V100(e)
	V10(f0) V10(f1) V10(f2)
	virtual void g0();
	virtual bool Slot531(CPEnt *pEnt, void *p, int a, int b);
};
struct CSub { char pad[4]; bool sub_1027dc10(CPEnt *pEnt, int a, int b); };
// TARGET: CSub::sub_1027dc10
bool CSub::sub_1027dc10(CPEnt *pEnt, int a, int b)
{
	if (pEnt->p60 && pEnt->p60->pA4) {
		CObj *p = (CObj *)((char *)this - 0x19b0);
		if (p->Slot531(pEnt, pEnt->p60->pA4, a, b))
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1027dc80 size=0x66
struct FObj { char pad[0x28]; float m_f; };
struct IObj { char pad[0x4f8]; int m_state; };
extern double g_104493d0;

// TARGET: sub_1027dc80
bool __stdcall sub_1027dc80(FObj* p, IObj* q, float f, int* out)
{
	if (p->m_f < f)
		return false;
	if (q->m_state != 1 && q->m_state != 3)
		return false;
	if (f < g_104493d0) {
		*out = -1;
		return true;
	}
	p->m_f = f;
	*out = 0;
	return true;
}
// END FUNCTION

// FUNCTION: 0x1027dd10 size=0xb3
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct CHandleView
{
	unsigned int m_Index;

	CGlobalEntityList_Ent *Get() const
	{
		if (m_Index != 0xffffffff) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
			if (pSlot->m_Serial == (int)(m_Index >> 13))
				return pSlot->m_pEntity;
		}
		return 0;
	}
};

struct CNavigatorView
{
	bool sub_102ee2e0();
	void sub_102ee2c0();
};

struct CNpcAIView
{
	char m_pad0000[0x644c];
	int m_nState;
};

#define NV1(n) virtual void nv##n();
#define NV10(p) NV1(p##0) NV1(p##1) NV1(p##2) NV1(p##3) NV1(p##4) NV1(p##5) NV1(p##6) NV1(p##7) NV1(p##8) NV1(p##9)
#define NV100(p) NV10(p##0) NV10(p##1) NV10(p##2) NV10(p##3) NV10(p##4) NV10(p##5) NV10(p##6) NV10(p##7) NV10(p##8) NV10(p##9)

struct CAI_BaseNPCStopView
{
	NV100(a) NV10(b0) NV10(b1) NV10(b2) NV10(b3) NV10(b4)
	NV1(b50) NV1(b51) NV1(b52) NV1(b53) NV1(b54) NV1(b55) NV1(b56) NV1(b57)
	virtual bool slot158();
	NV100(c) NV100(d) NV100(e) NV10(f0) NV10(f1) NV10(f2) NV10(f3) NV10(f4) NV10(f5)
	NV1(g0) NV1(g1) NV1(g2) NV1(g3) NV1(g4) NV1(g5) NV1(g6) NV1(g7) NV1(g8)
	virtual void slot528();
	NV1(h0) NV1(h1) NV1(h2)
	virtual void slot532(int value);

	char m_pad0004[0x98 - 4];
	CNpcAIView *m_pAI;
	char m_pad009c[0x1a40 - 0x9c];
	char m_bFlag1a40;
	char m_pad1a41[0x5d24 - 0x1a41];
	CHandleView m_hTarget;
	char m_pad5d28[0x5d34 - 0x5d28];
	CNavigatorView *m_pNavigator;
};

void CAI_BaseNPC::sub_1027dd10(CBaseEntity *pEnt)
{
	CAI_BaseNPCStopView *p = (CAI_BaseNPCStopView *)this;
	if (!p->slot158())
		return;
	if (pEnt) {
		if ((void *)pEnt == p->m_hTarget.Get())
			p->slot532(1);
		if (p->m_pNavigator->sub_102ee2e0())
			p->m_pNavigator->sub_102ee2c0();
		p->m_bFlag1a40 = 1;
		p->slot528();
		CNpcAIView *pAI = p->m_pAI;
		if (pAI && (pAI->m_nState == 1 || pAI->m_nState == 2))
			pAI->m_nState = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1027de00 size=0x150
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CAI_Navigator.h"

struct CTroikaDoorView
{
	char sub_100f0ec0(int flags);	// stub 0x1000da94
	void sub_100f0e30(float flTime);	// stub 0x10009363
};

struct CTroikaSquadView
{
	CBaseEntity *sub_103166b0();	// stub 0x10009962
	void sub_10316660(CBaseEntity *pDoor);	// stub 0x1000751d
};

struct CTroikaNavView
{
	char sub_102ee6a0();	// stub 0x10012963
};



void CAI_BaseNPCTroika::sub_1027de00(CBaseEntity *pDoor)
{
	if (((CEntityVSlots *)this)->slot158() && pDoor)
	{
		if (pDoor == (CBaseEntity *)EHandle_Get(m_h5d24))
			((CEntityVSlots *)this)->slot532(2);
		if (!((CTroikaDoorView *)pDoor)->sub_100f0ec0(0x10))
		{
			if (((CTroikaDoorView *)pDoor)->sub_100f0ec0(0x40))
			{
				if (((CTroikaNavView *)m_p5d34)->sub_102ee6a0())
					((CAI_Navigator *)m_p5d34)->sub_102f1fa0(5.0f, (CAI_NavSource *)pDoor);
				((CTroikaDoorView *)pDoor)->sub_100f0e30(gpGlobals->curtime + 5.0f);
			}
			else
			{
				if (((CTroikaNavView *)m_p5d34)->sub_102ee6a0())
					((CAI_Navigator *)m_p5d34)->sub_102f1fa0(20.0f, (CAI_NavSource *)pDoor);
				((CTroikaDoorView *)pDoor)->sub_100f0e30(gpGlobals->curtime + 20.0f);
			}
		}
		if (*(int *)((char *)this + 0x5bb0) <= 0 && *(CTroikaSquadView **)((char *)this + 0x5da4))
		{
			CTroikaSquadView *pSquad = *(CTroikaSquadView **)((char *)this + 0x5da4);
			if (pSquad->sub_103166b0() != pDoor)
				pSquad->sub_10316660(pDoor);
		}
		*(unsigned int *)((char *)this + 0x5d28) = *pDoor->vfunc1();
		CAI_BaseNPCTroika *pOther = *(CAI_BaseNPCTroika **)((char *)this + 0x98);
		if (pOther && (pOther->m_n644c == 1 || pOther->m_n644c == 2))
		{
			pOther->m_n644c = 3;
			pOther->m_f6450 = gpGlobals->curtime + 1.0f;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1027dfb0 size=0xf8
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

struct CTroikaGlobalView
{
	virtual void v0();
	virtual void vfunc1();
};

struct CTroikaConVarView
{
	virtual void v0();
	virtual bool vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};

struct CTroikaDoorView
{
	void sub_100f0e30(float flTime);
};

struct CTroikaSquadView
{
	void sub_10316660(CBaseEntity *pDoor);
};

extern CTroikaGlobalView *g_10924a6c;
extern CTroikaConVarView *g_1092038c;

inline bool DoorDebugAllowed()
{
	return g_1092038c->vfunc1() || !g_1092038c->m_n2c;
}

void CAI_BaseNPCTroika::sub_1027dfb0(CBaseEntity *pDoor)
{
	if (((CEntityVSlots *)this)->slot158() && pDoor)
	{
		g_10924a6c->vfunc1();
		sub_100041b0(0x34);
		*(unsigned int *)((char *)this + 0x5d2c) = *pDoor->vfunc1();
		if (DoorDebugAllowed())
		{
			if (pDoor == (CBaseEntity *)EHandle_Get(m_h5d24))
			{
				sub_1027de00(pDoor);
				return;
			}
			((CTroikaDoorView *)pDoor)->sub_100f0e30(gpGlobals->curtime + 5.0f);
			if (*(int *)((char *)this + 0x5bb0) <= 0 && *(CTroikaSquadView **)((char *)this + 0x5da4))
				(*(CTroikaSquadView **)((char *)this + 0x5da4))->sub_10316660(pDoor);
			*(unsigned int *)((char *)this + 0x5d28) = *pDoor->vfunc1();
			return;
		}
		((CEntityVSlots *)this)->slot532(4);
	}
}
// END FUNCTION

// FUNCTION: 0x1027e0f0 size=0x16
#include "CAI_BaseNPC.h"

char CAI_BaseNPC::vfunc532(int unused)
{
	*(int *)((char *)this + 0x5d24) = -1;
	*(char *)((char *)this + 0x5d30) = 0;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1027e120 size=0xd
#include "CAI_BaseNPC.h"
struct NpcFlags204 { char pad[0x204]; unsigned int m; };
unsigned int CAI_BaseNPC::vfunc423()
{
	return (((NpcFlags204 *)this)->m >> 11) & 1;
}
// END FUNCTION

// FUNCTION: 0x1027e140 size=0xc2
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"
#include "CUnknown1070b254.h"
#include "CGameTrace.h"

extern CUnknown1070b254 *g_1070b254;
void sub_101cd110(CAI_BaseNPC *pEnt, const Vector *pStart, const Vector *pEnd, int mask, CGameTrace *pTrace);

struct CAI_BaseNPCUnit : CAI_BaseNPC
{
	int sub_1027e140(const Vector *pMove, int mask);
	void sub_100a53d0(int a);	// CBaseEntity::PhysicsTouchTriggers (stub 0x10005bcd), called directly
};

int CAI_BaseNPCUnit::sub_1027e140(const Vector *pMove, int mask)
{
	Vector start = *(Vector *)vfunc217();
	Vector end;
	VectorAdd(start, *pMove, end);
	CGameTrace tr;
	sub_101cd110(this, &start, &end, mask, &tr);
	if (tr.m_fraction == 1.0f) {
		if (!(sub_100b3700() & 0x800) || g_1070b254->vfunc0(tr.m_endpos, 0)) {
			((CEntityVSlots *)this)->slot216((Vector *)tr.m_endpos);
			sub_100a53d0(0);
			return 1;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1027e250 size=0x287
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "ConVar.h"

extern ConVar g_109eee08;
void sub_101cd110(CAI_BaseNPC *pEnt, const Vector *pStart, const Vector *pEnd, int mask, CGameTrace *pTrace);
char sub_101cd390(CAI_BaseNPC *pEnt, int a, float flStep);

struct CAI_BaseNPCUnit : CAI_BaseNPC
{
	int sub_1027e250(const Vector *pMove, int mask);
	int sub_1027e140(const Vector *pMove, int mask);
	void sub_100a53d0(int a);
};

// TARGET: CAI_BaseNPCUnit::sub_1027e250
int CAI_BaseNPCUnit::sub_1027e250(const Vector *pMove, int mask)
{
	if (sub_100b3700() & 0xc00)
		return sub_1027e140(pMove, mask);
	if ((sub_100b3700() & 1) == 0)
		return 0;

	CGameTrace trace;
	Vector oldorg, neworg, end;
	Vector move((*pMove)[0], (*pMove)[1], 0.0f);
	VectorCopy(*(const Vector *)vfunc217(), oldorg);
	VectorAdd(oldorg, move, neworg);

	float flStepSize = g_109eee08.GetFloat();
	neworg[2] += flStepSize;
	VectorCopy(neworg, end);
	end[2] -= flStepSize * 2;

	sub_101cd110(this, &neworg, &end, mask, &trace);
	if (trace.m_allsolid)
		return false;

	if (trace.m_startsolid) {
		neworg[2] -= flStepSize;
		sub_101cd110(this, &neworg, &end, mask, &trace);
		if (trace.m_allsolid || trace.m_startsolid)
			return false;
	}

	if (trace.m_fraction == 1) {
		if (sub_100b3700() & 0x20000) {
			((CEntityVSlots *)this)->slot216(&(oldorg + move));
			sub_100a53d0(0);
			sub_100b3640(1);
			return true;
		}
		return false;
	}

	((CEntityVSlots *)this)->slot216((Vector *)trace.m_endpos);

	if (sub_101cd390(this, 0, flStepSize) == 0) {
		if (sub_100b3700() & 0x20000) {
			sub_100a53d0(0);
			return true;
		}
		((CEntityVSlots *)this)->slot216(&oldorg);
		return false;
	}

	if (sub_100b3700() & 0x20000)
		sub_100b3640(0x20000);

	vfunc208((int)trace.m_pEnt);
	sub_100a53d0(0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1027e590 size=0x93
#include "CBaseEntity.h"
extern "C" int _vsnprintf(char *, unsigned int, const char *, char *);
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)
extern void (*g_109f3630)(const char *fmt, ...);

void sub_1027e590(CBaseEntity *ent, const char *fmt, ...)
{
	char buf[256];
	char *args = (char *)&fmt + sizeof(fmt);
	_vsnprintf(buf, 255, fmt, args);
	buf[255] = 0;
	unsigned int len = strlen(buf);
	const char *outFmt;
	if (len != 0 && buf[len - 1] == '\n') {
		buf[len - 1] = 0;
		outFmt = "%s (%s: %s)\n";
	} else {
		outFmt = "%s (%s: %s)";
	}
	const char *name = ent->m_name26c;
	if (!name)
		name = "<unnamed>";
	g_109f3630(outFmt, buf, ent->sub_1000ea11(), name);
}
// END FUNCTION

// FUNCTION: 0x1027e660 size=0xac
extern char g_10547418[], g_105cd430[], g_105b4738[], g_105b4730[], g_105cd428[], g_105cd41c[], g_105cd414[], g_1053fd98[], g_105cd408[], g_105cd3f8[], g_105cd3ec[], g_105cd3e0[], g_105cd3d8[], g_105cd3cc[], g_105cd3b4[], g_105477a4[];
const char *sub_1027e660(int n)
{
    switch (n) {
    case 0: return g_10547418;
    case 1: return g_105cd430;
    case 2: return g_105b4738;
    case 3: return g_105b4730;
    case 4: return g_105cd428;
    case 5: return g_105cd41c;
    case 6: return g_105cd414;
    case 7: return g_1053fd98;
    case 8: return g_105cd408;
    case 9: return g_105cd3f8;
    case 10: return g_105cd3ec;
    case 11: return g_105cd3e0;
    case 12: return g_105cd3d8;
    case 13: return g_105cd3cc;
    case 14: return g_105cd3b4;
    default: return g_105477a4;
    }
}
// END FUNCTION

// FUNCTION: 0x1027e740 size=0x10
#include "CAI_BaseNPC.h"
namespace lifted {
int sub_1027e660(int);
}

const char *CAI_BaseNPC::vfunc406(int state)
{
	return (const char *)(lifted::sub_1027e660(state));
}
// END FUNCTION

// FUNCTION: 0x1027e760 size=0x4c
// TARGET: sub_1027e760
const char *sub_1027e760(int n)
{
	switch (n) {
	case -1: return "None";
	case 0: return "Ground";
	case 1: return "Jump";
	case 2: return "Fly";
	case 3: return "Climb";
	}
	return "**UNKNOWN**";
}
// END FUNCTION

// FUNCTION: 0x1027e7d0 size=0x10
#include "CAI_BaseNPC.h"
namespace lifted {
int sub_10004c96(int);
}
const char * CAI_BaseNPC::vfunc407(int a0)
{
    return (const char *)(lifted::sub_10004c96(a0));
}
// END FUNCTION

// FUNCTION: 0x1027e7f0 size=0x4c0
extern int g_105cd454[];
extern int g_1058b0a0;

int *sub_1027e7f0(int n)
{
	switch (n) {
	case 0: return &g_105cd454[118];
	case 1: return &g_105cd454[117];
	case 2: return &g_105cd454[116];
	case 3: return &g_105cd454[115];
	case 4: return &g_105cd454[114];
	case 5: return &g_105cd454[113];
	case 6: return &g_105cd454[112];
	case 7: return &g_105cd454[111];
	case 8: return &g_105cd454[110];
	case 9: return &g_105cd454[109];
	case 10: return &g_105cd454[108];
	case 11: return &g_105cd454[107];
	case 12: return &g_105cd454[106];
	case 13: return &g_105cd454[105];
	case 14: return &g_105cd454[104];
	case 15: return &g_105cd454[103];
	case 16: return &g_105cd454[102];
	case 17: return &g_105cd454[101];
	case 18: return &g_105cd454[100];
	case 19: return &g_105cd454[99];
	case 20: return &g_105cd454[98];
	case 21: return &g_105cd454[97];
	case 22: return &g_105cd454[96];
	case 23: return &g_105cd454[95];
	case 24: return &g_105cd454[94];
	case 25: return &g_105cd454[93];
	case 26: return &g_105cd454[92];
	case 27: return &g_105cd454[91];
	case 28: return &g_105cd454[90];
	case 29: return &g_105cd454[89];
	case 30: return &g_105cd454[88];
	case 31: return &g_105cd454[87];
	case 32: return &g_105cd454[86];
	case 33: return &g_105cd454[85];
	case 34: return &g_105cd454[84];
	case 35: return &g_105cd454[83];
	case 36: return &g_105cd454[82];
	case 37: return &g_105cd454[81];
	case 38: return &g_105cd454[80];
	case 39: return &g_105cd454[79];
	case 40: return &g_105cd454[78];
	case 41: return &g_105cd454[77];
	case 42: return &g_105cd454[76];
	case 43: return &g_105cd454[75];
	case 44: return &g_105cd454[74];
	case 45: return &g_105cd454[73];
	case 46: return &g_105cd454[72];
	case 47: return &g_105cd454[71];
	case 48: return &g_105cd454[70];
	case 49: return &g_105cd454[69];
	case 50: return &g_105cd454[68];
	case 51: return &g_105cd454[67];
	case 52: return &g_105cd454[66];
	case 53: return &g_105cd454[65];
	case 54: return &g_105cd454[64];
	case 55: return &g_105cd454[63];
	case 56: return &g_105cd454[62];
	case 57: return &g_105cd454[61];
	case 58: return &g_105cd454[60];
	case 59: return &g_105cd454[59];
	case 60: return &g_105cd454[58];
	case 61: return &g_105cd454[57];
	case 62: return &g_105cd454[56];
	case 63: return &g_105cd454[55];
	case 64: return &g_105cd454[54];
	case 65: return &g_105cd454[53];
	case 66: return &g_105cd454[52];
	case 67: return &g_105cd454[51];
	case 68: return &g_105cd454[50];
	case 69: return &g_105cd454[49];
	case 70: return &g_105cd454[48];
	case 71: return &g_105cd454[47];
	case 72: return &g_105cd454[46];
	case 73: return &g_105cd454[45];
	case 74: return &g_105cd454[44];
	case 75: return &g_105cd454[43];
	case 76: return &g_105cd454[42];
	case 77: return &g_105cd454[41];
	case 78: return &g_105cd454[40];
	case 79: return &g_105cd454[39];
	case 80: return &g_105cd454[38];
	case 81: return &g_105cd454[37];
	case 82: return &g_105cd454[36];
	case 83: return &g_105cd454[35];
	case 84: return &g_105cd454[34];
	case 85: return &g_105cd454[33];
	case 86: return &g_105cd454[32];
	case 87: return &g_105cd454[31];
	case 88: return &g_105cd454[30];
	case 89: return &g_105cd454[29];
	case 90: return &g_105cd454[28];
	case 91: return &g_105cd454[27];
	case 92: return &g_105cd454[26];
	case 93: return &g_105cd454[25];
	case 94: return &g_105cd454[24];
	case 95: return &g_105cd454[23];
	case 96: return &g_105cd454[22];
	case 97: return &g_105cd454[21];
	case 98: return &g_105cd454[20];
	case 99: return &g_105cd454[19];
	case 100: return &g_105cd454[18];
	case 101: return &g_105cd454[17];
	case 102: return &g_105cd454[16];
	case 103: return &g_105cd454[15];
	case 104: return &g_105cd454[14];
	case 105: return &g_105cd454[13];
	case 106: return &g_105cd454[12];
	case 107: return &g_105cd454[11];
	case 108: return &g_105cd454[10];
	case 109: return &g_105cd454[9];
	case 110: return &g_105cd454[8];
	case 111: return &g_105cd454[7];
	case 112: return &g_105cd454[6];
	case 113: return &g_105cd454[5];
	case 114: return &g_105cd454[4];
	case 115: return &g_1058b0a0;
	case 116: return &g_105cd454[3];
	case 117: return &g_105cd454[2];
	case 118: return &g_105cd454[1];
	default: return &g_105cd454[0];
	}
}
// END FUNCTION

// FUNCTION: 0x1027ede0 size=0x10
#include "CAI_BaseNPC.h"
namespace lifted {
int sub_1027e7f0(int);
}

const char *CAI_BaseNPC::vfunc408(int state)
{
	return (const char *)(lifted::sub_1027e7f0(state));
}
// END FUNCTION

// FUNCTION: 0x1027ee00 size=0x6
int sub_1027ee00(void)
{
    return 0x77;
}
// END FUNCTION

// FUNCTION: 0x1027ee20 size=0x4f
struct SEntry { unsigned int h; char text[512]; };
extern SEntry g_1090ff60[];
extern int g_10920538;
__declspec(dllimport) char *Q_strncpy(char *, const char *, int);
struct CHandleSrc { virtual void vfunc0(); virtual unsigned int *vfunc1(); };

void sub_1027ee20(CHandleSrc *pEnt, const char *pText)
{
    if (pEnt && pText) {
        SEntry *e = &g_1090ff60[g_10920538];
        e->h = *pEnt->vfunc1();
        Q_strncpy(e->text, pText, 512);
        g_10920538++;
    }
}
// END FUNCTION

// FUNCTION: 0x1027ee90 size=0x6c
#include "CUnknown1027ef20.h"

struct SEnt { char pad[0x94]; CUnknown1027ef20 *m_p94; };
struct SHandleEntry { SEnt *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
struct SLogEntry { unsigned handle; char text[0x200]; };
extern int g_10920538;
extern SLogEntry g_1090ff60[];
extern SEntList *g_10566458;

void sub_1027ee90()
{
    int i = 0;
    if (0 < g_10920538) {
        SLogEntry *l = g_1090ff60;
        do {
            unsigned h = l->handle;
            SEnt *ent;
            if (h == 0xffffffff)
                ent = 0;
            else {
                SHandleEntry *he = &g_10566458->e[h & 0x1fff];
                ent = (he->serial == (h >> 13)) ? he->p : 0;
            }
            if (ent->m_p94)
                ent->m_p94->sub_1027ef20(l->text);
            i++;
            l++;
        } while (i < g_10920538);
    }
    g_10920538 = 0;
}
// END FUNCTION

// FUNCTION: 0x1027ef20 size=0x6f
#include "CUnknown1027ef20.h"

extern "C" void *memset(void *, int, unsigned);
int sub_10431c2f(char *, const char *, ...);

void CUnknown1027ef20::sub_1027ef20(const char *text)
{
    if (text) {
        m_pos += sub_10431c2f(m_buf + m_pos, text);
        if (m_pos >= 0x3e00) {
            memset(m_buf + m_pos, 0, 0x4000 - m_pos);
            m_overflow = 1;
            m_pos = 0;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1027efb0 size=0x1bd
__declspec(dllimport) void DevMsg(const char *, ...);
extern int g_1090fd68;
extern int g_109203e4;

struct CTraceDumpNPC {
	virtual void vfunc0();
	char m_pad0004[0x1b4e - 4];
	char m_szBuf[0x5b50 - 0x1b4e];
	int m_nLen;
	char m_bWrapped;
	const char *sub_100ab4f0();
};

void __fastcall sub_1027efb0(CTraceDumpNPC *p)
{
	DevMsg("\n");
	DevMsg("********************************************\n");
	DevMsg("** BEGIN BUFFER DUMP FOR %s\n", p->sub_100ab4f0());
	DevMsg("\n");
	g_1090fd68 = 0;
	g_109203e4 = 0;
	if (p->m_bWrapped) {
		int pos = p->m_nLen + 1;
		int start = pos;
		while (pos < 0x4000) {
			char c = p->m_szBuf[pos];
			if (!c)
				break;
			if (pos - start >= 0x200) {
				g_1090fd68++;
				g_109203e4 += pos - start + 1;
				p->m_szBuf[pos] = 0;
				DevMsg(&p->m_szBuf[start]);
				p->m_szBuf[pos] = c;
				start = pos;
			}
			pos++;
		}
		g_1090fd68++;
		g_109203e4 += pos - start + 1;
		DevMsg(&p->m_szBuf[start]);
	}
	int pos = 0;
	int start = 0;
	while (pos < p->m_nLen) {
		char c = p->m_szBuf[pos];
		if (!c)
			break;
		if (pos - start >= 0x200) {
			g_1090fd68++;
			g_109203e4 += pos - start + 1;
			p->m_szBuf[pos] = 0;
			DevMsg(&p->m_szBuf[start]);
			p->m_szBuf[pos] = c;
			start = pos;
		}
		pos++;
	}
	g_1090fd68++;
	g_109203e4 += pos - start + 1;
	p->m_szBuf[p->m_nLen] = 0;
	DevMsg(&p->m_szBuf[start]);
	DevMsg("\n");
	DevMsg("** END BUFFER DUMP FOR %s\n", p->sub_100ab4f0());
	DevMsg("********************************************\n");
	DevMsg("\n");
}
// END FUNCTION

// FUNCTION: 0x1027f1e0 size=0x6c
const char * __stdcall sub_1027f1e0(int state)
{
    switch (state) {
    case 0: return "PLAYING";
    case 1: return "WAIT";
    case 2: return "POST_IDLE";
    case 3: return "CLEANUP";
    case 4: return "WALK_TO_MARK";
    case 5: return "RUN_TO_MARK";
    case 6: return "CUSTOM_MOVE_TO_MARK";
    default: return "**UNKNOWN**";
    }
}
// END FUNCTION

// FUNCTION: 0x1027f270 size=0x3
void __stdcall sub_1027f270(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1027f290 size=0x230
#include "CAI_BaseNPC.h"

struct CNpcTypeView
{
	char m_pad[0x1b2c];
	int m_nType;
};

// TARGET: CAI_BaseNPC::sub_1027f290
const char *CAI_BaseNPC::sub_1027f290(int unused)
{
	switch (((CNpcTypeView *)this)->m_nType) {
	case 0: return "NONE";
	case 1: return "AI_BASENPC";
	case 2: return "AI_BASENPCTROIKA";
	case 3: return "NPC_BASEVAMPAI";
	case 4: return "NPC_VANDREIBLOOD";
	case 5: return "NPC_VANIMAL";
	case 6: return "NPC_VASIANVAMPIRE";
	case 7: return "NPC_VBATSWARM";
	case 8: return "NPC_VBRUJAH";
	case 9: return "NPC_VCAMERA";
	case 10: return "NPC_VCHANGBROS";
	case 11: return "NPC_VCOMBATMAN";
	case 12: return "NPC_VCOP";
	case 13: return "NPC_VDOG";
	case 14: return "NPC_BACH";
	case 15: return "NPC_VFRENZYSHADOW";
	case 16: return "NPC_VGANGREL";
	case 17: return "NPC_VGARGOYLE";
	case 18: return "NPC_VGUARD1";
	case 19: return "NPC_VHENGEYOKAI";
	case 20: return "NPC_VHUMAN";
	case 21: return "NPC_VHUMAN_COMBATANT";
	case 22: return "NPC_VHUMAN_COMBAT_PATROL";
	case 23: return "NPC_VHUNTER";
	case 24: return "NPC_VMALKAVIAN";
	case 25: return "NPC_VMING_XIAO";
	case 26: return "NPC_VMING_XIAO_TENTACLE";
	case 27: return "NPC_VMOLEMAN";
	case 28: return "NPC_VNOSFERATU";
	case 29: return "NPC_VPEDESTRIAN";
	case 30: return "NPC_VPLACEHOLDER";
	case 31: return "NPC_VSABBATLEADER";
	case 32: return "NPC_VSCURRYING";
	case 33: return "NPC_VSHERIFFMAN";
	case 34: return "NPC_VSHERIFFSWARM";
	case 35: return "NPC_VTEST";
	case 36: return "NPC_VTOREADOR";
	case 37: return "NPC_VTREMERE";
	case 38: return "NPC_VTZIMISCE";
	case 39: return "NPC_VVAMPIRE";
	case 40: return "NPC_VVENTRUE";
	case 41: return "NPC_VWEREWOLF";
	case 42: return "NPC_VYUKIE";
	case 43: return "NPC_VZOMBIE";
	default: return "**UNKNOWN**";
	}
}
// END FUNCTION

// FUNCTION: 0x1027f550 size=0x5f
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"
char CAI_BaseNPCTroika::sub_1027f550(CAI_BaseNPCTroika *pOther)
{
	if (!pOther)
		return 0;
	if ((vfunc513() & 0xd00) != 0xd00) {
		pOther->sub_100f0e90(8);
		return 0;
	}
	if (*(float *)((char *)pOther + 0x640) > gpGlobals->curtime) {
		pOther->sub_100f0e90(0x10);
		return 0;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1027f5d0 size=0x28
#include <stdarg.h>

extern "C" int __cdecl _vsnprintf(char *buffer, size_t count, const char *format, va_list argptr);

// TARGET: sub_1027f5d0
char *sub_1027f5d0(char *pBuffer, const char *pszFormat, ...)
{
    va_list args;
    va_start(args, pszFormat);
    _vsnprintf(pBuffer, 0xff, pszFormat, args);
    pBuffer[0xff] = 0;
    return pBuffer;
}
// END FUNCTION

// FUNCTION: 0x1027f610 size=0x12
void __fastcall sub_1027f610(unsigned int *p)
{
    int i;
    if (p != 0) {
        for (i = 0; i < 6; i++) {
            p[i] = 0;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1027f660 size=0xc4
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "SaveRestoreFieldInfo_t.h"
#include "UnreachableEnt_t.h"

struct SRDataMap;
struct SRTypeDesc {
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	void *pSaveRestoreOps;
	void *inputFunc;
	SRDataMap *td;
	int fieldSizeInBytes;
	int unk;
};
struct SRDataMap {
	SRTypeDesc *dataDesc;
	int dataNumFields;
	const char *dataClassName;
	SRDataMap *baseMap;
	bool chains_validated;
	bool packed_offsets_computed;
	int packed_size;
};
struct SRSave {
	virtual void s0();
	virtual void s1();
	virtual void WriteAll(const void *pLeaf, SRDataMap *pMap);
	virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void WriteInt(const int *pInt, int nElems);
};
extern char g_10559048[];
extern char g_10559044[];
extern SRDataMap g_105cab08;

typedef CUtlVector<UnreachableEnt_t, CUtlMemory<UnreachableEnt_t> > UnreachableVec;

template <>
void CUtlVectorDataOps<UnreachableVec, 9>::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	SRTypeDesc desc = { 9, g_10559048, {0, 0}, 1, 2, 0, 0, 0, &g_105cab08 };
	SRDataMap dm = { &desc, 1, g_10559044, 0, false, false, 0 };
	UnreachableVec *vec = (UnreachableVec *)((SaveRestoreFieldInfo_t *)fieldInfo)->pField;
	SRSave *save = (SRSave *)pSave;
	int n = vec->m_Size;
	save->WriteInt(&n, 1);
	for (int i = 0; i < n; i++)
		save->WriteAll(&vec->m_Memory.m_pMemory[i], &dm);
}
// END FUNCTION

// FUNCTION: 0x1027f770 size=0xe9
#include "utlrbtree.h"
#include "datamap.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "UnreachableEnt_t.h"
#include "CUtlVector20.h"
#include "CUnknown1027fbf0.h"

struct datamapFull_t {
	typedescription_t *dataDesc;
	int dataNumFields;
	const char *dataClassName;
	datamap_t *baseMap;
	bool chains_validated;
	bool packed_offsets_computed;
	int packed_size;
};
struct IRestoreStub {
	virtual void v0(); virtual void v1();
	virtual void ReadAll(void *pLeafObject, datamapFull_t *pDataMap);
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual int ReadInt();
};
struct FieldInfoStub {
	void *pField;
};
extern datamap_t g_105cab08;

struct CUnreachableVec : CUtlVector20 {
	CUnknown1027fbf0 &Element(int i) { return ((CUnknown1027fbf0 *)m_pMemory)[i]; }
	int InsertMultipleBefore(int elem, int num)
	{
		if (num == 0)
			return elem;
		sub_1027f990(num);
		sub_1027fa50(elem, num);
		for (int i = 0; i < num; ++i) {
			CUnknown1027fbf0 *p = &Element(elem + i);
			if (p)
				p->sub_1027fbf0();
		}
		return elem;
	}
	int AddMultipleToTail(int num) { return InsertMultipleBefore(m_size, num); }
	void RemoveAll() { m_size = 0; }
	void SetCount(int count) { RemoveAll(); AddMultipleToTail(count); }
};

// TARGET: CUtlVectorDataOps<CUtlVector<UnreachableEnt_t,CUtlMemory<UnreachableEnt_t> >,9>::vfunc1
void CUtlVectorDataOps<CUtlVector<UnreachableEnt_t, CUtlMemory<UnreachableEnt_t> >, 9>::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore)
{
	typedescription_t dataDesc = { 9, "elems", {0, 0}, 1, 2, 0, 0, 0, &g_105cab08 };
	datamapFull_t dataMap = { &dataDesc, 1, "uv", 0, false, false, 0 };
	CUnreachableVec *pVec = (CUnreachableVec *)((FieldInfoStub *)fieldInfo)->pField;
	int nElems = ((IRestoreStub *)pRestore)->ReadInt();
	pVec->SetCount(nElems);
	for (int i = 0; i < nElems; i++)
		((IRestoreStub *)pRestore)->ReadAll(&pVec->Element(i), &dataMap);
}
// END FUNCTION

// FUNCTION: 0x1027f8a0 size=0x10
#include "UnreachableEnt_t.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
struct UnreachableEnt_t;
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<UnreachableEnt_t,CUtlMemory<UnreachableEnt_t> >,9>::vfunc3
template<> void CUtlVectorDataOps<CUtlVector<UnreachableEnt_t,CUtlMemory<UnreachableEnt_t> >,9>::vfunc3(SaveRestoreFieldInfo_t *pFieldData)
{
	((CUtlVector<UnreachableEnt_t,CUtlMemory<UnreachableEnt_t> > *)*(void **)pFieldData)->RemoveAll();
}
// END FUNCTION

// FUNCTION: 0x1027f8c0 size=0x13
#include "UnreachableEnt_t.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"

struct UnreachableEnt_t;

// TARGET: CUtlVectorDataOps<CUtlVector<UnreachableEnt_t,CUtlMemory<UnreachableEnt_t> >,9>::vfunc2
template <class VEC, int N>
bool CUtlVectorDataOps<VEC, N>::vfunc2(SaveRestoreFieldInfo_t *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}

template class CUtlVectorDataOps<CUtlVector<UnreachableEnt_t,CUtlMemory<UnreachableEnt_t> >,9>;
// END FUNCTION

// FUNCTION: 0x1027f8f0 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_109f3634)(int);

UtlMem *UtlMem::sub_1027f8f0(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_109f3634(allocationCount * 4);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x1027f940 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_109f3634)(int);

UtlMem *UtlMem::sub_1027f940(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_109f3634(allocationCount * 8);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x1027f990 size=0x8f
#include "CUtlVector20.h"
extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUtlVector20::sub_1027f990(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 2;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (char *)g_109f3638(m_pMemory, m_allocationCount * 20);
        else
            m_pMemory = (char *)g_109f3634(m_allocationCount * 20);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x1027fa50 size=0x3e
#include "CUtlVector20.h"
extern "C" void *memmove(void *, const void *, unsigned int);

void CUtlVector20::sub_1027fa50(int elem, int num)
{
	int numToMove = m_size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(m_pMemory + (elem + num) * 20, m_pMemory + elem * 20, numToMove * 20);
}
// END FUNCTION

// FUNCTION: 0x1027faa0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_109f3624)(void *);

void UtlMem::sub_1027faa0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_109f3624(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1027fae0 size=0x8c
#include "UtlVec8.h"
extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void UtlVec8::sub_1027fae0(int num)
{
    if (m_Size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_Size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 4;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (char *)g_109f3638(m_pMemory, m_allocationCount << 3);
        else
            m_pMemory = (char *)g_109f3634(m_allocationCount << 3);
    }
    m_Size += num;
    m_pElements = (UtlVec8Elem *)m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x1027fba0 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_1027fba0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(&m_pMemory[(elem + num) * 8], &m_pMemory[elem * 8], numToMove * 8);
}
// END FUNCTION

// FUNCTION: 0x1027fbf0 size=0x9
struct CUnknown1027fbf0 { int a; CUnknown1027fbf0* sub_1027fbf0(); };
// TARGET: CUnknown1027fbf0::sub_1027fbf0
CUnknown1027fbf0* CUnknown1027fbf0::sub_1027fbf0() { a = -1; return this; }
// END FUNCTION

// FUNCTION: 0x1027fc10 size=0x13
struct CUnknown1027fc10 { void * sub_1027fc10(int); };
void * CUnknown1027fc10::sub_1027fc10(int a0)
{
    *(int *)this = *(int *)((char *)a0);
    *(int *)((char *)this + 4) = *(int *)((char *)a0 + 4);
    return this;
}
// END FUNCTION

// FUNCTION: 0x1027fc40 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown1027fc40 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9)
	V25(q0) V25(q1) V25(q2) V25(q3) V25(q4) V25(q5) V25(q6)
	V5(r0) virtual void f0();
	virtual void slot431();
	void sub_1027fc40();
};
void CUnknown1027fc40::sub_1027fc40() { slot431(); }
// END FUNCTION

// FUNCTION: 0x1027fc50 size=0x5
inline int pcd_initial_10923a2c() { return 0x450; }
int g_10923a2c = pcd_initial_10923a2c();
// END FUNCTION

// FUNCTION: 0x1027fc90 size=0x299
#include "CBaseEntity.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CAI_NPCTargetView.h"
#include "CGlobalEntityList.h"
#include "AITrace.h"
#include "CGameTrace.h"
#include "Ray_t.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "CUnknown102ee120.h"
#include "globalvars.h"
extern CGlobalEntityList g_106eb5d8;
extern char g_10538764[];
extern char g_1054abdc[];
float *sub_102d6120(int);
float *sub_102d6100(int);
void sub_10142b80(const float *, const float *, const float *, const float *, int, int, int, int, float);

inline CAI_NPCTargetView *NextNPC(CBaseEntity *pPrev)
{
	for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(pPrev); pEnt; pEnt = g_106eb5d8.sub_100f7060(pEnt)) {
		void *p = __RTDynamicCast(pEnt, 0, g_10538764, g_1054abdc, 0);
		if (p)
			return (CAI_NPCTargetView *)p;
	}
	return 0;
}

inline void RayInitHull(Ray_t &ray, const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs)
{
	ray.sub_1006dec0(start, pEnd, pMins, pMaxs, 1, 0);
}

void sub_1027fc90(CBaseEntity *pTarget, const Vector *pPos)
{
	for (CAI_NPCTargetView *pNPC = NextNPC(0); pNPC; pNPC = NextNPC((CBaseEntity *)pNPC)) {
		if (pNPC->m_nDebugFlags224 & 0x1000) {
			Vector start = *pPos;
			float a = 0, b = 0;
			pNPC->vfunc563(pTarget, &start, &a, &b);
			Vector end = start;
			end.z += 1.0f;
			CGameTrace tr;
			Ray_t ray;
			RayInitHull(ray, start, &end.x, sub_102d6100(pNPC->m_nHull1568), sub_102d6120(pNPC->m_nHull1568));
			CTraceFilterSimple filter(pNPC, 0);
			g_1070b254->vfunc4(&ray, 0x202400b, (CTraceFilterNoCharacterCollide *)&filter, &tr);
			if (!g_10738964->vfunc1() && g_10738964->m_n2c)
				sub_10146570((const Vector *)&tr.m_startpos, (const Vector *)&tr.m_endpos, 0xff, 0xff, 0, 1, -1.0f);
			if (!tr.m_startsolid && tr.m_fraction == 1.0) {
				pNPC->m_vecGoal5db8 = start;
				pNPC->m_vecGoalAngles5dc4 = *(Vector *)((CAI_BaseNPC *)pTarget)->vfunc219();
				pNPC->sub_10280de0(0x39);
				pNPC->m_flMoveTime5cf0 = gpGlobals->curtime;
				((CUnknown102ee120 *)pNPC->m_pNavigator5d34)->sub_102ee250(0x13);
			} else {
				sub_10142b80(&start.x, sub_102d6100(pNPC->m_nHull1568), sub_102d6120(pNPC->m_nHull1568), pNPC->vfunc219(), 0xff, 0, 0, 0x14, 0.5f);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1027ffe0 size=0xa7
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CUnknown102ee120.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_10538764[];	// type descriptor of CBaseEntity
extern char g_1054abdc[];	// type descriptor of CAI_BaseNPC
extern "C" void *__cdecl __RTDynamicCast(void *pObject, long vfDelta, void *pSrcType, void *pTargetType, int isReference);

struct CNPCFlagsX
{
	char m_pad0000[0x224];
	unsigned int m_flags224;
	char m_pad0228[0x5d34 - 0x228];
	CUnknown102ee120 *m_pHelper;

	void sub_10280de0(int a);
};

static inline CNPCFlagsX *NextNPC(CBaseEntity *pStart)
{
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(pStart);
	while (pEnt) {
		CNPCFlagsX *pNPC = (CNPCFlagsX *)__RTDynamicCast(pEnt, 0, g_10538764, g_1054abdc, 0);
		if (pNPC)
			return pNPC;
		pEnt = g_106eb5d8.sub_100f7060(pEnt);
	}
	return 0;
}

// TARGET: sub_1027ffe0
void sub_1027ffe0()
{
	for (CNPCFlagsX *pNPC = NextNPC(0); pNPC; pNPC = NextNPC((CBaseEntity *)pNPC)) {
		if (pNPC->m_flags224 & 0x1000) {
			pNPC->sub_10280de0(0x3d);
			pNPC->m_pHelper->sub_102ee250(0x13);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102800c0 size=0xd5
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"

extern int g_10923a2c;
extern Vector g_10934060;

struct AI_NavGoal102800c0
{
    AI_NavGoal102800c0(int t, const Vector &d, int act, float tol, int fl, int g)
        : type(t), dest(d), m_n10(-1), activity(act), m_n18(-1), m_n1c(-1),
          tolerance(tol), flags(fl), m_n28(g), m_vec(g_10934060), m_f38(0), m_f3c(0)
    {
    }
    int type;
    Vector dest;
    int m_n10;
    int activity;
    int m_n18;
    int m_n1c;
    float tolerance;
    int flags;
    int m_n28;
    Vector m_vec;
    float m_f38;
    float m_f3c;
};

struct CNavUnit
{
    char sub_102ecd20(const void *pGoal, int a);
};

char CAI_BaseNPC::sub_102800c0(int a, CBaseEntity *pEnt, int c)
{
    sub_10280de0(a);
    *(CBaseEntity **)((char *)this + 0x5de8) = pEnt;
    AI_NavGoal102800c0 goal(4, *(Vector *)((CAI_BaseNPC *)pEnt)->vfunc217(), c, 128.0f, 1, g_10923a2c);
    vfunc563(pEnt, (float *)&goal.dest, (void *)&goal.tolerance, &a);
    CNavUnit *pNav = *(CNavUnit **)((char *)this + 0x5d34);
    return pNav->sub_102ecd20(&goal, 0);
}
// END FUNCTION

// FUNCTION: 0x102801e0 size=0xd5
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CUnknown102ee120.h"
extern int g_10923a2c, g_10934060, g_10934064, g_10934068;
extern float g_1049a154;

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CNpcSlots563X {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23) SV10(24) SV10(25) SV10(26) SV10(27) SV10(28) SV10(29)
	SV10(30) SV10(31) SV10(32) SV10(33) SV10(34) SV10(35) SV10(36) SV10(37) SV10(38) SV10(39)
	SV10(40) SV10(41) SV10(42) SV10(43) SV10(44) SV10(45) SV10(46) SV10(47) SV10(48) SV10(49)
	SV10(50) SV10(51) SV10(52) SV10(53) SV10(54) SV10(55)
	SV(560) SV(561) SV(562)
	virtual void s563(CBaseEntity *pEnt, float *pDest, void *pParams, int *pA);
};

struct CEntityOriginSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20)
	SV10(21)
	virtual float *s220();
};

struct CNavGoalX {
	int m_type;
	float m_vecDest[3];
	int m_n10;
	int m_n14;
	int m_n18;
	int m_n1c;
};

struct CNavParamsX {
	float m_f00;
	int m_n04;
	int m_n08;
	int m_n0c;
	int m_n10;
	int m_n14;
	int m_n18;
	int m_n1c;

	CNavParamsX(float flTolerance)
	{
		m_f00 = flTolerance;
		m_n04 = 1;
		m_n08 = g_10923a2c;
		m_n0c = g_10934060;
		m_n10 = g_10934064;
		m_n14 = g_10934068;
		m_n18 = 0;
		m_n1c = 0;
	}
};

void CAI_BaseNPC::sub_102801e0(int a, CBaseEntity *pEnt, int c)
{
	sub_10280de0(a);
	*(CBaseEntity **)((char *)this + 0x5de8) = pEnt;
	float *pOrigin = ((CEntityOriginSlotsX *)pEnt)->s220();
	CNavGoalX goal;
	goal.m_type = 3;
	goal.m_vecDest[0] = pOrigin[0];
	goal.m_vecDest[1] = pOrigin[1];
	goal.m_vecDest[2] = pOrigin[2];
	goal.m_n10 = -1;
	goal.m_n14 = c;
	goal.m_n18 = -1;
	goal.m_n1c = -1;
	CNavParamsX params(g_1049a154);
	((CNpcSlots563X *)this)->s563(pEnt, goal.m_vecDest, &params, &a);
	(*(CUnknown102ee120 **)((char *)this + 0x5d34))->sub_102ecd20(&goal, 0);
}
// END FUNCTION

// FUNCTION: 0x10280300 size=0x11
// TARGET: sub_10280300
int __fastcall sub_102ee680(void *pNavigator);

int __fastcall sub_10280300(void *pThis)
{
	return sub_102ee680(*(void **)((char *)pThis + 0x5d34)) & 0xff;
}
// END FUNCTION

// FUNCTION: 0x10280330 size=0x20
#include "CAI_BaseNPC.h"

// TARGET: CAI_BaseNPC::vfunc529
bool CAI_BaseNPC::vfunc529()
{
    int *p = sub_1028a150();
    if (p)
    {
        int v = *p;
        if (v != 0x6e && v != 0xb && v != 0x72)
        {
            return false;
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x10280880 size=0x26
#include "CAI_BaseNPC.h"

// TARGET: CAI_BaseNPC::vfunc521
void CAI_BaseNPC::vfunc521(int a, int b, int c)
{
	sub_1001484e(a, b, c, 80.0f, 250.0f, 160.0f);
}
// END FUNCTION

// FUNCTION: 0x102808c0 size=0x109
#include "Vector.h"
#include <math.h>

Vector sub_102808c0(const Vector &vecStart, const Vector &vecEnd, float flGravity, float flApexHeight)
{
	float dz = vecEnd.z - vecStart.z;
	Vector vecDir = vecEnd - vecStart;
	vecDir.z = 0.0f;
	float flLen = VectorNormalize(vecDir);

	float flApex;
	if (dz > 0.0f)
		flApex = dz + flApexHeight;
	else
		flApex = flApexHeight;
	if (flApex < flApexHeight)
		flApex = flApexHeight;

	float flVzTerm = flGravity * flApex;
	float flVz = sqrt(flVzTerm + flVzTerm);
	float flNum = flLen * flGravity;
	float flNegGravity = -flGravity;
	float flDnTerm = (dz - flApex) * flNegGravity;
	float flVzDown = sqrt(flDnTerm + flDnTerm);
	float flFactor = flNum / ((double)flVz + flVzDown);
	Vector vecVelocity = vecDir * flFactor;
	vecVelocity.z = flVz;
	return vecVelocity;
}
// END FUNCTION

// FUNCTION: 0x10280a20 size=0x20
#include "globalvars.h"

// TARGET: CUnk10280a20::sub_10280a20
struct CUnk10280a20
{
    char pad[0x5cf0];
    float m_5cf0;
    int sub_10280a20();
};
int CUnk10280a20::sub_10280a20()
{
    if (m_5cf0 > gpGlobals->curtime)
        return 1;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10280a50 size=0x10e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "ScopeTrace.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct AutoMovementSlots
{
	V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8)
	virtual void a90(); virtual void a91(); virtual void a92(); virtual void a93();
	virtual int slot94();
	virtual void a95(); virtual void a96(); virtual void a97(); virtual void a98(); virtual void a99();
	V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8) V10(b9)
	V10(c0) V10(c1) V10(c2) V10(c3) V10(c4)
	virtual float slot250(int a);
};

bool CAI_BaseNPC::sub_10280a50()
{
	ScopeTrace trace("CAI_BaseNPC::AutoMovement", this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc);
	char bFlag;
	Vector vecAngles;
	Vector vecDelta;
	((AutoMovementSlots *)this)->slot250(0);
	sub_10094b70(*(float *)((char *)this + 0x174) - *(float *)((char *)this + 0x170), &bFlag, &vecDelta, (int *)&vecAngles);
	if (((AutoMovementSlots *)this)->slot94() == 4 && !(sub_100b3700() & 0x400)) {
		CAI_Motor *pMotor = *(CAI_Motor **)((char *)this + 0x5d44);
		return pMotor->sub_102e0bd0(&vecDelta, sub_102729d0(), *(int *)&vecAngles.y, 0, 0, 0, 0) == 1;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10280bb0 size=0x7
#include "CAI_BaseNPC.h"
namespace lifted {
extern float g_1049949c;
}
float CAI_BaseNPC::vfunc516()
{
    return lifted::g_1049949c;
}
// END FUNCTION

// FUNCTION: 0x10289ce0 size=0x1e
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc571
int CAI_BaseNPC::vfunc571(float f)
{
	return f < 190.0f ? 9 : 0x13;
}
// END FUNCTION

// FUNCTION: 0x10289d10 size=0x167
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include <math.h>

struct SNPCTurnView
{
	char m_pad0000[0x5d44];
	CAI_Motor *m_pMotor;	// 0x5d44
	char m_pad5d48[0x5d8c - 0x5d48];
	unsigned int m_nFlags;	// 0x5d8c
};

struct CAI_BaseNPCUnit : CAI_BaseNPC
{
	void sub_10289d10();	// "CAI_BaseNPC::TurnActivity"-like: picks the turn activity by the yaw difference to the ideal yaw
	void sub_10272650(int activity);	// sets the ideal activity (stub 0x100097d2)
};

void CAI_BaseNPCUnit::sub_10289d10()
{
	SNPCTurnView *pView = (SNPCTurnView *)this;
	float flYaw = pView->m_pMotor->sub_102e1f90();
	if (flYaw <= -80.0f && flYaw >= -100.0f) {
		if (sub_1008dc40(0xa2, -1) != -1) {
			pView->m_nFlags |= 0x2000;
			sub_10272650(0xa2);
			return;
		}
	}
	if (flYaw >= 80.0f && flYaw <= 100.0f) {
		if (sub_1008dc40(0xa1, -1) != -1) {
			pView->m_nFlags |= 0x2000;
			sub_10272650(0xa1);
			return;
		}
	}
	if (fabs(flYaw) >= 160.0) {
		if (sub_1008dc40(0x9d, -1) != -1) {
			pView->m_nFlags |= 0x2000;
			sub_10272650(0x9d);
			return;
		}
	}
	if (flYaw <= -45.0f) {
		if (sub_1008dc40(0x3c, -1) != -1) {
			sub_10272650(0x3c);
			return;
		}
	}
	if (flYaw >= 45.0f) {
		if (sub_1008dc40(0x3b, -1) != -1) {
			sub_10272650(0x3b);
			return;
		}
	}
	sub_10272650(1);
}
// END FUNCTION

// FUNCTION: 0x10289ee0 size=0x21
#include "CAI_BaseNPC.h"

void CAI_BaseNPC::sub_10289ee0(int activity)
{
	if (*(int *)((char *)this + 0xfec) == activity)
		*(int *)((char *)this + 0xfec) = 0;
	sub_10272650(activity);
}
// END FUNCTION

// FUNCTION: 0x10289f20 size=0x8e
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CUnknown1027d990.h"

float sub_102d61b0(int index);

struct EntView {
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
#define EV(n) virtual void ev##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)
	EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8) EV10(9)
	EV10(10) EV10(11) EV10(12) EV10(13) EV10(14) EV10(15) EV10(16) EV10(17) EV10(18)
	EV(190) EV(191) EV(192)
	virtual Vector ev193();
	EV(194) EV(195) EV(196) EV(197) EV(198) EV(199)
	EV10(20)
	EV(210) EV(211) EV(212) EV(213) EV(214) EV(215) EV(216)
	virtual float *ev217();
};

void CAI_BaseNPC::vfunc563(CBaseEntity *pEnt, const void *pGoal, const void *pParams, const void *pExtra)
{
	if (((CUnknown1027d990 *)this)->sub_1027d990() == 2) {
		EntView *e = (EntView *)pEnt;
		Vector *pAbs = (Vector *)e->ev217();
		Vector *pPos = (Vector *)pGoal;
		*pPos += e->ev193() - *pAbs;
		*(float *)pParams = sub_102d61b0(*(int *)((char *)this + 0x1568));
	} else {
		*(int *)pParams = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1028abe0 size=0x12
int __fastcall sub_1028abe0(void *self, int dummy, int a, int b, int c)
{
	int v = *(int *)((char *)self + 0x5c54);
	return v ? v : 0x43;
}
// END FUNCTION

// FUNCTION: 0x1028ac10 size=0x47
#include "CBaseEntity.h"
#include "ehandle.h"
static bool (CHandle<CBaseEntity>::*s_ne)(CBaseEntity *) const = &CHandle<CBaseEntity>::operator!=;
// END FUNCTION

// FUNCTION: 0x1028ac80 size=0x26
#include "CBaseHandle.h"

// TARGET: CBaseHandle::sub_1028ac80
CBaseHandle &CBaseHandle::sub_1028ac80(IHandleEntity *pEntity)
{
	if (pEntity) {
		m_Index = *pEntity->vfunc1();
	} else {
		m_Index = 0xffffffff;
	}
	return *this;
}
// END FUNCTION

// FUNCTION: 0x1028acc0 size=0x29
#include "ehandle.h"

// TARGET: CBaseHandle::sub_1028acc0
IHandleEntity *CBaseHandle::sub_1028acc0()
{
	return Get();
}
// END FUNCTION

// FUNCTION: 0x1028ad00 size=0xe
namespace lifted {
int __stdcall sub_10012a0d(int, int);
}
int __stdcall sub_1028ad00(int a0)
{
    return lifted::sub_10012a0d(a0, a0);
}
// END FUNCTION

// FUNCTION: 0x1028ad20 size=0xf2
#include "CAI_BaseNPC.h"
#include "CUnknown10315fe0.h"

struct SSquad { char pad[0x6c]; unsigned int *m_pMask; };

struct CAI_BaseNPC_1028ad20 : CAI_BaseNPC {
    SSquad *GetSquad() { return (*(int *)((char *)this + 0x5bb0) <= 0) ? *(SSquad **)((char *)this + 0x5da4) : 0; }
};

bool CAI_BaseNPC::sub_1028ad20(int slotIDStart, int slotIDEnd)
{
    CAI_BaseNPC_1028ad20 *self = (CAI_BaseNPC_1028ad20 *)this;
    int &nMySlot = *(int *)((char *)this + 0x5dac);
    if (!self->GetSquad())
        return true;
    if (vfunc167() != ((CAI_BaseNPC *)((CUnknown10315fe0 *)self->GetSquad())->sub_10315fe0())->vfunc167())
        return true;
    int i;
    for (i = slotIDStart; i <= slotIDEnd; i++) {
        if (nMySlot == i)
            return true;
    }
    for (i = slotIDStart; i <= slotIDEnd; i++) {
        if (!(self->GetSquad()->m_pMask[i >> 5] & (1 << (i & 0x1f)))) {
            sub_1028ae60();
            self->GetSquad()->m_pMask[i >> 5] |= 1 << (i & 0x1f);
            nMySlot = i;
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x1028ae60 size=0x8c
#include "CAI_BaseNPC.h"

__declspec(dllimport) void __cdecl DevMsg(const char *fmt, ...);

struct CSlotOwner {
	char m_pad[0x6c];
	unsigned int *m_pBits;
};

class CSlotHolder {
public:
	char m_pad0[0x5bb0];
	int m_nDisabled;
	char m_pad1[0x5da4 - 0x5bb4];
	CSlotOwner *m_pOwner;
	char m_pad2[4];
	int m_nSlot;

	CSlotOwner *GetOwner() { return m_nDisabled <= 0 ? m_pOwner : 0; }

	void Vacate()
	{
		if (m_nSlot != -1 && m_nDisabled <= 0 && m_pOwner) {
			if (!(m_pOwner->m_pBits[m_nSlot >> 5] & (1 << (m_nSlot & 0x1f))))
				DevMsg("ERROR! Vacating an empty slot!\n");
			CSlotOwner *pOwner = GetOwner();
			pOwner->m_pBits[m_nSlot >> 5] &= ~(1 << (m_nSlot & 0x1f));
			m_nSlot = -1;
		}
	}
};

void CAI_BaseNPC::sub_1028ae60()
{
	((CSlotHolder *)this)->Vacate();
}
// END FUNCTION

// FUNCTION: 0x1028af20 size=0x13e
#include "CCollisionProperty.h"
#include "CGameTrace.h"
#include "UTIL_Trace.h"
float *sub_102d6100(int hull);
struct CNpcOtherView
{
	char m_pad0000[0x5f0];
	int m_p5f0;
};
struct CNpcFlagsView
{
	char m_pad0000[0x270];
	CCollisionProperty m_Collision;
	char m_padx[0x1568 - 0x270 - sizeof(CCollisionProperty)];
	int m_nHull;
	char m_pad156c[0x5db0 - 0x156c];
	int m_p5db0;
	bool sub_1028af20(const Vector *pPos, CNpcOtherView *pOther);
};
// TARGET: ?sub_1028af20@CNpcFlagsView@@QAE_NPBVVector@@PAUCNpcOtherView@@@Z
bool CNpcFlagsView::sub_1028af20(const Vector *pPos, CNpcOtherView *pOther)
{
	Vector vecTmp = *pPos;
	vecTmp.z = vecTmp.z - sub_102d6100(m_nHull)[2];
	Vector vecEnd = vecTmp;
	vecEnd.z = vecEnd.z + 0.01;
	const Vector &mins = *(const Vector *)m_Collision.vfunc1();
	const Vector &maxs = *(const Vector *)m_Collision.vfunc2();
	CGameTrace trace;
	UTIL_TraceHull_DebugCall(*pPos, vecEnd, mins, maxs, 0x202400b, this, 0, &trace, 1, 0);
	if (trace.m_startsolid)
		return false;
	if (m_p5db0 && (!pOther || pOther->m_p5f0 != m_p5db0))
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x1028b0b0 size=0x24
// TARGET: sub_1028b0b0
char __fastcall sub_1028b0b0(void *pSelf, int edxUnused, int unused, int *pOther)
{
    int *pVal = *(int **)((char *)pSelf + 0x5db0);
    if (pVal != 0 && (pOther == 0 || pOther[0x5f0 / 4] != (int)pVal)) {
        return 0;
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1028b0f0 size=0x13
extern int (*g_109f3630)(const char *, ...);

// TARGET: sub_1028b0f0
int __stdcall sub_1028b0f0(int unused)
{
    g_109f3630("ERROR! Subclass missing GetSlotSchedule Function!\n");
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1028b120 size=0x5
inline int pcd_initial_10923dd8() { return 0x450; }
int g_10923dd8 = pcd_initial_10923dd8();
// END FUNCTION

// FUNCTION: 0x1028b160 size=0x19
void __fastcall sub_1028b160(char *pThis)
{
	int *p = (int *)(pThis + 8);
	for (int i = 0x5; i != 0; i--) {
		p[-2] = 0;
		p[-1] = 0;
		p[0] = 0;
		p += 3;
	}
}
// END FUNCTION

// FUNCTION: 0x1028b190 size=0xac
#include "CUnknown1028b190.h"
extern float g_1044e674;
extern CUnknown1028b190Clock *g_1070b228;

struct CharLike {
	char pad0[0xa8];
	void *m_pa8;
	char pad1[0x6f0 - 0xac];
	int m_hTarget;
	int sub_1008d990(int handle);
};

void CUnknown1028b190::sub_1028b190(void *pCharacter)
{
	CharLike *c = (CharLike *)pCharacter;
	if (c != 0 && c->m_pa8 != 0) {
		int id = c->sub_1008d990(c->m_hTarget);
		if (id != 0) {
			float bestTime = g_1044e674;
			int bestIndex = -1;
			int minCount = 0x7fffffff;
			for (int i = 0; i < 5; i++) {
				if (m_entries[i].m_id == id) {
					m_entries[i].m_count++;
					m_entries[i].m_time = g_1070b228->m_time;
					return;
				}
				if (m_entries[i].m_time < bestTime) {
					bestTime = m_entries[i].m_time;
					bestIndex = i;
				}
				if (m_entries[i].m_count < minCount)
					minCount = m_entries[i].m_count;
			}
			if (bestIndex >= 0) {
				m_entries[bestIndex].m_id = id;
				m_entries[bestIndex].m_count = minCount;
				m_entries[bestIndex].m_time = g_1070b228->m_time;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1028b270 size=0xa
#include "ConVar.h"
ConVar g_10924430("defense_bonus_max_time", "3.0", 0);
// END FUNCTION

// FUNCTION: 0x1028b300 size=0xab
#include "CBaseAnimating.h"
#include "CUnknown1028b190.h"
#include "ConVar.h"

struct CharView_t {
	char pad[0xa8];
	int pObject;
	char pad2[0x6f0 - 0xac];
	int nSequence;
};

extern CUnknown1028b190Clock *g_1070b228;
extern ConVar *g_10924434;

int CUnknown1028b190::sub_1028b300(void *pCharacter)
{
	CharView_t *pChar = (CharView_t *)pCharacter;
	if (pChar && pChar->pObject) {
		int nDesc = ((CBaseAnimating *)pChar)->sub_1008d990(pChar->nSequence);
		CUnknown1028b190Entry *pEntry = sub_1028b460(nDesc);
		if (pEntry) {
			float flMin = sub_1028b420();
			float flExtra = (float)pEntry->m_count;
			flExtra -= flMin;
			float flElapsed = g_1070b228->m_time - pEntry->m_time;
			if (flExtra > 0.0f) {
				float flSpan = g_10924434->vfunc1() ? 0.0f : g_10924434->m_fValue;
				if (flElapsed < flSpan)
					return (int)flExtra;
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1028b3e0 size=0x27
// TARGET: sub_1028b3e0
float __fastcall sub_1028b3e0(int *pThis)
{
	int sum = 0;
	int *p = pThis + 1;
	for (int i = 5; i != 0; i--) {
		sum += *p;
		p += 3;
	}
	return sum * 0.2f;
}
// END FUNCTION

// FUNCTION: 0x1028b420 size=0x2c
struct CMinEnt1028b420 {
    int m_v;
    int m_x;
    int m_y;
};
struct CMinSet1028b420 {
    int m_pad;
    CMinEnt1028b420 m_ent[5];
    float sub_1028b420();
};

// TARGET: sub_1028b420
float CMinSet1028b420::sub_1028b420()
{
    int best = 0x7fffffff;
    int i;
    for (i = 0; i < 5; i++) {
        if (m_ent[i].m_v < best) {
            best = m_ent[i].m_v;
        }
    }
    return (float)best;
}
// END FUNCTION

// FUNCTION: 0x1028b460 size=0x2a
struct CUnit1028b460Entry {
    int key;
    int a, b;
};

struct CUnit1028b460 {
    CUnit1028b460Entry m_entries[5];
    CUnit1028b460Entry *sub_1028b460(int key);
};

CUnit1028b460Entry *CUnit1028b460::sub_1028b460(int key)
{
    if (key) {
        for (int i = 0; i < 5; i++) {
            if (m_entries[i].key == key)
                return &m_entries[i];
        }
        return 0;
    }
    return (CUnit1028b460Entry *)key;
}
// END FUNCTION

// FUNCTION: 0x1028b4a0 size=0xa
#include "ConVar.h"
ConVar g_10923f10("sk_basenpctroika_health", "10", 0);
// END FUNCTION

// FUNCTION: 0x1028b530 size=0xa
#include "ConVar.h"
ConVar g_10924db0("debug_test_schedule", "0", 0, "Forces the AI into test schedules.", true, 0.0f, true, 4.0f);
// END FUNCTION

// FUNCTION: 0x1028b5d0 size=0xa
#include "ConVar.h"
ConVar g_10924678("debug_test_switch1", "0", 0, "Toggles stuff for the test task.");
// END FUNCTION

// FUNCTION: 0x1028b660 size=0xa
#include "ConVar.h"
ConVar g_10924630("debug_test_switch2", "0", 0, "Toggles stuff for the test task.");
// END FUNCTION

// FUNCTION: 0x1028b6f0 size=0xa
#include "ConVar.h"
ConVar g_109247e8("debug_turning", "0", 0, "Toggles turn animations.");
// END FUNCTION

// FUNCTION: 0x1028b780 size=0xa
#include "ConVar.h"
ConVar g_10923e80("debug_turning_speed", "90", 0, "Toggles turn animations.");
// END FUNCTION

// FUNCTION: 0x1028b810 size=0xa
#include "ConVar.h"
ConVar g_10924890("debug_circle_dist_override", "0", 0, "Overrides the distance guys want to be outside the melee combat.");
// END FUNCTION

// FUNCTION: 0x1028b8a0 size=0xa
#include "ConVar.h"
ConVar g_10924798("debug_vision_line", "0", 0, "Set this to 1 to show a line from NPCs to player when they can see the player through an object.");
// END FUNCTION

// FUNCTION: 0x1028b930 size=0xa
#include "ConVar.h"
ConVar g_10924cd8("debug_hint_los", "0", 0, "Set this to 1 to show a line from any hints the NPCs try to use to their target when they do a LOS check.");
// END FUNCTION

// FUNCTION: 0x1028b9c0 size=0xa
#include "ConVar.h"
ConVar g_109241a8("debug_cs_los", "0", 0, "Set this to 1 to show a line from NPCs to static Crimina & Supernatural acts they are testing vision on.");
// END FUNCTION

// FUNCTION: 0x1028ba50 size=0xa
#include "ConVar.h"
ConVar g_109244c0("debug_weapon_shoot_pos", "0", 0, "Set this to 1 to show the weapon shoot positions for the NPCs.");
// END FUNCTION

// FUNCTION: 0x1028bae0 size=0xa
#include "ConVar.h"
ConVar g_10924358("debug_show_npc_skeletons", "0", 0, "Set this to 1 to show the server-side skeletons for the NPCs.");
// END FUNCTION

// FUNCTION: 0x1028bb70 size=0xa
#include "ConVar.h"
ConVar g_10924a18("debug_melee_advance_combatmove_dist", "100", 0, "How close a melee combatant needs to be to player in order to do the combat move.  Outside of this distance they will run to close the distance.");
// END FUNCTION

// FUNCTION: 0x1028bc00 size=0xa
#include "ConVar.h"
ConVar g_10924508("debug_player_on_head", "3", 0, "What should I do if the player is on my head?  0 - run only : 1 - allow dive : 2 - allow fall.", true, 0.0f, true, 3.0f);
// END FUNCTION

// FUNCTION: 0x1028bca0 size=0xa
#include "ConVar.h"
ConVar g_10924d20("debug_track_under_ground", "0", 0, "Tracks guys falling underground");
// END FUNCTION

// FUNCTION: 0x1028bd30 size=0xa
#include "ConVar.h"
ConVar g_10924298("ent_trace_doors", "0", 0, "When ent_trace is on, this will dump info about doors also.");
// END FUNCTION

// FUNCTION: 0x1028bdc0 size=0xa
#include "ConVar.h"
ConVar g_10924a68("ent_trace_conditions", "1", 0, "When ent_trace is on, this will dump info about conditions also.");
// END FUNCTION

// FUNCTION: 0x1028be50 size=0xa
#include "ConVar.h"
ConVar g_10924938("ent_trace_hints", "0", 0, "When ent_trace is on, this will dump info about hints also.");
// END FUNCTION

// FUNCTION: 0x1028bee0 size=0xa
#include "ConVar.h"
ConVar g_10924ed8("ent_trace_melee", "0", 0, "When ent_trace is on, this will dump info about melee also.");
// END FUNCTION

// FUNCTION: 0x1028bf70 size=0xa
#include "ConVar.h"
ConVar g_109243e8("ent_trace_sound", "0", 0, "When ent_trace is on, this will dump info about sounds also.");
// END FUNCTION

// FUNCTION: 0x1028c000 size=0xa
#include "ConVar.h"
ConVar g_109249d0("ent_trace_frenzy", "0", 0, "When ent_trace is on, this will dump info about frenzying also.");
// END FUNCTION

// FUNCTION: 0x1028c090 size=0xa
#include "ConVar.h"
ConVar g_109242e0("ent_trace_scripted", "0", 0, "When ent_trace is on, this will dump info about scripted sequences also.");
// END FUNCTION

// FUNCTION: 0x1028c120 size=0xa
#include "ConVar.h"
ConVar g_10924ab0("ent_trace_moveshoot", "0", 0, "When ent_trace is on, this will dump info about moving and shooting also.");
// END FUNCTION

// FUNCTION: 0x1028c1b0 size=0xa
#include "ConVar.h"
ConVar g_10923fa0("ent_trace_status", "0", 0, "When ent_trace is on, this will dump info about status also.");
// END FUNCTION

// FUNCTION: 0x1028c240 size=0xa
#include "ConVar.h"
ConVar g_109243a0("ent_trace_idealact", "0", 0, "When ent_trace is on, this will dump info about the ideal activity being changed also.");
// END FUNCTION

// FUNCTION: 0x1028c2d0 size=0xa
#include "ConVar.h"
ConVar g_10923d90("ent_trace_nav", "0", 0, "When ent_trace is on, this will dump info about failed navigation.");
// END FUNCTION

// FUNCTION: 0x1028c360 size=0xa
#include "ConVar.h"
ConVar g_10924078("ent_trace_patrolpath", "0", 0, "When ent_trace is on, this will dump info about patrol paths.");
// END FUNCTION

// FUNCTION: 0x1028c3f0 size=0xa
#include "ConVar.h"
ConVar g_109241f8("dialog_facial_debug", "0", 0, "Turns on debug text for the NPC you are talking to.");
// END FUNCTION

// FUNCTION: 0x1028c480 size=0xa
#include "ConVar.h"
ConVar g_10924f20("debug_show_body_targets", "0", 0, "Turns on display of body targets for selected NPCs.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1028c520 size=0xa
#include "ConVar.h"
ConVar g_109248f0("debug_allow_dodge", "0", 0, "Allows or disallows NPC dodging when no cover nodes are found.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1028c5c0 size=0xa
#include "ConVar.h"
ConVar g_10923d38("debug_allow_fake_reload", "1", 0, "Allows or disallows faked NPC reloading.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1028c660 size=0xa
#include "ConVar.h"
ConVar g_10924af8("debug_allow_non_idle_auto_sk", "1", 0, "Allows or disallows automatic stealth kills when target is not in idle state.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1028c700 size=0xa
#include "ConVar.h"
ConVar g_10924f70("debug_allow_move_facing", "1", 0, "If this is on, NPCs will move facing the NPC when they run for cover.");
// END FUNCTION

// FUNCTION: 0x1028c790 size=0xa
#include "ConVar.h"
ConVar g_10923cf0("debug_allow_mf_turn", "0", 0, "If this is on, NPCs will turn to look behind them periodically when they run for cover.");
// END FUNCTION

// FUNCTION: 0x1028c820 size=0xa
#include "ConVar.h"
ConVar g_10924478("debug_allow_npc_hunting", "0", 0, "Set this to 1 to allow NPCs to do their 'scouring the area' hunting state.");
// END FUNCTION

// FUNCTION: 0x1028c8b0 size=0xa
#include "ConVar.h"
ConVar g_10924848("debug_show_npc_pos", "0", 0, "Set this to 1 to show all of the NPC's stored positions.");
// END FUNCTION

// FUNCTION: 0x1028c940 size=0xa
#include "ConVar.h"
ConVar g_10923ec8("debug_view_cone", "0", 0, "Set to 1 to turn show the complex viewcon in viewcone mode");
// END FUNCTION

// FUNCTION: 0x1028c9d0 size=0xa
#include "ConVar.h"
ConVar g_10923f58("debug_alert_aggressive", "0", 0, "Set to true to have alert states use the aggressive animations.");
// END FUNCTION

// FUNCTION: 0x1028ca60 size=0xa
#include "ConVar.h"
ConVar g_10924030("debug_hunting_aggressive", "1", 0, "Set to true to have hunting states use the aggressive animations.");
// END FUNCTION

// FUNCTION: 0x1028caf0 size=0xa
#include "ConVar.h"
ConVar g_10924d68("debug_force_anim", "0", 0, "Set to 1 to force walk anims to use run instead, or 2 to force run to walk.");
// END FUNCTION

// FUNCTION: 0x1028cb80 size=0x5
#include "CBaseHandle.h"
CBaseHandle g_109247e0[2];
// END FUNCTION

// FUNCTION: 0x1028cbc0 size=0x5
#include "CAI_NPCPatrolPathSaveRestoreOps.h"
CAI_NPCPatrolPathSaveRestoreOps g_10924a5c;
// END FUNCTION

// FUNCTION: 0x1028cc00 size=0x57
#include "CAI_NPCPatrolPathSaveRestoreOps.h"
struct CPatrolPathField
{
	char m_bValid;
	void *m_pPath;
};
extern void (__cdecl *g_109f366c)(const char *fmt, ...);
extern int g_106117c0;
extern int g_106117c4;

void CAI_NPCPatrolPathSaveRestoreOps::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
#define pSave ((CSave *)pSave)
	CPatrolPathField *pField = (CPatrolPathField *)fieldInfo->pField;
	pSave->vfunc12(pField, 1);
	if (pField->m_bValid)
	{
		if (pField->m_pPath)
			pSave->vfunc3((int)"PatrolPath", (int)pField->m_pPath, 0, g_106117c0, g_106117c4);
		else
			g_109f366c("Invalid game state while trying to save NPC.\n");
	}
#undef pSave
}
// END FUNCTION

// FUNCTION: 0x1028cc80 size=0x62
#include "CBaseEntity.h"
#include "CAI_NPCPatrolPathSaveRestoreOps.h"
#include "CRestore.h"
struct SNPCTroikaRef_t;
extern void (*g_109f366c)(const char *, ...);
extern int g_106117c0;
extern int g_106117c4;
int sub_10307d30();
struct CPatrolOwnerView {
	void sub_1029f5d0(SNPCTroikaRef_t *);
};
struct CRestoreIntSlot3 {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual int vfunc2(CBaseEntity *pEnt, int map);
	virtual int vfunc3(int a, int b, int c, int d, int e);
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8();
	virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13();
	virtual void s14(); virtual void s15();
	virtual char vfunc16();
};
void CAI_NPCPatrolPathSaveRestoreOps::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore)
{
#define pRestore ((CRestore *)pRestore)
	SNPCTroikaRef_t *pPath = (SNPCTroikaRef_t *)fieldInfo->pField;
	CPatrolOwnerView *pOwner = (CPatrolOwnerView *)fieldInfo->pOwner;
	CRestoreIntSlot3 *pR = (CRestoreIntSlot3 *)pRestore;
	char *pFlag = (char *)pPath;
	*pFlag = pR->vfunc16();
	if (*pFlag) {
		int pBlock = sub_10307d30();
		*(int *)(pFlag + 4) = pBlock;
		if (!pR->vfunc3((int)"PatrolPath", pBlock, 0, g_106117c0, g_106117c4)) {
			pOwner->sub_1029f5d0(pPath);
			g_109f366c("Error restoring PatrolPath for NPC.\n");
		}
	}
#undef pRestore
}
// END FUNCTION

// FUNCTION: 0x1028cd10 size=0x6
extern void *g_105ce470;

void *sub_1028cd10(void)
{
    return &g_105ce470;
}
// END FUNCTION

// FUNCTION: 0x1028cd30 size=0x5
int * sub_1028cd70(void);
int * g_10924628 = ((int * (*)(int))sub_1028cd70)(0);
// END FUNCTION

// FUNCTION: 0x1028cd70 size=0x35f
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_105ce470[2];
extern char g_10599c80[];
extern char g_109f0384[];
extern char g_10924a5c[];
void sub_1000f4e8();
void sub_1000cb76();
void sub_100025f9();
void sub_100143c6();
void sub_1000d5d5();
void sub_1000dee5();
void sub_10013390();
void sub_100024dc();
void sub_10002671();
void sub_1000cdfb();
void sub_10010136();
void sub_1000f07e();
void sub_100020db();
void sub_100028dd();
void sub_10007f86();
void sub_10005a01();
void sub_100030bc();
void sub_1000bd2f();
void sub_1000ad99();
void sub_100092aa();
void sub_10008a08();
void sub_1001108b();
void sub_1000aa6a();
void sub_1001300c();
void sub_10014231();
void sub_100064ba();
void sub_10008d91();
void sub_10005902();
void sub_10011d1a();
void sub_1000329c();
void sub_1000cd01();
void sub_1000ae70();
void sub_10010e47();
void sub_10002239();
void sub_10002e3c();

#define F(t, o, n) { t, n, {o, 0}, 1, 2, 0, 0, 0, 0, 0, 0 }
#define K(t, o, n, e) { t, n, {o, 0}, 1, 6, e, 0, 0, 0, 0, 0 }
#define E(t, o, n, e) { t, n, {o, 0}, 1, 0xe, e, 0, 0, 0, 0, 0 }
#define O1(t, o, n) { t, n, {o, 0}, 1, 2, 0, 0, 0, (datamap_t *)g_10599c80, 0, 0 }
#define O2(t, o, n) { t, n, {o, 0}, 1, 2, 0, (ISaveRestoreOps *)g_109f0384, 0, 0, 0, 0 }
#define O3(t, o, n) { t, n, {o, 0}, 1, 2, 0, (ISaveRestoreOps *)g_10924a5c, 0, 0, 0, 0 }
#define I(t, n, e, f) { t, n, {0, 0}, 1, 8, e, 0, (void *)f, 0, 0, 0 }
#define OUT(n, e, o) { 10, n, {o, 0}, 1, 0x16, e, g_1055dc70 }

int *sub_1028cd70()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        F(4,0x6068,"m_knockbackType"), F(15,0x606c,"m_flLastMeleeStepbackTime"), F(15,0x6070,"m_flMeleeCanEnterTimer"),
        F(15,0x6074,"m_flMeleeMustLeaveTimer"), F(5,0x6078,"m_bInMelee"), F(15,0x607c,"m_flCanSeekCoverTimer"),
        F(5,0x6080,"m_bDisableAI"), F(15,0x6084,"m_flSeeUnknownCheatVisionTime"), F(12,0x6088,"m_hBestSeeUnknown"),
        F(12,0x608c,"m_hLastSeeUnknown"), F(14,0x6090,"m_vecLastSeeUnknownPos"), F(15,0x609c,"m_flSeeUnknownRunTimer"),
        F(15,0x60a0,"m_flSeeUnknownStartTimer"), F(4,0x60a4,"m_iSeeUnknownRepeatSightings"), F(4,0x60a8,"m_iEnemySightings"),
        F(12,0x60ac,"m_hFriendPlayer"),
        O1(9,0x60b0,"m_BestSound"), O1(9,0x60dc,"m_InvestigateSound"), O1(9,0x6108,"m_LastSoundDanger"),
        O1(9,0x6134,"m_LastSoundPhysicsDanger"), O1(9,0x6160,"m_LastSoundCombat"), O1(9,0x618c,"m_LastSoundBulletImpact"),
        O1(9,0x61b8,"m_LastSoundPlayer"), O1(9,0x61e4,"m_LastSoundWorld"), O1(9,0x6210,"m_LastSoundFlinch"),
        F(15,0x623c,"m_flNextInvestigateSoundTime"), F(12,0x6240,"m_hMoveTargetEnt"),
        F(15,0x6244,"m_flNextUpdateThink"), F(15,0x6248,"m_flNextNormalThink"), F(15,0x624c,"m_flNextMoveThink"),
        F(15,0x6250,"m_flNextAIThink"), F(15,0x6254,"m_flLastUpdateThink"), F(15,0x6258,"m_flLastNormalThink"),
        F(15,0x625c,"m_flLastMoveThink"), F(15,0x6260,"m_flLastAIThink"),
        F(1,0x6264,"m_flPlayerDist"), F(1,0x6268,"m_flEnemyDist"), F(1,0x626c,"m_flEnemyHeightDiff"),
        F(1,0x6270,"m_flEnemyLastKnownDist"), F(15,0x6274,"m_flMeleeHeightDiffTimer"), F(5,0x6278,"m_bInPlayerPVS"),
        F(5,0x6279,"m_bInPlayerLOS"),
        F(1,0x627c,"m_flLastInPlayerPVS"), F(1,0x6280,"m_flLastInPlayerLOS"), F(1,0x6284,"m_flNextPlayerLOS"),
        F(1,0x6288,"m_flNextCheckEnterPVSTime"), F(12,0x628c,"m_hClosestPlayer"), F(3,0x6290,"m_vecForward"),
        F(3,0x629c,"m_vecRight"), F(14,0x62a8,"m_vecInitialPosition"), F(3,0x62b4,"m_qaInitialAngles"),
        F(1,0x62c0,"m_flOccludedDelayNormal"), F(1,0x62c4,"m_flOccludedDelayCover"), F(1,0x62c8,"m_flOccludedDelay"),
        F(15,0x62cc,"m_flOccludedReportTimeE"), F(15,0x62d0,"m_flOccludedReportTimeT"), F(15,0x62d4,"m_flOccludedReportTimeW"),
        K(2,0x62d8,"m_sInterestingPlaceGroups","interesting_place_groups"), F(4,0x62dc,"m_iInterestingPlaceGroups"),
        K(2,0x62e0,"m_sHintGroups","hint_groups"), F(4,0x62e4,"m_iHintGroups"), F(5,0x62e8,"m_bInterestingPlaceArrived"),
        F(14,0x62f0,"m_vecInterestingPlace"), F(4,0x6304,"m_eInterestingPlaceMode"), F(4,0x6308,"m_iInterestingDeathActivity"),
        F(15,0x6318,"m_flNextCrosswalkUpdateTime"), F(15,0x631c,"m_flNextPedInteractTime"), F(1,0x6320,"m_flGoalTolerance"),
        F(1,0x6324,"m_flInsideInterruptDistanceSqr"), F(1,0x6328,"m_flOutsideInterruptDistanceSqr"),
        F(15,0x632c,"m_flInterruptTime"), F(1,0x6330,"m_flWaitFinishedDelta"), F(5,0x6334,"m_bWaitFinishedSet"),
        K(4,0x6338,"m_eInvestigateMode","investigate_mode"), K(4,0x633c,"m_eInvestigateModeCombat","investigate_mode_combat"),
        K(5,0x6340,"m_bFullInvestigate","full_investigate"), K(4,0x6344,"m_iBrightRoutePenalty","bright_route_penalty"),
        E(4,0x6348,"m_iPLInvestigateLevel","pl_investigate"), E(4,0x634c,"m_iPLCriminalFleeLevel","pl_criminal_flee"),
        E(4,0x6350,"m_iPLCriminalAttackLevel","pl_criminal_attack"), E(4,0x6354,"m_iPLSupernaturalFleeLevel","pl_supernatural_flee"),
        E(4,0x6358,"m_iPLSupernaturalAttackLevel","pl_supernatural_attack"),
        O2(10,0x635c,"m_iPLCriminalLevelWitnessed"), F(4,0x6368,"m_iPLSupernaturalLevelWitnessed"),
        F(4,0x636c,"m_iPLCriminalActProcessed"), F(4,0x6370,"m_iPLSupernaturalActProcessed"),
        F(14,0x6374,"m_vecPLSupernaturalLocation"), F(14,0x6380,"m_vecPLCriminalLocation"),
        F(12,0x638c,"m_hCriminalOffender"), F(12,0x6390,"m_hSupernaturalOffender"), F(5,0x6394,"m_bPLSupernaturalActFleeOnly"),
        F(15,0x6398,"m_flCriminalIgnoreTimer"), F(15,0x639c,"m_flSupernaturalIgnoreTimer"),
        F(15,0x63a0,"m_flNosferatuIgnoreTimer"), F(15,0x63a4,"m_flCriminalWitnessedTimer"),
        F(15,0x63a8,"m_flSupernaturalWitnessedTimer"), K(2,0x63ac,"m_sPlayerReaction","player_reaction"),
        K(4,0x63b0,"m_iNPCPerception","npc_perception"), K(1,0x63b4,"m_flSeekDistBase","vision"),
        F(1,0x63b8,"m_flSeekDistInspection"), K(1,0x63bc,"m_flHearingScalarBase","hearing"),
        F(1,0x63c0,"m_flHearingScalarInspection"), F(1,0x63c4,"m_flStealthVisionScalar"), F(1,0x63c8,"m_flStealthVisionCone"),
        F(1,0x63cc,"m_flStealthHearingDist"), F(15,0x63d0,"m_flNextListenTime"), F(15,0x63d4,"m_flNextInterestChangeTime"),
        K(5,0x63d8,"m_bInvincible","invincible"), K(5,0x63d9,"m_bUseInteresting","use_interesting"),
        F(5,0x63da,"m_bForceNPCCheck"), F(15,0x63dc,"m_flWeaponScareTime"), F(5,0x63e0,"m_fSavePositionWalk"),
        F(4,0x63e4,"m_eFaceAnim"), F(1,0x63e8,"m_flFaceYawDiff"), F(1,0x63ec,"m_flDesiredMoveYaw"),
        F(5,0x63f0,"m_bForceFrequentThink"), F(4,0x63f4,"m_eAlertLevel"), F(4,0x63f8,"m_iSubState"),
        F(5,0x63fc,"m_bGoToIdleState"), F(5,0x63fd,"m_bLeaningLeft"), F(15,0x6400,"m_flNextCoverLOSCheck"),
        F(4,0x6404,"m_iFailedCoverLOSChecks"), F(5,0x6408,"m_bForceCoverLOSCheck"), F(4,0x640c,"m_iPeekOutCount"),
        F(5,0x6410,"m_bAggressiveAnims"), F(4,0x6414,"m_iCowerAnimOffset"), F(15,0x6418,"m_flNextSeeSoundSourceTime"),
        F(15,0x641c,"m_flNextFleeSoundTime"),
        K(4,0x6420,"m_iPercentOccludedWait","percent_occluded_wait"), K(4,0x6424,"m_iPercentOccludedCover","percent_occluded_cover"),
        K(4,0x6428,"m_iPercentOccludedWalk","percent_occluded_walk"), K(4,0x642c,"m_iPercentOccludedFlank","percent_occluded_flank"),
        K(4,0x6430,"m_iPercentOccludedChase","percent_occluded_chase"),
        K(5,0x6434,"m_bAllowAlertLookaround","allow_alert_lookaround"), K(5,0x6435,"m_bStayEntrenched","stay_entrenched"),
        K(5,0x6436,"m_bAllowKickHintUse","allow_kick_hint_use"),
        F(15,0x6438,"m_flKickPhysicsPropSearchTimer"), F(12,0x643c,"m_hKickPhysicsProp"), F(12,0x6448,"m_hHintCoverObject"),
        F(4,0x644c,"m_eAlternateAI"), F(15,0x6450,"m_flAlternateAIExpireTimer"), F(4,0x6454,"m_actPreOpenDoor"),
        F(15,0x6458,"m_flIgnoreCollisionTimer"), F(3,0x645c,"m_vecHuntPatrolTarget"), F(3,0x6468,"m_vecHeldPosition"),
        F(15,0x6474,"m_flHuntExpireTimer"),
        K(2,0x6478,"m_sFollowerBoss","follower_boss"), K(2,0x6480,"m_sFollowerType","follower_type"),
        F(4,0x6490,"m_iBurstFireCount"), F(5,0x6494,"m_bReturnToInitialPos"), F(5,0x6495,"m_bForceDialogStart"),
        K(4,0x64bc,"m_nTimesTalked","times_talked"), K(2,0x64c4,"m_sDefaultCamera","default_camera"),
        F(5,0x64c0,"m_bIsTalking"), F(4,0x64c8,"m_CurrStance"), F(15,0x64cc,"m_flTalkTime"), F(1,0x6550,"m_flSpeechVol"),
        F(4,0x64d4,"m_nCurrDisposition"), F(1,0x64d8,"m_flMinBlink"), F(1,0x64dc,"m_flMaxBlink"),
        F(5,0x64e0,"m_bInDispositionFidget"), F(5,0x64e1,"m_bInStanceChange"), F(15,0x64e4,"m_flStanceTime"),
        { 7, "m_szDialogQue", {0x64ec, 0}, 0x60, 2, 0, 0, 0, 0, 0, 0 },
        K(2,0x6558,"m_sDefaultDisposition","default_disposition"), F(1,0x6570,"m_blinkTimer"),
        F(15,0x6574,"m_flLoudExpressionTime"), F(4,0x6578,"m_nEyeFidgetStep"), F(15,0x657c,"m_flEyeFidgetTime"),
        F(15,0x6580,"m_flEyeFidgetStepTime"), F(1,0x6584,"m_flMinEyeFidget"), F(1,0x6588,"m_flMaxEyeFidget"),
        O3(10,0x658c,"m_sppPatrolPath"), O3(10,0x6594,"m_sppPatrolPathHunt"),
        F(5,0x65a0,"m_bPatrolPathUseHint"), F(15,0x65a4,"m_fNextDodgeTimer"), F(15,0x65bc,"m_flNextBurnTime"),
        F(4,0x65c8,"m_iForcedSchedule"), F(4,0x65cc,"m_eForcedState"), F(3,0x65d0,"m_vecSavedAttackExtents"),
        K(15,0x65dc,"m_flTeleportMoveTimer","teleport_move_timer"), K(2,0x65e0,"m_sCombatStartActivity","combat_start_activity"),
        F(2,0x65ec,"m_sAttackCoordinatorName"), F(4,0x65f0,"m_iFakeReloadCount"), F(5,0x65f4,"m_bCameFromSpawner"),
        K(5,0x65f5,"m_bIgnoreDetectedAttack","ignore_detected_attack"), K(5,0x65f6,"m_bNoAlertState","no_alert_state"),
        K(5,0x65f7,"m_bNavIgnorePhysicsProps","nav_ignore_physics_props"),
        F(5,0x65f8,"m_bAllowCriminalSuspicion"), F(5,0x65f9,"m_bAllowTurningAnims"), F(5,0x65fa,"m_bForceMaintainActivity"),
        F(1,0x65fc,"m_flStandingOnHeadTimer"), F(15,0x6600,"m_flWeaponThroughWallTime"),
        F(15,0x6604,"m_flStealthVisionOverrideTime"), F(15,0x6608,"m_flCorpseConditionTimer"),
        K(5,0x6496,"m_bIsBossMonster","is_bossmonster"), F(5,0x6498,"m_bJumping"), F(3,0x649c,"m_vJumpOrigin"),
        F(3,0x64a8,"m_vJumpTarget"), F(1,0x64b4,"m_fJumpHeight"), F(1,0x64b8,"m_fJumpGravity"),
        F(3,0x6004,"m_KnockbackVelocity"), F(12,0x6010,"m_hKnockbackHitEntity"), F(15,0x6014,"m_fKnockbackWallHitFallTime"),
        F(15,0x6018,"m_fFinishingMoveBoneTrackLastTime"), F(3,0x601c,"m_vFinishingMoveBoneTrackLastPos"),
        F(4,0x6064,"m_iHitBuildupCount"),
        I(2,"InputWalkToNode","WalkToNode",sub_100025f9), I(2,"InputTweakParam","TweakParam",sub_100143c6),
        I(2,"InputSetupPatrolType","SetupPatrolType",sub_1000d5d5), I(2,"InputFollowPatrolPath","FollowPatrolPath",sub_1000dee5),
        I(0,"InputClearPatrolPath","ClearPatrolPath",sub_10013390), I(1,"InputStartPlayerDialog","StartPlayerDialog",sub_100024dc),
        I(0,"InputStartPlayerDialogRemote","StartPlayerDialogRemote",sub_10002671),
        I(1,"InputStartPlayerDialogUnforced","StartPlayerDialogUnforced",sub_1000cdfb),
        I(0,"InputFleeAndDie","FleeAndDie",sub_10010136), I(0,"InputFaint","Faint",sub_1000f07e),
        I(5,"InputDisableThink","DisableThink",sub_100020db), I(12,"InputTeleportToEntity","TeleportToEntity",sub_100028dd),
        I(4,"InputTakeDamage","TakeDamage",sub_10007f86), I(5,"InputMakeInvincible","MakeInvincible",sub_10005a01),
        I(5,"InputUseInteresting","UseInteresting",sub_100030bc), I(4,"InputSetInvestigateMode","SetInvestigateMode",sub_1000bd2f),
        I(4,"InputSetInvestigateModeCombat","SetInvestigateModeCombat",sub_1000ad99),
        I(1,"InputSetSpeechVolume","SetSpeechVolume",sub_100092aa), I(2,"InputPlayDialogFile","PlayDialogFile",sub_10008a08),
        I(5,"InputAllowAlertLookaround","AllowAlertLookaround",sub_1001108b),
        I(5,"InputStayEntrenched","StayEntrenched",sub_1000aa6a), I(5,"InputAllowKickHintUse","AllowKickHintUse",sub_1001300c),
        I(2,"InputSetScriptedDiscipline","SetScriptedDiscipline",sub_10014231),
        I(5,"InputSetBloodShieldDiscipline","SetBloodShieldDiscipline",sub_100064ba),
        I(2,"InputSetFollowerBoss","SetFollowerBoss",sub_10008d91), I(2,"InputSetFollowerType","SetFollowerType",sub_10005902),
        I(5,"InputSetFallToGround","SetFallToGround",sub_10011d1a), I(2,"InputChangeSchedule","ChangeSchedule",sub_1000329c),
        I(2,"InputSetDontFacePlayerInDialog","SetDontFacePlayerInDialog",sub_1000cd01),
        I(5,"InputSetBossMonster","SetBossMonster",sub_1000ae70), I(5,"InputAllowOpenDoors","AllowOpenDoors",sub_10010e47),
        I(1,"InputSetMovementMultiplier","SetMovementMultiplier",sub_10002239),
        I(2,"InputSetDefaultDialogCamera","SetDefaultDialogCamera",sub_10002e3c),
        OUT("m_OnDialogBegin", "OnDialogBegin", 0x5f44),
        OUT("m_OnDialogEnd", "OnDialogEnd", 0x5f5c),
        OUT("m_OnInterestingPlaceArrived", "OnInterestingPlaceArrived", 0x5f74),
        OUT("m_OnInterestingPlaceLeft", "OnInterestingPlaceLeft", 0x5f8c),
        OUT("m_OnUnknownVisionPlayer", "OnUnknownVisionPlayer", 0x5fa4),
        OUT("m_OnStateFleeing", "OnStateFleeing", 0x5fbc),
        OUT("m_OnIncapacitatedStart", "OnIncapacitatedStart", 0x5fd4),
        OUT("m_OnIncapacitatedEnd", "OnIncapacitatedEnd", 0x5fec),
        { 0, "CAI_BaseNPCTroikaNPCThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000f4e8 },
        { 0, "CAI_BaseNPCTroikaKnockbackTouch", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000cb76 },
    };
    g_105ce470[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105ce470[0] = (int)&dataDesc[1];
    return g_105ce470;
}
// END FUNCTION

// FUNCTION: 0x1028d1b0 size=0xa
#define PCD_INITIALIZERS
#include "CUnknown100eb490.h"
CUnknown100eb490 g_10924980;
// END FUNCTION

// FUNCTION: 0x1028d230 size=0x2e3
#include "CAI_BaseNPCTroika.h"
#include "COutputEvent.h"
extern void *vt_1049a25c[];
extern void *vt_1049a22c[];
extern void *vt_1049adf4[];
extern char g_10563cf8[];
extern char g_10587f04[];
int sub_102c6330(int);
struct Tmp8 { int a; int b; int sub_102c62f0(int x); };
struct V1028b160 { void sub_1028b160(); };
struct V101b9880 { void sub_101b9880(); };
struct V101c2690 { void sub_101c2690(); };
struct V102b9780 { void sub_102b9780(); };
struct CSecCoder
{
	int m_n0;
	int m_n;
	CSecCoder() { m_n = 0; }
	void sub_102c62c0(Tmp8 *p);
};
struct CSecView
{
	void *vptr;
	CSecCoder m_coder;
	CSecView()
	{
		vptr = vt_1049adf4;
		Tmp8 t;
		t.b = t.sub_102c62f0(sub_102c6330(0));
		m_coder.sub_102c62c0(&t);
	}
};

#define D(off) (*(int *)((char *)this + (off)))
#define B(off) (*(char *)((char *)this + (off)))
#define EV(off) ((COutputEvent *)((char *)this + (off)))->COutputEvent::COutputEvent()
#define H(off) ((CBaseHandle *)((char *)this + (off)))->CBaseHandle::CBaseHandle()

CAI_BaseNPCTroika *CAI_BaseNPCTroika::sub_1028d230()
{
	sub_1027c300();
	EV(0x5f44); EV(0x5f5c); EV(0x5f74); EV(0x5f8c); EV(0x5fa4); EV(0x5fbc); EV(0x5fd4); EV(0x5fec);
	H(0x6010);
	((V1028b160 *)((char *)this + 0x6028))->sub_1028b160();
	H(0x6088);
	H(0x608c);
	H(0x60ac);
	H(0x60b0);
	H(0x60dc);
	H(0x6108);
	H(0x6134);
	H(0x6160);
	H(0x618c);
	H(0x61b8);
	H(0x61e4);
	H(0x6210);
	H(0x6240);
	H(0x628c);
	((CSecView *)((char *)this + 0x635c))->CSecView::CSecView();
	H(0x638c);
	H(0x6390);
	H(0x643c);
	H(0x6448);
	H(0x647c);
	H(0x6554);
	D(0x65a8) = 0;
	D(0x65ac) = 0;
	D(0x65b0) = 0;
	D(0x65b4) = 0;
	D(0x65b8) = 0;
	H(0x65c0);
	((V101c2690 *)((char *)this + 0x660c))->sub_101c2690();
	((V102b9780 *)((char *)this + 0x6659))->sub_102b9780();
	D(0) = (int)vt_1049a25c;
	D(0x19b0) = (int)vt_1049a22c;
	B(0x6658) = 0;
	B(0x1b4d) = 0;
	D(0x4c) |= 0x40;
	D(0x98) = (int)this;
	D(0x1a98) = 0;
	D(0x6570) = 0;
	D(0x64d8) = 0x40200000;
	D(0x64dc) = 0x40a00000;
	D(0x6554) = -1;
	D(0x6550) = 0x3f800000;
	D(0x657c) = 0;
	D(0x5b94) = 0;
	D(0x6578) = 0;
	B(0x62e9) = 0;
	D(0x630c) = 0;
	D(0x6310) = -1;
	D(0x6314) = -1;
	D(0x6558) = (int)(g_10563cf8[0] ? g_10563cf8 : 0);
	D(0x64c4) = (int)(g_10587f04[0] ? g_10587f04 : 0);
	B(0x64e0) = 0;
	D(0x64c8) = 0;
	D(0x64e4) = *(int *)&gpGlobals->curtime;
	((V101b9880 *)((char *)this + 0x60b0))->sub_101b9880();
	((V101b9880 *)((char *)this + 0x60dc))->sub_101b9880();
	((V101b9880 *)((char *)this + 0x6108))->sub_101b9880();
	((V101b9880 *)((char *)this + 0x6134))->sub_101b9880();
	((V101b9880 *)((char *)this + 0x6160))->sub_101b9880();
	((V101b9880 *)((char *)this + 0x618c))->sub_101b9880();
	((V101b9880 *)((char *)this + 0x61b8))->sub_101b9880();
	((V101b9880 *)((char *)this + 0x61e4))->sub_101b9880();
	((V101b9880 *)((char *)this + 0x6210))->sub_101b9880();
	B(0x63f0) = 0;
	D(0x1568) = 0;
	D(0x156c) = 0;
	B(0x6497) = 0;
	B(0x6496) = 0;
	B(0x1590) = 0;
	B(0x65f5) = 0;
	B(0x65f6) = 0;
	B(0x65f7) = 0;
	B(0x65f8) = 0;
	B(0x65f9) = 0;
	B(0x65fa) = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1028d5e0 size=0x1e
#include "CAI_BaseNPCTroika.h"

void sub_100123af();
void sub_100aa7b0(void *p);

CAI_BaseNPC *CAI_BaseNPCTroika::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1028d610 size=0x9a
#include "CAI_BaseNPCTroika.h"
#include "UtlMem.h"
extern void *vt_1049a25c;
extern void *vt_1049a22c;
void __fastcall sub_100123a0(CAI_BaseNPCTroika *p);
void __fastcall sub_102c6bd0(UtlMem *p);
void __fastcall sub_10015708(void *p);
void __fastcall sub_1000c9cd(CAI_BaseNPCTroika *p);
void __fastcall sub_1028d610(CAI_BaseNPCTroika *p)
{
    *(void **)p = &vt_1049a25c;
    *(void **)((char *)p + 0x19b0) = &vt_1049a22c;
    sub_100123a0(p);
    UtlMem *m = (UtlMem *)((char *)p + 0x65a8);
    sub_102c6bd0(m);
    m->sub_102c6bf0();
    *(int **)((char *)m + 0x10) = m->m_pMemory;
    m->sub_102c6bf0();
    sub_10015708((char *)p + 0x5fec);
    sub_10015708((char *)p + 0x5fd4);
    sub_10015708((char *)p + 0x5fbc);
    sub_10015708((char *)p + 0x5fa4);
    sub_10015708((char *)p + 0x5f8c);
    sub_10015708((char *)p + 0x5f74);
    sub_10015708((char *)p + 0x5f5c);
    sub_10015708((char *)p + 0x5f44);
    sub_1000c9cd(p);
}
// END FUNCTION

// FUNCTION: 0x1028d6e0 size=0x66
#include "CAI_BaseNPCTroika.h"

void CAI_BaseNPCTroika::vfunc180()
{
    sub_10295ab0(5.0f);
    if (*(int *)((char *)this + 0x65e8) != 0)
        vfunc601((int)this);
    sub_102b53d0(0, "Leaving interesting place (UpdateOnRemove)");
    if (sub_102c1170())
        sub_102c0bb0();
    sub_1029f5d0((char *)this + 0x658c);
    sub_1029f5d0((char *)this + 0x6594);
    sub_1027ca30();
}
// END FUNCTION

// FUNCTION: 0x1028d770 size=0x41
#include "engineserver.h"
using namespace EngineGlobals;

void sub_102dd740(const char *pszName);
void sub_102ca030();
void sub_102bf050();
void sub_1025d880();

void sub_1028d770()
{
    sub_102dd740("InterestingPlaceTypeList");
    sub_102ca030();
    sub_102bf050();
    sub_1025d880();
    engine->vfunc17("Dialog_Domination_Victim_Emitter", 0);
    engine->vfunc17("Dialog_Dementation_Victim_Emitter", 0);
}
// END FUNCTION

// FUNCTION: 0x1028d7e0 size=0x1
void sub_1028d7e0()
{
}
// END FUNCTION

// FUNCTION: 0x1028d800 size=0xa
namespace lifted {
int sub_100027ed();
int sub_100107c1();
}
int sub_1028d800()
{
    lifted::sub_100027ed();
    return lifted::sub_100107c1();
}
// END FUNCTION

// FUNCTION: 0x1028d820 size=0x2f
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

#define P10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
    virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CUnk1028d820Obj
{
    P10(a) P10(b) P10(c) P10(d) P10(e) P10(f) P10(g) P10(h) P10(i) P10(j) P10(k) P10(l) P10(m)
    P10(n) P10(o) P10(p) P10(q) P10(r) P10(s) P10(t) P10(u) P10(v) P10(w) P10(x) P10(y) P10(z)
    P10(A) P10(B) P10(C) P10(D) P10(E) P10(F) P10(G) P10(H) P10(I) P10(J) P10(K) P10(L) P10(M)
    P10(N) P10(O) P10(P) P10(Q) P10(R) P10(S) P10(T) P10(U) P10(V) P10(W) P10(X) P10(Y) P10(Z)
    P10(aa) P10(ab) P10(ac) P10(ad) P10(ae) P10(af)
    virtual void vfunc580();
    virtual void vfunc581();
    virtual void vfunc582();
    virtual void vfunc583(int a);
};

struct CUnk1028d820Ent
{
    char m_pad0000[0x98];
    CUnk1028d820Obj *m_pObj;
};

extern CGlobalEntityList g_106eb5d8;

// TARGET: sub_1028d820
void sub_1028d820(int a)
{
    CBaseEntity *pEnt = 0;
    while (true)
    {
        pEnt = g_106eb5d8.sub_100f8370(pEnt, 0x40);
        if (pEnt == 0)
        {
            break;
        }
        ((CUnk1028d820Ent *)pEnt)->m_pObj->vfunc583(a);
    }
}
// END FUNCTION

// FUNCTION: 0x1028d860 size=0x50
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "Vector.h"
#define V100(p) CAI_NPC_V10(p##0) CAI_NPC_V10(p##1) CAI_NPC_V10(p##2) CAI_NPC_V10(p##3) CAI_NPC_V10(p##4) CAI_NPC_V10(p##5) CAI_NPC_V10(p##6) CAI_NPC_V10(p##7) CAI_NPC_V10(p##8) CAI_NPC_V10(p##9)
struct CTroikaSlot614 {
	V100(0) V100(1) V100(2) V100(3) V100(4) V100(5)
	CAI_NPC_V10(60) CAI_NPC_V(610) CAI_NPC_V(611) CAI_NPC_V(612) CAI_NPC_V(613)
	virtual void vfunc614();
};
void CAI_BaseNPCTroika::sub_1028d860(const Vector *pPos)
{
	const Vector *pOrigin = (const Vector *)vfunc217();
	float dx = pPos->x - pOrigin->x;
	float dy = pPos->y - pOrigin->y;
	float dz = pPos->z - pOrigin->z;
	if (dx * dx + dy * dy + dz * dz <= 4194304.0f)
		((CTroikaSlot614 *)this)->vfunc614();
}
// END FUNCTION

// FUNCTION: 0x1028d8d0 size=0x2f
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

#define P10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
    virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CUnk1028d8d0Obj
{
    P10(a) P10(b) P10(c) P10(d) P10(e) P10(f) P10(g) P10(h) P10(i) P10(j) P10(k) P10(l) P10(m)
    P10(n) P10(o) P10(p) P10(q) P10(r) P10(s) P10(t) P10(u) P10(v) P10(w) P10(x) P10(y) P10(z)
    P10(A) P10(B) P10(C) P10(D) P10(E) P10(F) P10(G) P10(H) P10(I) P10(J) P10(K) P10(L) P10(M)
    P10(N) P10(O) P10(P) P10(Q) P10(R) P10(S) P10(T) P10(U) P10(V) P10(W) P10(X) P10(Y) P10(Z)
    P10(aa) P10(ab) P10(ac) P10(ad) P10(ae) P10(af)
    virtual void vfunc580();
    virtual void vfunc581();
    virtual void vfunc582();
    virtual void vfunc583(int a);
    virtual void vfunc584(int a);
};

struct CUnk1028d8d0Ent
{
    char m_pad0000[0x98];
    CUnk1028d8d0Obj *m_pObj;
};

extern CGlobalEntityList g_106eb5d8;

// TARGET: sub_1028d8d0
void sub_1028d8d0(int a)
{
    CBaseEntity *pEnt = 0;
    while (true)
    {
        pEnt = g_106eb5d8.sub_100f8370(pEnt, 0x40);
        if (pEnt == 0)
        {
            break;
        }
        ((CUnk1028d8d0Ent *)pEnt)->m_pObj->vfunc584(a);
    }
}
// END FUNCTION

// FUNCTION: 0x1028d910 size=0x58
#include "CAI_BaseNPCTroika.h"
#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct STroikaSlots {
	V100(0) V100(1) V100(2) V100(3) V100(4) V100(5)
	V10(60) V(610) V(611) V(612) V(613)
	virtual void Slot614();
};
struct STroikaTimes {
	char pad0[0x178];
	float m_flTime178;
	char pad1[0x6254 - 0x17c];
	float m_flTime6254;
	float m_flTime6258;
	float m_flTime625c;
	float m_flTime6260;
};
void CAI_BaseNPCTroika::vfunc584(int unused)
{
	((STroikaSlots *)this)->Slot614();
	STroikaTimes *p = (STroikaTimes *)this;
	p->m_flTime178 = gpGlobals->curtime;
	p->m_flTime6254 = gpGlobals->curtime;
	p->m_flTime6258 = gpGlobals->curtime;
	p->m_flTime625c = gpGlobals->curtime;
	p->m_flTime6260 = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1028d990 size=0x38a
#include "CAI_BaseNPCTroika.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CDevFlagObj.h"
#include "globalvars.h"
#include "Tier1.h"
extern CDevFlagObj *g_10924a6c;
extern char g_10920534;
extern char g_10920535;
extern "C" int sprintf(char *, const char *, ...);

// TARGET: CAI_BaseNPCTroika::sub_10004011
void CAI_BaseNPCTroika::sub_10004011(const char *pszName, int nWidth, char *pOut, int nMax)
{
	if (pOut == 0 || nMax <= 0)
		return;
	char empty = g_106b8540[0];
	if (pszName == 0)
		pszName = &empty;
	if (nWidth < 0)
		nWidth = 0;
	char conds[0x800] = { g_106b8540[0] };
	if (!g_10924a6c->vfunc1() && g_10924a6c->m_n2c > 0) {
		char *p = conds + sprintf(conds, "CONDS:");
		for (int c = 0; c < vfunc409(); c++) {
			if (sub_10014df8(c))
				p += sprintf(p, " %s", vfunc408(c));
		}
		sprintf(p, "\n");
	}
	char tmp[40] = "PIS__PF_T_L__TTEPLM________ICCCC";
	char out1[40];
	char out2[40];
	char nav[40];
	char aux[40];
	int i;
	if (!g_10920534 || g_10920535) {
		for (i = 0; i < 32; i++) {
			if (m_flags5d8c & (1 << i))
				out1[i] = tmp[i];
			else
				out1[i] = '.';
		}
		out1[i] = 0;
	}
	char tmp2[40] = "RSCPFCNFIPCDHVAEFSBDSLIAMFDPOIO_";
	if (!g_10920534 || g_10920535) {
		for (i = 0; i < 30; i++) {
			if ((m_flags14b8 & (1 << i)) == (1 << i))
				out2[i] = tmp2[i];
			else
				out2[i] = '.';
		}
		out2[i] = 0;
	}
	if (!g_10920534 || g_10920535)
		aux[0] = 0;
	if (!g_10920534 || g_10920535) {
		if (sub_1027d990() == 3 || sub_1027d990() == 1)
			sprintf(nav, "NAV %s %s", sub_1027d990() == 3 ? "CLIMB" : "     ", sub_1027d990() == 1 ? "JUMP" : "    ");
		else
			nav[0] = 0;
	}
	if (g_10920534) {
		if (g_10920535) {
			g_109f388c(pOut, nMax, "%6.2f : %*s %s\n%s%s %s%s %s\n\n", (double)gpGlobals->curtime, nWidth, g_106b8540, pszName, conds, out1, out2, aux, nav);
			return;
		}
		g_109f388c(pOut, nMax, "%6.2f : %*s %s\n", (double)gpGlobals->curtime, nWidth, g_106b8540, pszName);
		return;
	}
	g_109f388c(pOut, nMax, "%-20s  %6.2f : %*s %s\n%s%s %s%s %s\n\n", sub_1000b5cd(), (double)gpGlobals->curtime, nWidth, g_106b8540, pszName, conds, out1, out2, aux, nav);
}
// END FUNCTION

// FUNCTION: 0x1028de10 size=0x5e
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027ef20.h"
extern char g_10920534;
__declspec(dllimport) void DevMsg(const char *pszFormat, ...);
struct CTroikaMsgView : CAI_BaseNPCTroika
{
	void sub_1028d990(int a, int b, char *pBuf, int nSize);
};

// TARGET: CAI_BaseNPCTroika::vfunc18
void CAI_BaseNPCTroika::vfunc18(int a, int b)
{
	char szBuf[512];
	((CTroikaMsgView *)this)->sub_1028d990(a, b, szBuf, sizeof(szBuf));
	if (g_10920534)
		((CUnknown1027ef20 *)this)->sub_1027ef20(szBuf);
	else
		DevMsg(szBuf);
}
// END FUNCTION

// FUNCTION: 0x1028de90 size=0x7d
#include "CAI_BaseNPCTroika.h"
extern char g_10920534;
extern __declspec(dllimport) void DevMsg(const char *fmt, ...);
extern "C" __declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
void sub_10013304(CAI_BaseNPCTroika *pNpc, const char *pszText);
void CAI_BaseNPCTroika::vfunc17(const char *pszFormat, int arg)
{
	char szCopy[512];
	char szText[512];
	sub_10004011(pszFormat, arg, szText, 512);
	if (g_10920534) {
		Q_strncpy(szCopy, pszFormat, 512);
		sub_10013304(this, szCopy);
	} else {
		DevMsg(szText);
	}
}
// END FUNCTION

// FUNCTION: 0x1028df30 size=0x59
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027ef20.h"
extern char g_10920534;
__declspec(dllimport) void DevMsg(const char *fmt, ...);
extern "C" __declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);

void CAI_BaseNPCTroika::vfunc20(const char *pszMessage)
{
	char szBuf[512];
	if (pszMessage)
	{
		if (g_10920534)
		{
			Q_strncpy(szBuf, pszMessage, 512);
			((CUnknown1027ef20 *)this)->sub_1027ef20(szBuf);
		}
		else
			DevMsg(pszMessage);
	}
}
// END FUNCTION

// FUNCTION: 0x1028dfb0 size=0x58
#include "CAI_BaseNPCTroika.h"
extern char g_10920534;
extern "C" __declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);
__declspec(dllimport) void DevMsg(const char *fmt, ...);
void sub_1027ee20(void *pNpc, char *msg);
void CAI_BaseNPCTroika::vfunc19(const char *pszMsg)
{
	if (pszMsg) {
		if (g_10920534) {
			char buf[512];
			Q_strncpy(buf, pszMsg, 512);
			sub_1027ee20(this, buf);
			return;
		}
		DevMsg(pszMsg);
	}
}
// END FUNCTION

// FUNCTION: 0x1028e030 size=0x14
struct CUnknown1028e030 {
    void *sub_100952d0(int a);
    void sub_1028e090(void *p);
    void sub_1028e030();
};
void CUnknown1028e030::sub_1028e030()
{
    sub_1028e090(sub_100952d0(-1));
}
// END FUNCTION

// FUNCTION: 0x1028e060 size=0x1f
#include "vampire.h"
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::sub_1028e060
void CAI_BaseNPC::sub_1028e060()
{
    CAI_BaseNPC *pObj = (CAI_BaseNPC *)sub_10007e19();
    if (pObj) {
        sub_1028e090(pObj->sub_100952d0(-1));
    }
}
// END FUNCTION

// FUNCTION: 0x1028e090 size=0x1ff
#include "CBaseAnimating.h"
#include "matrix3x4_t.h"
#include "QAngle.h"
#include "Vector.h"
#include "CEntityVSlots.h"

void __cdecl sub_10137ed0(const matrix3x4_t &m, QAngle &angles);
void __cdecl sub_10138720(int *pMatrix, int nCol, int *pOut);
void __cdecl sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
void __cdecl sub_10142e90(const Vector *pStart, const Vector *pEnd, int r, int g, int b, unsigned char a, float flDuration);

// TARGET: CBaseAnimating::sub_1028e090
void CBaseAnimating::sub_1028e090(void *pStudioHdr)
{
	if (!pStudioHdr)
		return;

	int nCount = *(int *)((char *)pStudioHdr + 0xf0);
	for (int i = 0; i < nCount; i++)
	{
		matrix3x4_t mat;
		((CEntityVSlots *)this)->slot256(i, (float *)&mat);

		QAngle angles;
		sub_10137ed0(mat, angles);

		Vector vecOrigin;
		sub_10138720((int *)&mat, 3, (int *)&vecOrigin);

		Vector vecForward, vecRight, vecUp;
		sub_10139610(&angles, &vecForward, &vecRight, &vecUp);

		vecForward = vecOrigin + vecForward * 16.0f;
		vecRight = vecOrigin + vecRight * 16.0f;
		vecUp = vecOrigin + vecUp * 16.0f;

		sub_10142e90(&vecOrigin, &vecForward, 0xff, 0x40, 0x40, 1, 0.2f);
		sub_10142e90(&vecOrigin, &vecRight, 0x40, 0xff, 0x40, 1, 0.2f);
		sub_10142e90(&vecOrigin, &vecUp, 0x40, 0x40, 0xff, 1, 0.2f);
	}
}
// END FUNCTION

// FUNCTION: 0x1028e310 size=0x31
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
extern char g_106b8540[];
void CAI_BaseNPCTroika::vfunc113()
{
	sub_100a0bc0();
	if (((CEntityVSlots *)this)->slot138()) {
		const char *psz = m_pszDisposition6558;
		if (!psz)
			psz = g_106b8540;
		sub_102c0f70(psz, 1);
	}
}
// END FUNCTION

// FUNCTION: 0x1028e360 size=0xd7
#include "CAI_BaseNPCTroika.h"
struct EntInfo { CBaseEntity *ent; int serial; int pad; };
extern char *g_10566458;
extern const float g_1044f02c;
typedef float *(__fastcall *GetAbsOriginFn)(CBaseEntity *);

static inline CBaseEntity *GetEnt(unsigned int h)
{
    if (h != 0xffffffff) {
        EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
        if (e->serial == (h >> 13))
            return e->ent;
    }
    return 0;
}

bool CAI_BaseNPCTroika::sub_1028e360()
{
    if (GetEnt(m_h6088)) {
        if (m_f6084 == -1.0f) {
            float now = gpGlobals->curtime;
            m_f6084 = now + g_1044f02c;
        } else if (gpGlobals->curtime >= m_f6084) {
            *(volatile unsigned int *)&m_h6088 = 0xffffffff;
            CBaseEntity *pEnt = GetEnt(*(volatile unsigned int *)&m_h608c);
            float *v = ((GetAbsOriginFn)(*(void ***)pEnt)[217])(pEnt);
            m_v6090[0] = v[0];
            m_v6090[1] = v[1];
            m_v6090[2] = v[2];
            return true;
        }
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1028e480 size=0x1f5
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CAI_Navigator.h"
#include "CUnknown102ee1a0.h"
#include "CUnknown102f2fc0.h"
#include "CUnknown102ee120.h"
#include <math.h>

extern Vector g_1070d1b0;

static inline float DotProduct2D(const Vector &a, const Vector &b)
{
	return a.x * b.x + b.y * a.y;
}

void CAI_BaseNPC::sub_1028e480(CBaseEntity *pEnt)
{
	if (((CAI_Navigator *)Owned5d34())->m_i18 == 3 || ((CAI_Navigator *)Owned5d34())->m_i18 == 1)
		return;

	if (((CAI_Navigator *)Owned5d34())->sub_102ee620() != 7)
		return;

	if (pEnt != ((CAI_Navigator *)Owned5d34())->sub_102ee160())
	{
		((CAI_Navigator *)Owned5d34())->sub_102ed310(pEnt, &g_1070d1b0);
		return;
	}

	Vector vecVel = *(Vector *)pEnt->m_vel3d4;
	Vector vecDir = *(Vector *)vfunc217() - *((CEntityVSlots *)pEnt)->slot217();
	vecDir.z = 0;
	VectorNormalize(vecDir);

	if (DotProduct2D(vecDir, vecVel) > 20.0f)
	{
		Vector vecOrigin = *((CEntityVSlots *)pEnt)->slot217();
		float f = ((CUnknown102ee1a0 *)(CAI_Navigator *)Owned5d34())->sub_102ee1a0();
		float g = ((CUnknown102f2fc0 *)(CAI_Navigator *)Owned5d34())->sub_102f2fc0();
		vfunc563(pEnt, &vecOrigin, &f, &g);

		if (VectorLength(*(Vector *)((CAI_Navigator *)Owned5d34())->sub_102ee140() - vecOrigin) > 80.0f ||
			fabs(g - ((CUnknown102f2fc0 *)(CAI_Navigator *)Owned5d34())->sub_102f2fc0()) > 12.0)
		{
			((CUnknown102ee120 *)(CAI_Navigator *)Owned5d34())->sub_102ee1c0(*(int *)&f);
			((CUnknown102ee120 *)(CAI_Navigator *)Owned5d34())->sub_102f2fe0(*(int *)&g);
			((CAI_Navigator *)Owned5d34())->sub_102ee200();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1028e700 size=0x63
#include "CAI_BaseNPC.h"
#include "globalvars.h"

struct S1028e700View {
	char m_pad[0x62c8];
	float m_fl62c8;
};

void CAI_BaseNPC::sub_1028e700(int condition, float *pTime)
{
	if (sub_10269aa0(condition)) {
		if (*pTime == 0.0f)
			*pTime = ((S1028e700View *)this)->m_fl62c8 + gpGlobals->curtime;
		if (gpGlobals->curtime < *pTime)
			sub_10269b50(condition);
	} else {
		*pTime = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1028e790 size=0x7e
#include "CAI_BaseNPC.h"
#include "CUnknown102dc2c0.h"

struct CAI_BaseNPCView
{
	char m_pad0000[0x5ce4];
	CUnknown102dc2c0Handle m_hFocus;
	char m_pad5ce8[0x62cc - 0x5ce8];
	int m_Pos48[1];
	int m_Pos49[1];
};

// TARGET: CAI_BaseNPC::sub_1028e790
void CAI_BaseNPC::sub_1028e790()
{
	CAI_BaseNPCView *v = (CAI_BaseNPCView *)this;
	if (vfunc167())
	{
		sub_1028e700(0x48, v->m_Pos48);
		if (!sub_10269aa0(0x48))
			sub_10270180((void *)vfunc167(), 0);
	}
	if (v->m_hFocus.Get())
		sub_1028e700(0x49, v->m_Pos49);
}
// END FUNCTION

// FUNCTION: 0x1028e830 size=0x2f
// TARGET: sub_1028e830
extern float g_104454c4;
extern float *g_1070b228;

struct CUnknown1028e830
{
    char m_pad0000[0x62c8];
    float m_f62c8;
    float sub_1028e830(float x);
};

float CUnknown1028e830::sub_1028e830(float x)
{
    if (x == g_104454c4)
    {
        return g_104454c4;
    }
    return m_f62c8 + g_1070b228[3] - x;
}
// END FUNCTION

// FUNCTION: 0x1028e870 size=0xd
namespace lifted {
int __stdcall sub_1000a632(int);
}
struct CUnknown1028e870 { int sub_1028e870(); };
int CUnknown1028e870::sub_1028e870()
{
    return lifted::sub_1000a632(*(int *)((char *)this + 0x62cc));
}
// END FUNCTION

// FUNCTION: 0x1028e890 size=0xd
namespace lifted {
int __stdcall sub_1000a632(int);
}
struct CUnknown1028e890 { int sub_1028e890(); };
int CUnknown1028e890::sub_1028e890()
{
    return lifted::sub_1000a632(*(int *)((char *)this + 0x62d0));
}
// END FUNCTION

// FUNCTION: 0x1028e8b0 size=0x6a
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::sub_1028e8b0
void CAI_BaseNPCTroika::sub_1028e8b0(CBaseEntity *pEnt, int a)
{
	if (pEnt == 0)
		return;
	if (vfunc167() != 0)
	{
		if ((int)pEnt == vfunc167())
		{
			sub_1028e940(a);
			return;
		}
		CAI_BaseNPC *pOwner = *(CAI_BaseNPC **)((char *)pEnt + 0x98);
		if (pOwner == 0)
			return;
		if (pOwner->vfunc167() != vfunc167())
			return;
	}
	sub_1028e940(a);
}
// END FUNCTION

// FUNCTION: 0x1028e940 size=0x2e
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPCTroika_View6604
{
	char m_pad[0x6604];
	float m_flNextTime;	// 0x6604

	float NextTime() const { return m_flNextTime; }
};

// TARGET: CAI_BaseNPCTroika::sub_1028e940
void CAI_BaseNPCTroika::sub_1028e940(float flDelay)
{
	CAI_BaseNPCTroika_View6604 *v = (CAI_BaseNPCTroika_View6604 *)this;
	float t = flDelay + gpGlobals->curtime;
	if (v->NextTime() > t)
		v->m_flNextTime = v->NextTime() + 0.0f;
	else
		v->m_flNextTime = t;
}
// END FUNCTION

// FUNCTION: 0x1028e980 size=0xb0
#include "CAI_BaseNPC.h"
#include "CAI_Navigator.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"

#define NAV (*(CAI_Navigator **)((char *)this + 0x5d34))

// TARGET: CAI_BaseNPC::sub_1028e980
void CAI_BaseNPC::sub_1028e980(CBaseEntity *pEnt)
{
	CEntityVSlots *pTarget = (CEntityVSlots *)pEnt;
	if (pTarget && NAV->m_i18 != 3 && NAV->m_i18 != 1 && NAV->sub_102ee620())
	{
		CAI_Navigator *pNav = NAV;
		if ((*pNav->sub_102ee140() - *pTarget->slot220()).Length() > 80.0f)
		{
			pNav = NAV;
			pNav->sub_102ee220(pTarget->slot220());
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1028ea60 size=0x9a
#include "CAI_BaseNPCTroika.h"

unsigned int sub_10009408(int);

struct CRec6360
{
	CRec6360() {}
	CRec6360(unsigned int v) { m_hash = (((v & 0x68d8635) ^ 0xae8746f) + 0xffa91d8 & 0x197279ca) ^ v ^ 0xa641cacd; }
	CRec6360 &operator=(const CRec6360 &o) { m_hash = o.m_hash; m_b1 = o.m_b1; m_b0 = o.m_b0; return *this; }
	char m_b0;
	char m_b1;
	unsigned int m_hash;
};

struct CTroikaRec6360View
{
	char m_pad0000[0x6360];
	CRec6360 m_rec;
	char m_pad6368[0x6380 - 0x6368];
	Vector m_vecPos;
	EHANDLE m_hEnt;
};

void CAI_BaseNPCTroika::sub_1028ea60(int seed, const float *pos, void *pEnt)
{
	CTroikaRec6360View *p = (CTroikaRec6360View *)this;
	p->m_rec = CRec6360(sub_10009408(seed));
	p->m_vecPos.x = pos[0];
	p->m_vecPos.y = pos[1];
	p->m_vecPos.z = pos[2];
	if (pEnt)
		p->m_hEnt = (CBaseEntity *)pEnt;
	else
		p->m_hEnt = (CBaseEntity *)0;
}
// END FUNCTION

// FUNCTION: 0x1028eb30 size=0x66
struct Vec3 { int x, y, z; };
struct HandleObj {
	virtual void vf0();
	virtual int* vf1();
};
struct Holder {
	char pad0[0x6368];
	int f6368;
	char pad1[0x6374 - 0x636c];
	int f6374, f6378, f637c;
	char pad2[0x6390 - 0x6380];
	int f6390;
	char f6394;
	void sub_1028eb30(int a, Vec3* v, HandleObj* h, char c);
};

// TARGET: Holder::sub_1028eb30
void Holder::sub_1028eb30(int a, Vec3* v, HandleObj* h, char c)
{
	f6368 = a;
	f6374 = v->x;
	f6378 = v->y;
	f637c = v->z;
	if (h) {
		f6390 = *h->vf1();
		f6394 = c;
		return;
	}
	f6390 = -1;
	f6394 = c;
}
// END FUNCTION

// FUNCTION: 0x1028ebc0 size=0x2a2
#include "CTraceFilterNoCharacterCollide.h"
#include "Vector.h"
#include "CEntityVSlots.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterFVisible.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "DebugOverlay.h"

void __cdecl sub_10143d80(const Vector &pos, float flSize, int r, int g, int b, int a, float flWidth);
void __cdecl sub_10146570(const Vector *pStart, const Vector *pEnd, int r, int g, int b, int a, float flWidth);

class CUnknown109241ac
{
public:
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};

extern CUnknown109241ac *g_109241ac;

struct CUnknown1028ebc0
{
	char sub_103268e0(const Vector *pVec, int a);
	bool sub_1028ebc0(void *pRecord);

	char m_pad0000[0x1574];
	int m_n1574;
	char m_pad1578[0x63b8 - 0x1578];
	float m_f63b8;
};

bool CUnknown1028ebc0::sub_1028ebc0(void *pRecord)
{
	Vector vecRec = *(Vector *)( (char *)pRecord + 8 );
	Vector vecEye;
	( (CEntityVSlots *)this )->slot193( &vecEye );

	if ( sub_103268e0( &vecRec, m_n1574 ) )
	{
		float dx = vecEye.x - vecRec.x;
		float dy = vecEye.y - vecRec.y;
		float dz = vecEye.z - vecRec.z;
		float fDistSq = dx * dx + dy * dy + dz * dz;
		if ( fDistSq <= m_f63b8 * m_f63b8 )
		{
			CTraceFilterFVisible filter( this, 0 );
			Ray_t ray;
			ray.Init( vecEye, vecRec );
			CGameTrace trace;
			g_1070b254->vfunc4( &ray, 0x2804091, (CTraceFilterNoCharacterCollide *)&filter, &trace );

			if ( !g_10738964->vfunc1() && g_10738964->m_n2c )
				sub_10146570( (const Vector *)&trace, (const Vector *)trace.m_endpos, 0xff, 0, 0, 1, -1.0f );

			if ( !g_109241ac->vfunc1() && g_109241ac->m_n2c )
			{
				sub_10142e90( &vecEye, (const Vector *)trace.m_endpos, 0x40, 0xff, 0x40, 1, 0.2f );
				if ( trace.m_fraction == 1.0 )
					sub_10143d80( *(const Vector *)trace.m_endpos, 5.0f, 0x40, 0xff, 0x40, 1, 0.2f );
				else
				{
					sub_10143d80( *(const Vector *)trace.m_endpos, 5.0f, 0xff, 0x40, 0x40, 1, 0.2f );
					sub_10142e90( (const Vector *)trace.m_endpos, &vecRec, 0xff, 0x40, 0x40, 1, 0.2f );
				}
			}

			if ( trace.m_fraction == 1.0 )
				return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1028ef20 size=0x76
#include "CAI_BaseNPCTroika.h"
char CAI_BaseNPCTroika::vfunc587(int unused)
{
    if (sub_10337f30())
        return 0;
    if (*(int *)((char *)this + 0x128))
        return 0;
    if (*(int *)((char *)this + 0x5bb4) > 0)
        return 0;
    if (*((unsigned char *)this + 0x5b84) & 0x10)
        return 0;
    if (sub_1033e2b0())
        return 0;
    if (*(int *)((char *)this + 0x6354) <= 2)
        return 1;
    return *(int *)((char *)this + 0x6358) <= 2;
}
// END FUNCTION

// FUNCTION: 0x1028efc0 size=0x869
#include "Vector.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "globalvars.h"

int sub_1023bd00();

struct ObjView { char pad[0x49c]; int m_49c; char pad2[8]; char m_4a8; };
struct TroV;
struct CaView { void sub_102ca780(TroV *self, int *a, int *b, int *c, int *d, Vector *e, Vector *f, CBaseEntity **g, CBaseEntity **h); };
struct GView { virtual void v0(); virtual void v1(); };
struct NLV { int sub_101d5bd0(const char *s); };
struct EntListV { CBaseEntity *sub_100290c0(const void *h); };

struct TgtV
{
	int sub_1017e720();
	int sub_1017e740();
	int sub_1017ddd0();
	int sub_1017dd80();
	int sub_1017de60();
	int sub_10337860();
	void sub_1017fd60(int a, CBaseEntity *pEnt);
};

extern CaView *g_109253f8;
extern GView *g_10924a6c;
extern unsigned char g_10924834;
extern int g_109248ec;
extern NLV g_10738d10;
extern EntListV *g_10566458;

struct TroV
{
	void ClearCondition(int c) { sub_10269b50(c); }
	void SetCondition(int c) { sub_10269a20(c); }
	bool HasCondition(int c) { return sub_10269aa0(c); }
	void sub_10269b50(int a);
	void sub_10269a20(int a);
	bool sub_10269aa0(int a);
	bool sub_1033e2b0();
	void sub_10293df0(float f);
	char sub_103268e0(const Vector *p, float f);
	void sub_1028ea60(int a, const Vector *v, void *p);
	void sub_1028eb30(int a, const Vector *v, void *p, char d);
	TgtV *GetTarget() { return (TgtV *)m_hTarget.Get(); }
	void sub_1028efc0();
	CEntityVSlots *GetTargetS() { return (CEntityVSlots *)m_hTarget.Get(); }

	char m_pad0000[0x128];
	void *m_p128;
	char m_pad012c[0x5b84 - 0x12c];
	unsigned char m_flags5b84;
	char m_pad5b85[0x6264 - 0x5b85];
	float m_f6264;
	char m_pad6268[0x628c - 0x6268];
	EHANDLE m_hTarget;
	char m_pad6290[0x6348 - 0x6290];
	int m_n6348;
	int m_n634c;
	int m_n6350;
	int m_n6354;
	int m_n6358;
	char m_pad635c[0x636c - 0x635c];
	int m_n636c;
	int m_n6370;
	char m_pad6374[0x6398 - 0x6374];
	float m_f6398;
	float m_f639c;
	float m_f63a0;
};

// TARGET: sub_1028efc0
void TroV::sub_1028efc0()
{
	this->sub_10269b50(0x1e);
	this->sub_10269b50(0x1f);
	this->sub_10269b50(0x20);
	this->sub_10269b50(0x21);
	this->sub_10269b50(0x22);

	if (this->m_flags5b84 & 0x10)
		return;
	if (this->sub_1033e2b0())
		return;

	bool b13 = gpGlobals->curtime <= this->m_f6398;
	bool b12 = gpGlobals->curtime <= this->m_f639c;
	bool bl = gpGlobals->curtime <= this->m_f63a0;

	ObjView *obj = (ObjView *)sub_1023bd00();
	if (obj && obj->m_49c == 0)
		b12 = true;
	if (b13)
	{
		if (b12)
			return;
	}
	else if (b12)
		bl = true;
	if (obj && (obj->m_49c != 1 || obj->m_4a8))
		bl = true;
	if (this->m_p128)
		bl = true;
	if (g_10566458->sub_100290c0(&this->m_hTarget) &&
		g_10566458->sub_100290c0((char *)g_10566458->sub_100290c0(&this->m_hTarget) + 0xfe8))
	{
		bl = true;
		this->sub_10293df0(5.0f);
	}

	int n634c = this->m_n634c;
	int n6350 = this->m_n6350;
	int n6354 = this->m_n6354;
	int n6358 = this->m_n6358;
	Vector v1, v2;
	CBaseEntity *p1, *p2;
	g_109253f8->sub_102ca780(this, &n634c, &n6350, &n6354, &n6358, &v1, &v2, &p1, &p2);

	if (!b13 && n634c > 0)
	{
		g_10924a6c->v1();
		this->sub_10269a20(0x1f);
		this->sub_1028ea60(n634c, &v1, p1);
	}
	if (!b12 && n6354 > 0)
	{
		g_10924a6c->v1();
		this->sub_10269a20(0x21);
		this->sub_1028eb30(n6354, &v2, p2, 0);
	}

	if (!this->m_hTarget.Get() || !this->sub_10269aa0(0x5a))
		return;

	Vector pos = Vector(*this->GetTargetS()->slot217());
	Vector ang;
	this->GetTargetS()->slot193(&ang);

	if (!bl && (this->m_n6354 <= 2 || this->m_n6358 <= 2) && this->m_f6264 <= 64.0f && this->sub_10269aa0(0x5a))
	{
		if (!(g_10924834 & 1))
		{
			g_10924834 |= 1;
			g_109248ec = g_10738d10.sub_101d5bd0("Player_Nosferatu");
		}
		if (this->GetTarget()->sub_10337860() == g_109248ec && this->sub_103268e0(&ang, 0.766f))
		{
			if (this->m_n6354 <= 2)
			{
				this->GetTarget()->sub_1017fd60(2, (CBaseEntity *)this);
				this->m_n6370 = this->GetTarget()->sub_1017e740();
				g_10924a6c->v1();
				this->sub_10269a20(0x21);
				this->sub_1028eb30(2, &pos, this->m_hTarget.Get(), 1);
			}
			if (this->m_n6358 <= 2)
			{
				this->GetTarget()->sub_1017fd60(2, (CBaseEntity *)this);
				this->m_n6370 = this->GetTarget()->sub_1017e740();
				g_10924a6c->v1();
				this->sub_10269a20(0x22);
				this->sub_1028eb30(2, &pos, this->m_hTarget.Get(), 1);
			}
		}
	}

	if (this->GetTarget()->sub_1017de60() >= this->m_n6348)
	{
		g_10924a6c->v1();
		this->sub_10269a20(0x1e);
	}

	if (b13)
	{
		this->m_n636c = this->GetTarget()->sub_1017e720();
	}
	else if (this->GetTarget()->sub_1017e720() > this->m_n636c)
	{
		int e = this->GetTarget()->sub_1017ddd0();
		if (e >= n634c)
		{
			if (e >= this->m_n634c)
			{
				this->sub_1028ea60(e, &pos, this->m_hTarget.Get());
				g_10924a6c->v1();
				this->sub_10269a20(0x1f);
			}
			if (e >= this->m_n6350)
			{
				this->sub_1028ea60(e, &pos, this->m_hTarget.Get());
				g_10924a6c->v1();
				this->sub_10269a20(0x20);
			}
		}
	}

	if (b12)
	{
		this->m_n6370 = this->GetTarget()->sub_1017e740();
		return;
	}
	if (this->GetTarget()->sub_1017e740() > this->m_n6370)
	{
		int e = this->GetTarget()->sub_1017dd80();
		if (e >= n6354)
		{
			if (e >= this->m_n6354)
			{
				this->sub_1028eb30(e, &pos, this->m_hTarget.Get(), 0);
				g_10924a6c->v1();
				this->sub_10269a20(0x21);
			}
			if (e >= this->m_n6358)
			{
				this->sub_1028eb30(e, &pos, this->m_hTarget.Get(), 0);
				g_10924a6c->v1();
				this->sub_10269a20(0x22);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1028fa50 size=0xe0
#include "CAI_BaseNPCTroika.h"
#include "CUnknown102cabd0.h"
#include "CDevFlagObj.h"
extern CUnknown102cabd0 *g_109253f8;
extern CDevFlagObj *g_10924a6c;
void CAI_BaseNPCTroika::sub_1028fa50()
{
	float *pTimer = (float *)((char *)this + 0x6608);
	if (gpGlobals->curtime >= *pTimer) {
		*pTimer = enginerandom->vfunc1(2.0f, 2.5f) + gpGlobals->curtime;
		sub_10269b50(0x3d);
		sub_10269b50(0x3e);
		void *ents[4];
		int n = g_109253f8->sub_102cabd0((CUnknown1028ebc0 *)this, ents, 4);
		while (n > 0) {
			char *pEnt = (char *)ents[--n];
			CBaseEntity *pOther;
			if (!pEnt)
				goto both;
			pOther = *(CBaseEntity **)(pEnt + 0x98);
			if (!pOther)
				goto both;
			switch (vfunc404(pOther)) {
			case 3:
			case 4:
both:
				if (g_10924a6c->vfunc1()) sub_10269a20(0x3e); else sub_10269a20(0x3e);
			case 1:
			case 2:
				if (g_10924a6c->vfunc1()) sub_10269a20(0x3d); else sub_10269a20(0x3d);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1028fb70 size=0xd1
#include "CUnknown1028fb70.h"

struct CInspectStatLevels { float sub_1006caa0(int level); };	// stub 0x1000c874
struct CInspectStatOwner
{
	int sub_1006cf30(const char *pszName);	// stub 0x1000fb46: the id of the stat of that name
	CInspectStatLevels *sub_1006cff0(int id);	// the stat of the id
};
extern CInspectStatOwner g_106c7c34;

void CUnknown1028fb70::sub_1028fb70()
{
	if (m_flVisionOverride == -1.0f) {
		static int s_nVisionStat = g_106c7c34.sub_1006cf30("Inspection_Vision_Distances");
		CInspectStatLevels *pStat = g_106c7c34.sub_1006cff0(s_nVisionStat);
		m_flVisionDistance = pStat->sub_1006caa0(m_nLevel);
	} else {
		m_flVisionDistance = m_flVisionOverride;
	}
	if (m_flHearingOverride == -1.0f) {
		static int s_nHearingStat = g_106c7c34.sub_1006cf30("Inspection_Hearing_Scalars");
		CInspectStatLevels *pStat = g_106c7c34.sub_1006cff0(s_nHearingStat);
		m_flHearingScalar = pStat->sub_1006caa0(m_nLevel);
	} else {
		m_flHearingScalar = m_flHearingOverride;
	}
}
// END FUNCTION

// FUNCTION: 0x1028fc90 size=0x1c
struct CUnknown1028fc90 { int sub_1028fc90(); };
int CUnknown1028fc90::sub_1028fc90()
{
    *(int *)((char *)this + 0x63cc) = 0;
    *(int *)((char *)this + 0x63c4) = 0x3f800000;
    *(int *)((char *)this + 0x63c8) = 0x3f800000;
    return 0x3f800000;
}
// END FUNCTION

// FUNCTION: 0x1028fcc0 size=0x8d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CAI_BaseNPCTroika.h"

void sub_102a0d20();

void CAI_BaseNPCTroika::vfunc432(int a)
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	ScopeTrace trace("CAI_BaseNPCTroika::RunAI", pEnt ? (pEnt->m_name26c ? pEnt->m_name26c : g_106b8540) : g_105387dc);
	sub_1028fc90();
	sub_102a0d20();
	sub_1026f110(a);
}
// END FUNCTION

// FUNCTION: 0x1028fd80 size=0x224
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

bool CAI_BaseNPCTroika::sub_1028fd80(int arg)
{
	CBaseEntity *self = (CBaseEntity *)this;
	ScopeTrace trace("CAI_BaseNPCTroika::RunAlternateAI", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc);
	CBaseEntity *pEnt = m_h1538.Get();
	int nMode = pEnt ? m_n153c : 0;
	if (nMode == 1) {
		switch (m_nActivityff0) {
		case 0xf88:
		case 0xf91:
		case 0xf9a:
		case 0xfb7:
		case 0xfc0:
		case 0xff7:
		case 0x1000:
		case 0x1009:
		case 0x1039:
			sub_10280a50();
		}
		return true;
	}
	switch (m_n644c) {
	case 0:
		return false;
	case 1:
		return sub_10290040(arg);
	case 2:
		return sub_10290200(arg);
	case 3:
		return sub_102902e0(arg);
	case 4:
		return sub_10290350(arg);
	default:
		return false;
	}
}
// END FUNCTION

// FUNCTION: 0x10290040 size=0x151
#include "CBaseEntity.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown100290c0.h"
#include "CUnknown10290040.h"
#include "CEHandleGet.h"
#include "Vector.h"

float sub_101d2c70(const Vector &vec);
void __fastcall sub_102e0b40(float *p);

struct CTargetAnswer
{
	char m_pad0000[0xc];
	Vector m_vecDir;
	int m_nNode;
};

#define TGV(n) virtual void t##n();
#define TGV10(p) TGV(p##0) TGV(p##1) TGV(p##2) TGV(p##3) TGV(p##4) TGV(p##5) TGV(p##6) TGV(p##7) TGV(p##8) TGV(p##9)
struct CTargetView
{
	TGV10(0) TGV10(1) TGV10(2) TGV10(3) TGV10(4) TGV10(5) TGV10(6) TGV10(7) TGV10(8) TGV10(9)
	TGV10(10) TGV10(11) TGV10(12) TGV10(13) TGV10(14) TGV10(15) TGV10(16) TGV10(17) TGV10(18) TGV10(19)
	TGV10(20) TGV10(21) TGV10(22) TGV10(23)
	TGV(240) TGV(241) TGV(242) TGV(243) TGV(244) TGV(245)
	virtual void vfunc246(CUnknown10290040 *pAsker, CTargetAnswer *pOut, char bFlag);
};


// VC6 must know the side effects (not the registers) of the LookupEntity COMDAT when it reaches the first door check,
// so an earlier real decliner of the header inline EHandleEntityList::LookupEntity is compiled first:
// CAI_BaseNPC::Event_Killed (0x10265ad0, the same copy as block_1027d170, judged 0). (The game's own first decliner in
// AI_BaseNPCTroika.cpp is 0x1028efc0; la_07.cpp has that copy, also judged 0, but its matched body still spells
// SetCondition's ent_trace_conditions check as a bare g_10924a6c->v1() call.)
#include "CAI_BaseNPC_vfunc144.h"
#include "CCineNPC.h"
#include "CUnknown103158f0.h"
#include "IPhysicsObject.h"
#include "ConVar.h"

extern ConVar g_106bbaa0;
extern ConVar g_10924a68;
#define FILE_144 "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp"

namespace block_10290040
{
struct CScriptView144
{
	char m_pad0000[0x204];
	unsigned int m_spawnflags;
	char m_pad0208[0x5f91 - 0x208];
	char m_bPlayedSequence;
};

struct CDamageInfo144 : CAI_NPCDamageRecord
{
	CBaseEntity *GetAttacker() const { return m_pInflictor; }
};

struct CEventKilled144 : CAI_BaseNPCUnit144
{
	IPhysicsObject *VPhysicsGetObject() const { return m_pPhysObj36c; }
	void SetIdealStateDbg(int state, const char *pszFile, int nLine) { m_pszFile1b3c = pszFile; m_nLine1b40 = nLine; m_nIdealState5cc4 = state; }
	void SetTouchNull() { *(int *)((char *)this + 0x1ec) = 0; }
	void SetCondition(int iCondition) { if (g_10924a68.GetBool()) {} sub_10269a20(iCondition); }
	void sub_10265ad0(const CDamageInfo144 &info);
};

void CEventKilled144::sub_10265ad0(const CDamageInfo144 &info)
{
	if (m_pSchedule5c38 && (int)m_pSchedule5c38 == sub_102cc1f0(0x3a))
		return;

	if (m_nState5cc0 == 4 && m_hScript5d74.Get())
	{
		CScriptView144 *pScript = (CScriptView144 *)m_hScript5d74.Get();
		if (pScript->m_bPlayedSequence && (((CScriptView144 *)m_hScript5d74.Get())->m_spawnflags & 0x2080) != 0x80)
		{
			m_LastDamage = info;
			return;
		}
		((CCineNPC *)m_hScript5d74.Get())->sub_101a8c30();
		IPhysicsObject *pPhys;
		if (g_106bbaa0.GetBool() && (pPhys = VPhysicsGetObject()))
		{
			Vector vecTmp;
			Vector vecPos;
			vecPos = *vfunc263(&vecTmp);
			pPhys->vfunc39((float *)&vecPos, 0);
		}
	}

	vfunc511();
	if (m_n153c == -1 || !m_h1538.Get())
		vfunc488();

	sub_10265a90(info.GetAttacker());
	if (((CBaseEntity *)this)->sub_100b3700() & 0x2000)
	{
		SetTouchNull();
		sub_10265a40();
	}
	sub_1032b9b0((int)&info);
	SetIdealStateDbg(7, FILE_144, 0x217);
	SetCondition(0x4c);
	m_hAttacker5b7c = info.GetAttacker();
	m_b5b80 = 1;
	sub_1028ae60();
	if (m_pSquad5da4)
		((CUnknown103158f0 *)m_pSquad5da4)->sub_103158f0((CBaseEntity *)this);
	if ((char)vfunc552())
		sub_102695d0();
	else
		sub_101babc0(0x20, vfunc217(), 0x180, 30.0f, 0);
	SetIdealStateDbg(7, FILE_144, 0x241);
	sub_1026e340(7);
}
}



namespace block_10290040
{
// the NPC's door-opening state (CAI_BaseNPC::m_hOpeningDoor at +0x5d24, the door-opening state at +0x644c and its time
// at +0x6450) seen from the state handlers. With these accessors the first m_hOpeningDoor check (operator!) is one of
// 13 top-level inline sites still to come: its LookupEntity share is 1000/13 = 76 < 86 tuples and it is declined
// (call 0x100290c0, list kept in ebx), while the later two get 1000/9 = 111 and 914/3 = 304 and inline, as in the game.
struct CDoorOpenNPC : CUnknown10290040
{
	const CHandle<CTargetView> &OpeningDoor() const { return *(const CHandle<CTargetView> *)&m_hTarget5d24; }
	CAI_Motor *GetMotor() { return m_pMotor5d44; }
	void SetDoorState(int nState) { m_nState644c = nState; }
	void DelayDoorState(float flDelay) { m_flTime6450 = gpGlobals->curtime + flDelay; }
};
}

using namespace block_10290040;

bool CUnknown10290040::sub_10290040(int a)
{
	CDoorOpenNPC *pThis = (CDoorOpenNPC *)this;
	if (!pThis->OpeningDoor())
	{
		pThis->SetDoorState(0);
		return false;
	}
	CTargetAnswer answer;
	pThis->OpeningDoor()->vfunc246(this, &answer, m_bFlag5d30);
	if (answer.m_nNode == -1)
		return false;
	sub_102e0b40((float *)pThis->GetMotor());
	float flYaw = sub_101d2c70(answer.m_vecDir);
	pThis->GetMotor()->sub_102e1c10(flYaw, -1.0f);
	if (sub_10278c80())
	{
		if (m_bFlag5d30)
		{
			pThis->SetDoorState(2);
			pThis->DelayDoorState(1.0f);
			return true;
		}
		if (sub_10298840((CBaseEntity *)(CTargetView *)pThis->OpeningDoor()))
		{
			pThis->SetDoorState(2);
			pThis->DelayDoorState(5.0f);
		}
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10290200 size=0xad
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"

struct STarget {
	char sub_102ee2e0();
};
struct SNpcWorker {
	void sub_102bf7e0();
};

extern CGlobalEntityList *g_10566458;

bool CAI_BaseNPCTroika::sub_10290200(int unused)
{
	sub_102727d0();
	if (gpGlobals->curtime >= m_f6450) {
		unsigned int h = m_h5d24;
		CGlobalEntityList_Slot *pSlot;
		if (h != (unsigned int)-1
			&& (pSlot = &g_10566458->m_Slots[h & 0x1fff], pSlot->m_Serial == (int)(h >> 13))
			&& pSlot->m_pEntity != 0) {
			vfunc448(0xe);
			m_h5d24 = (unsigned int)-1;
			m_b5d30 = 0;
			m_n644c = 0;
			return true;
		}
		if (((STarget *)m_p5d34)->sub_102ee2e0())
			((SNpcWorker *)this)->sub_102bf7e0();
		vfunc528();
		m_n644c = 0;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x102902e0 size=0x49
#include "CAI_BaseNPCTroika.h"
bool CAI_BaseNPCTroika::sub_102902e0(int unused)
{
	sub_102727d0();
	if (gpGlobals->curtime >= m_f6450) {
		vfunc448(14);
		m_h5d24 = 0xffffffff;
		m_b5d30 = 0;
		m_n644c = 0;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10290350 size=0x1a5
#include "CAI_BaseNPCTroika.h"
#include "CAI_MoveProbe.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "globalvars.h"

struct CAI_TroikaTargetView
{
	char m_pad0000[0x4f8];
	int m_n4f8;
};

struct CAI_MoveProbeLimitView : CAI_MoveProbe
{
	bool MoveLimit(int navType, const Vector &vecStart, const Vector &vecEnd, unsigned int collisionMask, const CBaseEntity *pTarget, AIMoveTrace_t *pMove)
	{
		return sub_102e6d70(navType, &vecStart.x, &vecEnd.x, collisionMask, pTarget, 100.0f, 0, pMove, 0, 0);
	}
};

bool CAI_BaseNPCTroika::sub_10290350(int unused)
{
	CEntityVSlots *pThis = (CEntityVSlots *)this;
	*((char *)this + 0x65fa) = 1;
	sub_102727d0();
	*((char *)this + 0x65fa) = 0;
	if (EHandle_Get(m_h5d24))
	{
		if (((CAI_TroikaTargetView *)EHandle_Get(m_h5d24))->m_n4f8 == 0)
		{
			sub_102bf7e0();
			m_n644c = 0;
		}
	}
	Vector vecStart = *pThis->slot217();
	Vector vecEnd = vecStart + m_vec6290 * 64.0f;
	AIMoveTrace_t trace;
	if (((CAI_MoveProbeLimitView *)m_pMoveProbe5d40)->MoveLimit(0, vecStart, vecEnd, 0x202400b, 0, &trace))
	{
		sub_102bf7e0();
		m_h5d24 = 0xffffffff;
		m_b5d30 = 0;
		m_n644c = 0;
	}
	if (gpGlobals->curtime >= m_f6450)
	{
		pThis->slot448(0xe);
		m_h5d24 = 0xffffffff;
		m_b5d30 = 0;
		m_n644c = 0;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10290570 size=0xb4
#include "CAI_BaseNPCTroika.h"
#include "CAI_Navigator.h"
#include "CEntityVSlots.h"

// TARGET: CAI_BaseNPCTroika::vfunc532
void CAI_BaseNPCTroika::vfunc532(int a)
{
	switch (a) {
	case 1:
		if (m_n644c <= 0)
			break;
		if (m_n644c > 4)
			break;
		goto check;
	case 2:
	case 4:
		if (m_n644c != 4)
			break;
		((CEntityVSlots *)this)->slot448(0xe);
		m_h5d24 = 0xffffffff;
		m_b5d30 = 0;
		goto clear;
	default:
		break;
	case 8:
		if (m_n644c <= 0)
			break;
		if (m_n644c <= 3)
			goto clear;
		if (m_n644c != 4)
			break;
	check:
		if (((CAI_Navigator *)m_p5d34)->sub_102ee2e0())
			sub_102bf7e0();
	clear:
		m_n644c = 0;
		break;
	}
	sub_1027e0f0(a);
}
// END FUNCTION

// FUNCTION: 0x10290660 size=0x23
// TARGET: sub_10290660
int __stdcall sub_10290660(float a)
{
    float d = a - gpGlobals->curtime;
    if (d <= gpGlobals->frametime) {
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102906a0 size=0xd
namespace lifted {
int __stdcall sub_1000b654(int);
}
struct CUnknown102906a0 { int sub_102906a0(); };
int CUnknown102906a0::sub_102906a0()
{
    return lifted::sub_1000b654(*(int *)((char *)this + 0x6244));
}
// END FUNCTION

// FUNCTION: 0x102906c0 size=0xd
namespace lifted {
int __stdcall sub_1000b654(int);
}
struct CUnknown102906c0 { int sub_102906c0(); };
int CUnknown102906c0::sub_102906c0()
{
    return lifted::sub_1000b654(*(int *)((char *)this + 0x6248));
}
// END FUNCTION

// FUNCTION: 0x102906e0 size=0x3
char sub_102906e0()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10290700 size=0xd
namespace lifted {
int __stdcall sub_1000b654(int);
}
struct CUnknown10290700 { int sub_10290700(); };
int CUnknown10290700::sub_10290700()
{
    return lifted::sub_1000b654(*(int *)((char *)this + 0x6250));
}
// END FUNCTION

// FUNCTION: 0x10290720 size=0x35d
#include "CAI_BaseNPCTroika.h"
#include "CVProfile.h"
#include "engineiface.h"
#include "globalvars.h"

struct CCycleSample
{
	unsigned int m_lo;
	unsigned int m_hi;
	void Sample()
	{
		__asm
		{
			mov ecx, this
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

#define EXIT_SCOPE() \
	{ \
		CVProfile *pp = g_109f3648; \
		if (!pp->m_bAtRoot || pp->m_enabled) \
		{ \
			CVProfNode *n = pp->m_pCurNode; \
			if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) \
			{ \
				CCycleSample t; \
				t.m_lo = 0; \
				t.m_hi = 0; \
				t.Sample(); \
				CUnknownCycle100335e0 *pc = &n->m_CurFrameTime; \
				pc->m_Int64 = *(unsigned __int64 *)&t - pc->m_Int64; \
				n->m_TotalTime += pc->m_Int64; \
				g_109f3648->PopGroup(); \
			} \
			if (n->m_nRecursions == 0) \
				pp->m_pCurNode = pp->m_pCurNode->m_pParent; \
			pp->m_bAtRoot = (pp->m_pCurNode == pp->m_pRoot); \
		} \
	}

namespace block_10290720 {
int __stdcall sub_10290660(float t)
{
	if (t - gpGlobals->curtime <= gpGlobals->frametime)
		return 1;
	return 0;
}
struct CTroikaUnit : CAI_BaseNPCTroika
{
	char sub_102906a0();
};
char CTroikaUnit::sub_102906a0()
{
	return (char)sub_10290660(m_f6244);
}
}
using namespace block_10290720;

#define MAXF(a, b) ((a) > (b) ? (a) : (b))
#define MINF(a, b) ((a) < (b) ? (a) : (b))

// TARGET: CAI_BaseNPCTroika::CalcNextUpdateThink
bool CAI_BaseNPCTroika::CalcNextUpdateThink(float *pOut)
{
	CVProfile *p = g_109f3648;
	if (p->m_enabled || !p->m_bAtRoot)
	{
		if (p->m_pCurNode->m_pszName != "CAI_BaseNPCTroika_CalcNextUpdateThink")
			p->m_pCurNode = p->m_pCurNode->GetSubNode("CAI_BaseNPCTroika_CalcNextUpdateThink", 0, "Unaccounted");
		CVProfNode *n = p->m_pCurNode;
		n->m_nCurFrameCalls++;
		if (n->m_nRecursions++ == 0)
		{
			((CCycleSample *)&n->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(n->m_nBudgetGroupID);
		}
		p->m_bAtRoot = false;
	}
	if (((CTroikaUnit *)this)->sub_102906a0())
	{
		float delay;
		if (m_h628c.Get())
		{
			float d = (m_f6264 - 512.0f) * 0.0014204546f;
			delay = d > 8.0f ? 8.0f : (d < 0.03f ? 0.03f : d);
			if (delay == 8.0f)
				delay += enginerandom->vfunc1(0.0f, 0.8f);
		}
		else
			delay = 0.03f;
		if (m_b6278)
		{
			if (!m_b6279)
				delay = MINF(delay * 5.0f, 12.0f);
		}
		else
			delay = MINF(delay * 10.0f, 16.0f);
		if (sub_102c2430())
			delay = 0.03f;
		*pOut = m_f6244 - m_f6254;
		float cur; cur = m_f6244;
		m_f6254 = cur;
		m_f6244 = MAXF(cur, gpGlobals->curtime) + delay;
		EXIT_SCOPE();
		return true;
	}
	EXIT_SCOPE();
	return false;
}
// END FUNCTION

// FUNCTION: 0x10290b60 size=0x371
#include "CAI_BaseNPCTroika.h"
#include "CVProfile.h"
#include "engineiface.h"
#include "globalvars.h"

struct CCycleSample
{
	unsigned int m_lo;
	unsigned int m_hi;
	void Sample()
	{
		__asm
		{
			mov ecx, this
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

#define EXIT_SCOPE() \
	{ \
		CVProfile *pp = g_109f3648; \
		if (!pp->m_bAtRoot || pp->m_enabled) \
		{ \
			CVProfNode *n = pp->m_pCurNode; \
			if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) \
			{ \
				CCycleSample t; \
				t.m_lo = 0; \
				t.m_hi = 0; \
				t.Sample(); \
				CUnknownCycle100335e0 *pc = &n->m_CurFrameTime; \
				pc->m_Int64 = *(unsigned __int64 *)&t - pc->m_Int64; \
				n->m_TotalTime += pc->m_Int64; \
				g_109f3648->PopGroup(); \
			} \
			if (n->m_nRecursions == 0) \
				pp->m_pCurNode = pp->m_pCurNode->m_pParent; \
			pp->m_bAtRoot = (pp->m_pCurNode == pp->m_pRoot); \
		} \
	}

namespace block_10290b60 {
int __stdcall sub_10290660(float t)
{
	if (t - gpGlobals->curtime <= gpGlobals->frametime)
		return 1;
	return 0;
}
struct CTroikaUnit : CAI_BaseNPCTroika
{
	char sub_102906c0();
};
char CTroikaUnit::sub_102906c0()
{
	return (char)sub_10290660(m_f6248);
}
}
using namespace block_10290b60;

// TARGET: CAI_BaseNPCTroika::CalcNextNormalThink
bool CAI_BaseNPCTroika::CalcNextNormalThink(float *pOut)
{
	CVProfile *p = g_109f3648;
	if (p->m_enabled || !p->m_bAtRoot)
	{
		if (p->m_pCurNode->m_pszName != "CAI_BaseNPCTroika_CalcNextNormalThink")
			p->m_pCurNode = p->m_pCurNode->GetSubNode("CAI_BaseNPCTroika_CalcNextNormalThink", 0, "Unaccounted");
		CVProfNode *n = p->m_pCurNode;
		n->m_nCurFrameCalls++;
		if (n->m_nRecursions++ == 0)
		{
			((CCycleSample *)&n->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(n->m_nBudgetGroupID);
		}
		p->m_bAtRoot = false;
	}
	if (((CTroikaUnit *)this)->sub_102906c0())
	{
		float d;
		if (sub_102c2430())
			d = 0.01f;
		else if ((m_flags5b84 & 8) == 8 || (m_flags14bc & 4) || m_b6279)
			d = 0.1f;
		else
		{
			if (m_h628c.Get())
			{
				float t3;
				d = (m_f6264 - 2048.0f) * 0.0007324219f;
				if (d > 3.0f)
				{
					t3 = 3.0f;
					goto rnd;
				}
				else if (d < 0.1f)
					d = 0.1f;
				else
				{
					t3 = d;
					if (d == 3.0f)
					{
rnd:
						d = enginerandom->vfunc1(0.0f, 0.3f) + t3;
					}
				}
			}
			else
				d = 0.1f;
			if (m_b6278)
			{
				if (!m_b6279)
					d = (d * 3.0f < 6.0f) ? d * 3.0f : 6.0f;
			}
			else
			{
				d = (d * 10.0f < 16.0f) ? d * 10.0f : 16.0f;
			}
		}
		*pOut = m_f6248 - m_f6258;
		float cur = m_f6248;
		m_f6258 = cur;
		float now = gpGlobals->curtime;
		if (!(cur > now))
			cur = gpGlobals->curtime;
		m_f6248 = cur + d;
		EXIT_SCOPE();
		return true;
	}
	EXIT_SCOPE();
	return false;
}
// END FUNCTION

// FUNCTION: 0x10290fc0 size=0x1e2
#include "CAI_BaseNPCTroika.h"
#include "CVProfile.h"
#include "globalvars.h"

__declspec(dllimport) void vtune(bool bEnable);

struct VPCycle
{
	unsigned __int64 m_Int64;
	VPCycle() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)this;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End()
	{
		VPCycle cycle;
		cycle.Sample();
		m_Int64 = cycle.m_Int64 - m_Int64;
	}
	void Add(const VPCycle &other)
	{
		m_Int64 += other.m_Int64;
	}
};

struct VPNode
{
	const char *m_pszName;
	char m_pad4[4];
	VPCycle m_CurFrameTime;
	int m_nRecursions;
	int m_nCurFrameCalls;
	VPCycle m_TotalTime;
	char m_pad20[0x48 - 0x20];
	VPNode *m_pParent;
	char m_pad4c[0x54 - 0x4c];
	int m_nGroup;
};

struct VPProf
{
	char m_bVTune;
	char m_pad1[3];
	int m_nVTuneGroup;
	int m_GroupStack[1024];
	int m_nGroupDepth;
	int m_enabled;
	char m_bAtRoot;
	char m_pad1011[3];
	VPNode *m_pCurNode;
	VPNode *m_pRoot;
};

bool CAI_BaseNPCTroika::sub_10290fc0(float *pOut)
{
	VPProf *pProf = (VPProf *)g_109f3648;
	if (pProf->m_enabled || !pProf->m_bAtRoot) {
		if (pProf->m_pCurNode->m_pszName != "CAI_BaseNPCTroika_CalcNextMoveThink")
			pProf->m_pCurNode = (VPNode *)((CVProfNode *)pProf->m_pCurNode)->GetSubNode("CAI_BaseNPCTroika_CalcNextMoveThink", 0, "Unaccounted");
		VPNode *pNode = pProf->m_pCurNode;
		pNode->m_nCurFrameCalls++;
		if (pNode->m_nRecursions++ == 0) {
			pNode->m_CurFrameTime.Sample();
			VPProf *pP = (VPProf *)g_109f3648;
			int nGroup = pNode->m_nGroup;
			pP->m_GroupStack[pP->m_nGroupDepth++] = nGroup;
			if (pP->m_GroupStack[pP->m_nGroupDepth - 2] != nGroup && pP->m_bVTune && nGroup == pP->m_nVTuneGroup)
				vtune(true);
		}
		pProf->m_bAtRoot = false;
	}

	*pOut = m_f624c - m_f625c;
	m_f625c = m_f624c;
	m_f624c = gpGlobals->curtime + 0.001f;

	pProf = (VPProf *)g_109f3648;
	if (!pProf->m_bAtRoot || pProf->m_enabled) {
		VPNode *pNode = pProf->m_pCurNode;
		if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0) {
			pNode->m_CurFrameTime.End();
			pNode->m_TotalTime.Add(pNode->m_CurFrameTime);
			VPProf *pP = (VPProf *)g_109f3648;
			pP->m_nGroupDepth--;
			int nTop = pP->m_GroupStack[pP->m_nGroupDepth];
			int nPrev = pP->m_GroupStack[pP->m_nGroupDepth + 1];
			if (nTop != nPrev && pP->m_bVTune && nPrev == pP->m_nVTuneGroup)
				vtune(false);
		}
		if (pNode->m_nRecursions == 0)
			pProf->m_pCurNode = pProf->m_pCurNode->m_pParent;
		pProf->m_bAtRoot = (pProf->m_pCurNode == pProf->m_pRoot);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10291230 size=0x30f
#include "CAI_BaseNPCTroika.h"
#include "CVProfile.h"
#include "engineiface.h"
#include "globalvars.h"

struct CCycleSample
{
	unsigned int m_lo;
	unsigned int m_hi;
	void Sample()
	{
		__asm
		{
			mov ecx, this
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

#define EXIT_SCOPE() \
	{ \
		CVProfile *pp = g_109f3648; \
		if (!pp->m_bAtRoot || pp->m_enabled) \
		{ \
			CVProfNode *n = pp->m_pCurNode; \
			if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) \
			{ \
				CCycleSample t; \
				t.m_lo = 0; \
				t.m_hi = 0; \
				t.Sample(); \
				CUnknownCycle100335e0 *pc = &n->m_CurFrameTime; \
				pc->m_Int64 = *(unsigned __int64 *)&t - pc->m_Int64; \
				n->m_TotalTime += pc->m_Int64; \
				g_109f3648->PopGroup(); \
			} \
			if (n->m_nRecursions == 0) \
				pp->m_pCurNode = pp->m_pCurNode->m_pParent; \
			pp->m_bAtRoot = (pp->m_pCurNode == pp->m_pRoot); \
		} \
	}

namespace block_10291230 {
int __stdcall sub_10290660(float t)
{
	if (t - gpGlobals->curtime <= gpGlobals->frametime)
		return 1;
	return 0;
}
struct CTroikaUnit : CAI_BaseNPCTroika
{
	char sub_10290700();
};
char CTroikaUnit::sub_10290700()
{
	return (char)sub_10290660(m_f6250);
}
}
using namespace block_10291230;

#define MAXF(a, b) ((a) > (b) ? (a) : (b))

// TARGET: CAI_BaseNPCTroika::CalcNextAIThink
bool CAI_BaseNPCTroika::CalcNextAIThink(float *pOut)
{
	CVProfile *p = g_109f3648;
	if (p->m_enabled || !p->m_bAtRoot)
	{
		if (p->m_pCurNode->m_pszName != "CAI_BaseNPCTroika_CalcNextAIThink")
			p->m_pCurNode = p->m_pCurNode->GetSubNode("CAI_BaseNPCTroika_CalcNextAIThink", 0, "Unaccounted");
		CVProfNode *n = p->m_pCurNode;
		n->m_nCurFrameCalls++;
		if (n->m_nRecursions++ == 0)
		{
			((CCycleSample *)&n->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(n->m_nBudgetGroupID);
		}
		p->m_bAtRoot = false;
	}
	if (((CTroikaUnit *)this)->sub_10290700()) {
		float flLocal;
		float flDelay;
		if (!((m_flags5b84 & 8) == 8 || ((int)m_flags14bc & 4) || *(char *)((char *)this + 0x6279) || !m_h628c.Get())) {
			flDelay = (m_f6264 - 512.0f) * 0.0011160715f;
			if (flDelay > 4.0f) {
				flLocal = 4.0f;
				goto random;
			} else if (flDelay < 0.1f) {
				flDelay = 0.1f;
			} else {
				flLocal = flDelay;
				if (flDelay == 4.0f) {
random:
					flDelay = flLocal + enginerandom->vfunc1(0, 0.4f);
				}
			}
		} else {
			flDelay = 0.1f;
		}
		float *pNext = (float *)(0x6250 + (char *)this);
		float *pPrev = (float *)(0x6260 + (char *)this);
		float flBase;
		*pOut = *pNext - *pPrev;
		flBase = *pNext;
		*pPrev = flBase;
		*pNext = flDelay + MAXF(flBase, gpGlobals->curtime);
		EXIT_SCOPE();
		return true;
	}
	EXIT_SCOPE();
	return false;
}
// END FUNCTION

// FUNCTION: 0x10291610 size=0x413
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "AITrace.h"
#include "CAI_BaseNPCTroika.h"
#include "CGameTrace.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "utlmemory.h"
#include "vampire.h"
#include "CTraceFilterSimple.h"
#include "Ray_t.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "CVProfile.h"
#include "ScopeTrace.h"
#include "globalvars.h"
#include "CEntityVSlots.h"

struct CBoxView
{
	virtual void v0();
	virtual void v1();
	virtual Vector *v2();
};

char sub_101d1a90(CBaseEntity *pPlayer, CAI_BaseNPCTroika *pNPC);

// TARGET: CAI_BaseNPCTroika::sub_10291610
void CAI_BaseNPCTroika::sub_10291610()
{
	ScopeTrace trace("CAI_BaseNPCTroika::SetPlayerLOS", this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CAI_BaseNPCTroika_SetPlayerLOS", 0, "Unaccounted", false);

	if (!((char)(*(unsigned int *)((char *)this + 0x5b64) >> 3) & 1) && (*(unsigned int *)((char *)this + 0x5b84) & 8) != 8) {
		if (gpGlobals->curtime >= m_flNextPlayerLOS) {
			m_flNextPlayerLOS = gpGlobals->curtime + 2.0f;
			if (m_h628c.Get()) {
				m_b6278 = sub_101d1a90(m_h628c.Get(), this);
				if (m_b6278) {
					m_flLastInPlayerPVS = gpGlobals->curtime;
					if (m_f6264 <= 512.0f) {
						m_b6279 = 1;
						m_flLastInPlayerLOS = gpGlobals->curtime;
					} else {
						Vector vecStart;
						vecStart = *(Vector *)vfunc217();
						vecStart.z += ((CBoxView *)((char *)this + 0x270))->v2()->z;
						CBaseEntity *pPlayer = m_h628c.Get();
						Ray_t ray;
						Vector vecTarget;
						ray.sub_1004f7a0(((CEntityVSlots *)m_h628c.Get())->slot193(&vecTarget)->Base(), vecStart.Base());
						CTraceFilterSimple filter(pPlayer, 0);
						CGameTrace tr;
						g_1070b254->vfunc4(&ray, 0x4091, (CTraceFilterNoCharacterCollide *)&filter, &tr);
						if (g_10738960.sub_1005f190())
							sub_10146570((Vector *)&tr.m_startpos[0], (Vector *)&tr.m_endpos[0], 0xff, 0, 0, 1, -1.0f);
						int bBlocked = tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid;
						m_b6279 = !(char)bBlocked;
						if (m_b6279)
							m_flLastInPlayerLOS = gpGlobals->curtime;
					}
				} else {
					m_b6279 = 0;
				}
			} else {
				m_b6278 = 1;
				m_b6279 = 1;
				m_flLastInPlayerPVS = gpGlobals->curtime;
				m_flLastInPlayerLOS = gpGlobals->curtime;
			}
		}
	} else {
		m_b6278 = 1;
		m_b6279 = 1;
		m_flLastInPlayerPVS = gpGlobals->curtime;
		m_flLastInPlayerLOS = gpGlobals->curtime;
	}
	if (!m_b6279 && m_b6278 && gpGlobals->curtime - m_flLastInPlayerLOS < 8.0f)
		m_b6279 = 1;

	CVProfile *pProf = g_109f3648;
	if (!pProf->m_bAtRoot || pProf->m_enabled) {
		CVProfNode *pNode = pProf->m_pCurNode;
		if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0) {
			CUnknownCycle100335e0 *pc = &pNode->m_CurFrameTime;
			sub_100335e0(pc);
			pNode->m_TotalTime += pc->m_Int64;
			g_109f3648->PopGroup();
		}
		if (pNode->m_nRecursions == 0)
			pProf->m_pCurNode = pProf->m_pCurNode->m_pParent;
		pProf->m_bAtRoot = (pProf->m_pCurNode == pProf->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x10291b40 size=0xa
#include "ConVar.h"
ConVar g_109240d0("temp_cover_enemy_x", "-12.3", 0, "");
// END FUNCTION

// FUNCTION: 0x10291bd0 size=0xa
#include "ConVar.h"
ConVar g_10924160("temp_cover_enemy_y", "32.6", 0, "");
// END FUNCTION

// FUNCTION: 0x10291c60 size=0xa
#include "ConVar.h"
ConVar g_10924df8("temp_cover_hint_x", "-59.2", 0, "");
// END FUNCTION

// FUNCTION: 0x10291cf0 size=0xa
#include "ConVar.h"
ConVar g_10924e40("temp_cover_hint_y", "25.6", 0, "");
// END FUNCTION

// FUNCTION: 0x10291d80 size=0xa
#include "ConVar.h"
ConVar g_10924550("temp_cover_npc_x", "-83.2", 0, "");
// END FUNCTION

// FUNCTION: 0x10291e10 size=0xa
#include "ConVar.h"
ConVar g_10924598("temp_cover_npc_y", "57.6", 0, "");
// END FUNCTION

// FUNCTION: 0x10291ea0 size=0x57
void sub_10143920(float x, float y, const char *s, int a, int b, int c, int d, float f);
void sub_10291ea0(const float *pos, const char *s, int a, int b, int c, int d, float f)
{
    sub_10143920(pos[0] * 0.005f + 0.5f, pos[1] * 0.005f + 0.5f, s, a, b, c, d, f + f);
}
// END FUNCTION

// FUNCTION: 0x10291f20 size=0x4a2
#include "ConVar.h"
#include "Vector.h"
extern ConVar g_10924160;
extern ConVar g_109240d0;
extern ConVar g_10924e40;
extern ConVar g_10924df8;
extern ConVar g_10924598;
extern ConVar g_10924550;
extern float g_10924fc0;
extern float g_105d0fac;

namespace block_10291f20 {
#pragma auto_inline(off)
void sub_10143920(float x, float y, const char *s, int a, int b, int c, int d, float f);
void sub_10291ea0(const float *pos, const char *s, int a, int b, int c, int d, float f)
{
    sub_10143920(pos[0] * 0.005f + 0.5f, pos[1] * 0.005f + 0.5f, s, a, b, c, d, f + f);
}
#pragma auto_inline(on)
}

// TARGET: sub_10291f20
void sub_10291f20()
{
	if (gpGlobals->curtime >= g_10924fc0) {
		g_10924fc0 = gpGlobals->curtime + g_105d0fac;

		float y1 = g_10924160.GetFloat();
		float x1 = g_109240d0.GetFloat();
		Vector p1;
		p1.x = x1;
		p1.y = y1;
		p1.z = 0;
		float y2 = g_10924e40.GetFloat();
		float x2 = g_10924df8.GetFloat();
		Vector p2;
		p2.x = x2;
		p2.y = y2;
		p2.z = 0;
		float y3 = g_10924598.GetFloat();
		float x3 = g_10924550.GetFloat();
		Vector p3;
		p3.x = x3;
		p3.y = y3;
		p3.z = 0;

		Vector q;
		q.x = x1 - x2;
		q.y = y1 - y2;
		q.z = 0;
		Vector dir;
		dir.x = x1 - x3;
		dir.y = y1 - y3;
		dir.z = 0;
		Vector v;
		v.x = x2 - x3;
		v.y = y2 - y3;
		v.z = 0;

		float len = dir.Length2D();
		float len2 = len * len;
		float dot = (dir.y * v.y) + (dir.x * v.x);

		Vector qn = q;
		Vector dn = dir;
		Vector vn = v;
		VectorNormalize(qn);
		VectorNormalize(dn);
		VectorNormalize(vn);

		{
		Vector a1 = dir * 0.25f + p3;
		Vector a2 = dir * -0.75f + p3;

		block_10291f20::sub_10291ea0(&p1.x, "E", 0xff, 0x80, 0x80, 0x80, g_105d0fac);
		block_10291f20::sub_10291ea0(&p2.x, "H", 0xff, 0x80, 0x80, 0x80, g_105d0fac);
		block_10291f20::sub_10291ea0(&p3.x, "N", 0xff, 0x80, 0x80, 0x80, g_105d0fac);
		block_10291f20::sub_10291ea0(&a1.x, "1", 0xff, 0x80, 0x80, 0x80, g_105d0fac);
		block_10291f20::sub_10291ea0(&a2.x, "2", 0xff, 0x80, 0x80, 0x80, g_105d0fac);
		}

		Vector res = p3.sub_1011e060(dn * (dot / len));
		if (!(dot > len2 * 0.25f) && !(dot < len2 * -0.75f))
			block_10291f20::sub_10291ea0(&res.x, "*", 0x80, 0xff, 0x80, 0x80, g_105d0fac);
		else
			block_10291f20::sub_10291ea0(&res.x, "*", 0xff, 0x80, 0x80, 0x80, g_105d0fac);
	}
}
// END FUNCTION

// FUNCTION: 0x10292500 size=0x6f6
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CAI_BaseNPCTroika.h"
#include "CCollisionProperty.h"
#include "CGameTrace.h"
#include "UTIL_Trace.h"
#include "globalvars.h"
#include "DebugOverlay.h"

extern CUnknown10738964 *g_1092479c;
extern CUnknown10738964 *g_109244c4;
extern CUnknown10738964 *g_1092435c;
extern "C" int sprintf(char *, const char *, ...);
void sub_10143b70(const Vector *origin, const Vector *mins, const Vector *maxs, int r, int g, int b, int a, float t);
void sub_10143710(const Vector *origin, const char *text, int a, float t);
struct CUnknown1028e030 { void sub_1028e030(); };

void CAI_BaseNPCTroika::sub_10292500()
{
	CBaseEntity *pThis = (CBaseEntity *)(void *)this;
	ScopeTrace trace("CAI_BaseNPCTroika::NPCThinkDebugPre", this ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);

	if (gpGlobals->curtime <= m_flCriminalWitnessedTimer)
	{
		Vector vecOrigin = *(Vector *)vfunc220();
		float t = (m_flCriminalWitnessedTimer - gpGlobals->curtime) * 0.2f;
		float v = 255.0f * t;
		int r = (int)(255.0f < v ? 255.0f : v);
		float w = 64.0f * t;
		int g = (int)(64.0f < w ? 64.0f : w);
		int b = (int)(64.0f < w ? 64.0f : w);
		vecOrigin.z = vecOrigin.z + ((CCollisionProperty *)((char *)this + 0x270))->vfunc2()[2] + 16.0f;
		sub_10143b70(&vecOrigin, &Vector(-3.0f, -3.0f, -3.0f), &Vector(3.0f, 3.0f, 3.0f), r, g, b, 1, 0.5f);
	}

	if (gpGlobals->curtime <= m_flSupernaturalWitnessedTimer)
	{
		Vector vecOrigin = *(Vector *)vfunc220();
		float t = (m_flSupernaturalWitnessedTimer - gpGlobals->curtime) * 0.2f;
		float v = 192.0f * t;
		int r = (int)(192.0f < v ? 192.0f : v);
		v = 255.0f * t;
		int g = (int)(255.0f < v ? 255.0f : v);
		float w = 64.0f * t;
		int b = (int)(64.0f < w ? 64.0f : w);
		vecOrigin.z = vecOrigin.z + ((CCollisionProperty *)((char *)this + 0x270))->vfunc2()[2] + 12.0f;
		sub_10143b70(&vecOrigin, &Vector(-3.0f, -3.0f, -3.0f), &Vector(3.0f, 3.0f, 3.0f), r, g, b, 1, 0.5f);
	}

	if (!g_1092479c->vfunc1() && g_1092479c->m_n2c)
	{
		if (sub_10014df8(0x5a) && m_h628c.Get())
		{
			Vector vecStart = vfunc193();
			Vector vecEnd = ((CAI_BaseNPC *)m_h628c.Get())->vfunc193();
			CGameTrace tr;
			UTIL_TraceLine_Calls(vecStart, vecEnd, -1, this, 0, &tr);
			int r, g;
			if (tr.m_fraction != 1.0 && tr.m_pEnt != m_h628c.Get())
			{
				if (tr.m_pEnt)
					tr.m_pEnt->sub_1009f4e0();
				r = 0xff;
				g = 0;
			}
			else
			{
				r = 0;
				g = 0xff;
			}
			sub_10142e90(&vecStart, &vecEnd, r, g, 0, 1, 0.5f);
		}
		if (sub_10014df8(0x48))
		{
			Vector vecPos;
			vecPos = vfunc193();
			vecPos.z += 20.0f;
			Vector vecText = vecPos;
			char szText[256];
			sprintf(szText, "Blocked by %s", m_h5d90.Get() == 0 ? "**UNKNOWN**" : m_h5d90.Get()->sub_1000b5cd());
			sub_10143710(&vecText, szText, 0, 0.5f);
		}
	}

	if (!g_109244c4->vfunc1() && g_109244c4->m_n2c)
	{
		Vector vecOrigin = *(Vector *)vfunc217();
		Vector vecA;
		vfunc389(&vecA, &vecOrigin);
		Vector vecB = sub_10278650(vecA, 0, 0);
		sub_10143b70(&vecA, &Vector(-3.0f, -3.0f, -3.0f), &Vector(3.0f, 3.0f, 3.0f), 0xff, 0x40, 0x40, 1, 0.2f);
		sub_10143b70(&vecB, &Vector(-2.0f, -2.0f, -2.0f), &Vector(2.0f, 2.0f, 2.0f), 0x40, 0xff, 0x40, 1, 0.2f);
		sub_10142e90(&vecA, &vecB, 0x40, 0xff, 0x40, 1, 0.2f);
	}

	switch (g_1092435c->vfunc1() ? 0 : g_1092435c->m_n2c)
	{
	case 1:
		((CUnknown1028e030 *)this)->sub_1028e030();
		break;
	case 2:
		sub_1028e060();
		break;
	}

	if (*((char *)this + 0x5b55))
	{
		*((char *)this + 0x5b55) = 0;
		sub_1027efb0();
	}
}
// END FUNCTION

// FUNCTION: 0x10292dc0 size=0x5
void __fastcall sub_1029bd40(struct CView *);
struct CWrap10292dc0 { void sub_10292dc0(); };
// TARGET: sub_10292dc0
// the game's 0x10292dc0: a tail call (jmp) of sub_1029bd40, this in ecx
void CWrap10292dc0::sub_10292dc0()
{
	sub_1029bd40((struct CView *)this);
}
// END FUNCTION

// FUNCTION: 0x10292de0 size=0x9f8
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Vector.h"
#include "QAngle.h"
#include "globalvars.h"
#include "ehandle.h"
#include "ScopeTrace.h"
#include <math.h>

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_105387dc[];


class CCycleCount
{
public:
	CCycleCount() { Init(); }
	void Init() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm
		{
			mov		ecx, pSample
			rdtsc
			mov		[ecx],     eax
			mov		[ecx+4],   edx
		}
	}
	CCycleCount &operator+=(CCycleCount const &other) { m_Int64 += other.m_Int64; return *this; }
	__int64 m_Int64;
};

class CFastTimer
{
public:
	void Start() { m_Duration.Sample(); }
	void sub_100335e0()	// CFastTimer::End (its out-of-line copy is 0x100335e0)
	{
		CCycleCount cnt;
		cnt.Sample();
		m_Duration.m_Int64 = cnt.m_Int64 - m_Duration.m_Int64;
	}
	const CCycleCount &GetDuration() const { return m_Duration; }
	CCycleCount m_Duration;
};

class CVProfile;
extern CVProfile *g_109f3648;
__declspec(dllimport) void vtune(bool bEnable);

class __declspec(dllimport) CVProfNode
{
public:
	CVProfNode *GetSubNode(const char *pszName, int detailLevel, const char *pBudgetGroupName);
	void EnterScope();
	bool ExitScope();
	const char *GetName() { return m_pszName; }
	CVProfNode *GetParent() { return m_pParent; }
	int GetBudgetGroupID() { return m_BudgetGroupID; }

	const char *m_pszName;	// 0x00
	CFastTimer m_Timer;	// 0x08
	int m_nRecursions;	// 0x10
	unsigned m_nCurFrameCalls;	// 0x14
	CCycleCount m_CurFrameTime;	// 0x18
	unsigned m_nPrevFrameCalls;
	CCycleCount m_PrevFrameTime;
	unsigned m_nTotalCalls;
	CCycleCount m_TotalTime;
	CCycleCount m_PeakTime;
	CVProfNode *m_pParent;	// 0x48
	CVProfNode *m_pChild;
	CVProfNode *m_pSibling;
	int m_BudgetGroupID;	// 0x54
};

class __declspec(dllimport) CVProfile
{
public:
	void EnterScope(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted);
	void ExitScope();
	void PushGroup(int nGroupID);
	void PopGroup();

	char m_bVTuneGroupsEnabled;	// 0x0000
	char m_pad0001[3];
	int m_nVTuneGroupID;	// 0x0004
	int m_GroupIDStack[1024];	// 0x0008
	int m_nGroupStackDepth;	// 0x1008
	int m_enabled;	// 0x100c
	bool m_fAtRoot;	// 0x1010
	char m_pad1011[3];
	CVProfNode *m_pCurNode;	// 0x1014
	CVProfNode *m_pRoot;	// 0x1018
};

inline void CVProfile::PushGroup(int nGroupID)
{
	m_GroupIDStack[m_nGroupStackDepth] = nGroupID;
	m_nGroupStackDepth++;
	if (m_GroupIDStack[m_nGroupStackDepth - 2] != nGroupID && m_bVTuneGroupsEnabled && nGroupID == m_nVTuneGroupID)
		vtune(true);
}

inline void CVProfNode::EnterScope()
{
	m_nCurFrameCalls++;
	if (m_nRecursions++ == 0)
	{
		m_Timer.Start();
		g_109f3648->PushGroup(m_BudgetGroupID);
	}
}

inline bool CVProfNode::ExitScope()
{
	if (--m_nRecursions == 0 && m_nCurFrameCalls != 0)
	{
		m_Timer.sub_100335e0();
		m_CurFrameTime += m_Timer.GetDuration();
		g_109f3648->PopGroup();
	}
	return (m_nRecursions == 0);
}

inline void CVProfile::ExitScope()
{
	if (!m_fAtRoot || m_enabled != 0)
	{
		if (m_pCurNode->ExitScope())
		{
			m_pCurNode = m_pCurNode->GetParent();
		}
		m_fAtRoot = (m_pCurNode == m_pRoot);
	}
}

class CVProfScope
{
public:
	CVProfScope(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted)
	{
		g_109f3648->EnterScope(pszName, detailLevel, pBudgetGroupName, bAssertAccounted);
	}
	~CVProfScope()
	{
		g_109f3648->ExitScope();
	}
};
struct CNTTimerOOL
{
	void sub_100335e0();
};

class CNTInnerScope
{
public:
	CNTInnerScope(const char *pszName)
	{
		CVProfile *p = g_109f3648;
		if (p->m_enabled != 0 || !p->m_fAtRoot)
		{
			if (pszName != p->m_pCurNode->GetName())
				p->m_pCurNode = p->m_pCurNode->GetSubNode(pszName, 0, "Unaccounted");
			p->m_pCurNode->EnterScope();
			p->m_fAtRoot = false;
		}
	}
	~CNTInnerScope()
	{
		CVProfile *pP = g_109f3648;
		if (!pP->m_fAtRoot || pP->m_enabled != 0)
		{
			CVProfNode *pN = pP->m_pCurNode;
			if (--pN->m_nRecursions == 0 && pN->m_nCurFrameCalls != 0)
			{
				((CNTTimerOOL *)&pN->m_Timer)->sub_100335e0();
				pN->m_CurFrameTime += pN->m_Timer.GetDuration();
				g_109f3648->PopGroup();
			}
			if (pN->m_nRecursions == 0)
				pP->m_pCurNode = pP->m_pCurNode->GetParent();
			pP->m_fAtRoot = (pP->m_pCurNode == pP->m_pRoot);
		}
	}
};
#define VPROF(name) CVProfScope VProf_(name, 0, "Unaccounted", false)
#define AI_PROFILE_SCOPE(tag) VPROF(#tag)
#define AI_PROFILE_SCOPE_BEGIN(tag) if (0) ; else { AI_PROFILE_SCOPE(tag)
#define AI_PROFILE_SCOPE_END() } do {} while (0)


class CBaseEntity;
struct CNTEnemies
{
	Vector sub_102dfed0(CBaseEntity *pEnemy);
};

class CNTSlots
{
public:
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39();
	virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49();
	virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59();
	virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69();
	virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79();
	virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void s85(); virtual void s86(); virtual void s87(); virtual void s88(); virtual void s89();
	virtual void s90(); virtual void s91(); virtual void s92(); virtual void s93(); virtual void s94(); virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99();
	virtual void s100(); virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104(); virtual void s105(); virtual void s106(); virtual void s107(); virtual void s108(); virtual void s109();
	virtual void s110(); virtual void s111(); virtual void s112(); virtual void s113(); virtual void s114(); virtual void s115(); virtual void s116(); virtual void s117(); virtual void s118(); virtual void s119();
	virtual void s120(); virtual void s121(); virtual void s122(); virtual void s123(); virtual void s124(); virtual void s125(); virtual void s126(); virtual void s127(); virtual void s128(); virtual void s129();
	virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133(); virtual void s134(); virtual void s135(); virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139();
	virtual void s140(); virtual void s141(); virtual void s142(); virtual void s143(); virtual void s144(); virtual void s145(); virtual void s146(); virtual void s147(); virtual void s148(); virtual void s149();
	virtual void s150(); virtual void s151(); virtual void s152(); virtual void s153(); virtual void s154(); virtual void s155(); virtual void s156(); virtual void s157(); virtual void s158(); virtual void s159();
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163(); virtual void s164(); virtual void s165(); virtual void s166();
	virtual CBaseEntity *GetEnemy();	// slot 167
	virtual void s168(); virtual void s169(); virtual void s170(); virtual void s171(); virtual void s172(); virtual void s173(); virtual void s174(); virtual void s175(); virtual void s176(); virtual void s177();
	virtual void s178(); virtual void s179(); virtual void s180(); virtual void s181(); virtual void s182(); virtual void s183(); virtual void s184(); virtual void s185(); virtual void s186(); virtual void s187();
	virtual void s188(); virtual void s189(); virtual void s190(); virtual void s191(); virtual void s192(); virtual void s193(); virtual void s194(); virtual void s195(); virtual void s196(); virtual void s197();
	virtual void s198(); virtual void s199(); virtual void s200();
	virtual bool FVisible(CBaseEntity *pEnt, int mask, CBaseEntity **ppBlocker, int nOrigin);	// slot 201
	virtual void s202(); virtual void s203(); virtual void s204(); virtual void s205(); virtual void s206(); virtual void s207(); virtual void s208(); virtual void s209(); virtual void s210(); virtual void s211();
	virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215(); virtual void s216();
	virtual const Vector *GetAbsOrigin();	// slot 217
	virtual void s218(); virtual void s219(); virtual void s220();
	virtual const QAngle *GetAbsAngles();	// slot 221
	virtual void s222(); virtual void s223(); virtual void s224(); virtual void s225(); virtual void s226(); virtual void s227(); virtual void s228(); virtual void s229(); virtual void s230(); virtual void s231();
	virtual void s232(); virtual void s233(); virtual void s234(); virtual void s235(); virtual void s236(); virtual void s237(); virtual void s238(); virtual void s239(); virtual void s240(); virtual void s241();
	virtual void s242(); virtual void s243(); virtual void s244(); virtual void s245(); virtual void s246(); virtual void s247(); virtual void s248(); virtual void s249(); virtual void s250(); virtual void s251();
	virtual void s252(); virtual void s253(); virtual void s254(); virtual void s255(); virtual void s256(); virtual void s257(); virtual void s258(); virtual void s259(); virtual void s260(); virtual void s261();
	virtual void s262(); virtual void s263(); virtual void s264(); virtual void s265(); virtual void s266(); virtual void s267(); virtual void s268(); virtual void s269(); virtual void s270(); virtual void s271();
	virtual void s272(); virtual void s273(); virtual void s274(); virtual void s275(); virtual void s276(); virtual void s277(); virtual void s278(); virtual void s279(); virtual void s280(); virtual void s281();
	virtual void s282(); virtual void s283(); virtual void s284(); virtual void s285(); virtual void s286(); virtual void s287(); virtual void s288(); virtual void s289(); virtual void s290(); virtual void s291();
	virtual void s292(); virtual void s293(); virtual void s294(); virtual void s295(); virtual void s296(); virtual void s297(); virtual void s298(); virtual void s299(); virtual void s300(); virtual void s301();
	virtual void s302(); virtual void s303(); virtual void s304(); virtual void s305(); virtual void s306(); virtual void s307(); virtual void s308(); virtual void s309(); virtual void s310(); virtual void s311();
	virtual void UpdateCharacter(float flInterval);	// slot 312
	virtual void s313(); virtual void s314(); virtual void s315(); virtual void s316(); virtual void s317(); virtual void s318(); virtual void s319(); virtual void s320(); virtual void s321(); virtual void s322();
	virtual void s323(); virtual void s324(); virtual void s325(); virtual void s326(); virtual void s327(); virtual void s328(); virtual void s329(); virtual void s330(); virtual void s331(); virtual void s332();
	virtual void s333(); virtual void s334(); virtual void s335(); virtual void s336(); virtual void s337(); virtual void s338(); virtual void s339(); virtual void s340(); virtual void s341(); virtual void s342();
	virtual void s343(); virtual void s344(); virtual void s345(); virtual void s346(); virtual void s347(); virtual void s348(); virtual void s349(); virtual void s350(); virtual void s351(); virtual void s352();
	virtual void s353(); virtual void s354(); virtual void s355(); virtual void s356(); virtual void s357(); virtual void s358(); virtual void s359(); virtual void s360(); virtual void s361(); virtual void s362();
	virtual void s363(); virtual void s364(); virtual void s365(); virtual void s366(); virtual void s367(); virtual void s368(); virtual void s369(); virtual void s370(); virtual void s371(); virtual void s372();
	virtual void s373(); virtual void s374(); virtual void s375(); virtual void s376(); virtual void s377(); virtual void s378(); virtual void s379(); virtual void s380(); virtual void s381(); virtual void s382();
	virtual void s383(); virtual void s384(); virtual void s385(); virtual void s386(); virtual void s387(); virtual void s388(); virtual void s389(); virtual void s390(); virtual void s391(); virtual void s392();
	virtual void s393(); virtual void s394(); virtual void s395(); virtual void s396(); virtual void s397(); virtual void s398(); virtual void s399(); virtual void s400(); virtual void s401(); virtual void s402();
	virtual void s403(); virtual void s404(); virtual void s405(); virtual void s406(); virtual void s407(); virtual void s408(); virtual void s409(); virtual void s410(); virtual void s411(); virtual void s412();
	virtual void s413(); virtual void s414(); virtual void s415(); virtual void s416(); virtual void s417(); virtual void s418(); virtual void s419(); virtual void s420(); virtual void s421(); virtual void s422();
	virtual void s423(); virtual void s424(); virtual void s425(); virtual void s426(); virtual void s427(); virtual void s428(); virtual void s429(); virtual void s430(); virtual void s431();
	virtual void RunAI(char bSkip);	// slot 432
	virtual void s433(); virtual void s434(); virtual void s435(); virtual void s436(); virtual void s437(); virtual void s438(); virtual void s439(); virtual void s440(); virtual void s441(); virtual void s442();
	virtual void s443(); virtual void s444(); virtual void s445(); virtual void s446(); virtual void s447(); virtual void s448(); virtual void s449(); virtual void s450(); virtual void s451(); virtual void s452();
	virtual void s453(); virtual void s454(); virtual void s455(); virtual void s456(); virtual void s457(); virtual void s458(); virtual void s459(); virtual void s460(); virtual void s461(); virtual void s462();
	virtual void s463(); virtual void s464(); virtual void s465(); virtual void s466(); virtual void s467(); virtual void s468(); virtual void s469(); virtual void s470(); virtual void s471(); virtual void s472();
	virtual void s473(); virtual void s474(); virtual void s475(); virtual void s476(); virtual void s477(); virtual void s478(); virtual void s479(); virtual void s480(); virtual void s481(); virtual void s482();
	virtual void s483(); virtual void s484(); virtual void s485(); virtual void s486(); virtual void s487(); virtual void s488(); virtual void s489(); virtual void s490(); virtual void s491(); virtual void s492();
	virtual void s493(); virtual void s494(); virtual void s495(); virtual void s496(); virtual void s497(); virtual void s498(); virtual void s499(); virtual void s500(); virtual void s501(); virtual void s502();
	virtual void s503(); virtual void s504(); virtual void s505(); virtual void s506(); virtual void s507(); virtual void s508(); virtual void s509(); virtual void s510(); virtual void s511(); virtual void s512();
	virtual void s513(); virtual void s514(); virtual void s515(); virtual void s516();
	virtual void MotorSlot517(CBaseEntity *pEnt, Vector *pPos, float a, float b, int c);	// slot 517
	virtual void s518(); virtual void s519(); virtual void s520(); virtual void s521(); virtual void s522(); virtual void s523(); virtual void s524(); virtual void s525(); virtual void s526(); virtual void s527();
	virtual void s528(); virtual void s529(); virtual void s530(); virtual void s531(); virtual void s532(); virtual void s533(); virtual void s534(); virtual void s535(); virtual void s536(); virtual void s537();
	virtual void s538(); virtual void s539(); virtual void s540();
	virtual CNTEnemies *GetEnemies();	// slot 541
	virtual void s542(); virtual void s543(); virtual void s544(); virtual void s545(); virtual void s546(); virtual void s547(); virtual void s548(); virtual void s549(); virtual void s550(); virtual void s551();
	virtual void s552(); virtual void s553(); virtual void s554(); virtual void s555(); virtual void s556(); virtual void s557(); virtual void s558(); virtual void s559(); virtual void s560(); virtual void s561();
	virtual void s562(); virtual void s563(); virtual void s564(); virtual void s565();
	virtual bool FValidateHint(void *pHint);	// slot 566
};

struct CNTConVar
{
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};

struct CNTDevFlag { virtual void vfunc0(); virtual void vfunc1(); };

struct CNTRandom
{
	virtual void v0();
	virtual void v1();
	virtual int RandomInt(int a, int b);
};

struct CNTSoundName
{
	const char *m_psz;
	const char *Get() const { return m_psz ? m_psz : g_106b8540; }
};

struct CNTSoundEntry
{
	int m_id;
	CNTSoundName m_name;
};

struct CNTSoundPlayer
{
	void sub_100119fa(void *pEntity, int id, int flags, float volume, float pitch);
};

extern CNTConVar *g_10924f74;
extern CNTConVar *g_10924d24;
extern CNTDevFlag *g_10924a6c;
extern CNTRandom *g_1070b244;
extern int g_1073dc3c;
extern CNTSoundEntry **g_1073dc40;
extern CNTSoundPlayer g_1073dc28;
extern char g_1093408c;
extern char g_105d0fb0[];
extern char g_105d0ff0[];
extern unsigned char g_10923dd7;
extern int g_109246c0;

static inline float NT_min(float a, float b)
{
	return a <= b ? a : b;
}

static inline int NT_LookupSound(const char *name)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(g_1073dc40[i]->m_name.Get(), name))
			return g_1073dc40[i]->m_id;
	}
	return -1;
}

void sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
char sub_101d1a90(CBaseEntity *pTarget, void *pNPC);
void sub_101cd940(void *pEnt);


#pragma auto_inline(off)
namespace block_10292de0 {
int __stdcall sub_10290660(float a)
{
	float d = a - gpGlobals->curtime;
	if (d <= gpGlobals->frametime) {
		return 1;
	}
	return 0;
}
struct CNTUnit
{
	char sub_102906e0();
	int sub_10290700();
	int sub_102906a0();
	int sub_102906c0();
};
char CNTUnit::sub_102906e0()
{
	return 1;
}
int CNTUnit::sub_10290700()
{
	return sub_10290660(*(float *)((char *)this + 0x6250));
}
int CNTUnit::sub_102906a0()
{
	return sub_10290660(*(float *)((char *)this + 0x6244));
}
int CNTUnit::sub_102906c0()
{
	return sub_10290660(*(float *)((char *)this + 0x6248));
}
}
#pragma auto_inline(on)
#define UNIT ((block_10292de0::CNTUnit *)this)


struct CNTTimer
{
	void sub_100335e0();
};

#define NT_TRACE_PUSH(fn, nm) 	g_109f3620[*g_109f3680].name = fn; 	g_109f3620[*g_109f3680].file = nm; 	g_109f3620[*g_109f3680].line = g_106b8540; 	(*g_109f3680)++;
#define NT_TRACE_POP() (*g_109f3680)--;

#define NT_EXIT_CALL() 	{ 		CVProfile *pP = g_109f3648; 		if (!pP->m_fAtRoot || pP->m_enabled != 0) 		{ 			CVProfNode *pN = pP->m_pCurNode; 			if (--pN->m_nRecursions == 0 && pN->m_nCurFrameCalls != 0) 			{ 				((CNTTimer *)&pN->m_Timer)->sub_100335e0(); 				pN->m_CurFrameTime += pN->m_Timer.GetDuration(); 				g_109f3648->PopGroup(); 			} 			if (pN->m_nRecursions == 0) 				pP->m_pCurNode = pP->m_pCurNode->GetParent(); 			pP->m_fAtRoot = (pP->m_pCurNode == pP->m_pRoot); 		} 	}

#define NT_EXIT_FULL() 	{ 		CVProfile *pP = g_109f3648; 		if (!pP->m_fAtRoot || pP->m_enabled != 0) 		{ 			CVProfNode *pN = pP->m_pCurNode; 			if (--pN->m_nRecursions == 0 && pN->m_nCurFrameCalls != 0) 			{ 				pN->m_Timer.sub_100335e0(); 				pN->m_CurFrameTime += pN->m_Timer.GetDuration(); 				CVProfile *pG = g_109f3648; 				pG->m_nGroupStackDepth--; 				if (pG->m_GroupIDStack[pG->m_nGroupStackDepth] != pG->m_GroupIDStack[pG->m_nGroupStackDepth + 1] && pG->m_bVTuneGroupsEnabled && pG->m_GroupIDStack[pG->m_nGroupStackDepth + 1] == pG->m_nVTuneGroupID) 					vtune(false); 			} 			if (pN->m_nRecursions == 0) 				pP->m_pCurNode = pP->m_pCurNode->GetParent(); 			pP->m_fAtRoot = (pP->m_pCurNode == pP->m_pRoot); 		} 	}

struct CNTFields
{
	char m_pad0000[0x17c];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x26c - 0x180];
	const char *m_name;	// 0x26c
	char m_pad0270[0x14b8 - 0x270];
	int m_bfAINPCFlags;	// 0x14b8
	int m_bfAINPCFlags2;	// 0x14bc
	char m_pad14c0[0x5b84 - 0x14c0];
	unsigned int m_flags5b84;	// 0x5b84
	char m_pad5b88[0x5ba8 - 0x5b88];
	EHANDLE m_h5ba8;	// 0x5ba8
	char m_pad5bac[0x5ddc - 0x5bac];
	void *m_pHintNode;	// 0x5ddc
	char m_pad5de0[0x6080 - 0x5de0];
	char m_b6080;	// 0x6080
	char m_pad6081[0x6244 - 0x6081];
	float m_f6244;	// 0x6244
	float m_f6248;	// 0x6248
	char m_pad624c[0x6254 - 0x624c];
	float m_f6254;	// 0x6254
	float m_f6258;	// 0x6258
	char m_pad625c[0x6264 - 0x625c];
	float m_f6264;	// 0x6264
	float m_f6268;	// 0x6268
	float m_f626c;	// 0x626c
	float m_f6270;	// 0x6270
	char m_pad6274[0x628c - 0x6274];
	EHANDLE m_h628c;	// 0x628c
	Vector m_vecForward;	// 0x6290
	Vector m_vecRight;	// 0x629c
	char m_pad62a8[0x62c0 - 0x62a8];
	float m_flOccludedDelayNormal;	// 0x62c0
	float m_flOccludedDelayCover;	// 0x62c4
	float m_flOccludedDelay;	// 0x62c8
	char m_pad62cc[0x6435 - 0x62cc];
	char m_b6435;	// 0x6435
	char m_pad6436[0x6444 - 0x6436];
	CBaseEntity *m_p6444;	// 0x6444
	EHANDLE m_h6448;	// 0x6448
	char m_pad644c[0x6498 - 0x644c];
	char m_bJumping;	// 0x6498
	char m_pad6499[0x64c0 - 0x6499];
	char m_b64c0;	// 0x64c0
};

struct CNTEnemyFields
{
	char m_pad0000[0x200];
	int m_lifeState;	// 0x200
};

class CTroikaView_10292de0
{
public:
	bool sub_10291230(float *pOut);
	bool sub_10290720(float *pOut);
	bool sub_10290b60(float *pOut);
	bool sub_10290fc0(float *pOut);
	void sub_10292500();
	bool sub_1028fd80(char arg);
	void sub_10291610();
	char sub_102c0aa0();
	void sub_102c0ca0();
	void sub_10295ab0(float flDelay);
	void sub_102bf820(float flFrame);
	void sub_102bfdf0(float flFrame);
	void sub_102bfe10(float flFrame);
	void sub_102bf310(float flFrame);
	float sub_10293a80();
	void sub_1026a0f0();
	bool sub_10280a50();
	bool sub_10269aa0(int condition);
	void sub_10269a20(int a);
	char sub_1026c3d0();
	float sub_1026c7c0();
	void sub_1026c120(int a, char b);
	void sub_10292dc0();
	void sub_10292de0();
};

#define F ((CNTFields *)this)
#define SL ((CNTSlots *)this)

// TARGET: CTroikaView_10292de0::sub_10292de0
void CTroikaView_10292de0::sub_10292de0()
{
	float flNormal;
	ScopeTrace trace("CAI_BaseNPCTroika::NPCThink", this ? (F->m_name ? F->m_name : g_106b8540) : g_105387dc, g_106b8540);
	sub_10292500();
	F->m_bfAINPCFlags2 &= 0x7ffffffb;
	if (F->m_b6080)
		return;

	g_109f3648->EnterScope("CAI_BaseNPC_NPCThink", 0, "Unaccounted", false);
	CVProfile *pP;
	CVProfNode *pN;

	char bSet1 = UNIT->sub_102906c0();
	if (bSet1)
	{
		ScopeTrace trace1("CAI_BaseNPCTroika::NPCThink Set1", F->m_name ? F->m_name : g_106b8540, g_106b8540);
		F->m_f6264 = sub_10293a80();
		CBaseEntity *pEnemy = SL->GetEnemy();
		if (pEnemy && !((CNTEnemyFields *)pEnemy)->m_lifeState)
		{
			Vector vecMy = *SL->GetAbsOrigin();
			Vector vecEnemy = *((CNTSlots *)pEnemy)->GetAbsOrigin();
			Vector vecLKP = SL->GetEnemies()->sub_102dfed0(pEnemy);
			F->m_f6268 = (vecMy - vecEnemy).Length();
			F->m_f626c = fabs(vecMy.z - vecEnemy.z);
			F->m_f6270 = (*SL->GetAbsOrigin() - vecLKP).Length();
			if (!g_10924f74->vfunc1() && g_10924f74->m_n2c && (F->m_bfAINPCFlags2 & 0x400) == 0x400)
				SL->MotorSlot517(pEnemy, &vecLKP, 1.0f, 0.8f, 0);
		}
		else
		{
			F->m_f6268 = 20000.0f;
			F->m_f626c = 20000.0f;
			F->m_f6270 = 20000.0f;
		}
		sub_10139610(SL->GetAbsAngles(), &F->m_vecForward, &F->m_vecRight, 0);
		sub_10291610();
		sub_1026a0f0();
		if ((F->m_bfAINPCFlags & 0x4000) == 0x4000)
			sub_10280a50();
		if (F->m_pHintNode)
		{
			F->m_flOccludedDelay = F->m_flOccludedDelayCover;
			if (!SL->FValidateHint(F->m_pHintNode) || (!F->m_b6435 && F->m_h6448.Get() == SL->GetEnemy() && (sub_10269aa0(0x2e) || sub_10269aa0(0x48))))
			{
				sub_10295ab0(5.0f);
				g_10924a6c->vfunc1();
				sub_10269a20(0x29);
			}
		}
		else
			F->m_flOccludedDelay = F->m_flOccludedDelayNormal;
		if (F->m_p6444)
		{
			if (SL->FValidateHint(F->m_p6444))
				F->m_h5ba8 = F->m_p6444;
			else
			{
				F->m_h5ba8 = 0;
				F->m_p6444 = 0;
			}
		}
		if ((F->m_flags5b84 & 0x8000) == 0x8000 && g_1070b244->RandomInt(0, 0x63) < 1)
		{
			if (!(g_10923dd7 & 1))
			{
				g_10923dd7 |= 1;
				g_109246c0 = NT_LookupSound("Scream_Death");
			}
			g_1073dc28.sub_100119fa(this, g_109246c0, 2, 1.0f, 1.25f);
		}
	}

	{
	float flUpdate = gpGlobals->curtime - F->m_f6254;
	char bUpdate = UNIT->sub_102906a0();
	{
	flNormal = gpGlobals->curtime - F->m_f6258;
	if (bSet1)
	{
		const char *pszName2 = F->m_name ? F->m_name : g_106b8540;
		NT_TRACE_PUSH("CAI_BaseNPCTroika::NPCThink Set2", pszName2)
		sub_102bf820(flNormal);
		if (~F->m_bfAINPCFlags2 & 0x4000)
			sub_102bfdf0(flNormal);
		if (!g_10924d24->vfunc1() && g_10924d24->m_n2c)
			sub_102bfe10(flNormal);
		sub_102bf310(flNormal);
		if (F->m_bfAINPCFlags2 & 0x20000000)
		{
			if (!sub_101d1a90(F->m_h628c.Get(), this) || !((CBaseEntity *)this)->CBaseEntity::vfunc201((CBaseEntity *)F->m_h628c.Get(), 0x2804091, 0, 0))
				sub_101cd940(this);
		}
		if (!sub_1026c3d0())
		{
			if (!g_1093408c)
				F->m_flNextThink = gpGlobals->curtime + 0.1f;
			NT_TRACE_POP()
			pP = g_109f3648;
			if (!pP->m_fAtRoot || pP->m_enabled != 0)
			{
				pN = pP->m_pCurNode;
				if (--pN->m_nRecursions == 0 && pN->m_nCurFrameCalls != 0)
				{
					((CNTTimer *)&pN->m_Timer)->sub_100335e0();
					pN->m_CurFrameTime += pN->m_Timer.GetDuration();
					g_109f3648->PopGroup();
				}
				if (pN->m_nRecursions == 0)
					pP->m_pCurNode = pP->m_pCurNode->GetParent();
				pP->m_fAtRoot = (pP->m_pCurNode == pP->m_pRoot);
			}
			return;
		}
		char bNormal = UNIT->sub_102906e0();
		char bSimple = UNIT->sub_10290700();
		{
			CNTInnerScope vprof2(bNormal ? g_105d0fb0 : g_105d0ff0);
			if (!sub_1028fd80(!bSimple))
				SL->RunAI(!bSimple);
			flNormal = sub_1026c7c0();
			sub_1026c120(*(int *)&flNormal, !bNormal);
		}
		{
		float flNext;
		sub_10290fc0(&flNext);
		sub_10291230(&flNext);
		}
		NT_TRACE_POP()
	}
	}
	if (bUpdate)
	{
		SL->UpdateCharacter(flUpdate);
		if (F->m_b64c0 && !sub_102c0aa0())
			sub_102c0ca0();
	}
	sub_10290720(&flUpdate);
	}
	{
		float flNext2;
		sub_10290b60(&flNext2);
	}
	F->m_flNextThink = ((F->m_f6248 + 0.0f) < (F->m_f6244 + 0.0f)) ? F->m_f6248 : F->m_f6244;
	if (F->m_bJumping)
		F->m_flNextThink = gpGlobals->curtime + 0.01f;
	sub_10292dc0();
	pP = g_109f3648;
	if (!pP->m_fAtRoot || pP->m_enabled != 0)
	{
		pN = pP->m_pCurNode;
		if (--pN->m_nRecursions == 0 && pN->m_nCurFrameCalls != 0)
		{
			pN->m_Timer.sub_100335e0();
			pN->m_CurFrameTime += pN->m_Timer.GetDuration();
			CVProfile *pG = g_109f3648;
			pG->m_nGroupStackDepth--;
			if (pG->m_GroupIDStack[pG->m_nGroupStackDepth] != pG->m_GroupIDStack[pG->m_nGroupStackDepth + 1] && pG->m_bVTuneGroupsEnabled && pG->m_GroupIDStack[pG->m_nGroupStackDepth + 1] == pG->m_nVTuneGroupID)
				vtune(false);
		}
		if (pN->m_nRecursions == 0)
			pP->m_pCurNode = pP->m_pCurNode->GetParent();
		pP->m_fAtRoot = (pP->m_pCurNode == pP->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x10293a60 size=0x5
#include "CTakeDamageInfo.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"

// TARGET: CAI_BaseNPCTroika::vfunc301
// the game's 0x10293a60: a tail call (jmp) of CBaseCombatCharacter::vfunc301
void CAI_BaseNPCTroika::vfunc301(Vector const *a0, CTakeDamageInfo *a1)
{
	((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc301(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x10293a80 size=0x24c
#include "CAI_BaseNPCTroika.h"
#include "CVProfile.h"
#include "globalvars.h"
#include "ehandle.h"
#include "CEntityVSlots.h"

CEntityVSlots *sub_101cd9e0(int index);

struct CCycleSample
{
	unsigned __int64 m_Int64;
	void Sample() { unsigned int *p = (unsigned int *)&m_Int64; __asm { mov ecx, p
		rdtsc
		mov [ecx], eax
		mov [ecx + 4], edx } }
};

inline float LengthYZX(const Vector &v)
{
	return FastSqrt((v.y * v.y + v.z * v.z) + v.x * v.x);
}

// TARGET: sub_10293a80
float __fastcall sub_10293a80(CAI_BaseNPCTroika *pThis)
{
	CVProfile *g = g_109f3648;
	if (g->m_enabled || !g->m_bAtRoot) {
		if (g->m_pCurNode->m_pszName != "CAI_BaseNPCTroika_SetClosestPlayer")
			g->m_pCurNode = g->m_pCurNode->GetSubNode("CAI_BaseNPCTroika_SetClosestPlayer", 0, "Unaccounted");
		CVProfNode *n = g->m_pCurNode;
		int r = n->m_nRecursions;
		n->m_nCurFrameCalls++;
		n->m_nRecursions = r + 1;
		if (r == 0) {
			((CCycleSample *)&n->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(n->m_nBudgetGroupID);
		}
		g->m_bAtRoot = false;
	}
	float flBest = 20000.0f;
	CEntityVSlots *pClosest = 0;
	for (int i = 1; i <= gpGlobals->maxClients; i++) {
		CEntityVSlots *pPlayer = sub_101cd9e0(i);
		if (pPlayer) {
			Vector *pPos = pPlayer->slot217();
			Vector *pMine = ((CEntityVSlots *)pThis)->slot217();
			float d = LengthYZX(*pMine - *pPos);
			if (d < flBest) {
				flBest = d;
				pClosest = pPlayer;
			}
		}
	}
	pThis->m_h628c = (CBaseEntity *)pClosest;
	if (pClosest)
		((CAI_BaseNPC *)pClosest)->sub_101828b0((CBaseEntity *)pThis, flBest);
	g = g_109f3648;
	if (!g->m_bAtRoot || g->m_enabled) {
		CVProfNode *p = g->m_pCurNode;
		if (--p->m_nRecursions == 0 && p->m_nCurFrameCalls != 0) {
			CCycleSample end;
			end.m_Int64 = 0;
			end.Sample();
			CUnknownCycle100335e0 *pc = &p->m_CurFrameTime;
			pc->m_Int64 = end.m_Int64 - pc->m_Int64;
			p->m_TotalTime += pc->m_Int64;
			CVProfile *q = g_109f3648;
			--q->m_nGroupStackDepth;
			int nNew = q->m_GroupIDStack[q->m_nGroupStackDepth];
			int nOld = q->m_GroupIDStack[q->m_nGroupStackDepth + 1];
			if (nNew != nOld && q->m_bVTuneGroupsEnabled && nOld == q->m_nVTuneGroupID)
				vtune(false);
		}
		if (p->m_nRecursions == 0)
			g->m_pCurNode = g->m_pCurNode->m_pParent;
		g->m_bAtRoot = (g->m_pCurNode == g->m_pRoot);
	}
	return flBest;
}
// END FUNCTION

// FUNCTION: 0x10293d70 size=0x10
void __fastcall sub_10293d70(int *p)
{
    unsigned int *f = (unsigned int *)((char *)p + 0x5d8c);
    *f &= 0xffffdfff;
}
// END FUNCTION

// FUNCTION: 0x10293d90 size=0x15
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::sub_10293d90
void CAI_BaseNPCTroika::sub_10293d90(float flDelay)
{
	*(float *)((char *)this + 0x6398) = flDelay + gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10293dc0 size=0x15
#include "vampire.h"

struct CUnknown10293dc0
{
	char m_pad0000[0x639c];
	float m_f639c;

	void sub_10293dc0(float flDelay);
};

// TARGET: CUnknown10293dc0::sub_10293dc0
void CUnknown10293dc0::sub_10293dc0(float flDelay)
{
	m_f639c = flDelay + gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10293df0 size=0x15
#include "vampire.h"

struct CUnknown10293df0
{
	char m_pad0000[0x63a0];
	float m_f63a0;

	void sub_10293df0(float flDelay);
};

// TARGET: CUnknown10293df0::sub_10293df0
void CUnknown10293df0::sub_10293df0(float flDelay)
{
	m_f63a0 = flDelay + gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10293e20 size=0x13
namespace block_10293e20 {
struct CTroikaFwd {
    char pad[0x6398];
    float m_f6398;
    float m_f639c;
    void sub_10293d90(float f);
    void sub_10293dc0(float f);
    void sub_10293e20(float f);
};
#pragma auto_inline(off)
void CTroikaFwd::sub_10293d90(float f) { m_f6398 = f + gpGlobals->curtime; }
void CTroikaFwd::sub_10293dc0(float f) { m_f639c = f + gpGlobals->curtime; }
void CTroikaFwd::sub_10293e20(float f)
{
    sub_10293d90(f);
    sub_10293dc0(f);
}
}
// TARGET: block_10293e20::CTroikaFwd::sub_10293e20
// END FUNCTION

// FUNCTION: 0x10293e50 size=0x1d
#include "CAI_BaseNPCTroika.h"

struct CAI_TroikaSoundPlaceholder {
	void sub_10289ee0(int a);
};

void CAI_BaseNPCTroika::vfunc588()
{
	if (vfunc251())
		((CAI_TroikaSoundPlaceholder *)this)->sub_10289ee0(0xf1);
}
// END FUNCTION

// FUNCTION: 0x10293e80 size=0x24
#include "CAI_BaseNPCTroika.h"

struct CTroikaVFunc527 {
	bool sub_10293e80(void *pArg);
};

// TARGET: CTroikaVFunc527::sub_10293e80
bool CTroikaVFunc527::sub_10293e80(void *pArg)
{
	CAI_BaseNPCTroika *pObj = *(CAI_BaseNPCTroika **)((char *)pArg + 0xa0);
	if (pObj != 0) {
		if (!pObj->sub_102d1540(this)) {
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10293ec0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc488()
{
	static int id = FindSound("Death");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10293f80 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc489()
{
	static int id = FindSound("Target_Suspect");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294040 size=0x18
#include "CAI_BaseNPCTroika.h"

bool CAI_BaseNPCTroika::vfunc509()
{
	if (sub_102c1170())
		return false;
	return sub_1027a420();
}
// END FUNCTION

// FUNCTION: 0x10294070 size=0x19a
#include "CAI_BaseNPCTroika.h"
#include "StatDefault.h"

struct StatOwner
{
	StatDefault *sub_1006cff0(int id);
	int sub_1000fb46(const char *pszName);
};
extern StatOwner g_106c7c34;

struct CDialogPartnerView
{
	char m_pad0000[0xfe8];
	EHANDLE m_hfe8;
};

bool CAI_BaseNPCTroika::vfunc510()
{
	if (sub_102c1170())
		return false;
	if (m_h1538.Get() && m_n153c != -1)
		return false;
	if (((CBaseCombatCharacter *)this)->sub_10341aa0())
		return false;
	if (m_flags14b8 & 0x20000)
		return false;
	if (m_n5cc4 != 1 || m_n5cc0 != 1)
		return false;
	if (!m_h628c.Get())
		return false;
	if (((CDialogPartnerView *)m_h628c.Get())->m_hfe8.Get())
		return false;
	static int id = g_106c7c34.sub_1000fb46("Float_Sound_Info");
	static float v = g_106c7c34.sub_1006cff0(id)->sub_1006caa0(0);
	if (!(m_f6264 > v))
		return CAI_BaseNPC::vfunc510();
	return false;
}
// END FUNCTION

// FUNCTION: 0x10294280 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc490()
{
	static int id = FindSound("Idle_Calm");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294340 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc491()
{
	static int id = FindSound("Pain");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294400 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc492()
{
	static int id = FindSound("Fear_Start");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x102944c0 size=0xa0
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

extern char g_106b8540[];

struct SSoundName
{
	const char *m_psz;

	const char *Get() const { return m_psz ? m_psz : g_106b8540; }
};

struct SSoundEntry
{
	int m_id;
	SSoundName m_name;
};

struct ISoundSettings
{
	virtual void v0();
	virtual void v1();
	virtual int vfunc2(int a, int b);
};

struct CSoundPlayer
{
	void sub_100119fa(void *pEntity, int id, int flags, float volume, float pitch);
};

extern ISoundSettings *g_1070b244;
extern int g_1073dc3c;
extern SSoundEntry **g_1073dc40;
extern CSoundPlayer g_1073dc28;

static inline int LookupSoundId(const char *name)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(g_1073dc40[i]->m_name.Get(), name))
			return g_1073dc40[i]->m_id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc493()
{
	if (g_1070b244->vfunc2(0, 0x63) < 0x19) {
		static int s_nSoundId = LookupSoundId("Target_Lost");
		g_1073dc28.sub_100119fa(this, s_nSoundId, 2, 1.0f, 1.25f);
	}
}
// END FUNCTION

// FUNCTION: 0x10294590 size=0x93
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CAI_BaseNPCTroika.h"
extern char g_106b8540[];
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct CVSoundRec {
	int m_nIndex;
	const char *m_pszName;
};

static inline const char *SafeStr(const char *const *pp)
{
	return *pp ? *pp : g_106b8540;
}

struct CVSoundTable {
	char m_pad00[0x14];
	int m_nCount;	// 0x14
	CVSoundRec **m_ppRecs;	// 0x18

	int Find(const char *pszName)
	{
		for (int i = 0; i < m_nCount; i++) {
			if (!_strcmpi(SafeStr(&m_ppRecs[i]->m_pszName), pszName))
				return m_ppRecs[i]->m_nIndex;
		}
		return -1;
	}
	void sub_101f5950(CAI_BaseNPCTroika *pEnt, int index, int a, float b, float c);
};
extern CVSoundTable g_1073dc28;

void CAI_BaseNPCTroika::vfunc494()
{
	if (!sub_1033e2b0()) {
		static int s_nSound = g_1073dc28.Find("Target_Reacquired");
		g_1073dc28.sub_101f5950(this, s_nSound, 2, 1.0f, 1.25f);
	}
}
// END FUNCTION

// FUNCTION: 0x10294660 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc495()
{
	static int id = FindSound("Surprised");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294720 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc496()
{
	static int id = FindSound("Target_Acquired");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x102947e0 size=0x6e
#include "CAI_BaseNPCTroika.h"

struct CNPCTroikaNameRecord
{
	int m_nId;
	const char *m_pszName;
};

extern int g_1073dc3c;
extern CNPCTroikaNameRecord **g_1073dc40;
extern char g_105d8ccc[];
extern char g_106b8540[];
extern "C" int _strcmpi(const char *, const char *);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline int FindNameRecord(const char *pszName)
{
	for (int i = 0; i < g_1073dc3c; i++)
	{
		if (_strcmpi(STRINGR(g_1073dc40[i]->m_pszName), pszName) == 0)
			return g_1073dc40[i]->m_nId;
	}
	return -1;
}

// TARGET: CAI_BaseNPCTroika::vfunc497
void CAI_BaseNPCTroika::vfunc497()
{
	static int s_nId = FindNameRecord(g_105d8ccc);
}
// END FUNCTION

// FUNCTION: 0x10294870 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc498()
{
	static int id = FindSound("Flee");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294930 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc499()
{
	static int id = FindSound("Idle_Agitated");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x102949f0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc500()
{
	static int id = FindSound("Exert_Heavy");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294ab0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc501()
{
	static int id = FindSound("Exert_Light");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294b70 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc502()
{
	static int id = FindSound("Riled");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294c30 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc503()
{
	static int id = FindSound("Comfort");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294cf0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc504()
{
	static int id = FindSound("Upset");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294db0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc505()
{
	static int id = FindSound("Target_GiveUp");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294e70 size=0x93
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SoundRecord { int m_Id; const char *m_pszName; };
struct SoundSystem { void sub_100119fa(void *pEntity, int a, int b, float c, float d); };
extern int g_1073dc3c;
extern SoundRecord **g_1073dc40;
extern SoundSystem g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(const char *const *p)
{
	return *p ? *p : g_106b8540;
}

static inline int FindSound(const char *name)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(NameOf(&g_1073dc40[i]->m_pszName), name))
			return g_1073dc40[i]->m_Id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc506()
{
	if (sub_1033e2b0())
		return;
	static int s_nSound = FindSound("Target_Reacquired");
	g_1073dc28.sub_100119fa(this, s_nSound, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294f40 size=0x12e
#include "CAI_BaseNPCTroika.h"
#include "StatDefault.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

struct StatOwner {
	int sub_1006cf30(const char *pszName);
	StatDefault *sub_1006cff0(int id);
};
extern StatOwner g_106c7c34;

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc507()
{
	static int id = FindSound("Float");
	int base = (*(int *)((char *)this + 0x128) ? 0xe : 0) + 0x42;
	float pitch = base > 0x32 ? 20 / (base - 0x32) : 4.0;
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, pitch);
	static int statId = g_106c7c34.sub_1006cf30("Float_Sound_Info");
	static int bonus = g_106c7c34.sub_1006cff0(statId)->sub_1006cb60(1);
	*(float *)((char *)this + 0x10ec) = engine->vfunc119(0) + bonus;
}
// END FUNCTION

// FUNCTION: 0x102950c0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::sub_102950c0()
{
	static int id = FindSound("Alarmed_Loop");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10295180 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::sub_10295180()
{
	static int id = FindSound("Animal_Kened");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10295240 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::sub_10295240()
{
	static int id = FindSound("Warning_Loop");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10295300 size=0x7d
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027d990.h"
#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
struct CEntPosView {
	PV10(a0) PV10(a1) PV10(a2) PV10(a3) PV10(a4) PV10(a5) PV10(a6) PV10(a7) PV10(a8) PV10(a9)
	PV10(b0) PV10(b1) PV10(b2) PV10(b3) PV10(b4) PV10(b5) PV10(b6) PV10(b7) PV10(b8)
	PV(c0) PV(c1) PV(c2)
	virtual Vector *vfunc193(Vector *pOut);
	PV10(d0) PV10(d1) PV(d2) PV(d3) PV(d4)
	virtual Vector *vfunc217();
};
float sub_102d61b0(int a);
void CAI_BaseNPCTroika::vfunc563(CBaseEntity *pEnt, const void *pGoal, const void *pParams, const void *pExtra)
{
	if (((CUnknown1027d990 *)this)->sub_1027d990() == 2) {
		CEntPosView *pView = (CEntPosView *)pEnt;
		Vector *pVec = (Vector *)pGoal;
		const Vector *pB = pView->vfunc217();
		{
			Vector buf;
			const Vector *pA = pView->vfunc193(&buf);
			*pVec += *pA - *pB;
		}
		*(float *)pParams = sub_102d61b0(*(int *)((char *)this + 0x1568));
	}
}
// END FUNCTION

// FUNCTION: 0x102953a0 size=0x30
#include "CAI_BaseNPCTroika.h"
bool CAI_BaseNPCTroika::vfunc564()
{
	if ((vfunc513() & 0x8000) && sub_1032e7b0() && !*((char *)this + 0x6078))
		return false;
	return CAI_BaseNPC::vfunc564();
}
// END FUNCTION

// FUNCTION: 0x102953e0 size=0x59
#include "CAI_BaseNPCTroika.h"
// TARGET: CAI_BaseNPCTroika::vfunc592
bool CAI_BaseNPCTroika::vfunc592()
{
    if (sub_10014df8(0x48))
        return true;
    if (gpGlobals->curtime >= m_f607c)
        return true;
    if (m_f607c - 1.0f <= gpGlobals->curtime && !sub_10014df8(0x4f))
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10295460 size=0x3c
#include "CAI_BaseNPCTroika.h"

namespace block_10295460
{
	struct CUnknownTroika10295460 : public CAI_BaseNPCTroika
	{
		int sub_10295460(int a, char bFlag);
	};
}

// TARGET: block_10295460::CUnknownTroika10295460::sub_10295460
int block_10295460::CUnknownTroika10295460::sub_10295460(int a, char bFlag)
{
	int out;
	sub_10271ff0(a, &out);
	int r = sub_1008dc40(out, -1);
	if (r == -1 && bFlag)
		return sub_1008dc40(a, r);
	return r;
}
// END FUNCTION

// FUNCTION: 0x102954b0 size=0x8d
#include "CAI_BaseNPCTroika.h"

int CAI_BaseNPCTroika::vfunc570(CBaseEntity *pHint)
{
	int act = 0x55;
	if (pHint) {
		switch (*(int *)((char *)pHint + 0x5dc)) {
		case 100:
			if (sub_1008dc40(0x57, -1) != -1)
				act = 0x57;
			else if (sub_10295460(0x1111, 0) != -1)
				act = 0x1111;
			break;
		case 101:
			if (sub_1008dc40(0x57, -1) != -1)
				act = 0x57;
			else if (sub_10295460(0x110d, 0) != -1)
				act = 0x110d;
			break;
		}
	}
	return act;
}
// END FUNCTION

// FUNCTION: 0x10295570 size=0x5
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"

// TARGET: CAI_BaseNPCTroika::vfunc381
// the game's 0x10295570: a tail call (jmp) of CBaseCombatCharacter::vfunc381
int CAI_BaseNPCTroika::vfunc381(int a0)
{
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc381(a0);
}
// END FUNCTION

// FUNCTION: 0x10295590 size=0x127
#include "CAI_BaseNPCTroika.h"

struct TranslateGlobal {
    virtual void v0();
    virtual bool IsPaused();
    char pad[0x2c - 4];
    int m_nMode;
};
extern TranslateGlobal *g_10924d6c;
struct TranslateBase { int sub_10328030(int act); };

int CAI_BaseNPCTroika::sub_10295590(int act)
{
    int mode = g_10924d6c->IsPaused() ? 0 : g_10924d6c->m_nMode;
    switch (mode) {
    case 1:
        if (act == 9 || act == 0x1115)
            act = 0x13;
        break;
    case 2:
        if (act == 0x13)
            act = 9;
        break;
    }
    unsigned int flags = *(unsigned int *)((char *)this + 0x5b84);
    if ((flags & 0x40) == 0x40) {
        switch (act) {
        case 9: case 0x13: case 0x17: case 0x1115: case 0x1121:
            act = 0xf17;
            goto translated;
        case 0x16:
            act = 0xf17;
            goto translated;
        }
    } else if ((flags & 0x20) == 0x20) {
        switch (act) {
        case 9: case 0x1115: case 0x1121:
            act = 0x13;
            goto translated;
        case 0x16:
            act = 0x13;
            goto translated;
        }
    }
    if (act == 3)
        act = 1;
translated:
    if (vfunc513() & 0x8000000) {
        if (act == 0x55)
            return vfunc570(*(CBaseEntity **)((char *)this + 0x5ddc));
        if (act == 6 || (act == 1 && (*(unsigned char *)((char *)this + 0x5d8c) & 2)))
            return vfunc569(*(CBaseEntity **)((char *)this + 0x5ddc));
    }
    return ((TranslateBase *)this)->sub_10328030(act);
}
// END FUNCTION

// FUNCTION: 0x10295710 size=0x25
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc376
int CAI_BaseNPCTroika::vfunc376(int a)
{
	switch (a)
	{
	case 1:
		if ((m_flags14bc & 0x80000) == 0x80000)
			a = 0x105d;
		break;
	}
	return a;
}
// END FUNCTION

// FUNCTION: 0x10295750 size=0x264
#include "CAI_BaseNPCTroika.h"
#include "engineiface.h"
#include "Vector.h"
typedef int (__fastcall *TroikaFn0)(void *);
typedef void *(__fastcall *TroikaFnP)(void *);
#define TROIKA_SLOT_I(p, n) ((*(TroikaFn0 **)(p))[n](p))
#define TROIKA_SLOT_P(p, n) ((*(TroikaFnP **)(p))[n](p))
struct TroikaEnemies {
	char sub_102dfa20(void *pEnemy);
	void sub_102dfed0(Vector *pOut, void *pEnemy);
};
#define TF(type, off) (*(type *)((char *)this + (off)))
inline float Dot2D(const Vector &a, const Vector &b) { return a.x * b.x + a.y * b.y; }
void CAI_BaseNPCTroika::vfunc310(int act)
{
	if (act == 0x1093) {
		if (TF(int, 0xfec) >= 0x1093 && TF(int, 0xfec) <= 0x1096) {
			if ((char)TROIKA_SLOT_I(this, 251)) {
				TF(char, 0x5cd8) = 1;
				int r = enginerandom->vfunc2(0, 99);
				if (r < 15)
					CAI_BaseNPC::vfunc310(0x1095);
				else if (r < 30)
					CAI_BaseNPC::vfunc310(0x1096);
				else if (r < 40)
					CAI_BaseNPC::vfunc310(0x1094);
				else
					CAI_BaseNPC::vfunc310(0x1093);
				TF(char, 0x5cd8) = 0;
			}
		} else {
			CAI_BaseNPC::vfunc310(0x1093);
		}
	} else if (act == 0x1115) {
		if ((TF(int, 0x5b84) & 0x40) == 0x40) {
			if (TF(int, 0xfec) != 0xf17)
				CAI_BaseNPC::vfunc310(0xf17);
		} else if ((TF(int, 0x5b84) & 0x20) == 0x20) {
			if (TF(int, 0xfec) != 0x13)
				CAI_BaseNPC::vfunc310(0x13);
		} else if (TF(int, 0xfec) >= 0x1115 && TF(int, 0xfec) <= 0x1117) {
			if ((char)TROIKA_SLOT_I(this, 251)) {
				int nLow = 0xf;
				int nMid = nLow;
				void *pEnemy = (void *)TROIKA_SLOT_I(this, 168);
				if (pEnemy) {
					if (((TroikaEnemies *)TROIKA_SLOT_P(this, 541))->sub_102dfa20(pEnemy)) {
						Vector vecPos;
						((TroikaEnemies *)TROIKA_SLOT_P(this, 541))->sub_102dfed0(&vecPos, pEnemy);
						Vector *pOrigin = (Vector *)TROIKA_SLOT_P(this, 217);
						Vector vecDelta;
						vecDelta.x = vecPos.x - pOrigin->x;
						vecDelta.y = vecPos.y - pOrigin->y;
						if (Dot2D(vecDelta, TF(Vector, 0x629c)) > 0.0f) {
							nLow = 8;
							nMid = 0x18;
						} else {
							nLow = 8;
							nMid = 0x18;
						}
					}
				}
				TF(char, 0x5cd8) = 1;
				int r = enginerandom->vfunc2(0, 99);
				if (nLow > r)
					CAI_BaseNPC::vfunc310(0x1116);
				else if (nMid + nLow > r)
					CAI_BaseNPC::vfunc310(0x1117);
				else
					CAI_BaseNPC::vfunc310(0x1115);
				TF(char, 0x5cd8) = 0;
			}
		} else {
			CAI_BaseNPC::vfunc310(0x1115);
		}
	} else {
		CAI_BaseNPC::vfunc310(act);
	}
}
// END FUNCTION

// FUNCTION: 0x10295a60 size=0x3
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::vfunc465(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10295a80 size=0x11
void __fastcall sub_10295a80(int *p, int dummy, int s1, unsigned int *out, int s3, int s4)
{
    typedef unsigned int (__fastcall *VFunc)(void *, void *);
    unsigned int r = ((VFunc)(*(int **)p)[611])(p, (void *)dummy);
    *out = r;
}
// END FUNCTION

// FUNCTION: 0x10295ab0 size=0x111
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_Hint.h"
#include "ScopeTrace.h"

__declspec(dllimport) void DevMsg(const char *, ...);

struct SNpcView
{
	char pad0[0x26c];
	const char *name26c;
	char pad1[0x14b8 - 0x270];
	unsigned int flags14b8;
	char pad2[0x5ddc - 0x14bc];
	CAI_Hint *pHint;
	char pad3[0x6404 - 0x5de0];
	int n6404;
	char pad4[0x65d0 - 0x6408];
	int vSaved[3];
};

void CAI_BaseNPCTroika::sub_10295ab0(float flDelay)
{
	SNpcView *v = (SNpcView *)this;
	ScopeTrace trace("CAI_BaseNPCTroika::ClearHintNode", this ? (v->name26c ? v->name26c : g_106b8540) : g_105387dc);
	if (v->pHint) {
		if (v->pHint->sub_102d1450(this))
			v->pHint->sub_102d1420(flDelay);
		unsigned int hintFlags = *(unsigned int *)((char *)v->pHint + 0x474);
		v->pHint = 0;
		v->n6404 = 0;
		v->flags14b8 &= 0xffffdfff;
		if ((hintFlags & 0x1f) == 0 && v->vSaved[0] == 0xbf800000 && v->vSaved[1] == 0xbf800000 && v->vSaved[2] == 0xbf800000)
			DevMsg("WARNING: %s called ClearHintNode but never set m_vecSavedAttackExtents\n", sub_1000b5cd());
		v->vSaved[0] = 0xbf800000;
		v->vSaved[1] = 0xbf800000;
		v->vSaved[2] = 0xbf800000;
	}
}
// END FUNCTION

// FUNCTION: 0x10295c20 size=0x220
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"
#include "CUnknown100290c0.h"

extern unsigned int g_10925444;
extern "C" int sprintf(char *, const char *, ...);
char *sub_101d3730(const char *, ...);
struct CAI_FailView { void sub_102d0ab0(const char *); };
struct HintV { char pad[0x470]; unsigned int m470; char pad2[0x5dc - 0x474]; int m5dc; };
struct CTroikaHintCall { bool sub_102974f0(CAI_BaseNPCTroika *pOther); };

// TARGET: CAI_BaseNPCTroika::vfunc566
bool CAI_BaseNPCTroika::vfunc566(CBaseEntity *pEnt)
{
	HintV *pHint = (HintV *)pEnt;
	ScopeTrace trace("CAI_BaseNPCTroika::FValidateHintType", this ? (((CBaseEntity *)this)->m_name26c ? ((CBaseEntity *)this)->m_name26c : g_106b8540) : g_105387dc);
	if (pHint != 0) {
		unsigned int mask = pHint->m470;
		if ((mask & *(unsigned int *)((char *)this + 0x62e4)) == 0) {
			if ((void *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(&g_10925444) == (void *)this) {
				char a[128];
				char b[128];
				char *p = a;
				int i = 0;
				do {
					unsigned int bit = 1 << i;
					if ((bit & mask) == bit)
						p += sprintf(p, " %d", i + 1);
					i++;
				} while (i < 32);
				*p = 0;
				p = b;
				i = 0;
				do {
					unsigned int bit = 1 << i;
					if ((*(unsigned int *)((char *)this + 0x62e4) & bit) == bit)
						p += sprintf(p, " %d", i + 1);
					i++;
				} while (i < 32);
				*p = 0;
				((CAI_FailView *)pHint)->sub_102d0ab0(sub_101d3730("Hint group id %s usable %s", a, b));
			}
		} else {
			switch (pHint->m5dc) {
			case 100:
			case 101:
				return ((CTroikaHintCall *)this)->sub_102974f0((CAI_BaseNPCTroika *)pHint);
			case 0x27d8:
				return sub_10297430((CAI_BaseNPCTroika *)pHint);
			case 0x2774:
				return true;
			case 0x283c:
			case 0x283d:
				return sub_10295ed0(pEnt);
			case 0x28a0:
				return sub_102961a0(pEnt);
			}
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10295ed0 size=0x232
#include "CAI_BaseNPCTroika.h"
#include "CAI_Hint.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "Vector.h"
#include "CEHandleGet.h"

void sub_101d2f40(Vector *pOut, float flYaw);
struct CAI_HintYawView { float sub_102d12e0(); };
struct CAI_BaseNPCTroikaV : CAI_BaseNPCTroika { bool sub_10295ed0(CAI_Hint *pHint); };

bool CAI_BaseNPCTroikaV::sub_10295ed0(CAI_Hint *pHint)
{
	if (pHint && !pHint->m_n5e8)
	{
		CBaseEntity *pOther = (CBaseEntity *)EHandle_Get(m_h6448);
		float fCos = pHint->m_f458;
		if (pOther)
		{
			Vector vFwd;
			{
				Vector *pHintPos = ((CEntityVSlots *)pHint)->slot217();
				Vector *pOtherPos = ((CEntityVSlots *)pOther)->slot217();
				Vector d;
				d.x = pOtherPos->x - pHintPos->x;
				d.y = pOtherPos->y - pHintPos->y;
				float fDist = d.Length2D();

				if (pHint == (CAI_Hint *)*(void **)((char *)this + 0x5ddc))
				{
					if (pHint->m_f45c - 64.0f > fDist)
						return false;
					if (pHint->m_f460 + 64.0f < fDist)
						return false;
				}
				else
				{
					if (fDist < pHint->m_f45c)
						return false;
					if (fDist > pHint->m_f460)
						return false;
				}

				fDist = 1.0f / (fDist + 1.1920929e-7f);
				const Vector &cd = d;
				Vector n(cd[0] * fDist, cd[1] * fDist, 0.0f);

				sub_101d2f40(&vFwd, ((CAI_HintYawView *)pHint)->sub_102d12e0());
				if (vFwd.x * n.x + n.y * vFwd.y <= fCos)
					return false;
			}
			if (pHint != (CAI_Hint *)*(void **)((char *)this + 0x5ddc))
			{
				Vector *pThisPos = ((CEntityVSlots *)this)->slot217();
				Vector *pHintPos2 = ((CEntityVSlots *)pHint)->slot217();
				Vector vDir = *pHintPos2 - *pThisPos;
				if (VectorNormalize(vDir) > 512.0f)
					return false;
				if (pHint->m_n5dc == 0x283d && vFwd.x * vDir.x + vFwd.y * vDir.y <= 0.5f)
					return false;
				if (!sub_102968f0(pHint, pOther))
					return false;
			}
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102961a0 size=0x52e
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_Hint.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "UTIL_Trace.h"
#include "Vector.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct CTroikaCollView102961a0
{
	virtual void v0();
	virtual void v1();
	virtual Vector *v2();
};

struct CTroikaView102961a0
{
	char pad0000[0x26c];
	const char *m_pszName26c;
	CTroikaCollView102961a0 m_coll270;
	char pad274[0x5ddc - 0x274];
	CAI_Hint *m_pHint5ddc;
	char pad5de0[0x6448 - 0x5de0];
	EHANDLE m_h6448;
};

struct CHintNameView102961a0
{
	char pad0000[0x468];
	const char *m_psz468;
};

class CAI_FailView
{
public:
	void sub_102d0ab0(const char *pszMsg);
};

struct CNameView102961a0
{
	const char *sub_100ab4f0();
};

class Vector2D102961a0
{
public:
	float x, y;
	Vector2D102961a0 operator-(const Vector2D102961a0 &v) const;
	float Length() const;
	float Dot(const Vector2D102961a0 &v) const;
	float operator[](int i) const { return ((const float *)this)[i]; }
};

inline void Vector2DSubtract(const Vector2D102961a0 &a, const Vector2D102961a0 &b, Vector2D102961a0 &c)
{
	c.x = a.x - b.x;
	c.y = a.y - b.y;
}

inline float Vector2DLength(const Vector2D102961a0 &v)
{
	return FastSqrt(v.x * v.x + v.y * v.y);
}

inline float DotProduct2D(const Vector2D102961a0 &a, const Vector2D102961a0 &b)
{
	return a.x * b.x + a.y * b.y;
}

inline Vector2D102961a0 Vector2D102961a0::operator-(const Vector2D102961a0 &v) const
{
	Vector2D102961a0 res;
	Vector2DSubtract(*this, v, res);
	return res;
}

inline float Vector2D102961a0::Length() const
{
	return Vector2DLength(*this);
}

inline float Vector2D102961a0::Dot(const Vector2D102961a0 &v) const
{
	return DotProduct2D(*this, v);
}

typedef Vector2D102961a0 V2;
extern EHANDLE g_10925444;
const char *sub_101d3730(const char *pszFmt, ...);
float __fastcall sub_102d12e0(void *pThis);
Vector *sub_101d2f40(Vector *pOut, float flYaw);
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

#define HINT_FAIL(msg) \
	{ \
		if (g_10925444.Get() == (CBaseEntity *)this) \
			((CAI_FailView *)pHint)->sub_102d0ab0(msg); \
		return false; \
	}

bool CAI_BaseNPCTroika::sub_102961a0(CBaseEntity *pEnt)
{
	CAI_Hint *pHint = (CAI_Hint *)pEnt;
	CTroikaView102961a0 *pView = (CTroikaView102961a0 *)this;
	CHintNameView102961a0 *pHintName = (CHintNameView102961a0 *)pEnt;

	if (!pHint || pHint->m_n5e8)
		return false;

	if (*STRINGR(pHintName->m_psz468) && _strcmpi(STRINGR(pHintName->m_psz468), STRINGR(pView->m_pszName26c)) != 0)
	{
		if (g_10566458->sub_100290c0((const unsigned int *)&g_10925444) == (void *)this)
			((CAI_FailView *)pHint)->sub_102d0ab0(sub_101d3730("Target name mismatch (%s)", STRINGR(pHintName->m_psz468)));
		return false;
	}

	CBaseEntity *pCover = pView->m_h6448.Get();
	if (!pCover)
		HINT_FAIL("No cover object");

	float flCos = pHint->m_f458;
	Vector *pHintPos = ((CEntityVSlots *)pHint)->slot217();
	Vector *pCoverPos = ((CEntityVSlots *)pCover)->slot217();
	V2 vecToCover = *(V2 *)pCoverPos - *(V2 *)pHintPos;
	float flDist = vecToCover.Length();

	if (pHint == pView->m_pHint5ddc)
	{
		if (pHint->m_f45c - 64.0f > flDist || pHint->m_f460 + 64.0f < flDist)
			HINT_FAIL(sub_101d3730("Distance (%d) < %d or > %d", (int)flDist, (int)pHint->m_f45c, (int)pHint->m_f460));
	}
	else if (flDist < pHint->m_f45c || flDist > pHint->m_f460)
		HINT_FAIL(sub_101d3730("Distance (%d) < %d or > %d", (int)flDist, (int)pHint->m_f45c, (int)pHint->m_f460));

	float flInv = 1.0f / (flDist + 1.1920929e-7f);
	Vector vecDir(vecToCover.x * flInv, vecToCover.y * flInv, 0.0f);
	Vector vecFacing;
	sub_101d2f40(&vecFacing, sub_102d12e0(pHint));
	flDist = vecFacing.x * vecDir.x + vecDir.y * vecFacing.y;
	if (flDist <= flCos)
		HINT_FAIL(sub_101d3730("Enemy outside of good range (%.2f) <= %.2f", (double)flDist, (double)flCos));

	if (pHint != pView->m_pHint5ddc)
	{
		Vector vecStart = *((CEntityVSlots *)this)->slot217();
		vecStart.z += pView->m_coll270.v2()->z;
		Vector vecTarget;
		((CAI_VecView *)pHint)->sub_102d1180(this, &vecTarget);
		CGameTrace tr;
		UTIL_TraceLine_DebugCall(vecStart, vecTarget, 0x46804099, this, 0, &tr);
		if (tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid)
			HINT_FAIL(sub_101d3730("Failed LOS check (%s)", tr.m_pEnt ? ((CNameView102961a0 *)tr.m_pEnt)->sub_100ab4f0() : "**UNKNOWN**"));
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10296820 size=0x12
namespace lifted {
extern char g_1049ae1c;
}
struct CUnknown10296820 { void * sub_10296820(int); };
void * CUnknown10296820::sub_10296820(int a0)
{
    *(int *)this = (int)&lifted::g_1049ae1c;
    *(int *)((char *)this + 4) = a0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10296850 size=0x3
#include "CTraceFilterHintLOS.h"
int CTraceFilterHintLOS::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10296870 size=0x58
#include "CTraceFilterHintLOS.h"
#include "CBaseEntity.h"
#include "CGameRules.h"
extern CGameRules *g_1070ba0c;

bool CTraceFilterHintLOS::vfunc0(void *pEntity, int contentsMask)
{
#define pEntity ((CBaseEntity *)pEntity)
	if (!pEntity->vfunc91(m_pPassEnt, contentsMask))
		return (bool)(0);
	if (pEntity->m_p9c)
		return (bool)(0);
	CGameRules *pRules = g_1070ba0c;
	int group = pEntity->m_field368;
	return (bool)(pRules->vfunc77(m_pPassEnt, group) != 0);
#undef pEntity
}
// END FUNCTION

// FUNCTION: 0x102968f0 size=0x299
#include "CAI_BaseNPCTroika.h"
#include "CAI_Hint.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "Ray_t.h"
#include "Vector.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "CEHandleGet.h"

class CUnknown10296820
{
public:
	void *m_pVtbl;
	void *m_pPassEnt;
	void *sub_10296820(int a);
};

class CUnknown10924cdc
{
public:
	virtual char vfunc0();
	virtual char vfunc1();
	char m_pad[0x2c - 4];
	void *m_p2c;
};

extern CUnknown10924cdc *g_10924cdc;
extern unsigned int g_10925444;

int sub_1023bd00();
void sub_10142e90(const Vector *pStart, const Vector *pEnd, int r, int g, int b, unsigned char a, float flDuration);
void sub_10143d80(const Vector &v, float flScale, int r, int g, int b, int a, float flDuration);
void sub_10146570(float *pStart, float *pEnd, int a, int b, int c, int d, float e);

bool CAI_BaseNPCTroika::sub_102968f0(CAI_Hint *pHint, CBaseEntity *pTarget)
{
	if (!pHint || !pTarget)
		return false;

	Vector vStart, vEnd;
	((CAI_VecView *)pHint)->sub_102d1180(this, &vStart);
	vStart.z += ((CCollisionProperty *)((char *)this + 0x270))->vfunc2()[2];

	((CEntityVSlots *)pTarget)->slot193(&vEnd);

	CUnknown10296820 filter;
	filter.sub_10296820(0);

	Ray_t ray;
	ray.sub_1004f7a0((const float *)&vStart, (const float *)&vEnd);

	CGameTrace trace;
	g_1070b254->vfunc4(&ray, 0x46804099, (CTraceFilterNoCharacterCollide *)&filter, &trace);

	if (g_10738960.sub_1005f190())
		sub_10146570(trace.m_startpos, trace.m_endpos, 255, 0, 0, 1, -1.0f);

	if (!g_10924cdc->vfunc1() && g_10924cdc->m_p2c)
	{
		if ((CBaseEntity *)EHandle_Get(g_10925444) == (CBaseEntity *)this || !EHandle_Get(g_10925444))
		{
			int r, g, b;
			if (trace.m_fraction < 1.0f)
				goto blocked;
			if (trace.m_allsolid)
				goto blocked;
			if (trace.m_startsolid)
				goto blocked;
			r = 0; g = 255; b = 0;
			goto havecolor;
blocked:
			{
				CBaseEntity *pBlocker = trace.m_pEnt;
				if (pBlocker && (int)pBlocker != sub_1023bd00())
				{
					pBlocker->sub_1009f4e0();
					r = 255; g = 128; b = 128;
					goto havecolor;
				}
				r = 255; g = 0; b = 0;
			}
havecolor:
			sub_10142e90(&vStart, &vEnd, r, g, b, 0, 5.0f);
			Vector vPos = vStart + (vEnd - vStart) * trace.m_fraction;
			sub_10143d80(vPos, 4.0f, r, g, b, 0, 5.0f);
		}
	}

	if (trace.m_fraction < 1.0f || trace.m_allsolid || trace.m_startsolid)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10296c40 size=0x64e
#include "CNPC_VTzimisce.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_Hint.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "Vector.h"
#include <math.h>

const char *sub_101d3730(const char *pszFmt, ...);
float __fastcall sub_102d12e0(void *pThis);
extern EHANDLE g_10925444;

class Vector2D
{
public:
    float x, y;
};

inline void Vector2DSubtract(const Vector2D &a, const Vector2D &b, Vector2D &c)
{
    c.x = a.x - b.x;
    c.y = a.y - b.y;
}

inline void Vector2DMultiply(const Vector2D &a, float b, Vector2D &c)
{
    c.x = a.x * b;
    c.y = a.y * b;
}

void sub_101d2f40(Vector *pOut, float flYaw);

class CAI_FailView
{
public:
    void sub_102d0ab0(const char *pszMsg);
};

class CUnknown102d0b20
{
public:
    void sub_102d0b20();
};

struct CWeaponRangeView
{
    char m_pad0000[0x8c0];
    float m_f8c0;
};

struct CTroikaHintView
{
    char m_pad0000[0x5ddc];
    CAI_Hint *m_pHint5ddc;
};

#define pHint ((CAI_Hint *)pOther)
#define pTarget pEnt

// TARGET: sub_10296c40
char CAI_BaseNPCTroika::sub_10296c40(CAI_BaseNPCTroika *pOther, CBaseEntity *pEnt, int a, float f)
{
    if (0 == pHint || pHint->m_n5e8 != 0)
        goto disabled;

    if (pHint == ((CTroikaHintView *)this)->m_pHint5ddc && m_b6435)
    {
        if (g_10925444.Get() == (CBaseEntity *)this)
            ((CUnknown102d0b20 *)pHint)->sub_102d0b20();
        return 1;
    }

    if (pTarget == 0)
    {
        if (g_10925444.Get() == (CBaseEntity *)this)
            ((CUnknown102d0b20 *)pHint)->sub_102d0b20();
        return 1;
    }

    {
        if (sub_1032e7b0() == 0)
        {
            if (g_10925444.Get() == (CBaseEntity *)this)
                ((CAI_FailView *)pHint)->sub_102d0ab0("No active weapon");
            return 0;
        }

        if (fabs(((CEntityVSlots *)pHint)->slot217()->z - ((CEntityVSlots *)this)->slot217()->z) > 64.0)
        {
            if (g_10925444.Get() == (CBaseEntity *)this)
                ((CAI_FailView *)pHint)->sub_102d0ab0(sub_101d3730("Height diff (%d) > %d",
                    (int)fabs(((CEntityVSlots *)pHint)->slot217()->z - ((CEntityVSlots *)this)->slot217()->z), 64));
            return 0;
        }

        const Vector &vecHintPos = *((CEntityVSlots *)pHint)->slot217();
        const Vector &vecTargetPos = *((CEntityVSlots *)pTarget)->slot217();
        Vector vecDelta;
        Vector2DSubtract(*(const Vector2D *)&vecTargetPos, *(const Vector2D *)&vecHintPos, *(Vector2D *)&vecDelta);
        float flDist = vecDelta.Length2D();

        if (flDist < pHint->m_f45c)
        {
            if (g_10925444.Get() == (CBaseEntity *)this)
                ((CAI_FailView *)pHint)->sub_102d0ab0(sub_101d3730("Distance (%d) < %d", (int)flDist, (int)pHint->m_f45c));
            return 0;
        }

        if (!m_b6435)
        {
            float flWeaponRange = ((CWeaponRangeView *)sub_1032e7b0())->m_f8c0;
            if (flDist > flWeaponRange || flDist > pHint->m_f460)
            {
                if (g_10925444.Get() == (CBaseEntity *)this)
                    ((CAI_FailView *)pHint)->sub_102d0ab0(sub_101d3730("Distance (%d) > %d or %d", (int)flDist, (int)flWeaponRange, (int)pHint->m_f460));
                return 0;
            }
        }

        if (((CTroikaHintView *)this)->m_pHint5ddc != pHint)
        {
            Vector vecSelf = *((CEntityVSlots *)this)->slot217() - *((CEntityVSlots *)pTarget)->slot217();
            Vector vecHint = *((CEntityVSlots *)pHint)->slot217() - *((CEntityVSlots *)pTarget)->slot217();
            VectorNormalize(vecSelf);
            VectorNormalize(vecHint);
            float flProj = vecSelf.x * vecHint.x + vecSelf.y * vecHint.y;
            if (flProj < 0.2f)
            {
                if (g_10925444.Get() == (CBaseEntity *)this)
                    ((CAI_FailView *)pHint)->sub_102d0ab0(sub_101d3730("Projection (%.2f) < 0.2", (double)flProj));
                return 0;
            }
        }

        Vector vecDir;
        Vector2DMultiply(*(Vector2D *)&vecDelta, 1.0f / (flDist + 1.1920929e-7f), *(Vector2D *)&vecDir);
        Vector vecForward;
        sub_101d2f40(&vecForward, sub_102d12e0(pHint));
        float flFacing = vecForward.x * vecDir.x + vecDir.y * vecForward.y;

        if (flFacing <= *(float *)&a)
        {
            if (g_10925444.Get() == (CBaseEntity *)this)
                ((CAI_FailView *)pHint)->sub_102d0ab0(sub_101d3730("Enemy outside of good range (%.2f) <= %.2f", (double)flFacing, (double)*(float *)&a));
            return 0;
        }

        if (flFacing >= f)
        {
            if (g_10925444.Get() == (CBaseEntity *)this)
                ((CAI_FailView *)pHint)->sub_102d0ab0(sub_101d3730("Enemy inside of bad range (%.2f) >= %.2f", (double)flFacing, (double)f));
            return 0;
        }

        if (m_bForceCoverLOSCheck && !sub_102968f0(pHint, pTarget))
        {
            if (g_10925444.Get() == (CBaseEntity *)this)
                ((CAI_FailView *)pHint)->sub_102d0ab0("Failed hint LOS");
            return 0;
        }
    }

    if (g_10925444.Get() == (CBaseEntity *)this)
        ((CUnknown102d0b20 *)pHint)->sub_102d0b20();
    return 1;

disabled:
    if (g_10925444.Get() == (CBaseEntity *)this)
        ((CAI_FailView *)pHint)->sub_102d0ab0("Disabled");
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10297430 size=0x82
#include "CAI_BaseNPCTroika.h"

struct HandleEntry_t
{
	CBaseEntity *m_pEnt;
	unsigned int m_nSerial;
	int pad;
};
struct HandleTable_t
{
	int pad;
	HandleEntry_t m_Entries[1];
};
extern HandleTable_t *g_10566458;

static inline CBaseEntity *HandleGet(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	HandleEntry_t *e = &g_10566458->m_Entries[h & 0x1fff];
	if (e->m_nSerial == (h >> 13))
		return e->m_pEnt;
	return 0;
}

bool CAI_BaseNPCTroika::sub_10297430(CAI_BaseNPCTroika *pOther)
{
	if (!HandleGet(m_h6448))
		return false;
	CBaseEntity *pEnt = HandleGet(m_h6448);
	bool bResult = sub_10296c40(pOther, pEnt, *(int *)((char *)pOther + 0x458), 0.731f) != 0;
	return bResult;
}
// END FUNCTION

// FUNCTION: 0x102974f0 size=0x49
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
void CAI_BaseNPCTroika::sub_102974f0(CAI_BaseNPCTroika *pOther)
{
	sub_10296c40(pOther, (CBaseEntity *)EHandle_Get(m_h6448), *(int *)((char *)pOther + 0x458), 1.1f);
}
// END FUNCTION

// FUNCTION: 0x10297560 size=0xa1
#include "CAI_BaseNPCTroika.h"

int CAI_BaseNPCTroika::vfunc569(CBaseEntity *pHint)
{
    if ((*(unsigned int *)((char *)this + 0x14b8) & 0x200) == 0x200)
        return 8;
    if (pHint) {
        switch (*(int *)((char *)pHint + 0x5dc)) {
        case 100:
            if (sub_10295460(0x1111, 0) != -1)
                return 0x1111;
            break;
        case 101:
            if (sub_10295460(0x110d, 0) != -1)
                return 0x110d;
            break;
        case 0x27d8:
            if (sub_10295460(0x1118, 0) != -1)
                return 0x1118;
            break;
        }
    }
    return sub_10274aa0(pHint);
}
// END FUNCTION

// FUNCTION: 0x10297640 size=0x251
// TARGET: CAI_BaseNPCTroika::vfunc572

#include "CAI_BaseNPCTroika.h"
#include "CAI_Motor.h"
#include "ConVar.h"

extern ConVar *g_109247ec;

void CAI_BaseNPCTroika::vfunc572()
{
	if ((!g_109247ec->vfunc1() && g_109247ec->m_nValue != 0) || *(char *)((char *)this + 0x65f9) != 0)
	{
		float flValue = (*(CAI_Motor **)((char *)this + 0x5d44))->sub_102e1f90();

		if (flValue <= -70.0f && flValue >= -140.0f)
		{
			if (sub_10295460(0xa2, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0xa2);
				return;
			}
		}
		if (flValue >= 70.0f && flValue <= 140.0f)
		{
			if (sub_10295460(0xa1, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0xa1);
				return;
			}
		}
		if (flValue < -140.0f)
		{
			if (sub_10295460(0x9e, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x9e);
				return;
			}
			if (sub_10295460(0x9d, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x9d);
				return;
			}
		}
		if (flValue > 140.0f)
		{
			if (sub_10295460(0x9d, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x9d);
				return;
			}
			if (sub_10295460(0x9e, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x9e);
				return;
			}
		}
		if (flValue <= -15.0f)
		{
			if (sub_10295460(0x3c, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x3c);
				return;
			}
		}
		if (flValue >= 15.0f)
		{
			if (sub_10295460(0x3b, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x3b);
				return;
			}
		}
	}

	sub_10272650(1);
}
// END FUNCTION

// FUNCTION: 0x10297940 size=0xb0
#include "CAI_BaseNPCTroika.h"
#include "CAI_Motor.h"

void __fastcall sub_102e0b40(float *pMotor);

struct CTroikaMotorView
{
	char m_pad0000[0x5d44];
	CAI_Motor *m_pMotor;
	char m_pad5d48[0x63e8 - 0x5d48];
	float m_flYawOffset;
};

void CAI_BaseNPCTroika::sub_10297940(const float *pPosition)
{
	CTroikaMotorView *pView = (CTroikaMotorView *)this;
	sub_102e0b40((float *)pView->m_pMotor);
	pView->m_pMotor->sub_102e2020(pPosition, 0);
	sub_10297a20();
	float flYaw = vfunc221()[1] + pView->m_flYawOffset;
	CAI_Motor *pMotor = pView->m_pMotor;
	m_flags14b8 |= 0x8000000;
	if (pMotor->m_28)
	{
		if (flYaw >= 180.0f)
			flYaw -= 180.0f;
		else
			flYaw += 180.0f;
	}
	if (pMotor->m_1c == 0x43340000)
		pMotor->m_34 = flYaw;
	else
		pMotor->m_34 = pMotor->sub_102e0a80(flYaw);
}
// END FUNCTION

// FUNCTION: 0x10297a20 size=0x1bb
#include "CAI_BaseNPCTroika.h"
#include "CAI_Motor.h"

void CAI_BaseNPCTroika::sub_10297a20()
{
	float flDelta = (*(CAI_Motor **)((char *)this + 0x5d44))->sub_102e1f90();
	if (flDelta < -140.0f || flDelta > 140.0f) {
		if (sub_10295460(0x10ff, 0) != -1) {
			*(int *)((char *)this + 0x63e4) = 8;
			unsigned short nTurn = (unsigned short)(int)((flDelta + 180.0f) * 182.04445f);
			*(float *)((char *)this + 0x63e8) = (float)(int)nTurn * 0.005493164f;
			sub_10272650(0x10ff);
			return;
		}
	}
	if (flDelta <= -40.0f) {
		if (sub_10295460(0x10fd, 0) != -1) {
			*(int *)((char *)this + 0x63e4) = 6;
			unsigned short nTurn = (unsigned short)(int)((flDelta + 107.0f) * 182.04445f);
			*(float *)((char *)this + 0x63e8) = (float)(int)nTurn * 0.005493164f;
			sub_10272650(0x10fd);
			return;
		}
	}
	if (flDelta >= 40.0f) {
		if (sub_10295460(0x10fa, 0) != -1) {
			*(int *)((char *)this + 0x63e4) = 3;
			unsigned short nTurn = (unsigned short)(int)((flDelta - 93.0f) * 182.04445f);
			*(float *)((char *)this + 0x63e8) = (float)(int)nTurn * 0.005493164f;
			sub_10272650(0x10fa);
			return;
		}
	}
	if (sub_10295460(0x10f8, 0) != -1) {
		*(int *)((char *)this + 0x63e4) = 1;
		*(float *)((char *)this + 0x63e8) = flDelta;
		sub_10272650(0x10f8);
		return;
	}
	*(float *)((char *)this + 0x63e8) = flDelta;
	*(int *)((char *)this + 0x63e4) = 0;
	sub_10272650(1);
}
// END FUNCTION

// FUNCTION: 0x10297c50 size=0xa
#include "ConVar.h"
ConVar g_10924c90("debug_turn_scalar", ".15", 0, "Set this var to override turn animation speed.");
// END FUNCTION

// FUNCTION: 0x10297ce0 size=0x297
#include "CAI_BaseNPCTroika.h"
#include "ConVar.h"
#include <math.h>

inline bool IsBitSet(unsigned int x, int bit) { return (x >> bit) & 1; }
// TARGET: CAI_BaseNPCTroika::vfunc516

extern ConVar g_10924c90;
extern ConVar g_109247e8;
extern ConVar g_10923e80;

float CAI_BaseNPCTroika::vfunc516()
{
	if ( m_flags5d8c & 0x2000 )
	{
		typedef float (__fastcall *CVFunc242)(void *);
		float f = ((CVFunc242)((*(void ***)this)[242]))(this);
		float r = fabs(f) * g_10924c90.GetFloat();
		if ( r > 1.0f )
			return r;
		return 1.0f;
	}

	if ( m_flags14b8 & 0x08000000 )
		return 45.0f;

	switch ( m_nState0fec )
	{
	case 1:
	case 5:
				if ( IsBitSet(*(int *)((char *)this + 0x5b64), 7) )
				{
					if ( g_109247e8.GetBool() )
						return 30.0f;
					return g_10923e80.GetFloat();
				}
				{
					static ConVar debug_slow_idle_yaw_speed("debug_slow_idle_yaw_speed", "20", 0);
					return debug_slow_idle_yaw_speed.GetFloat();
				}
	case 9:
				if ( IsBitSet(*(int *)((char *)this + 0x5b64), 7) )
					return 45.0f;
				{
					static ConVar debug_slow_walk_yaw_speed("debug_slow_walk_yaw_speed", "25", 0);
					return debug_slow_walk_yaw_speed.GetFloat();
				}
	case 0x13:
	case 0x1093:
	case 0x1094:
		return 160.0f;
	case 0x1095:
	case 0x1096:
		return 160.0f;
	case 0x3b:
	case 0x3c:
	case 0x1121:
		return 30.0f;
	default:
		return 45.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x10298070 size=0x23e
#include "MvsnSec0.h"
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CHL2_Player.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "ScopeTrace.h"
#include "CAI_BaseNPCTroika.h"
#include <string.h>

// TARGET: ?vfunc312@CAI_BaseNPCTroika@@QAEXH@Z
extern char g_10924fb8;
extern CBaseHandle g_109247e0[2];

#include "CAI_BaseNPC_vfunc144.h"
#include "CCineNPC.h"
#include "CUnknown103158f0.h"
#include "IPhysicsObject.h"
#include "ConVar.h"

extern ConVar g_106bbaa0;
extern ConVar g_10924a68;
#define FILE_144 "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp"

// The game's first decliner of the header inline EHandleEntityList::LookupEntity in this unit is
// CAI_BaseNPC::Event_Killed (0x10265ad0, judged 0 below as a same-unit copy): its LookupEntity COMDAT is compiled
// before this function, so VC6 knows the call's side effects (not its registers) here, as in the game.
namespace block_10298070
{
struct CScriptView144
{
	char m_pad0000[0x204];
	unsigned int m_spawnflags;
	char m_pad0208[0x5f91 - 0x208];
	char m_bPlayedSequence;
};

struct CDamageInfo144 : CAI_NPCDamageRecord
{
	CBaseEntity *GetAttacker() const { return m_pInflictor; }
};

struct CEventKilled144 : CAI_BaseNPCUnit144
{
	IPhysicsObject *VPhysicsGetObject() const { return m_pPhysObj36c; }
	void SetIdealStateDbg(int state, const char *pszFile, int nLine) { m_pszFile1b3c = pszFile; m_nLine1b40 = nLine; m_nIdealState5cc4 = state; }
	void SetTouchNull() { *(int *)((char *)this + 0x1ec) = 0; }
	void SetCondition(int iCondition) { if (g_10924a68.GetBool()) {} sub_10269a20(iCondition); }
	void sub_10265ad0(const CDamageInfo144 &info);
};

void CEventKilled144::sub_10265ad0(const CDamageInfo144 &info)
{
	if (m_pSchedule5c38 && (int)m_pSchedule5c38 == sub_102cc1f0(0x3a))
		return;

	if (m_nState5cc0 == 4 && m_hScript5d74.Get())
	{
		CScriptView144 *pScript = (CScriptView144 *)m_hScript5d74.Get();
		if (pScript->m_bPlayedSequence && (((CScriptView144 *)m_hScript5d74.Get())->m_spawnflags & 0x2080) != 0x80)
		{
			m_LastDamage = info;
			return;
		}
		((CCineNPC *)m_hScript5d74.Get())->sub_101a8c30();
		IPhysicsObject *pPhys;
		if (g_106bbaa0.GetBool() && (pPhys = VPhysicsGetObject()))
		{
			Vector vecTmp;
			Vector vecPos;
			vecPos = *vfunc263(&vecTmp);
			pPhys->vfunc39((float *)&vecPos, 0);
		}
	}

	vfunc511();
	if (m_n153c == -1 || !m_h1538.Get())
		vfunc488();

	sub_10265a90(info.GetAttacker());
	if (((CBaseEntity *)this)->sub_100b3700() & 0x2000)
	{
		SetTouchNull();
		sub_10265a40();
	}
	sub_1032b9b0((int)&info);
	SetIdealStateDbg(7, FILE_144, 0x217);
	SetCondition(0x4c);
	m_hAttacker5b7c = info.GetAttacker();
	m_b5b80 = 1;
	sub_1028ae60();
	if (m_pSquad5da4)
		((CUnknown103158f0 *)m_pSquad5da4)->sub_103158f0((CBaseEntity *)this);
	if ((char)vfunc552())
		sub_102695d0();
	else
		sub_101babc0(0x20, vfunc217(), 0x180, 30.0f, 0);
	SetIdealStateDbg(7, FILE_144, 0x241);
	sub_1026e340(7);
}
}



inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
inline const char *EntName(CBaseEntity *p) { return p ? STRINGR(p->m_name26c) : g_105387dc; }

struct CUpdateCharacterKeep
{
	CUtlVector<CBaseHandle> m_List;
};

void CAI_BaseNPCTroika::vfunc312(int nArg)
{
	ScopeTrace scope("CAI_BaseNPCTroika::UpdateCharacter", EntName((CBaseEntity *)this));
	if (m_b6496) {
		if (!m_b6497 && g_10924fb8 < 2 && vfunc464() == 2) {
			CBaseHandle &slot = g_109247e0[g_10924fb8++];
			slot = *(CBaseHandle *)((IHandleEntity *)this)->vfunc1();
			m_b6497 = 1;
		}
	}
	if (!m_b6496 && m_b6497) {
		CUpdateCharacterKeep keep;
		int i;
		for (i = 0; i < 2; i++) {
			if (g_109247e0[i].Get() && (void *)g_109247e0[i].Get() != (void *)this) {
				CBaseHandle h;
				h.Set(g_109247e0[i].Get());
				keep.m_List.AddToTail(h);
			}
		}
		g_10924fb8 = keep.m_List.Count();
		memset(g_109247e0, 0, sizeof(g_109247e0));
		if (g_10924fb8)
			for (i = 0; i < 2; i++)
				g_109247e0[i] = keep.m_List[i];
		m_b6497 = 0;
	}
	sub_103246d0(nArg);
}
// END FUNCTION

// FUNCTION: 0x10298340 size=0x105
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "Vector.h"

struct CInfo98 { char pad[0x14b8]; unsigned int b0 : 1; unsigned int b1 : 1; unsigned int b2 : 1; bool IsBit2() const { return b2; } };
struct CEnt60 { char pad[0x98]; CInfo98 *p98; };
struct CPEnt { char pad[0x60]; CEnt60 *p60; };
struct CHolder30 { char pad[0x24]; Vector *pTarget; };
struct CHolder { char pad[0x30]; CHolder30 *p30; void sub_10006744(); };

struct CBaseObj {
    bool sub_10011284(Vector *p);
};

typedef Vector *(__fastcall *Slot217)(CBaseObj *);

struct CFoo {
    char pad0[0x4384];
    CHolder *m_pHolder;
    bool sub_100087d3(CPEnt *pEnt, int a, int *out);
    bool sub_10298340(CPEnt *pEnt, int a, int *out);
    bool CheckNear(CBaseObj *pBase)
    {
        Vector vTarget = *m_pHolder->p30->pTarget;
        Vector *pPos = (*(Slot217 **)pBase)[217](pBase);
        float dx = pPos->x - vTarget.x;
        float dy = pPos->y - vTarget.y;
        float dz = pPos->z - vTarget.z;
        if (dz * dz + dx * dx + dy * dy <= 1024.0f) {
            m_pHolder->sub_10006744();
            return true;
        }
        return false;
    }
};

bool CFoo::sub_10298340(CPEnt *pEnt, int a, int *out)
{
    if (pEnt->p60 && pEnt->p60->p98 && pEnt->p60->p98->IsBit2()) {
        CBaseObj *pBase = (CBaseObj *)((char *)this - 0x19b0);
        if (pBase->sub_10011284(pcd_stage(m_pHolder->p30->pTarget))) {
            *out = 0;
            return true;
        }
        if (CheckNear(pBase)) {
            *out = 0;
            return true;
        }
    }
    return sub_100087d3(pEnt, a, out);
}
// END FUNCTION

// FUNCTION: 0x102984a0 size=0x2a2
#include "CAI_BaseNPCTroika.h"
#include "CAI_Pathfinder.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "globalvars.h"

__declspec(dllimport) void DevMsg(const char *pszFormat, ...);
extern CGlobalEntityList *g_10566458;

struct CDoorTarget { char m_pad0000[0x28]; float m_f28; };
struct CDoorView
{
	EVS(0) virtual unsigned int *slot1(); EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23)
	EVS(240) EVS(241) EVS(242) EVS(243) EVS(244) EVS(245)
	virtual void slot246(void *pNpc, int *pOut, bool bFlag);
	char m_pad0004[0x4f8 - 4];
	int m_n4f8;
};
struct CTroikaDoorNpc : CAI_BaseNPCTroika { void sub_100f0e70(); };
struct CDoorLinkTest { bool sub_10319f30(void *pLink); };
struct CNavTarget { char m_pad0000[0x24]; CDoorLinkTest m_Test; };
struct CNavProvView { char m_pad0000[0x30]; CNavTarget *m_p30; };
void *__fastcall sub_103166b0(void *pSquad);

// TARGET: CAI_BaseNPCTroika::vfunc531
bool CAI_BaseNPCTroika::vfunc531(void *pTarget, void *pDoor, float flDist, int *pOut)
{
	if (!pDoor) {
		DevMsg("\n\n**WARNING**\nNo door given to OnUpcomingDoor()\n**WARNING**\n\n");
		return false;
	}
	CDoorTarget *pRec = (CDoorTarget *)pTarget;
	CDoorView *pView = (CDoorView *)pDoor;
	CTroikaDoorNpc *pNpc = (CTroikaDoorNpc *)pDoor;
	if (pRec->m_f28 < flDist)
		return false;
	if (pDoor == ((CGlobalEntityList *)g_10566458)->sub_100290c0(&m_h5d24)) {
		*pOut = 0;
		pNpc->sub_100f0e70();
		return true;
	}
	if (m_n5bb0 <= 0 && m_p5da4 && sub_103166b0(m_p5da4) == pDoor) {
		*pOut = -2;
		pNpc->sub_100f0e90(1);
		return true;
	}
	if (vfunc464() == 4 && (vfunc513() & 0xd00) != 0xd00) {
		if (flDist < 64.0f) {
			sub_102bf770();
			m_n644c = 4;
			m_f6450 = gpGlobals->curtime + 3.0f;
			m_h5d24 = *pView->slot1();
		}
		*pOut = 0;
		pNpc->sub_100f0e70();
		return true;
	}
	if (!sub_1027f550((CAI_BaseNPCTroika *)pDoor)) {
		*pOut = -2;
		pNpc->sub_100f0e90(4);
		return true;
	}
	if (vfunc513() & 0xd00) {
		int buf[7];
		pView->slot246(this, buf, pView->m_n4f8 == 2);
		if (buf[6] == -1) {
			*pOut = 0;
			pNpc->sub_100f0e70();
			return true;
		}
		CAI_Pathfinder *pPath = m_p5d3c;
		char *pFound = (char *)pPath->sub_10304130((const float *)vfunc217(), (const float *)buf, 0, 0x30, -1, 1, 0, 0);
		if (!pFound) {
			if (pView->m_n4f8 == 0 || pView->m_n4f8 == 2) {
				pNpc->sub_100f0e70();
				return false;
			}
			m_h5d24 = *pView->slot1();
			if (sub_10298840((CBaseEntity *)pDoor)) {
				m_h5d24 = 0xffffffff;
				pNpc->sub_100f0e70();
			} else {
				*pOut = -2;
				pNpc->sub_100f0e90(0x40);
				return true;
			}
		} else {
			*(unsigned int *)(pFound + 0x24) = *pView->slot1();
			CNavTarget *pNav = ((CNavProvView *)m_p5d34)->m_p30;
			if (pNav->m_Test.sub_10319f30(pFound)) {
				m_h5d24 = *pView->slot1();
				m_b5d30 = pView->m_n4f8 == 2;
				pRec->m_f28 = flDist;
				*pOut = 0;
				pNpc->sub_100f0e70();
				return true;
			}
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10298800 size=0x24
struct CUnknown102ee2a0
{
	void sub_102ee2a0();
};

class CUnknown10298800
{
public:
	char pad0[0x1a40];
	unsigned char m_b1a40;
	char pad1[0x5d34 - 0x1a41];
	CUnknown102ee2a0 *m_pNav5d34;
	char pad2[0x644c - 0x5d38];
	int m_i644c;

	int sub_10298800(int unused);
};

// TARGET: CUnknown10298800::sub_10298800
int CUnknown10298800::sub_10298800(int unused)
{
	m_b1a40 = 0;
	m_pNav5d34->sub_102ee2a0();
	return m_i644c = 1;
}
// END FUNCTION

// FUNCTION: 0x10298840 size=0x93
#include "CBaseDoor.h"
#include "CVariantCopy.h"
#include "CAI_BaseNPCTroika.h"

// the door's slot 246 seen from the NPC: the flag goes as a byte (CBaseDoor.h declares it int for its matched body)
#define DV(n) virtual void dv##n();
#define DV10(p) DV(p##0) DV(p##1) DV(p##2) DV(p##3) DV(p##4) DV(p##5) DV(p##6) DV(p##7) DV(p##8) DV(p##9)
#define DV100(p) DV10(p##0) DV10(p##1) DV10(p##2) DV10(p##3) DV10(p##4) DV10(p##5) DV10(p##6) DV10(p##7) DV10(p##8) DV10(p##9)
struct CDoorUseView
{
	DV100(a) DV100(b) DV10(c0) DV10(c1) DV10(c2) DV10(c3)
	DV(d0) DV(d1) DV(d2) DV(d3) DV(d4) DV(d5)
	virtual void Slot246(void *pNpc, int *pOut, char bFlag);
};

bool CAI_BaseNPCTroika::sub_10298840(CBaseEntity *pDoorEnt)
{
	CBaseDoor *pDoor = (CBaseDoor *)pDoorEnt;
	CVariantCopy value;
	int rec[7];
	((CDoorUseView *)pDoor)->Slot246(this, rec, m_b5d30);
	sub_10289ee0(rec[6]);
	if (pDoor->sub_100027d4(this))
	{
		sub_1027de00(pDoor);
		return false;
	}
	pDoor->vfunc118("Open", (CBaseEntity *)this, (CBaseEntity *)this, value, 0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10298910 size=0x9f
#include "CAI_BaseNPCTroika.h"
extern "C" int atoi(const char *);

void CAI_BaseNPCTroika::sub_10298910(const char *str)
{
    char buf[256];
    *(unsigned int *)((char *)this + 0x62dc) = 0;
    if (str && *str) {
        const char *s = str;
        char c;
        do {
            c = *s;
            buf[s - str] = c;
            s++;
        } while (c);
        char *p = buf;
        while (*p) {
            while (*p == ' ')
                p++;
            int n = atoi(p) - 1;
            if (n >= 0 && n <= 31)
                *(unsigned int *)((char *)this + 0x62dc) |= 1 << n;
            while (*p && *p != ' ')
                p++;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x102989e0 size=0xb8
#include "CAI_BaseNPCTroika.h"
extern "C" int atoi(const char *);

void CAI_BaseNPCTroika::sub_102989e0(const char *str)
{
    char buf[256];
    *(unsigned int *)((char *)this + 0x62e4) = 0;
    if (str == 0 || *str == 0) {
        *(unsigned int *)((char *)this + 0x62e4) = 0xffffffff;
    } else {
        const char *s = str;
        char c;
        do {
            c = *s;
            buf[s - str] = c;
            s++;
        } while (c);
        char *p = buf;
        while (*p) {
            while (*p == ' ')
                p++;
            int n = atoi(p) - 1;
            if (n >= 0 && n <= 31)
                *(unsigned int *)((char *)this + 0x62e4) |= 1 << n;
            char c2 = *p;
            if (!c2)
                break;
            do {
                if (c2 == ' ')
                    break;
                c2 = p[1];
                p++;
            } while (c2);
            if (!c2)
                return;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10298ad0 size=0x19d
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include <string.h>
extern int (*g_109f388c)(char *pDest, int nSize, const char *pFmt, ...);
extern void (*g_109f3860)(char *pDest, int nSize);
extern char g_105d90c4[];
extern char g_106b8540[];
void sub_101d0ec0(const char *);
void sub_101d0f10(char *, const char *, int, int);
struct CUnknown10924980 { int sub_100ec640(void *p); };
extern CUnknown10924980 g_10924980;
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CS { const char *p; CS(const char *s) { p = *s ? s : 0; } };
struct SV { const char *pszValue; bool operator!() const { return pszValue == 0; } const char *ToCStr() const { return pszValue ? pszValue : g_106b8540; } };
struct NPCView {
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8();
    virtual SV *GetN(int *pOut);
    virtual void SetIdx(int idx);
    V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k) V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t) V10(u) V10(v)
    virtual void z0();
    virtual void SetThing(CS s);
    char pad[0x128 - 4];
    const char *m_pName128;
    char pad2[0x1a98 - 0x12c];
    const char *m_pWeapon1a98;
    char pad3[0x64e8 - 0x1a9c];
    int m_n64e8;
};
inline const char *STRS(const string_t &s) { return s.pszValue ? s.pszValue : g_106b8540; }
inline const char *STRING(const char *s) { return s ? s : g_106b8540; }
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CAI_BaseNPCTroika::vfunc104()
{
    char buf[0x104];
    NPCView *v = (NPCView *)this;
    int n;
    if (!*v->GetN(&n) || !v->GetN(&n)->ToCStr() || !v->GetN(&n)->ToCStr()[0])
        v->SetThing(CS(g_105d90c4));
    v->SetIdx(engine->vfunc13(v->GetN(&n)->ToCStr(), 0));
    if (v->m_pWeapon1a98) {
        if (strcmp(STRINGR(v->m_pWeapon1a98), "0") && strcmp(STRINGR(v->m_pWeapon1a98), "item_w_unarmed"))
            sub_101d0ec0(STRINGR(v->m_pWeapon1a98));
    }
    CAI_BaseNPC::vfunc104();
    if (v->m_pName128) {
        g_109f388c(buf, 0x104, "sound/character/%s", STRINGR(v->m_pName128));
        buf[strlen(buf) - 4] = 0;
        g_109f3860(buf, strlen(buf));
        sub_101d0f10(buf, ".wav", 1, 0);
        sub_101d0f10(buf, ".mp3", 1, 0);
    }
    v->m_n64e8 = g_10924980.sub_100ec640(this);
    this->vfunc608("Normal");
}
// END FUNCTION

// FUNCTION: 0x10298ce0 size=0x32
#include "CAI_BaseNPCTroika.h"
#include "CUnknown100ecee0.h"
extern CUnknown100ecee0 g_10924980;
void CAI_BaseNPCTroika::vfunc105(const char *pszName)
{
	sub_103409a0(pszName);
	sub_10273070(1);
	CAI_BaseNPC::sub_10274ca0();
	m_n64e8 = g_10924980.sub_100ec640((CBaseAnimating *)this);
}
// END FUNCTION

// FUNCTION: 0x10298d30 size=0x538
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
// TARGET: CAI_BaseNPCTroika::vfunc103
#include <string.h>
#include "ScopeTrace.h"
#include "Tier1.h"
#include "CUnknown10206c70.h"
#include "CCollisionProperty.h"
#define M(T, off) (*(T *)((char *)this + off))
extern CUnknown10206c70 g_1074f028;
extern void (*g_109f3650)(int, const char *, ...);
void sub_101cf600(void *);
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
struct PctView { int a, b, c, d, e; };
void CAI_BaseNPCTroika::vfunc103()
{
	M(char, 0x62e9) = 1;
	if (strcmp(STRINGR(M(const char *, 0x10e4)), g_106b8540) != 0)
		g_1074f028.sub_10206c30(STRINGR(M(const char *, 0x10e4)), (CBaseCombatCharacter *)this);
	vfunc104();
	const char *p10ac = STRINGR(M(const char *, 0x10ac));
	if (*p10ac)
		sub_103239a0(p10ac);
	int tmp;
	((CBaseEntity *)this)->vfunc105(STRINGR(*(const char **)vfunc9(&tmp)));
	M(int, 0x1570) = 0xf7;
	M(float, 0x1574) = 0.2f;
	sub_1026dc00(1);
	sub_1026dc00(0x800000);
	sub_1026dc00(8);
	M(Vector, 0x1578).Init(0.0f, 0.0f, 55.0f);
	M(int, 0x62ec) = 0;
	M(char, 0x62e8) = 0;
	{ ScopeTrace t("CBaseEntity::SetSolidFlags", M(const char *, 0x26c) ? M(const char *, 0x26c) : g_106b8540, g_106b8540); M(CCollisionProperty, 0x270).sub_100dc580(0); }
	{ ScopeTrace t("CBaseEntity::AddSolidFlags", M(const char *, 0x26c) ? M(const char *, 0x26c) : g_106b8540, g_106b8540); M(CCollisionProperty, 0x270).AddSolidFlags(1); }
	{ ScopeTrace t("CBaseEntity::AddSolidFlags", M(const char *, 0x26c) ? M(const char *, 0x26c) : g_106b8540, g_106b8540); M(CCollisionProperty, 0x270).AddSolidFlags(0x40); }
	{ ScopeTrace t("CBaseEntity::SetSolid", M(const char *, 0x26c) ? M(const char *, 0x26c) : g_106b8540, g_106b8540); M(CCollisionProperty, 0x270).sub_100dc480(2); }
	((CBaseEntity *)this)->vfunc93(4, 0);
	sub_10273070(0);
	sub_101cf600(this);
	CAI_BaseNPC::vfunc103();
	Vector *v = (Vector *)vfunc217();
	M(Vector, 0x62a8) = *v;
	v = (Vector *)vfunc219();
	M(Vector, 0x62b4) = *v;
	vfunc420();
	sub_1033df80();
	void (*pDev)(int, const char *, ...) = g_109f3650;
	if (M(int, 0x6348) < 1) { pDev(1, "Warning: Invalid m_iPLInvestigateLevel ('pl_investigate' in world craft)\n"); M(int, 0x6348) = 6; }
	if (M(int, 0x634c) < 1) { pDev(1, "Warning: Invalid m_iPLCriminalFleeLevel ('pl_criminal_flee' in world craft)\n"); M(int, 0x634c) = 6; }
	if (M(int, 0x6350) < 1) { pDev(1, "Warning: Invalid m_iPLCriminalAttackLevel ('pl_criminal_attack' in world craft)\n"); M(int, 0x6350) = 6; }
	if (M(int, 0x6354) < 1) { pDev(1, "Warning: Invalid m_iPLSupernaturalFleeLevel ('pl_supernatural_flee' in world craft)\n"); M(int, 0x6354) = 6; }
	if (M(int, 0x6358) < 1) { pDev(1, "Warning: Invalid m_iPLSupernaturalAttackLevel ('pl_supernatural_attack' in world craft)\n"); M(int, 0x6358) = 6; }
	PctView &pc = M(PctView, 0x6420);
	int sum = pc.a + pc.b + pc.c + pc.d + pc.e;
	if (sum > 0) {
		pc.e = 100;
		pc.a = pc.a * 100 / sum;
		pc.b = pc.a + pc.b * 100 / sum;
		pc.c = pc.b + pc.c * 100 / sum;
		pc.d = pc.c + pc.d * 100 / sum;
	}
	if (pc.e != 100) {
		g_109f3630("Occluded target reaction percentages for %s (%f, %f, %f) do not add up to 100%\n", sub_100ab4f0(), (double)M(float, 0x62a8), (double)M(float, 0x62ac), (double)M(float, 0x62b0));
		if (pc.e <= 0) {
			pc.a = 10; pc.b = 40; pc.c = 50; pc.d = 70; pc.e = 100;
		}
	}
	sub_10298910(STRINGR(M(const char *, 0x62d8)));
	sub_102989e0(STRINGR(M(const char *, 0x62e0)));
	M(int, 0x65e4) = sub_1029f340(STRINGR(M(const char *, 0x65e0)));
	g_1074f028.sub_10207e60((CBaseCombatCharacter *)this);
	((CBaseEntity *)this)->sub_100b3840(4);
}
// END FUNCTION

// FUNCTION: 0x102993c0 size=0x290
#include "CAI_BaseNPCTroika.h"
#include "CSave.h"

void sub_1009d940(void *p, int n);
void sub_1009d960(void *p, int n);
struct CTimer2c { void sub_101b9840(); void sub_101b9860(); };

int CAI_BaseNPCTroika::vfunc126(CSave *pSave)
{
	char *p = (char *)this;
	sub_1009d940(p + 0x607c, 3);
	sub_1009d940(p + 0x6084, 2);
	sub_1009d940(p + 0x6274, 2);
	sub_1009d940(p + 0x62cc, 3);
	sub_1009d940(p + 0x62d0, 3);
	sub_1009d940(p + 0x62d4, 3);
	sub_1009d940(p + 0x632c, 3);
	sub_1009d940(p + 0x63d4, 2);
	sub_1009d940(p + 0x63dc, 2);
	sub_1009d940(p + 0x6458, 4);
	sub_1009d940(p + 0x657c, 4);
	((CTimer2c *)(p + 0x60b0))->sub_101b9840();
	((CTimer2c *)(p + 0x60dc))->sub_101b9840();
	((CTimer2c *)(p + 0x6108))->sub_101b9840();
	((CTimer2c *)(p + 0x6134))->sub_101b9840();
	((CTimer2c *)(p + 0x6160))->sub_101b9840();
	((CTimer2c *)(p + 0x618c))->sub_101b9840();
	((CTimer2c *)(p + 0x61b8))->sub_101b9840();
	((CTimer2c *)(p + 0x61e4))->sub_101b9840();
	((CTimer2c *)(p + 0x6210))->sub_101b9840();
	int r = CAI_BaseNPC::vfunc126(pSave);
	char b = *(int *)(p + 0x630c) != 0;
	pSave->vfunc12(&b, 1);
	if (b) {
		pSave->vfunc10(*(char **)(p + 0x630c) + 4, 1);
		pSave->vfunc10(*(char **)(p + 0x630c) + 8, 1);
	}
	sub_1009d960(p + 0x607c, 3);
	sub_1009d960(p + 0x6084, 2);
	sub_1009d960(p + 0x6274, 2);
	sub_1009d960(p + 0x62cc, 3);
	sub_1009d960(p + 0x62d0, 3);
	sub_1009d960(p + 0x62d4, 3);
	sub_1009d960(p + 0x632c, 3);
	sub_1009d960(p + 0x63d4, 2);
	sub_1009d960(p + 0x63dc, 2);
	sub_1009d960(p + 0x6458, 4);
	sub_1009d960(p + 0x657c, 4);
	((CTimer2c *)(p + 0x60b0))->sub_101b9860();
	((CTimer2c *)(p + 0x60dc))->sub_101b9860();
	((CTimer2c *)(p + 0x6108))->sub_101b9860();
	((CTimer2c *)(p + 0x6134))->sub_101b9860();
	((CTimer2c *)(p + 0x6160))->sub_101b9860();
	((CTimer2c *)(p + 0x618c))->sub_101b9860();
	((CTimer2c *)(p + 0x61b8))->sub_101b9860();
	((CTimer2c *)(p + 0x61e4))->sub_101b9860();
	((CTimer2c *)(p + 0x6210))->sub_101b9860();
	return r;
}
// END FUNCTION

// FUNCTION: 0x10299700 size=0x158
#include "CAI_BaseNPCTroika.h"
#include "CRestore.h"

struct CTimerSub
{
	void sub_101b9860();
};
extern void sub_1009d960(float *, int);

int CAI_BaseNPCTroika::vfunc127(CRestore *pRestore)
{
	int result = CAI_BaseNPC::vfunc127(pRestore);
	char bFlag;
	pRestore->vfunc17(&bFlag, 1, 0);
	if (bFlag) {
		pRestore->vfunc15((int *)((char *)this + 0x6310), 1, 0);
		pRestore->vfunc15((int *)((char *)this + 0x6314), 1, 0);
	}
	sub_1009d960((float *)((char *)this + 0x607c), 3);
	sub_1009d960((float *)((char *)this + 0x6084), 2);
	sub_1009d960((float *)((char *)this + 0x6274), 2);
	sub_1009d960((float *)((char *)this + 0x62cc), 3);
	sub_1009d960((float *)((char *)this + 0x62d0), 3);
	sub_1009d960((float *)((char *)this + 0x62d4), 3);
	sub_1009d960((float *)((char *)this + 0x632c), 3);
	sub_1009d960((float *)((char *)this + 0x63d4), 2);
	sub_1009d960((float *)((char *)this + 0x63dc), 2);
	sub_1009d960((float *)((char *)this + 0x6458), 4);
	sub_1009d960((float *)((char *)this + 0x657c), 4);
	((CTimerSub *)((char *)this + 0x60b0))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x60dc))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6108))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6134))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6160))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x618c))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x61b8))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x61e4))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6210))->sub_101b9860();
	return result;
}
// END FUNCTION

// FUNCTION: 0x102998c0 size=0x15a
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "engineiface.h"
#include "globalvars.h"
#include "CAI_NodeGraph.h"
struct SNPCTroikaRef_t;
int __cdecl sub_102db5e0(void *p);
void __stdcall sub_1029f5d0(SNPCTroikaRef_t *p);
char __stdcall sub_1029f610(void *p);
extern char g_106b8540[];

class CAINodeView { public: char *sub_102f96e0(int n); };
struct SNetOwner { char pad[0x2c]; CAI_NodeGraph *pNet; };
struct SNameView { char pad[0x65e0]; const char *psz65e0; int n65e4; int sub_1029f340(const char *p); };
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CAI_BaseNPCTroika::vfunc130(int a)
{
	if (!sub_1029f610(&m_ref658c)) sub_1029f5d0((SNPCTroikaRef_t *)&m_ref658c);
	if (!sub_1029f610(&m_ref6594)) sub_1029f5d0((SNPCTroikaRef_t *)&m_ref6594);
	CAI_BaseNPC::vfunc130(a);
	m_p62ec = (CBaseEntity *)sub_102db5e0(this);
	if (m_n6310 != -1 && m_n6314 != -1) {
		CAI_NodeGraph *pNet = ((SNetOwner *)m_p5d34)->pNet;
		int idx = m_n6310;
		CAI_Node *pNode;
		if (idx >= 0 && idx < pNet->m_nNodes) {
			pNode = pNet->m_ppNodes[idx];
		} else {
			g_106c994c++;
			pNode = 0;
		}
		if (pNode)
			m_p630c = ((CAINodeView *)pNode)->sub_102f96e0(m_n6314);
	}
	m_f6440 = enginerandom->vfunc1(2.0f, 2.5f) + gpGlobals->curtime;
	m_p6444 = 0;
	sub_102c44e0(STRINGR(m_psz6478));
	sub_102c4680(STRINGR(m_psz6480));
	SNameView *v = (SNameView *)this;
	v->n65e4 = v->sub_1029f340(STRINGR(v->psz65e0));
	m_b62e9 = 1;
	sub_10299a80();
	if (sub_100b5190()) {
		sub_100ac4e0(0, 0, 0);
		((CBaseEntity *)this)->m_flNextThink = 3.4028235e38f;
	}
	vfunc593();
}
// END FUNCTION

// FUNCTION: 0x10299a80 size=0x174
// TARGET: ?sub_10299a80@CAI_BaseNPCTroika@@QAEXXZ
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "Tier1.h"

struct CInterestingPlaceX
{
	char m_pad0000[0x540];
	CInterestingPlaceX *m_pNext540;
	char m_pad0544[0x584 - 0x544];
	int m_nChildren584;
	void *sub_102da9a0(int i);
	const char *sub_1000b5cd();
};

extern CInterestingPlaceX *g_10927194;

inline bool IsInterestingPlaceValid(CInterestingPlaceX *pPlace)
{
	for (CInterestingPlaceX *p = g_10927194; p; p = p->m_pNext540)
		if (p == pPlace)
			return true;
	return false;
}

void CAI_BaseNPCTroika::sub_10299a80()
{
	if (!m_p62ec)
		return;

	if (!IsInterestingPlaceValid((CInterestingPlaceX *)m_p62ec)) {
		g_109f3630("ERROR: %s loc( %6.2f, %6.2f, %6.2f) thinks they are at an interesting place that no longer seems to be a valid entity!\n",
			sub_1000b5cd(),
			(double)((CEntityVSlots *)this)->slot220()->x,
			(double)((CEntityVSlots *)this)->slot220()->y,
			(double)((CEntityVSlots *)this)->slot220()->z);
		m_p62ec = 0;
		return;
	}

	bool bFound = false;
	for (int i = 0; i < ((CInterestingPlaceX *)m_p62ec)->m_nChildren584; i++) {
		if (((CInterestingPlaceX *)m_p62ec)->sub_102da9a0(i) == (void *)this)
			bFound = true;
	}
	if (bFound)
		return;

	g_109f3630("ERROR: %s loc( %6.2f, %6.2f, %6.2f) thinks they are at %s but that InterestingPlace, loc(%6.2f, %6.2f, %6.2f) does not know that.\n",
		sub_1000b5cd(),
		(double)((CEntityVSlots *)this)->slot220()->x,
		(double)((CEntityVSlots *)this)->slot220()->y,
		(double)((CEntityVSlots *)this)->slot220()->z,
		((CInterestingPlaceX *)m_p62ec)->sub_1000b5cd(),
		(double)((CEntityVSlots *)m_p62ec)->slot220()->x,
		(double)((CEntityVSlots *)m_p62ec)->slot220()->y,
		(double)((CEntityVSlots *)m_p62ec)->slot220()->z);

	m_p62ec = 0;
}
// END FUNCTION

// FUNCTION: 0x10299c60 size=0x51
struct SObj {
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
	virtual void vfunc10(const char *p, int a);
	virtual void v11();
	virtual void vfunc12(bool *p, int a);
};
struct SHook {
	virtual void vfunc0(SObj *p);
};
extern SHook *g_109253f8;
extern char g_1092053c[];  // a global built at run time, not a string
void sub_103707e0(SObj *p);

int sub_10299c60(SObj *p)
{
	bool b = g_109253f8 != 0;
	p->vfunc12(&b, 1);
	if (g_109253f8)
		g_109253f8->vfunc0(p);
	sub_103707e0(p);
	p->vfunc10(g_1092053c, 1);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10299ce0 size=0x4d
struct IGlobalObj109253f8 { virtual void v0(); virtual void v1(void *p); };
extern IGlobalObj109253f8 *g_109253f8;
extern char g_1092053c[];
struct CObj10299ce0 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(const char *s, int a, int b);
	virtual void v16();
	virtual void v17(char *out, int a, int b);
};
void sub_10370850(CObj10299ce0 *p);
int sub_10299ce0(CObj10299ce0 *p)
{
	char flag;
	p->v17(&flag, 1, 0);
	if (flag && g_109253f8)
		g_109253f8->v1(p);
	sub_10370850(p);
	p->v15(g_1092053c, 1, 0);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10299d50 size=0x1c
struct IGlobalObj109253f8 {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(int a);
};
extern int g_109253f8;
void sub_103708c0(int a);

// TARGET: sub_10299d50
void __cdecl sub_10299d50(int a)
{
	((IGlobalObj109253f8 *)g_109253f8)->vfunc2(a);
	sub_103708c0(a);
}
// END FUNCTION

// FUNCTION: 0x10299d80 size=0x6
int sub_10299d80(void)
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x10299da0 size=0x21d
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
struct Troika404View { char pad[0x98]; CAI_BaseNPCTroika *p98; CAI_BaseNPCTroika *p9c; };

int CAI_BaseNPCTroika::vfunc404(CBaseEntity *pOther)
{
	if (pOther == (CBaseEntity *)this)
		return 0;
	if (!pOther)
		return 0;
	CAI_BaseNPCTroika *pOwner = ((Troika404View *)pOther)->p9c;
	if (pOwner && (pOwner->m_flags14bc & 0x20000) == 0x20000 && m_h628c.Get()) {
		if (vfunc404(m_h628c.Get()) == 1 || vfunc168() == m_h628c.Get())
			return 1;
	}
	CAI_BaseNPCTroika *p98 = ((Troika404View *)pOther)->p98;
	if (p98) {
		CBaseEntity *pEnt = p98->m_h647c.Get();
		if (pEnt) {
			if (vfunc404(pEnt) == 1 || vfunc168() == pEnt)
				return 1;
		}
	}
	CBaseEntity *pFollow = m_h647c.Get();
	if (pFollow) {
		CAI_BaseNPCTroika *pFollowOwner = ((Troika404View *)pFollow)->p9c;
		if (pFollowOwner) {
			if (pFollowOwner == (CAI_BaseNPCTroika *)pOther)
				return 3;
			int r = pFollowOwner->vfunc404(pOther);
			if (r == 1 || (CBaseEntity *)pFollowOwner->vfunc167() == pOther)
				return 1;
			if (pOwner) {
				r = pOwner->vfunc404((CBaseEntity *)pFollowOwner);
				if (r == 1 || pOwner->vfunc168() == (CBaseEntity *)pFollowOwner)
					return 1;
			}
			return r;
		}
	}
	return sub_10013016(pOther);
}
// END FUNCTION

// FUNCTION: 0x1029a050 size=0x8
#include "CAI_BaseNPCTroika.h"
#include "CAI_BaseNPC.h"

char CAI_BaseNPCTroika::sub_1029a050()
{
	unsigned char result = ((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc337();
	result |= 1;
	return result;
}
// END FUNCTION

// FUNCTION: 0x1029a070 size=0x30
#include "CAI_BaseNPCTroika.h"
int CAI_BaseNPCTroika::vfunc593()
{
    *(int *)((char *)this + 0x655c) = 0x3dcccccd;
    *(int *)((char *)this + 0x6560) = 0x3f800000;
    *(int *)((char *)this + 0x6564) = 0x42480000;
    *(int *)((char *)this + 0x6568) = 0x42480000;
    *(int *)((char *)this + 0x656c) = 0x3c23d70a;
    return 0x42480000;
}
// END FUNCTION

// FUNCTION: 0x1029a0b0 size=0x660
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"
#include "CEntityVSlots.h"
#include "CVStatList_t.h"
#include "CStatDefault3List.h"
#include "globalvars.h"
#include <string.h>
#include <stdio.h>

extern unsigned char g_10937cf1;
extern int g_10924984;
extern float g_104454c4;
extern CStatDefault3List g_10738d10;
extern CVStatList_t g_109f0b40;
void __cdecl sub_10012a8a();

struct CNpcInitConVar
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad04[0x24];
	float m_f28;
};
extern CNpcInitConVar *g_10923f14;

struct CCurveMgr { float sub_101e8c50(); float sub_101e8c70(); float sub_101e8c30(); };
extern CCurveMgr g_10739d08;

struct CNpcInitRec
{
	void *m_pOuter;
	int m_n04;
	int m_n08;
	int m_n0c;
	float m_f10;
};

struct CWeaponView { void sub_1024f7b0(); };

struct CNPCInitView
{
	virtual void v0();
	char m_pad0004[0x19c - 0x4];
	int m_n19c;
	char m_pad01a0[0x1ec - 0x1a0];
	int m_pfn1ec;
	char m_pad01f0[0x210 - 0x1f0];
	int m_n210;
	char m_pad0214[0xe64 - 0x214];
	EHANDLE m_he64;
	char m_pad0e68[0xeb0 - 0xe68];
	int m_neb0;
	int m_neb4;
	int m_neb8;
	int m_nebc;
	char m_pad0ec0[0x10e4 - 0xec0];
	const char *m_psz10e4;
	char m_pad10e8[0x1480 - 0x10e8];
	char m_b1480;
	char m_b1481;
	char m_pad1482[0x14b8 - 0x1482];
	int m_n14b8;
	char m_pad14bc[0x1a98 - 0x14bc];
	const char *m_psz1a98;
	char m_pad1a9c[0x5b94 - 0x1a9c];
	int m_n5b94;
	char m_pad5b98[0x5cc0 - 0x5b98];
	int m_n5cc0;
	char m_pad5cc4[0x5d88 - 0x5cc4];
	CNpcInitRec *m_p5d88;
	char m_pad5d8c[0x5dec - 0x5d8c];
	const char *m_psz5dec;
	char m_pad5df0[0x6064 - 0x5df0];
	int m_n6064;
	char m_pad6068[0x606c - 0x6068];
	int m_n606c;
	int m_n6070;
	int m_n6074;
	char m_b6078;
	char m_pad6079[3];
	int m_n607c;
	char m_pad6080[4];
	float m_f6084;
	char m_pad6088[0x609c - 0x6088];
	int m_n609c;
	int m_n60a0;
	int m_n60a4;
	int m_n60a8;
	char m_pad60ac[0x623c - 0x60ac];
	int m_n623c;
	EHANDLE m_h6240;
	float m_f6244;
	float m_f6248;
	float m_f624c;
	float m_f6250;
	float m_f6254;
	float m_f6258;
	float m_f625c;
	float m_f6260;
	char m_pad6264[0x6274 - 0x6264];
	float m_f6274;
	char m_b6278;
	char m_b6279;
	char m_pad627a[2];
	float m_f627c;
	float m_f6280;
	int m_n6284;
	int m_n6288;
	char m_pad628c[0x62c0 - 0x628c];
	float m_f62c0;
	float m_f62c4;
	float m_f62c8;
	float m_f62cc;
	float m_f62d0;
	float m_f62d4;
	char m_pad62d8[0x62fc - 0x62d8];
	int m_n62fc;
	int m_n6300;
	char m_pad6304[0x6318 - 0x6304];
	int m_n6318;
	int m_n631c;
	int m_n6320;
	int m_n6324;
	int m_n6328;
	int m_n632c;
	int m_n6330;
	char m_b6334;
	char m_pad6335[0x636c - 0x6335];
	EHANDLE m_h636c;
	EHANDLE m_h6370;
	char m_pad6374[0x6398 - 0x6374];
	int m_n6398;
	int m_n639c;
	int m_n63a0;
	int m_n63a4;
	int m_n63a8;
	const char *m_psz63ac;
	char m_pad63b0[0x63d0 - 0x63b0];
	int m_n63d0;
	char m_pad63d4[0x63da - 0x63d4];
	char m_b63da;
	char m_pad63db;
	float m_f63dc;
	char m_b63e0;
	char m_pad63e1[0x63fc - 0x63e1];
	char m_b63fc;
	char m_b63fd;
	char m_pad63fe[2];
	int m_n6400;
	int m_n6404;
	char m_b6408;
	char m_pad6409[0x6414 - 0x6409];
	int m_n6414;
	int m_n6418;
	char m_pad641c[0x6438 - 0x641c];
	int m_n6438;
	EHANDLE m_h643c;
	int m_n6440;
	int m_n6444;
	char m_pad6448[4];
	int m_n644c;
	char m_pad6450[0x6458 - 0x6450];
	float m_f6458;
	char m_pad645c[0x6494 - 0x645c];
	char m_b6494;
	char m_pad6495[3];
	char m_b6498;
	char m_pad6499[0x64b8 - 0x6499];
	float m_f64b8;
	char m_pad64bc[0x64d4 - 0x64bc];
	int m_n64d4;
	char m_pad64d8[0x658c - 0x64d8];
	char m_b658c;
	char m_pad658d[3];
	int m_n6590;
	char m_b6594;
	char m_pad6595[3];
	int m_n6598;
	int m_n659c;
	char m_b65a0;
	char m_pad65a1[0x65c0 - 0x65a1];
	EHANDLE m_h65c0;
	int m_n65c4;
	int m_n65c8;
	char m_pad65cc[4];
	float m_f65d0;
	float m_f65d4;
	float m_f65d8;
	float m_f65dc;
	char m_pad65e0[0x65f4 - 0x65e0];
	char m_b65f4;
	char m_pad65f5[0x65fc - 0x65f5];
	int m_n65fc;
	int m_n6600;
	int m_n6604;
	int m_n6608;

	void sub_10273390();
	void sub_10273790(const char *p, int a);
	void sub_102b5dc0(int a);
	void sub_102b53d0(int a, const char *p);
	void sub_1028fb70();
	void sub_102ae7f0(int a);
	void sub_102c54c0();
	void *sub_1032e120(const char *p);
	char sub_10334c20(void *p);
};

inline CVStatList_t *FindStatList(CVStatListSet *pSet, int type)
{
	for (int i = 0; i < pSet->m_nLists; i++) {
		if (pSet->m_pLists[i]->m_field10 == type)
			return pSet->m_pLists[i];
	}
	unsigned char bInit = g_109f0b2a;
	if (!(bInit & 1)) {
		g_109f0b2a = bInit | 1;
		g_109f0b40.CVStatList_t::CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}

void sub_1000cb76();

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

// TARGET: CAI_BaseNPC::vfunc420
void CAI_BaseNPC::vfunc420()
{
	CNPCInitView *v = (CNPCInitView *)this;
	CEntityVSlots *e = (CEntityVSlots *)this;

	g_10937cf1 = 1;
	v->m_n19c = 0;
	v->m_n210 = (int)(g_10923f14->vfunc1() ? g_104454c4 : g_10923f14->m_f28);
	v->m_n5cc0 = 0;
	v->m_n63d0 = 0;
	v->m_pfn1ec = (int)sub_1000cb76;
	v->sub_10273390();
	v->m_b6278 = 1;
	v->m_b6279 = 1;
	v->m_f627c = gpGlobals->curtime;
	v->m_f6280 = gpGlobals->curtime;
	v->m_n6284 = 0;
	v->m_n6288 = 0;
	v->m_n14b8 = 0;
	v->m_b63da = 0;
	v->m_f62c0 = g_10739d08.sub_101e8c50();
	v->m_f62c4 = g_10739d08.sub_101e8c70();
	v->m_f62c8 = v->m_f62c0;
	v->m_f62cc = gpGlobals->curtime;
	v->m_f62d0 = gpGlobals->curtime;
	v->m_f62d4 = gpGlobals->curtime;
	v->m_f6244 = gpGlobals->curtime;
	v->m_f6248 = gpGlobals->curtime;
	v->m_f6250 = gpGlobals->curtime;
	v->m_f624c = gpGlobals->curtime;
	v->m_f6254 = v->m_f6244;
	v->m_f6258 = v->m_f6248;
	v->m_f625c = v->m_f624c;
	v->m_f6260 = v->m_f6250;
	v->sub_102b53d0(0, "Leaving interesting place (NPCInit)");
	v->m_n62fc = 0;
	v->m_n6300 = 0;
	v->m_n6318 = 0;
	v->m_n631c = 0;
	v->m_b658c = 0;
	v->m_n6590 = 0;
	v->m_b6594 = 0;
	v->m_n6598 = 0;
	v->m_n659c = 0;
	v->m_b65a0 = 0;
	v->m_n6320 = 0;
	v->m_n6324 = 0;
	v->m_n6328 = 0;
	v->m_n632c = 0;
	v->m_n6330 = 0;
	v->m_b6334 = 0;
	v->m_h6240 = NULL;
	v->m_n6064 = 0;
	v->m_f63dc = -1.0f;

	if (e->slot513() & 0x200000)
	{
		if (v->m_psz1a98 && strcmp(STRINGR(v->m_psz1a98), "0") && strcmp(STRINGR(v->m_psz1a98), "item_w_unarmed"))
		{
			void *w = v->sub_1032e120(STRINGR(v->m_psz1a98));
			if (w)
			{
				if (v->sub_10334c20(w))
					e->slot383((int)w, 0);
				else
					((CWeaponView *)w)->sub_1024f7b0();
			}
		}
		if (v->m_psz5dec && strcmp(STRINGR(v->m_psz5dec), "0") && strcmp(STRINGR(v->m_psz5dec), "item_w_unarmed"))
		{
			void *w = v->sub_1032e120(STRINGR(v->m_psz5dec));
			if (w)
			{
				if (v->sub_10334c20(w))
					e->slot383((int)w, 0);
				else
					((CWeaponView *)w)->sub_1024f7b0();
			}
		}
	}

	v->m_p5d88->m_pOuter = this;
	v->m_p5d88->m_f10 = g_10739d08.sub_101e8c30();

	if (v->m_psz63ac)
	{
		char buf[64];
		sprintf(buf, "Player %s", STRINGR(v->m_psz63ac));
		v->sub_10273790(buf, 0);
	}

	g_10937cf1 = 0;
	v->m_b63e0 = 0;
	v->sub_102b5dc0(0);
	v->m_b63fc = 0;
	v->m_b63fd = 0;
	v->m_n6400 = 0;
	v->m_n6404 = 0;
	v->m_b6408 = 0;
	v->m_n6414 = 0;
	v->m_n6418 = 0;
	v->m_n623c = 0;
	v->m_n60a4 = 0;
	v->m_n60a8 = 0;
	if (strcmp(STRINGR(v->m_psz10e4), g_106b8540))
		v->m_b1480 = 1;
	v->m_b1481 = 1;
	v->m_n6398 = 0;
	v->m_n639c = 0;
	v->m_n63a0 = 0;
	v->m_n63a4 = 0;
	v->m_n63a8 = 0;
	v->m_h636c = NULL;
	v->m_h6370 = NULL;
	v->m_n606c = 0;
	v->m_n6070 = 0;
	v->m_n6074 = 0;
	v->m_b6078 = 0;
	v->m_n607c = 0;
	v->m_n6438 = 0;
	v->m_h643c = NULL;
	v->m_n6440 = 0;
	v->m_n6444 = 0;
	v->m_n644c = 0;
	v->m_f6458 = 3.402823466e+38f;
	v->m_h65c0 = NULL;
	v->m_n65c4 = 0;
	v->m_n65c8 = 0;
	e->slot593();
	v->m_f65d0 = -1.0f;
	v->m_f65d4 = -1.0f;
	v->m_f65d8 = -1.0f;
	v->sub_102c54c0();
	v->m_b65f4 = 0;
	v->m_n65fc = 0;
	v->m_n6600 = 0;
	v->m_n6604 = 0;
	v->m_n6608 = 0;
	v->m_b6498 = 0;
	v->m_f64b8 = 1.0f;
	v->m_neb0 = 0;
	v->m_neb4 = 0;
	v->m_neb8 = 0;
	v->m_nebc = 0;

	FindStatList(CVStatListSet::Of(this), 0)->sub_10200be0(0xf, 0);
	CVStatList_t *pList = FindStatList(CVStatListSet::Of(this), 0);
	pList->sub_102008e0(0xc, *(int *)(*(int *)((char *)g_10738d10.sub_101d5f10((CBaseCombatCharacter *)this) + 0xd0) + 0x30));

	v->m_b6494 = 0;
	v->m_f6084 = -1.0f;
	v->m_n609c = 0;
	v->m_n60a0 = 0;
	v->m_f6274 = -1.0f;
	v->sub_1028fb70();
	v->m_n64d4 = g_10924984;
	v->m_he64 = NULL;
	v->m_n5b94 = 0;

	if (v->m_f65dc > g_104454c4)
	{
		v->m_f65dc = gpGlobals->curtime + v->m_f65dc + 4.0f;
		v->sub_102ae7f0(0xfe);
	}
	else
		v->m_f65dc = 0;
}
// END FUNCTION

// FUNCTION: 0x102cc260 size=0x72
#include "CAI_BaseNPCTroika.h"
#include "CUnknown10936b68.h"
extern CUnknown10936b68 g_10936b68;
extern "C" __declspec(dllimport) void Warning(const char *fmt, ...);
inline bool AI_IdIsLocal(int id) { return id < 1000000000 || id == -1; }
int CAI_BaseNPC::vfunc446(int schedule)
{
	if (((CAI_NPCScheduleRef *)((CAI_BaseNPCTroika *)this)->vfunc580())->m_id == -1) {
		Warning("ERROR: %s missing schedule!\n", vfunc451());
		return g_10936b68.sub_1030f300(1);
	}
	if (AI_IdIsLocal(schedule)) {
		CAI_NPCScheduleRef *pSpace = (CAI_NPCScheduleRef *)((CAI_BaseNPCTroika *)this)->vfunc580();
		schedule = pSpace->sub_102ea2d0(schedule);
	}
	return g_10936b68.sub_1030f300(schedule);
}
// END FUNCTION

// FUNCTION: 0x102cc300 size=0x34
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CUnknown10359c50.h"
#include "CUnknown1024a230.h"
extern CUnknown1024a230 g_109203dc;
int CAI_BaseNPC::vfunc458(int condition)
{
	if (condition < 1000000000 || condition == -1) {
		char *p = (char *)((CEntityVSlots *)this)->slot580();
		condition = ((CUnknown10359c50 *)(p + 0x30))->sub_102ea2d0(condition);
	}
	return (int)g_109203dc.sub_102ea020(condition);
}
// END FUNCTION

// FUNCTION: 0x102cc350 size=0x34
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CUnknown10359c50.h"
#include "CUnknown1024a230.h"
extern CUnknown1024a230 g_109203d4;
int CAI_BaseNPC::vfunc449(int condition)
{
	if (condition < 1000000000 || condition == -1) {
		char *p = (char *)((CEntityVSlots *)this)->slot580();
		condition = ((CUnknown10359c50 *)(p + 0x18))->sub_102ea2d0(condition);
	}
	return (int)g_109203d4.sub_102ea020(condition);
}
// END FUNCTION
