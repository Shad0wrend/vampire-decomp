// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10059330 size=0x1e
#include "CHUDSprite.h"

// VC6 writes CHUDSprite's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHUDSprite *pcd_emit_10059330(const CHUDSprite &other) { return new CHUDSprite(other); }

// TARGET: ??_GCHUDSprite@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100f3690 size=0x18
#include "IHudSprite.h"
int CHudSprite::vfunc17(int a0)
{
    int t0 = *(int *)((char *)a0);
    *(int *)((char *)this + 0x24) = t0;
    int t1 = *(int *)((char *)a0 + 4);
    *(int *)((char *)this + 0x28) = t1;
    int t2 = *(int *)((char *)a0 + 8);
    *(int *)((char *)this + 0x2c) = t2;
    return t2;
}
// END FUNCTION

// FUNCTION: 0x100f3950 size=0x26
#include "IHudSprite.h"
struct V3d50 { El3d50 *sub_100f3d50(int); };
// TARGET: ?vfunc4@CHudSprite@@UAEHHH@Z
int CHudSprite::vfunc4(int a, int b)
{
	El3d50 *e = ((V3d50 *)this)->sub_100f3d50(a);
	if (e)
		return sub_100f3e20(e)[1];
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f3980 size=0x25
#include "IHudSprite.h"
struct El3d50;
struct V3d50 { El3d50 *sub_100f3d50(int); };
int CHudSprite::vfunc5(int a, int b)
{
	El3d50 *e = ((V3d50 *)this)->sub_100f3d50(a);
	if (e)
		return *sub_100f3e20(e);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f3a60 size=0x54
#include "IHudSprite.h"

extern int sub_100cd100();
extern int sub_100cd0f0();

// TARGET: CHudSprite::vfunc7
void CHudSprite::vfunc7(int a1, int x, int y, int a4, int a5, int a6)
{
	if (!m_pSprite)
		return;
	if (x >= sub_100cd100())
		return;
	if (y >= sub_100cd0f0())
		return;
	m_pSprite->sub_10136f60(false);
	m_pSprite->sub_10137020(a1, x, y, a4, a5, a6);
}
// END FUNCTION

// FUNCTION: 0x100f3ac0 size=0x54
#include "IHudSprite.h"

extern int sub_100cd100();
extern int sub_100cd0f0();

// TARGET: CHudSprite::vfunc9
void CHudSprite::vfunc9(int a1, int x, int y, int a4, int a5, int a6)
{
	if (!m_pSprite)
		return;
	if (x >= sub_100cd100())
		return;
	if (y >= sub_100cd0f0())
		return;
	m_pSprite->sub_10136f60(false);
	m_pSprite->sub_10137850(a1, x, y, a4, a5, a6);
}
// END FUNCTION

// FUNCTION: 0x100f3b70 size=0x54
#include "IHudSprite.h"

extern int sub_100cd100();
extern int sub_100cd0f0();

// TARGET: CHudSprite::vfunc10
void CHudSprite::vfunc10(int a1, int x, int y, int a4, int a5, int a6)
{
	if (!m_pSprite)
		return;
	if (x >= sub_100cd100())
		return;
	if (y >= sub_100cd0f0())
		return;
	m_pSprite->sub_10136f60(false);
	m_pSprite->sub_10137020(a1, x, y, a4, a5, a6);
}
// END FUNCTION

// FUNCTION: 0x100f3bd0 size=0x4a
#include "IHudSprite.h"

extern int sub_100cd100();
extern int sub_100cd0f0();

// TARGET: CHudSprite::vfunc13
void CHudSprite::vfunc13(int frame, int x, int y, int a3)
{
	if (!m_pSprite)
		return;
	if (x >= sub_100cd100())
		return;
	if (y >= sub_100cd0f0())
		return;
	m_pSprite->sub_10136f60(true);
	m_pSprite->sub_10136ff0(frame, x, y, a3);
}
// END FUNCTION

// FUNCTION: 0x100f3c20 size=0x54
#include "IHudSprite.h"

extern int sub_100cd100();
extern int sub_100cd0f0();

// TARGET: CHudSprite::vfunc12
void CHudSprite::vfunc12(int a1, int x, int y, int a4, int a5, int a6)
{
	if (!m_pSprite)
		return;
	if (x >= sub_100cd100())
		return;
	if (y >= sub_100cd0f0())
		return;
	m_pSprite->sub_10136f60(true);
	m_pSprite->sub_10137020(a1, x, y, a4, a5, a6);
}
// END FUNCTION

// FUNCTION: 0x100f3d10 size=0x3d
#include "IHudSprite.h"
struct SpriteRect4
{
	int l, t, r, b;
};
void CHudSprite::vfunc18(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
	m_unk04 = a1;
	*(SpriteRect4 *)&m_unk08 = *(SpriteRect4 *)&a2;
	m_unk18 = a6;
	m_unk1c = a7;
	m_unk20 = a8;
}
// END FUNCTION

// FUNCTION: 0x100f3d70 size=0x3a
#include "IHudSprite.h"
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
void *__cdecl operator new(unsigned int);
// TARGET: CHudSprite::vfunc0
void CHudSprite::vfunc0()
{
    if (!m_unk30) {
        m_unk04 = 0;
        m_unk34 = 0x80;
        m_unk30 = (int)operator new(0x4800);
        memset((void *)m_unk30, 0, 0x600);
        m_pSprite = 0;
    }
}
// END FUNCTION
