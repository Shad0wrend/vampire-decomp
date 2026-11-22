// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010e540 size=0x1e
#include "CHudMessage.h"

// VC6 writes CHudMessage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudMessage *pcd_emit_1010e540() { return new CHudMessage; }

// TARGET: ??_GCHudMessage@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1010e560 size=0x35
#include "CHudMessage.h"
namespace lifted {
extern char g_1010e4c0;
extern char g_1010e4f0;
extern char g_10281d54;
extern char g_102bec5c;
extern int g_104a57d4;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual int f7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual int f29(int, int); };
}
void CHudMessage::vfunc1()
{
    ((lifted::V *)lifted::g_104a57d4)->f29((int)&lifted::g_10281d54, (int)&lifted::g_1010e4c0);
    ((lifted::V *)lifted::g_104a57d4)->f29((int)&lifted::g_102bec5c, (int)&lifted::g_1010e4f0);
    ((lifted::V *)this)->f7();
}
// END FUNCTION
