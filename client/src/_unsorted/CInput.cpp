// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1002a1e0 size=0x7
#include "CInput.h"
float CInput::vfunc50()
{
    return *(float *)((char *)this + 0x138);
}
// END FUNCTION

// FUNCTION: 0x1002a1f0 size=0x7
#include "CInput.h"
float CInput::vfunc51()
{
    return *(float *)((char *)this + 0xfc);
}
// END FUNCTION

// FUNCTION: 0x1002a200 size=0x7
#include "CInput.h"
float CInput::vfunc52()
{
    return *(float *)((char *)this + 0x100);
}
// END FUNCTION

// FUNCTION: 0x100ff7c0 size=0x14
#include "CInput.h"
namespace lifted {
extern char g_104d2700;
struct C100dfa90 { int sub_100dfa90(int); };
}
int CInput::vfunc34()
{
    *(char *)((char *)this + 0xf0) = 1;
    return ((lifted::C100dfa90 *)((int)&lifted::g_104d2700))->sub_100dfa90(0);
}
// END FUNCTION

// FUNCTION: 0x100ff900 size=0x8
#include "CInput.h"
void CInput::vfunc37()
{
    *(char *)((char *)this + 0xf8) = 1;
}
// END FUNCTION

// FUNCTION: 0x100ff910 size=0x8
#include "CInput.h"
void CInput::vfunc38()
{
    *(char *)((char *)this + 0xf8) = 0;
}
// END FUNCTION

// FUNCTION: 0x100ff920 size=0x8
#include "CInput.h"
void CInput::vfunc39()
{
    *(char *)((char *)this + 0xf9) = 1;
}
// END FUNCTION

// FUNCTION: 0x100ff930 size=0x8
#include "CInput.h"
void CInput::vfunc40()
{
    *(char *)((char *)this + 0xf9) = 0;
}
// END FUNCTION

// FUNCTION: 0x100ff940 size=0x7
#include "CInput.h"
bool CInput::vfunc48()
{
    return *(bool *)((char *)this + 0x1b8);
}
// END FUNCTION

// FUNCTION: 0x100ff9d0 size=0x1
#include "CInput.h"
void CInput::vfunc41()
{
}
// END FUNCTION

// FUNCTION: 0x100ff9e0 size=0xf
#include "CInput.h"
int CInput::vfunc42()
{
    *(int *)((char *)this + 0xf4) = 0;
    *(int *)((char *)this + 0xec) = 0;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ff9f0 size=0x1
#include "CInput.h"
void CInput::vfunc43()
{
}
// END FUNCTION

// FUNCTION: 0x100ffaf0 size=0x7
#include "CInput.h"
float CInput::vfunc53()
{
    return *(float *)((char *)this + 0x104);
}
// END FUNCTION

// FUNCTION: 0x100ffd10 size=0x7
#include "CInput.h"
int CInput::vfunc45()
{
    return *(int *)((char *)this + 0xec);
}
// END FUNCTION

// FUNCTION: 0x10101da0 size=0x7
#include "CInput.h"
int CInput::vfunc56()
{
    return *(int *)((char *)this + 0x1c4);
}
// END FUNCTION

// FUNCTION: 0x10103310 size=0x3
#include "CInput.h"
void CInput::vfunc8(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10105f20 size=0x8
#include "CInput.h"
void CInput::vfunc54()
{
    *(char *)((char *)this + 0xe4) = 1;
}
// END FUNCTION
