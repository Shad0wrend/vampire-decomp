// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003f7f0 size=0x39
#include "C_TESpriteSpray.h"
// TARGET: ??0C_TESpriteSpray@@QAE@XZ
C_TESpriteSpray::C_TESpriteSpray()
{
	m_vecOrigin.Init();
	m_vecDirection.Init();
	m_nModelIndex = 0;
	m_nSpeed = 0;
	m_fNoise = 0;
	m_nCount = 0;
}
// END FUNCTION

// FUNCTION: 0x1003f830 size=0x1e
#include "C_TESpriteSpray.h"

// VC6 writes C_TESpriteSpray's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TESpriteSpray *pcd_emit_1003f830(const C_TESpriteSpray &other) { return new C_TESpriteSpray(other); }

// TARGET: ??_GC_TESpriteSpray@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003f910 size=0x6
#include "C_TESpriteSpray.h"
namespace lifted {
extern char g_10281b54;
}
int C_TESpriteSpray::vfunc9()
{
    return (int)&lifted::g_10281b54;
}
// END FUNCTION

// FUNCTION: 0x1003f920 size=0x3
#include "C_TESpriteSpray.h"
int C_TESpriteSpray::vfunc8()
{
    return 0;
}
// END FUNCTION
