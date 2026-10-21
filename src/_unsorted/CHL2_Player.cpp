// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034f330 size=0x27
#include "CHL2_Player.h"

CHL2_Player::CHL2_Player()
{
	m_n2528 = 0;
}
// END FUNCTION

// FUNCTION: 0x1034f3d0 size=0xd
struct HL2PlayerField2464 { char pad[0x2464]; int m; };
void CHL2_Player::vfunc475(int value)
{
	((HL2PlayerField2464 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x1034f430 size=0xd
struct HL2PlayerFloats { char pad[0x2534]; float a; float b; };
float CHL2_Player::vfunc480()
{
	HL2PlayerFloats *p = (HL2PlayerFloats *)this;
	return p->a - p->b;
}
// END FUNCTION

// FUNCTION: 0x1034f450 size=0xd
struct HL2PlayerFloats { char pad[0x2534]; float a; float b; };
float CHL2_Player::vfunc481()
{
	HL2PlayerFloats *p = (HL2PlayerFloats *)this;
	return p->b - p->a;
}
// END FUNCTION

// FUNCTION: 0x1034f4b0 size=0x1e
#include "CHL2_Player.h"

void sub_100aa7b0(void *p);

// TARGET: CHL2_Player::vfunc5
CHL2_Player *CHL2_Player::vfunc5(unsigned int flags)
{
	sub_100140f1();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10351390 size=0x73
#include "CHL2_Player.h"
#include "CBasePlayer.h"
#include "CUnknown1015ef20.h"

void CHL2_Player::vfunc103()
{
	*((char *)this + 0x2544) = 0;
	int flags;
	if (((CUnknown1015ef20 *)this)->sub_1015eec0() && !sub_1015ef80()) {
		vfunc408();
		flags = *(int *)((char *)this + 0x19c) & ~0x20;
	} else {
		vfunc407();
		flags = *(int *)((char *)this + 0x19c) | 0x20;
	}
	*(int *)((char *)this + 0x19c) = flags;
	sub_1016d260();
	*(int *)((char *)this + 0x1c6c) = 0;
	if (vfunc406())
		((CBasePlayer *)this)->vfunc103();
}
// END FUNCTION

// FUNCTION: 0x10351430 size=0xa3
#include "CHL2_Player.h"

struct SCollisionSlots
{
	virtual void v0();
	virtual int GetMins();	// slot 1
	virtual int GetMaxs();	// slot 2
};

struct SPlayerObject
{
	virtual void v0();
	virtual void v1();
	virtual void v2(const char *p);
};

int sub_1002dfe0(int a, int b);
void __fastcall sub_100132c8(CHL2_Player *self);
extern char g_1093827c[];

void CHL2_Player::vfunc468()
{
	sub_100132c8(this);
	if (*(int *)((char *)this + 0x2104) == 0 && *(int *)((char *)this + 0x2108) == 0) {
		SCollisionSlots *pCollision = (SCollisionSlots *)((char *)this + 0x270);
		int mins = pCollision->GetMins();
		int maxs = pCollision->GetMaxs();
		sub_1002dfe0(mins, maxs);
		float hullMins[3];
		float hullMaxs[3];
		hullMaxs[0] = 16.0f;
		hullMaxs[1] = 16.0f;
		hullMaxs[2] = 36.0f;
		hullMins[0] = -16.0f;
		hullMins[1] = -16.0f;
		hullMins[2] = 0.0f;
		sub_1002dfe0((int)hullMins, (int)hullMaxs);
		SPlayerObject *pObj = *(SPlayerObject **)((char *)this + 0x2100);
		if (pObj)
			pObj->v2(g_1093827c);
	}
}
// END FUNCTION

// FUNCTION: 0x103528d0 size=0x70
#include "CHL2_Player.h"
struct Globals { char pad[0x10]; float frametime; };
extern Globals *g_1070b228;

void CHL2_Player::vfunc472()
{
    if (vfunc479()) {
        vfunc474(g_1070b228->frametime * 4.2);
    } else if (m_n252c != 0) {
        if (!vfunc473(m_f2530 * g_1070b228->frametime)) {
            if (vfunc445() != 0)
                vfunc447();
        }
    }
}
// END FUNCTION
