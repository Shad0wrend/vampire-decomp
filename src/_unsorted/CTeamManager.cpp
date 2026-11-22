// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102307e0 size=0x28
#include "CTeamManager.h"

// VC6 writes CTeamManager's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTeamManager *pcd_emit_102307e0() { return new CTeamManager; }

// TARGET: ??_GCTeamManager@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10230820 size=0x8
#include "CTeamManager.h"
namespace lifted {
struct C10010785 { int sub_10010785(); };
}
void CTeamManager::vfunc2()
{
    ((lifted::C10010785 *)&m_symbols)->sub_10010785();
}
// END FUNCTION

// FUNCTION: 0x10230840 size=0x5
#include "CTeamManager.h"
struct CUnknown102308f0 { int sub_102308f0(); };
// TARGET: CTeamManager::vfunc3
// the game's 0x10230840: a tail call (jmp) of CUnknown102308f0::sub_102308f0
void CTeamManager::vfunc3()
{
	((CUnknown102308f0 *)this)->CUnknown102308f0::sub_102308f0();
}
// END FUNCTION

// FUNCTION: 0x10230860 size=0x8
#include "CTeamManager.h"
namespace lifted {
struct C10010785 { int sub_10010785(); };
}
void CTeamManager::vfunc5()
{
    ((lifted::C10010785 *)&m_symbols)->sub_10010785();
}
// END FUNCTION
