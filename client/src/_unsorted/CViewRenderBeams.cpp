// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10193320 size=0x1e
#include "CViewRenderBeams.h"

// VC6 writes CViewRenderBeams's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CViewRenderBeams *pcd_emit_10193320() { return new CViewRenderBeams; }

// TARGET: ??_GCViewRenderBeams@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10193450 size=0x12
#include "CViewRenderBeams.h"
namespace lifted {
int sub_101d1296(int);
}
void CViewRenderBeams::vfunc1()
{
    if ((*(int *)((char *)this + 0x1bc0c)) != 0) {
        lifted::sub_101d1296(*(int *)((char *)this + 0x1bc0c));
    }
}
// END FUNCTION
