// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103531c0 size=0x20
#define PCD_INITIALIZERS	// the class as the initializer units see it: its real bases and inline destructor
#include "CVoiceGameMgr.h"

// VC6 writes IVoiceGameMgrHelper's scalar deleting destructor where it emits the class's vtable; its inline
// destructor called in a function nothing calls makes it emit both here
void pcd_emit_103531c0(IVoiceGameMgrHelper *p) { p->IVoiceGameMgrHelper::~IVoiceGameMgrHelper(); }

// TARGET: ??_GIVoiceGameMgrHelper@@UAEPAXI@Z
// END FUNCTION
