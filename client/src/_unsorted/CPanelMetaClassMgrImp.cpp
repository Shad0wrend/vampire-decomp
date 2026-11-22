// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101105e0 size=0x1e
#include "CPanelMetaClassMgrImp.h"

// VC6 writes CPanelMetaClassMgrImp's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPanelMetaClassMgrImp *pcd_emit_101105e0() { return new CPanelMetaClassMgrImp; }

// TARGET: ??_GCPanelMetaClassMgrImp@@UAEPAXI@Z
// END FUNCTION
