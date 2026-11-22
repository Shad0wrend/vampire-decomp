// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018a450 size=0xb
extern int g_1072a498;
void sub_1018a450(void)
{
	g_1072a498 = 0;
}
// END FUNCTION

// FUNCTION: 0x1018a4b0 size=0x1e
#include "CSkyList.h"

// VC6 writes CSkyList's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSkyList *pcd_emit_1018a4b0() { return new CSkyList; }

// TARGET: ??_GCSkyList@@UAEPAXI@Z
// END FUNCTION
