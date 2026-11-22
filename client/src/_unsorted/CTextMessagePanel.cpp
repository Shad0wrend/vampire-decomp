// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016a760 size=0x5
#include "CTextMessagePanel.h"
int CTextMessagePanel::vfunc7(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1016a770 size=0x1e
#include "CTextMessagePanel.h"

// VC6 writes CTextMessagePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTextMessagePanel *pcd_emit_1016a770() { return new CTextMessagePanel; }

// TARGET: ??_GCTextMessagePanel@@UAEPAXI@Z
// END FUNCTION
