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
