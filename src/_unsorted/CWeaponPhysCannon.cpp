// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040dc70 size=0xc
char __fastcall sub_1040dc70(char *self)
{
	return self[0x911] == 0;
}
// END FUNCTION

// FUNCTION: 0x1040dcd0 size=0xe
#include "CWeaponPhysCannon.h"
// TARGET: CWeaponPhysCannon::vfunc291
void CWeaponPhysCannon::vfunc291()
{
	vfunc307(0xbc);
}
// END FUNCTION

// FUNCTION: 0x1040e620 size=0x7b
#include "CWeaponPhysCannon.h"
#include "CUnknown10739d08.h"

struct CGlobalVarsView
{
	char m_pad0000[0xc];
	float curtime;
};
extern CGlobalVarsView *g_1070b228;
extern CUnknown10739d08 g_10739d08;

struct CPhysCannonView
{
	char m_pad0000[0x730];
	float m_flNextTime;
	char m_pad0734[0x911 - 0x734];
	char m_bActive;
};

struct CPhysCannonOwner
{
	char m_pad0000[0xa8];
	void *m_pCharacter;
};

struct CPhysCannonCharacter
{
	void sub_100b7fa0(Vector *pOut, int a, int b);	// stub 0x1000cb8f
};

// TARGET: CWeaponPhysCannon::vfunc326
void CWeaponPhysCannon::vfunc326()
{
	CPhysCannonView *v = (CPhysCannonView *)this;
	if (v->m_flNextTime > g_1070b228->curtime)
		return;
	CPhysCannonOwner *pOwner = (CPhysCannonOwner *)sub_102521f0();
	if (!pOwner)
		return;
	CPhysCannonCharacter *pChar = (CPhysCannonCharacter *)pOwner->m_pCharacter;
	if (!pChar || !v->m_bActive)
		return;
	Vector vecPos;
	pChar->sub_100b7fa0(&vecPos, 0, 0);
	sub_10410bf0(&vecPos, g_10739d08.sub_101e8640(pChar));
	vfunc307(0xc0);
}
// END FUNCTION

// FUNCTION: 0x10410ae0 size=0xd0
#include "CWeaponPhysCannon.h"
#include "CBaseCombatCharacter.h"
#include "CGlobalEntityList.h"
#define PV(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define PV100(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
struct PlayerSlots
{
    PV100(a0) PV100(a1) PV100(a2) PV100(a3) PV(a40) PV(a41) PV(a42) PV(a43) PV(a44)
    virtual void a450(); virtual void a451(); virtual void a452(); virtual void a453(); virtual void a454(); virtual void a455();
    virtual void vfunc456();
};
extern CGlobalEntityList *g_10566458;
extern char g_1055f6bc[];
void CWeaponPhysCannon::vfunc319()
{
    char *pOwner = (char *)sub_102521f0();
    char *pPlayer = pOwner ? *(char **)(pOwner + 0xa8) : 0;
    if (!pPlayer) {
        *(int *)((char *)this + 0x91c) = 0;
        return;
    }
    if (*(char *)(pPlayer + 0x2088) & 1)
        vfunc326();
    else
        vfunc321();
    unsigned int h = *(unsigned int *)((char *)this + 0xab8);
    if (h != -1) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        if (s->m_Serial == (h >> 13) && s->m_pEntity)
            return;
    }
    bool valid = false;
    if (*(unsigned int *)(pPlayer + 0xea4) != -1) {
        unsigned int h2 = *(unsigned int *)(pPlayer + 0xea4);
        CGlobalEntityList_Slot *s2 = &g_10566458->m_Slots[h2 & 0x1fff];
        valid = s2->m_Serial == (h2 >> 13) && s2->m_pEntity;
    }
    if (!valid) {
        CBaseEntity *pWeapon = (CBaseEntity *)((CBaseCombatCharacter *)pPlayer)->sub_10335950(g_1055f6bc);
        if (pWeapon)
            *(unsigned int *)(pPlayer + 0xea4) = *pWeapon->vfunc1();
        else
            *(unsigned int *)(pPlayer + 0xea4) = -1;
    }
    ((PlayerSlots *)pPlayer)->vfunc456();
}
// END FUNCTION
