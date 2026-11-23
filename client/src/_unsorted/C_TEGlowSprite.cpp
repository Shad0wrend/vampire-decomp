// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10038620 size=0x30
#include "C_TEGlowSprite.h"
C_TEGlowSprite::C_TEGlowSprite()
{
	m_vecOrigin.Init(0, 0, 0);
	m_vecDir.Init(0, 0, 0);
	m_unk28 = 0;
}
// END FUNCTION

// FUNCTION: 0x10038650 size=0x1e
#include "C_TEGlowSprite.h"

// VC6 writes C_TEGlowSprite's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEGlowSprite *pcd_emit_10038650(const C_TEGlowSprite &other) { return new C_TEGlowSprite(other); }

// TARGET: ??_GC_TEGlowSprite@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10038760 size=0x6
#include "C_TEGlowSprite.h"
namespace lifted {
extern char g_1027fc1c;
}
int C_TEGlowSprite::vfunc9()
{
    return (int)&lifted::g_1027fc1c;
}
// END FUNCTION

// FUNCTION: 0x10038770 size=0x3
#include "C_TEGlowSprite.h"
int C_TEGlowSprite::vfunc8()
{
    return 0;
}
// END FUNCTION
