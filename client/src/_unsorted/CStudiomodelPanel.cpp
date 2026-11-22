// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1018b250 size=0x1e
#include "CStudiomodelPanel.h"

// VC6 writes CStudiomodelPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CStudiomodelPanel *pcd_emit_1018b250() { return new CStudiomodelPanel; }

// TARGET: ??_GCStudiomodelPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1018be50 size=0x1c
#include "CStudiomodelPanel.h"
namespace lifted {
int sub_101ac8b0();
struct V { virtual void u0(); virtual int f1(int); };
}
void CStudiomodelPanel::vfunc89(int a0)
{
    *(char *)((char *)this + 0x74) = 0;
    *(char *)((char *)this + 0x75) = 0;
    a0 = 0;
    ((lifted::V *)(lifted::sub_101ac8b0()))->f1(a0);
}
// END FUNCTION
