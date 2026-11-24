// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c8a60 size=0x1e
#include "C_VampSP_GameRules.h"

// VC6 writes C_VampSP_GameRules's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_VampSP_GameRules *pcd_emit_100c8a60() { return new C_VampSP_GameRules; }

// TARGET: ??_GC_VampSP_GameRules@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100c8a90 size=0x39
#include "C_VampSP_GameRules.h"
struct Obj484 { char pad[0x484]; Obj484 *sub_100792b0(); };
int sub_100c8810(Obj484 *);
// TARGET: C_VampSP_GameRules::vfunc7
int C_VampSP_GameRules::vfunc7()
{
  Obj484 *p = (Obj484 *)operator new(0x484);
  Obj484 *&slot = *(Obj484 **)((char *)this + 4);
  slot = p ? p->sub_100792b0() : 0;
  return sub_100c8810(slot);
}
// END FUNCTION
