// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10353160 size=0x5
#include "CVoiceGameMgr.h"

// TARGET: CVoiceGameMgrHelper::vfunc1
bool CVoiceGameMgrHelper::vfunc1(int a, int b)
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x103531f0 size=0x20
#define PCD_INITIALIZERS	// the class as the initializer units see it: its real bases and inline destructor
#include "CVoiceGameMgr.h"

// VC6 writes CVoiceGameMgrHelper's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVoiceGameMgrHelper *pcd_emit_103531f0() { return new CVoiceGameMgrHelper; }

// TARGET: ??_GCVoiceGameMgrHelper@@UAEPAXI@Z
// END FUNCTION
