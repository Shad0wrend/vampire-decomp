// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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

// FUNCTION: 0x1026ae90 size=0x6
int sub_1026ae90(void)
{
    return 7;
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

// FUNCTION: 0x1026e5c0 size=0xd
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc477
extern int g_105c97dc[];

void CAI_BaseNPC::vfunc477()
{
	sub_10269bd0(g_105c97dc, 0xe);
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

// FUNCTION: 0x1027a7c0 size=0x6
extern void *g_105c9814;

void *sub_1027a7c0(void)
{
    return &g_105c9814;
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

// FUNCTION: 0x1027c2e0 size=0x3
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc452
#include "vampire.h"

bool CAI_BaseNPC::vfunc452()
{
    return true;
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

// FUNCTION: 0x10280fb0 size=0x1
// TARGET: sub_10280fb0
void sub_10280fb0()
{
}
// END FUNCTION

// FUNCTION: 0x10280fd0 size=0x1
#include "CAI_BaseNPC.h"
// TARGET: CAI_BaseNPC::vfunc411
void CAI_BaseNPC::vfunc411() {
}
// END FUNCTION

// FUNCTION: 0x10288710 size=0x4e
#include "CAI_BaseNPCTroika.h"
#include "CUnknown102e83e0.h"
void __fastcall sub_102e8250(float *pThis);
void CAI_BaseNPC::vfunc445()
{
	CAI_BaseNPCTroika *pNPC = (CAI_BaseNPCTroika *)this;
	if (vfunc529()) {
		if (pNPC->vfunc575()) {
			vfunc419();
			((CUnknown102e83e0 *)((char *)this + 0x5cf4))->sub_102e8270(*(int *)&pNPC->m_f5bbc, *(int *)&pNPC->m_f5bc0);
		} else {
			sub_102e8250((float *)((char *)this + 0x5cf4));
		}
	}
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

// FUNCTION: 0x102cc080 size=0x11c
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
extern void (*g_109f3658)(int level, const char *pFormat, ...);
extern char g_105ce0d4[];

// The virtual view of slot 440 (the placeholders keep the slot numbers right).
struct SchedView
{
    CAI_NPC_V10(0) CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
    CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19)
    CAI_NPC_V10(20) CAI_NPC_V10(21) CAI_NPC_V10(22) CAI_NPC_V10(23) CAI_NPC_V10(24) CAI_NPC_V10(25) CAI_NPC_V10(26) CAI_NPC_V10(27) CAI_NPC_V10(28) CAI_NPC_V10(29)
    CAI_NPC_V10(30) CAI_NPC_V10(31) CAI_NPC_V10(32) CAI_NPC_V10(33) CAI_NPC_V10(34) CAI_NPC_V10(35) CAI_NPC_V10(36) CAI_NPC_V10(37) CAI_NPC_V10(38) CAI_NPC_V10(39)
    CAI_NPC_V10(40) CAI_NPC_V10(41) CAI_NPC_V10(42) CAI_NPC_V10(43)
    virtual int vfunc440(int schedule);
};

struct CineView
{
    char pad[0x5f60];
    int m_nMoveTo;
};

inline CineView *ResolveHandle(unsigned int h)
{
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (h >> 13))
            return (CineView *)pSlot->m_pEntity;
    }
    return 0;
}

int CAI_BaseNPC::vfunc440(int schedule)
{
    if (schedule == 0x2e) {
        CAI_BaseNPCTroika *pNPC = (CAI_BaseNPCTroika *)this;
        const unsigned int *ph = &pNPC->m_h5d74;
        SchedView *pView = (SchedView *)this;
        if (!ResolveHandle(pNPC->m_h5d74)) {
            g_109f3658(2, g_105ce0d4, ((CBaseEntity *)this)->sub_1009f200());
            sub_1027d170();
            return pView->vfunc440(1);
        }
        switch (ResolveHandle(*ph)->m_nMoveTo) {
        case 0:
        case 4:
            return pView->vfunc440(0x32);
        case 1:
            return pView->vfunc440(0x2f);
        case 2:
            return pView->vfunc440(0x30);
        case 3:
            return pView->vfunc440(0x31);
        case 5:
            return pView->vfunc440(0x33);
        }
    }
    return schedule;
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
