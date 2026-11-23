// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d1510 size=0x1
#include "CClientLeafSystem.h"
void CClientLeafSystem::vfunc22()
{
}
// END FUNCTION

// FUNCTION: 0x100d1520 size=0x1
#include "CClientLeafSystem.h"
void CClientLeafSystem::vfunc23()
{
}
// END FUNCTION

// FUNCTION: 0x100d1770 size=0xd
#include "CClientLeafSystem.h"
bool CClientLeafSystem::vfunc15(char a0)
{
    *(char *)((char *)this + 0xd8) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x100d1780 size=0xd
#include "CClientLeafSystem.h"
bool CClientLeafSystem::vfunc16(char a0)
{
    *(char *)((char *)this + 0xd9) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x100d2a10 size=0x25
#include "CClientLeafSystem.h"
namespace lifted {
struct C100d2800 { int sub_100d2800(int, int, int); };
struct C100d28a0 { int sub_100d28a0(int); };
}
int CClientLeafSystem::vfunc10(int a0, int a1, int a2)
{
    ((lifted::C100d28a0 *)this)->sub_100d28a0(a0);
    return ((lifted::C100d2800 *)this)->sub_100d2800(a0, a1, a2);
}
// END FUNCTION
