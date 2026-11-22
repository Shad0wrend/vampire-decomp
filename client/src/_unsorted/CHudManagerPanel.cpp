// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100586e0 size=0x1e
#include "CHudManagerPanel.h"

// VC6 writes CHudManagerPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudManagerPanel *pcd_emit_100586e0() { return new CHudManagerPanel; }

// TARGET: ??_GCHudManagerPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10058e60 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C10057960 { int sub_10057960(); };
}
int CHudManagerPanel::vfunc10()
{
    return ((lifted::C10057960 *)(*(int *)((char *)this + 4)))->sub_10057960();
}
// END FUNCTION

// FUNCTION: 0x10058e70 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C100577f0 { int sub_100577f0(); };
}
int CHudManagerPanel::vfunc9()
{
    return ((lifted::C100577f0 *)(*(int *)((char *)this + 4)))->sub_100577f0();
}
// END FUNCTION

// FUNCTION: 0x10058e80 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C10057900 { int sub_10057900(); };
}
int CHudManagerPanel::vfunc24()
{
    return ((lifted::C10057900 *)(*(int *)((char *)this + 4)))->sub_10057900();
}
// END FUNCTION

// FUNCTION: 0x10058e90 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C10057840 { int sub_10057840(); };
}
int CHudManagerPanel::vfunc23()
{
    return ((lifted::C10057840 *)(*(int *)((char *)this + 4)))->sub_10057840();
}
// END FUNCTION

// FUNCTION: 0x10058ea0 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C100578a0 { int sub_100578a0(); };
}
int CHudManagerPanel::vfunc25()
{
    return ((lifted::C100578a0 *)(*(int *)((char *)this + 4)))->sub_100578a0();
}
// END FUNCTION

// FUNCTION: 0x10058eb0 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C100579c0 { int sub_100579c0(); };
}
int CHudManagerPanel::vfunc12()
{
    return ((lifted::C100579c0 *)(*(int *)((char *)this + 4)))->sub_100579c0();
}
// END FUNCTION

// FUNCTION: 0x10058ec0 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C10057a20 { int sub_10057a20(); };
}
int CHudManagerPanel::vfunc11()
{
    return ((lifted::C10057a20 *)(*(int *)((char *)this + 4)))->sub_10057a20();
}
// END FUNCTION

// FUNCTION: 0x10058ed0 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C10057a50 { int sub_10057a50(); };
}
int CHudManagerPanel::vfunc13()
{
    return ((lifted::C10057a50 *)(*(int *)((char *)this + 4)))->sub_10057a50();
}
// END FUNCTION

// FUNCTION: 0x10058ee0 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C10057ab0 { int sub_10057ab0(); };
}
int CHudManagerPanel::vfunc14()
{
    return ((lifted::C10057ab0 *)(*(int *)((char *)this + 4)))->sub_10057ab0();
}
// END FUNCTION

// FUNCTION: 0x10058ef0 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C10057b10 { int sub_10057b10(); };
}
int CHudManagerPanel::vfunc15()
{
    return ((lifted::C10057b10 *)(*(int *)((char *)this + 4)))->sub_10057b10();
}
// END FUNCTION

// FUNCTION: 0x10058f00 size=0x8
#include "CHudManagerPanel.h"
namespace lifted {
struct C10057d40 { int sub_10057d40(); };
}
int CHudManagerPanel::vfunc16()
{
    return ((lifted::C10057d40 *)(*(int *)((char *)this + 4)))->sub_10057d40();
}
// END FUNCTION
