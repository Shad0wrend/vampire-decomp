// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10139d20 size=0x1e
#include "CHudTextMessage.h"

// VC6 writes CHudTextMessage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudTextMessage *pcd_emit_10139d20() { return new CHudTextMessage; }

// TARGET: ??_GCHudTextMessage@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10139d40 size=0x32
#include "CHudTextMessage.h"
namespace lifted {
extern char g_10139cd0;
extern char g_102b931c;
extern char g_102c5f08;
extern int g_104a57d4;
extern char g_104cfe38;
struct C100f0ed0 { int sub_100f0ed0(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual int f7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual int f29(int, int); };
}
void CHudTextMessage::vfunc1()
{
    ((lifted::V *)lifted::g_104a57d4)->f29((int)&lifted::g_102c5f08, (int)&lifted::g_10139cd0);
    *(int *)((char *)this + 0x10) = ((lifted::C100f0ed0 *)((int)&lifted::g_104cfe38))->sub_100f0ed0((int)&lifted::g_102b931c);
    ((lifted::V *)this)->f7();
}
// END FUNCTION
