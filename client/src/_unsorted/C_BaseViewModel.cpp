// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1007f6d0 size=0x3
#include "C_BaseViewModel.h"
int C_BaseViewModel::vfunc86()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007f6f0 size=0x1e
#include "C_BaseViewModel.h"

// VC6 writes C_BaseViewModel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseViewModel *pcd_emit_1007f6f0() { return new C_BaseViewModel; }

// TARGET: ??_GC_BaseViewModel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1007f7b0 size=0x1
#include "C_BaseViewModel.h"
void C_BaseViewModel::vfunc21()
{
}
// END FUNCTION

// FUNCTION: 0x100ab500 size=0x3
#include "C_BaseViewModel.h"
bool C_BaseViewModel::vfunc142()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100ab510 size=0x12
#include "C_BaseViewModel.h"
namespace lifted {
int sub_100ab2b0(int, int);
}
int C_BaseViewModel::vfunc139(int a0)
{
    return lifted::sub_100ab2b0(a0, 1);
}
// END FUNCTION
