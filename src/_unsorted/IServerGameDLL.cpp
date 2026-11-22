// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10119ff0 size=0x20
#define PCD_INITIALIZERS	// the class as the initializer units see it: its real bases and inline destructor
#include "CServerGameDLL.h"

// VC6 writes IServerGameDLL's scalar deleting destructor where it emits the class's vtable; its inline
// destructor called in a function nothing calls makes it emit both here
void pcd_emit_10119ff0(IServerGameDLL *p) { p->IServerGameDLL::~IServerGameDLL(); }

// TARGET: ??_GIServerGameDLL@@UAEPAXI@Z
// END FUNCTION
