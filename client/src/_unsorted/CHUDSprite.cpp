// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10059330 size=0x1e
#include "CHUDSprite.h"

// VC6 writes CHUDSprite's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHUDSprite *pcd_emit_10059330(const CHUDSprite &other) { return new CHUDSprite(other); }

// TARGET: ??_GCHUDSprite@@UAEPAXI@Z
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
