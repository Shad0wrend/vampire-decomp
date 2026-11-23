// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003da50 size=0x37
#include "C_TEMuzzleFlash.h"
// TARGET: ??0C_TEMuzzleFlash@@QAE@XZ
C_TEMuzzleFlash::C_TEMuzzleFlash()
{
	m_vecOrigin.Init();
	m_vecDirection.Init();
	m_flScale = 1.0f;
	m_unk2c = 0;
}
// END FUNCTION

// FUNCTION: 0x1003da90 size=0x1e
#include "C_TEMuzzleFlash.h"

// VC6 writes C_TEMuzzleFlash's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEMuzzleFlash *pcd_emit_1003da90(const C_TEMuzzleFlash &other) { return new C_TEMuzzleFlash(other); }

// TARGET: ??_GC_TEMuzzleFlash@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003db10 size=0x6
#include "C_TEMuzzleFlash.h"
namespace lifted {
extern char g_10280e2c;
}
int C_TEMuzzleFlash::vfunc9()
{
    return (int)&lifted::g_10280e2c;
}
// END FUNCTION

// FUNCTION: 0x1003db20 size=0x3
#include "C_TEMuzzleFlash.h"
int C_TEMuzzleFlash::vfunc8()
{
    return 0;
}
// END FUNCTION
