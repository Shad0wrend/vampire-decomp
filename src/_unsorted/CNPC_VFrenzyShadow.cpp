// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103751e0 size=0x5
#include "CNPC_VFrenzyShadow.h"
#include "CBaseCombatCharacter.h"

// TARGET: CNPC_VFrenzyShadow::vfunc362
// the game's 0x103751e0: a tail call (jmp) of CBaseCombatCharacter::vfunc362
char CNPC_VFrenzyShadow::vfunc362(float const *a0)
{
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc362(a0);
}
// END FUNCTION

// FUNCTION: 0x10375200 size=0x5
#include "CNPC_VFrenzyShadow.h"
#include "CBaseCombatCharacter.h"

// TARGET: CNPC_VFrenzyShadow::vfunc365
// the game's 0x10375200: a tail call (jmp) of CBaseCombatCharacter::vfunc365
int CNPC_VFrenzyShadow::vfunc365(CBaseEntity *a0)
{
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc365(a0);
}
// END FUNCTION

// FUNCTION: 0x10375220 size=0x5
#include "CNPC_VFrenzyShadow.h"
#include "CBaseCombatCharacter.h"

// TARGET: CNPC_VFrenzyShadow::vfunc364
// the game's 0x10375220: a tail call (jmp) of CBaseCombatCharacter::vfunc364
bool CNPC_VFrenzyShadow::vfunc364(Vector const *a0)
{
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc364(a0);
}
// END FUNCTION

// FUNCTION: 0x10375240 size=0x6
#include "CNPC_VFrenzyShadow.h"
namespace lifted {
extern char g_1093ae48;
}
int CNPC_VFrenzyShadow::vfunc580()
{
    return (int)&lifted::g_1093ae48;
}
// END FUNCTION

// FUNCTION: 0x10375260 size=0x6
#include "CNPC_VFrenzyShadow.h"
namespace lifted {
extern int g_10637b4c;
}
int CNPC_VFrenzyShadow::vfunc451()
{
    return lifted::g_10637b4c;
}
// END FUNCTION

// FUNCTION: 0x10375280 size=0x6
#include "CNPC_VFrenzyShadow.h"
#include "datamap.h"
namespace lifted {
extern char g_10637aa8;
}
datamap_t *CNPC_VFrenzyShadow::vfunc82()
{
    return (datamap_t *)&lifted::g_10637aa8;
}
// END FUNCTION

// FUNCTION: 0x103753e0 size=0x6
extern unsigned char g_10637b44;
// TARGET: sub_103753e0
unsigned char sub_103753e0()
{
    return g_10637b44;
}
// END FUNCTION

// FUNCTION: 0x10375440 size=0x1d
#include "CNPC_VFrenzyShadow.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093ae28;
extern B g_10936c74;
int CNPC_VFrenzyShadow::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093ae28.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10375c30 size=0x5
#include "CNPC_VFrenzyShadow.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VFrenzyShadow::vfunc375
// the game's 0x10375c30: a tail call (jmp) of CNPC_VHuman::vfunc375
int CNPC_VFrenzyShadow::vfunc375(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc375(a0);
}
// END FUNCTION

// FUNCTION: 0x10375c50 size=0x15
#include "CNPC_VFrenzyShadow.h"
#include "CNPC_VPlayerController.h"

struct CUnk1026dc00 {
    char pad[0x5cec];
    unsigned int m_5cec;
    unsigned int sub_1026dc00(unsigned int flags);
};

void CNPC_VFrenzyShadow::vfunc103()
{
    ((CUnk1026dc00 *)this)->sub_1026dc00(0x200000);
    ((CNPC_VPlayerController *)this)->CNPC_VPlayerController::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x10375d70 size=0x6
#include "CNPC_VFrenzyShadow.h"
int CNPC_VFrenzyShadow::vfunc138()
{
    return 3;
}
// END FUNCTION

// FUNCTION: 0x10375e50 size=0x53
#include "CBaseEntity.h"
#include "CNPC_VFrenzyShadow.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CFrenzyShadowTarget
{
	S100(a0) S100(a1)
	S10(b0)
	virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13(); virtual void b14(); virtual void b15(); virtual void b16();
	virtual int vfunc217();
};

void CNPC_VFrenzyShadow::vfunc431()
{
	sub_103a4700();
	CBaseEntity *pTarget = vfunc167();
	if (m_nState5cc0 == 2 && pTarget && !sub_10014df8(0x46))
		vfunc544(pTarget, ((CFrenzyShadowTarget *)pTarget)->vfunc217(), (int)((char *)pTarget + 0x3d4));
}
// END FUNCTION

// FUNCTION: 0x10375ed0 size=0x32
#include "CNPC_VFrenzyShadow.h"
#include "CAI_BaseNPCTroika.h"

struct CUnknown10924a6c { virtual void vfunc0(); virtual void vfunc1(); };
extern CUnknown10924a6c *g_10924a6c;
void __fastcall sub_10013f2f(void *self);

void CNPC_VFrenzyShadow::vfunc433()
{
    sub_10013f2f(this);
    if (m_n6664 > 1) {
        g_10924a6c->vfunc1();
        ((CAI_BaseNPCTroika *)this)->sub_100041b0(0x79);
        return;
    }
    ((CAI_BaseNPCTroika *)this)->sub_10015839(0x79);
}
// END FUNCTION

// FUNCTION: 0x10375f20 size=0x1f
#include "CNPC_VHuman.h"
#include "CNPC_VFrenzyShadow.h"

// TARGET: CNPC_VFrenzyShadow::vfunc440
void CNPC_VFrenzyShadow::vfunc440(int a)
{
    if (((CAI_BaseNPCTroika *)this)->sub_102b11c0(a) == 0)
    {
        ((CNPC_VHuman *)this)->vfunc440(a);
    }
}
// END FUNCTION

// FUNCTION: 0x103766d0 size=0x319
#include "CNPC_VFrenzyShadow.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CUnknown102e0150.h"
#include "S1030fc90.h"

struct FsNode { char pad24[0x24]; EHANDLE m_hEnt; char pad28[0x38 - 0x28]; FsNode *m_pNext; };

// TARGET: CNPC_VFrenzyShadow::vfunc478
CBaseEntity *CNPC_VFrenzyShadow::vfunc478()
{
	CBaseEntity *pOwner = (*(EHANDLE *)((char *)this + 0x60ac)).Get();
	int target;
	if (!pOwner)
		target = 0;
	else
		target = *(int *)((char *)pOwner + 0xa8);
	if (m_n6664 > 1) {
		CBaseEntity *pCur = vfunc167();
		if (pCur) {
			CBaseEntity *pChar = (CBaseEntity *)pCur->m_p9c;
			if (pChar && !(pChar->sub_100b3700() & 0x8000) && *((char *)pChar + 0x1480)
				&& ((CEntityVSlots *)pChar)->slot158()
				&& ((CEntityVSlots *)pChar)->slot404((void *)target) == 1
				&& !((CEntityVSlots *)this)->slot541()->sub_102e0210((int)pChar)
				&& !((CEntityVSlots *)this)->slot530((CEntityVSlots *)pChar))
				return pCur;
		}
	}
	CBaseEntity *pBest = 0;
	int bestDist = 0x10000000;
	int bestScore = 0;
	m_n6664 = 0;
	for (FsNode *pNode = *(FsNode **)((char *)((CEntityVSlots *)this)->slot541() + 0xc); pNode; pNode = pNode->m_pNext) {
		CBaseEntity *pEnt = pNode->m_hEnt.Get();
		if (!pEnt)
			continue;
		CBaseEntity *pChar = (CBaseEntity *)pEnt->m_p9c;
		if (!pChar || (pChar->sub_100b3700() & 0x8000) || !*((char *)pChar + 0x1480) || !((CEntityVSlots *)pChar)->slot158())
			continue;
		if (((CEntityVSlots *)this)->slot541()->sub_102e0210((int)pChar))
			continue;
		int score = 0;
		if (!((CEntityVSlots *)this)->slot530((CEntityVSlots *)pChar))
			score = 0x40000000;
		if (((CEntityVSlots *)pChar)->slot404((void *)target) == 1) {
			score += 0x20000000;
			m_n6664++;
		}
		if (((S1030fc90 *)m_pSenses)->sub_1030fb10((int)pChar) || vfunc201(pChar, 0x2804091, 0, 0))
			score += 0x10000000;
		score += ((CEntityVSlots *)this)->slot405(pChar) << 24;
		if (score > bestScore) {
			if (vfunc479(pChar)) {
				Vector *pMine = ((CEntityVSlots *)this)->slot217();
				Vector *pOther = ((CEntityVSlots *)pChar)->slot217();
				float dx = pOther->x - pMine->x;
				float dy = pOther->y - pMine->y;
				float dz = pOther->z - pMine->z;
				bestDist = (int)(dx * dx + dy * dy + dz * dz);
				pBest = pChar;
				bestScore = score;
			}
		} else if (score == bestScore) {
			Vector *pMine = ((CEntityVSlots *)this)->slot217();
			Vector *pOther = ((CEntityVSlots *)pChar)->slot217();
			float dx = pOther->x - pMine->x;
			float dy = pOther->y - pMine->y;
			float dz = pOther->z - pMine->z;
			int dist = (int)(dx * dx + dy * dy + dz * dz);
			if (dist < bestDist && vfunc479(pChar)) {
				bestDist = dist;
				pBest = pChar;
				bestScore = score;
			}
		}
	}
	if (pBest != vfunc167())
		m_b6668 = 0;
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x10376ae0 size=0x20
#include "CNPC_VFrenzyShadow.h"
#define P10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();

struct CFrenzyTargetView {
	P10(p0) P10(p1) P10(p2) P10(p3) P10(p4) P10(p5) P10(p6) P10(p7) P10(p8) P10(p9)
	P10(p10) P10(p11) P10(p12) P10(p13)
	virtual void p140(); virtual void p141();
	virtual void vfunc142(int a);
};

// TARGET: CNPC_VFrenzyShadow::vfunc142
int CNPC_VFrenzyShadow::vfunc142(int a)
{
	CFrenzyTargetView *e = (CFrenzyTargetView *)vfunc97();
	if (e)
		e->vfunc142(a);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10376b10 size=0x24
#define P10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();

struct CUnk10376b10Obj {
	P10(p0) P10(p1) P10(p2) P10(p3) P10(p4) P10(p5) P10(p6) P10(p7) P10(p8) P10(p9)
	P10(p10) P10(p11) P10(p12) P10(p13) P10(p14) P10(p15) P10(p16) P10(p17) P10(p18) P10(p19)
	P10(p20) P10(p21) P10(p22) P10(p23) P10(p24) P10(p25) P10(p26) P10(p27) P10(p28) P10(p29)
	P10(p30) P10(p31) P10(p32) P10(p33) P10(p34) P10(p35) P10(p36) P10(p37) P10(p38)
	virtual void vfunc390(int a);
};

struct CUnk10376b10Ent {
	char m_pad0000[0x9c];
	CUnk10376b10Obj *m_9c;
};

// Local view of the vtable: slot 97 gives the entity, slot 390 of its +0x9c object is the virtual call.
struct CUnk10376b10 {
	P10(p0) P10(p1) P10(p2) P10(p3) P10(p4) P10(p5) P10(p6) P10(p7) P10(p8)
	virtual void p90(); virtual void p91(); virtual void p92(); virtual void p93(); virtual void p94(); virtual void p95(); virtual void p96();
	virtual CUnk10376b10Ent *vfunc97();
	int sub_10376b10(int a);
};

// TARGET: CUnk10376b10::sub_10376b10
int CUnk10376b10::sub_10376b10(int a)
{
	CUnk10376b10Ent *e = vfunc97();
	if (e)
		e->m_9c->vfunc390(a);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10376b50 size=0x3
#include "CNPC_VFrenzyShadow.h"
void CNPC_VFrenzyShadow::vfunc144(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10376b70 size=0x1a
#include "CNPC_VFrenzyShadow.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;
char CNPC_VFrenzyShadow::sub_10376b70(int unused)
{
	g_10924edc->b();
	return m_b6078 = 1;
}
// END FUNCTION

// FUNCTION: 0x10376ba0 size=0x17
#include "CNPC_VFrenzyShadow.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;
bool CNPC_VFrenzyShadow::sub_10376ba0(int unused)
{
	m_b6078 = 1;
	g_10924edc->b();
	return true;
}
// END FUNCTION

// FUNCTION: 0x10376bd0 size=0xe
#include "CNPC_VFrenzyShadow.h"
struct CUnknown10924edc
{
	virtual void slot0();
	virtual void slot1();
};
extern CUnknown10924edc *g_10924edc;

void CNPC_VFrenzyShadow::vfunc601(int unused)
{
	g_10924edc->slot1();
}
// END FUNCTION

// FUNCTION: 0x10376bf0 size=0x3
#include "CNPC_VFrenzyShadow.h"
bool CNPC_VFrenzyShadow::vfunc602()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10376f20 size=0x1e
#include "CNPC_VFrenzyShadow.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VFrenzyShadow::vfunc5
CNPC_VFrenzyShadow *CNPC_VFrenzyShadow::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
