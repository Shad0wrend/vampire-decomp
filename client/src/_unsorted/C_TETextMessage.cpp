// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003fb60 size=0x57
#include "C_TETextMessage.h"
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
C_TETextMessage::C_TETextMessage()
{
	m_a10 = 0; m_a14 = 0; m_a18 = 0; m_a1c = 0;
	m_a2c = 0; m_a28 = 0; m_a24 = 0; m_a20 = 0;
	m_a3c = 0; m_a38 = 0; m_a34 = 0; m_a30 = 0;
	m_a40 = 0; m_a44 = 0; m_a48 = 0; m_a4c = 0;
	memset(m_a50, 0, sizeof(m_a50));
}
// END FUNCTION

// FUNCTION: 0x1003fbc0 size=0x1e
#include "C_TETextMessage.h"

// VC6 writes C_TETextMessage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TETextMessage *pcd_emit_1003fbc0(const C_TETextMessage &other) { return new C_TETextMessage(other); }

// TARGET: ??_GC_TETextMessage@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003fce0 size=0x6
#include "C_TETextMessage.h"
namespace lifted {
extern char g_10281d5c;
}
int C_TETextMessage::vfunc9()
{
    return (int)&lifted::g_10281d5c;
}
// END FUNCTION

// FUNCTION: 0x1003fcf0 size=0x3
#include "C_TETextMessage.h"
int C_TETextMessage::vfunc8()
{
    return 0;
}
// END FUNCTION
