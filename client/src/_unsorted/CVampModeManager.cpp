// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10162320 size=0x1e
#include "CVampModeManager.h"

// VC6 writes CVampModeManager's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVampModeManager *pcd_emit_10162320() { return new CVampModeManager; }

// TARGET: ??_GCVampModeManager@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10162350 size=0x15
#include "CVampModeManager.h"
namespace lifted {
extern int g_104a5824;
extern int g_105f99d8;
int sub_10029490();
int sub_1012c6d0();
}
int CVampModeManager::vfunc0()
{
    lifted::g_105f99d8 = lifted::sub_10029490();
    lifted::g_104a5824 = lifted::sub_1012c6d0();
    return lifted::g_104a5824;
}
// END FUNCTION

// FUNCTION: 0x101623f0 size=0x3
#include "CVampModeManager.h"
void CVampModeManager::vfunc6(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10162400 size=0x3
#include "CVampModeManager.h"
void CVampModeManager::vfunc7(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10162410 size=0x3
#include "CVampModeManager.h"
void CVampModeManager::vfunc2(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10162420 size=0x1
#include "CVampModeManager.h"
void CVampModeManager::vfunc3()
{
}
// END FUNCTION
